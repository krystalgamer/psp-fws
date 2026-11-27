/* cflags[100]: -Os */
#include "common.h"
#include "dlgsample_plugin_decls.h"

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", module_start);

s32 module_stop(void) {
    func_0000034C();
    return 0;
}

void func_0000015C(void) {
    scePaf_3481F595(D_0000053C, &D_000004CC);
    D_00000540 = 0;
}

void func_0000018C(void) {
    void *sp0;
    scePaf_F609FA81(D_0000053C, &D_000004CC, 0, 0);
    scePaf_CAF05F1D(D_0000053C, &D_000004CC);
    sceVshCommonGui_441D55D7(1);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_000002C4(&sp0);
}

void func_00000200(void) {
    scePaf_3481F595(D_0000053C, &D_000004CC);
    D_00000540 = 0;
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_00000230);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_0000023C);

void func_00000290(void) {
}

void func_00000298(void) {
}

void func_000002A0(s32 arg0) {
    scePaf_97FDA760(arg0, 1, &D_0000050C);
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002C4);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002F4);

INCLUDE_RODATA("nonmatchings/dlgsample_plugin", D_000004CC);

INCLUDE_RODATA("nonmatchings/dlgsample_plugin", D_000004D4);
