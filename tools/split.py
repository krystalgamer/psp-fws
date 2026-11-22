#!/usr/bin/env python3
"""Run splat with PSP-specific tweaks.

- Allegrex GCC/GAS emit `j` for intra-function jumps (they carry R_MIPS_26
  relocs), but splat's psp platform forces rabbitizer to treat `j` as a tail
  call, which produces bogus function symbols. Keep `j` as a branch instead.
- Some modules embed data (e.g. keys) inside functions. rabbitizer may decode
  those words as 64-bit/R4000 instructions that GAS rejects for allegrex, so
  rewrite such lines as raw `.word`s.
- PRX segment 1 (.bss) is relocated independently of segment 0, so the
  original HI16/LO16 immediates are relative to the segment start. Link the
  bss output section at VMA 0 to reproduce them.
"""
import re
import sys
from pathlib import Path

import rabbitizer
import spimdisasm
import splat.platforms.psp
from splat.__main__ import splat_main
from splat.util import options

UNSUPPORTED = {
    "ld", "sd", "ldl", "ldr", "sdl", "sdr", "lwu", "lld", "scd", "pref",
    "ldc1", "sdc1", "ldc2", "sdc2", "lwc2", "swc2", "daddi", "daddiu",
    "lwl", "lwr", "swl", "swr",
}
INSN_RE = re.compile(
    r"^(?P<pre>\s*/\* [0-9A-F]+ [0-9A-F]+ (?P<raw>[0-9A-F]{8}) \*/\s+)(?P<op>[a-z0-9.]+)\s"
)


def _psp_init(target_bytes: bytes):
    rabbitizer.config.toolchainTweaks_treatJAsUnconditionalBranch = True
    # Only emit .align when it can't move anything (PRX sections are 4-aligned
    # and jump tables/doubles there aren't necessarily 8-aligned).
    spimdisasm.common.GlobalConfig.SYMBOL_ALIGNMENT_REQUIRES_ALIGNED_SECTION = True


def fix_unsupported(asm_dir: Path):
    for path in asm_dir.rglob("*.s"):
        lines = path.read_text().splitlines(keepends=True)
        changed = False
        for i, line in enumerate(lines):
            m = INSN_RE.match(line)
            if m and m["op"] in UNSUPPORTED:
                word = int.from_bytes(bytes.fromhex(m["raw"]), "little")
                lines[i] = f"{m['pre']}.word      0x{word:08X} # {line[m.start('op'):].strip()}\n"
                changed = True
        if changed:
            path.write_text("".join(lines))


def fix_ld_script(ld_path: Path, config_path: Path):
    """Link PRX segment 1 relative to its own base.

    `<name>_seg1` segments start at VMA 0 and their bss at its offset within
    the segment. Older configs with only a bss subsegment get bss at VMA 0.
    """
    import yaml

    cfg = yaml.safe_load(config_path.read_text())
    text = ld_path.read_text()
    for seg in cfg["segments"]:
        if not isinstance(seg, dict) or not str(seg.get("name", "")).endswith("_seg1"):
            continue
        name, base = seg["name"], seg["vram"]
        text = re.sub(rf"^(\s*\.{name}) 0x[0-9A-Fa-f]+ :", r"\1 0x0 :", text, flags=re.M)
        for sub in seg.get("subsegments", []):
            if isinstance(sub, dict) and sub.get("type") == "bss":
                off = sub["vram"] - base
                text = re.sub(rf"^(\s*\.{name}_bss)( 0x[0-9A-Fa-f]+)? \(NOLOAD\)", rf"\1 0x{off:X} (NOLOAD)", text, flags=re.M)
    text = re.sub(r"^(\s*\.\w+_bss) \(NOLOAD\)", r"\1 0x0 (NOLOAD)", text, flags=re.M)
    # PRX parts are packed at their real file offsets (gaps are prxpad).
    text = re.sub(r"^\s*__romPos = ALIGN\(__romPos, \d+\);\n", "", text, flags=re.M)
    ld_path.write_text(text)


splat.platforms.psp.init = _psp_init

if __name__ == "__main__":
    sys.argv[1:1] = ["split"]
    try:
        splat_main()
    finally:
        if options.opts is not None and getattr(options.opts, "asm_path", None):
            fix_unsupported(options.opts.asm_path)
            fix_ld_script(options.opts.ld_script_path, Path(sys.argv[-1]))
