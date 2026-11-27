/* lang: c++ */
#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CC30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CD88);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CE5C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001CE88);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_BF420648);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_98F4C0D3);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_EF9F89AF);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_74EED890);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_0F2CC0D2);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_810B2731);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_101B09CB);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_7F753314);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_A6867EB7);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_A4DE98D1);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_B7544E88);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_259EF6A1);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_71B7FD41);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_BE270349);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_4401EFB4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D334);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void music_common_730D5E67(struct Unk_music_common_730D5E67_0 *arg0, struct Unk_music_common_730D5E67_1 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk4;
    if ((temp_a0 == 0) || (temp_v0 = arg1->unk4, (temp_v0 == 0))) {
        func_0001D4BC(arg0->unk8, arg1->unk8);
    } else {
        sce_paf_private_strcasecmp(temp_a0, temp_v0);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void music_common_730D5E67(struct Unk_music_common_730D5E67_0 *arg0, struct Unk_music_common_730D5E67_1 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = arg0->unk4;
    if ((temp_a0 == 0) || (temp_v0 = arg1->unk4, (temp_v0 == 0))) {
        func_0001D4BC(arg0->unk8, arg1->unk8);
    } else if (sce_paf_private_strcasecmp(temp_a0, temp_v0) == 0) {
        sce_paf_private_strcmp(arg0->unk4, arg1->unk4);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D428);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D460);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D4BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D55C);
#endif

#if FW_VERSION >= 350
void func_0001D55C(void) {
    scePaf_CB4C96CE();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_0001D55C(void) {
    sce_paf_private_wcscasecmp();
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00020514);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_000217D4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_761C2F81);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_6A234776);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00021D38);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00021DDC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_7507015F);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_D38D0DDA);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_14BADF87);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_63132FD7);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00021F34);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00021F64);

void func_00021F94(s32 **arg0) {
    *arg0 = &D_00025320;
    func_0001D7A0(arg0);
}

void func_00021FBC(s32 **arg0) {
    *arg0 = &D_00025320;
    func_0001D7A0(arg0);
}
#endif

#if FW_VERSION >= 350
void func_00021FE4(s32 **arg0) {
    *arg0 = &D_00025320;
    func_0001D7A0(arg0);
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00021FE4(s32 **arg0) {
    *arg0 = &D_00025320;
    func_0001D7A0(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0002201C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_000221DC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0002222C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00022244);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_00022310);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_4DF2BEB3);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_30E5624F);
#endif

#if FW_VERSION >= 282
void func_0001D7A0(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
}
#endif

#if FW_VERSION >= 350
void music_common_44208F71(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void music_common_9677CC87(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001D7C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001D7C0(M2C_UNK **arg0) {
    *arg0 = &D_000202D8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_91CA7B35);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_234A373A);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_E3B03B3C);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_B8BDCA75);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_D656DB67);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_66AD5B33);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_E270E5CC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", music_common_AABCCAE5);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DBBC);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DBD0);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DC48);

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001DDA0);
#endif

INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001E040);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_01CC30", func_0001E098);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000201A8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_0001D500);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202B0);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202B8);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202BC);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202C0);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202C8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_00025218);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_00025320);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_00025328);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202D8);

INCLUDE_RODATA("nonmatchings/music_common_01CC30", D_000202E0);
#endif
