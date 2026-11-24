/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_00036D6C(void) {
    return D_0005C5DC;
}

s32 func_00036D78(s32 arg0) {
    D_0005C5DC = arg0;
    return arg0 != 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036D88);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036E10);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036E98);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036EEC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036F40);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", D_000563B0);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", D_000563D0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00036F9C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00037144);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_00037200);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_036D6C", func_000372A0);

s32 func_000372E0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    return 0;
}

s32 func_000372F8(void) {
    return 0;
}

s32 func_00037300(void) {
    return 0;
}

