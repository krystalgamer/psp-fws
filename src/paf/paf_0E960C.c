/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_000E960C(M2C_UNK **arg0) {
    *arg0 = &D_0019A890;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E960C", func_000E9634);
#endif

#if FW_VERSION < 200
s32 func_000E9634(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D8 != arg1) {
        var_v0 = func_0008A944(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_000E9634(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D8 != arg1) {
        var_v0 = func_000E445C(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
s32 func_000E9660(void) {
    return D_001A47D8;
}
#endif

s32 paf::PhMenuList::WidgetType() {
    return D_001A47D8;
}

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A6AC);

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A6C0);

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A798);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_00192BA0);

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_00192BA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A7A0);

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A7A8);
#endif

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A7B8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_00192C90);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A890);
#endif

INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A89C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A8A8);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0019A4B8);

INCLUDE_ASM("nonmatchings/paf_0E960C", func_000E93AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_00192CA8);

INCLUDE_ASM("nonmatchings/paf_0E960C", _ZN3paf10PhMenuListC2EPNS_8PhWidgetEPNS_8PhAppearE);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0011C7B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0E960C", D_0012EE30);
#endif

#if FW_VERSION < 200 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E960C", func_000E9678);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E960C", func_0008E964);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0E960C", _ZN3paf10PhMenuListC1EPNS_8PhWidgetEPNS_8PhAppearE);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E960C", func_000E979C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E960C", _ZN3paf10PhMenuListD2Ev);
#endif
