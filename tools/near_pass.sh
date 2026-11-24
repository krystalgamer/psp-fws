#!/usr/bin/env bash
# Retry only near misses (best score <= MAX, default 3) of a module, fast mode.
# Usage: tools/near_pass.sh VERSION:MODULE [MAX]
cd "$(dirname "$0")/.."
v=${1%%:*}; m=${1##*:}; max=${2:-3}
st=tmp/auto_stats/${v}_$m.json
[ -f "$st" ] || { echo "$1: no stats"; exit 0; }
names=tmp/near_${v}_$m.txt
.venv/bin/python - "$st" "$max" > "$names" <<'E'
import json, sys
d = json.load(open(sys.argv[1]))
for n, (s, _) in d["scores"].items():
    if s is not None and 0 < s <= int(sys.argv[2]):
        print(n)
E
[ -s "$names" ] || { echo "$1: no near misses"; exit 0; }
FAST=1 tools/retry_pass.sh "$1" '.' "$names"
