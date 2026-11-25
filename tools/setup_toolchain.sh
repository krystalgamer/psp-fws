#!/usr/bin/env bash
# Fetch build toolchains into tmp/ (no root needed):
#  - Allegrex GCC 1.3.1 / 1.7.1 (i386 binaries, run via a local i386 glibc)
#  - modern mips-linux-gnu binutils (for splat asm, linking)
#  - psp-gcc 1.5.1 and 1.6.1 cc1, reconstructed from firmware they built
#    (github.com/krystalgamer/psp-compiler-ground), compiled as Sony did in a
#    Red Hat 9 i386 sandbox
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
wrap_i386() { # name target [extra args]
    printf '#!/bin/sh\nexec %s/ld-linux.so.2 --library-path %s %s %s"$@"\n' "$I386" "$I386" "$(realpath "$2")" "${3:+$3 }" > "$T/bin/$1"
    chmod +x "$T/bin/$1"
}
wrap_i386 cc1-1.7.1 "$T"/1.7.1/lib/gcc-lib/psp/*/cc1
# the 1.3.1 (and 1.5.1) driver passed -mno-ulsw to cc1
wrap_i386 cc1-1.3.1 "$T"/1.3.1/lib/gcc-lib/psp/*/cc1 -mno-ulsw
wrap_i386 psp-as-1.3.1 "$T"/1.3.1/bin/psp-as
wrap_i386 psp-cpp-1.3.1 "$T"/1.3.1/bin/psp-cpp

BU=$(realpath "$T/binutils")
for tool in as ld objcopy objdump nm readelf; do
    printf '#!/bin/sh\nLD_LIBRARY_PATH=%s/usr/lib/x86_64-linux-gnu exec %s/usr/bin/mips-linux-gnu-%s "$@"\n' "$BU" "$BU" "$tool" > "$T/bin/mips-$tool"
    chmod +x "$T/bin/mips-$tool"
done
PCG=$(realpath -m "$T/psp-compiler-ground")
if [ "$(git -C "$PCG" rev-parse --short=8 HEAD 2>/dev/null)" != 848efe94 ] || [ ! -x "$PCG/tmp/toolchains/bin/cc1-1.5.1.bin" ] || [ ! -x "$PCG/tmp/toolchains/bin/cc1-1.6.1.bin" ]; then
    [ -d "$PCG" ] || git clone -q https://github.com/krystalgamer/psp-compiler-ground "$PCG"
    git -C "$PCG" checkout -q 848efe94
    "$PCG/tools/setup_toolchain.sh" >/dev/null
    # the sandbox's RH9 loader must not find the host's i386 glibc through /etc/ld.so.cache
    grep -q LD_LIBRARY_PATH "$PCG/tmp/toolchains/bin/rh9" \
        || sed -i 's#--setenv LC_ALL C#--setenv LC_ALL C --setenv LD_LIBRARY_PATH /usr/lib#' "$PCG/tmp/toolchains/bin/rh9"
    "$PCG/tools/build_gcc.sh" 1.5.1 >/dev/null
    "$PCG/tools/build_gcc.sh" 1.6.1 >/dev/null
fi
rm -f "$T/bin/cc1-1.5.1.bin" "$T/bin/cc1-1.5.1-sony" "$T/bin/cc1-1.6.1-sony"
# the 1.5.1 driver still passed -mno-ulsw to cc1, the 1.6.1 one no longer did
printf '#!/bin/sh\nexec "%s/tmp/toolchains/bin/cc1-1.5.1" -mno-ulsw "$@"\n' "$PCG" > "$T/bin/cc1-1.5.1"
printf '#!/bin/sh\nexec "%s/tmp/toolchains/bin/cc1-1.6.1" "$@"\n' "$PCG" > "$T/bin/cc1-1.6.1"
chmod +x "$T/bin/cc1-1.5.1" "$T/bin/cc1-1.6.1"
echo "toolchains ready in $T/bin"
