/* cflags: -O2 -frename-registers */
#include "common.h"
#include "irda_decls.h"

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000000);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000188);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_0000031C);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_000004C8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000528);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000560);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000614);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000660);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_000006C8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_0000075C);

s32 func_00000850(void) {
    sceSysreg_driver_BB823481(5);
    sceSysreg_driver_7725CA08(5);
    sceGpio_driver_310F0CCF(4);
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/irda/nonmatchings/irda", D_000016B0);

INCLUDE_RODATA("tmp/asm/282/irda/nonmatchings/irda", D_00001708);

INCLUDE_RODATA("tmp/asm/282/irda/nonmatchings/irda", D_00001710);

INCLUDE_RODATA("tmp/asm/282/irda/nonmatchings/irda", D_00001724);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000880);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000968);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000A1C);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000A74);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000AB8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000AF8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000B4C);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000BAC);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000BB8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000BC4);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000BE8);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000C10);

s32 func_00000C5C(void) {
    func_00000E94();
    sceSysEventForKernel_D7D3FDCD(&D_00001740);
    return 0;
}

void func_00000C88(void) {
    func_00000D6C();
}

void func_00000CA4(void) {
    func_00000E94();
}

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000CC0);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000CE0);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000D00);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000D6C);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000E94);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00000F14);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00001024);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00001150);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_0000117C);

INCLUDE_ASM("tmp/asm/282/irda/nonmatchings/irda", func_00001278);

s32 module_start(void) {
    func_00000BC4();
    return 0;
}

s32 module_reboot_before(void) {
    func_00000BE8();
    return 0;
}
