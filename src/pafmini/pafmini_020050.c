/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020050", func_00020050);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020050(struct Unk_func_00020050_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk42C = arg0->unk42C & arg1 & 0xFFF3FFFF;
    }
}
#endif

#if FW_VERSION == 282
void func_00020050(struct Unk_func_00020050_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk42C = __builtin_allegrex_ins(arg0->unk42C & arg1, 0, 0x12, 2);
    }
}
#endif

s32 func_00020070(s32 arg0, struct Unk_func_00020070_1 *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk8 & arg2;
    }
    return var_v0;
}

s32 func_00020094(s32 arg0, struct Unk_func_00020094_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unkC;
    }
    return var_v0;
}

s32 func_000200B4(s32 arg0, struct Unk_func_000200B4_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unkE8;
    }
    return var_v0;
}

s32 func_000200D4(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = *arg1;
    }
    return var_v0;
}

s32 func_000200F4(s32 arg0, struct Unk_func_000200F4_1 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk4;
    }
    return var_v0;
}

u8 func_00020114(s32 arg0, struct Unk_func_00020114_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk18;
    }
    return var_v0;
}

u8 func_00020134(s32 arg0, struct Unk_func_00020134_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk19;
    }
    return var_v0;
}

u8 func_00020154(s32 arg0, struct Unk_func_00020154_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1B;
    }
    return var_v0;
}

u8 func_00020174(s32 arg0, struct Unk_func_00020174_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1C;
    }
    return var_v0;
}

u8 func_00020194(s32 arg0, struct Unk_func_00020194_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1A;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_020050", func_000201B4);

INCLUDE_ASM("nonmatchings/pafmini_020050", func_000201F0);

INCLUDE_ASM("nonmatchings/pafmini_020050", func_0002022C);

INCLUDE_ASM("nonmatchings/pafmini_020050", func_00020360);

s32 func_0002039C(s32 arg0, struct Unk_func_0002039C_1 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (arg1->unk8 & 0x100) && (arg1->unk64 == 0)) {
        var_v1 = arg1->unk5C;
    }
    return var_v1;
}

s32 func_000203D4(s32 arg0, struct Unk_func_000203D4_1 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (arg1->unk8 & 0x100) && (arg1->unk64 == 0)) {
        var_v1 = arg1->unk60;
    }
    return var_v1;
}

u8 func_0002040C(s32 arg0, struct Unk_func_0002040C_1 *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = arg1->unk1D;
    }
    return var_v0;
}

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/pafmini_020050", func_0003FC2C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_020050", func_00040934);
#endif

#if FW_VERSION == 282
s32 func_0002042C(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}
#endif
