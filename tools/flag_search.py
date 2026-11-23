#!/usr/bin/env python3
"""Find compiler flags that turn near-miss functions into matches.

For INCLUDE_ASM functions of a split module whose best auto_decomp score is
small, re-run m2c and compile the result with each candidate flag set; print
how many functions match per flag set.

Usage: tools/flag_search.py VERSION MODULE [--max-score 4] [--limit 60]
"""
import argparse
import collections
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import auto_decomp as ad  # noqa: E402

BASES = ["-O2", "-Os", "-O1"]
EXTRA = ["", "-frename-registers", "-fno-schedule-insns", "-fno-schedule-insns2", "-fschedule-insns",
         "-fno-gcse", "-fno-strength-reduce", "-fno-delayed-branch", "-fomit-frame-pointer",
         "-fno-optimize-sibling-calls", "-fno-cse-follow-jumps", "-fno-rerun-cse-after-loop",
         "-fno-reorder-blocks", "-fno-if-conversion", "-fno-if-conversion2", "-fno-crossjumping",
         "-fno-peephole2", "-fno-regmove", "-fno-expensive-optimizations", "-fno-caller-saves",
         "-fno-force-mem", "-fno-thread-jumps", "-fstrict-aliasing", "-fno-strict-aliasing",
         "-frename-registers -fno-schedule-insns2", "-frename-registers -fno-schedule-insns",
         "-mno-check-zero-division", "-fno-defer-pop", "-fno-merge-constants"]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--max-score", type=int, default=4)
    ap.add_argument("--limit", type=int, default=60)
    a = ap.parse_args()
    mod = ad.Module(a.version, a.module)
    stats = json.loads((ad.ROOT / "tmp/auto_stats" / f"{a.version}_{a.module}.json").read_text())
    src = mod.src.read_text()
    names = [m[2] for m in ad.INC.finditer(src)]
    near = [n for n in names if n in mod.funcs and stats["scores"].get(n)
            and stats["scores"][n][0] is not None and 0 < stats["scores"][n][0] <= a.max_score]
    near = near[:a.limit]
    header = '#include "common.h"\n#include "m2c_macros.h"\n' + "\n".join(mod.store["vars"].values()) + "\n" + \
        "\n".join(mod.store["funcs"].values()) + "\n"
    wins = collections.Counter()
    per = {}
    for n in near:
        guessed = ad.guess_callees(mod, n)
        ctx = header + "\n".join(guessed.values()) + "\n"
        out = ad.run_m2c(mod, n, ctx)
        if not out:
            continue
        decls, body = ad.split_m2c(out, n)
        if body is None:
            continue
        text = ctx + "\n".join(d for d in decls if not d.startswith("M2C_UNK")) + "\n" + body
        target = mod.target_words(n)
        ok = []
        for b in BASES:
            for e in EXTRA:
                fl = f"{b} {e}".strip()
                words, _ = ad.compile_words(text, mod.compiler, fl)
                if words == target:
                    ok.append(fl)
        per[n] = ok
        for fl in ok:
            wins[fl] += 1
        print(f"{n}: {len(ok)} {ok[:4]}", flush=True)
    print(f"\n{len(per)} near-miss functions; matches per flag set:")
    for fl, c in wins.most_common(25):
        print(f"{c:4} {fl}")


if __name__ == "__main__":
    main()
