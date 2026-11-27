#!/usr/bin/env python3
"""Apply NID-derived names to a version whose module already shares a source.

    tools/nid_rename_shared.py VER[,VER2...] MODULE [--dry-run]

tools/nid_names.py appends real names for exports/imports to
config/VER/symbol_addrs.MODULE.txt. When VER already shares the module's
source, the source still refers to VER's functions by their auto names
(func_XXXXXXXX, in entries only VER compiles), often next to an entry of the
same function under its real name for the other versions. This renames VER's
auto-named entries to the real names (only in entries whose versions are VER
alone, or a range of pre-release versions not otherwise named), merges
entries that become identical (FM.dedupe), rebuilds every sharing version and
restores everything on a mismatch.
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


def fw(v):
    return int(re.match(r"\d+", v)[0])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("vers")
    ap.add_argument("module")
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    vers = a.vers.split(",")
    sd = src_dir(vers[0], a.module)
    srcs = {p: p.read_text() for p in sd.iterdir() if p.suffix in (".c", ".h", ".json")}
    symfs = {v: ROOT / "config" / v / f"symbol_addrs.{a.module}.txt" for v in vers}
    sym0 = {v: f.read_text() for v, f in symfs.items() if f.exists()}
    new = {}  # version number -> {auto name: real name}
    for v in sym0:
        subprocess.run([sys.executable, "tools/nid_names.py", v, a.module], cwd=ROOT, capture_output=True, text=True)
        added = symfs[v].read_text()[len(sym0[v]):]
        for m in re.finditer(r"^(\w+) = 0x([0-9A-Fa-f]+);\s*//\s*type:func", added, re.M):
            if not re.fullmatch(r"func_[0-9A-F]{8}", m[1]):
                new.setdefault(fw(v), {})[f"func_{int(m[2], 16):08X}"] = m[1]
    if not new:
        for v, t in sym0.items():
            symfs[v].write_text(t)
        print(f"{a.vers}:{a.module}: no new names")
        return
    fv = sorted({fw(v) for v in sharing_versions(vers[0], a.module)})
    mine = {fw(v) for v in sym0}
    changed = 0
    for p, t in srcs.items():
        if p.suffix != ".c":
            continue
        ents = FM.parse(t, fv)
        for e in ents:
            if e.kind not in ("asm", "cfunc") or not (e.vers <= mine):
                continue
            # the same real name in every renamed version the entry covers
            tgt = {new.get(v, {}).get(e.name) for v in e.vers}
            if len(tgt) != 1 or None in tgt:
                continue
            nm = tgt.pop()
            e.text = re.sub(rf"\b{e.name}\b", nm, e.text)
            e.name = nm
            changed += 1
        if changed:
            p.write_text(FM.emit(FM.dedupe(ents), fv))
    # auto names still used by entries that could not be renamed: drop the NID name for that address in those
    # versions (the entry keeps resolving by its auto name)
    alltext = "".join(p.read_text() for p in srcs if p.suffix == ".c")
    for v in list(sym0):
        nv = fw(v)
        for auto, real in list(new.get(nv, {}).items()):
            if re.search(rf"\b{auto}\b", alltext):
                t = symfs[v].read_text()
                t = re.sub(rf"^{real} = 0x{auto[5:]};[^\n]*\n", "", t, flags=re.M)
                symfs[v].write_text(t)
    if a.dry_run or not changed:
        for p, t in srcs.items():
            p.write_text(t)
        if not changed:
            for v, t in sym0.items():
                symfs[v].write_text(t)
        print(f"{a.vers}:{a.module}: {changed} entries to rename" + (" (dry run)" if a.dry_run else ""))
        return
    rr = subprocess.run(["tools/regress.sh", "--shared", f"{vers[0]}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in rr.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in srcs.items():
            p.write_text(t)
        for v, t in sym0.items():
            symfs[v].write_text(t)
        subprocess.run(["tools/regress.sh", "--shared", f"{vers[0]}:{a.module}"], cwd=ROOT, capture_output=True)
        print(f"{a.vers}:{a.module}: FAILED, restored: {bad[:2]}")
        sys.exit(1)
    print(f"{a.vers}:{a.module}: OK, {changed} entries renamed")


if __name__ == "__main__":
    main()
