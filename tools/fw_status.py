#!/usr/bin/env python3
"""Per firmware version: modules, modules built from C, C functions/total.

    tools/fw_status.py [VERSION ...]

C functions are the definitions the preprocessed source has for that version;
totals count the functions splat found (tmp/asm must exist, i.e. after a build).
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import sharing_versions, src_dir  # noqa: E402
import fwmodel as FM  # noqa: E402


def c_defs(cfile, ver):
    v = re.match(r"\d+", ver)[0]
    r = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-Iinclude", f"-I{cfile.parent}", f"-DFW_VERSION={v}",
                        "-DM2CTX", str(cfile)], cwd=ROOT, capture_output=True, text=True)
    return len(re.findall(r"^(?!static)[^\n;#]*\b\w+\([^;{}]*\)\s*\{", r.stdout, re.M))


def main():
    vers = sys.argv[1:] or sorted((p.name for p in (ROOT / "config").iterdir() if p.is_dir()),
                                  key=lambda v: (int(re.match(r"\d+", v)[0]), v))
    print(f"{'FW':>6} {'modules':>7} {'in C':>5} {'C funcs':>8} {'funcs':>7} {'%':>6}")
    for v in vers:
        mods = c = cf = tot = 0
        for cfg in sorted((ROOT / "config" / v).glob("*.yaml")):
            mod = cfg.stem
            mods += 1
            asm = ROOT / "tmp/asm" / v / mod
            n = sum(len(re.findall(r"^glabel ", p.read_text(), re.M)) for p in asm.rglob("*.s")) if asm.exists() else 0
            tot += n
            if re.search(rf"^\s+- \[0x[0-9A-Fa-f]+, c, {mod}\w*\]", cfg.read_text(), re.M):
                c += 1
                fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(v, mod)})
                me = int(re.match(r"\d+", v)[0])
                n = 0
                for f in src_dir(v, mod).glob("*.c"):
                    ents = [e for e in FM.parse(f.read_text(), fv) if me in e.vers]
                    k = sum(1 for e in ents if e.kind == "cfunc")
                    cf += k
                    n += k + sum(1 for e in ents if e.kind == "asm")
                tot += n - (sum(len(re.findall(r"^glabel ", p.read_text(), re.M)) for p in asm.rglob("*.s")) if asm.exists() else 0)
        pct = 100 * cf / tot if tot else 0
        print(f"{v:>6} {mods:>7} {c:>5} {cf:>8} {tot:>7} {pct:>5.1f}%")


if __name__ == "__main__":
    main()
