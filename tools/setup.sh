#!/usr/bin/env bash
# Install the pinned decomp toolchain into tools/ and .venv/. Safe to re-run, also after the
# checkout moves: nothing here records an absolute path.
#   tools/setup.sh          install, verified against tools/toolchain.sha256 and tools/requirements.lock
#   tools/setup.sh --lock   rewrite both lock files first (only when bumping tools/versions.env)
set -euo pipefail
cd "$(dirname "$0")/.."
T=tools
LOCK=0
if [ "${1:-}" = "--lock" ]; then LOCK=1; fi
# shellcheck source=versions.env
. "$T/versions.env"
mkdir -p "$T/dl" "$T/bin" "$T/src" "$T/mwcc"

fetch() { # url file
  local f="$T/dl/$2"
  if [ ! -f "$f" ]; then curl -fsSL --retry 3 -o "$f.part" "$1"; mv "$f.part" "$f"; fi
}
git_pin() { # url rev name
  local d="$T/src/$3"
  if [ ! -d "$d/.git" ]; then git clone -q "$1" "$d"; fi
  if ! git -C "$d" cat-file -e "$2^{commit}" 2>/dev/null; then git -C "$d" fetch -q origin; fi
  git -C "$d" -c advice.detachedHead=false checkout -q "$2"
}

# MIPS binutils: the system's (apt install binutils-mipsel-linux-gnu), else Debian's package unpacked
# into tools/binutils/ with wrappers in tools/bin/ (no root needed). The Makefile prefers the wrappers.
if ! command -v mipsel-linux-gnu-as >/dev/null || [ -x "$T/bin/mipsel-linux-gnu-as" ]; then
  deb=$(basename "$BINUTILS_DEB")
  fetch "https://deb.debian.org/debian/$BINUTILS_DEB" "$deb"
  ver=$(echo "$deb" | sed -E 's/^binutils-mipsel-linux-gnu_([0-9.]+-[0-9]+)cross.*/\1/')
  sf="libsframe1_${ver}_amd64.deb"
  fetch "https://deb.debian.org/debian/pool/main/b/binutils/$sf" "$sf"
fi
fetch "https://github.com/encounter/objdiff/releases/download/$OBJDIFF_TAG/objdiff-cli-linux-x86_64" "objdiff-cli-linux-x86_64-$OBJDIFF_TAG"
fetch "https://github.com/decompals/wibo/releases/download/$WIBO_TAG/wibo-x86_64" "wibo-x86_64-$WIBO_TAG"

if [ $LOCK = 1 ]; then (cd "$T/dl" && sha256sum -- *) > "$T/toolchain.sha256"; fi
(cd "$T/dl" && sha256sum -c --quiet --ignore-missing ../toolchain.sha256)

if [ -n "${deb:-}" ]; then
  if [ ! -x "$T/binutils/usr/bin/mipsel-linux-gnu-as" ]; then
    tmp=$(mktemp -d)
    (cd "$tmp" && ar x "$OLDPWD/$T/dl/$deb" && mkdir root && tar -xf data.tar.* -C root)
    rm -rf "$T/binutils"; mv "$tmp/root" "$T/binutils"; rm -rf "$tmp"
  fi
  # The cross binutils link the host's libsframe.so.1, which a system without binutils lacks.
  if [ ! -e "$T/binutils/usr/lib/x86_64-linux-gnu/libsframe.so.1" ]; then
    tmp=$(mktemp -d)
    (cd "$tmp" && ar x "$OLDPWD/$T/dl/$sf" && mkdir root && tar -xf data.tar.* -C root)
    cp -a "$tmp"/root/usr/lib/x86_64-linux-gnu/libsframe.so.1* "$T/binutils/usr/lib/x86_64-linux-gnu/"; rm -rf "$tmp"
  fi
  for b in as ld objcopy objdump nm readelf strip; do
    printf '#!/bin/sh\nd=$(dirname "$(readlink -f "$0")")/../binutils/usr\nLD_LIBRARY_PATH="$d/lib/x86_64-linux-gnu${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}" exec "$d/bin/mipsel-linux-gnu-%s" "$@"\n' "$b" > "$T/bin/mipsel-linux-gnu-$b"
    chmod 755 "$T/bin/mipsel-linux-gnu-$b"
  done
fi
install -m 755 "$T/dl/objdiff-cli-linux-x86_64-$OBJDIFF_TAG" "$T/bin/objdiff-cli"
install -m 755 "$T/dl/wibo-x86_64-$WIBO_TAG" "$T/bin/wibo"

git_pin https://github.com/matt-kempster/m2c "$M2C_REV" m2c
git_pin https://github.com/simonlindholm/decomp-permuter "$PERMUTER_REV" decomp-permuter
git_pin https://github.com/simonlindholm/asm-differ "$ASM_DIFFER_REV" asm-differ

# Python: splat, pycdlib and the helpers of m2c, permuter and asm-differ.
# A venv whose python3 was upgraded under it, or that was moved with the checkout, is rebuilt.
if [ -e .venv ] && ! .venv/bin/python -c 'import os, sys; sys.exit(not (os.path.isdir(os.path.join(sys.prefix, "lib", "python%d.%d" % sys.version_info[:2])) and os.path.samefile(sys.prefix, ".venv")))' 2>/dev/null; then
  echo "setup: .venv belongs to another python3 or another path, rebuilding it"; rm -rf .venv
fi
if [ -x .venv/bin/pip ] && ! head -1 .venv/bin/pip | grep -qF "$PWD/.venv/"; then
  echo "setup: .venv was moved, rebuilding it"; rm -rf .venv
fi
if [ ! -x .venv/bin/python ]; then python3 -m venv .venv; fi
if [ $LOCK = 1 ]; then
  .venv/bin/pip install -q -r "$T/requirements.in"
  .venv/bin/pip freeze > "$T/requirements.lock"
fi
.venv/bin/pip install -q -r "$T/requirements.lock"

echo "== toolchain"
"$(if [ -x "$T/bin/mipsel-linux-gnu-as" ]; then echo "$T/bin/"; fi)mipsel-linux-gnu-as" --version | head -1
"$T/bin/objdiff-cli" --version
printf 'wibo %s\n' "$WIBO_TAG"
.venv/bin/python -c 'import importlib.metadata as m; print("splat64", m.version("splat64"), "spimdisasm", m.version("spimdisasm"), "pycdlib", m.version("pycdlib"))'
for v in $MWCC_VERSIONS; do
  if [ -f "$T/mwcc/$v/mwccps2.exe" ]; then echo "mwcc $v: present"; else echo "mwcc $v: missing (put your own mwccps2.exe and DLLs in $T/mwcc/$v/; needed from phase 2)"; fi
done
echo "setup ok"
