#!/usr/bin/env python3
"""Progress of the decomp and its map.

  tools/progress.py [--json] [--map docs/progress]

Counts functions and code bytes in C against the whole executable, game code apart from the libraries
(Sony SDK and runtime, linked as shipped: ranges in LIBRARY below, a first estimate from alignment).
A function is in C when a src/ file defines it; it is "read" when its file uses no name we did not
choose (no func_/D_ name, no unk_ field, no m2c local such as arg0, temp_ or sp10).
With --map, writes codemap.svg and progress.json: the code in address order, one row per 32 KB,
one rectangle per function or run of assembly, coloured by level. Run it after a green make check.
"""
import argparse
import glob
import html
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import link  # noqa: E402

# Library code: 8-byte aligned functions, Sony SDK 2.3.x tags, syscall stubs (first estimate, phase 1).
LIBRARY = [(0x100000, 0x129B40), (0x284658, 0x2856F0), (0x31A978, 0x324580)]
UNREAD = re.compile(r"\b(?:func_[0-9A-F]{8}|D_[0-9A-F]{8}|unk_\w+|arg\d+|temp_\w+|var_\w+|sp[0-9A-F]+)\b")
LEVELS = [("asm", "Assembly", "#4a4f57"), ("c", "C, names left to find", "#3fa35a"),
          ("read", "C, every name ours", "#8fe0a0"), ("lib", "Library, linked as shipped", "#2c2b29")]
SURFACE, INK, INK2 = "#1a1a19", "#f0efec", "#a9a79c"


def is_lib(addr):
    return any(lo <= addr < hi for lo, hi in LIBRARY)


def functions():
    out = []
    for path in sorted(glob.glob(f"{ROOT}/asm/eu/text_*.s")):
        for name, addr, size, lines in link.parse_chunk(path)[1]:
            out.append((addr, size, name))
    return sorted(out)


def c_levels():
    lv = {}
    for path in glob.glob(f"{ROOT}/src/**/*.c*", recursive=True):
        text = open(path, encoding="utf-8").read()
        code = re.sub(r"/\*.*?\*/|//[^\n]*", " ", text, flags=re.S)
        for name in re.findall(r"^[^\s#/][^;]*?\b(\w+)\s*\([^;]*?\)\s*\{", code, re.M):
            lv[name] = "c" if name.startswith("func_") or UNREAD.search(code.replace(name, "")) else "read"
    return lv


def summary():
    fs, lv = functions(), c_levels()
    r = {"functions": len(fs), "bytes": sum(s for _, s, _ in fs)}
    game = [(a, s, n) for a, s, n in fs if not is_lib(a)]
    r["game_functions"], r["game_bytes"] = len(game), sum(s for _, s, _ in game)
    done = [(a, s, n) for a, s, n in game if n in lv]
    r["c_functions"], r["c_bytes"] = len(done), sum(s for _, s, _ in done)
    r["read_functions"] = sum(1 for _, _, n in done if lv[n] == "read")
    r["c_percent_bytes"] = round(100 * r["c_bytes"] / r["game_bytes"], 2)
    r["c_percent_functions"] = round(100 * r["c_functions"] / r["game_functions"], 2)
    r["library_functions"] = len(fs) - len(game)
    return r, fs, lv


def codemap(out_dir, r, fs, lv):
    row_bytes, width, row_h, gap, left, top = 0x8000, 960, 9, 2, 64, 70
    base = 0x100000
    end = max(a + s for a, s, _ in fs)
    rows = (end - base + row_bytes - 1) // row_bytes
    scale = width / row_bytes
    rects = []

    def put(start, size, level, title):
        while size > 0:
            row, off = divmod(start - base, row_bytes)
            n = min(size, row_bytes - off)
            x, y, w = left + off * scale, top + row * (row_h + gap), n * scale
            t = f"<title>{html.escape(title)}</title>" if title else ""
            rects.append(f'<rect x="{x:.2f}" y="{y}" width="{max(w, 0.6):.2f}" height="{row_h}" '
                         f'fill="{dict((k, c) for k, _, c in LEVELS)[level]}">{t}</rect>')
            start, size = start + n, size - n

    run = None
    for a, s, n in fs:
        level = "lib" if is_lib(a) else lv.get(n, "asm")
        if level in ("asm", "lib"):
            if run and run[2] == level:
                run[1] = a + s - run[0]
                continue
            if run:
                put(run[0], run[1], run[2], None)
            run = [a, s, level]
            continue
        if run:
            put(run[0], run[1], run[2], None)
            run = None
        put(a, s, level, f"{n} 0x{a:06X} {s} bytes")
    if run:
        put(run[0], run[1], run[2], None)
    h = top + rows * (row_h + gap) + 44
    labels = [f'<text x="{left - 8}" y="{top + i * (row_h + gap) + row_h - 1}" text-anchor="end" '
              f'font-size="9" fill="{INK2}">{base + i * row_bytes:06X}</text>' for i in range(0, rows, 4)]
    legend, x = [], left
    for key, label, color in LEVELS:
        legend.append(f'<rect x="{x}" y="{h - 30}" width="12" height="12" fill="{color}" stroke="{INK2}" '
                      f'stroke-width="0.5"/><text x="{x + 18}" y="{h - 20}" font-size="12" fill="{INK2}">{label}</text>')
        x += 40 + 7 * len(label)
    head = (f'<text x="{left}" y="30" font-size="18" font-weight="600" fill="{INK}">PK: Out of the Shadows, '
            f'EU executable: {r["c_percent_bytes"]} % of game code in C</text>'
            f'<text x="{left}" y="52" font-size="12" fill="{INK2}">{r["c_functions"]} of {r["game_functions"]} game '
            f'functions ({r["c_bytes"]:,} of {r["game_bytes"]:,} bytes), one row per 32 KB in address order; '
            f'{r["library_functions"]} library functions apart</text>')
    svg = (f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {left + width + 16} {h}" '
           f'font-family="system-ui, sans-serif"><rect width="100%" height="100%" fill="{SURFACE}"/>'
           + head + "".join(labels) + "\n".join(rects) + "".join(legend) + "</svg>\n")
    os.makedirs(out_dir, exist_ok=True)
    open(os.path.join(out_dir, "codemap.svg"), "w").write(svg)
    json.dump(r, open(os.path.join(out_dir, "progress.json"), "w"), indent=1)
    open(os.path.join(out_dir, "progress.json"), "a").write("\n")


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--json", action="store_true")
    p.add_argument("--map")
    a = p.parse_args()
    r, fs, lv = summary()
    if a.map:
        codemap(os.path.join(ROOT, a.map), r, fs, lv)
    if a.json:
        print(json.dumps(r))
    else:
        print(f"game code: {r['c_functions']}/{r['game_functions']} functions, {r['c_bytes']}/{r['game_bytes']} bytes "
              f"({r['c_percent_bytes']} %) in C, {r['read_functions']} read; {r['library_functions']} library functions apart")


if __name__ == "__main__":
    main()
