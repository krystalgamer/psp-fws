#!/usr/bin/env bash
# Cut a TU boundary before each function whose C version moved later symbols in
# the full build (GCC dropped a call to a same-file side-effect-free function,
# so the callee was in another object originally), then retry those functions.
# Usage: tools/culprit_cuts.sh VERSION:MODULE [LOG]   (LOG with tagged reverts)
cd "$(dirname "$0")/.."
v=${1%%:*}; m=${1##*:}
log=${2:-tmp/reverify_${v}_${m}.log}
T=$'\n\nCo-authored-by: Copilot <223556219+Copilot@users.noreply.github.com>\nCopilot-Session: bbaedbe7-c0ac-4881-aa90-8ff6222f2f05'
git diff --quiet -- src/$m config/$v || { echo "$1: local changes, skipping"; exit 1; }
culprits=$(grep -oP '^reverted \K\w+(?= \(differs in full build; moves later symbols\))' "$log" | sort -u)
[ -n "$culprits" ] || { echo "$1: no culprits"; exit 0; }
rm -rf tmp/asm/$v/$m
make extract split VERSION=$v MODULE=$m >/dev/null 2>&1 && make VERSION=$v MODULE=$m 2>&1 | grep -q ": OK" || { echo "$1: base build failed"; exit 1; }
if .venv/bin/python tools/split_tu.py $v $m $culprits > tmp/culprit_$m.log 2>&1; then
    git add config/$v/$m.yaml config/$v/func_starts.$m.txt src/$m
    git commit -qm "Split $m before $(echo $culprits | wc -w) functions whose callees were in other objects$T"
    echo "$culprits" > tmp/culprits_$m.txt
    tools/reverify.sh "$1" <(sed 's/^/reverted /; s/$/ (differs in full build)/' tmp/culprits_$m.txt)
else
    git checkout -q -- config/$v src/$m; git clean -fdq -- src/$m config/$v
    echo "$1: split failed: $(tail -1 tmp/culprit_$m.log)"
fi
