#!/usr/bin/env bash
# Re-try the functions a previous retry/switch run reverted ("differs in full
# build"), now that verification reverts culprits one at a time.
# Usage: tools/reverify.sh VERSION:MODULE [LOG]   (LOG default tmp/retry_<v>_<m>.log)
cd "$(dirname "$0")/.."
v=${1%%:*}; m=${1##*:}
log=${2:-tmp/retry_${v}_${m}.log}
git diff --quiet -- src/$m || { echo "$1: src has local changes, skipping"; exit 1; }
names=tmp/reverify_${v}_${m}.names
grep -oP '^reverted \K\w+(?= \(differs in full build\))' "$log" | sort -u > "$names"
[ -s "$names" ] || { echo "$1: nothing to re-verify"; exit 0; }
count() { cat src/$m/*.c | grep -cE '^[A-Za-z][A-Za-z0-9_ *]*\b[A-Za-z0-9_]+\([^;{]*\)\s*\{'; }
before=$(count)
out=tmp/reverify_${v}_${m}.log
{ make extract split VERSION=$v MODULE=$m && .venv/bin/python tools/auto_decomp.py $v $m --max-size 0x400 --names "$names"; } >"$out" 2>&1
after=$(count)
if [ "$after" -gt "$before" ] && tools/regress.sh "$1" >>"$out" 2>&1; then
    echo "$1: OK $before -> $after"
else
    git checkout -q -- src/$m; git clean -fdq -- src/$m
    echo "$1: unchanged ($before -> $after)"
fi
rm -rf tmp/asm/$v/$m tmp/build/$v/tmp/asm/$v/$m tmp/build/$v/src/$m
