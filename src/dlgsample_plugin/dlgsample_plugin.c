/* lang: c++ */
/* cflags[100,102]: -Os */
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
    _ZN3paf4View9PageCloseEPKc(D_0000053C, &D_000004CC);
    D_00000540 = 0;
}

void func_0000018C(void) {
    void *sp0;
    _ZN3paf4View8PageOpenEPKcii(D_0000053C, &D_000004CC, 0, 0);
    _ZN3paf4View12PageActivateEPKc(D_0000053C, &D_000004CC);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_000002C4(&sp0);
}

void func_00000200(void) {
    _ZN3paf4View9PageCloseEPKc(D_0000053C, &D_000004CC);
    D_00000540 = 0;
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_00000230);

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_0000023C);

void func_00000290(void) {
}

void func_00000298(void) {
}

void func_000002A0(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, &D_0000050C);
}

INCLUDE_ASM("nonmatchings/dlgsample_plugin", func_000002C4);
