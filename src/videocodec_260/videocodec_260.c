#include "common.h"
#include "videocodec_260_decls.h"

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecGetEDRAM);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecReleaseEDRAM);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecOpen);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecSetMemory);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecScanHeader);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecGetVersion);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecGetSEI);

s32 sceVideocodecEndEntry(void) {
    sceMePowerControlDmacplusClock(0);
    sceMePowerControlAvcPower(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecInit);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecDecode);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecStop);

INCLUDE_ASM("nonmatchings/videocodec_260", sceVideocodecDelete);

INCLUDE_ASM("nonmatchings/videocodec_260", func_000007B8);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000820);

INCLUDE_ASM("nonmatchings/videocodec_260", func_000008F0);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000964);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000B1C);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000BC8);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000C80);

INCLUDE_ASM("nonmatchings/videocodec_260", func_00000DAC);

INCLUDE_RODATA("nonmatchings/videocodec_260", D_00001060);

INCLUDE_RODATA("nonmatchings/videocodec_260", D_00001078);
