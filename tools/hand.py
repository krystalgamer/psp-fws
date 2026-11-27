#!/usr/bin/env python3
"""Put a hand-written C function into a shared source and keep it where it matches.

    tools/hand.py VER MODULE FILE.c [FILE2.c ...] [--decls DECLS.h]

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
    ap.add_argument("cfiles", nargs="+", help="one function per file; several files share one final regress")
    ap.add_argument("--decls", help="applied with the first file")
    a = ap.parse_args()
    sd = src_dir(a.ver, a.module)
    snap = {p: p.read_text() for p in list(sd.glob("*.c")) + list(sd.glob("*_decls.*"))}
    done = []
    for i, cf in enumerate(a.cfiles):
        r = one(a, cf, a.decls if i == 0 else None)
        if r:
            done.append(r)
    if not done:
        sys.exit(1)
    # everything sharing the source must still match
    r = subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in snap.items():
            p.write_text(t)
        print(f"shared regress failed, all of {[n for n, _, _ in done]} restored "
              f"(retry them one per call to find the culprit): {bad[:3]}")
        sys.exit(1)
    for name, keep, drop in done:
        print(f"{name}: C for {keep}" + (f", asm kept for {drop}" if drop else ""))
    if len(done) < len(a.cfiles):
        sys.exit(1)


def one(a, cfile, decls):
    """Insert one function; returns (name, keep, drop), or None (sources restored)."""
    body = Path(cfile).read_text().strip("\n") + "\n"
    m = re.search(r"^(?!static)[^\n;#]*?\b(\w+)\([^;{}]*\)\s*\{", body, re.M)
    if not m:
        print("no function definition in " + cfile)
        return None
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
        print(f"{name}: no INCLUDE_ASM entry for {a.ver}")
        return None
    orig = {p: p.read_text() for p in list(sd.glob("*.c")) + list(sd.glob("*_decls.*"))}
    ents = FM.parse(orig[f], fv)
    k = next(i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and fw(a.ver) in e.vers)
    cand = ents[k].vers
    if decls:
        store_p = sd / f"{a.module}_decls.json"
        store = json.loads(store_p.read_text())
        extra = Path(decls).read_text()
        for line in extra.splitlines():
            vm = re.match(r"^extern .*?\b(\w+)(\[[^\]]*\])*;$", line.strip())
            fm = re.match(r"^(?!extern|typedef|struct|union|enum)[\w\s\*]+?\b(\w+)\(.*\);$", line.strip())
            if vm:
                store["vars"][vm[1]] = line.strip()
            elif fm:
                store["funcs"][fm[1]] = line.strip()
        types = "\n".join(l for l in extra.splitlines()
                          if not re.match(r"^\s*extern\b", l) and not re.match(r"^(?!typedef|struct|union|enum)[\w\s\*]+?\b\w+\(.*\);\s*$", l))
        # drop type definitions the store already has (re-runs with the same --decls)
        have = "\n".join(v for k2, v in store.get("types", {}).items() if k2 != f"hand_{name}")
        defined = set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", have)) | \
            set(re.findall(r"\}\s*(\w+)\s*;", have)) | set(re.findall(r"^typedef\b[^{;]*?\b(\w+)\s*;", have, re.M))
        blocks, cur, depth = [], "", 0
        for ch in types:
            cur += ch
            depth += (ch == "{") - (ch == "}")
            if ch == ";" and depth == 0:
                blocks.append(cur); cur = ""
        blocks.append(cur)
        def names(b):
            return set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", b)) | \
                set(re.findall(r"\}\s*(\w+)\s*;", b)) | set(re.findall(r"^\s*typedef\b[^{;]*?\b(\w+)\s*;", b, re.M))
        types = "".join(b for b in blocks if not (names(b) and names(b) <= defined))
        if types.strip():
            store.setdefault("types", {})[f"hand_{name}"] = types.strip()
        import structify
        structify.SRC[a.module] = sd
        structify.write_decls(a.module, store)
    # C for all candidate versions first
    ents[k].vers = frozenset()
    ents.insert(k, FM.Entry(cand, "cfunc", name, body))
    f.write_text(FM.emit(ents, fv))
    keep, drop, fails = [], [], {}
    # versions build into their own tmp/build/<v>: build them in parallel
    import os
    from concurrent.futures import ThreadPoolExecutor
    allv = [(n, v) for n in sorted(cand) for v in byfw[n]]
    with ThreadPoolExecutor(int(os.environ.get("HAND_JOBS", "4"))) as ex:
        res = dict(zip(allv, ex.map(lambda nv: build(nv[1], a.module), allv)))
    for n in sorted(cand):
        bad = [res[(n, v)][1] for v in byfw[n] if not res[(n, v)][0]]
        if bad:
            fails.setdefault(n, bad[0])
        (drop if bad else keep).append(n)
    if not keep:
        out = fails.get(fw(a.ver)) or next(iter(fails.values()), "")
        for p, t in orig.items():
            p.write_text(t)
        build(a.ver, a.module)
        errs = [l for l in out.splitlines() if re.search(r"error:|warning: implicit|differ|FAILED|mismatch", l)]
        print(f"{name}: no version matches; build output for {a.ver}:")
        print("\n".join((errs or out.splitlines())[-15:]))
        return None
    if drop:
        ents = FM.parse(orig[f], fv)
        k = next(i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and fw(a.ver) in e.vers)
        ents[k].vers = frozenset(drop)
        ents.insert(k, FM.Entry(frozenset(keep), "cfunc", name, body))
        f.write_text(FM.emit(FM.dedupe(ents), fv))
    return name, keep, drop


if __name__ == "__main__":
    main()
