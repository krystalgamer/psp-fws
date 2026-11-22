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

| Module | Builds covered | Setup | C status |
|---|---|---|---|
| mcctrl | 2.00–3.60 (one binary), config `360` | matching | 21/22 functions; `sceMcctrl_7CAC25B2` is a NON_MATCHING draft |
| openpsid | 2.00–2.82 (psp-1.7.1 build), config `282` | matching | 12/14; Encrypt and GetOpenPSID are NON_MATCHING drafts |
| mcore | 2.70–3.40, config `340` | matching | 84/707 (auto-decompiled) |
| mcore | 2.50, 2.60 | matching (asm only) | – |
| paf, pafmini | 1.00 | matching (asm only) | only 2 objects each are psp-1.3.1; the rest need the unavailable psp-1.5.1 |

**All firmware modules below 3.60** (3,814 PRX files, 2,662 distinct binaries) have
matching asm setups in `config/<ver>/`, one config per distinct binary under the latest
version that ships it (`tmp/inventory.json` lists which versions share a binary).
Only objects built with psp-gcc 1.3.1/1.7.1 can be matched as C; the other modules
use compiler versions that aren't available.

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
