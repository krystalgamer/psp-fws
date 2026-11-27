#!/usr/bin/env python3
"""Carry C functions from one firmware version to another (same shared source).

    tools/port.py MODULE SRC_VER DST_VER FUNC[=DSTNAME] ... [--apply] [--sub OLD=NEW ...]

Takes each function's C as compiled for SRC_VER and scores it against DST_VER's
asm with hand_try. Calls and global references are masked in the word compare,
so a body that only uses other versions' names still word-matches; hand_try then
reports the target's names (relocation symbols, call targets), which are
substituted into the C, with prototypes derived from the existing ones, and the
body is scored again (a few rounds). --sub adds fixed text substitutions tried
first (e.g. a helper that was renamed). With --apply, every function that
reaches MATCH is inserted for DST_VER with one tools/hand.py call.
Work files go to tmp/port/MODULE/DST_VER/.
"""
import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def fw(v):
    return int(re.match(r"\d+", v)[0])


def c_body(mod, ver, name):
    sd = src_dir(ver, mod)
    fv = sorted({fw(v) for v in sharing_versions(ver, mod)})
    for f in sd.glob("*.c"):
        for e in FM.parse(f.read_text(), fv):
            if e.kind == "cfunc" and e.name == name and fw(ver) in e.vers:
                return e.text
    return None


def hand_try(mod, ver, cfile, decls):
    cmd = [str(ROOT / ".venv/bin/python"), str(ROOT / "tools/hand_try.py"), ver, mod, str(cfile)]
    if decls.read_text().strip():
        cmd += ["--decls", str(decls)]
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True).stdout


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("src_ver")
    ap.add_argument("dst_ver")
    ap.add_argument("funcs", nargs="+")
    ap.add_argument("--sub", action="append", default=[], help="OLD=NEW text substitution applied first")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    store = json.loads((src_dir(a.dst_ver, a.module) / f"{a.module}_decls.json").read_text())
    work = ROOT / "tmp/port" / a.module / a.dst_ver
    work.mkdir(parents=True, exist_ok=True)
    matched = []
    names_needed = {}
    for spec in a.funcs:
        name, _, dname = spec.partition("=")
        dname = dname or name
        body = c_body(a.module, a.src_ver, name)
        if body is None:
            print(f"{name}: no C for {a.src_ver}")
            continue
        body = re.sub(rf"\b{name}\b(?=\s*\()", dname, body, count=1)
        for s in a.sub:
            o, n = s.split("=", 1)
            body = re.sub(rf"\b{re.escape(o)}\b", n, body)
        cf, df = work / f"{dname}.c", work / f"{dname}.h"
        protos = []
        result = "?"
        for _ in range(4):
            cf.write_text(body)
            df.write_text("\n".join(protos) + "\n")
            out = hand_try(a.module, a.dst_ver, cf, df)
            res = [l for l in out.splitlines() if l.startswith("RESULT")]
            result = res[-1] if res else (out.strip().splitlines() or ["error"])[-1]
            pairs = re.findall(r"reloc \d+: target (\w+), mine (\w+)", out) + \
                re.findall(r"call target differs: target (\w+), mine (\w+)", out)
            # a global named in SRC but still auto-named in DST: hand_try accepts it as an interior label,
            # but for a port it is usually the same global under its DST name
            inside = re.findall(r"target label (\w+) assumed inside (\w+);[^\[\n]*(?:\[\w+\+0x([0-9A-F]+)\])?", out)
            # base address of the global in DST = target label - offset of the reference
            inside = [(f"D_{int(t[2:], 16) - int(o or '0', 16):08X}", m, int(o or "0", 16)) for t, m, o in inside
                      if not re.fullmatch(r"D_[0-9A-F]{8}", m)]
            if "RESULT: MATCH" in result or not pairs:
                break
            for tgt, mine in dict.fromkeys(pairs):
                body = re.sub(rf"\b{mine}\b", tgt, body)
                proto = store["funcs"].get(mine) or store["vars"].get(mine)
                if proto and tgt not in store["funcs"] and tgt not in store["vars"]:
                    protos.append(re.sub(rf"\b{mine}\b", tgt, proto))
        need = sorted(set(inside)) if "RESULT: MATCH" in result else []
        base, exact = {}, {}
        for t, m, off in need:
            if base.setdefault(m, t) != t:
                base[m] = "conflict"
            exact[m] = exact.get(m, False) or off == 0
        note = f" (needs {a.dst_ver} names: " + ", ".join(
            f"{t}={m}" + ("" if exact[m] else " [base not referenced: name it by hand]") for m, t in base.items()) + ")" if base else ""
        base = {m: t for m, t in base.items() if t != "conflict" and exact[m]}
        print(f"{name} -> {a.dst_ver}:{dname}: {result}{note}")
        if "RESULT: MATCH" in result:
            matched.append((cf, df))
            names_needed.update({m: t for m, t in base.items()})
    if a.apply and names_needed:
        # name DST's auto-named globals like SRC's (the base label of each struct global)
        specs = [f"{a.dst_ver}:{t}={m}" for m, t in names_needed.items()]
        r = subprocess.run([str(ROOT / ".venv/bin/python"), str(ROOT / "tools/rename_sym.py"), a.module, *specs, "--force"],
                           cwd=ROOT, capture_output=True, text=True)
        print(r.stdout.strip().splitlines()[-1] if r.stdout.strip() else r.stderr.strip()[-500:])
    if a.apply and matched:
        decls = work / "_all.h"
        decls.write_text("".join(df.read_text() for _, df in matched))
        r = subprocess.run([str(ROOT / ".venv/bin/python"), str(ROOT / "tools/hand.py"), a.dst_ver, a.module,
                            *[str(cf) for cf, _ in matched]] + (["--decls", str(decls)] if decls.read_text().strip() else []),
                           cwd=ROOT, capture_output=True, text=True)
        print(r.stdout.strip() or r.stderr.strip()[-2000:])


if __name__ == "__main__":
    main()
