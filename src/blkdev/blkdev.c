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

INCLUDE_ASM("nonmatchings/blkdev", sceBLKGetUnitNum);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKInvalidateDeviceName);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKGetDeviceData);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKUnRegister);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKStartFeatures);

INCLUDE_ASM("nonmatchings/blkdev", sceBLKTerm);

s32 module_start(void) {
    sceBLKInit();
    return 0;
}
