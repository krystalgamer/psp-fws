# psp-fws

Matching decompilation of PSP firmware modules (PRX), split with
[splat](https://github.com/ethteck/splat).

## Layout

- `config/<fw>/` – splat configs, sha1s and hand-written symbols per firmware version
- `src/`, `include/` – decompiled sources and headers
- `tools/` – helper scripts (extraction, PRX relocation parsing, splat wrapper/extensions)
- `inputs/` – firmware archive (`fws.zip`) and SDK; **not committed**
- `tmp/` – everything generated (baseroms, asm, build output, toolchains); **not committed**

## Setup

```sh
python3 -m venv --without-pip .venv
curl -sS https://bootstrap.pypa.io/get-pip.py | .venv/bin/python -
.venv/bin/pip install pyelftools "splat64[mips]"
make toolchain   # fetches Allegrex GCC 1.3.1/1.7.1, i386 glibc and MIPS binutils into tmp/
```

## Building

```sh
make extract     # pull the module out of inputs/fws.zip
make split       # generate relocs/symbols and run splat
make             # build and verify sha1
```

`VERSION` (default `360`) and `MODULE` (default `mcctrl`) select the target.
`make EXTRA_CPPFLAGS=-DNON_MATCHING` builds the non-matching C drafts instead of their asm.

## Modules

**All firmware modules below 3.60** (3,814 PRX files, 2,662 distinct binaries) have
matching asm setups in `config/<ver>/`, one config per distinct binary under the latest
version that ships it (`tmp/inventory.json` lists which versions share a binary).

All 199 module names have one binary converted to C (`src/<module>/`, the version
whose config has a `c` subsegment): auto-decompiled functions plus `INCLUDE_ASM`
for the rest. mcctrl (3.60) and openpsid (2.82) are hand-decompiled
(`sceMcctrl_7CAC25B2`, `sceDdrdbEncrypt` and `sceOpenPSIDGetOpenPSID` remain
NON_MATCHING drafts). `.comment` names psp-gcc 1.5.1/1.10.2 for many objects; our
1.3.1/1.7.1 `cc1` reproduce many of their functions with the right flags (see below).

New modules: `tools/gen_config.py <ver> <path under F0>` then `tools/nid_names.py <ver> <name>`
and `make split VERSION=<ver> MODULE=<name>`. In bulk: `tools/batch_setup.py`
(resumable; `--retry-failed`, `--all` to re-verify everything). After changing tools,
check from scratch with `tools/regress.sh 360:mcctrl 340:mcore ...`.

## Decompiling

```sh
.venv/bin/python tools/progress.py            # per-function status
.venv/bin/python tools/diff.py <function>     # side-by-side vs the original
.venv/bin/python tools/m2c.py <function>      # m2c draft with project headers as context
.venv/bin/python tools/auto_decomp.py <ver> <module>   # keep only exact m2c matches (full build verified)
.venv/bin/python tools/try_variants.py <function> <variants.py>   # score source variants
.venv/bin/python tools/permuter_setup.py <function>  # then run tmp/permuter (decomp-permuter)
```

Per-module compiler flags live in a comment in the C file: `/* compiler: 1.3.1 */`
(default 1.7.1), `/* cflags: -Os -frename-registers */` (default `-O2`),
`/* text-align: 8 */`. Kernel/driver modules mostly match with
`-O2 -frename-registers` (it gives the original register choice, e.g.
`lui $3; ori $2,$3,...` for constants; `-O3` behaves the same), VSH plugins and
libraries with plain `-O2` or `-Os`. `tools/switch_opt.sh VER:MOD <cflags>` redoes
a module from scratch with other flags and keeps it only if more functions match;
`tools/retry_pass.sh VER:MOD [regex]` retries remaining functions (add-only);
`tools/flag_search.py` tests extra flags on near misses.

Modules can be split into several translation units (`src/<mod>/<mod>_<VRAM>.c`,
each a `c` + `.rodata` subsegment with its own cflags) with
`tools/split_tu.py VER MOD FUNC[:CFLAGS] ...`; `tools/tu_candidates.py` proposes cuts
from runs of functions that only match another setting. Evidence for TU boundaries:
-O0 objects (every function sets up `$fp`), functions matching only -Os/-O1 inside
-O2 modules, and calls GCC would delete if the callee were in the same file (it
marks side-effect-free functions const). `config/<ver>/func_starts.<mod>.txt` pins
function starts so splat keeps the same boundaries across segments.

paf, pafmini and netfront statically link libtiff 3.8, libjpeg 6b, libpng and zlib:
`tools/libmatch.py` compiles the upstream sources (fetched into `tmp/libsrc`) and
finds identical functions, `tools/libnames.py` names their neighbours by source
order and `tools/apply_names.py` applies the names.

Source patterns that reproduce the original code generation (applied automatically
by auto_decomp when the plain m2c output misses): kernel exports use `$k1` through the
inline-asm helpers in `include/k1.h`; reads of global structs are often `volatile`
(`M2C_VFIELD`, keeps the address in a register before the offset load); field stores
are reordered or chained (`a = b = 0;`). C is assembled with `psp-as -mulsw`, which
enables `lwl/lwr/swl/swr` as the gcc driver does.

auto_decomp details: m2c runs with the PSP's MIPS EABI (`mipsee` target:
arguments in `$a0-$a3,$t0-$t3` and `$f12-$f19`) and falls back to o32;
`tools/m2c_allegrex.py` adds Allegrex ops (`max/min/clz/ext/ins/wsbw/bitrev/rotr`)
as the psp-gcc `__builtin_allegrex_*` intrinsics; unknown callees get prototypes
from the SDK headers or from the argument registers their asm reads
(`tools/protos.py`), and exported functions get their SDK signature. Matches are
verified in the full build; when a function compiles differently there (every later
symbol moves), the one before the first moved symbol is reverted and the module rebuilt
(`tools/reverify.sh` retries functions reverted by earlier runs).

`diff.py --score` is alignment-aware (branch/jump targets masked). Use `--version/--module`
for modules other than mcctrl 3.60.

Style: prefer structured control flow. `goto` is only kept where every
structured equivalent compiles differently (documented in the source); the
auto-decompiler rejects m2c output containing `goto`. Fakematches must be
marked `FAKEMATCH`.

Install m2c from GitHub (`pip install git+https://github.com/matt-kempster/m2c.git`);
the `m2c` package on PyPI is an unrelated project.

## Notes

- PRX relocations are parsed by `tools/prx_relocs.py` and fed to splat as
  `reloc_addrs`, so only genuinely relocated values become symbols.
- Segment 1 (`.bss`) is relocated independently in a PRX, so its immediates are
  segment-relative; the generated linker script links it at VMA 0.
- C is compiled with `cc1` from psp-gcc 1.7.1 and assembled with `psp-as` from
  1.3.1 (the 1.7.1 assembler is unavailable). splat asm uses modern GAS with
  `--no-pad-sections`.
- The `.comment` section has one `GCC: ...` entry per linked object file, which
  hints at the number of translation units (mcctrl: 4).
- psp-1.7.1 objects had 8-byte aligned `.text`; padding `nop`s before an
  8-aligned function mark a translation-unit boundary (e.g. mcctrl 0xE78).
  `tools/fix_old_gas.py --text-align 8` emulates this for psp-as 1.3.1 output.
- NIDs are the first 4 bytes of SHA-1 of the name; `tools/nid_names.py`
  resolves them from identifiers in the SDK (extracted to `tmp/sdk`).
- Data words reference symbols only through PRX relocations (value-based
  pointer guessing is disabled in `tools/split.py`); unrelocated words,
  `%hi/%lo/%gp_rel` operands without a relocation, unrelocated `j/jal`, and
  opcodes modern GAS rejects (Allegrex system ops, VFPU) are emitted as raw
  `.word`s, which is always byte-exact because links reproduce original addresses.
- From 3.50 PRXs have no section headers; `tools/prxinfo.py` rebuilds the layout
  from module info (offset in segment 0's `p_paddr`), the export/import tables
  and stubs, and reads relocations from the `0x700000A0` program header.
- Relocation targets outside their segment or between sections (one-past-end
  pointers, base-minus-offset arithmetic) use `PRX_ZERO + addend`.
- Sony code here uses small inline helpers (memclr/memcpy/memcmp taking
  `void *` and casting to local byte pointers) and `goto end` error chains;
  reproducing those is usually what makes register allocation match.
