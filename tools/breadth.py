#!/usr/bin/env python3
"""Breadth-first C pass over every module.

For each module name, take one representative binary (the one shipped in the
most firmware versions; existing C modules keep their version), convert its
main .text/.rodata to C (INCLUDE_ASM), run tools/auto_decomp.py, and keep the
result only if the full module still matches. Progress in
tmp/breadth_status.json (resumable). Generated asm/build output is removed
after each module.

Usage: tools/breadth.py [--workers 3] [--max-size 0x400] [--only NAME] [--redo]
"""
import argparse
import collections
import json
import re
import shutil
import subprocess
import sys
import threading
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PY = sys.executable
STATUS = ROOT / "tmp/breadth_status.json"
lock = threading.Lock()


def run(cmd, timeout=7200):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, timeout=timeout)
    return r.returncode, r.stdout + r.stderr


def representatives():
    inv = json.loads((ROOT / "tmp/inventory.json").read_text())
    by = collections.defaultdict(list)
    for d in inv:
        by[Path(d["path"]).stem].append(d)
    reps = {}
    for name, items in by.items():
        src = ROOT / "src" / name
        existing = None
        if src.exists():
            for cfg in (ROOT / "config").glob(f"*/{name}.yaml"):
                if re.search(rf"^\s+- \[0x[0-9A-F]+, c, {name}\]", cfg.read_text(), re.M):
                    existing = {"version": cfg.parent.name, "path": items[0]["path"], "versions": []}
        reps[name] = existing or max(items, key=lambda d: (len(d["versions"]), d["version"]))
    return reps


def to_c(cfg, name):
    text = cfg.read_text()
    new = re.sub(rf"^(\s+- \[0x[0-9A-F]+, )asm(, {name}\])$", r"\1c\2", text, flags=re.M)
    new = re.sub(rf"^(\s+- \[0x[0-9A-F]+, )rodata(, {name}\])$", r"\1.rodata\2", new, flags=re.M)
    if new != text:
        cfg.write_text(new)
    return new != text


def cleanup(ver, name):
    b = ROOT / "tmp/build" / ver
    for p in [ROOT / "tmp/asm" / ver / name, ROOT / "tmp/assets" / ver / name,
              b / "tmp/asm" / ver / name, b / "tmp/assets" / ver / name, b / "src" / name,
              b / f".splat_cache.{name}"]:
        shutil.rmtree(p, ignore_errors=True)
    for p in list(b.glob(f"{name}.*")) + list(b.glob(f"*.{name}.txt")):
        p.unlink(missing_ok=True)
    (ROOT / "tmp/baserom" / ver / f"{name}.prx").unlink(missing_ok=True)


def process(name, d, max_size):
    ver = d["version"]
    cfg = ROOT / "config" / ver / f"{name}.yaml"
    if not cfg.exists():
        return {"result": "error", "version": ver, "note": "no config"}
    src_dir = ROOT / "src" / name
    orig_cfg = cfg.read_text()
    had_src = src_dir.exists()
    snapshot = ROOT / "tmp/breadth_snap" / name
    shutil.rmtree(snapshot, ignore_errors=True)
    if had_src:
        shutil.copytree(src_dir, snapshot)
    try:
        run(["make", "extract", f"VERSION={ver}", f"MODULE={name}"])
        converted = to_c(cfg, name)
        rc, out = run(["make", "split", f"VERSION={ver}", f"MODULE={name}"])
        if rc:
            raise RuntimeError("split failed")
        rc, out = run(["make", f"VERSION={ver}", f"MODULE={name}"])
        if ": OK" not in out:
            raise RuntimeError("C conversion does not match")
        rc, out = run([PY, "tools/auto_decomp.py", ver, name, "--max-size", hex(max_size)])
        m = re.search(r"matched (\d+)/(\d+)", out)
        rc2, out2 = run(["make", f"VERSION={ver}", f"MODULE={name}"])
        if ": OK" not in out2:
            raise RuntimeError("final build mismatch")
        stats = json.loads((ROOT / "tmp/auto_stats" / f"{ver}_{name}.json").read_text()) \
            if (ROOT / "tmp/auto_stats" / f"{ver}_{name}.json").exists() else {}
        funcs = stats.get("funcs", {})
        return {"result": "ok", "version": ver, "converted": converted,
                "matched": int(m[1]) if m else 0, "tried": int(m[2]) if m else 0,
                "m171": sum("1.7.1" in v for v in funcs.values()),
                "m131": sum("1.3.1" in v for v in funcs.values())}
    except Exception as e:  # noqa: BLE001
        cfg.write_text(orig_cfg)
        shutil.rmtree(src_dir, ignore_errors=True)
        if had_src:
            shutil.copytree(snapshot, src_dir)
        return {"result": "error", "version": ver, "note": str(e)[:200]}
    finally:
        cleanup(ver, name)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--workers", type=int, default=3)
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x400)
    ap.add_argument("--only")
    ap.add_argument("--redo", action="store_true")
    args = ap.parse_args()

    status = json.loads(STATUS.read_text()) if STATUS.exists() else {}
    reps = representatives()
    todo = [(n, d) for n, d in sorted(reps.items())
            if (not args.only or n == args.only) and (args.redo or n not in status)]
    # small modules first so results arrive early
    print(f"{len(todo)} modules", flush=True)

    def work(nd):
        name, d = nd
        try:
            res = process(name, d, args.max_size)
        except Exception as e:  # noqa: BLE001
            res = {"result": "error", "version": d["version"], "note": f"crash: {e}"[:200]}
        with lock:
            status[name] = res
            STATUS.write_text(json.dumps(status, indent=0))
            tot = sum(v.get("matched", 0) for v in status.values())
            print(f"[{res['result']}] {d['version']}/{name} {res} (total matched {tot})", flush=True)

    with ThreadPoolExecutor(args.workers) as ex:
        list(ex.map(work, todo))


if __name__ == "__main__":
    main()
