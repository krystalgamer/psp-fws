/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

void func_0000CC38(struct Unk_func_0000CC38_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg0->unk1C == 0) {
        temp_v1 = arg0->unk14;
        arg0->unk1C = 1U;
        arg0->unk18 = temp_v1;
        if (temp_v1 > 0) {
            do {
                scePaf_66907719();
                temp_v0 = arg0->unk14 - 1;
                arg0->unk14 = temp_v0;
            } while (temp_v0 > 0);
        }
    }
}

void func_0000CC8C(struct Unk_func_0000CC8C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0->unk1C != 0) {
        temp_v0 = arg0->unk18;
        arg0->unk1C = 0U;
        arg0->unk14 = temp_v0;
        if (temp_v0 > 0) {
            do {
                scePaf_6B1E90C7();
                temp_v0_2 = arg0->unk18 - 1;
                arg0->unk18 = temp_v0_2;
            } while (temp_v0_2 > 0);
        }
    }
}

INCLUDE_RODATA("nonmatchings/pafmini_00CC38", D_000D1930);

INCLUDE_RODATA("nonmatchings/pafmini_00CC38", D_000D1940);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000CCDC);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000CD50);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000CDBC);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000D2D0);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000D2EC);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000D438);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000D644);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000D704);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", scePaf_72A0044D);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", scePaf_4612DB4B);

s32 scePaf_78219D10(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E0678;
    D_000E0678 = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_00CC38", scePaf_97FDA760);

INCLUDE_RODATA("nonmatchings/pafmini_00CC38", D_000D19F4);

INCLUDE_RODATA("nonmatchings/pafmini_00CC38", D_000D1A0C);

INCLUDE_RODATA("nonmatchings/pafmini_00CC38", D_000D1A24);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", scePaf_298246CD);

INCLUDE_ASM("nonmatchings/pafmini_00CC38", func_0000DC68);

void func_0000DD14(void) {
    func_0000DC68(1, 0xFFFF);
}

void func_0000DD34(void) {
    func_0000DC68(0, 0xFFFF);
}

