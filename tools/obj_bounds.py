#!/usr/bin/env python3
"""Object (translation unit) boundaries of a module that was linked from many objects.

    tools/obj_bounds.py VER MODULE [--cuts]

Each object's .rodata is contiguous, and its string literals and jump tables
come out in the order the object's functions first use them, so a function
whose first new reference to one of them is below what the current object already used
starts a new object (shared string literals, already referenced in the
object, are no evidence). An object with static constructors ends with its
_GLOBAL__I_ function (an entry of the .ctors table), so the next function
starts a new object.

Prints one line per boundary: the latest function that can start the new
object and the earliest (the first function after the previous evidence),
plus which signal found it. --cuts prints only the latest-start function
names, in address order (split candidates). Needs a matching build.
"""
import re
import struct
import sys
from pathlib import Path

import yaml
from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    cuts_only = "--cuts" in sys.argv
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    secname = {i: s.name for i, s in enumerate(elf.iter_sections())}
    sy = elf.get_section_by_name(".symtab")
    sym = {}
    for s in sy.iter_symbols():
        if isinstance(s["st_shndx"], int) and s.name:
            sym[s.name] = (secname.get(s["st_shndx"], ""), s["st_value"])
    text = f".{mod}"
    funcs = sorted((s["st_value"], s["st_value"] + s["st_size"], s.name) for s in sy.iter_symbols()
                   if s["st_info"]["type"] == "STT_FUNC" and s["st_size"] and secname.get(s["st_shndx"]) == text
                   and "." not in s.name)
    cfg = yaml.safe_load((ROOT / "config" / ver / f"{mod}.yaml").read_text())
    subs = cfg["segments"][1]["subsegments"]
    ro_lo = min(s[0] for s in subs if isinstance(s, list) and len(s) >= 3 and s[1] == ".rodata") - 0x80
    ro_hi = next(s["start"] for s in subs if isinstance(s, dict) and s.get("type") == "prxpad"
                 and s.get("order") == ".rodata") - 0x80
    first_code = min(s[0] for s in subs if isinstance(s, list) and len(s) >= 3 and s[1] == "c") - 0x80
    funcs = [f for f in funcs if first_code <= f[0] < ro_lo]

    # Only data emitted where it is first used is evidence: string literals and
    # jump tables (file-scope variables and const tables come out in declaration order).
    first_use = set()
    for p in (ROOT / "tmp/asm" / ver / mod).rglob("*.s"):
        t = p.read_text()
        for sec in re.split(r"^\s*\.section\s+", t, flags=re.M)[1:]:
            if not sec.startswith((".rodata", ".late_rodata")):
                continue
            for m in re.finditer(r"^\s*(?:dlabel|jlabel|glabel)\s+(\w+)\n(.*?)(?=^\s*(?:enddlabel|dlabel|jlabel|glabel)\b)", sec, re.M | re.S):
                if m[1].startswith("jtbl_") or re.search(r"\.(asciz|ascii)\b", m[2]):
                    first_use.add(m[1])

    def region(name):
        sec, v = sym.get(name, ("", None))
        if v is None:
            return None
        if sec == text and ro_lo <= v < ro_hi and name in first_use:
            return "rodata"
        return None

    refs = {}
    for line in (ROOT / "tmp/build" / ver / f"reloc_addrs.{mod}.txt").read_text().splitlines():
        m = re.match(r"rom:0X([0-9A-F]+) reloc:MIPS_(?:LO16|32) symbol:(\w+)", line)
        if m:
            r = region(m[2])
            if r:
                refs.setdefault(int(m[1], 16) - 0x80, []).append((r, sym[m[2]][1]))
    # .ctors entries: _GLOBAL__I_ of objects with static constructors
    ctor_end = None
    crt = next((p for p in (ROOT / "src").glob(f"{mod}/{mod}_crtend.c")), None)
    gi = set()
    if crt:
        m = re.search(r"\bfor \(p = (\w+) - 1;", crt.read_text())
        if m and m[1] in sym:
            ctor_end = sym[m[1]][1]
            prx = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb"))
            base = (ROOT / "tmp/baserom" / ver / f"{mod}.prx").read_bytes()
            off = prx.get_segment(0)["p_offset"]
            a = ctor_end - 4
            fstart = {f[0]: f[2] for f in funcs}
            while True:
                w = struct.unpack_from("<I", base, off + a)[0]
                if w == 0xFFFFFFFF:
                    break
                if w in fstart:
                    gi.add(fstart[w])
                a -= 4
    bounds = []  # (latest start index, earliest start index, why)
    state = {r: (-1, set()) for r in ("rodata", "data", "bss")}
    last_ev = 0
    for i, (a, b, n) in enumerate(funcs):
        rs = [x for o, xs in refs.items() if a <= o < b for x in xs]
        hit = None
        for r in ("rodata", "data", "bss"):
            vals = [v for rr, v in rs if rr == r]
            cur, seen = state[r]
            new = [v for v in vals if v not in seen]
            if new and min(new) < cur:
                hit = r
        if hit:
            bounds.append((i, last_ev + 1, hit))
            state = {r: (-1, set()) for r in state}
        for r in ("rodata", "data", "bss"):
            vals = [v for rr, v in rs if rr == r]
            cur, seen = state[r]
            new = [v for v in vals if v not in seen]
            if new:
                state[r] = (max(cur, max(new)), seen | set(vals))
        if rs:
            last_ev = i
        if n in gi and i + 1 < len(funcs):
            bounds.append((i + 1, i + 1, "ctors"))
            state = {r: (-1, set()) for r in state}
            last_ev = i + 1
    seen_i = {}
    for latest, earliest, why in bounds:
        if latest not in seen_i or why == "ctors":
            seen_i[latest] = (earliest, why)
    if cuts_only:
        print(" ".join(funcs[i][2] for i in sorted(seen_i)))
        return
    for i in sorted(seen_i):
        e, why = seen_i[i]
        print(f"{funcs[i][2]} (earliest {funcs[min(e, i)][2]}) {why}")
    print(f"{len(seen_i)} boundaries in {len(funcs)} functions", file=sys.stderr)


if __name__ == "__main__":
    main()
