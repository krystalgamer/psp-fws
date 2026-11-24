/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

void func_00020050(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x42C) = __builtin_allegrex_ins(M2C_FIELD(arg0, s32 *, 0x42C) & arg1, 0, 0x12, 2);
    }
}

s32 func_00020070(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 8) & arg2;
    }
    return var_v0;
}

s32 func_00020094(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_v0;
}

s32 func_000200B4(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xE8);
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

s32 func_000200F4(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    return var_v0;
}

u8 func_00020114(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x18);
    }
    return var_v0;
}

u8 func_00020134(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x19);
    }
    return var_v0;
}

u8 func_00020154(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1B);
    }
    return var_v0;
}

u8 func_00020174(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1C);
    }
    return var_v0;
}

u8 func_00020194(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1A);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020050", func_000201B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020050", func_000201F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020050", func_0002022C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020050", func_00020360);

s32 func_0002039C(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x5C);
    }
    return var_v1;
}

s32 func_000203D4(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x60);
    }
    return var_v1;
}

u8 func_0002040C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1D);
    }
    return var_v0;
}

s32 func_0002042C(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}

