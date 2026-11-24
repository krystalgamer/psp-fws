#!/usr/bin/env python3
"""Set up decomp-permuter directories for auto_decomp near misses.

For each INCLUDE_ASM function whose best auto_decomp score is within --max-score
words, write tmp/perm/<module>/<function>/ with base.c (m2c output with the
module's context), target.o (the original asm) and compile.sh (the function's
file setting), ready for `tmp/permuter/permuter.py DIR`.

Usage: tools/perm_near.py VERSION MODULE [--max-score 2] [--limit 20]
Needs a fresh split of the module.
"""
import argparse
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import auto_decomp as ad  # noqa: E402

ROOT = ad.ROOT
TOOLS = ad.TOOLS


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--max-score", type=int, default=2)
    ap.add_argument("--limit", type=int, default=20)
    a = ap.parse_args()
    mod = ad.Module(a.version, a.module)
    stats = json.loads((ROOT / "tmp/auto_stats" / f"{a.version}_{a.module}.json").read_text())
    src = mod.all_text()
    near = [n for n, (s, _) in stats["scores"].items()
            if s is not None and 0 < s <= a.max_score and f", {n});" in src and n in mod.funcs][:a.limit]
    header = mod.header()
    made = []
    for n in near:
        compiler, setting = ad.Module.file_setting(mod.file_of(n))
        opt = setting.split(" ", 1)[1]
        body = None
        for target in ad.M2C_TARGETS:
            guessed = ad.guess_callees(mod, n, target)
            ctx = header + "\n".join(guessed.values()) + "\n"
            out = ad.run_m2c(mod, n, ctx, target)
            if not out:
                continue
            out = ad.stack_base_local(ad.join_halves(out), n)
            decls, body = ad.split_m2c(out, n)
            if body:
                if re.search(r"\bk1\b", body):
                    body = ad.k1_helpers(body)
                break
        if not body or re.search(r"\b(goto|sp|saved_reg_\w+)\b", body):
            continue
        text = ctx + "\n".join(d for d in decls) + "\n" + body
        pre = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", f"-I{ROOT / 'include'}", "-"],
                             input=text, capture_output=True, text=True).stdout
        d = ROOT / "tmp/perm" / a.module / n
        shutil.rmtree(d, ignore_errors=True)
        d.mkdir(parents=True)
        (d / "base.c").write_text(pre)
        asm = mod.funcs[n][2]
        (d / "target.s").write_text(f'.include "macro.inc"\n.set noat\n.set noreorder\n.section .text\n{asm.read_text()}')
        r = subprocess.run([str(TOOLS / "mips-as"), "-EL", "-march=allegrex", "-G0", "--no-pad-sections",
                            f"-I{ROOT / 'include'}", "-o", str(d / "target.o"), str(d / "target.s")], capture_output=True)
        if r.returncode:
            shutil.rmtree(d)
            continue
        (d / "compile.sh").write_text(f"""#!/bin/bash
set -e
IN="$1"; OUT="$3"
{TOOLS}/cc1-{compiler} {opt} -G0 -quiet "$IN" -o "$OUT.s"
{TOOLS}/psp-as-1.3.1 -EL -G0 -mulsw -I{ROOT} -o "$OUT" "$OUT.s"
rm -f "$OUT.s"
""")
        (d / "compile.sh").chmod(0o755)
        (d / "settings.toml").write_text(
            f'func_name = "{n}"\ncompiler_type = "gcc"\n'
            f'objdump_command = "{TOOLS}/mips-objdump -drz -m mips:allegrex"\n')
        made.append(str(d))
    print("\n".join(made))


if __name__ == "__main__":
    main()
