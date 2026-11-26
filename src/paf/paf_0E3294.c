#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3294);
#else
void func_000E3294(M2C_UNK **arg0) {
    *arg0 = &D_0019A3B8;
    func_000F022C((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/paf_0E3294", D_0019A2A0);

INCLUDE_RODATA("nonmatchings/paf_0E3294", D_0019A2B0);

INCLUDE_RODATA("nonmatchings/paf_0E3294", D_0019A380);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E32CC);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3704);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089834);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008993C);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089A44);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089B48);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089C50);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089D48);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3408);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089E40);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0E3294", func_00089F00);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_000DD8A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3794);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E38BC);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E39E8);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3B0C);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3C38);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3D4C);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E3E90);

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E4064);
#endif

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E40D0);

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008A1C8);
#endif

#if FW_VERSION < 151
void func_0008A1C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008A730);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008A1D8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008A2D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E3294", func_000F0E3C);
#endif

#if FW_VERSION == 282
void func_000E414C(s32 arg0, s32 arg1, s32 arg2) {
    func_000F0E3C(arg0, arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
s32 func_000E4168(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47CC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4194(void) {
    return D_001A47CC;
}

s32 func_000E41A0(void) {
    return D_001A47CC;
}

INCLUDE_ASM("nonmatchings/paf_0E3294", func_000E41AC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0E3294", func_0008A498);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E3294", scePaf_D2E0D705);
#endif
