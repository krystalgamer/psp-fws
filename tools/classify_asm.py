#!/usr/bin/env python3
"""Classify the asm functions still in a firmware version (Phase 0.3 of the pre-2.00 plan).

    tools/classify_asm.py VER [MODULE...] > table.tsv

Per INCLUDE_ASM function compiled for VER: size, and a class:
  special   uses instructions psp-gcc only emits from inline asm or never
            (cop0, cache, sync, eret, syscall, VFPU, ll/sc, mfic/mtic, halt...):
            hand-written asm or C with inline asm - check before hand work
  leaf-odd  no `jr $ra` return (tail jump tables, entry stubs, fallthrough)
  compiler  everything else: expected to come from C
Also the closest auto_decomp score (tmp/auto_stats) when known.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

SPECIAL = re.compile(r"^\s*/\*[^*]*\*/\s+(mfc0|mtc0|cfc0|ctc0|cache|sync|eret|syscall|halt|mfic|mtic|ll|sc|"
                     r"lv\.\w|sv\.\w|lvl|lvr|svl|svr|v\w+\.[sptq]|mfv|mtv|mfvc|mtvc|vsync|vnop|vflush|"
                     r"dbreak|dret|mfdr|mtdr|bitrev|wsbw)\b", re.M)


def classify(path):
    t = path.read_text()
    ins = len(re.findall(r"^\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/", t, re.M))
    sp = sorted(set(m[1] for m in SPECIAL.finditer(t)) - {"bitrev", "wsbw"})
    if sp:
        return "special", ins, ",".join(sp)
    if not re.search(r"\bjr\s+\$(31|ra)\b", t):
        return "leaf-odd", ins, ""
    return "compiler", ins, ""


def main():
    ver = sys.argv[1]
    v = int(re.match(r"\d+", ver)[0])
    mods = sys.argv[2:] or sorted(c.stem for c in (ROOT / "config" / ver).glob("*.yaml"))
    print("module\tfunction\tclass\tinsns\tdetail\tscore")
    for mod in mods:
        cfg = ROOT / "config" / ver / f"{mod}.yaml"
        if not re.search(rf", c, {mod}", cfg.read_text()):
            continue
        fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(ver, mod)}) or [v]
        st = ROOT / "tmp/auto_stats" / f"{ver}_{mod}.json"
        scores = json.loads(st.read_text())["scores"] if st.exists() else {}
        asm = ROOT / "tmp/asm" / ver / mod / "nonmatchings"
        for f in src_dir(ver, mod).glob("*.c"):
            for e in FM.parse_ro(f.read_text(), fv):
                if e.kind != "asm" or v not in e.vers:
                    continue
                p = asm / f.stem / f"{e.name}.s"
                if not p.exists():
                    continue
                c, n, d = classify(p)
                s = scores.get(e.name)
                print(f"{mod}\t{e.name}\t{c}\t{n}\t{d}\t{'' if not s or s[0] is None else s[0]}")


if __name__ == "__main__":
    main()
