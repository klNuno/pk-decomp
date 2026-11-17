"""Disc helper: raw CD image to ISO9660, file extraction, and the retail executable's load segment.

  disc.py iso  <image.bin> <out.iso>      MODE2/2352 or MODE1/2352 track to 2048-byte sectors
  disc.py x    <image.iso> <outdir>        extract every file (ISO9660 names, ";1" dropped)
  disc.py seg  <elf> <out.bin>             dump the PT_LOAD contents of an EE ELF (what `make check` compares)

A DVD image (2048-byte sectors) is used as it is: `iso` copies it.
"""
import os
import struct
import sys


def to_iso(src, dst):
    size = os.path.getsize(src)
    if size % 2352:
        with open(src, "rb") as f, open(dst, "wb") as o:
            while chunk := f.read(1 << 20):
                o.write(chunk)
        return
    with open(src, "rb") as f, open(dst, "wb") as o:
        while sector := f.read(2352):
            if sector[15] == 2:
                o.write(sector[24:24 + 2048])
            else:
                o.write(sector[16:16 + 2048])


def extract(iso, outdir):
    import pycdlib

    p = pycdlib.PyCdlib()
    p.open(iso)
    for root, _dirs, files in p.walk(iso_path="/"):
        for name in files:
            src = (root.rstrip("/") + "/" + name)
            rel = src.lstrip("/").split(";")[0]
            dst = os.path.join(outdir, rel)
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            p.get_file_from_iso(dst, iso_path=src)
    p.close()


def segment(elf, out):
    data = open(elf, "rb").read()
    if data[:4] != b"\x7fELF":
        sys.exit(f"{elf}: not an ELF")
    phoff, = struct.unpack_from("<I", data, 0x1C)
    phentsize, phnum = struct.unpack_from("<HH", data, 0x2A)
    blob = bytearray()
    for i in range(phnum):
        p_type, p_offset, p_vaddr, _pa, p_filesz, _ms, _fl, _al = struct.unpack_from("<8I", data, phoff + i * phentsize)
        if p_type == 1 and p_filesz:
            blob += data[p_offset:p_offset + p_filesz]
    open(out, "wb").write(blob)


def main():
    if len(sys.argv) != 4 or sys.argv[1] not in ("iso", "x", "seg"):
        sys.exit(__doc__)
    {"iso": to_iso, "x": extract, "seg": segment}[sys.argv[1]](sys.argv[2], sys.argv[3])


if __name__ == "__main__":
    main()
