#!/usr/bin/env bash
# Fetch build toolchains into tmp/ (no root needed):
#  - Allegrex GCC 1.3.1 / 1.7.1 (i386 binaries, run via a local i386 glibc)
#  - modern mips-linux-gnu binutils (for splat asm, linking)
#  - an approximation of psp-gcc 1.5.1, built from the reconstructed 1.7.1
#    sources (github.com/krystalgamer/psp-gcc-1.7.1) without the two 1.7.1
#    changes that 1.5.1-built firmware shows it lacks (abs as max, ulsw default)
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
if [ ! -x "$T/bin/cc1-1.5.1.bin" ]; then
    SRC=$(realpath -m "$T/psp-gcc-src")
    [ -d "$SRC" ] || git clone -q https://github.com/krystalgamer/psp-gcc-1.7.1.git "$SRC"
    (cd "$SRC" && git checkout -q 7fbb1e7 \
        && git -c user.name=build -c user.email=build@localhost revert --no-edit 485cb2c 7debb44 >/dev/null)
    FAKE=$(realpath -m "$T/pspfake"); mkdir -p "$FAKE"
    for tool in as ld ar ranlib nm objdump objcopy strip; do
        printf '#!/bin/sh\nLD_LIBRARY_PATH=%s/usr/lib/x86_64-linux-gnu exec %s/usr/bin/mips-linux-gnu-%s "$@"\n' "$BU" "$BU" "$tool" > "$FAKE/psp-$tool"
        chmod +x "$FAKE/psp-$tool"
    done
    B=$(realpath -m "$T/psp-gcc-151-build"); mkdir -p "$B"
    (cd "$B" && PATH=$FAKE:$PATH CC="gcc -std=gnu89 -fcommon -w -fpermissive -Wno-error=implicit-function-declaration -Wno-error=implicit-int -Wno-error=int-conversion -Wno-error=incompatible-pointer-types" \
        "$SRC"/gcc-3.3.3/configure --target=psp --with-gnu-ld --with-gnu-as \
        --enable-languages=c --enable-c-mbchar --enable-threads=psp >configure.log 2>&1 \
        && PATH=$FAKE:$PATH make -j8 all-gcc >make.log 2>&1 || true)  # libgcc fails; only cc1 is needed
    cp "$B/gcc/cc1" "$T/bin/cc1-1.5.1.bin"
    rm -rf "$B" "$FAKE"
fi
printf '#!/bin/sh\nexec "$(dirname "$0")/cc1-1.5.1.bin" -mno-ulsw "$@"\n' > "$T/bin/cc1-1.5.1"
chmod +x "$T/bin/cc1-1.5.1"
echo "toolchains ready in $T/bin"
