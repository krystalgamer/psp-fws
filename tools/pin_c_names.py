#!/usr/bin/env python3
"""Give C-only function names a symbol line in a version's config.

    tools/pin_c_names.py VER [MODULE ...] [--apply]

Functions written in C get their names from the source; if a version's
config/VER/symbol_addrs.MOD.txt has no line for them, splat's split of that
version (and of other versions compared against it, e.g. by add_version.py)
calls the same address func_XXXXXXXX. This lists, from the build map
(tmp/build/VER/MOD.map), every defined C function of the module's sources
whose name is missing from the symbol file, and with --apply appends
`NAME = 0xADDR; // type:func` lines and verifies the version still matches.
"""
import argparse
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def missing(ver, mod):
    mp = ROOT / "tmp/build" / ver / f"{mod}.map"
    symf = ROOT / "config" / ver / f"symbol_addrs.{mod}.txt"
    if not mp.exists() or not symf.exists():
        return []
    named = set(re.findall(r"^\s*(\w+)\s*=", symf.read_text(), re.M))
    fv = sorted({int(re.match(r"\d+", v)[0]) for v in sharing_versions(ver, mod)})
    me = int(re.match(r"\d+", ver)[0])
    cnames = {e.name for f in src_dir(ver, mod).glob("*.c") for e in FM.parse(f.read_text(), fv)
              if e.kind == "cfunc" and me in e.vers}
    out = []
    for m in re.finditer(r"^\s+0x([0-9a-f]+)\s+([A-Za-z_]\w*)$", mp.read_text(), re.M):
        n = m[2]
        if n in cnames and n not in named and not re.fullmatch(r"func_[0-9A-F]{8}", n):
            out.append((n, int(m[1], 16)))
    return sorted(set(out), key=lambda x: x[1])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("modules", nargs="*")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    mods = a.modules or sorted(p.stem for p in (ROOT / "config" / a.ver).glob("*.yaml"))
    for mod in mods:
        ms = missing(a.ver, mod)
        if not ms:
            continue
        print(f"{a.ver}:{mod}: " + ", ".join(f"{n}@0x{x:X}" for n, x in ms))
        if not a.apply:
            continue
        symf = ROOT / "config" / a.ver / f"symbol_addrs.{mod}.txt"
        old = symf.read_text()
        symf.write_text(old.rstrip("\n") + "\n" + "".join(f"{n} = 0x{x:08X}; // type:func\n" for n, x in ms))
        r = subprocess.run(["tools/regress.sh", f"{a.ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
        if ": OK" not in r.stdout:
            symf.write_text(old)
            print(f"  {mod}: build failed with the names, restored: {r.stdout.strip()[-200:]}")


if __name__ == "__main__":
    main()
