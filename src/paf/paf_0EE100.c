/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

void func_000EE100(M2C_UNK **arg0) {
    *arg0 = &D_0019AD38;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

s32 func_000EE138(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4810 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE164(void) {
    return D_001A4810;
}

s32 _ZN3paf10PhProgress10WidgetTypeEv(void) {
    return D_001A4810;
}

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AC58);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AD28);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AD38);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AE0C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0EE100", D_00193218);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AE18);
#endif

INCLUDE_ASM("nonmatchings/paf_0EE100", func_000EE17C);

INCLUDE_ASM("nonmatchings/paf_0EE100", func_000EE258);
