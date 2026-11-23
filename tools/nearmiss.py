#!/usr/bin/env python3
"""Per-function m2c near-miss report: best score with each compiler.

Usage: tools/nearmiss.py <version> <module>   (module must be split as C)
"""
import difflib
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import auto_decomp as a  # noqa: E402


def main():
    ver, mod_name = sys.argv[1], sys.argv[2]
    m = a.Module(ver, mod_name)
    h = '#include "common.h"\n#include "m2c_macros.h"\n'
    for name, (rom, end, p) in sorted(m.funcs.items(), key=lambda x: x[1][0]):
        out = a.run_m2c(m, name, h)
        if not out:
            print(f"{name:32} {end-rom:#6x} m2c-fail")
            continue
        d, b = a.split_m2c(out, name)
        if b is None:
            print(f"{name:32} {end-rom:#6x} no-body")
            continue
        t = m.target_words(name)
        scores = []
        for c in a.COMPILERS:
            w, e = a.compile_words(h + "\n".join(d) + "\n" + b, c)
            if w is None:
                scores.append(f"{c}:cerr")
                continue
            sm = difflib.SequenceMatcher(None, t, w, autojunk=False)
            scores.append(f"{c}:{max(len(t), len(w)) - sum(x.size for x in sm.get_matching_blocks())}")
        print(f"{name:32} {end-rom:#6x} {' '.join(scores)}")


if __name__ == "__main__":
    main()
