#!/usr/bin/env bash
# Re-split and rebuild the given VERSION:MODULE pairs from scratch and report.
# Usage: tools/regress.sh 360:mcctrl 340:mcore ...
cd "$(dirname "$0")/.."
rc=0
for vm in "$@"; do
    v=${vm%%:*}; m=${vm##*:}
    [ -f tmp/baserom/$v/$m.prx ] || .venv/bin/python tools/extract_baserom.py "$v" "$m" >/dev/null || { echo "$vm: EXTRACT FAILED"; rc=1; continue; }
    rm -rf tmp/asm/$v/$m tmp/build/$v/tmp/asm/$v/$m tmp/build/$v/src/$m
    if ! make split VERSION=$v MODULE=$m >/tmp/regress_split.log 2>&1; then
        echo "$vm: SPLIT FAILED: $(grep -m1 -E 'Error|error' /tmp/regress_split.log)"; rc=1; continue
    fi
    out=$(make VERSION=$v MODULE=$m 2>&1)
    if grep -q ": OK" <<<"$out"; then echo "$vm: OK"; else echo "$vm: FAIL $(grep -m1 -E 'MISMATCH|rror' <<<"$out")"; rc=1; fi
done
exit $rc
