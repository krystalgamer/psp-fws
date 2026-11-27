#!/usr/bin/env python3
"""Report module versions whose cflags look wrong.

    tools/flag_check.py VER [MODULE ...] [--max-c N]

For each module version: the settings (of its compiler) under which every
existing C function of the version still compiles to its words ("consistent"),
and the total auto_decomp draft score per setting (stats "setscores"). Prints
modules where another consistent setting has a lower draft total than the
current one. Nothing is changed.
"""
import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import fwmodel as FM  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("modules", nargs="*")
    ap.add_argument("--max-c", type=int, default=60)
    a = ap.parse_args()
    v = int(re.match(r"\d+", a.ver)[0])
    mods = a.modules or sorted(p.stem for p in (ROOT / "config" / a.ver).glob("*.yaml"))
    for m in mods:
        st = ROOT / "tmp/auto_stats" / f"{a.ver}_{m}.json"
        if not st.exists():
            continue
        ss = json.loads(st.read_text()).get("setscores", {})
        try:
            mod = AD.Module(a.ver, m)
        except Exception:
            continue
        for f in mod.files:
            if not f.exists():
                continue
            text = f.read_text()
            comp, own = AD.Module.file_setting(f)
            own = own.split(" ", 1)[1]
            names = {e.name for e in FM.parse(text, mod.fwvers) if v in e.vers and e.kind == "asm"}
            tot = {}
            for n in names:
                for k, sc in ss.get(n, {}).items():
                    if k.startswith(comp + " "):
                        o = k.split(" ", 1)[1]
                        tot[o] = tot.get(o, 0) + sc
            if not tot or own not in tot:
                continue
            better = [o for o in tot if tot[o] < tot[own]]
            if not better:
                continue
            # consistency of the existing C with each better setting
            cf = [e for e in FM.parse(text, mod.fwvers) if v in e.vers and e.kind == "cfunc"]
            if len(cf) > a.max_c:
                continue
            hdr = mod.header()
            cons = []
            for o in sorted(better, key=lambda o: tot[o]):
                ok = True
                for e in cf:
                    try:
                        target = mod.target_words(e.name)
                    except Exception:
                        continue
                    body = re.sub(rf"^[^\n]*\b{e.name}\([^\n]*\);\n", "", hdr, flags=re.M)
                    words, _ = AD.compile_words(f"#define FW_VERSION {v}\n" + body + "\n" + e.text, comp, o)
                    if words != target:
                        ok = False
                        break
                if ok:
                    cons.append(o)
            if cons:
                print(f"{a.ver}:{m} {f.name}: {own} total {tot[own]}; consistent and lower: "
                      + ", ".join(f"{o} {tot[o]}" for o in cons) + f" ({len(cf)} C)", flush=True)


if __name__ == "__main__":
    main()
