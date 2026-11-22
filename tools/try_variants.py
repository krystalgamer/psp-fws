#!/usr/bin/env python3
"""Try source variants of a function and report diff counts.

Usage: tools/try_variants.py <function> <variants.py>
variants.py defines VARIANTS = {name: [(old, new), ...]}. Replacements are
applied in order, only within the function's definition (from its signature to
the next top-level closing brace). The original file is always restored.
Builds with -DNON_MATCHING.
"""
import importlib.util
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main():
    func, vfile = sys.argv[1], sys.argv[2]
    spec = importlib.util.spec_from_file_location("v", vfile)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    src = next(p for p in (ROOT / "src").rglob("*.c") if func in p.read_text())
    base = src.read_text()
    m = re.search(rf"^[^\n;]*\b{func}\([^;{{]*\)\s*{{", base, re.M)
    if not m:
        raise SystemExit(f"definition of {func} not found")
    fstart, fend = m.start(), base.index("\n}\n", m.start()) + 3
    obj = ROOT / "tmp/build/360" / src.relative_to(ROOT).with_suffix(".c.o")
    try:
        for name, subs in mod.VARIANTS.items():
            f = base[fstart:fend]
            for old, new in subs:
                if old not in f:
                    print(f"{name}: pattern not found: {old[:40]!r}")
                    break
                f = f.replace(old, new, 1)
            else:
                src.write_text(base[:fstart] + f + base[fend:])
                obj.unlink(missing_ok=True)
                r = subprocess.run(["make", "EXTRA_CPPFLAGS=-DNON_MATCHING"], cwd=ROOT, capture_output=True, text=True)
                if not obj.exists():
                    err = [l for l in (r.stdout + r.stderr).splitlines() if "error" in l.lower()]
                    print(f"{name}: build error: {err[:2]}")
                    continue
                d = subprocess.run([sys.executable, "tools/diff.py", func, "--score"], cwd=ROOT, capture_output=True, text=True)
                print(f"{name}: {d.stdout.strip().splitlines()[-1] if d.stdout else d.stderr.strip()[-200:]}")
    finally:
        src.write_text(base)


if __name__ == "__main__":
    main()
