/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

s32 func_00078644(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004B8A0(temp_v0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_078644", func_00078678);

s32 func_000786AC(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004B9F0(temp_v0, arg1);
    }
    return var_v1;
}

s32 func_000786E0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004B99C(temp_v0, arg1);
    }
    return var_v1;
}

s32 func_00078714(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_0004BB04(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

