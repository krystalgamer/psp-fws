#!/usr/bin/env python3
"""Rename symbols of one module, per firmware version, and verify every binary.

    tools/rename_sym.py MODULE [VERS:]OLD=NEW ... [--dry-run]

VERS is a comma list of config versions (default: every version of MODULE).
For each version, a `OLD = 0x...;` line in config/<v>/symbol_addrs.<mod>.txt is
renamed; an auto name (D_/func_XXXXXXXX, address = suffix) that the version's
asm uses gets a new `NEW = 0xXXXXXXXX;` line instead. OLD is renamed to NEW in
the module's source directories (c/h/json), so a shared source may use NEW for
all versions once every version that resolves OLD has been renamed. Every
version is re-split and rebuilt; on any mismatch everything is restored.
"""
import argparse
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import src_dir  # noqa: E402

AUTO = re.compile(r"^(?:D|func)_([0-9A-F]{8})$")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("specs", nargs="+")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--force", action="store_true", help="NEW may already be used (same function/global in other versions)")
    a = ap.parse_args()
    mod = a.module
    allv = sorted(p.parent.name for p in (ROOT / "config").glob(f"*/{mod}.yaml"))
    texts, srcs = {}, set()
    for v in allv:
        srcs.add(src_dir(v, mod))
        p = ROOT / "config" / v / f"symbol_addrs.{mod}.txt"
        if p.exists():
            texts[p] = p.read_text()
    for d in srcs:
        for p in d.iterdir():
            if p.suffix in (".c", ".h", ".json"):
                texts[p] = p.read_text()
    new = dict(texts)
    src_renames = {}
    for spec in a.specs:
        m = re.match(r"^(?:([\w,]+):)?(\w+)=(\w+)$", spec)
        if not m:
            sys.exit(f"bad spec {spec}")
        vers = m[1].split(",") if m[1] else allv
        old, nw = m[2], m[3]
        csrc = re.sub(r'"(?:[^"\\\n]|\\.)*"', '""', "\n".join(t for p2, t in texts.items() if p2.suffix in (".c", ".h")))
        if not a.force and nw != old and re.search(rf"\b{nw}\b", csrc) and nw not in src_renames.values():
            sys.exit(f"{nw}: already used in the module's sources (another function or global?) — pick another name "
                     f"or rename that one first (--force if it is the same function/global in other versions)")
        for v in vers:
            p = ROOT / "config" / v / f"symbol_addrs.{mod}.txt"
            t = new.get(p, "")
            has_old = re.search(rf"^\s*{old}\s*=", t, re.M) or (
                AUTO.match(old) and any(old in s.read_text() for s in (ROOT / "tmp/asm" / v / mod).rglob("*.s")))
            if not has_old:
                print(f"{v}: {old} not found, skipped")
                continue
            if re.search(rf"^\s*{nw}\s*=", t, re.M):
                sys.exit(f"{v}: {nw} already defined")
            if re.search(rf"^\s*{old}\s*=", t, re.M):
                new[p] = re.sub(rf"^(\s*){old}(\s*=)", rf"\g<1>{nw}\g<2>", t, flags=re.M)
            elif AUTO.match(old) and any(old in s.read_text() for s in (ROOT / "tmp/asm" / v / mod).rglob("*.s")):
                addr = int(AUTO.match(old)[1], 16)
                if re.search(rf"=\s*0x0*{addr:X};", t, re.M | re.I):
                    sys.exit(f"{v}: 0x{addr:X} already named")
                ann = ["type:func"] if old.startswith("func_") else []
                if old.startswith("D_"):
                    # data VMAs overlap other segments: pin the rom offset splat printed for the label
                    for s in (ROOT / "tmp/asm" / v / mod / "data").glob("*.s"):
                        rm = re.search(rf"^dlabel {old}\n\s*/\* ([0-9A-F]+) {old[2:]} ", s.read_text(), re.M)
                        if rm:
                            ann.append(f"rom:0x{int(rm[1], 16):X}")
                            break
                new[p] = t.rstrip("\n") + f"\n{nw} = 0x{addr:08X};" + (" // " + " ".join(ann) if ann else "") + "\n"
            else:
                print(f"{v}: {old} not found, skipped")
                continue
            print(f"{v}: {old} -> {nw}")
        src_renames[old] = nw
        # the source rename is global: OLD must not also name data (INCLUDE_RODATA) or remain in other versions
        rest = [v for v in allv if v not in vers]
        if rest:
            import fwmodel as FM
            fv = sorted({int(re.match(r"\d+", x)[0]) for x in allv})
            restn = {int(re.match(r"\d+", x)[0]) for x in rest}
            mine = {int(re.match(r"\d+", x)[0]) for x in vers}
            for p2, t in texts.items():
                if p2.suffix != ".c":
                    continue
                for e in FM.parse(t, fv):
                    if e.name == old and e.kind in ("cfunc", "asm") and (e.vers & restn) and not (e.vers <= mine):
                        other = sorted(e.vers & restn)
                        sys.exit(f"{old}: {p2.name} has its own {e.kind} entry for versions {other} not being renamed; "
                                 f"the source rename is global — include those versions (if it is the same function) "
                                 f"or give that entry a different name first")
        joined = "\n".join(t for p2, t in texts.items() if p2.suffix == ".c")
        if re.search(rf"INCLUDE_RODATA\([^)]*\b{old}\)", joined) and not old.startswith("func_"):
            sys.exit(f"{old}: also an INCLUDE_RODATA entry in the shared source; renaming the C identifier would break "
                     f"the versions that include it as data — rename per version by hand")
        if AUTO.match(old) and old.startswith("func_") and len(vers) > 1:
            sizes = {}
            for v in vers:
                f = next((ROOT / "tmp/asm" / v / mod / "nonmatchings").glob(f"*/{old}.s"), None)
                if f:
                    sizes[v] = len(re.findall(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]{8} \*/", f.read_text(), re.M))
            if sizes and max(sizes.values()) > 1.5 * max(1, min(sizes.values())):
                print(f"WARNING: {old} has very different sizes across versions {sizes} — "
                      f"possibly different functions sharing an auto name; restrict with VERS:")
    for p, t in list(new.items()):
        if p.suffix in (".c", ".h"):
            for o, n in src_renames.items():
                t = re.sub(rf"\b{o}\b", n, t)
            new[p] = t
        elif p.suffix == ".json":
            # decls store: rename keys and values; merging into an existing key must agree
            import json
            store = json.loads(t)
            for sec, d in store.items():
                if not isinstance(d, dict):
                    continue
                out, renamed = {}, set()
                for k0, val in d.items():
                    k = k0
                    for o, n in src_renames.items():
                        k = re.sub(rf"\b{o}\b", n, k)
                        val = re.sub(rf"\b{o}\b", n, val) if isinstance(val, str) else val
                    if k in out and out[k] != val:
                        # renaming into an existing name: the existing (named, typed) declaration wins
                        if k0 != k and k not in renamed:
                            continue
                        if k in renamed and k0 == k:
                            out[k] = val
                            continue
                        sys.exit(f"{p.name}: {sec} '{k}' gets two different declarations:\n  {out[k]}\n  {val}")
                    out[k] = val
                    if k0 != k:
                        renamed.add(k)
                store[sec] = out
            new[p] = json.dumps(store, indent=1, sort_keys=True)
    if a.dry_run:
        return
    for p, t in new.items():
        if t != texts[p]:
            p.write_text(t)
    import json
    import structify
    for p, t in new.items():
        if p.suffix == ".json" and p.name.endswith("_decls.json") and t != texts[p]:
            m = p.name[:-len("_decls.json")]
            structify.SRC[m] = p.parent
            structify.write_decls(m, json.loads(t))
    r = subprocess.run(["tools/regress.sh"] + [f"{v}:{mod}" for v in allv], cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in texts.items():
            p.write_text(t)
        subprocess.run(["tools/regress.sh"] + [f"{v}:{mod}" for v in allv], cwd=ROOT, capture_output=True, text=True)
        sys.exit(f"{mod}: verification failed, restored: {bad[:3]}")
    print(f"{mod}: OK ({len(allv)} binaries)")


if __name__ == "__main__":
    main()
