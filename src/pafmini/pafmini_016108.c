/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
void func_00016108(struct Unk_func_00013B68_0 *arg0, s32 arg1) {
    func_00013B68(arg0);
    arg0->unk8 = (s32) (arg1 - __builtin_allegrex_ins(arg1 + ((u32) (arg1 >> 0x1F) >> 0x1E), 0, 0, 2));
    arg0->unk0 = &D_000D1D54;
}

void func_0001615C(M2C_UNK **arg0) {
    *arg0 = &D_000D1D54;
    func_00013B90((s32) arg0);
}

void func_00016184(M2C_UNK **arg0) {
    *arg0 = &D_000D1D54;
    func_00013B90((s32) arg0);
}

void func_000161AC(M2C_UNK **arg0) {
    *arg0 = &D_000D1D54;
    func_00013B90((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/pafmini_016108", D_000D1CA0);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_000161E4);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_000163B4);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_0001646C);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_0001673C);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00016A0C);

void func_00016CF0(struct Unk_func_00016CF0_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000D1DB4;
    func_0001BA3C((u8 *)arg0 + 4, arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

void func_00016D48(struct Unk_func_00016D48_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000D1DB4;
    func_0001BBE4((s32) ((u8 *)arg0 + 4), arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

void func_00016DA0(struct Unk_func_00016DA0_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_000D1DB4;
    func_0001BBE4((s32) ((u8 *)arg0 + 4), arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00016DF8);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00016E5C);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00016EC0);

s32 func_00016F2C(struct Unk_func_00016F2C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0001C014((s32) ((u8 *)arg0 + 4), arg0->unk18, arg0->unk1C, arg1, arg2, arg3, arg4);
    arg0->unk20 = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00016F80);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_000170B8);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017574);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_000178E4);

void func_00017A78(struct Unk_func_00017A78_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000D1D98;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017A94);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017AF0);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017B4C);

s32 func_00017BB0(struct Unk_func_00017BB0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0001C128(arg0->unk4, arg0->unk8, arg1, arg2, arg3, arg4);
    arg0->unkC = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017C04);

void func_00017E18(struct Unk_func_00017E18_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000D1D7C;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017E34);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017E90);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017EEC);

s32 func_00017F50(struct Unk_func_00017F50_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0001C128(arg0->unk4, arg0->unk8, arg1, arg2, arg3, arg4);
    arg0->unkC = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/pafmini_016108", func_00017FA4);

INCLUDE_ASM("nonmatchings/pafmini_016108", func_000180C0);

void func_00018110(M2C_UNK **arg0) {
    *arg0 = &D_000D1DD0;
    func_00013B90((s32) arg0);
}

void func_00018138(M2C_UNK **arg0) {
    *arg0 = &D_000D1DD0;
    func_00013B90((s32) arg0);
}

void func_00018160(M2C_UNK **arg0) {
    *arg0 = &D_000D1DD0;
    func_00013B90((s32) arg0);
    _ZdlPv(arg0);
}
#endif
