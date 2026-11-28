#!/usr/bin/env python3
"""Report module versions whose cflags look wrong.

    tools/flag_check.py VER [MODULE ...] [--max-c N]

For each module version: the settings (of its compiler) under which every
existing C function of the version still compiles to its words ("consistent"),
and the total auto_decomp draft score per setting (stats "setscores"). Prints
modules where another consistent setting has a lower draft total than the
current one, and settings with a lower total under which only a few C functions
(at most max(2, 25%)) differ: such C often matched the wrong flags by accident and
needs a rewrite. Reads tmp/auto_stats of the main checkout when the tree has
none (agent worktrees). With MODULE arguments every skipped file says why.
Nothing is changed.
"""
import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import fwmodel as FM  # noqa: E402


def stats_path(ver, m):
    """tmp/auto_stats/VER_M.json of this tree, else of the main checkout (agent worktrees have none)."""
    import subprocess
    p = ROOT / "tmp/auto_stats" / f"{ver}_{m}.json"
    if p.exists():
        return p
    common = subprocess.run(["git", "rev-parse", "--path-format=absolute", "--git-common-dir"], cwd=ROOT,
                            capture_output=True, text=True).stdout.strip()
    if common:
        q = Path(common).parent / "tmp/auto_stats" / f"{ver}_{m}.json"
        if q.exists():
            return q
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("modules", nargs="*")
    ap.add_argument("--max-c", type=int, default=60)
    a = ap.parse_args()
    v = int(re.match(r"\d+", a.ver)[0])
    mods = a.modules or sorted(p.stem for p in (ROOT / "config" / a.ver).glob("*.yaml"))
    for m in mods:
        st = stats_path(a.ver, m)
        if st is None:
            if a.modules:
                print(f"{a.ver}:{m}: no tmp/auto_stats/{a.ver}_{m}.json (run tools/early_pass.sh {a.ver} {m}); skipped")
            continue
        ss = json.loads(st.read_text()).get("setscores", {})
        try:
            mod = AD.Module(a.ver, m)
        except Exception:
            continue
        for f in mod.files:
            if not f.exists():
                continue
            text = f.read_text()
            comp, own = AD.Module.file_setting(f)
            own = own.split(" ", 1)[1]
            names = {e.name for e in FM.parse(text, mod.fwvers) if v in e.vers and e.kind == "asm"}
            tot = {}
            for n in names:
                for k, sc in ss.get(n, {}).items():
                    if k.startswith(comp + " "):
                        o = k.split(" ", 1)[1]
                        tot[o] = tot.get(o, 0) + sc
            if not tot or own not in tot:
                continue
            better = [o for o in tot if tot[o] < tot[own]]
            if not better:
                continue
            # consistency of the existing C with each better setting
            cf = [e for e in FM.parse(text, mod.fwvers) if v in e.vers and e.kind == "cfunc"]
            if len(cf) > a.max_c:
                if a.modules:
                    print(f"{a.ver}:{m} {f.name}: {len(cf)} C functions (> --max-c {a.max_c}), not checked")
                continue
            hdr = mod.header()
            # C function ranges from the current (matching) build
            from elftools.elf.elffile import ELFFile
            import struct
            elf = ELFFile(open(ROOT / "tmp/build" / a.ver / f"{m}.elf", "rb"))
            sec = elf.get_section_by_name(f".{m}") or elf.get_section_by_name(".text")
            rng = {sy.name: (sy["st_value"], sy["st_size"]) for sy in elf.get_section_by_name(".symtab").iter_symbols()
                   if sy["st_info"]["type"] == "STT_FUNC" and sy["st_size"]}

            def c_target(name):
                if name not in rng:
                    return None
                lo, size = rng[name]
                rom = mod.text_off + lo
                out = []
                for i, w in enumerate(struct.unpack_from(f"<{size // 4}I", mod.base, rom)):
                    kind = mod.relocs.get(rom + 4 * i)
                    if kind is None and w >> 26 in (2, 3):
                        kind = "26"
                    out.append(AD.mask(w, kind))
                return out
            mstart = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA|#if)", text, re.M)
            prelude = re.sub(r'^#include "\w+_decls\.h"\n', "", text[:mstart.start()] if mstart else "", flags=re.M)
            cons, near = [], []
            for o in sorted(better, key=lambda o: tot[o]):
                fails = []
                for e in cf:
                    target = c_target(e.name)
                    if target is None:
                        fails = None
                        break
                    body = re.sub(rf"^[^\n]*\b{e.name}\([^\n]*\);\n", "", hdr, flags=re.M)
                    words, _ = AD.compile_words(f"#define FW_VERSION {v}\n" + body + "\n" + prelude + "\n" + e.text, comp, o)
                    if words != target:
                        fails.append(e.name)
                        # a few C functions may only match the wrong flags by accident (m2c drafts): report those
                        if len(fails) > max(2, len(cf) // 4):
                            break
                if fails == []:
                    cons.append(o)
                elif fails and len(fails) <= max(2, len(cf) // 4):
                    near.append((o, fails))
            if cons:
                print(f"{a.ver}:{m} {f.name}: {own} total {tot[own]}; consistent and lower: "
                      + ", ".join(f"{o} {tot[o]}" for o in cons) + f" ({len(cf)} C)", flush=True)
            elif near:
                print(f"{a.ver}:{m} {f.name}: {own} total {tot[own]}; lower, but some C would need a rewrite: "
                      + "; ".join(f"{o} {tot[o]} ({len(fl)}/{len(cf)} C differ: {', '.join(fl)})" for o, fl in near),
                      flush=True)
            elif a.modules:
                print(f"{a.ver}:{m} {f.name}: {own} total {tot[own]}; lower: "
                      + ", ".join(f"{o} {tot[o]}" for o in sorted(better, key=lambda o: tot[o]))
                      + f", but too much existing C ({len(cf)}) differs under them", flush=True)
    if a.modules:
        print("flag_check: done")

if __name__ == "__main__":
    main()
