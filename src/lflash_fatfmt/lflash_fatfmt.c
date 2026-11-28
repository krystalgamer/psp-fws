/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
#include "common.h"
#include "lflash_fatfmt_decls.h"

#if FW_VERSION == 340
void func_00000000_v340(void) {

}
#endif

#if FW_VERSION == 330
void func_00000000_v330(void) {

}
#endif

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_00000000);

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_000000EC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_0000130C);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001310);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001330);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001348);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001360);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001848);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_0000138C);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013A4);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013B4);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013BC);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013C4);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013D8);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013E8);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_000013F8);

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_00000188);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_0000020C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_00000204);
#endif

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_000007B0);

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_000007E0);

#if FW_VERSION >= 350
s32 func_000007F8(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001724);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001728);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001734);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001740);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001744);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001764);

INCLUDE_RODATA("nonmatchings/lflash_fatfmt", D_00001770);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_000008D0);
#endif

#if FW_VERSION < 300
s32 func_000008D0(void) {
    Kprintf("Usage: fatfmt [<option>]... <blkdev>\n");
    Kprintf("  <option>:\n");
    Kprintf("    -debug  display debug info\n");
    Kprintf("    -c <N>  sector/cluster\n");
    Kprintf("    -r <N>  reserved_sector\n");
    Kprintf("    -n <N>  number of fats\n");
    Kprintf("    -e <N>  rootdir entries\n");
    Kprintf("    -m <N>  media\n");
    Kprintf("    -u <N>  sector/track\n");
    Kprintf("    -h <N>  heads\n");
    Kprintf("    -o <N>  hiddens\n");
    Kprintf("    -I <N>  volume ID\n");
    Kprintf("    -L <S>  volume label\n");
    Kprintf("    -O <S>  OEM name\n");
    Kprintf("    -s <N>  file system size\n");
    Kprintf("    -[no]cluster_align     set/reset cluster alignment\n");
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_000009A8);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lflash_fatfmt", func_0000131C);
#endif

void sceLflashFatfmtStartFatfmt(void) {
    func_000009A8();
}

s32 module_start(void) {
    return 0;
}
