/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

s32 func_000781A8(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004A54C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0781A8", func_000781DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0781A8", func_00078254);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0781A8", func_00078294);

s32 func_000782CC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004A65C(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_00078300(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_00049D40(temp_v0);
    }
    return var_v1;
}

s32 func_00078334(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_00049DA4(temp_v0);
    }
    return var_v1;
}

s32 func_00078368(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_00049E08(temp_v0);
    }
    return var_v1;
}

s32 func_0007839C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_00049EAC(temp_v0);
    }
    return var_v1;
}

