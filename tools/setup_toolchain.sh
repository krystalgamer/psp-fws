#!/usr/bin/env bash
# Fetch build toolchains into tmp/ (no root needed):
#  - Allegrex GCC 1.3.1 / 1.7.1 (i386 binaries, run via a local i386 glibc)
#  - modern mips-linux-gnu binutils (for splat asm, linking)
set -euo pipefail
cd "$(dirname "$0")/.."
T=tmp/toolchains
mkdir -p "$T"/bin

for v in 1.3.1 1.7.1; do
    if [ ! -d "$T/$v" ]; then
        mkdir -p "$T/$v"
        curl -sSfL "https://github.com/decompme/compilers/releases/download/compilers/psp-gcc-$v.tar.gz" | tar xz -C "$T/$v"
    fi
done

if [ ! -d "$T/i386" ]; then
    ver=$(apt-cache policy libc6 | awk '/Candidate/{print $2}')
    (cd "$T" && mkdir -p dl && cd dl && apt-get download "libc6:i386=$ver" 2>/dev/null \
        || curl -sSfLO "http://archive.ubuntu.com/ubuntu/pool/main/g/glibc/libc6_${ver}_i386.deb")
    dpkg-deb -x "$T"/dl/libc6_*_i386.deb "$T/i386"
fi

if [ ! -d "$T/binutils" ]; then
    (cd "$T" && mkdir -p dl && cd dl && apt-get download binutils-mips-linux-gnu)
    dpkg-deb -x "$T"/dl/binutils-mips-linux-gnu_*.deb "$T/binutils"
fi
rm -rf "$T/dl"

I386=$(realpath "$T/i386/usr/lib/i386-linux-gnu")
wrap_i386() { # name target
    printf '#!/bin/sh\nexec %s/ld-linux.so.2 --library-path %s %s "$@"\n' "$I386" "$I386" "$(realpath "$2")" > "$T/bin/$1"
    chmod +x "$T/bin/$1"
}
wrap_i386 cc1-1.7.1 "$T"/1.7.1/lib/gcc-lib/psp/*/cc1
wrap_i386 cc1-1.3.1 "$T"/1.3.1/lib/gcc-lib/psp/*/cc1
wrap_i386 psp-as-1.3.1 "$T"/1.3.1/bin/psp-as
wrap_i386 psp-cpp-1.3.1 "$T"/1.3.1/bin/psp-cpp

BU=$(realpath "$T/binutils")
for tool in as ld objcopy objdump nm readelf; do
    printf '#!/bin/sh\nLD_LIBRARY_PATH=%s/usr/lib/x86_64-linux-gnu exec %s/usr/bin/mips-linux-gnu-%s "$@"\n' "$BU" "$BU" "$tool" > "$T/bin/mips-$tool"
    chmod +x "$T/bin/mips-$tool"
done
echo "toolchains ready in $T/bin"
