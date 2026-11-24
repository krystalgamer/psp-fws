"""Source directory of a module binary: the `src_path` of config/<ver>/<mod>.yaml."""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def src_dir(ver, mod):
    cfg = ROOT / "config" / str(ver) / f"{mod}.yaml"
    if cfg.exists():
        m = re.search(r"^\s*src_path:\s*(\S+)", cfg.read_text(), re.M)
        if m:
            return ROOT / m[1]
    return ROOT / "src" / mod


def sharing_versions(ver, mod):
    """Versions whose config builds this module from the same source directory."""
    me = src_dir(ver, mod)
    out = []
    for cfg in sorted((ROOT / "config").glob(f"*/{mod}.yaml")):
        t = cfg.read_text()
        if re.search(rf"^\s+- \[0x[0-9A-Fa-f]+, c, {mod}\w*\]", t, re.M) and src_dir(cfg.parent.name, mod) == me:
            out.append(cfg.parent.name)
    return out
