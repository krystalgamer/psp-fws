#!/usr/bin/env python3
"""Move a module's C decompilation to another firmware version's binary.

Converts config/<new>/<mod>.yaml to C, auto-decompiles it from scratch and
keeps the result only if it has more C functions than the current version and
the module matches from scratch; the old version's config then goes back to
asm-only. Otherwise everything is restored.

Usage: tools/switch_ver.py NEWVERSION MODULE [--opt -Os] [--dry-run]
"""
import argparse
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from breadth import cleanup, to_c  # noqa: E402

FUNC = re.compile(r"^[A-Za-z][A-Za-z0-9_ *]*\b[A-Za-z0-9_]+\([^;{]*\)\s*\{", re.M)


def count(mod):
    return sum(len(FUNC.findall(p.read_text())) for p in (ROOT / "src" / mod).glob("*.c"))


def run(cmd):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    return r.returncode, r.stdout + r.stderr


def c_version(mod):
    for cfg in (ROOT / "config").glob(f"*/{mod}.yaml"):
        if re.search(rf"^\s+- \[0x[0-9A-F]+, c, {mod}\]", cfg.read_text(), re.M):
            return cfg.parent.name
    return None


def to_asm(cfg, mod):
    t = cfg.read_text()
    t = re.sub(rf"^(\s+- \[0x[0-9A-F]+, )c(, {mod}\])$", r"\1asm\2", t, flags=re.M)
    t = re.sub(rf"^(\s+- \[0x[0-9A-F]+, )\.rodata(, {mod}\])$", r"\1rodata\2", t, flags=re.M)
    cfg.write_text(t)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--opt")
    ap.add_argument("--dry-run", action="store_true", help="report the count, always restore")
    a = ap.parse_args()
    mod, new = a.module, a.version
    old = c_version(mod)
    if old == new:
        print(f"{new}:{mod}: already the C version")
        return
    src = ROOT / "src" / mod
    new_cfg = ROOT / "config" / new / f"{mod}.yaml"
    old_cfg = ROOT / "config" / old / f"{mod}.yaml"
    if run(["git", "diff", "--quiet", "--", str(src), str(new_cfg), str(old_cfg)])[0]:
        print(f"{new}:{mod}: local changes, skipping")
        return
    before = count(mod)
    log = open(ROOT / f"tmp/switchver_{new}_{mod}.log", "w")
    ok = False
    after = 0
    try:
        shutil.rmtree(src)
        to_asm(old_cfg, mod)
        to_c(new_cfg, mod)
        rc, out = run(["make", "extract", "split", f"VERSION={new}", f"MODULE={mod}"])
        log.write(out)
        if rc == 0:
            if a.opt:
                f = src / f"{mod}.c"
                f.write_text(f"/* cflags: {a.opt} */\n" + f.read_text())
            rc, out = run([sys.executable, "tools/auto_decomp.py", new, mod, "--max-size", "0x400"])
            log.write(out)
            after = count(mod)
            if after > before and not a.dry_run:
                rc1, out1 = run(["tools/regress.sh", f"{new}:{mod}"])
                rc2, out2 = run(["tools/regress.sh", f"{old}:{mod}"])
                log.write(out1 + out2)
                ok = rc1 == 0 and rc2 == 0
    finally:
        if not ok:
            shutil.rmtree(src, ignore_errors=True)
            run(["git", "checkout", "-q", "--", str(src), str(new_cfg), str(old_cfg)])
        cleanup(new, mod)
        cleanup(old, mod)
    print(f"{new}:{mod} (from {old}): {'OK' if ok else 'kept'} {before} -> {after}")


if __name__ == "__main__":
    main()
