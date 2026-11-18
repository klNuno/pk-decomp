#!/usr/bin/env python3
"""Write the link inputs for the current mix of C and assembly.

  tools/link.py REGION C_OBJECTS...

Reads splat's asm/<region>/text_*.s, asm/<region>/data/*.data.s and linker/<region>/pk.ld. For every
function a C object defines (sections .text.<name>, from tools/cc.py), it drops that function from the
assembly; for every jump table section .rodata.<name>, it drops the jtbl_ blocks the function's
assembly reads. It writes build/<region>/gen/text_*.s and gen/data/*.data.s, where each run of
consecutive assembly blocks sits in a section .text.run_<ADDR> or .data.run_<ADDR>, and
build/<region>/pk.ld, which places every run, C function and jump table at its retail address, with an
ASSERT per C function after the SECTIONS block. A gen file is rewritten only when its content changes.
"""
import glob
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cc  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
VRAM = 0x100000
INSN = re.compile(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8})(?: [0-9A-F]+)? \*/")
JTBL = re.compile(r"%hi\((jtbl_[0-9A-F]{8})\)")


def parse_chunk(path):
    """(header lines, [(name, addr, size, lines)]) of a splat text or data file. Data blocks carry no
    size: theirs runs to the next block (None for the last one)."""
    head, funcs, cur = [], [], None
    for line in open(path, encoding="utf-8"):
        m = re.match(r"nonmatching (\S+)(?:, (0x[0-9A-Fa-f]+))?\s*$", line)
        if m:
            cur = [m.group(1), None, int(m.group(2), 16) if m.group(2) else None, [line]]
            funcs.append(cur)
            continue
        if cur is None:
            head.append(line)
            continue
        cur[3].append(line)
        if cur[1] is None:
            m = INSN.match(line)
            if m:
                cur[1] = int(m.group(1), 16)
    for k, f in enumerate(funcs):
        if f[1] is None:
            raise SystemExit(f"{path}: no address for {f[0]}")
        if f[2] is None and k + 1 < len(funcs):
            f[2] = funcs[k + 1][1] - f[1] if funcs[k + 1][1] is not None else None
    return head, [tuple(f) for f in funcs]


def c_functions(objs):
    """{name: (obj, text size, jump table size or 0)} for every .text.<name> of the C objects."""
    out, tables = {}, {}
    for obj in objs:
        elf = cc.Elf(open(obj, "rb").read())
        for i, name, s in elf.sections():
            if name.startswith(".text."):
                fn = name[len(".text."):]
                if fn in out:
                    raise SystemExit(f"{fn} defined in {out[fn][0]} and {obj}")
                out[fn] = (obj, s[5])
            elif name.startswith(".rodata."):
                tables[name[len(".rodata."):]] = s[5]
    return {fn: (obj, size, tables.get(fn, 0)) for fn, (obj, size) in out.items()}


def split(path, out_path, sect, flags, cut, build):
    """Write out_path from a splat file without the blocks in `cut` ({name: (input, label)}), each run
    of kept blocks in its own section; return [(addr, linker input, label or None)] in address order."""
    head, blocks = parse_chunk(path)
    out, items, run = list(head), [], None
    gen = os.path.relpath(out_path, ROOT)
    for name, addr, size, lines in blocks:
        if name in cut:
            inp, label = cut[name]
            if inp:
                items.append((addr, inp, label))
            run = None
            continue
        if run is None:
            run = f"run_{addr:08X}"
            out.append(f'\n.section {sect}.{run}, "{flags}"\n')
            items.append((addr, f"{gen}.o({sect}.{run})", None))
        out.extend(lines)
    write_if_changed(out_path, "".join(out))
    return items


def write_if_changed(path, text):
    if os.path.exists(path) and open(path, encoding="utf-8").read() == text:
        return
    os.makedirs(os.path.dirname(path), exist_ok=True)
    open(path, "w", encoding="utf-8").write(text)


def main():
    region, objs = sys.argv[1], sys.argv[2:]
    build = f"build/{region}"
    cfuncs = c_functions(objs)
    chunks = sorted(glob.glob(f"{ROOT}/asm/{region}/text_*.s"))
    datas = sorted(glob.glob(f"{ROOT}/asm/{region}/data/*.data.s"))
    seen, entries, data_cut, tables = set(), {}, {}, {}
    for path in chunks:
        cut = {}
        for name, addr, size, lines in parse_chunk(path)[1]:
            if name not in cfuncs:
                continue
            seen.add(name)
            obj, csize, tsize = cfuncs[name]
            if csize > size:
                raise SystemExit(f"{name}: C is 0x{csize:X} bytes, the retail function 0x{size:X}")
            cut[name] = (f"{obj}(.text.{name})", name)
            if tsize:
                refs = sorted(set(JTBL.findall("".join(lines))))
                if not refs:
                    raise SystemExit(f"{name}: C has a jump table, the retail function reads none")
                tables[name] = (obj, tsize, refs)
        chunk = os.path.basename(path)[:-2]
        entries[chunk] = split(path, f"{ROOT}/{build}/gen/{chunk}.s", ".text", "ax", cut, build)
    missing = set(cfuncs) - seen
    if missing:
        raise SystemExit("C functions with no retail asm: " + ", ".join(sorted(missing)))
    blocks = {}
    for path in datas:
        for name, addr, size, lines in parse_chunk(path)[1]:
            blocks[name] = (addr, size)
    for fn, (obj, tsize, refs) in tables.items():
        span = sorted(blocks[r] for r in refs)
        for (a, s), (b, _) in zip(span, span[1:]):
            if a + s != b:
                raise SystemExit(f"{fn}: its jump tables are not contiguous in the data asm")
        start, end = span[0][0], span[-1][0] + span[-1][1]
        if tsize > end - start:
            raise SystemExit(f"{fn}: C jump tables are 0x{tsize:X} bytes, the retail ones 0x{end - start:X}")
        data_cut[refs[0]] = (f"{obj}(.rodata.{fn})", None)
        for r in refs[1:]:
            data_cut[r] = (None, None)
    for path in datas:
        name = os.path.basename(path)[:-2]
        cut = {k: v for k, v in data_cut.items() if k in {b[0] for b in parse_chunk(path)[1]}}
        entries["data/" + name] = split(path, f"{ROOT}/{build}/gen/data/{name}.s", ".data", "wa", cut, build)
    ld, asserts = [], []
    for line in open(f"{ROOT}/linker/{region}/pk.ld", encoding="utf-8"):
        m = re.match(rf"(\s*){build}/asm/{region}/((?:data/)?\w+(?:\.data)?)\.s\.o\((\.\w+)\);", line)
        if not m or m.group(2) not in entries:
            ld.append(line)
            continue
        indent, chunk, sect = m.groups()
        if sect != (".data" if chunk.startswith("data/") else ".text"):
            ld.append(f"{indent}{build}/gen/{chunk}.s.o({sect});\n")
            continue
        for addr, inp, cname in entries[chunk]:
            ld.append(f"{indent}. = 0x{addr - VRAM:X};\n{indent}{inp};\n")
            if cname:
                asserts.append(f'ASSERT({cname} == 0x{addr:X}, "{cname} is not at 0x{addr:X}");\n')
    write_if_changed(f"{ROOT}/{build}/pk.ld", "".join(ld + asserts))


if __name__ == "__main__":
    main()
