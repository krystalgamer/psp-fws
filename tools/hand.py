#!/usr/bin/env python3
"""Put a hand-written C function into a shared source and keep it where it matches.

    tools/hand.py VER MODULE FILE.c [--decls DECLS.h]

FILE.c holds one function definition (its name must be an INCLUDE_ASM entry
compiled for VER). The C replaces that entry for every version compiling the
same entry; each of those versions is rebuilt, and the C is kept only for the
versions that still match (the others keep the asm). Optional --decls lines
(types, externs, prototypes) are added to the module's decls (json "types"
under "hand", vars/funcs by name). Prints the versions that kept the C.
"""
import argparse
import json
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


def build(v, mod):
    r = subprocess.run(["make", f"VERSION={v}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
    return ": OK" in r.stdout + r.stderr, r.stdout + r.stderr


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("module")
    ap.add_argument("cfile")
    ap.add_argument("--decls")
    a = ap.parse_args()
    body = Path(a.cfile).read_text().strip("\n") + "\n"
    m = re.search(r"^(?!static)[^\n;#]*?\b(\w+)\([^;{}]*\)\s*\{", body, re.M)
    if not m:
        sys.exit("no function definition in " + a.cfile)
    name = m[1]
    sd = src_dir(a.ver, a.module)
    vers_s = sharing_versions(a.ver, a.module)
    fv = sorted({fw(v) for v in vers_s})
    byfw = {}
    for v in vers_s:
        byfw.setdefault(fw(v), []).append(v)
    f = next((p for p in sd.glob("*.c") if any(e.kind == "asm" and e.name == name and fw(a.ver) in e.vers
                                              for e in FM.parse(p.read_text(), fv))), None)
    if not f:
        sys.exit(f"{name}: no INCLUDE_ASM entry for {a.ver}")
    orig = {p: p.read_text() for p in list(sd.glob("*.c")) + list(sd.glob("*_decls.*"))}
    ents = FM.parse(orig[f], fv)
    k = next(i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and fw(a.ver) in e.vers)
    cand = ents[k].vers
    if a.decls:
        store_p = sd / f"{a.module}_decls.json"
        store = json.loads(store_p.read_text())
        extra = Path(a.decls).read_text()
        for line in extra.splitlines():
            vm = re.match(r"^extern .*?\b(\w+)(\[[^\]]*\])*;$", line.strip())
            fm = re.match(r"^(?!extern|typedef|struct|union|enum)[\w\s\*]+?\b(\w+)\(.*\);$", line.strip())
            if vm:
                store["vars"][vm[1]] = line.strip()
            elif fm:
                store["funcs"][fm[1]] = line.strip()
        types = "\n".join(l for l in extra.splitlines()
                          if not re.match(r"^\s*extern\b", l) and not re.match(r"^(?!typedef|struct|union|enum)[\w\s\*]+?\b\w+\(.*\);\s*$", l))
        if types.strip():
            store.setdefault("types", {})[f"hand_{name}"] = types.strip()
        import structify
        structify.SRC[a.module] = sd
        structify.write_decls(a.module, store)
    # C for all candidate versions first
    ents[k].vers = frozenset()
    ents.insert(k, FM.Entry(cand, "cfunc", name, body))
    f.write_text(FM.emit(ents, fv))
    keep, drop = [], []
    for n in sorted(cand):
        ok = all(build(v, a.module)[0] for v in byfw[n])
        (keep if ok else drop).append(n)
    if not keep:
        for p, t in orig.items():
            p.write_text(t)
        _, out = build(a.ver, a.module)
        print(f"{name}: no version matches")
        sys.exit(1)
    if drop:
        ents = FM.parse(orig[f], fv)
        k = next(i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and fw(a.ver) in e.vers)
        ents[k].vers = frozenset(drop)
        ents.insert(k, FM.Entry(frozenset(keep), "cfunc", name, body))
        f.write_text(FM.emit(FM.dedupe(ents), fv))
    # everything sharing the source must still match
    r = subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in orig.items():
            p.write_text(t)
        print(f"{name}: shared regress failed: {bad[:3]}")
        sys.exit(1)
    print(f"{name}: C for {keep}" + (f", asm kept for {drop}" if drop else ""))


if __name__ == "__main__":
    main()
