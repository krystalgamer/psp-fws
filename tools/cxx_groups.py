#!/usr/bin/env python3
"""gcc 3.3 C++ constructor/destructor clone groups and their vtables, across versions.

    tools/cxx_groups.py MODULE [--ver 100] [--versions 100,150,...] [--json OUT]

An out-of-line ctor is emitted twice (C2 then C1, identical), a dtor as D2, D1 (identical)
and, if virtual, D0 = D1 + operator delete (_ZdlPv). This finds such groups in each
version's baserom (adjacent identical functions, `j` targets compared relative to the
function), reads the vptr each group stores (`lui/addiu rX; sw rX, 0(this)`; the vtable
symbol is vptr - 8: offset-to-top and the (-fno-rtti: 0) typeinfo slot), the base-class
call (first jal), and matches groups across versions by shape. Prints one block per group:

    G3 dtor D2/D1/D0 sizes 0x28/0x28/0x38 vptr-label/base per version
      100: func_00005CBC func_00005CE4 func_00005D0C  vptr 0x1F908 D_0001F908  base func_00015770

`!name` marks a name that another version uses for a different group (rename per version).
"""
import argparse
import json
import re
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import sharing_versions  # noqa: E402


def load(ver, mod):
    names, starts = {}, {}
    for f in (f"config/{ver}/symbol_addrs.{mod}.txt", f"config/{ver}/func_starts.{mod}.txt",
              f"tmp/build/{ver}/prx_syms.{mod}.txt"):
        p = ROOT / f
        if p.exists():
            for l in p.read_text().splitlines():
                m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+);(.*)", l)
                if m:
                    a = int(m[2], 16)
                    names.setdefault(a, m[1])
                    if "type:func" in m[3]:
                        starts.setdefault(a, m[1])
    prx = ROOT / f"tmp/baserom/{ver}/{mod}.prx"
    elf = ELFFile(open(prx, "rb"))
    raw = prx.read_bytes()
    segs = [s for s in elf.iter_segments() if s["p_type"] == "PT_LOAD"]
    return names, starts, raw, segs


def word(raw, segs, a):
    for s in segs:
        if s["p_vaddr"] <= a < s["p_vaddr"] + s["p_filesz"]:
            return struct.unpack_from("<I", raw, s["p_offset"] - s["p_vaddr"] + a)[0]
    return None


def groups(ver, mod):
    names, starts, raw, segs = load(ver, mod)
    text_end = segs[0]["p_vaddr"] + segs[0]["p_filesz"]
    dele = {a for a, n in starts.items() if n == "_ZdlPv"}
    addrs = sorted(a for a in starts if a < text_end)
    fs = list(zip(addrs, addrs[1:]))

    def words(a, z):
        return [word(raw, segs, x) for x in range(a, z, 4)]

    def rel(ws, base):
        return [((w & 0xFC000000) | ((((w & 0x3FFFFFF) << 2) - base) & 0x3FFFFFF)) if w >> 26 == 2 else w for w in ws]

    def shape(ws):
        # opcode + registers, immediates/targets masked: compares across versions
        out = []
        for w in ws:
            op = w >> 26
            out.append(w & 0xFC000000 if op in (2, 3) else (w & 0xFFFF0000 if op >= 4 else w))
        return tuple(out)

    def calls(ws):
        return [(w & 0x3FFFFFF) << 2 for w in ws if w >> 26 == 3]

    def vptr(ws):
        hi = {}
        for w in ws:
            op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
            if op == 15:
                hi[rt] = imm << 16
            elif op == 9 and rs in hi:
                hi[rt] = (hi[rs] + (imm - 0x10000 if imm & 0x8000 else imm)) & 0xFFFFFFFF
            elif op == 43 and imm == 0 and rt in hi and rs == 4:
                return hi[rt]
            elif op == 43 and imm == 0 and rt in hi:
                return hi[rt]
        return None

    out, i = [], 0
    while i < len(fs) - 1:
        (a, z), (a2, z2) = fs[i], fs[i + 1]
        w1, w2 = words(a, z), words(a2, z2)
        if z - a == z2 - a2 and z - a > 8 and rel(w1, a) == rel(w2, a2):
            g = [(a, z), (a2, z2)]
            if i + 2 < len(fs):
                a3, z3 = fs[i + 2]
                if dele & set(calls(words(a3, z3))):
                    g.append((a3, z3))
            ws = words(*g[0])
            vp = vptr(ws)
            base = [c for c in calls(ws) if c not in dele]
            # D2/D1/D0 is a virtual dtor; a pair is a ctor (C2/C1) or a non-deleting dtor pair
            kind = "dtor" if len(g) == 3 else "pair"
            out.append({
                "kind": kind,
                "funcs": [(x, starts[x]) for x, _ in g],
                "sizes": [y - x for x, y in g],
                "shape": shape(ws),
                "vptr": vp,
                "vptr_label": names.get(vp) if vp is not None else None,
                "vtable_zero": vp is not None and word(raw, segs, vp - 8) == 0 and word(raw, segs, vp - 4) == 0,
                "base": names.get(base[0], f"func_{base[0]:08X}") if base else None,
            })
            i += len(g)
        else:
            i += 1
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--ver", default="100")
    ap.add_argument("--versions", help="comma list (default: every version sharing the source)")
    ap.add_argument("--json", type=Path)
    a = ap.parse_args()
    vers = a.versions.split(",") if a.versions else [a.ver] + [v for v in sharing_versions(a.ver, a.module) if v != a.ver]
    per = {v: groups(v, a.module) for v in vers}
    # cluster by shape, then by evidence: shared function names, base call, vptr label
    clusters = []
    for v in vers:
        for g in per[v]:
            key = (g["kind"], len(g["funcs"]), g["shape"])
            best, bs = None, 0
            for c in clusters:
                if c["key"] != key or v in c["by"]:
                    continue
                sc = 0
                for h in c["by"].values():
                    sc = max(sc, 3 * len({n for _, n in g["funcs"]} & {n for _, n in h["funcs"]})
                             + 2 * (g["base"] is not None and g["base"] == h["base"])
                             + 2 * (g["vptr_label"] is not None and g["vptr_label"] == h["vptr_label"]))
                if sc > bs:
                    best, bs = c, sc
            if best is not None:
                best["by"][v] = g
            else:
                clusters.append({"key": key, "by": {v: g}})
    # a name used for different clusters in different versions
    owner = {}
    for ci, c in enumerate(clusters):
        for g in c["by"].values():
            for _, n in g["funcs"]:
                owner.setdefault(n, set()).add(ci)
    clash = {n for n, s in owner.items() if len(s) > 1}
    for ci, c in enumerate(clusters):
        g0 = next(iter(c["by"].values()))
        parts = "D2/D1/D0" if g0["kind"] == "dtor" else "C2/C1 or D2/D1"
        print(f"G{ci} {g0['kind']} {parts} sizes {'/'.join(hex(s) for s in g0['sizes'])} versions {len(c['by'])}/{len(vers)}")
        for v, g in c["by"].items():
            fn = " ".join(("!" if n in clash else "") + n for _, n in g["funcs"])
            vp = f"vptr 0x{g['vptr']:X} {g['vptr_label'] or '?'}{'' if g['vtable_zero'] else ' (no 0,0 header)'}" if g["vptr"] else "no vptr"
            print(f"  {v}: {fn}  {vp}  base {g['base']}")
    if a.json:
        a.json.write_text(json.dumps([{v: {k: g[k] for k in g if k != "shape"} for v, g in c["by"].items()} for c in clusters], indent=1))


if __name__ == "__main__":
    main()
