/* cflags: -O2 -frename-registers */
#include "common.h"
#include "blkdev_decls.h"

INCLUDE_ASM("nonmatchings/blkdev", sceBLKInit);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKRegister);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKStart);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKStop);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/blkdev", D_00001014);

INCLUDE_RODATA("nonmatchings/blkdev", D_00001034);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/blkdev", func_000005FC);
#else
INCLUDE_ASM("nonmatchings/blkdev", sceBLKGetUnitNum);
#endif

INCLUDE_ASM("nonmatchings/blkdev", sceBLKInvalidateDeviceName);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/blkdev", func_000007F0);
#else
INCLUDE_ASM("nonmatchings/blkdev", sceBLKGetDeviceData);
#endif

INCLUDE_ASM("nonmatchings/blkdev", sceBLKUnRegister);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKStartFeatures);

s32 sceBLKTerm(void) {
    s32 i;

    for (i = D_00000F30 - 1; i >= 0; i--) {
        s32 *e = D_00001000[D_00000F30];

        sceBLKUnRegister(e, e[9]);
    }
    D_00000F30 = 0;
    sceKernelDeleteHeap(D_00000F10);
    return sceKernelDeleteSema(D_00000F10);
}

s32 module_start(void) {
    sceBLKInit();
    return 0;
}
