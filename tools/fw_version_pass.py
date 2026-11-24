#!/usr/bin/env python3
"""Run tools/fw_pass.sh for every module of one firmware version that does not
share its module's source yet, aligning with the nearest version that does.

    tools/fw_version_pass.py VERSION [--workers 8] [--only a,b]
"""
import argparse
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import sharing_versions  # noqa: E402


def fwnum(v):
    return int(re.match(r"\d+", v)[0])


def jobs(ver, only):
    out = []
    for cfg in sorted((ROOT / "config" / ver).glob("*.yaml")):
        mod = cfg.stem
        if only and mod not in only:
            continue
        if re.search(rf"^\s+- \[0x[0-9A-Fa-f]+, c, {mod}\w*\]", cfg.read_text(), re.M):
            continue  # already C
        shared = [v for v in {c.parent.name for c in (ROOT / "config").glob(f"*/{mod}.yaml")}
                  if v != ver and v in sharing_versions(v, mod)]
        if not shared:
            continue
        if any(fwnum(v) == fwnum(ver) for v in shared):
            continue  # same FW_VERSION number (variants) not supported yet
        lower = [v for v in shared if fwnum(v) < fwnum(ver)]
        ref = max(lower, key=fwnum) if lower else min(shared, key=fwnum)
        out.append((ref, mod))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("--workers", type=int, default=8)
    ap.add_argument("--only")
    a = ap.parse_args()
    todo = jobs(a.version, set(a.only.split(",")) if a.only else None)
    print(f"{len(todo)} modules", flush=True)

    def work(rm):
        ref, mod = rm
        r = subprocess.run(["tools/fw_pass.sh", ref, a.version, mod], cwd=ROOT, capture_output=True, text=True)
        print(f"[{ref}] {r.stdout.strip() or r.stderr.strip()[-200:]}", flush=True)
    with ThreadPoolExecutor(a.workers) as ex:
        list(ex.map(work, todo))


if __name__ == "__main__":
    main()
