/* compiler[303,340]: 1.9.2 */
/* cflags[303,340]: -O2 -mext */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_0004146C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041540);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041580);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000415F8);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041664);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000416E4);

void func_0004181C(struct Unk_func_0004181C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, struct Unk_func_0004181C_4 *arg4) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
    arg0->unkC = arg4;
    if (arg4 != NULL) {
        func_000425E8(arg4);
    }
    arg0->unk10 = 0;
}

void func_00041860(void) {
    func_000418B0();
}

void func_0004187C(void) {
    func_000418B0();
}

void func_00041898(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        *arg0 = temp_v0 + arg1;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000418B0);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000418FC);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_0004195C);

void func_00041C8C(s32 arg0, M2C_UNK arg1) {
    func_0003C810(arg0 + 0x188, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041CB4);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041D08);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041D5C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041DBC);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00041DE0);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_0004200C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000421D8);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000421F4);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042250);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042310);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000423D0);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_0004249C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042568);

void func_000425E8(struct Unk_func_0004181C_4 *arg0) {
    arg0->unk38 = (s32) (arg0->unk38 + 1);
}

void func_000425F8(struct Unk_func_000425F8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk38 - 1;
    arg0->unk38 = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_0004249C();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

void func_00042650(struct Unk_func_00042650_0 *arg0) {
    func_00042AF4(arg0->unk44);
}

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_0004266C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042730);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_000427F4);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042974);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042AF4);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042B8C);

void func_00042BD0(struct Unk_func_00042BD0_0 *arg0) {
    arg0->unk3C = (s32) (arg0->unk3C + 1);
}

void func_00042BE0(struct Unk_func_00042BE0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C - 1;
    arg0->unk3C = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00042974();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042C38);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042D9C);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042DFC);

void func_00042E88(struct Unk_func_00042E88_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    struct Unk_func_00042E88_temp_v0_2 *temp_v0_2;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x3C, 0);
    func_00042F7C(temp_v0, arg1);
    temp_v0_2 = arg0->unk54;
    if (temp_v0_2 == NULL) {
        arg0->unk50 = temp_v0;
    } else {
        temp_v0_2->unk38 = temp_v0;
    }
    arg0->unk54 = (void *) temp_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042EF4);

INCLUDE_ASM("nonmatchings/mm_flash_04146C", func_00042F7C);
