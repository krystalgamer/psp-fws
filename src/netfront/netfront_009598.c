/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

void func_00009598(void *arg0, s32 arg1) {
    s32 temp_a0;
    void *temp_v0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_a0 != 0) {
            temp_v0 = temp_a0 + (arg1 * 0x34);
            M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
            M2C_FIELD(temp_v0, s32 *, 8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_009598", func_000095F4);

void func_00009668(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_000096A4((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_009598", func_000096A4);

s32 func_00009750(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_a2;
}

s32 func_00009798(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_000097B8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

