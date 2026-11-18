#!/usr/bin/env python3
"""Integrate matched functions: copy each C or C++ file to src/<chunk>/<func>.c(pp), then `make check`.

  tools/integrate.py FILE.c... [--jobs 3] [--pause PGID]

The function name is the file name. When the whole set fails `make check`, the files are tried in
halves until each one that breaks the build is found and taken back out. Prints one line per file
(ok, failed: reason) and the final make check line. Never overwrites an existing src file.
--pause stops a process group (a running autopass) during each make check, to share the CPU.
"""
import argparse
import os
import shutil
import signal
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))


PAUSE = None


def make_check(jobs):
    if PAUSE:
        os.killpg(PAUSE, signal.SIGSTOP)
    try:
        r = subprocess.run(["make", f"-j{jobs}", "check"], cwd=ROOT, capture_output=True, text=True)
    finally:
        if PAUSE:
            os.killpg(PAUSE, signal.SIGCONT)
    tail = (r.stdout + r.stderr).strip().splitlines()
    return r.returncode == 0, "\n".join(tail[-4:])


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("files", nargs="+")
    p.add_argument("--jobs", type=int, default=3)
    p.add_argument("--pause", type=int)
    a = p.parse_args()
    global PAUSE
    PAUSE = a.pause
    import fmatch
    funcs = fmatch.index()[0]
    placed, status = [], {}
    for f in a.files:
        name, ext = os.path.splitext(os.path.basename(f))
        if name not in funcs:
            status[f] = "failed: no such function in the asm"
            continue
        dst = os.path.join(ROOT, "src", funcs[name][0], name + ext)
        if any(os.path.exists(os.path.splitext(dst)[0] + e) for e in (".c", ".cpp")):
            status[f] = "failed: src file exists"
            continue
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        shutil.copyfile(f, dst)
        placed.append((f, dst))
    ok, tail = make_check(a.jobs)

    def remove(group):
        for f, dst in group:
            os.remove(dst)

    def restore(group):
        for f, dst in group:
            shutil.copyfile(f, dst)

    def bisect(group):
        """The build fails with `group` in; find its culprits, leaving the good ones in."""
        if len(group) == 1:
            remove(group)
            status[group[0][0]] = "failed: breaks make check"
            return
        half = len(group) // 2
        left, right = group[:half], group[half:]
        remove(right)
        good, _ = make_check(a.jobs)
        if not good:
            bisect(left)
        restore(right)
        good, _ = make_check(a.jobs)
        if not good:
            bisect(right)

    if not ok and placed:
        bisect(placed)
        ok, tail = make_check(a.jobs)
    for f, dst in placed:
        status.setdefault(f, "ok")
    for f in a.files:
        print(f"{os.path.splitext(os.path.basename(f))[0]}\t{status[f]}")
    verdict = [ln for ln in tail.splitlines() if "warning:" not in ln]
    print(verdict[-1] if verdict else "")
    n = sum(1 for v in status.values() if v == "ok")
    print(f"integrated {n} of {len(a.files)}; make check {'OK' if ok else 'FAILED'}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
