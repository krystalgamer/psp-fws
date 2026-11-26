/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_000466F4(struct Unk_func_00044154_0 *arg0, s32 arg1) {
    func_00044154(arg0);
    arg0->unk8 = (s32) (arg1 - __builtin_allegrex_ins(arg1 + ((u32) (arg1 >> 0x1F) >> 0x1E), 0, 0, 2));
    arg0->unk0 = &D_00171564;
}

void func_00046748(M2C_UNK **arg0) {
    *arg0 = &D_00171564;
    func_0004417C((s32) arg0);
}

void func_00046770(M2C_UNK **arg0) {
    *arg0 = &D_00171564;
    func_0004417C((s32) arg0);
}

void func_00046798(M2C_UNK **arg0) {
    *arg0 = &D_00171564;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("nonmatchings/paf_0466F4", D_001714B0);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000467D0);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000469A0);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00046A58);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00046D28);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00046FF8);

void func_000472DC(struct Unk_func_000472DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_001715C4;
    func_0004C5C4((u8 *)arg0 + 4, arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

void func_00047334(struct Unk_func_00047334_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_001715C4;
    func_0004C76C((s32) ((u8 *)arg0 + 4), arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

void func_0004738C(struct Unk_func_0004738C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_001715C4;
    func_0004C76C((s32) ((u8 *)arg0 + 4), arg1);
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000473E4);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00047448);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000474AC);

s32 func_00047518(struct Unk_func_00047518_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CB9C((s32) ((u8 *)arg0 + 4), arg0->unk18, arg0->unk1C, arg1, arg2, arg3, arg4);
    arg0->unk20 = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_0004756C);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000476A4);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00047B60);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00047ED0);

void func_00048064(struct Unk_func_00048064_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_001715A8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048080);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000480DC);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048138);

s32 func_0004819C(struct Unk_func_0004819C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(arg0->unk4, arg0->unk8, arg1, arg2, arg3, arg4);
    arg0->unkC = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000481F0);

void func_00048404(struct Unk_func_00048404_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_0017158C;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048420);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_0004847C);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000484D8);

s32 func_0004853C(struct Unk_func_0004853C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(arg0->unk4, arg0->unk8, arg1, arg2, arg3, arg4);
    arg0->unkC = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048590);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000486AC);

void func_000486FC(M2C_UNK **arg0) {
    *arg0 = &D_001715E0;
    func_0004417C((s32) arg0);
}

void func_00048724(M2C_UNK **arg0) {
    *arg0 = &D_001715E0;
    func_0004417C((s32) arg0);
}

void func_0004874C(M2C_UNK **arg0) {
    *arg0 = &D_001715E0;
    func_0004417C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048784);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_000488C0);

INCLUDE_ASM("nonmatchings/paf_0466F4", func_00048EE8);

s32 func_00048F04(void) {
    return 0;
}
#endif
