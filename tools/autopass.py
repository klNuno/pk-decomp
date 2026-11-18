#!/usr/bin/env python3
"""Mechanical first pass: m2c drafts that already match, written straight into src/.

  tools/autopass.py LIST [--jobs 3] [--profiles opt,o0] [--out src] [--log FILE]

LIST holds one function name per line (first column; select.py batch files work). For each function:
m2c (--valid-syntax), rewrite its macros into plain C (M2C_FIELD -> a cast at an offset, M2C_UNK
callees -> void), compile with each profile (the select.py hint first) through tools/fmatch.py, keep
the first 100 % as src/<chunk>/<func>.c. A variant without m2c's stack copies of the arguments (the
-O0 "sp0 = arg0") is tried too. Functions m2c cannot decompile are skipped. One line per function
goes to the log: name, match|miss|skip, profile or best percent.
"""
import argparse
import concurrent.futures as cf
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PY = os.path.join(ROOT, ".venv/bin/python")
sys.path.insert(0, os.path.join(ROOT, "tools"))


def run(cmd):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)


def close_paren(s, i):
    depth = 0
    for j in range(i, len(s)):
        depth += {"(": 1, ")": -1}.get(s[j], 0)
        if depth == 0:
            return j
    raise ValueError("unbalanced")


def split_args(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
            continue
        depth += {"(": 1, ")": -1}.get(ch, 0)
        cur += ch
    out.append(cur.strip())
    return out


def wrapped(e):
    """True when e is one parenthesised group, like (*(s32 *)((u8 *)p + 4))."""
    return e.startswith("(") and close_paren(e, 0) == len(e) - 1


def rewrite_fields(c):
    """M2C_FIELD(e, T *, off) -> *(T *)((u8 *)e + off), innermost first."""
    while True:
        i = c.rfind("M2C_FIELD(")
        if i < 0:
            return c
        j = close_paren(c, i + len("M2C_FIELD"))
        expr, typ, off = split_args(c[i + len("M2C_FIELD("):j])
        base = expr if re.fullmatch(r"\w+", expr) or wrapped(expr) else f"({expr})"
        c = c[:i] + f"(*({typ})((u8 *){base} + {off}))" + c[j + 1:]


def strip_outer(c):
    """`return (X);` and `= (X);` lose the parentheses around a whole X."""
    out, k = [], 0
    for m in re.finditer(r"(?:return |= )\(", c):
        start = m.end() - 1
        if start < k:
            continue
        end = close_paren(c, start)
        if c[end + 1:end + 2] == ";":
            out.append(c[k:start] + c[start + 1:end])
            k = end + 1
    return "".join(out) + c[k:]


def clean(draft):
    c = re.sub(r"/\*.*?\*/", "", draft, flags=re.S)
    c = re.sub(r"^\s*M2C_UNK\s+(\w+\s*\()", r"void \1", c, flags=re.M)
    c = rewrite_fields(c)
    if re.search(r"M2C_|\?|saved_reg|unaligned|\bgoto\b", c):
        return None
    c = strip_outer(c)
    c = re.sub(r"[ \t]+$", "", c, flags=re.M)
    c = re.sub(r"\{\n\n+", "{\n", c)
    c = re.sub(r"\{\n\}", "{\n}", c)
    c = re.sub(r"\n{3,}", "\n\n", c).strip() + "\n"
    return c


def drop_stack_copies(c):
    """m2c names the -O0 home copies of arguments spN: `void *sp0; sp0 = arg0;` -> use arg0."""
    for var, arg in re.findall(r"^\s*(sp[0-9A-F]+) = (arg\d+);\n", c, re.M):
        c = re.sub(rf"^\s*{var} = {arg};\n", "", c, flags=re.M)
        c = re.sub(rf"^\s*[\w ]+\*?\s*{var};\n", "", c, flags=re.M)
        c = re.sub(rf"\b{var}\b", arg, c)
    return re.sub(r"\{\n\n", "{\n", c)


def chunk_of(func):
    import fmatch
    return fmatch.index()[0][func][0]


TAIL = re.compile(r"^(\s+/\*[^*]*\*/\s+)j(\s+)(func_[0-9A-F]{8}|[A-Za-z_]\w*)\s*$")


def untail(path):
    """m2c ignores the arguments set in the delay slot of a tail call (`j f`): rewrite each one as
    `jal f` followed by a return, which compiles back to the same tail call. Returns the new path."""
    lines, out, k = open(path).read().splitlines(True), [], 0
    while k < len(lines):
        m = TAIL.match(lines[k])
        if m and not m.group(3).startswith(".L") and k + 1 < len(lines):
            out += [f"{m.group(1)}jal{m.group(2)}{m.group(3)}\n", lines[k + 1], "    jr $ra\n", "    nop\n"]
            k += 2
            continue
        out.append(lines[k])
        k += 1
    new = path[:-2] + "_m2c.s"
    open(new, "w").write("".join(out))
    return new


def attempt(func, hint, profiles):
    t = run([PY, "-I", "tools/fmatch.py", "asm", func])
    if t.returncode:
        return func, "skip", "no asm"
    r = run([PY, "tools/src/m2c/m2c.py", "-t", "mipsee-gcc-c", "--valid-syntax", "--context",
             os.path.join(ROOT, "build/fmatch/_ctx.c"), untail(os.path.join(ROOT, t.stdout.strip()))])
    if r.returncode or "Decompilation failure" in r.stdout:
        return func, "skip", "m2c failed"
    body = clean(r.stdout)
    if body is None:
        return func, "skip", "m2c left unknowns"
    variants = [body]
    alt = drop_stack_copies(body)
    if alt != body:
        variants.append(alt)
    order = [hint] + [p for p in profiles if p != hint] if hint in profiles else profiles
    best = 0.0
    work = os.path.join(ROOT, "build/fmatch", func)
    for prof in order:
        for k, v in enumerate(variants):
            src = os.path.join(work, f"auto{k}_{prof}.c")
            head = (f"/* profile: {prof} */\n" if prof != "opt" else "") + '#include "common.h"\n\n'
            open(src, "w").write(head + v)
            d = run([PY, "-I", "tools/fmatch.py", "diff", func, src])
            if d.returncode == 0:
                return func, "match", prof, head + v
            m = re.search(r" ([\d.]+)%", d.stdout.splitlines()[0] if d.stdout else "")
            if m:
                best = max(best, float(m.group(1)))
    return func, "miss", f"{best:.1f}"


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("list")
    p.add_argument("--jobs", type=int, default=3)
    p.add_argument("--profiles", default="opt,o0")
    p.add_argument("--out", default="src")
    p.add_argument("--log", default="build/autopass.tsv")
    a = p.parse_args()
    items = []
    for line in open(a.list):
        f = line.split()
        if f:
            items.append((f[0], f[3] if len(f) > 3 else "opt"))
    os.makedirs(os.path.join(ROOT, "build/fmatch"), exist_ok=True)
    r = run(["bash", "-c", "cpp -P -undef -DM2CTX -Iinclude include/common.h > build/fmatch/_ctx.c"])
    if r.returncode:
        sys.exit(r.stderr)
    import fmatch
    fmatch.index()  # build the cache once before the workers start
    profiles = a.profiles.split(",")
    n = 0
    with open(os.path.join(ROOT, a.log), "a") as log, cf.ThreadPoolExecutor(a.jobs) as ex:
        for res in ex.map(lambda x: attempt(x[0], x[1], profiles), items):
            func, kind, info = res[:3]
            if kind == "match":
                dst = os.path.join(ROOT, a.out, chunk_of(func), func + ".c")
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                if not os.path.exists(dst):
                    open(dst, "w").write(res[3])
                n += 1
            log.write(f"{func}\t{kind}\t{info}\n")
            log.flush()
    print(f"{n} of {len(items)} matched")


if __name__ == "__main__":
    main()
