/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DB58", func_0009DB58);

s32 func_0009DB78(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 8) & arg2;
    }
    return var_v0;
}

s32 func_0009DB9C(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_v0;
}

s32 func_0009DBBC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xE8);
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

s32 func_0009DBFC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    return var_v0;
}

u8 func_0009DC1C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x18);
    }
    return var_v0;
}

u8 func_0009DC3C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x19);
    }
    return var_v0;
}

u8 func_0009DC5C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1B);
    }
    return var_v0;
}

u8 func_0009DC7C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1C);
    }
    return var_v0;
}

u8 func_0009DC9C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1A);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DB58", func_0009DCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DB58", func_0009DCF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DB58", func_0009DD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DB58", func_0009DE68);

s32 func_0009DEA4(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x5C);
    }
    return var_v1;
}

s32 func_0009DEDC(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x60);
    }
    return var_v1;
}

u8 func_0009DF14(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1D);
    }
    return var_v0;
}

s32 func_0009DF34(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}

