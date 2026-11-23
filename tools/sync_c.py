#!/usr/bin/env python3
"""Rebuild a module's C file from a fresh splat split, keeping decompiled code.

Used when function boundaries change: the old C file is moved aside, splat
writes a new one (INCLUDE_ASM/INCLUDE_RODATA in the new layout), and every
function that was C in the old file is transplanted over its INCLUDE_ASM
(with any preceding #ifdef NON_MATCHING ... #else ... #endif wrapper kept).
The old file's preamble (everything before the first function or
INCLUDE_ASM) replaces the generated one. Functions that no longer exist
under the same name are reported and dropped.

Usage: tools/sync_c.py <version> <module>
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
FUNC = re.compile(r"^(?:#ifdef NON_MATCHING\n(?:/\*.*?\*/\n)?)?[^\n;#/]*?\b(\w+)\([^;{]*\)\s*\{\n.*?^\}\n(?:#else\n.*?#endif\n)?", re.M | re.S)


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    src_dir = ROOT / "src" / mod
    src = src_dir / f"{mod}.c"
    old = src.read_text()
    first = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA|#ifdef NON_MATCHING|[^\n;#/ ][^\n;]*\([^;{]*\)\s*\{)", old, re.M)
    preamble = old[:first.start()] if first else ""
    bodies = {m[1]: m.group(0) for m in FUNC.finditer(old[first.start():] if first else old)}
    backup = src.with_suffix(".c.old")
    src.rename(backup)
    try:
        r = subprocess.run(["make", "split", f"VERSION={ver}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
        if r.returncode or not src.exists():
            raise SystemExit("split failed:\n" + r.stdout[-2000:] + r.stderr[-2000:])
        new = src.read_text()
        nfirst = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA)", new, re.M)
        new = preamble + new[nfirst.start():] if nfirst else preamble + new
        kept = 0
        for name, body in bodies.items():
            pat = re.compile(rf'^INCLUDE_ASM\("[^"]+", {name}\);\n', re.M)
            if pat.search(new):
                new = pat.sub(lambda _: body, new, count=1)
                kept += 1
            else:
                print(f"dropped {name} (no longer a function)")
        src.write_text(new)
        backup.unlink()
        print(f"{src}: kept {kept}/{len(bodies)} C functions")
    except BaseException:
        if src.exists():
            src.unlink()
        backup.rename(src)
        raise


if __name__ == "__main__":
    main()
