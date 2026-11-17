"""GameCube disc image reader: header, file system table (FST), file listing and extraction.

  gcdisc.py info <image.iso>                     disc header fields
  gcdisc.py ls   <image.iso>                     every file: offset, size, path
  gcdisc.py x    <image.iso> <outdir> [glob ...] extract matching files (default: all);
                                                 "main.dol", "boot.bin", "bi2.bin" and
                                                 "apploader.img" name the system files

Pure Python 3, reads the image in place (no copy). Big-endian layout:
  0x0000 boot.bin (0x440): game code, maker, disc number, version, magic 0xC2339F3D at 0x1C,
         game name at 0x20, DOL offset 0x420, FST offset 0x424, FST size 0x428
  0x0440 bi2.bin (0x2000)
  0x2440 apploader (header 0x20, then code size at 0x14 and trailer size at 0x18)
FST: 12-byte entries, root first (its size field is the entry count), then the name table.
  word 0: type (1 = directory) << 24 | name offset; word 1: file offset or parent index;
  word 2: file size or index past the directory's last entry.
"""
import fnmatch
import os
import struct
import sys

MAGIC = 0xC2339F3D


def read_at(f, off, size):
    f.seek(off)
    data = f.read(size)
    if len(data) != size:
        sys.exit(f"short read at 0x{off:X}")
    return data


def header(f):
    h = read_at(f, 0, 0x440)
    if struct.unpack_from(">I", h, 0x1C)[0] != MAGIC:
        sys.exit("not a GameCube disc (no 0xC2339F3D at 0x1C)")
    dol, fst, fst_size, fst_max = struct.unpack_from(">4I", h, 0x420)
    return {
        "game_code": h[0:4].decode("ascii", "replace"),
        "maker": h[4:6].decode("ascii", "replace"),
        "disc": h[6],
        "version": h[7],
        "name": h[0x20:0x400].split(b"\0", 1)[0].decode("latin-1"),
        "dol_offset": dol,
        "fst_offset": fst,
        "fst_size": fst_size,
        "fst_max": fst_max,
    }


def dol_size(f, off):
    d = read_at(f, off, 0x100)
    offs = struct.unpack_from(">18I", d, 0)
    sizes = struct.unpack_from(">18I", d, 0x90)
    return max([0x100] + [o + s for o, s in zip(offs, sizes) if s])


def files(f, hdr):
    """Yield (path, offset, size) for every file, plus the system files."""
    fst = read_at(f, hdr["fst_offset"], hdr["fst_size"])
    count = struct.unpack_from(">I", fst, 8)[0]
    names = fst[count * 12:]

    def name_at(i):
        word0 = struct.unpack_from(">I", fst, i * 12)[0]
        off = word0 & 0xFFFFFF
        return names[off:names.index(b"\0", off)].decode("latin-1")

    al = read_at(f, 0x2440, 0x20)
    al_size = 0x20 + struct.unpack_from(">I", al, 0x14)[0] + struct.unpack_from(">I", al, 0x18)[0]
    yield "boot.bin", 0, 0x440
    yield "bi2.bin", 0x440, 0x2000
    yield "apploader.img", 0x2440, al_size
    yield "main.dol", hdr["dol_offset"], dol_size(f, hdr["dol_offset"])
    yield "fst.bin", hdr["fst_offset"], hdr["fst_size"]

    stack = [("", count)]  # (directory path, index past its last entry)
    i = 1
    while i < count:
        while stack and i >= stack[-1][1]:
            stack.pop()
        word0, a, b = struct.unpack_from(">3I", fst, i * 12)
        path = stack[-1][0] + name_at(i)
        if word0 >> 24:
            stack.append((path + "/", b))
        else:
            yield path, a, b
        i += 1


def extract(f, path, off, size, outdir):
    dst = os.path.join(outdir, *path.split("/"))
    os.makedirs(os.path.dirname(dst) or ".", exist_ok=True)
    f.seek(off)
    left = size
    with open(dst, "wb") as o:
        while left:
            chunk = f.read(min(left, 1 << 20))
            if not chunk:
                sys.exit(f"{path}: short read")
            o.write(chunk)
            left -= len(chunk)
    return dst


def main():
    if len(sys.argv) < 3 or sys.argv[1] not in ("info", "ls", "x"):
        sys.exit(__doc__)
    cmd, image = sys.argv[1], sys.argv[2]
    with open(image, "rb") as f:
        hdr = header(f)
        if cmd == "info":
            for k, v in hdr.items():
                print(f"{k}\t{v:#x}" if isinstance(v, int) and k.endswith(("offset", "size", "max")) else f"{k}\t{v}")
        elif cmd == "ls":
            for path, off, size in files(f, hdr):
                print(f"{off:#010x}\t{size}\t{path}")
        else:
            if len(sys.argv) < 4:
                sys.exit(__doc__)
            outdir, pats = sys.argv[3], sys.argv[4:] or ["*"]
            for path, off, size in files(f, hdr):
                base = path.rsplit("/", 1)[-1]
                if any(fnmatch.fnmatch(path, p) or fnmatch.fnmatch(base, p) for p in pats):
                    print(f"{size}\t{extract(f, path, off, size, outdir)}")


if __name__ == "__main__":
    main()
