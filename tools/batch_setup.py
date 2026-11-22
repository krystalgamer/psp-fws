#!/usr/bin/env python3
"""Create and verify asm-only matching setups for many PRX binaries.

Reads tmp/inventory.json (distinct binaries: sha1, canonical version, path,
all versions) and for each one not yet covered by a config: extract, generate
config (--asm), name NIDs, split, build and verify. Results go to
tmp/batch_status.json (resumable). Generated asm/build files are removed after
each module to keep tmp/ small; configs stay in config/<version>/.

Usage: tools/batch_setup.py [--workers 3] [--limit N] [--retry-failed]
"""
import argparse
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
STATUS = ROOT / "tmp/batch_status.json"
lock = threading.Lock()


def run(cmd, timeout=3600):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, timeout=timeout)
    return r.returncode, r.stdout + r.stderr


def module_name(path, version):
    return Path(path).stem


def cleanup(ver, name):
    for p in [ROOT / "tmp/asm" / ver / name, ROOT / "tmp/assets" / ver / name,
              ROOT / "tmp/build" / ver / "tmp/asm" / ver / name, ROOT / "tmp/build" / ver / "tmp/assets" / ver / name]:
        shutil.rmtree(p, ignore_errors=True)
    for p in (ROOT / "tmp/build" / ver).glob(f"{name}.*"):
        p.unlink(missing_ok=True)
    for p in (ROOT / "tmp/build" / ver).glob(f"*.{name}.txt"):
        p.unlink(missing_ok=True)
    shutil.rmtree(ROOT / "tmp/build" / ver / f".splat_cache.{name}", ignore_errors=True)
    (ROOT / "tmp/baserom" / ver / f"{name}.prx").unlink(missing_ok=True)


def process(item):
    ver, path = item["version"], item["path"]
    name = module_name(path, ver)
    cfg = ROOT / "config" / ver / f"{name}.yaml"
    try:
        rc, out = run([PY, "tools/extract_baserom.py", ver, path])
        if rc:
            return "error", f"extract: {out[-300:]}"
        if not cfg.exists():
            rc, out = run([PY, "tools/gen_config.py", ver, path, "--asm"])
            if rc:
                return "error", f"gen_config: {out.strip().splitlines()[-1][:300] if out.strip() else rc}"
        run([PY, "tools/nid_names.py", ver, name])
        rc, out = run(["make", "split", f"VERSION={ver}", f"MODULE={name}"])
        if rc:
            last = [l for l in out.splitlines() if "rror" in l][-1:] or out.splitlines()[-1:]
            return "error", f"split: {last[0][:300] if last else rc}"
        rc, out = run(["make", f"VERSION={ver}", f"MODULE={name}"])
        if ": OK" in out:
            return "ok", ""
        if "MISMATCH" in out:
            return "mismatch", ""
        last = [l for l in out.splitlines() if "rror" in l or "undefined" in l][:2]
        return "error", f"build: {' | '.join(last)[:300]}"
    except subprocess.TimeoutExpired as e:
        return "error", f"timeout: {e.cmd[:3]}"
    finally:
        cleanup(ver, name)


def covered_shas():
    shas = set()
    for p in (ROOT / "config").rglob("*.sha1"):
        shas.add(p.read_text().split()[0])
    return shas


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--workers", type=int, default=3)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--retry-failed", action="store_true")
    ap.add_argument("--all", action="store_true", help="re-verify every binary, including passing ones")
    args = ap.parse_args()

    inv = json.loads((ROOT / "tmp/inventory.json").read_text())
    status = json.loads(STATUS.read_text()) if STATUS.exists() else {}
    have = covered_shas()
    todo = []
    for item in inv:
        st = status.get(item["sha1"], {}).get("result")
        if not args.all and (st == "ok" or (st and not args.retry_failed)):
            continue
        if not args.all and item["sha1"] in have and st is None:
            status[item["sha1"]] = {"result": "ok", "version": item["version"], "path": item["path"], "note": "pre-existing config"}
            continue
        todo.append(item)
    if args.limit:
        todo = todo[:args.limit]
    print(f"{len(todo)} to process", flush=True)

    def work(item):
        res, note = process(item)
        with lock:
            status[item["sha1"]] = {"result": res, "version": item["version"], "path": item["path"], "note": note}
            STATUS.write_text(json.dumps(status, indent=0))
            done = sum(1 for v in status.values() if v["result"] == "ok")
            print(f"[{res}] {item['version']}/{item['path']} {note} (ok total {done})", flush=True)

    with ThreadPoolExecutor(args.workers) as ex:
        list(ex.map(work, todo))
    STATUS.write_text(json.dumps(status, indent=0))


if __name__ == "__main__":
    main()
