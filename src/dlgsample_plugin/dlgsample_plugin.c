#include "common.h"
#include "dlgsample_plugin_decls.h"

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", module_start);

s32 module_stop(void) {
    func_0000034C();
    return 0;
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_0000015C);

void func_0000018C(void) {
    void *sp0;
    scePaf_F609FA81(D_0000053C, &D_000004CC, 0, 0);
    scePaf_CAF05F1D(D_0000053C, &D_000004CC);
    sceVshCommonGui_441D55D7(1);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_000002C4(&sp0);
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_00000200);

u8 func_00000230(void) {
    return D_00000540;
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_0000023C);

void func_00000290(void) {
}

void func_00000298(void) {
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002A0);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002C4);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002F4);

INCLUDE_RODATA("nonmatchings/dlgsample_plugin", D_000004CC);

INCLUDE_RODATA("nonmatchings/dlgsample_plugin", D_000004D4);
