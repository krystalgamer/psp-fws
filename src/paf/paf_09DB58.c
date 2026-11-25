/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_09DB58", func_0009DB58);
#else
void func_0009DB58(struct Unk_func_0009DB58_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk42C = __builtin_allegrex_ins(arg0->unk42C & arg1, 0, 0x12, 2);
    }
}
#endif

s32 func_0009DB78(s32 arg0, struct Unk_func_0009DB78_1 *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk8 & arg2;
    }
    return var_v0;
}

s32 func_0009DB9C(s32 arg0, struct Unk_func_0009DB9C_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unkC;
    }
    return var_v0;
}

s32 func_0009DBBC(s32 arg0, struct Unk_func_0009DBBC_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unkE8;
    }
    return var_v0;
}

s32 func_0009DBDC(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = *arg1;
    }
    return var_v0;
}

s32 func_0009DBFC(s32 arg0, struct Unk_func_0009DBFC_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk4;
    }
    return var_v0;
}

u8 func_0009DC1C(s32 arg0, struct Unk_func_0009DC1C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk18;
    }
    return var_v0;
}

u8 func_0009DC3C(s32 arg0, struct Unk_func_0009DC3C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk19;
    }
    return var_v0;
}

u8 func_0009DC5C(s32 arg0, struct Unk_func_0009DC5C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1B;
    }
    return var_v0;
}

u8 func_0009DC7C(s32 arg0, struct Unk_func_0009DC7C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1C;
    }
    return var_v0;
}

u8 func_0009DC9C(s32 arg0, struct Unk_func_0009DC9C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1A;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_09DB58", func_0009DCBC);

INCLUDE_ASM("nonmatchings/paf_09DB58", func_0009DCF8);

INCLUDE_ASM("nonmatchings/paf_09DB58", func_0009DD34);

INCLUDE_ASM("nonmatchings/paf_09DB58", func_0009DE68);

s32 func_0009DEA4(s32 arg0, struct Unk_func_0009DEA4_1 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (arg1->unk8 & 0x100) && (arg1->unk64 == 0)) {
        var_v1 = arg1->unk5C;
    }
    return var_v1;
}

s32 func_0009DEDC(s32 arg0, struct Unk_func_0009DEDC_1 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (arg1->unk8 & 0x100) && (arg1->unk64 == 0)) {
        var_v1 = arg1->unk60;
    }
    return var_v1;
}

u8 func_0009DF14(s32 arg0, struct Unk_func_0009DF14_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1D;
    }
    return var_v0;
}

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_09DB58", func_00053D90);
#endif

#if FW_VERSION == 270
s32 func_00053D90(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_09DB58", func_00054970);
#endif

#if FW_VERSION == 282
s32 func_0009DF34(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}
#endif
