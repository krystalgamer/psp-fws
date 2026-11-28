#!/usr/bin/env python3
"""Put a hand-written C function into a shared source and keep it where it matches.

    tools/hand.py VER MODULE FILE.c [FILE2.c ...] [--decls DECLS.h]

FILE.c holds one function definition (its name must be an INCLUDE_ASM entry
compiled for VER). The C replaces that entry for every version compiling the
same entry, and for the versions of the function's other asm entries in the
same file (separate `#if FW_VERSION` blocks); each of those versions is rebuilt,
and the C is kept only for the versions that still match (the others keep the
asm). Optional --decls lines
(types, externs, prototypes) are added to the module's decls (json "types"
under "hand", vars/funcs by name). Prints the versions that kept the C.
"""
import argparse
import json
import os
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
    import fcntl
    (ROOT / "tmp").mkdir(exist_ok=True)
    _lk = open(ROOT / "tmp" / "hand.lock", "a")
    fcntl.flock(_lk, fcntl.LOCK_EX)  # hand_try in this tree waits until the sources are consistent again
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("module")
    ap.add_argument("cfiles", nargs="+", help="one function per file; several files share one final regress")
    ap.add_argument("--decls", help="applied with every file (idempotent)")
    a = ap.parse_args()
    sd = src_dir(a.ver, a.module)
    snap = {p: p.read_text() for p in list(sd.glob("*.c")) + list(sd.glob("*_decls.*"))}
    if os.environ.get("HAND_PREFLIGHT", "1") == "1":
        # the shared source must build in every version before anything is inserted
        from concurrent.futures import ThreadPoolExecutor
        vs = sharing_versions(a.ver, a.module)
        with ThreadPoolExecutor(int(os.environ.get("HAND_JOBS", "4"))) as ex:
            bad = [v for v, (ok, _) in zip(vs, ex.map(lambda v: build(v, a.module), vs)) if not ok]
        if bad:  # a stale split/asm state (e.g. right after another tool) gives false failures: re-split those once
            subprocess.run(["tools/regress.sh"] + [f"{v}:{a.module}" for v in bad], cwd=ROOT, capture_output=True)
            bad = [v for v in bad if not build(v, a.module)[0]]
        if bad:
            sys.exit(f"pre-flight: {a.module} does not build in {bad} before any change — fix that first "
                     f"(HAND_PREFLIGHT=0 to skip)")
    done = []
    for i, cf in enumerate(a.cfiles):
        r = one(a, cf, a.decls)
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
        # tmp/asm was split from the broken state: rebuild every sharing version from the restored sources
        subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
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
    # every asm entry of the function in this file (other versions' separate entries too): the C is tried
    # in all of them and kept wherever it matches
    ks = [i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and e.vers]
    k = next(i for i in ks if fw(a.ver) in ents[i].vers)
    cand = frozenset().union(*(ents[i].vers for i in ks))
    if decls:
        store_p = sd / f"{a.module}_decls.json"
        store = json.loads(store_p.read_text())
        extra = Path(decls).read_text()
        # comments may contain ';' or look like declarations
        extra = re.sub(r"/\*.*?\*/", "", extra, flags=re.S)
        extra = re.sub(r"//[^\n]*", "", extra)
        kept = []
        for line in extra.splitlines():
            st = line.strip()
            fpm = re.match(r"^extern .*\(\s*\*\s*(\w+)\s*\)\s*\(.*\);$", st)  # extern T (*fp)(...);
            vm = re.match(r"^extern .*?\b(\w+)(\[[^\]]*\])*;$", st)
            fm = re.match(r"^(?!extern|typedef|struct|union|enum)[\w\s\*]+?\b(\w+)\(.*\);$", st)
            if fpm:
                store["vars"][fpm[1]] = st
            elif vm:
                store["vars"][vm[1]] = st
            elif fm:
                store["funcs"][fm[1]] = st
            else:
                kept.append(line)
        types = "\n".join(kept)
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
    # the function's own prototype follows its definition (a stale m2c guess would conflict), except a
    # deliberately unprototyped `T name();` and one given in --decls (both are the user's choice)
    store_p = sd / f"{a.module}_decls.json"
    store = json.loads(store_p.read_text())
    sig = re.match(r"^(?!static)([^\n;#{]*?\b" + re.escape(name) + r"\([^;{}]*\))\s*\{", body, re.M)
    old_p = store["funcs"].get(name, "")
    given = bool(decls) and re.search(rf"\b{re.escape(name)}\s*\(", re.sub(r"/\*.*?\*/|//[^\n]*", "",
                                                                         Path(decls).read_text(), flags=re.S))
    unproto = re.search(rf"\b{re.escape(name)}\s*\(\s*\)\s*;", old_p)
    if sig and name in store["funcs"] and old_p != " ".join(sig[1].split()) + ";" and not unproto and not given:
        print(f"{name}: prototype `{old_p}` replaced by `{' '.join(sig[1].split())};` (from the definition)")
        store["funcs"][name] = " ".join(sig[1].split()) + ";"
        import structify
        structify.SRC[a.module] = sd
        structify.write_decls(a.module, store)
    # C for all candidate versions first
    for i in reversed(ks):
        ents.insert(i, FM.Entry(ents[i].vers, "cfunc", name, body))
        ents[i + 1].vers = frozenset()
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
        ks = [i for i, e in enumerate(ents) if e.kind == "asm" and e.name == name and e.vers]
        for i in reversed(ks):
            kv = ents[i].vers & frozenset(keep)
            ents[i].vers = ents[i].vers - kv
            ents.insert(i, FM.Entry(kv, "cfunc", name, body))
        f.write_text(FM.emit(FM.dedupe(ents), fv))
    elif len(ks) > 1:
        f.write_text(FM.emit(FM.dedupe(FM.parse(f.read_text(), fv)), fv))
    if len(ks) > 1:
        print(f"{name}: {len(ks)} asm entries in {f.name} (tried in all of them)")
    return name, keep, drop


if __name__ == "__main__":
    main()
