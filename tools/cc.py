#!/usr/bin/env python3
# SPDX-License-Identifier: MIT
"""Compile one C or C++ file with CodeWarrior PS2 the way the build does, then prepare the object for the link.

  tools/cc.py SRC OBJ [--profile NAME] [--extra "FLAGS"] [--allow-data]

The profile (kit and flags) comes from config/mwcc_profiles.txt; a source picks one with a comment
`/* profile: NAME */` in its first five lines, else "opt". With -g, mwccps2 puts each function in a
section of its own named .text: this renames each one to .text.<function> and lowers its alignment
to 4 (and retypes the Metrowerks debug sections that GNU ld refuses), so the linker script can place
every function at its retail address. A switch jump table (a .rodata made only of R_MIPS_32 words)
becomes .rodata.<func>, placed by tools/link.py over the retail jtbl_ block. Any other data (a string
literal, a static or initialised global) is refused unless --allow-data: the rest of the data block
is still assembled from splat's output.
"""
import argparse
import os
import re
import shlex
import struct
import shutil
import subprocess
import tempfile
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PROFILES = os.path.join(ROOT, "config/mwcc_profiles.txt")
DATA_SECTIONS = (".data", ".rodata", ".sdata", ".sbss", ".bss", ".sdata2", ".sbss2")


def profiles():
    out = {}
    for line in open(PROFILES, encoding="utf-8"):
        line = line.split("#", 1)[0].strip()
        if line:
            name, kit, flags = line.split(None, 2)
            out[name] = (kit, flags)
    return out


def source_profile(src):
    with open(src, encoding="utf-8", errors="replace") as f:
        head = "".join(f.readline() for _ in range(5))
    m = re.search(r"/\*\s*profile:\s*(\w[\w.-]*)\s*\*/", head)
    return m.group(1) if m else "opt"


def compile_cmd(src, obj, profile, extra=""):
    kit, flags = profiles()[profile]
    mwcc = os.path.join(ROOT, "tools/mwcc", kit, "mwccps2.exe")
    lang = ["-lang", "c++"] if src.endswith((".cpp", ".cxx", ".cc")) else ["-lang", "c"]
    return ([os.path.join(ROOT, "tools/bin/wibo"), mwcc] + shlex.split(flags) + shlex.split(extra) + lang +
            ["-nostdinc", "-I" + os.path.join(ROOT, "include"), "-o", obj, src])


class Elf:
    """Just enough ELF32 little endian to rename sections."""

    def __init__(self, data):
        self.d = bytearray(data)
        if self.d[:4] != b"\x7fELF" or self.d[4] != 1 or self.d[5] != 1:
            raise SystemExit("not an ELF32 LE object")
        (self.shoff,) = struct.unpack_from("<I", self.d, 0x20)
        self.shentsize, self.shnum, self.shstrndx = struct.unpack_from("<HHH", self.d, 0x2E)

    def sh(self, i):
        return list(struct.unpack_from("<10I", self.d, self.shoff + i * self.shentsize))

    def set_sh(self, i, v):
        struct.pack_into("<10I", self.d, self.shoff + i * self.shentsize, *v)

    def name(self, off, strtab_index):
        s = self.sh(strtab_index)
        start = s[4] + off
        return self.d[start:self.d.index(b"\0", start)].decode()

    def sections(self):
        return [(i, self.name(self.sh(i)[0], self.shstrndx), self.sh(i)) for i in range(self.shnum)]

    def symbols(self):
        out = []
        for i, name, s in self.sections():
            if s[1] == 2:  # SHT_SYMTAB
                for k in range(s[5] // 16):
                    st_name, value, size, info, other, shndx = struct.unpack_from("<IIIBBH", self.d, s[4] + k * 16)
                    out.append((self.name(st_name, s[6]), value, size, info & 0xF, info >> 4, shndx))
        return out


def jump_tables_only(elf, index):
    """True when every word of section `index` is a R_MIPS_32 relocation (a switch jump table)."""
    size = elf.sh(index)[5]
    words = set()
    for i, name, s in elf.sections():
        if s[1] == 9 and s[7] == index:  # SHT_REL against this section
            for k in range(s[5] // 8):
                off, info = struct.unpack_from("<II", elf.d, s[4] + k * 8)
                if info & 0xFF != 2:  # R_MIPS_32
                    return False
                words.add(off)
    return size % 4 == 0 and words == set(range(0, size, 4))


def prepare(obj, allow_data=False):
    elf = Elf(open(obj, "rb").read())
    syms = elf.symbols()
    renames, data, tables = {}, [], []
    for i, name, s in elf.sections():
        if name == ".text":
            funcs = [n for n, v, sz, typ, bind, ndx in syms if ndx == i and typ == 2 and v == 0]
            if len(funcs) != 1:
                raise SystemExit(f"{obj}: .text section {i} holds {len(funcs)} function starts")
            renames[i] = ".text." + funcs[0]
        elif name == ".rodata" and s[5] and jump_tables_only(elf, i):
            tables.append(i)
        elif name in DATA_SECTIONS and s[5]:
            data.append(f"{name} ({s[5]} bytes)")
        if s[1] >= 0x70000000:
            # .debug and .line are SHT_MIPS_DEBUG and .mwcats a Metrowerks type: GNU BFD then refuses the
            # whole object as "incompatible". They are only read by tools; the linker script discards them.
            s[1] = 1
            elf.set_sh(i, s)
    if data and not allow_data:
        print(f"{obj}: defines data: {', '.join(data)} (strings, statics and initialised globals "
              "are not supported yet)", file=sys.stderr)
        return 3
    # Switch jump tables: .rodata.<func>, placed by tools/link.py at the function's retail jtbl_ address.
    if tables:
        funcs = [n[len(".text."):] for n in renames.values()]
        if len(funcs) != 1:
            print(f"{obj}: jump tables with {len(funcs)} functions in one file", file=sys.stderr)
            return 3
        for i in tables:
            renames[i] = ".rodata." + funcs[0]
    # Append the new names to a copy of .shstrtab placed at the end of the file.
    st = elf.sh(elf.shstrndx)
    table = bytearray(elf.d[st[4]:st[4] + st[5]])
    for i, new in renames.items():
        v = elf.sh(i)
        v[0] = len(table)
        v[8] = 4  # sh_addralign: the linker script places each function and table itself
        table += new.encode() + b"\0"
        elf.set_sh(i, v)
    st = elf.sh(elf.shstrndx)
    st[4], st[5] = len(elf.d), len(table)
    elf.set_sh(elf.shstrndx, st)
    elf.d += table
    open(obj, "wb").write(elf.d)
    return 0


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("src")
    p.add_argument("obj")
    p.add_argument("--profile")
    p.add_argument("--extra", default="")
    p.add_argument("--allow-data", action="store_true")
    a = p.parse_args()
    prof = a.profile or source_profile(a.src)
    if prof not in profiles():
        sys.exit(f"{a.src}: unknown profile {prof} (config/mwcc_profiles.txt)")
    os.makedirs(os.path.dirname(os.path.abspath(a.obj)), exist_ok=True)
    # mwccps2 cannot open a source or write an object whose path is long (C++ method names make long file names):
    # compile a short-named copy; sources include only from include/.
    with tempfile.TemporaryDirectory(prefix="pkcc") as tmp:
        short = os.path.join(tmp, "u" + os.path.splitext(a.src)[1])
        shutil.copyfile(a.src, short)
        tmp_obj = os.path.join(tmp, "u.o")
        r = subprocess.run(compile_cmd(short, tmp_obj, prof, a.extra), capture_output=True, text=True)
        if os.path.exists(tmp_obj):
            shutil.move(tmp_obj, a.obj)
    out = (r.stdout + r.stderr).strip().replace(short, a.src)
    if r.returncode or not os.path.exists(a.obj):
        print(out, file=sys.stderr)
        if os.path.exists(a.obj):
            os.remove(a.obj)
        return 2
    if out:
        print(out, file=sys.stderr)
    rc = prepare(a.obj, a.allow_data)
    if rc:
        os.remove(a.obj)
    return rc


if __name__ == "__main__":
    sys.exit(main())
