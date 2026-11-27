#!/usr/bin/env python3
"""Object boundaries forced by gcc 3.3's const/pure marking.

    tools/pure_cuts.py VER MODULE

gcc 3.3 marks a function defined earlier in the same file const/pure when it
has no side effects, and then deletes or merges calls to it. A call that the
original keeps to such a function therefore crosses an object boundary. For
every function that is C or matches as a draft (tmp/auto_stats, own setting),
calls to an earlier function in the same source file that is also C/matching
and looks pure in the original code (no stores except to its own stack
frame, no calls, no syscall/sync/cache/cop0) need a new TU at the caller.
Prints those callers (cut points) in address order, with the callee.
"""
import json
import re
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import fwmodel as FM  # noqa: E402


def pure(words):
    for w in words:
        op = w >> 26
        rs = (w >> 21) & 31
        if op in (0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x39) and rs != 29:  # stores not to $sp
            return False
        if op == 3 or (op == 0 and (w & 0x3F) in (0x09, 0x0C, 0x0F)):  # jal, jalr, syscall, sync
            return False
        if op in (0x10, 0x2F):  # cop0, cache
            return False
    return True


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    m = AD.Module(ver, mod)
    st = ROOT / "tmp/auto_stats" / f"{ver}_{mod}.json"
    stats = json.loads(st.read_text()) if st.exists() else {"funcs": {}}
    v = int(re.match(r"\d+", ver)[0])
    file_of, kind = {}, {}
    for f in m.files:
        if f.exists():
            for e in FM.parse(f.read_text(), m.fwvers):
                if v in e.vers and e.kind in ("asm", "cfunc"):
                    file_of[e.name] = f
                    kind[e.name] = e.kind
    own = {n for n, s in stats["funcs"].items() if s and any(x.startswith(m.setting.split()[0]) for x in s)}
    cee = {n for n in kind if kind[n] == "cfunc"} | (own & set(kind))
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    sy = elf.get_section_by_name(".symtab")
    rng = {s.name: (s["st_value"], s["st_size"]) for s in sy.iter_symbols()
           if s["st_info"]["type"] == "STT_FUNC" and s["st_size"]}
    at = {a: n for n, (a, _) in rng.items()}

    def words(n):
        a, size = rng[n]
        return struct.unpack_from(f"<{size // 4}I", m.base, m.text_off + a)

    cuts = {}
    for f in sorted(cee, key=lambda n: rng.get(n, (0, 0))[0]):
        if f not in rng:
            continue
        fa = rng[f][0]
        for w in words(f):
            if w >> 26 != 3:
                continue
            g = at.get(((w & 0x3FFFFFF) << 2) | (fa & 0xF0000000))
            if (g and g != f and g in cee and file_of.get(g) == file_of.get(f) and rng[g][0] < fa
                    and pure(words(g))):
                cuts.setdefault(f, g)
    # minimal set: a cut is needed only if its callee is after the previous cut
    kept, last = [], -1
    for f in sorted(cuts, key=lambda n: rng[n][0]):
        if rng[cuts[f]][0] >= last:
            kept.append(f)
            last = rng[f][0]
    for f in kept:
        print(f, cuts[f])
    print(f"{len(kept)} cuts ({len(cuts)} callers)", file=sys.stderr)


if __name__ == "__main__":
    main()
