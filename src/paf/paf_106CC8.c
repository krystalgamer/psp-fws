/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

s32 func_00106CC8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000CFFE0(temp_v0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_106CC8", func_00106CFC);

s32 func_00106D30(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000D0130(temp_v0, arg1);
    }
    return var_v1;
}

s32 func_00106D64(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000D00DC(temp_v0, arg1);
    }
    return var_v1;
}

s32 func_00106D98(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000D0244(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

