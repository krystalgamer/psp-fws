/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000230EC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023138);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023154);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023234);

s32 func_0002329C(s32 *arg0) {
    return *arg0 + 8;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000232A8);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000232BC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000232C4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_0002330C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023388);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000233E8);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000233FC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023404);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023480);

void func_000234A4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00055628;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_000234C8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00055628;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000234EC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023560);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000235D4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000236F4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_00023738);

s32 func_00023798(void *arg0) {
    s32 var_a1;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 0;
    if (temp_v1 < (u32) M2C_FIELD(arg0, u32 *, 8)) {
        var_a1 = M2C_FIELD(arg0, s32 *, 4) + temp_v1;
    }
    return var_a1;
}

s32 func_000237BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000237CC);

void func_00023864(void *arg0, s32 arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00055640;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    temp_v0 = scePaf_F13EBB78(arg1);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
    }
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0230EC", func_000238C4);

void func_0002398C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

