#include "common.h"
#include "blkdev_decls.h"

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_6216FF5D);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_550511CE);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_2FD88F7C);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_39150835);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/blkdev", D_00001014);

INCLUDE_RODATA("nonmatchings/blkdev", D_00001034);
#endif

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_46C91FF8);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_A86B6778);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_5E5285A5);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_43AEEFB6);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_DC4A18BC);

INCLUDE_ASM("nonmatchings/blkdev", sceBLK_driver_06CD0A03);

s32 module_start(void) {
    sceBLK_driver_6216FF5D();
    return 0;
}
