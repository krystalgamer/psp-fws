/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ctrl_decls.h"

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_3E65A0EA);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_E03956E9);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_000001C0);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_000002F0);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_000003B0);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00000470);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00000804);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlSetSamplingMode);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlGetSamplingMode);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlSetSamplingCycle);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlPeekLatch);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlReadLatch);

s32 sceCtrl_driver_B7CEAED4(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_000027A4;
    }
    if (arg1 != NULL) {
        *arg1 = D_000027A8;
    }
    if (arg2 != NULL) {
        *arg2 = D_000027AC;
    }
    if (arg3 != NULL) {
        *arg3 = D_000027B0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlSetIdleCancelThreshold);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlGetIdleCancelThreshold);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_7CA723DC);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_5E77BC8A);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlSetRapidFire);

s32 module_start(void) {
    sceCtrl_driver_3E65A0EA();
    return 0;
}

s32 module_reboot_before(void) {
    sceCtrl_driver_E03956E9();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_C3F607F3);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_C245B57B);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlGetSamplingCycle);

s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 0);
}

s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 1);
}

s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 2);
}

s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 3);
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_A88E8D22);

s32 sceCtrl_driver_252D3A8D(s8 arg0) {
    D_00001D7F = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_348D99D4);

s32 sceCtrl_driver_AF5960F3(void) {
    return D_00001D88;
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_5C56C779);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlClearRapidFire);

s32 func_00001548(void) {
    return 0x80000003;
}

s32 func_00001554(void) {
    return 0x80000003;
}

s32 func_00001560(void) {
    return 0x80000003;
}

s32 func_0000156C(void) {
    return 0x80000003;
}

s32 func_00001578(void) {
    return 0x80000003;
}

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001584);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001600);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_0000161C);

INCLUDE_RODATA("tmp/asm/282/ctrl/nonmatchings/ctrl", D_00001D20);
