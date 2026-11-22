# SPDX-License-Identifier: MIT
"""GameCube cross-reference: name PS2 functions from the GameCube build's RM_DLL.elf.

  gcxref.py syms  <RM_DLL.elf> <out.tsv>           symbol table (addr size type bind section name demangled)
  gcxref.py dwarf <RM_DLL.elf> <out.txt>           DWARF 1 summary: units, languages, source paths, types
  gcxref.py match <RM_DLL.elf> <ps2.elf> <asmdir> <out.tsv> [stats.txt]
                                                   propose PS2 names (never applied to the repo)

GameCube side: .symtab, .rela.text / .rela.data (calls, string and constant references).
PS2 side: splat output (asm/<region>/text_*.s, glabel/jal/%hi/%lo/%gp_rel) and the retail
executable for the bytes of referenced strings and constants (load segment at file 0x80).

Evidence, strongest first:
  string    the function references the same string(s) on both sides
  selfname  a PS2-only message names the function, and that name is a GC function
  table     a data record pairs the function pointer with the same string on both sides
  callgraph callee N of a matched caller, same call order and count
  const     the same rare 32-bit constant(s) in one function on each side
  order     link order: an equal-length gap between two matched neighbours, paired in order
Pure Python 3, no dependency.
"""
import bisect
import collections
import glob
import os
import re
import struct
import sys

# ---------------------------------------------------------------- ELF


class Elf:
    def __init__(self, path):
        self.data = d = open(path, "rb").read()
        if d[:4] != b"\x7fELF":
            sys.exit(f"{path}: not an ELF")
        self.e = ">" if d[5] == 2 else "<"
        e = self.e
        self.machine = struct.unpack_from(e + "H", d, 0x12)[0]
        shoff = struct.unpack_from(e + "I", d, 0x20)[0]
        phoff = struct.unpack_from(e + "I", d, 0x1C)[0]
        phentsize, phnum, shentsize, shnum, shstrndx = struct.unpack_from(e + "5H", d, 0x2A)
        self.sections = []
        for i in range(shnum):
            f = struct.unpack_from(e + "10I", d, shoff + i * shentsize)
            self.sections.append(dict(zip(
                ("name", "type", "flags", "addr", "offset", "size", "link", "info", "align", "entsize"), f)))
        if shnum:
            strtab = self.sections[shstrndx]
            for s in self.sections:
                s["name"] = self.cstr(strtab["offset"] + s["name"])
        self.segments = []
        for i in range(phnum):
            f = struct.unpack_from(e + "8I", d, phoff + i * phentsize)
            self.segments.append(dict(zip(("type", "offset", "vaddr", "paddr", "filesz", "memsz", "flags", "align"), f)))

    def cstr(self, off, limit=4096):
        end = self.data.find(b"\0", off, off + limit)
        return self.data[off:end if end >= 0 else off].decode("latin-1")

    def section(self, name):
        for s in self.sections:
            if s["name"] == name:
                return s
        return None

    def section_bytes(self, s):
        return self.data[s["offset"]:s["offset"] + s["size"]]

    def symbols(self):
        out = []
        for s in self.sections:
            if s["type"] != 2:
                continue
            strtab = self.sections[s["link"]]["offset"]
            for i in range(s["size"] // 16):
                name, value, size, info, other, shndx = struct.unpack_from(self.e + "IIIBBH", self.data, s["offset"] + i * 16)
                out.append({"index": i, "name": self.cstr(strtab + name), "value": value, "size": size,
                            "type": info & 15, "bind": info >> 4, "shndx": shndx})
        return out

    def relas(self, target):
        """RELA entries applying to section `target`: (offset, type, symbol index, addend)."""
        out = []
        for s in self.sections:
            if s["type"] == 4 and self.sections[s["info"]]["name"] == target:
                for i in range(s["size"] // 12):
                    off, info, add = struct.unpack_from(self.e + "IIi", self.data, s["offset"] + i * 12)
                    out.append((off, info & 0xFF, info >> 8, add))
        return out

    def vaddr_to_off(self, addr):
        for p in self.segments:
            if p["type"] == 1 and p["vaddr"] <= addr < p["vaddr"] + p["filesz"]:
                return p["offset"] + addr - p["vaddr"]
        return None

    def read(self, addr, size):
        off = self.vaddr_to_off(addr)
        if off is None:
            return None
        return self.data[off:off + size]

    def string_at(self, addr):
        off = self.vaddr_to_off(addr)
        if off is None:
            return None
        end = self.data.find(b"\0", off, off + 512)
        if end < 0:
            return None
        return self.data[off:end]


STT = {0: "NOTYPE", 1: "OBJECT", 2: "FUNC", 3: "SECTION", 4: "FILE"}
STB = {0: "LOCAL", 1: "GLOBAL", 2: "WEAK"}

# ---------------------------------------------------------------- Metrowerks demangler

OPS = {
    "ct": "{cls}", "dt": "~{cls}", "nw": "operator new", "nwa": "operator new[]", "dl": "operator delete",
    "dla": "operator delete[]", "as": "operator=", "eq": "operator==", "ne": "operator!=", "lt": "operator<",
    "gt": "operator>", "le": "operator<=", "ge": "operator>=", "pl": "operator+", "mi": "operator-",
    "ml": "operator*", "dv": "operator/", "md": "operator%", "apl": "operator+=", "ami": "operator-=",
    "amu": "operator*=", "adv": "operator/=", "amd": "operator%=", "aor": "operator|=", "aad": "operator&=",
    "aer": "operator^=", "als": "operator<<=", "ars": "operator>>=", "ls": "operator<<", "rs": "operator>>",
    "or": "operator|", "ad": "operator&", "er": "operator^", "co": "operator~", "nt": "operator!",
    "aa": "operator&&", "oo": "operator||", "pp": "operator++", "mm": "operator--", "cl": "operator()",
    "vc": "operator[]", "rf": "operator->", "rm": "operator->*", "cm": "operator,",
}
BASIC = {"v": "void", "b": "bool", "c": "char", "s": "short", "i": "int", "l": "long", "x": "long long",
         "f": "float", "d": "double", "r": "long double", "w": "wchar_t", "e": "..."}


class Demangle(Exception):
    pass


class _P:
    def __init__(self, s):
        self.s, self.i = s, 0

    def peek(self):
        return self.s[self.i] if self.i < len(self.s) else ""

    def take(self):
        c = self.peek()
        if not c:
            raise Demangle("eof")
        self.i += 1
        return c

    def num(self):
        j = self.i
        while self.peek().isdigit():
            self.i += 1
        if j == self.i:
            raise Demangle("number")
        return int(self.s[j:self.i])

    def ident(self):
        n = self.num()
        name = self.s[self.i:self.i + n]
        if len(name) != n:
            raise Demangle("ident")
        self.i += n
        return template_name(name)

    def qualified(self):
        if self.peek() == "Q":
            self.take()
            n = int(self.take())
            return "::".join(self.ident() for _ in range(n))
        return self.ident()

    def type(self):
        mods = []
        while True:
            c = self.peek()
            if c == "C":
                self.take(); mods.append("const")
            elif c == "V":
                self.take(); mods.append("volatile")
            elif c == "U":
                self.take(); mods.append("unsigned")
            elif c == "S":
                self.take(); mods.append("signed")
            else:
                break
        c = self.peek()
        if c == "P":
            self.take()
            return self.type() + "*" + (" " + " ".join(m for m in mods) if mods else "")
        if c == "R":
            self.take()
            return self.type() + "&"
        if c == "A":
            self.take()
            n = self.num()
            if self.take() != "_":
                raise Demangle("array")
            return f"{self.type()}[{n}]"
        if c == "F":
            self.take()
            args = self.args()
            if self.take() != "_":
                raise Demangle("fn type")
            return f"{self.type()} (*)({args})"
        if c == "M":
            self.take()
            cls = self.qualified()
            return f"{self.type()} {cls}::*"
        if c.isdigit() or c == "Q":
            base = self.qualified()
        elif c in BASIC:
            self.take()
            base = BASIC[c]
        else:
            raise Demangle(f"type {c!r}")
        return " ".join(mods + [base]) if mods else base

    def args(self):
        out = []
        while self.peek() and self.peek() != "_":
            out.append(self.type())
        return ", ".join("" if a == "void" and len(out) == 1 else a for a in out)


def template_name(name):
    """`spair<CUi,Q24usnd5CUUID>`: demangle each template argument that parses as a type."""
    lt = name.find("<")
    if lt < 0 or not name.endswith(">"):
        return name
    parts, depth, cur = [], 0, ""
    for ch in name[lt + 1:-1]:
        if ch == "," and depth == 0:
            parts.append(cur); cur = ""
            continue
        depth += ch == "<"
        depth -= ch == ">"
        cur += ch
    parts.append(cur)
    out = []
    for a in parts:
        try:
            p = _P(a)
            t = p.type()
            out.append(t if p.i == len(a) else a)
        except Demangle:
            out.append(a)
    return f"{name[:lt]}<{', '.join(out)}>"


def top_split(q):
    """Split a qualified name on the '::' outside template brackets."""
    out, depth, cur, i = [], 0, "", 0
    while i < len(q):
        if q[i] == "<":
            depth += 1
        elif q[i] == ">":
            depth -= 1
        elif depth == 0 and q.startswith("::", i):
            out.append(cur); cur = ""; i += 2
            continue
        cur += q[i]; i += 1
    return out + [cur]


def demangle(sym):
    """Metrowerks (CFront-like) names; '' when the name is not mangled or does not parse."""
    if sym.startswith("_Z"):
        return ""  # none in RM_DLL.elf; Itanium would need a separate demangler
    depth = 0
    for i in range(1, len(sym) - 1):
        ch = sym[i]
        depth += ch == "<"
        depth -= ch == ">"
        if depth or sym[i:i + 2] != "__" or i + 2 >= len(sym):
            continue
        head, tail = sym[:i], sym[i + 2:]
        if not head.strip("_"):
            continue
        if tail[0] not in "0123456789QFC":
            continue
        try:
            p = _P(tail)
            cls = ""
            if p.peek() != "F" and p.peek() != "C":
                cls = p.qualified()
            const = ""
            if p.peek() == "C":
                p.take(); const = " const"
            if not p.peek():
                if cls and not const:
                    return f"{cls}::{template_name(head)}"  # static member data
                raise Demangle("no sig")
            if p.take() != "F":
                raise Demangle("no F")
            args = p.args()
            if p.i != len(tail):
                raise Demangle("trailing")
        except Demangle:
            continue
        name = template_name(head)
        if head.startswith("__") and head[2:] in OPS:
            short = top_split(cls)[-1].split("<")[0]
            name = OPS[head[2:]].format(cls=short)
        return f"{cls + '::' if cls else ''}{name}({args}){const}"
    return ""


# ---------------------------------------------------------------- syms


def gc_symbols(elf):
    out = []
    for s in elf.symbols():
        if s["index"] == 0:
            continue
        sec = elf.sections[s["shndx"]]["name"] if 0 < s["shndx"] < len(elf.sections) else (
            "ABS" if s["shndx"] == 0xFFF1 else "UND" if s["shndx"] == 0 else hex(s["shndx"]))
        s["section"] = sec
        out.append(s)
    return out


def cmd_syms(elf_path, out_path):
    elf = Elf(elf_path)
    syms = gc_symbols(elf)
    n = collections.Counter()
    with open(out_path, "w") as o:
        o.write("addr\tsize\ttype\tbind\tsection\tname\tdemangled\n")
        for s in syms:
            if s["type"] in (3,):
                continue
            dm = demangle(s["name"])
            n[STT.get(s["type"], s["type"])] += 1
            n["mangled"] += bool(dm)
            o.write(f"{s['value']:08X}\t{s['size']}\t{STT.get(s['type'], s['type'])}\t{STB.get(s['bind'], s['bind'])}"
                    f"\t{s['section']}\t{s['name']}\t{dm}\n")
    print(" ".join(f"{k}={v}" for k, v in sorted(n.items(), key=str)), f"total={sum(v for k, v in n.items() if k != 'mangled')}")


# ---------------------------------------------------------------- DWARF 1

TAGS = {0x01: "array_type", 0x02: "class_type", 0x03: "entry_point", 0x04: "enumeration_type",
        0x05: "formal_parameter", 0x06: "global_subroutine", 0x07: "global_variable", 0x0A: "label",
        0x0B: "lexical_block", 0x0C: "local_variable", 0x0D: "member", 0x0F: "pointer_type",
        0x10: "reference_type", 0x11: "compile_unit", 0x12: "string_type", 0x13: "structure_type",
        0x14: "subroutine", 0x15: "subroutine_type", 0x16: "typedef", 0x17: "union_type",
        0x18: "unspecified_parameters", 0x19: "variant", 0x1A: "common_block", 0x1B: "common_inclusion",
        0x1C: "inheritance", 0x1D: "inlined_subroutine", 0x1E: "module", 0x1F: "ptr_to_member_type",
        0x20: "set_type", 0x21: "subrange_type", 0x22: "with_stmt"}
AT_NAME, AT_LANGUAGE, AT_PRODUCER, AT_COMP_DIR, AT_BYTE_SIZE, AT_LOW_PC, AT_HIGH_PC, AT_SIBLING = (
    0x038, 0x013, 0x025, 0x01B, 0x00B, 0x011, 0x012, 0x001)
LANGS = {1: "C89", 2: "C", 3: "Ada83", 4: "C++", 5: "Cobol74", 6: "Cobol85", 7: "Fortran77", 8: "Fortran90",
         9: "Pascal83", 10: "Modula2", 0x8001: "MW assembler", 0x8000: "lo_user"}
FORM_SIZE = {1: 4, 2: 4, 5: 2, 6: 4, 7: 8}


def dwarf1_dies(sec):
    """Yield (offset, tag, {attr: value}) over a DWARF 1 .debug section (big or little endian given)."""
    data, e = sec
    off = 0
    while off + 4 <= len(data):
        length = struct.unpack_from(e + "I", data, off)[0]
        if length < 8:
            off += max(length, 4)
            continue
        end = off + length
        tag = struct.unpack_from(e + "H", data, off + 4)[0]
        p = off + 6
        attrs = {}
        while p + 2 <= end:
            at = struct.unpack_from(e + "H", data, p)[0]
            p += 2
            form = at & 0xF
            if form in FORM_SIZE:
                n = FORM_SIZE[form]
                v = struct.unpack_from(e + {2: "H", 4: "I", 8: "Q"}[n], data, p)[0]
                p += n
            elif form == 3:
                n = struct.unpack_from(e + "H", data, p)[0]
                v = data[p + 2:p + 2 + n]
                p += 2 + n
            elif form == 4:
                n = struct.unpack_from(e + "I", data, p)[0]
                v = data[p + 4:p + 4 + n]
                p += 4 + n
            elif form == 8:
                z = data.index(b"\0", p)
                v = data[p:z].decode("latin-1")
                p = z + 1
            else:
                break
            attrs[at >> 4] = v
        yield off, tag, attrs
        off = end


def cmd_dwarf(elf_path, out_path):
    elf = Elf(elf_path)
    lines = []
    dbg = elf.section(".debug")
    info = elf.section(".debug_info")
    lines.append(f"sections: {', '.join(s['name'] for s in elf.sections if s['name'].startswith(('.debug', '.line', '.mwcats')))}")
    if info:
        ver = struct.unpack_from(elf.e + "H", elf.data, info["offset"] + 4)[0]
        lines.append(f".debug_info present, DWARF version {ver}")
    if not dbg:
        open(out_path, "w").write("\n".join(lines) + "\n")
        return
    lines.append(f".debug {dbg['size']} bytes, .line {elf.section('.line')['size'] if elf.section('.line') else 0} bytes: DWARF version 1")
    tags = collections.Counter()
    units, structs, typedefs, funcs, enums = [], [], [], [], []
    stack_end = []
    for off, tag, at in dwarf1_dies((elf.section_bytes(dbg), elf.e)):
        tname = TAGS.get(tag, f"0x{tag:04X}")
        tags[tname] += 1
        name = at.get(0x03)
        if tag == 0x11:
            units.append((at.get(0x03, ""), LANGS.get(at.get(0x13), at.get(0x13)), at.get(0x25, ""),
                          at.get(0x1B, ""), at.get(0x11), at.get(0x12)))
        elif tag in (0x13, 0x02, 0x17) and name:
            structs.append((tname, name, at.get(0x0B)))
        elif tag == 0x16 and name:
            typedefs.append(name)
        elif tag == 0x04 and name:
            enums.append(name)
        elif tag in (0x06, 0x14) and name:
            funcs.append((name, at.get(0x11), at.get(0x12)))
    lines.append(f"DIEs by tag: {', '.join(f'{k} {v}' for k, v in tags.most_common())}")
    lines.append(f"compile units: {len(units)}")
    langs = collections.Counter(u[1] for u in units)
    lines.append(f"languages: {', '.join(f'{k} {v}' for k, v in langs.most_common())}")
    prods = collections.Counter(u[2] for u in units)
    lines.append(f"producers: {', '.join(f'{k!r} {v}' for k, v in prods.most_common())}")
    lines.append("")
    lines.append("# compile units: name, language, low_pc, high_pc, comp_dir")
    for u in units:
        lo = f"{u[4]:08X}" if isinstance(u[4], int) else "-"
        hi = f"{u[5]:08X}" if isinstance(u[5], int) else "-"
        lines.append(f"{u[0]}\t{u[1]}\t{lo}\t{hi}\t{u[3]}")
    lines.append("")
    lines.append(f"# named struct/class/union types ({len(structs)}, {len(set(s[1] for s in structs))} distinct)")
    for k, nm, sz in sorted(set(structs), key=lambda x: x[1]):
        lines.append(f"{k}\t{nm}\t{sz if sz is not None else ''}")
    lines.append("")
    lines.append(f"# enums ({len(set(enums))} distinct): {' '.join(sorted(set(enums)))}")
    lines.append(f"# typedefs ({len(set(typedefs))} distinct): {' '.join(sorted(set(typedefs)))}")
    lines.append(f"# subroutines with DWARF ({len(funcs)})")
    for nm, lo, hi in funcs:
        lines.append(f"{nm}\t{lo:08X}\t{hi:08X}" if isinstance(lo, int) and isinstance(hi, int) else nm)
    open(out_path, "w").write("\n".join(lines) + "\n")
    print("\n".join(lines[:8]))


# ---------------------------------------------------------------- match

CONF = {"high": 3, "medium": 2, "low": 1}
CONF_NAME = {3: "high", 2: "medium", 1: "low"}


def printable(b):
    """A referenced byte run that reads as text: at least 4 bytes, 3 letters, no control bytes."""
    if b is None or len(b) < 4:
        return None
    if any(c < 0x20 and c not in (9, 10, 13) or 0x7F <= c < 0xA0 for c in b):
        return None
    if sum(0x41 <= (c | 0x20) - 0x20 + 0x20 <= 0x7A and chr(c).isalpha() for c in b) < 3:
        return None
    if sum(c >= 0x80 for c in b) * 5 > len(b):
        return None
    return b.decode("latin-1")


class Func:
    __slots__ = ("addr", "name", "size", "calls", "strings", "consts", "fnrefs")

    def __init__(self, addr, name, size):
        self.addr, self.name, self.size = addr, name, size
        self.calls, self.strings, self.consts, self.fnrefs = [], [], set(), []


def gc_functions(elf):
    syms = gc_symbols(elf)
    text = {i for i, sec in enumerate(elf.sections) if sec["flags"] & 4}
    best = {}
    for s in syms:
        if s["type"] != 2 or s["shndx"] not in text or not s["size"]:
            continue
        cur = best.get(s["value"])
        if cur is None or (s["bind"] != 0, s["size"]) > (cur["bind"] != 0, cur["size"]):
            best[s["value"]] = s
    funcs = {a: Func(a, s["name"], s["size"]) for a, s in best.items()}
    starts = sorted(funcs)
    allsyms = elf.symbols()
    data_secs = [sec for sec in elf.sections if sec["flags"] & 2 and not sec["flags"] & 4 and sec["type"] == 1]

    def owner(addr):
        i = bisect.bisect_right(starts, addr) - 1
        if i >= 0 and addr < starts[i] + funcs[starts[i]].size:
            return funcs[starts[i]]
        return None

    def in_data(addr):
        return any(sec["addr"] <= addr < sec["addr"] + sec["size"] for sec in data_secs)

    for secname in (".text", ".init"):
        sec = elf.section(secname)
        if not sec:
            continue
        for off, rtype, si, add in sorted(elf.relas(secname)):
            f = owner(off)
            if f is None:
                continue
            target = allsyms[si]["value"] + add
            if rtype == 10:  # R_PPC_REL24: bl / b
                if target in funcs and target != f.addr or (target == f.addr and add == 0):
                    f.calls.append(target)
            elif rtype in (4, 109, 1):  # ADDR16_LO, EMB_SDA21, ADDR32
                if target in funcs:
                    f.fnrefs.append(target)
                    continue
                if not in_data(target):
                    continue
                txt = printable(elf.string_at(target))
                if txt is not None:
                    f.strings.append(txt)
                insn = struct.unpack_from(">I", elf.data, sec["offset"] + (off & ~3) - sec["addr"])[0]
                op = insn >> 26
                if op == 48:  # lfs
                    v = elf.read(target, 4)
                    if v:
                        f.consts.add(struct.unpack(">I", v)[0])
                elif op == 50:  # lfd: keep the float32 bits when exact
                    v = elf.read(target, 8)
                    if v:
                        dv = struct.unpack(">d", v)[0]
                        try:
                            fv = struct.unpack(">f", struct.pack(">f", dv))[0]
                        except OverflowError:
                            fv = None
                        if fv == dv:
                            f.consts.add(struct.unpack(">I", struct.pack(">f", fv))[0])
                elif op == 32:  # lwz of a 4-byte constant
                    pass
    # integer constants built by lis (+ ori / addi) with no relocation
    sec = elf.section(".text")
    reloc_at = {off & ~3 for off, _t, _s, _a in elf.relas(".text")}
    for f in funcs.values():
        if not (sec["addr"] <= f.addr < sec["addr"] + sec["size"]):
            continue
        base = sec["offset"] + f.addr - sec["addr"]
        n = f.size // 4
        words = struct.unpack_from(f">{n}I", elf.data, base)
        for i, w in enumerate(words):
            if w >> 26 != 15 or (w >> 16) & 31 != 0 or f.addr + i * 4 in reloc_at:
                continue
            rd = (w >> 21) & 31
            hi = (w & 0xFFFF) << 16
            val = hi
            for w2 in words[i + 1:i + 4]:
                if (w2 >> 21) & 31 == rd or (w2 >> 16) & 31 == rd:
                    if w2 >> 26 == 24 and (w2 >> 16) & 31 == rd and (w2 >> 21) & 31 == rd:  # ori rd, rd
                        val = hi | (w2 & 0xFFFF)
                    elif w2 >> 26 == 14 and (w2 >> 21) & 31 == rd and (w2 >> 16) & 31 == rd:  # addi rd, rd
                        val = (hi + ((w2 & 0xFFFF) ^ 0x8000) - 0x8000) & 0xFFFFFFFF
                    break
            f.consts.add(val)
    return funcs


def gc_tables(elf, funcs):
    """Data objects holding function pointers: {object start: [(offset, function addr), ...]}."""
    syms = [x for x in elf.symbols() if x["type"] == 1 and x["size"]]
    objs = sorted((x["value"], x["value"] + x["size"]) for x in syms)
    starts = [o[0] for o in objs]
    allsyms = elf.symbols()
    tables = collections.defaultdict(list)
    for secname in (".data", ".sdata", ".rodata"):
        for off, rtype, si, add in elf.relas(secname):
            if rtype != 1:
                continue
            target = allsyms[si]["value"] + add
            if target not in funcs:
                continue
            i = bisect.bisect_right(starts, off) - 1
            base = objs[i][0] if i >= 0 and off < objs[i][1] else off
            tables[base].append((off - base, target))
    return {b: sorted(v) for b, v in tables.items()}


INSN = re.compile(r"^\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)$")
REF = re.compile(r"%(lo|gp_rel)\(([A-Za-z_][\w.]*)(?: \+ (0x[0-9A-Fa-f]+))?\)")
HI_CONST = re.compile(r"\(0x([0-9A-Fa-f]+) >> 16\)")


def ps2_functions(exe, asmdir):
    """Functions of the splat output, with ordered calls, referenced strings and constants."""
    files = sorted(glob.glob(os.path.join(asmdir, "text_*.s")))
    datafiles = sorted(glob.glob(os.path.join(asmdir, "data", "*.s")))
    addr_of = {}
    for path in files + datafiles:
        pending = []
        for line in open(path, encoding="latin-1"):
            t = line.split()
            if t and t[0] in ("glabel", "dlabel", "alabel", "jlabel"):
                pending.append(t[1])
                continue
            m = re.match(r"^\s*/\* [0-9A-F]+ ([0-9A-F]{8})", line)
            if m and pending:
                for nm in pending:
                    addr_of[nm] = int(m.group(1), 16)
                pending = []

    def sym_addr(nm):
        if nm in addr_of:
            return addr_of[nm]
        m = re.match(r"^(?:D|func|jtbl)_([0-9A-F]+)$", nm)
        return int(m.group(1), 16) if m else None

    funcs = {}
    for path in files:
        cur = None
        regs = {}
        for line in open(path, encoding="latin-1"):
            t = line.split()
            if t and t[0] == "glabel":
                cur = Func(addr_of[t[1]], t[1], 0)
                funcs[cur.addr] = cur
                continue
            if t and t[0] == "endlabel":
                cur = None
                continue
            m = INSN.match(line)
            if not m or cur is None:
                continue
            vaddr, mn, ops = int(m.group(1), 16), m.group(2), m.group(3)
            cur.size = vaddr + 4 - cur.addr
            if mn in ("jal", "j") and not ops.startswith(".L"):
                a = sym_addr(ops.strip())
                if a is not None:
                    cur.calls.append(a)
                continue
            hc = HI_CONST.search(ops)
            if mn == "lui" and hc:
                cur.consts.add(int(hc.group(1), 16) & 0xFFFFFFFF)
                continue
            r = REF.search(ops)
            if r:
                a = sym_addr(r.group(2))
                if a is None:
                    continue
                a += int(r.group(3), 16) if r.group(3) else 0
                if r.group(2).startswith("func_") or a in funcs or r.group(2) in addr_of and r.group(2) not in (None,) and r.group(2).startswith(("func_",)):
                    cur.fnrefs.append(a)
                    continue
                txt = printable(exe.string_at(a))
                if txt is not None:
                    cur.strings.append(txt)
                if mn == "lwc1":
                    v = exe.read(a, 4)
                    if v and len(v) == 4:
                        cur.consts.add(struct.unpack("<I", v)[0])
    tables = collections.defaultdict(list)
    for path in datafiles:
        base = None
        for line in open(path, encoding="latin-1"):
            t = line.split()
            if t and t[0] == "dlabel":
                base = addr_of.get(t[1])
                continue
            m = re.match(r"^\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]+ \*/ \.word (\w+)", line)
            if m and base is not None:
                a = sym_addr(m.group(2))
                if a is not None and a in funcs:
                    tables[base].append((int(m.group(1), 16) - base, a))
    ps2_functions.tables = dict(tables)
    # fnrefs by name resolved after all glabels are known
    for f in funcs.values():
        f.fnrefs = [a for a in f.fnrefs if a in funcs]
        f.calls = [a for a in f.calls if a in funcs]
    return funcs


def esc(s, n=80):
    s = s.replace("\\", "\\\\").replace("\n", "\\n").replace("\t", "\\t").replace("\r", "\\r")
    return s if len(s) <= n else s[:n - 3] + "..."


class Matcher:
    def __init__(self, P, G):
        self.P, self.G = P, G
        self.m = {}      # ps2 addr -> (gc addr, kind, detail, conf)
        self.used = {}   # gc addr -> ps2 addr
        self.conflicts = collections.Counter()

    def accept(self, p, g, kind, detail, conf):
        if p in self.m or g in self.used:
            return False
        self.m[p] = (g, kind, detail, conf)
        self.used[g] = p
        return True

    # -- strings
    def strings(self):
        P, G = self.P, self.G
        sp, sg = collections.defaultdict(set), collections.defaultdict(set)
        for a, f in P.items():
            for s in set(f.strings):
                sp[s].add(a)
        for a, f in G.items():
            for s in set(f.strings):
                sg[s].add(a)
        shared = set(sp) & set(sg)
        self.shared_strings = len(shared)
        # candidate scores
        score = collections.defaultdict(lambda: collections.defaultdict(float))
        uniq = collections.defaultdict(lambda: collections.defaultdict(list))
        for s in sorted(shared):
            w = 1.0 / (len(sp[s]) * len(sg[s]))
            for p in sp[s]:
                for g in sg[s]:
                    score[p][g] += w
                    if len(sp[s]) == 1 and len(sg[s]) == 1:
                        uniq[p][g].append(s)
        best_p = {p: max(c.items(), key=lambda kv: kv[1]) for p, c in score.items()}
        best_g = collections.defaultdict(lambda: (None, -1.0))
        for p, c in score.items():
            for g, v in c.items():
                if v > best_g[g][1]:
                    best_g[g] = (p, v)
        order = sorted(score, key=lambda p: (-best_p[p][1], p))
        for p in order:
            g, v = best_p[p]
            ties = [x for x, y in score[p].items() if abs(y - v) < 1e-9]
            mutual = best_g[g][0] == p
            u = uniq[p]
            shared_pg = sorted(set(P[p].strings) & set(G[g].strings), key=lambda s: (len(sp[s]) * len(sg[s]), -len(s), s))
            detail = " | ".join(esc(s, 60) for s in shared_pg[:3])
            if len(u) == 1 and g in u and mutual:
                conf = 3
                detail = " | ".join(esc(s, 60) for s in sorted(u[g], key=lambda s: (-len(s), s))[:3])
            elif len(u) > 1:
                self.conflicts["string unique-to-several"] += 1
                conf = 1
            elif len(ties) == 1 and mutual and len(shared_pg) >= 2:
                conf = 2
            elif len(ties) == 1 and mutual:
                conf = 1
            else:
                self.conflicts["string tie"] += 1
                continue
            self.accept(p, g, "string", detail, conf)

    # -- PS2 messages that name their own function
    def selfname(self):
        """A PS2-only debug string naming a GC function ("X not implemented", "X(%s)"): that function."""
        P, G = self.P, self.G
        by_name = collections.defaultdict(list)
        for b, f in G.items():
            by_name[f.name].append(b)
        votes = collections.defaultdict(set)
        detail = {}
        for a, f in P.items():
            if a in self.m:
                continue
            for st in f.strings:
                toks = re.findall(r"[A-Za-z_][A-Za-z0-9_]{5,}", st)
                hits = [t for t in toks if len(by_name.get(t, ())) == 1]
                if len(set(hits)) != 1:
                    continue
                t = hits[0]
                lead = [x for x in toks if x not in ("jt",)][:1] == [t]
                votes[a].add(by_name[t][0])
                detail[a] = (esc(st, 60), 2 if lead else 1)
        targets = collections.Counter(b for v in votes.values() for b in v)
        for a, v in votes.items():
            if len(v) != 1:
                continue
            b = next(iter(v))
            if targets[b] != 1:
                self.conflicts["selfname shared"] += 1
                continue
            self.accept(a, b, "selfname", detail[a][0], detail[a][1])

    # -- call graph
    def callgraph(self, rounds=50):
        P, G = self.P, self.G
        done = set()
        for _ in range(rounds):
            votes = collections.defaultdict(list)
            for p, (g, kind, detail, conf) in list(self.m.items()):
                if p in done:
                    continue
                done.add(p)
                cp, cg = P[p].calls, G[g].calls
                if not cp or not cg:
                    continue
                if len(cp) == len(cg):
                    pairs = list(zip(cp, cg))
                    fwd, bwd, ok = {}, {}, True
                    for a, b in pairs:
                        if fwd.setdefault(a, b) != b or bwd.setdefault(b, a) != a:
                            ok = False
                        if (a == p) != (b == g):
                            ok = False
                        if a in self.m and self.m[a][0] != b:
                            ok = False
                    if not ok:
                        self.conflicts["callgraph order mismatch"] += 1
                        continue
                    for i, (a, b) in enumerate(pairs):
                        if a in self.m or a == p:
                            continue
                        votes[a].append((b, conf, f"callee {i + 1}/{len(cp)} of {P[p].name}={G[g].name}"))
                else:
                    for a, b, i, gap_conf in self.align(cp, cg):
                        votes[a].append((b, min(conf, gap_conf), f"callee {i + 1}/{len(cp)} of {P[p].name}={G[g].name} (aligned, {len(cp)} vs {len(cg)} calls)"))
            if not votes:
                break
            new = 0
            for a, vs in votes.items():
                targets = {b for b, _c, _d in vs}
                if len(targets) != 1:
                    self.conflicts["callgraph disagreeing anchors"] += 1
                    continue
                b = targets.pop()
                if b in self.used:
                    self.conflicts["callgraph target taken"] += 1
                    continue
                conf = max(c for _b, c, _d in vs)
                sz_p, sz_g = P[a].size, G[b].size
                if sz_p and sz_g and not (0.25 <= sz_g / sz_p <= 4):
                    conf = min(conf, 1)
                detail = vs[0][2] + (f" (+{len(vs) - 1} agreeing)" if len(vs) > 1 else "")
                new += self.accept(a, b, "callgraph", detail, conf)
            if not new:
                break

    def align(self, cp, cg):
        """Unequal call lists: anchor on callees already matched, propose single-call gaps between anchors."""
        anchors = [(-1, -1)]
        j0 = 0
        for i, a in enumerate(cp):
            if a in self.m:
                b = self.m[a][0]
                for j in range(j0, len(cg)):
                    if cg[j] == b:
                        anchors.append((i, j))
                        j0 = j + 1
                        break
        anchors.append((len(cp), len(cg)))
        out = []
        for (i0, j0), (i1, j1) in zip(anchors, anchors[1:]):
            gi, gj = i1 - i0 - 1, j1 - j0 - 1
            if gi == gj and gi >= 1 and i0 >= 0 and i1 < len(cp):
                for k in range(gi):
                    a, b = cp[i0 + 1 + k], cg[j0 + 1 + k]
                    if a not in self.m:
                        out.append((a, b, i0 + 1 + k, 2 if gi == 1 else 1))
        return out

    # -- data tables of function pointers
    def tables(self, TP, TG):
        """A PS2 table and a GC table with the same entry count, aligned by matched entries."""
        P, G = self.P, self.G
        g_index = collections.defaultdict(list)  # gc fn -> [(table, index)]
        for b, ents in TG.items():
            for i, (_o, f) in enumerate(ents):
                g_index[f].append((b, i))
        total = 0
        while True:
            votes = collections.defaultdict(list)
            for pb, pents in TP.items():
                if len(pents) < 2:
                    continue
                cands = collections.Counter()
                for i, (_o, a) in enumerate(pents):
                    if a in self.m:
                        for gb, gi in g_index[self.m[a][0]]:
                            if gi == i and len(TG[gb]) == len(pents):
                                cands[gb] += 1
                if not cands:
                    continue
                if len(cands) > 1:
                    # several GC tables share the anchors: keep only one that every anchor agrees with
                    top = cands.most_common(2)
                    if top[0][1] == top[1][1]:
                        self.conflicts["table ambiguous"] += 1
                        continue
                gb, n_anchor = cands.most_common(1)[0]
                gents = TG[gb]
                ok = all(self.m[a][0] == g for (_o, a), (_o2, g) in zip(pents, gents) if a in self.m)
                ok = ok and len({g for _o, g in gents}) == len({a for _o, a in pents})
                if not ok:
                    self.conflicts["table disagreeing"] += 1
                    continue
                conf = 3 if n_anchor >= 2 else 2
                anchor_conf = min(self.m[a][3] for _o, a in pents if a in self.m)
                conf = min(conf, anchor_conf)
                for i, ((_o, a), (_o2, g)) in enumerate(zip(pents, gents)):
                    if a not in self.m:
                        votes[a].append((g, conf, f"entry {i}/{len(pents)} of table D_{pb:08X}={self.gname(gb)} ({n_anchor} matched entries agree)"))
            new = 0
            for a, vs in votes.items():
                targets = {g for g, _c, _d in vs}
                if len(targets) != 1:
                    self.conflicts["table disagreeing"] += 1
                    continue
                g = targets.pop()
                if g in self.used:
                    self.conflicts["table target taken"] += 1
                    continue
                new += self.accept(a, g, "table", vs[0][2], max(c for _g, c, _d in vs))
            total += new
            if not new:
                return total

    def gname(self, addr):
        return self.gnames.get(addr, f"{addr:08X}")

    # -- link order
    def order(self, max_gap=8):
        """Between two matched neighbours (same order on both sides), pair equal-length gaps in order."""
        P, G = self.P, self.G
        ps, gs = sorted(P), sorted(G)
        pidx = {a: i for i, a in enumerate(ps)}
        gidx = {a: i for i, a in enumerate(gs)}
        pairs = sorted((p, v[0], v[3]) for p, v in self.m.items())
        props = []
        for (p1, g1, c1), (p2, g2, c2) in zip(pairs, pairs[1:]):
            i1, i2, j1, j2 = pidx[p1], pidx[p2], gidx[g1], gidx[g2]
            n = i2 - i1 - 1
            if n < 1 or n > max_gap or j2 - j1 - 1 != n:
                continue
            gap_p, gap_g = ps[i1 + 1:i2], gs[j1 + 1:j2]
            if any(a in self.m for a in gap_p) or any(b in self.used for b in gap_g):
                continue
            sizes_ok = all(0.33 <= G[b].size / max(P[a].size, 1) <= 3 or max(P[a].size, G[b].size) <= 16
                           for a, b in zip(gap_p, gap_g))
            calls_ok = all(len(set(P[a].calls)) == len(set(G[b].calls)) for a, b in zip(gap_p, gap_g))
            conf = 2 if min(c1, c2) >= 2 and sizes_ok and calls_ok and n <= 3 else 1
            if not sizes_ok and n > 1:
                continue
            for k, (a, b) in enumerate(zip(gap_p, gap_g)):
                props.append((a, b, f"{k + 1}/{n} between {P[p1].name}={G[g1].name} and {P[p2].name}={G[g2].name}", conf))
        new = 0
        for a, b, d, c in props:
            new += self.accept(a, b, "order", d, c)
        return new

    # -- constants
    def constants(self):
        P, G = self.P, self.G
        boring = {0, 0xFFFFFFFF, 0x80000000, 0x7FFFFFFF, 0xFFFF0000, 0x00010000}
        cp, cg = collections.defaultdict(set), collections.defaultdict(set)
        for a, f in P.items():
            for c in f.consts - boring:
                cp[c].add(a)
        for a, f in G.items():
            for c in f.consts - boring:
                cg[c].add(a)
        votes = collections.defaultdict(lambda: collections.defaultdict(list))
        for c in sorted(set(cp) & set(cg)):
            if len(cp[c]) > 2 or len(cg[c]) > 2:
                continue
            fp = [a for a in cp[c] if a not in self.m]
            fg = [b for b in cg[c] if b not in self.used]
            if len(fp) == 1 and len(fg) == 1:
                votes[fp[0]][fg[0]].append(c)
        for p, d in votes.items():
            if len(d) != 1:
                self.conflicts["const disagreeing"] += 1
                continue
            (g, cs), = d.items()
            sz_p, sz_g = P[p].size, G[g].size
            conf = 2 if len(cs) >= 2 and 0.25 <= sz_g / max(sz_p, 1) <= 4 else 1
            self.accept(p, g, "const", " ".join(f"0x{c:08X}" for c in sorted(cs)[:4]), conf)


def cmd_match(gc_path, ps2_path, asmdir, out_path, stats_path=None):
    gc = Elf(gc_path)
    exe = Elf(ps2_path)
    G = gc_functions(gc)
    P = ps2_functions(exe, asmdir)
    m = Matcher(P, G)
    m.gnames = {x["value"]: x["name"] for x in gc.symbols() if x["type"] == 1 and x["size"]}
    TG, TP = gc_tables(gc, G), ps2_functions.tables
    m.strings()
    n_str = len(m.m)
    m.selfname()
    for _ in range(10):
        before = len(m.m)
        m.callgraph()
        m.tables(TP, TG)
        if len(m.m) == before:
            break
    m.constants()
    for _ in range(10):
        before = len(m.m)
        m.callgraph()
        m.tables(TP, TG)
        if len(m.m) == before:
            break
    for _ in range(10):
        before = len(m.m)
        m.order()
        m.callgraph()
        m.tables(TP, TG)
        if len(m.m) == before:
            break
    rows = []
    for p in sorted(m.m):
        g, kind, detail, conf = m.m[p]
        rows.append((p, P[p].name, G[g].name, kind, detail, CONF_NAME[conf], g, demangle(G[g].name)))
    with open(out_path, "w") as o:
        o.write("ps2_addr\tcurrent_name\tproposed_name\tevidence\tdetail\tconfidence\tgc_addr\tgc_demangled\n")
        for p, cur, name, kind, detail, conf, g, dm in rows:
            o.write(f"{p:08X}\t{cur}\t{name}\t{kind}\t{detail}\t{conf}\t{g:08X}\t{dm}\n")
    by = collections.Counter((r[3], r[5]) for r in rows)
    conf = collections.Counter(r[5] for r in rows)
    lines = [
        f"PS2 functions {len(P)}, with strings {sum(1 for f in P.values() if f.strings)}, calls {sum(len(f.calls) for f in P.values())}",
        f"GC functions {len(G)}, with strings {sum(1 for f in G.values() if f.strings)}, calls {sum(len(f.calls) for f in G.values())}",
        f"strings shared by both sides {m.shared_strings}; string matches {n_str}",
        f"function-pointer tables: PS2 {len(TP)}, GC {len(TG)}",
        "by evidence and confidence: " + ", ".join(f"{k} {c} {v}" for (k, c), v in sorted(by.items())),
        "rejected: " + ", ".join(f"{k} {v}" for k, v in sorted(m.conflicts.items())),
        f"GC: {conf['high']} high, {conf['medium']} medium, {conf['low']} low proposals",
    ]
    print("\n".join(lines))
    if stats_path:
        open(stats_path, "w").write("\n".join(lines) + "\n")



def main():
    a = sys.argv[1:]
    if a[:1] == ["syms"] and len(a) == 3:
        cmd_syms(a[1], a[2])
    elif a[:1] == ["dwarf"] and len(a) == 3:
        cmd_dwarf(a[1], a[2])
    elif a[:1] == ["match"] and len(a) in (5, 6):
        cmd_match(*a[1:])
    else:
        sys.exit(__doc__)


if __name__ == "__main__":
    main()
