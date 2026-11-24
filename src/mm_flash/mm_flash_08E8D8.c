/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0008E8D8(struct Unk_func_0008E8D8_0 *arg0) {
    s32 temp_s0;

    arg0->unk0 = &D_000C2FB0;
    func_0008E9F4();
    temp_s0 = arg0->unk10;
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_0008E92C(struct Unk_func_0008E92C_0 *arg0) {
    s32 temp_s0;

    arg0->unk0 = &D_000C2FB0;
    func_0008E9F4();
    temp_s0 = arg0->unk10;
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_0008E980(struct Unk_func_0008E980_0 *arg0) {
    s32 temp_s1;

    arg0->unk0 = &D_000C2FB0;
    func_0008E9F4();
    temp_s1 = arg0->unk10;
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
    }
    func_00090730(*func_0009F1C0(), (s32) arg0, 2);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008E9F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008EA48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008EBA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008ED10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008EE30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008EEAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08E8D8", func_0008EF08);

void func_0008EF80(void) {
    func_0000F224();
}

s32 func_0008EF9C(s32 arg0, s32 arg1) {
    if (arg0 != arg1) {
        func_0000F104();
    }
    return arg0;
}

void func_0008EFCC(s32 arg0, M2C_UNK arg1) {
    func_0008F498(arg1, arg0);
}

void func_0008EFF0(struct Unk_func_0008EFF0_0 *arg0) {
    func_0000EF5C(arg0);
    arg0->unk0 = &D_000C2F98;
    arg0->unk60 = 0;
}

void func_0008F024(struct Unk_func_0008F024_0 *arg0) {
    func_0000EF5C(arg0);
    arg0->unk0 = &D_000C2F98;
    arg0->unk60 = 0;
}

