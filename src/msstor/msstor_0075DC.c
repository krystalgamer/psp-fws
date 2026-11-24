/* cflags: -Os */
#include "common.h"
#include "msstor_decls.h"

s32 func_000075DC(void *arg0) {
    s32 var_v0;

    var_v0 = 0xC0220100;
    if (arg0 != NULL) {
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x24), 1U);
        M2C_FIELD(arg0, s32 *, 0x20) = -1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0075DC", func_00007620);

INCLUDE_ASM("tmp/asm/201/msstor/nonmatchings/msstor_0075DC", func_000076E4);

void func_00007798(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E84) = 0;
}

void func_000077A0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x4E8C) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4E8C) = 0;
}

s32 func_000077B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4E8C) != 0;
}

