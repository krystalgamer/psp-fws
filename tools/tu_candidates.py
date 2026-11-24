#!/usr/bin/env python3
"""Suggest TU splits from per-function setting matches (tmp/auto_stats).

Functions that only match a setting other than their file's form runs; a run
of at least --min functions of one setting, uninterrupted by functions that
match the file's setting, becomes its own TU (cut before its first function
and again before the next function matching the file's setting).

Usage: tools/tu_candidates.py VERSION MODULE [--min 4]
Prints split_tu.py arguments.
"""
import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import libnames as N  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--min", type=int, default=4)
    a = ap.parse_args()
    stats = json.loads((ROOT / "tmp/auto_stats" / f"{a.version}_{a.module}.json").read_text())["funcs"]
    src = ROOT / "src" / a.module / f"{a.module}.c"
    m = re.search(r"cflags: (-O[0-3s](?: -f[\w-]+)*)", src.read_text())
    own = f"1.7.1 {m[1] if m else '-O2'}"
    funcs = N.module_funcs(a.version, a.module)
    sets = [(addr, name, {x.split(" ", 1)[1] for x in stats.get(name, [])}) for addr, name, _ in funcs]
    files = sorted((ROOT / "src" / a.module).glob("*.c"))
    texts = {f: f.read_text() for f in files}
    asm_text = "".join(texts.values())
    in_c = {n for _, n, _ in funcs if f", {n});" not in asm_text}
    file_opt = {}
    for f, txt in texts.items():
        mm = re.search(r"cflags: (-O[0-3s](?: -f[\w-]+)*)", txt)
        opt = mm[1] if mm else "-O2"
        for n in re.findall(r"INCLUDE_ASM\(\"[^\"]+\", (\w+)\)", txt) + re.findall(r"^[^\n;]*\b(\w+)\([^;{]*\)\s*\{$", txt, re.M):
            file_opt[n] = opt
    starts = {int(f.stem.rsplit("_", 1)[1], 16) for f in files if re.fullmatch(rf"{a.module}_[0-9A-F]{{6}}", f.stem)}
    own_opt = own.split(" ", 1)[1]
    cuts = []
    i = 0
    while i < len(sets):
        s = sets[i][2]
        own_opt = file_opt.get(sets[i][1], own_opt)
        if not s or own_opt in s:
            i += 1
            continue
        lab = sorted(s)[0]
        j, count, end = i, 0, i
        # extend while functions are unknown or compatible with lab; stop at
        # one that matches the file's setting but not lab
        while j < len(sets) and (not sets[j][2] or lab in sets[j][2] or own_opt not in sets[j][2]):
            if sets[j][1] in in_c and lab not in sets[j][2]:
                break  # already C with the file's setting
            if lab in sets[j][2]:
                count, end = count + 1, j
            elif sets[j][2]:
                break
            j += 1
        if count >= a.min and sets[i][0] not in starts:
            cuts.append(f"{sets[i][1]}:{lab}")
            if end + 1 < len(sets) and sets[end + 1][0] not in starts:
                cuts.append(sets[end + 1][1])
            print(f"# {lab}: {count} functions 0x{sets[i][0]:X}-0x{sets[end][0]:X}", file=sys.stderr)
        i = max(j, i + 1)
    import shlex
    print(" ".join(shlex.quote(c) for c in cuts))


if __name__ == "__main__":
    main()
