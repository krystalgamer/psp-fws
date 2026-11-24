#!/usr/bin/env python3
"""Classify functions of a binary by which compiler reproduces them.

Reads tmp/auto_stats/<ver>_<mod>.json produced by an auto_decomp run with
AUTO_COMPILERS="1.3.1 1.7.1" and prints, per module and in total, the functions
that match only 1.3.1, only 1.7.1, both, or neither (with their best score).

Usage: tools/compiler_survey.py VER:MOD [VER:MOD ...] [--list]
"""
import collections
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def classify(ver, mod):
    d = json.loads((ROOT / "tmp/auto_stats" / f"{ver}_{mod}.json").read_text())
    out = collections.defaultdict(list)
    for name, sets in d["funcs"].items():
        comps = {s.split()[0] for s in sets}
        score = (d["scores"].get(name) or [None])[0]
        if comps == {"1.3.1"}:
            k = "1.3.1 only"
        elif comps == {"1.7.1"}:
            k = "1.7.1 only"
        elif comps:
            k = "both"
        elif score is not None and score <= 3:
            k = "neither (near)"
        else:
            k = "neither"
        out[k].append((name, sorted(sets), score))
    return out


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    total = collections.Counter()
    for vm in args:
        ver, mod = vm.split(":")
        try:
            c = classify(ver, mod)
        except FileNotFoundError:
            print(f"{vm}: no stats")
            continue
        total.update({k: len(v) for k, v in c.items()})
        print(f"{vm}: " + ", ".join(f"{k} {len(v)}" for k, v in sorted(c.items())))
        if "--list" in sys.argv:
            for k in ("1.3.1 only", "1.7.1 only"):
                for name, sets, _ in c.get(k, []):
                    print(f"    {k}: {name} {sets}")
    print("TOTAL: " + ", ".join(f"{k} {v}" for k, v in sorted(total.items())))


if __name__ == "__main__":
    main()
