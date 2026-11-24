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
