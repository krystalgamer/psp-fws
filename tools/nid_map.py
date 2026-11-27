#!/usr/bin/env python3
"""Name scrambled 3.50+ import NIDs from an older version's names via matching call sites.

    tools/nid_map.py MODULE [--from 340] [--to 350,351,352] [--apply]

3.50 changed the NIDs of many paf/vsh exports, so the imports get libdoc fallback names
(`scePaf_3C5D1D0E`) where 3.40 has the real (often mangled) name. Functions that carry the
same name in both versions (the shared source's names) are compared call by call: when both
make the same number of `jal`s, the n-th targets correspond. A NID-named target in the new
version that always lines up with one import of the old version gets that name (a real name,
or the old NID name, which at least lets the shared source use one name).
--apply renames the stub in config/<to>/symbol_addrs.<mod>.txt for every --to version and
in the module's source/decls (the shared source then uses one name).
"""
import argparse
import collections
import re
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import src_dir  # noqa: E402

NIDNAME = re.compile(r"^(?!func_|D_|PHANTOM_)[A-Za-z_]\w*_[0-9A-F]{8}$")


def funcs(ver, mod):
    names, by_name = {}, {}
    for f in (f"config/{ver}/symbol_addrs.{mod}.txt", f"config/{ver}/func_starts.{mod}.txt",
              f"tmp/build/{ver}/prx_syms.{mod}.txt"):
        p = ROOT / f
        if p.exists():
            for l in p.read_text().splitlines():
                m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+);.*type:func", l)
                if m:
                    a = int(m[2], 16)
                    names.setdefault(a, m[1])
                    by_name.setdefault(m[1], a)
    prx = ROOT / f"tmp/baserom/{ver}/{mod}.prx"
    elf = ELFFile(open(prx, "rb"))
    seg = next(s for s in elf.iter_segments() if s["p_type"] == "PT_LOAD")
    raw = prx.read_bytes()
    off = seg["p_offset"] - seg["p_vaddr"]
    starts = sorted(a for a in names if a < seg["p_vaddr"] + seg["p_filesz"])
    end = {a: b for a, b in zip(starts, starts[1:])}

    # import stubs: the sceStub subsegment of the config (file offsets)
    import yaml
    cfg = yaml.safe_load((ROOT / f"config/{ver}/{mod}.yaml").read_text())
    subs = [s for seg in cfg["segments"] if isinstance(seg, dict) for s in seg.get("subsegments", [])]
    starts_of = [(s["start"] if isinstance(s, dict) else s[0]) for s in subs]
    lo = hi = None
    for i, s in enumerate(subs):
        if isinstance(s, dict) and s.get("name") == "sceStub":
            lo, hi = s["start"] - seg["p_offset"], (starts_of[i + 1] if i + 1 < len(subs) else 1 << 32) - seg["p_offset"]

    def calls(a):
        z = end.get(a)
        if z is None:
            return None
        out = []
        for x in range(a, z, 4):
            w = struct.unpack_from("<I", raw, off + x)[0]
            if w >> 26 == 3:
                tgt = (w & 0x3FFFFFF) << 2
                # only import stubs carry NID names worth mapping; local calls are kept as None
                out.append(names.get(tgt) if lo is not None and lo <= tgt < hi else None)
        return out
    return names, by_name, calls


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--from", dest="old", default="340")
    ap.add_argument("--to", default="350,351,352")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    mod = a.module
    targets = a.to.split(",")
    _, old_by, old_calls = funcs(a.old, mod)
    _, new_by, new_calls = funcs(targets[0], mod)
    votes = collections.defaultdict(collections.Counter)
    for name in set(old_by) & set(new_by):
        if NIDNAME.match(name) or name.startswith("PHANTOM"):
            continue
        oc, nc = old_calls(old_by[name]), new_calls(new_by[name])
        if not oc or not nc or len(oc) != len(nc):
            continue
        for o, n in zip(oc, nc):
            if n and o and n != o and NIDNAME.match(n) and not re.match(r"^(func|D)_[0-9A-F]{8}", o):
                votes[n][o] += 1
    mapping = {}
    for n, c in sorted(votes.items()):
        (best, k), *rest = c.most_common()
        ok = not rest and best not in new_by
        print(f"{n} -> {best} ({k} call sites{', conflicts: ' + str(dict(rest)) if rest else ''}"
              f"{', name already used' if best in new_by else ''})")
        if ok:
            mapping[n] = best
    # two new NIDs onto one old name: keep the better attested one (splat rejects duplicate names)
    by_best = collections.defaultdict(list)
    for n, best in mapping.items():
        by_best[best].append(n)
    for best, ns in by_best.items():
        if len(ns) > 1:
            ns.sort(key=lambda n: -votes[n][best])
            for n in ns[1:]:
                print(f"dropped {n} -> {best} (also {ns[0]})")
                del mapping[n]
    # a renamed import takes the old name's prototype; if the two prototypes differ the calls
    # would change (u8 vs s32 parameter: an extra andi in video_main_plugin 3.51): keep the NID name
    import json as _json
    sd0 = src_dir(targets[0], mod)
    sp0 = sd0 / f"{mod}_decls.json"
    if sp0.exists():
        funcs0 = _json.loads(sp0.read_text()).get("funcs", {})
        for n, best in list(mapping.items()):
            pn, pb = funcs0.get(n), funcs0.get(best)
            if pn and pb and not re.search(r"\(\);$|\(\.\.\.\);$", pn) and re.sub(rf"\b{n}\b", best, pn) != pb:
                print(f"kept {n}: prototype differs from {best} ({pn} / {pb})")
                del mapping[n]
    if not a.apply or not mapping:
        return
    for v in targets:
        p = ROOT / f"config/{v}/symbol_addrs.{mod}.txt"
        t = p.read_text()
        _, by, _ = funcs(v, mod)
        for n, best in mapping.items():
            if re.search(rf"^{n}\s*=", t, re.M):
                t = re.sub(rf"^{n}(\s*=)", rf"{best}\1", t, flags=re.M)
            elif n in by:  # named by the NID database only (prx_syms): pin the new name in the config
                t = t.rstrip("\n") + f"\n{best} = 0x{by[n]:08X}; // type:func (NID {n})\n"
        p.write_text(t)
    sd = src_dir(targets[0], mod)
    for f in sd.glob("*.c"):
        t = f.read_text()
        u = t
        for n, best in mapping.items():
            u = re.sub(rf"\b{n}\b", best, u)
        if u != t:
            f.write_text(u)
    # decls: an existing prototype of the old name wins (it was fixed for the older versions)
    import json
    import structify
    sp = sd / f"{mod}_decls.json"
    if sp.exists():
        store = json.loads(sp.read_text())
        for sec in ("funcs", "vars"):
            d = store.get(sec, {})
            for n, best in mapping.items():
                if n in d:
                    v = d.pop(n)
                    d.setdefault(best, re.sub(rf"\b{n}\b", best, v))
        structify.SRC[mod] = sd
        structify.write_decls(mod, store)
    print(f"renamed {len(mapping)} imports in {', '.join(targets)} and {sd.relative_to(ROOT)}; "
          f"run tools/regress.sh --shared and fix duplicate decls keys if any")


if __name__ == "__main__":
    main()
