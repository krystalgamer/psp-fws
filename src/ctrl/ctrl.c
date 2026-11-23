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

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_B7CEAED4);

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

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlPeekBufferPositive);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlPeekBufferNegative);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlReadBufferPositive);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlReadBufferNegative);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_A88E8D22);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_252D3A8D);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_348D99D4);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_AF5960F3);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrl_driver_5C56C779);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", sceCtrlClearRapidFire);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001548);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001554);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001560);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_0000156C);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001578);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001584);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_00001600);

INCLUDE_ASM("tmp/asm/282/ctrl/nonmatchings/ctrl", func_0000161C);

INCLUDE_RODATA("tmp/asm/282/ctrl/nonmatchings/ctrl", D_00001D20);
