#!/usr/bin/env python3
"""Match one function in isolation, built exactly like the game (tools/cc.py, config/mwcc_profiles.txt).

  tools/fmatch.py diff FUNC FILE.c [--profile NAME] [--extra "FLAGS"] [--all]
      Compile FILE.c, link FUNC alone at its retail address against every symbol of the executable,
      compare the bytes with the retail executable. Prints "MATCH FUNC 100%" (exit 0), or the percent
      and the differing rows (exit 1). A compile error, missing function or data prints why (exit 2).
  tools/fmatch.py asm FUNC     write FUNC's asm to build/fmatch/FUNC/target.s and print its path
  tools/fmatch.py m2c FUNC     first C draft from m2c (mipsee), with include/common.h as context
  tools/fmatch.py info FUNC    address, size, chunk, src path to use, callers count

FUNC is a name from the asm (func_XXXXXXXX or a symbol_addrs name). Work files go to build/fmatch/FUNC/.
Relocations are resolved by the link, so a wrong symbol, a gp-relative access where the retail uses
%hi/%lo (an extern of 8 bytes or less is small data: declare it as an array or a struct) or a wrong
callee all show as differences. A 100 % here is necessary, not sufficient: only `make check` decides.
"""
import argparse
import difflib
import glob
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import cc  # noqa: E402
import link  # noqa: E402

REGION = os.environ.get("REGION", "eu")
EXE = {"eu": "SLES_507.73", "us": "SLUS_204.78"}[REGION]
VRAM, FILEOFF = 0x100000, 0x80
BIN = os.path.join(ROOT, "tools/bin")
GP = 0x367370


def run(cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, **kw)


def index():
    """{name: (chunk, addr, size)} and {name: addr} of every label, cached against the asm dates."""
    cache = os.path.join(ROOT, f"build/{REGION}/fmatch_index.json")
    srcs = sorted(glob.glob(f"{ROOT}/asm/{REGION}/text_*.s") + glob.glob(f"{ROOT}/asm/{REGION}/data/*.s")
                  + glob.glob(f"{ROOT}/linker/{REGION}/undefined_*.txt"))
    stamp = max(os.path.getmtime(p) for p in srcs + [os.path.abspath(__file__)])
    if os.path.exists(cache) and os.path.getmtime(cache) >= stamp:
        d = json.load(open(cache))
        return d["funcs"], d["syms"]
    funcs, syms = {}, {}
    for path in srcs:
        if "/text_" in path:
            chunk = os.path.basename(path)[:-2]
            for name, addr, size, lines in link.parse_chunk(path)[1]:
                funcs[name] = (chunk, addr, size)
        cur = None
        for line in open(path, encoding="utf-8"):
            m = re.match(r"\s*(?:glabel|dlabel|jlabel|alabel)\s+(\S+)", line)
            if m:
                cur = m.group(1)
                continue
            m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+);", line)
            if m:
                syms[m.group(1)] = int(m.group(2), 16)
                continue
            if cur:
                m = re.match(r"\s+/\* (?:[0-9A-F]+ )?([0-9A-F]{8}) ", line)
                if m:
                    syms[cur] = int(m.group(1), 16)
                    cur = None
    os.makedirs(os.path.dirname(cache), exist_ok=True)
    json.dump({"funcs": funcs, "syms": syms}, open(cache, "w"))
    return funcs, syms


def retail(addr, size):
    with open(os.path.join(ROOT, f"extract/{REGION}/{EXE}"), "rb") as f:
        f.seek(addr - VRAM + FILEOFF)
        return f.read(size)


def work_dir(func):
    d = os.path.join(ROOT, "build/fmatch", func)
    os.makedirs(d, exist_ok=True)
    return d


def cmd_asm(a):
    funcs, _ = index()
    if a.func not in funcs:
        sys.exit(f"no function {a.func} in asm/{REGION}/text_*.s")
    chunk, addr, size = funcs[a.func]
    head, fs = link.parse_chunk(f"{ROOT}/asm/{REGION}/{chunk}.s")
    lines = next(f[3] for f in fs if f[0] == a.func)
    out = os.path.join(work_dir(a.func), "target.s")
    open(out, "w").write("".join(head) + "".join(lines))
    print(os.path.relpath(out, ROOT))
    return 0


def cmd_info(a):
    funcs, syms = index()
    if a.func not in funcs:
        sys.exit(f"no function {a.func}")
    chunk, addr, size = funcs[a.func]
    callers = 0
    for p in glob.glob(f"{ROOT}/asm/{REGION}/text_*.s"):
        callers += len(re.findall(rf"\b(?:jal|j)\s+{a.func}\b", open(p).read()))
    print(f"{a.func} 0x{addr:08X} size 0x{size:X} chunk {chunk} src src/{chunk}/{a.func}.c callers {callers}")
    return 0


def cmd_m2c(a):
    cmd_asm_quiet = os.path.join(work_dir(a.func), "target.s")
    funcs, _ = index()
    chunk, addr, size = funcs[a.func]
    head, fs = link.parse_chunk(f"{ROOT}/asm/{REGION}/{chunk}.s")
    open(cmd_asm_quiet, "w").write("".join(head) + "".join(next(f[3] for f in fs if f[0] == a.func)))
    ctx = os.path.join(work_dir(a.func), "ctx.c")
    r = run(["bash", "-c", f"cpp -P -undef -DM2CTX -Iinclude include/common.h > {ctx}"])
    if r.returncode:
        sys.exit(f"context failed: {r.stderr}")
    r = run([os.path.join(ROOT, ".venv/bin/python"), "tools/src/m2c/m2c.py", "-t", "mipsee-gcc-c",
             "--context", ctx, cmd_asm_quiet])
    print(r.stdout, end="")
    print(r.stderr, end="", file=sys.stderr)
    return r.returncode


def disasm(data, addr, names):
    path = os.path.join(ROOT, "build/fmatch", "_dis.bin")
    open(path, "wb").write(data)
    r = run([f"{BIN}/mipsel-linux-gnu-objdump", "-D", "-b", "binary", "-m", "mips:5900", "-EL",
             f"--adjust-vma=0x{addr:X}", path])
    rows = []
    for line in r.stdout.splitlines():
        m = re.match(r"\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)", line)
        if not m:
            continue
        text = re.sub(r"\s+", " ", m.group(3).split("<")[0].strip())
        text = re.sub(r"\b0x([0-9a-f]{5,8})\b", lambda h: names.get(int(h.group(1), 16), "0x" + h.group(1)), text)
        rows.append((int(m.group(2), 16), text))
    return rows


def cmd_diff(a):
    funcs, syms = index()
    if a.func not in funcs:
        print(f"no function {a.func} in asm/{REGION}/text_*.s")
        return 2
    chunk, addr, size = funcs[a.func]
    work = work_dir(a.func)
    obj = os.path.join(work, "base.o")
    args = [os.path.join(ROOT, ".venv/bin/python"), "-I", "tools/cc.py", os.path.abspath(a.cfile), obj]
    if a.profile:
        args += ["--profile", a.profile]
    if a.extra:
        args += ["--extra", a.extra]
    r = run(args)
    if r.returncode:
        print(("COMPILE ERROR\n" if r.returncode == 2 else "") + (r.stdout + r.stderr).strip())
        return 2
    sections = {n: s for i, n, s in cc.Elf(open(obj, "rb").read()).sections()}
    if ".text." + a.func not in sections:
        print(f"NO FUNCTION {a.func} in {a.cfile} (sections: {', '.join(n for n in sections if n.startswith('.text.'))})")
        return 2
    csize = sections[".text." + a.func][5]
    # Link FUNC alone at its address; every other symbol is an absolute address from the asm.
    defined = {n for n, v, sz, typ, bind, ndx in cc.Elf(open(obj, "rb").read()).symbols() if n and ndx}
    ld = [f"_gp = 0x{GP:X};"]
    ld += [f"{n} = 0x{v:X};" for n, v in sorted(syms.items()) if n not in defined and "." not in n]
    ld += ["SECTIONS {", f"  .text 0x{addr:X} : {{ *(.text.{a.func}) }}", "  /DISCARD/ : { *(*) }", "}"]
    script = os.path.join(work, "link.ld")
    open(script, "w").write("\n".join(ld) + "\n")
    elf, out = os.path.join(work, "base.elf"), os.path.join(work, "base.bin")
    r = run([f"{BIN}/mipsel-linux-gnu-ld", "-nostdlib", "--no-check-sections", "-T", script, "-o", elf, obj])
    if r.returncode:
        print("LINK ERROR\n" + r.stderr.strip())
        if "GPREL16" in r.stderr:
            print("hint: the retail reaches that symbol with %hi/%lo, not $gp: an extern of 8 bytes or less is "
                  "small data for -sdatathreshold 8; declare it as an array (extern T x[];) or inside a struct")
        return 2
    run([f"{BIN}/mipsel-linux-gnu-objcopy", "-O", "binary", "--only-section=.text", elf, out])
    mine = open(out, "rb").read()
    target = retail(addr, size)
    pad = target[len(mine):]
    if mine == target[:len(mine)] and not any(pad):
        print(f"MATCH {a.func} 100%")
        return 0
    tbody = target.rstrip(b"\0")
    tbody = target[:max(len(mine), len(tbody) + (-len(tbody) % 4))]
    names = {v: n for n, v in syms.items() if "." not in n}
    names.update({addr: a.func})
    trows, mrows = disasm(tbody, addr, names), disasm(mine, addr, names)
    sm = difflib.SequenceMatcher(a=[t for _, t in trows], b=[t for _, t in mrows], autojunk=False)
    same = sum(b.size for b in sm.get_matching_blocks())
    pct = 100.0 * same / max(len(trows), len(mrows), 1)
    print(f"{a.func} {pct:.2f}%  (target 0x{len(tbody):X} bytes, yours 0x{csize:X})")
    rows = []
    for op, i1, i2, j1, j2 in sm.get_opcodes():
        if op == "equal":
            rows += [(" ", trows[i], mrows[j]) for i, j in zip(range(i1, i2), range(j1, j2))]
            continue
        n = max(i2 - i1, j2 - j1)
        for k in range(n):
            t = trows[i1 + k] if i1 + k < i2 else (0, "")
            m = mrows[j1 + k] if j1 + k < j2 else (0, "")
            mark = "<" if not m[1] else ">" if not t[1] else (
                "r" if t[1].split()[0] == m[1].split()[0] else "|")
            rows.append((mark, t, m))
    show = set(range(len(rows))) if a.all else {
        j for i, r in enumerate(rows) if r[0] != " " for j in range(i - 2, i + 3) if 0 <= j < len(rows)}
    print(f"  {'target':<44} yours")
    last = -1
    for i in sorted(show):
        if i != last + 1:
            print("  ...")
        m, t, y = rows[i]
        print(f"{m} {t[1]:<44} {y[1]}")
        last = i
    return 1


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("diff")
    d.add_argument("func")
    d.add_argument("cfile")
    d.add_argument("--profile")
    d.add_argument("--extra", default="")
    d.add_argument("--all", action="store_true")
    for name in ("asm", "m2c", "info"):
        sub.add_parser(name).add_argument("func")
    a = p.parse_args()
    sys.exit({"diff": cmd_diff, "asm": cmd_asm, "m2c": cmd_m2c, "info": cmd_info}[a.cmd](a))


if __name__ == "__main__":
    main()
