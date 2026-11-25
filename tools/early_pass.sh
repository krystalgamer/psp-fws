#!/usr/bin/env bash
# Deep pass for one module of a firmware version we have the compiler for:
# auto_decomp with every setting, per-version cflags from what the drafts match
# (tools/version_flags.py), auto_decomp again; every version sharing the
# source must still match, else the module is restored.
# Usage: tools/early_pass.sh VER MODULE [MAX_SIZE]
cd "$(dirname "$0")/.."
v=$1; m=$2; max=${3:-0x800}
S=$(grep -oP "^\s*src_path:\s*\K\S+" config/$v/$m.yaml)
log=tmp/early/$v.$m.log; mkdir -p tmp/early
snap=tmp/early/snap.$v.$m; rm -rf "$snap"; cp -r "$S" "$snap"
count() { .venv/bin/python - "$v" "$m" <<'P'
import re, sys
sys.path.insert(0, "tools")
import fwmodel as FM, srcdir
v, m = sys.argv[1], sys.argv[2]
fv = sorted({int(re.match(r"\d+", x)[0]) for x in srcdir.sharing_versions(v, m)})
n = int(re.match(r"\d+", v)[0])
print(sum(1 for f in srcdir.src_dir(v, m).glob("*.c") for e in FM.parse(f.read_text(), fv) if n in e.vers and e.kind == "cfunc"))
P
}
before=$(count)
{ tools/regress.sh "$v:$m" \
  && .venv/bin/python tools/auto_decomp.py "$v" "$m" --max-size "$max" \
  && .venv/bin/python tools/version_flags.py "$v" "$m" --apply \
  && .venv/bin/python tools/auto_decomp.py "$v" "$m" --max-size "$max"; } >"$log" 2>&1
if tools/regress.sh --shared "$v:$m" >>"$log" 2>&1; then
    echo "$v:$m: OK C $before -> $(count)"
else
    rm -rf "$S"; cp -r "$snap" "$S"
    tools/regress.sh --shared "$v:$m" >>"$log" 2>&1 && echo "$v:$m: restored (C $before)" || echo "$v:$m: BROKEN"
fi
rm -rf "$snap"
