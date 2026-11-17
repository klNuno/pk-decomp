#!/usr/bin/env python3
"""Write the link inputs for the current mix of C and assembly.

  tools/link.py REGION C_OBJECTS...

Reads splat's asm/<region>/text_*.s and linker/<region>/pk.ld. For every function a C object defines
(sections .text.<name>, from tools/cc.py), it drops that function from the assembly. It writes
build/<region>/gen/text_*.s, where each run of consecutive assembly functions sits in a section
.text.run_<ADDR>, and build/<region>/pk.ld, which places every run and every C function at its retail
address, with an ASSERT per C function after the SECTIONS block. A gen file is rewritten only when its content changes.
"""
import glob
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cc  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
VRAM = 0x100000
INSN = re.compile(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/")


def parse_chunk(path):
    """(header lines, [(name, addr, size, lines)]) of a splat text file."""
    head, funcs, cur = [], [], None
    for line in open(path, encoding="utf-8"):
        m = re.match(r"nonmatching (\S+), (0x[0-9A-Fa-f]+)", line)
        if m:
            cur = [m.group(1), None, int(m.group(2), 16), [line]]
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
    for f in funcs:
        if f[1] is None:
            raise SystemExit(f"{path}: no address for {f[0]}")
    return head, [tuple(f) for f in funcs]


def c_functions(objs):
    out = {}
    for obj in objs:
        elf = cc.Elf(open(obj, "rb").read())
        for i, name, s in elf.sections():
            if name.startswith(".text."):
                fn = name[len(".text."):]
                if fn in out:
                    raise SystemExit(f"{fn} defined in {out[fn][0]} and {obj}")
                out[fn] = (obj, s[5])
    return out


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
    seen, entries = set(), {}
    for path in chunks:
        chunk = os.path.basename(path)[:-2]
        head, funcs = parse_chunk(path)
        out, items, run = list(head), [], None
        for name, addr, size, lines in funcs:
            if name in cfuncs:
                seen.add(name)
                obj, csize = cfuncs[name]
                if csize > size:
                    raise SystemExit(f"{name}: C is 0x{csize:X} bytes, the retail function 0x{size:X}")
                items.append((addr, f"{obj}(.text.{name})", name))
                run = None
                continue
            if run is None:
                run = f"run_{addr:08X}"
                out.append(f'\n.section .text.{run}, "ax"\n')
                items.append((addr, f"{build}/gen/{chunk}.s.o(.text.{run})", None))
            out.extend(lines)
        write_if_changed(f"{ROOT}/{build}/gen/{chunk}.s", "".join(out))
        entries[chunk] = items
    missing = set(cfuncs) - seen
    if missing:
        raise SystemExit("C functions with no retail asm: " + ", ".join(sorted(missing)))
    ld, asserts = [], []
    for line in open(f"{ROOT}/linker/{region}/pk.ld", encoding="utf-8"):
        m = re.match(rf"(\s*){build}/asm/{region}/(text_\w+)\.s\.o\((\.\w+)\);", line)
        if not m:
            ld.append(line)
            continue
        indent, chunk, sect = m.groups()
        if sect != ".text":
            ld.append(f"{indent}{build}/gen/{chunk}.s.o({sect});\n")
            continue
        for addr, inp, cname in entries[chunk]:
            ld.append(f"{indent}. = 0x{addr - VRAM:X};\n{indent}{inp};\n")
            if cname:
                asserts.append(f'ASSERT({cname} == 0x{addr:X}, "{cname} is not at 0x{addr:X}");\n')
    write_if_changed(f"{ROOT}/{build}/pk.ld", "".join(ld + asserts))


if __name__ == "__main__":
    main()
