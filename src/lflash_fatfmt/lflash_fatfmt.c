#include "common.h"
#include "lflash_fatfmt_decls.h"

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_00000000);

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_000000EC);

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_00000204);

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_000007B0);

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_000007E0);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001724);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001728);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001734);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001740);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001744);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001764);

INCLUDE_RODATA("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", D_00001770);

s32 func_000008D0(void) {
    KDebugForKernel_84F370BC("Usage: fatfmt [<option>]... <blkdev>\n");
    KDebugForKernel_84F370BC("  <option>:\n");
    KDebugForKernel_84F370BC("    -debug  display debug info\n");
    KDebugForKernel_84F370BC("    -c <N>  sector/cluster\n");
    KDebugForKernel_84F370BC("    -r <N>  reserved_sector\n");
    KDebugForKernel_84F370BC("    -n <N>  number of fats\n");
    KDebugForKernel_84F370BC("    -e <N>  rootdir entries\n");
    KDebugForKernel_84F370BC("    -m <N>  media\n");
    KDebugForKernel_84F370BC("    -u <N>  sector/track\n");
    KDebugForKernel_84F370BC("    -h <N>  heads\n");
    KDebugForKernel_84F370BC("    -o <N>  hiddens\n");
    KDebugForKernel_84F370BC("    -I <N>  volume ID\n");
    KDebugForKernel_84F370BC("    -L <S>  volume label\n");
    KDebugForKernel_84F370BC("    -O <S>  OEM name\n");
    KDebugForKernel_84F370BC("    -s <N>  file system size\n");
    KDebugForKernel_84F370BC("    -[no]cluster_align     set/reset cluster alignment\n");
    return 1;
}

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_000009A8);

INCLUDE_ASM("tmp/asm/282/lflash_fatfmt/nonmatchings/lflash_fatfmt", func_0000131C);

void LflashFatfmt_B7A424A4(void) {
    func_000009A8();
}

s32 module_start(void) {
    return 0;
}
