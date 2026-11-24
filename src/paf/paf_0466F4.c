/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

void func_000466F4(void *arg0, s32 arg1) {
    func_00044154(arg0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg1 - __builtin_allegrex_ins(arg1 + ((u32) (arg1 >> 0x1F) >> 0x1E), 0, 0, 2));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00171564;
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

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0466F4", D_001714B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000467D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000469A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00046A58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00046D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00046FF8);

void func_000472DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001715C4;
    func_0004C5C4(arg0 + 4, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void func_00047334(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001715C4;
    func_0004C76C((s32) (arg0 + 4), arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void func_0004738C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001715C4;
    func_0004C76C((s32) (arg0 + 4), arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000473E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00047448);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000474AC);

s32 func_00047518(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CB9C((s32) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_0004756C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000476A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00047B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00047ED0);

void func_00048064(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001715A8;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000480DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048138);

s32 func_0004819C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000481F0);

void func_00048404(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0017158C;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048420);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_0004847C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000484D8);

s32 func_0004853C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000486AC);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_000488C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0466F4", func_00048EE8);

s32 func_00048F04(void) {
    return 0;
}

