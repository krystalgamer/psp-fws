#include "common.h"
#include "display_decls.h"

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", module_reboot_before);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003B94);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_206276C2);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_7A10289D);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_000009F8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00000AF8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00000EAC);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00001220);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_000012C0);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00001398);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00001480);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplaySetMode);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetMode);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_63E22A26);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_5B5AEFAD);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_96CFAC38);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_9E3C6DC6);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_31C4BAA8);

s32 module_start(void) {
    sceDisplay_driver_206276C2();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_432D133F);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_681EE6A7);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_23CE8C51);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplaySetHoldMode);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_A544C486);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_BF79F646);

void sceDisplayGetFramePerSec(void) {
    sceLcdc_driver_3107417C();
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplaySetFrameBuf);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetFrameBuf);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayIsForeground);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_AC14F1FF);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_E55F0D50);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002258);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_000022A8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_000023B8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayWaitVblank);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayWaitVblankCB);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_A83EF139);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetAccumulatedHcount);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetCurrentHcount);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_AE0E8972);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003C50);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002968);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002A64);

s32 func_00002AA0(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_D774BA45(0x1E);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002AC8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002B20);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetVcount);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayIsVblank);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_69B53541);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_21038913);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayWaitVblankStart);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayWaitVblankStartCB);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_92C8F8B7);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002C7C);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002C9C);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002CC0);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002CF8);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002D14);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002D48);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002E84);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002F98);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_0000315C);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003C88);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003CA8);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003CBC);
