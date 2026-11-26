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
        for v in vers:
            p = ROOT / "config" / v / f"symbol_addrs.{mod}.txt"
            t = new.get(p, "")
            if re.search(rf"^\s*{nw}\s*=", t, re.M):
                sys.exit(f"{v}: {nw} already defined")
            if re.search(rf"^\s*{old}\s*=", t, re.M):
                new[p] = re.sub(rf"^(\s*){old}(\s*=)", rf"\g<1>{nw}\g<2>", t, flags=re.M)
            elif AUTO.match(old) and any(old in s.read_text() for s in (ROOT / "tmp/asm" / v / mod).rglob("*.s")):
                addr = int(AUTO.match(old)[1], 16)
                if re.search(rf"=\s*0x0*{addr:X};", t, re.M | re.I):
                    sys.exit(f"{v}: 0x{addr:X} already named")
                new[p] = t.rstrip("\n") + f"\n{nw} = 0x{addr:08X};" + (" // type:func" if old.startswith("func_") else "") + "\n"
            else:
                print(f"{v}: {old} not found, skipped")
                continue
            print(f"{v}: {old} -> {nw}")
        src_renames[old] = nw
    for p, t in list(new.items()):
        if p.suffix in (".c", ".h", ".json"):
            for o, n in src_renames.items():
                t = re.sub(rf"\b{o}\b", n, t)
            new[p] = t
    if a.dry_run:
        return
    for p, t in new.items():
        if t != texts[p]:
            p.write_text(t)
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
