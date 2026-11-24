#!/usr/bin/env bash
# Bring another firmware version of a module into its shared source and decompile
# what is specific to it.
# Usage: tools/fw_pass.sh REF_VER NEW_VER MODULE [MAX_SIZE]
cd "$(dirname "$0")/.."
r=$1; n=$2; m=$3; max=${4:-0x400}
log=tmp/fw_pass/$n.$m.log; mkdir -p tmp/fw_pass
.venv/bin/python tools/add_version.py "$r" "$n" "$m" >"$log" 2>&1 || { echo "$n:$m: add_version FAILED ($(tail -1 "$log"))"; exit 1; }
snap=tmp/fw_pass/snap.$n.$m; rm -rf "$snap"; cp -r "src/$m" "$snap"
.venv/bin/python tools/auto_decomp.py "$n" "$m" --max-size "$max" >>"$log" 2>&1
if tools/regress.sh --shared "$n:$m" >>"$log" 2>&1; then
    echo "$n:$m: OK $(grep -h '^matched' "$log" | tail -1)"
else
    rm -rf "src/$m"; cp -r "$snap" "src/$m"
    tools/regress.sh --shared "$n:$m" >>"$log" 2>&1 && echo "$n:$m: OK (auto_decomp reverted)" || echo "$n:$m: BROKEN"
fi
rm -rf "$snap"
