/* cflags: -O2 -frename-registers */
#include "common.h"
#include "i2c_decls.h"

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", func_00000000);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_D6E9836A);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_E9463B99);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_F87D1ED6);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_6536B1B6);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", module_start);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_20ADF12A);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_4809D85F);

s32 sceI2c_driver_21A8282C(void) {
    sceSysreg_driver_58F47EFD();
    sceSysreg_driver_94B0323C();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_B952BA65);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_DB6C4F9B);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", sceI2c_driver_0397408B);

s32 sceI2c_driver_17B0DA59(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", func_00001264);

INCLUDE_ASM("tmp/asm/282/i2c/nonmatchings/i2c", func_000012BC);

INCLUDE_RODATA("tmp/asm/282/i2c/nonmatchings/i2c", D_000016E0);
