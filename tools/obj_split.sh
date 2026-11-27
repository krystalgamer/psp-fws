#!/usr/bin/env bash
# Split a module's shared source at the object boundaries tools/pure_cuts.py finds, then verify every version.
# Usage: tools/obj_split.sh VER MODULE   (the module's files must be committed; restored from git on failure)
cd "$(dirname "$0")/.."
shopt -s nullglob
v=$1; m=$2
paths=(src/$m config/*/$m.yaml config/*/func_starts.$m.txt)
git diff --quiet -- "${paths[@]}" || { echo "$v:$m: uncommitted changes"; exit 1; }
tools/regress.sh --shared $v:$m | grep -qv ": OK" && { echo "$v:$m: does not match before"; exit 1; }
cuts=$(.venv/bin/python tools/pure_cuts.py $v $m 2>/dev/null | awk '{print $1}' | tac)
[ -n "$cuts" ] || { echo "$v:$m: no cuts"; exit 0; }
n=0
for f in $cuts; do
  .venv/bin/python tools/split_shared_tail.py $v $m $f ${m}_${f#func_} --no-check >/dev/null 2>&1 && n=$((n+1))
done
if tools/regress.sh --shared $v:$m | grep -qv ": OK"; then
  git checkout -q -- "${paths[@]}"; git clean -qf -- src/$m config >/dev/null
  tools/regress.sh --shared $v:$m >/dev/null
  echo "$v:$m: $n cuts break the build, restored"; exit 1
fi
echo "$v:$m: $n object cuts"
