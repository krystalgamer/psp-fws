/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION == 303
s32 func_00036D6C(void) {
    return D_0005C5DC;
}

s32 func_00036D78(s32 arg0) {
    D_0005C5DC = arg0;
    return arg0 != 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036D88);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036E10);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036E98);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036EEC);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036F40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_000563B0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_000563D0);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D6F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_000528D0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D740);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D758);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D780);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D7AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052AA8);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052B10);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052C58);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052D60);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052DD0);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052E70);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00052EE0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_00056480);

INCLUDE_RODATA("nonmatchings/lftv_middleware_036D6C", D_0007D8C0);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00036F9C);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00037144);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_00037200);

INCLUDE_ASM("nonmatchings/lftv_middleware_036D6C", func_000372A0);

s32 func_000372E0(struct Unk_func_000372E0_0 *arg0, struct Unk_func_000372E0_1 *arg1) {
    arg0->unk48 = (s32) arg1->unk0;
    arg0->unk4C = (s32) arg1->unk4;
    return 0;
}

s32 func_000372F8(void) {
    return 0;
}

s32 func_00037300(void) {
    return 0;
}
#endif
