#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CC30);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CD88);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CE5C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CE88);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_A6867EB7);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_A4DE98D1);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_B7544E88);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_259EF6A1);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_71B7FD41);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_BE270349);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D334);

void music_common_730D5E67(struct Unk_music_common_730D5E67_0 *arg0, struct Unk_music_common_730D5E67_1 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk4;
    if ((temp_a0 == 0) || (temp_v0 = arg1->unk4, (temp_v0 == 0))) {
        func_0001D4BC(arg0->unk8, arg1->unk8);
    } else if (scePaf_ED2B47FA(temp_a0, temp_v0) == 0) {
        scePaf_66FE90D7(arg0->unk4, arg1->unk4);
    }
}

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D428);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D460);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D4BC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D55C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_30E5624F);

void func_0001D7A0(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
}

void music_common_9677CC87(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
}

void func_0001D7C0(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_D656DB67);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_66AD5B33);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_E270E5CC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_AABCCAE5);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DBBC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DBD0);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DC48);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DDA0);
#endif

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001E040);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000201A8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_0001D500);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202B0);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202B8);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202BC);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202C0);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202C8);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202D8);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202E0);
#endif
