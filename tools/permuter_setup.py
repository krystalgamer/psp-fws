#!/usr/bin/env python3
"""Create a decomp-permuter directory for a NON_MATCHING function.

Usage: tools/permuter_setup.py <function> [--version 360] [--module mcctrl]
Then:  .venv/bin/python tmp/permuter/permuter.py tmp/perm/<function> -j 3
"""
import argparse
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TOOLS = ROOT / "tmp/toolchains/bin"


def top_level_items(text):
    """Split C text into top-level chunks (declarations or brace blocks)."""
    items, depth, start, i = [], 0, 0, 0
    while i < len(text):
        c = text[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                j = i + 1
                while j < len(text) and text[j] in " \t":
                    j += 1
                if j < len(text) and text[j] == ";":
                    i = j
                items.append(text[start:i + 1])
                start = i + 1
        elif c == ";" and depth == 0:
            items.append(text[start:i + 1])
            start = i + 1
        i += 1
    items.append(text[start:])
    return items


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("function")
    ap.add_argument("--version", default="360")
    ap.add_argument("--module", default="mcctrl")
    args = ap.parse_args()

    src = next(p for p in (ROOT / "src" / args.module).rglob("*.c") if re.search(rf"\b{args.function}\(", p.read_text()))
    out = ROOT / "tmp/perm" / args.function
    out.mkdir(parents=True, exist_ok=True)

    pre = subprocess.run(
        ["cpp", "-P", "-undef", "-nostdinc", "-Iinclude", "-Isrc", f"-I{src.parent}", "-DNON_MATCHING", "-DPERMUTER",
         f"-DVERSION={args.version}", str(src)],
        cwd=ROOT, capture_output=True, text=True, check=True,
    ).stdout
    keep = []
    for item in top_level_items(pre):
        body = item.strip()
        m = re.match(r"(?:[\w\s\*]+?)\b(\w+)\s*\([^;{]*\)\s*\{", body, re.S)
        if m and "inline" not in body.split("{", 1)[0] and m[1] != args.function:
            continue
        keep.append(item)
    (out / "base.c").write_text("".join(keep).strip() + "\n")

    asm = ROOT / "tmp/asm" / args.version / args.module / "nonmatchings" / src.stem / f"{args.function}.s"
    (out / "target.s").write_text(f'.include "macro.inc"\n.set noat\n.set noreorder\n.section .text\n{asm.read_text()}')
    subprocess.run([str(TOOLS / "mips-as"), "-EL", "-march=allegrex", "-G0", "--no-pad-sections", f"-I{ROOT / 'include'}",
                    "-o", str(out / "target.o"), str(out / "target.s")], check=True)

    (out / "compile.sh").write_text(f"""#!/bin/bash
set -e
IN="$1"; OUT="$3"
{TOOLS}/cc1-1.7.1 -O2 -G0 -quiet "$IN" -o "$OUT.s"
{TOOLS}/psp-as-1.3.1 -EL -G0 -o "$OUT" "$OUT.s"
{ROOT}/.venv/bin/python {ROOT}/tools/fix_old_gas.py --text-align 8 "$OUT"
rm -f "$OUT.s"
""")
    (out / "compile.sh").chmod(0o755)
    (out / "settings.toml").write_text(
        f'func_name = "{args.function}"\ncompiler_type = "gcc"\n'
        f'objdump_command = "{TOOLS}/mips-objdump -drz -m mips:allegrex"\n'
    )
    print(out)


if __name__ == "__main__":
    main()
