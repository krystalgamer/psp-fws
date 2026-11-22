#!/usr/bin/env python3
"""Run m2c on a nonmatching function with project headers as context.

Usage: tools/m2c.py <function> [--version 360] [--module mcctrl] [m2c args...]
INCLUDE_ASM files use numeric registers (for old psp-as); m2c wants ABI names.
"""
import argparse
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ABI = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3",
       "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
       "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
       "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("function")
    ap.add_argument("--version", default="360")
    ap.add_argument("--module", default="mcctrl")
    args, rest = ap.parse_known_args()

    asm = ROOT / "tmp/asm" / args.version / args.module / "nonmatchings" / args.module / f"{args.function}.s"
    text = re.sub(r"\$(\d+)\b", lambda m: "$" + ABI[int(m[1])], asm.read_text())

    src = ROOT / "src" / args.module
    ctx = subprocess.run(
        ["cpp", "-P", "-undef", "-nostdinc", "-DM2CTX", f"-I{ROOT / 'include'}", f"-I{src}", "-"],
        input="".join(p.read_text() for p in sorted(src.glob("*.c"))),
        capture_output=True, text=True, check=True,
    ).stdout

    with tempfile.TemporaryDirectory() as td:
        (Path(td) / "f.s").write_text(text)
        (Path(td) / "ctx.c").write_text(ctx)
        r = subprocess.run(
            [sys.executable, "-m", "m2c.main", "-t", "mips-gcc-c", "--context", str(Path(td) / "ctx.c"),
             *rest, str(Path(td) / "f.s")],
        )
    sys.exit(r.returncode)


if __name__ == "__main__":
    main()
