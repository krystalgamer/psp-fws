/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_00060460(s32 arg0) {
    if (arg0 != 0) {
        func_00061A64(arg0);
        func_00090730(*func_0009F1C0(), arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_000604A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_000607A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_000608F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00060A28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00060CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00060ED4);

s32 func_00060F3C(struct Unk_func_00060F3C_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00060F84(arg0, (s32) &D_000BE244, arg1, 0, (arg2 & 0xFF) | 3);
    arg0->unk88 = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00060F84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_0006148C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061540);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_000615B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061790);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061870);

void func_000618DC(struct Unk_func_000618DC_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    struct Unk_func_000618DC_temp_s1 *temp_s1;
    struct Unk_func_000618DC_temp_s2 *temp_s2;

    temp_s2 = &arg0->unk18;
    temp_s1 = &arg0->unk8;
    arg0->unk18 = 6;
    temp_s1->unk8 = 0;
    temp_s1->unk4 = 0;
    arg0->unk8 = 6;
    temp_s2->unk8 = 0;
    temp_s2->unk4 = 0;
    arg0->unk0 = func_0001E044(arg1);
    func_000628A8(temp_s1, arg2, 1);
    func_000628A8(temp_s2, arg3, 1);
}

void func_00061974(struct Unk_func_00061974_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_func_00061974_temp_s1 *temp_s1;
    struct Unk_func_00061974_temp_s2 *temp_s2;

    temp_s2 = &arg0->unk18;
    temp_s1 = &arg0->unk8;
    arg0->unk18 = 6;
    temp_s1->unk8 = 0;
    temp_s1->unk4 = 0;
    arg0->unk8 = 6;
    temp_s2->unk8 = 0;
    temp_s2->unk4 = 0;
    arg0->unk0 = func_0001E044(arg1);
    func_000628A8(temp_s1, arg2, 1);
    func_000628A8(temp_s2, arg3, 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061A64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061ABC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061B38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061C00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061D14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00061F5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_000620EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_0006219C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00062294);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_00062314);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_060460", func_0006235C);

