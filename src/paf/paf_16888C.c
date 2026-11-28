/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_0016888C(s32 arg0, s32 arg1, s32 *arg2) {
    *arg2 = (arg0 << 0x18) + (arg1 << 0x10);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_16888C", func_001688A4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16888C", func_0015F838);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16888C", func_00166FBC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16888C", func_0015F87C);

INCLUDE_ASM("nonmatchings/paf_16888C", func_0015F8A4);
#endif

#if FW_VERSION < 200
s32 func_00121374(void) {
    return 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16888C", func_0012137C);
#endif

#if FW_VERSION < 200
s32 func_0012137C(void *arg0) {
    s32 var_a1;

    var_a1 = 0x80615001;
    if ((M2C_FIELD(arg0, s32 *, 0) & 0xF) == 0xF) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_a1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16888C", func_001213A0);
#endif
