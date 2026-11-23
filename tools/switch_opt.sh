#!/usr/bin/env bash
# Re-decompile a module from scratch at another optimization level and keep
# the result only if the module still matches and has more C functions.
# Usage: tools/switch_opt.sh VERSION:MODULE -Os
cd "$(dirname "$0")/.."
v=${1%%:*}; m=${1##*:}; opt="${*:2}"
f=src/$m/$m.c
git diff --quiet -- src/$m || { echo "$1: src has local changes, skipping"; exit 1; }
count() { local c; c=$(grep -cE '^[A-Za-z][A-Za-z0-9_ *]*\b[A-Za-z0-9_]+\([^;{]*\)\s*\{' "$f" 2>/dev/null); echo "${c:-0}"; }
before=$(count)
log=tmp/switch_${v}_${m}.log
rm -rf src/$m
{ make extract split VERSION=$v MODULE=$m && sed -i "1i /* cflags: $opt */" "$f" \
  && .venv/bin/python tools/auto_decomp.py $v $m --max-size 0x400; } >"$log" 2>&1
after=$(count)
if [ "$after" -gt "$before" ] && tools/regress.sh "$1" >>"$log" 2>&1; then
    echo "$1 $opt: OK $before -> $after"
else
    rm -rf src/$m; git checkout -q -- src/$m
    echo "$1 $opt: kept -O2 ($before -> $after)"
fi
rm -rf tmp/asm/$v/$m tmp/build/$v/tmp/asm/$v/$m tmp/build/$v/src/$m
