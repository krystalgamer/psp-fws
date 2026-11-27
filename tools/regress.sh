#!/usr/bin/env bash
# Re-split and rebuild the given VERSION:MODULE pairs from scratch and report.
# Usage: tools/regress.sh [--shared] 360:mcctrl 340:mcore ...
# REGRESS_JOBS versions at a time (default 4), each built with make -j$MAKE_JOBS (default 4).
cd "$(dirname "$0")/.."
# --shared: also rebuild every other version built from the same source dir
if [ "$1" = "--shared" ]; then
    shift
    set -- $(.venv/bin/python -c 'import sys; sys.path.insert(0, "tools"); from srcdir import sharing_versions
out = []
for vm in sys.argv[1:]:
    v, m = vm.split(":")
    out += [vm] + [f"{x}:{m}" for x in sharing_versions(v, m) if x != v]
print(" ".join(dict.fromkeys(out)))' "$@")
fi
one() {
    vm=$1; v=${vm%%:*}; m=${vm##*:}
    S=$(grep -oP "^\s*src_path:\s*\K\S+" config/$v/$m.yaml 2>/dev/null || echo src/$m)
    [ -f tmp/baserom/$v/$m.prx ] || .venv/bin/python tools/extract_baserom.py "$v" "$m" >/dev/null || { echo "$vm: EXTRACT FAILED"; return 1; }
    rm -rf tmp/asm/$v/$m tmp/build/$v/tmp/asm/$v/$m tmp/build/$v/$S
    log=$(mktemp)
    if ! make split VERSION=$v MODULE=$m >"$log" 2>&1; then
        echo "$vm: SPLIT FAILED: $(grep -m1 -E 'Error|error' "$log")"; rm -f "$log"; return 1
    fi
    rm -f "$log"
    out=$(make -j"${MAKE_JOBS:-4}" VERSION=$v MODULE=$m 2>&1)
    if grep -q ": OK" <<<"$out"; then echo "$vm: OK"; else echo "$vm: FAIL $(grep -m1 -E 'MISMATCH|rror' <<<"$out")"; return 1; fi
}
export -f one
printf '%s\n' "$@" | xargs -P "${REGRESS_JOBS:-4}" -I{} bash -c 'one {}'
