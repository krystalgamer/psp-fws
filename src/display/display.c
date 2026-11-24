/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "display_decls.h"

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", module_reboot_before);

INCLUDE_RODATA("tmp/asm/282/display/nonmatchings/display", D_00003B94);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_206276C2);

s32 sceDisplay_driver_7A10289D(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003D10);
    sceKernelReleaseSubIntrHandler(0x1E, 0x12);
    func_00002A64();
    return 0;
}

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

s8 sceDisplay_driver_23CE8C51(void) {
    return D_00003E1A;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_E4E4C018);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplaySetHoldMode);

s32 sceDisplay_driver_A544C486(s32 arg0) {
    D_00003EB0 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_BF79F646);

void sceDisplayGetFramePerSec(void) {
    sceLcdc_driver_3107417C();
}

s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return sceDisplay_driver_63E22A26(2, (s32) arg0, arg1, arg2, arg3);
}

s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3) {
    return sceDisplay_driver_5B5AEFAD(2, (s32) arg0, (s32) arg1, (s32) arg2, arg3);
}

s32 sceDisplayIsForeground(void) {
    return D_00003E14 == 2;
}

s8 sceDisplay_driver_AC14F1FF(void) {
    return D_00003E14;
}

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

s32 func_00002A64(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_F987B1F0(0x1E);
    InterruptManagerForKernel_F987B1F0(0x32);
    sceKernelDeleteEventFlag(D_00003EF8);
    return 0;
}

s32 func_00002AA0(void) {
    sceSysreg_driver_F6D83AD0(1);
    InterruptManagerForKernel_D774BA45(0x1E);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", func_00002AC8);

s32 func_00002B20(s32 arg0) {
    D_00003EF4 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplayGetVcount);

s32 sceDisplayIsVblank(void) {
    return sceDisplayGetCurrentHcount() < D_00003EE8;
}

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_69B53541);

INCLUDE_ASM("tmp/asm/282/display/nonmatchings/display", sceDisplay_driver_21038913);

s32 sceDisplayWaitVblankStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlag(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplayWaitVblankStartCB(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelWaitEventFlagCB(D_00003EF8, 1U, 1, NULL, NULL);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceDisplay_driver_92C8F8B7(void) {
    return D_00003EF0 != 0;
}

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
