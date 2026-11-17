#!/usr/bin/env python3
"""Give functions their names: add them to config/<region>/symbol_addrs.txt and rename them in src/.

  tools/names.py apply PROPOSALS.tsv [--confidence high] [--region eu] [--dry-run]
  tools/names.py rename OLD NEW [--region eu]

PROPOSALS.tsv is the output of `tools/gcxref.py match`: ps2_addr, current_name, proposed_name,
evidence, detail, confidence, gc_addr, gc_demangled. Each name lands in symbol_addrs.txt with its
evidence in the comment: the kind, the GameCube address and, for a call-graph match, the caller
(names only: the strings themselves stay out of the repository). A name already given to another
address, an address already named, or a non-identifier is refused. A function already in src/
that gets a C++ (mangled) name is left for later, since a C file cannot define it.

src/ follows: the file defining the function is renamed, and every reference to the old name in
src/ and include/ is rewritten. Run `make split` afterwards (alone), then `make check`.
"""
import argparse
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
LINE = re.compile(r"^\s*(\w+)\s*=\s*0x([0-9A-Fa-f]+)\s*;")


def symbol_file(region):
    return os.path.join(ROOT, "config", region, "symbol_addrs.txt")


def existing(region):
    names, addrs = {}, {}
    for line in open(symbol_file(region)):
        m = LINE.match(line)
        if m:
            names[m.group(1)] = int(m.group(2), 16)
            addrs[int(m.group(2), 16)] = m.group(1)
    return names, addrs


def src_files():
    return glob.glob(f"{ROOT}/src/**/*.c*", recursive=True) + glob.glob(f"{ROOT}/include/**/*.h", recursive=True)


def defined_in_src():
    out = {}
    for path in glob.glob(f"{ROOT}/src/**/*.c*", recursive=True):
        out[os.path.splitext(os.path.basename(path))[0]] = path
    return out


def rename_src(old, new, files):
    pat = re.compile(rf"\b{re.escape(old)}\b")
    for path in files:
        text = open(path, encoding="utf-8").read()
        if pat.search(text):
            open(path, "w", encoding="utf-8").write(pat.sub(new, text))
    defs = defined_in_src()
    if old in defs:
        path = defs[old]
        os.rename(path, os.path.join(os.path.dirname(path), new + os.path.splitext(path)[1]))


def evidence(kind, detail, gc_addr):
    if kind == "callgraph":
        m = re.search(r"callee (\d+/\d+) of func_[0-9A-F]{8}=(\w+)", detail)
        return f"gc {gc_addr}, callee {m.group(1)} of {m.group(2)}" if m else f"gc {gc_addr}, call graph"
    return f"gc {gc_addr}, " + {"string": "same strings", "selfname": "its own message names it",
                               "table": "same function table record", "const": "same rare constants",
                               "order": "link order between matched neighbours"}.get(kind, kind)


def apply(a):
    names, addrs = existing(a.region)
    in_src = defined_in_src()
    rows = [ln.rstrip("\n").split("\t") for ln in open(a.proposals)][1:]
    levels = {"high": ["high"], "medium": ["high", "medium"], "low": ["high", "medium", "low"]}[a.confidence]
    add, skipped = [], []
    for row in rows:
        addr_s, cur, new, kind, detail, conf, gc_addr = row[:7]
        addr = int(addr_s, 16)
        if conf not in levels:
            continue
        why = None
        if not IDENT.match(new):
            why = "not an identifier"
        elif new in names and names[new] != addr:
            why = f"name already at 0x{names[new]:X}"
        elif addr in addrs:
            why = f"address already named {addrs[addr]}"
        elif cur in in_src and "__" in new.strip("_"):
            why = "C++ name for a function already in C"
        if why:
            skipped.append((cur, new, why))
            continue
        names[new], addrs[addr] = addr, new
        add.append((cur, new, addr, evidence(kind, detail, gc_addr)))
    for cur, new, why in skipped:
        print(f"skip {cur} -> {new}: {why}")
    print(f"{len(add)} names to apply, {len(skipped)} skipped")
    if a.dry_run or not add:
        return
    with open(symbol_file(a.region), "a") as f:
        for cur, new, addr, ev in sorted(add, key=lambda x: x[2]):
            f.write(f"{new} = 0x{addr:X}; // type:func  {ev}\n")
    files = src_files()
    for cur, new, addr, ev in add:
        rename_src(cur, new, files)
        files = src_files()


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    ap = sub.add_parser("apply")
    ap.add_argument("proposals")
    ap.add_argument("--confidence", default="high", choices=["high", "medium", "low"])
    ap.add_argument("--region", default="eu")
    ap.add_argument("--dry-run", action="store_true")
    rp = sub.add_parser("rename")
    rp.add_argument("old")
    rp.add_argument("new")
    rp.add_argument("--region", default="eu")
    a = p.parse_args()
    if a.cmd == "apply":
        apply(a)
    else:
        if not IDENT.match(a.new):
            sys.exit(f"{a.new}: not an identifier")
        rename_src(a.old, a.new, src_files())


if __name__ == "__main__":
    main()
