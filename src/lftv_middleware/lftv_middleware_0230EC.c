/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_000230EC(struct Unk_func_000230EC_0 *arg0) {
    if (arg0->unk24 == 0) {
        arg0->unk24 = scePaf_F13EBB78(D_00055600);
    }
    func_00023138((s32) arg0, 0);
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023138);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_0003F290);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023154);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023234);

s32 func_0002329C(s32 *arg0) {
    return *arg0 + 8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000232A8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000232BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000232C4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_0002330C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023388);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000233E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000233FC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023404);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023480);

void func_000234A4(struct Unk_func_000234A4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00055628;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 1;
    arg0->unk10 = 0;
}

void func_000234C8(struct Unk_func_000234C8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00055628;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 1;
    arg0->unk10 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000234EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023560);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000235D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000236F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_00023738);

s32 func_00023798(struct Unk_func_00023798_0 *arg0) {
    s32 var_a1;
    u32 temp_v1;

    temp_v1 = arg0->unk10;
    var_a1 = 0;
    if (temp_v1 < (u32) arg0->unk8) {
        var_a1 = arg0->unk4 + temp_v1;
    }
    return var_a1;
}

s32 func_000237BC(struct Unk_func_000237BC_0 *arg0) {
    return arg0->unk8 - arg0->unk10;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000237CC);

void func_00023864(struct Unk_func_00023864_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk0 = &D_00055640;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unkC = 0;
    temp_v0 = scePaf_F13EBB78(arg1);
    arg0->unk4 = temp_v0;
    if (temp_v0 != 0) {
        arg0->unk8 = arg1;
    }
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0230EC", func_000238C4);

void func_0002398C(struct Unk_func_0002398C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = 0;
}
