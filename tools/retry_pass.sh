#!/usr/bin/env bash
# Split a module, record its op census, and retry auto-decompilation of the
# INCLUDE_ASM functions whose asm matches REGEX (default: Allegrex integer
# ops). Keeps the result only if more functions are in C and the module still
# matches from scratch.
# Usage: tools/retry_pass.sh VERSION:MODULE [REGEX]
cd "$(dirname "$0")/.."
v=${1%%:*}; m=${1##*:}
re=${2:-'^\s*/\*.*\*/\s+(max|min|clz|clo|ext|ins|wsbh|wsbw|bitrev|rotrv?|rorv?)\s'}
git diff --quiet -- src/$m || { echo "$1: src has local changes, skipping"; exit 1; }
count() { cat src/$m/*.c | grep -cE '^[A-Za-z][A-Za-z0-9_ *]*\b[A-Za-z0-9_]+\([^;{]*\)\s*\{'; }
before=$(count)
log=tmp/retry_${v}_${m}.log
{ make extract split VERSION=$v MODULE=$m && .venv/bin/python tools/op_census.py $v $m \
  && .venv/bin/python tools/auto_decomp.py $v $m --max-size 0x400 --grep "$re"; } >"$log" 2>&1
after=$(count)
if [ "$after" -gt "$before" ] && tools/regress.sh "$1" >>"$log" 2>&1; then
    echo "$1: OK $before -> $after"
else
    git checkout -q -- src/$m; git clean -fdq -- src/$m
    echo "$1: unchanged ($before -> $after)"
fi
rm -rf tmp/asm/$v/$m tmp/build/$v/tmp/asm/$v/$m tmp/build/$v/src/$m
