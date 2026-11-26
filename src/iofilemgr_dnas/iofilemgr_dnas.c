#include "common.h"
#include "iofilemgr_dnas_decls.h"

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_00001564);

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_00001588);

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_00001594);

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_000015A4);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", module_start);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", module_reboot_before);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/iofilemgr_dnas", sceIoInitDNAS);

s32 sceIoEndDNAS(void) {
    sceIoInitDNAS(0, 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", sceIoFilemgrDNAS_driver_AA46A25E);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", sceIoCloseDNAS);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", sceIoLseekDNAS);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", sceIoReadDNAS);
#else
s32 func_000000E8(void) {
    return 0;
}

s32 func_000000F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000000F8);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000100);
#endif

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_000015D8);

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_000015F0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000314);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000006A0);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000007D4);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000009BC);
#else
INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_00001600);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000003B8);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000458);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000005E0);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000714);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000A84);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000B14);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000B94);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00001024);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_000011A4);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00001240);
#endif

INCLUDE_RODATA("nonmatchings/iofilemgr_dnas", D_00001658);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000EA4);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00000FEC);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00001084);

INCLUDE_ASM("nonmatchings/iofilemgr_dnas", func_00001170);
#endif
