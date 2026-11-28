/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

s32 func_000EDEDC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A480C != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EDF08(void) {
    return D_001A480C;
}

s32 paf::PhPlane::WidgetType() {
    return D_001A480C;
}

INCLUDE_ASM("nonmatchings/paf_0EDEDC", func_000EDF20);

INCLUDE_ASM("nonmatchings/paf_0EDEDC", _ZN3paf7PhPlaneC1EPNS_8PhWidgetEPNS_8PhAppearE);
