#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC228);
#endif

#if FW_VERSION < 152
void func_000AC228(s32 arg0) {
    func_000AC178(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC244);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00090810);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC274);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccStrlenUTF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccStrlenSJIS);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC4CC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccDecodeSJIS);
#else
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC5B0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092B34);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092C04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092C4C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AC988);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ACA9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccJIStoUCS);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ACB44);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccUTF8toUTF16);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00091224);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000912FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccUTF16toSJIS);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", sceCccUTF16toUTF8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_B9383A25);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_F93D4E1F);

s32 func_000930BC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000930C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000930F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009312C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093164);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009319C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000931D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093280);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000932B4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000932E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009331C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1B30);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093350);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093388);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000933BC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000933F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093424);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093458);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093488);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000934BC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000934F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093524);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093554);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093584);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000935B4);

#if FW_VERSION == 100
s32 func_000935E4(struct Unk_func_000935E4_0 *arg0) {
    func_00095DE8(M2C_FIELD(arg0, s32 *, 0x78));
    return 0;
}
#else
s32 func_000935E4(struct Unk_func_000935E4_0 *arg0) {
    func_00095DE8(arg0->unk7C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093604);

s32 func_0009362C(void) {
    return 1;
}

s32 func_00093634(void) {
    return 0;
}

#if FW_VERSION == 100
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x78);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD84)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0) {
    struct Unk_func_0009363C_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD88(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093668);

#if FW_VERSION == 100
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x78);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0) {
    struct Unk_func_0009369C_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD90(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x78);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD98)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0) {
    struct Unk_func_000936C8_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD98(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_60CBB63F);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_D6CDB3BB);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093810);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000939B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093A74);

s32 func_00093AD4(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00093AE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009246C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_54AB18DD);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092680);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009269C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000926B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000926D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000926F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009270C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092728);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009273C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092748);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092754);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092768);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000927D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092810);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092858);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000928BC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000928FC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092928);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092A00);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092ACC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092BA4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092C7C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092CA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092CC4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092CD8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092D04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092D30);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092D5C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092D88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092DB0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092DD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092DF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092E0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092E38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092E64);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092E90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092EBC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092EE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092F08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00092FBC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000930A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093154);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093240);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000932F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093348);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093B04);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB154);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB168);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB170);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", scePaf_54AB18DD);

void func_00093DD4(void) {
    sceCccSetTable();
}

void func_00093DF0(void) {
    sceCccSetCTable();
}

void func_00093E0C(s32 arg0) {
    func_00091D08(arg0);
}

void func_00093E28(s32 arg0) {
    func_00092328(arg0 & 0xFFFF);
}

void func_00093E44(s32 arg0) {
    func_00093F58(arg0 & 0xFFFF);
}

void func_00093E60(s32 arg0) {
    func_00094E64(arg0 & 0xFFFF);
}

void func_00093E7C(s32 arg0) {
    func_000946B8(arg0 & 0xFFFF);
}

void func_00093E98(s32 arg0) {
    func_0009282C(arg0 & 0xFFFF);
}

void func_00093EB4(s32 arg0) {
    func_000943A8(arg0 & 0xFFFF);
}

void func_00093ED0(s32 arg0) {
    func_00095308(arg0 & 0xFFFF);
}

void func_00093EEC(s32 arg0) {
    func_00094B44(arg0 & 0xFFFF);
}

void func_00093F08(s32 arg0, s32 arg1) {
    D_000E214C = arg0;
    D_000E2148 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093F1C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093F58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00093FC4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094040);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000940B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094174);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009424C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000942EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000943A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000943B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094434);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000944AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009455C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094594);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094640);

void func_00094668(s32 arg0, s32 arg1) {
    D_000E2158 = arg0;
    D_000E2154 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009467C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000946B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094720);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000947C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094854);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094910);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000949E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094A88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094B44);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094B54);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094BD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094C44);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094CF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094D2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094DDC);

void func_00094E14(s32 arg0, s32 arg1) {
    D_000E2164 = arg0;
    D_000E2160 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094E28);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094E64);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094EE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00094F88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095018);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000950D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000951AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009524C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095308);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095318);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095394);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095418);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000954C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095500);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000955B0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000955E8);

void func_0009560C(s32 arg0, M2C_UNK arg1) {
    func_000955E8(0xD, arg0, arg1);
}

s32 func_00095630(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E216C.unk9C;
    D_000E216C.unk9C = arg0;
    return temp_v0;
}

void func_00095644(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000957DC(0xD, arg0, arg1, arg2);
}

void func_00095670(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095890(0xD, arg0, arg1, arg2);
}

void func_0009569C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095974(0xD, arg0, arg1, arg2);
}

void func_000956C8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095A28(0xD, arg0, arg1, arg2);
}

void func_000956F4(s32 arg0, s32 arg1) {
    func_000955E8(0xE, arg0, arg1);
}

s32 func_00095718(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E216C.unkA8;
    D_000E216C.unkA8 = arg0;
    return temp_v0;
}

void func_0009572C(s32 arg0, s32 arg1, s32 arg2) {
    func_000957DC(0xE, arg0, arg1, arg2);
}

void func_00095758(s32 arg0, s32 arg1, s32 arg2) {
    func_00095890(0xE, arg0, arg1, arg2);
}

void func_00095784(s32 arg0, s32 arg1, s32 arg2) {
    func_00095974(0xE, arg0, arg1, arg2);
}

void func_000957B0(s32 arg0, s32 arg1, s32 arg2) {
    func_00095A28(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000957DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095890);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095974);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095A28);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095B14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095BCC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095C1C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095C50);

s32 func_00095D98(struct Unk_func_00095D98_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 == 0) {

    } else {
        func_00095F78(temp_v0);
    }
    arg0->unk8(0, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095DE8);

s32 func_00095E08(void **arg0) {
    struct Unk_func_00095E08_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    temp_a0->unkF8(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095E30);

s32 func_00095E5C(void) {
    return 0;
}

s32 func_00095E64(void) {
    return 0;
}

#if FW_VERSION == 100
s32 func_000AE01C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095E6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095F78);

s32 func_00095FC4(void) {
    return 0;
}

s32 func_00095FCC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00095FD4);

s32 func_00096160(s32 arg0) {
    func_000961AC(arg0 + 0x100);
    return 0;
}

s32 func_00096180(void) {
    return 0;
}

s32 func_00096188(struct Unk_func_00096188_0 *arg0) {
    arg0->unk60C = 0x80;
    arg0->unk604 = 0;
    arg0->unk600 = 0;
    arg0->unk608 = 0;
    return 0;
}

s32 func_000961A4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000961AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009621C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2920);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2AA4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2B88);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_000B2B88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_000B3804(arg0, arg1, arg2, arg3);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xD0)(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    D_000E2220 = (((s32) D_000E2220 ^ arg0) == 0) ? NULL : D_000E2220;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000AE410(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x608);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009628C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096410);

s32 func_000964F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_0009716C(arg0, arg1, arg2, arg3);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xD0)(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    D_000E2220 = (((s32) D_000E2220 ^ arg0) == 0) ? NULL : D_000E2220;
    return 0;
}
#endif

s32 func_00096554(void) {
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000B2BF4(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xDBC);
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_000972A8((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_000972A8((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_000B2CB8(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AE420);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AE58C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AE670);
#endif

#if FW_VERSION == 282
s32 func_0009655C(struct Unk_func_0009655C_0 *arg0) {
    void *temp_s0;

    temp_s0 = arg0->unkDBC;
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_000972A8((s32) temp_s0, 0x108, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    func_000972A8((s32) temp_s0, 0x1A, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    return 0;
}

s32 func_00096620(struct Unk_func_00096620_0 *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}
#endif

s32 func_00096654(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AE6DC);

s32 func_000AE7C0(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}

s32 func_000AE7F4(void) {
    return 0;
}

s32 func_0009665C(struct Unk_func_0009665C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDB4), s16 *, 0x3A) != 7;
}
#else
s32 func_0009665C(struct Unk_func_0009665C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 7;
}
#endif

#if FW_VERSION == 100
s32 func_000966A4(struct Unk_func_000966A4_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDB4), s16 *, 0x3A) != 1;
}
#else
s32 func_000966A4(struct Unk_func_000966A4_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 1;
}
#endif

#if FW_VERSION == 100
s32 func_000966EC(struct Unk_func_000966EC_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_000966EC(struct Unk_func_000966EC_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0009671C(struct Unk_func_0009671C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_0009671C(struct Unk_func_0009671C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009674C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096834);

s32 func_00096888(void) {
    return 0;
}

s32 func_00096890(void) {
    return 0;
}

s32 func_00096898(void) {
    return 0;
}

s32 func_000968A0(void) {
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2F40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000B2F40(s32 arg0, s16 arg1, s32 arg2) {
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_000968A8(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000968B0(struct Unk_func_000968B0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_000968B0(struct Unk_func_000968B0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000968E0(struct Unk_func_000968E0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_000968E0(struct Unk_func_000968E0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00096910(struct Unk_func_00096910_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_00096910(struct Unk_func_00096910_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00096940(struct Unk_func_00096940_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_00096940(struct Unk_func_00096940_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00096970(struct Unk_func_00096970_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_00096970(struct Unk_func_00096970_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000969A0(struct Unk_func_000969A0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDB4);
    func_000972A8(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
s32 func_000969A0(struct Unk_func_000969A0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3068);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B310C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B329C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AEB68);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AEBE0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000969D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096A74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096C04);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096C4C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096E18);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB1EC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3540);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000D9614);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000D79EC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F5B6C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F3DAC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F5B2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AEFEC);

s32 func_000AF230(void) {
    func_00098334();
    func_000AF50C(&D_000DB1EC, &D_0010FCFC, 0x3C00U);
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00096EA8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009716C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000972A8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB234);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000972F8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F5B64);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_001083A4);
#endif

#if FW_VERSION < 151 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097348);
#else
s32 func_00097348(s32 arg0) {
    return (D_000E2220->unkE0(D_000E2220, arg0) == 0) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097380);

s32 func_00097418(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = D_000E2220->unkEC(D_000E2220, arg0);
    D_000E2220->unkE4(D_000E2220, arg0, arg1, arg2, 1);
    return D_000E2220->unkEC(D_000E2220, arg0) - temp_s4;
}

s32 func_000974AC(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < (s32) arg2) {
        sce_paf_private_memset(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

#if FW_VERSION < 151 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF50C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_000AF50C(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= (s32) arg2) ? 0 : -1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s16 func_000B3C58(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_000B3C80(s32 arg0, s32 arg1) {
    func_000B3C9C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3C9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3CD8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3D20);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3D68);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3D88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3E04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3E28);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3EF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B3FD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4038);

void func_000B4274(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_000B4038(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B42AC);

void func_000B43FC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_000B42AC((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4424);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4494);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B44EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4540);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B46E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4758);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4788);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4954);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF598);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF5F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF630);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF6B4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF748);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF7DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF820);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF91C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AF958);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AFA1C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AFADC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AFB98);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AFC80);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AFD50);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0140);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B019C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0380);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B03DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B04A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0530);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B05F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B08F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0994);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0A08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0CC4);
#endif

#if FW_VERSION == 282
s32 func_0009754C(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= (s32) arg2) ? 0 : -1;
}

s16 func_000975C4(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_000975EC(s32 arg0, s32 arg1) {
    func_00097608(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097608);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097644);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009768C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000976D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000976F4);

void func_00097770(s32 arg0, M2C_UNK arg1) {
    func_000976F4(4, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097794);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009785C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097940);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000979A4);

void func_00097BE0(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_000979A4(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097C18);

void func_00097D68(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_00097C18((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097D90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097E00);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097E58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00097EAC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098054);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000980C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000980F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000982C0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098308);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098334);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00098334(void) {
    func_000B5228();
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B49E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4ADC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4B14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4C2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4C6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4CB4);

void func_000B51D8(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B51E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5228);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B52AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5440);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B54A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5530);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5578);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B55E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5890);

s32 func_000B58E0(s32 arg0, s32 arg1, s32 arg2) {
    return ~func_000B5890(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5900);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5A08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5B0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5B2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B66C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6840);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B68EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6A3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6B30);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6BE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6CEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6D5C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6DE8);
#endif

#if FW_VERSION == 282
s32 func_00098334(void) {
    func_00098B94();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0DB8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0F74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B0FC4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B119C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1200);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B12C0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1B88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1BA4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098354);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098448);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098480);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098598);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000985D8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098620);

void func_00098B44(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098B4C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098B94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1CEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B1F74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2028);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B210C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B21AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2240);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B231C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B26B4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2758);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B279C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B29C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2BEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B2C58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4294);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4448);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B45A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B478C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B48C0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4988);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4B14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4BB8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4C7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098C18);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098DAC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098E0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098E9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098EE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00098F54);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000991FC);

s32 func_0009924C(void) {
    return ~func_000991FC();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009926C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00099374);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00099478);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_00099498);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A034);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A1AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A258);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A3A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A49C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A550);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A658);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A6C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A754);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB26C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB27C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F5B94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_001083D4);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_001084D0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB29C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3A4);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3A8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F5CA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3B0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3B8);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3C4);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB3C8);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB408);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6F7C);

void func_000B7368(void) {
    M2C_VFIELD(&D_00122258, s8, 0x41C2) = 0;
    M2C_VFIELD(&D_00122258, s16, 0xDE) = 0;
    M2C_VFIELD(&D_00122258, s16, 0xDC) = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7380);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7424);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B747C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B74D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B760C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000B760C(void) {
    func_000B763C();
    M2C_VFIELD(&D_00122258, s8, 0x15F3) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x4138) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x417C) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000B763C(void) {
    M2C_VFIELD(&D_00122258, s8, 0x4110) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410F) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410E) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410D) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410C) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x4111) = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7660);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7724);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B77A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B781C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B78AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B79C0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7A34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7A70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7B4C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7E08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7ED8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7F6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7FA4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8384);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B840C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8484);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B84E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B85F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8720);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8780);

void func_000B8808(void) {
    M2C_VFIELD(&D_00122258, s16, 0xD8) = -1;
    M2C_VFIELD(&D_00122258, s16, 0x100) = -1;
    M2C_VFIELD(&D_00122258, s16, 0xE2) = -1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8824);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8A14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8B24);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8B80);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8BDC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8C78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8CD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8D30);

s32 func_000B8D8C(void) {
    s32 temp_v0;

    temp_v0 = func_000B5578((s32) &D_00122258, (s32) &D_0012A264, M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_00122258, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8DF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8E3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8FD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B925C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B92C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B94C0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B950C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B95CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9628);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9694);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B974C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B98FC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9BC0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9C70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9D18);

s32 func_000B9D88(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_000B9C70() != -1) {
        var_s0 = 0;
        func_000B950C(0, (s32) &D_001263D6);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9DCC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9E80);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9FB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA130);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA188);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA1DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA290);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA300);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA46C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA690);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA7B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA88C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BAC94);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BAE30);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BAF84);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB004);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB0EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB19C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB26C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB308);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB3D4);

void func_000BB434(s32 arg0) {
    func_000B3D68(arg0, 0x24);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB450);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB53C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB5EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB668);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB6D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB734);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB94C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBB14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBB74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBC44);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBD90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBE9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBFD8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC17C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC37C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC3D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC85C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BCFA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BD238);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BD3A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BDC74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BDCBC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BDE3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BDFB8);

void func_000BE00C(s16 arg0, s16 arg1, s16 arg2) {
    D_00126352 = 3;
    func_000BE0C8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000BE048(s16 arg0, s16 arg1, s16 arg2) {
    D_00126352 = 7;
    func_000BE0C8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000BE084(s16 arg0, s16 arg1, s16 arg2) {
    M2C_VFIELD(&D_00122258, s16, 0x40FA) = 5;
    M2C_VFIELD(&D_00122258, s16, 0x42BE) = 0;
    func_000BE0C8(2, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE0C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE2F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE48C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE590);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE910);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BECB8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF018);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF0CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF444);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF678);

void func_000BF800(s32 arg0) {
    func_000BF81C(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF81C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF8B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFFD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0174);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0248);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C033C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0500);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0800);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C089C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0964);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0A84);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0B78);

s32 func_000C0C84(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_000C0CCC(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0CF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0E04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1098);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C11AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1268);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1380);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C13E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1674);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C18B0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1934);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1D08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1DC4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C034C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C204C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2190);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2310);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2380);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C24EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C251C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C260C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C264C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B4EAC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5444);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5478);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B555C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B55D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5670);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5828);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B586C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B58B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B59A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5A80);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5B50);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5C50);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5E20);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5EA8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B5F2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6104);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B6580);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B66EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B67F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B688C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B701C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B70DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B718C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7250);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7434);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B758C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7608);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7700);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7740);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7A00);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7BA4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7C38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7CDC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7DD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7E6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7F04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B7FA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8040);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B80B4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8330);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8704);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8798);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8A98);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8B14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8C40);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8CE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8D78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B8EB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9130);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9564);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9670);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9728);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B97E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9840);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9934);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9AD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9D00);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9DB0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9E24);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9F3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000B9FFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA1A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA504);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA6DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BA810);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BAF0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB1A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB3D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB470);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB5D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB6C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB814);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BB92C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBA24);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBAF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBB28);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBCE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBDBC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBEB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BBFB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC0C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC398);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC610);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC69C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC7C0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BC9B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BCB20);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BCCE0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BCF0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BD224);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BD2E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BD980);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE48C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BE7C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BEA34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF6A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF74C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BF99C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFBFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFC6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFCD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFD34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000BFDA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C00DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C02C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C04E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C09E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C0EF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1434);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1548);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1A88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C1DE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C20A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C20D8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C21BC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2C1C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2EC0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3014);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3194);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3440);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C382C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3904);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C39D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3B88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3CB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3E1C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3E9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3F0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4080);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4494);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4668);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4780);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C49D8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4A78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4E34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C51F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C52E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5914);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C59D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5DB0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5FD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C61C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6260);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6530);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C65BC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C672C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C67B8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009A8E8);

void func_0009ACD4(void) {
    D_00106F70.unk41C2 = 0;
    D_00106F70.unkDE = 0;
    D_00106F70.unkDC = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009ACEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009AD90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009ADE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009AE3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009AF78);

void func_0009AFA8(void) {
    D_00106F70.unk4110 = 0;
    D_00106F70.unk410F = 0;
    D_00106F70.unk410E = 0;
    D_00106F70.unk410D = 0;
    D_00106F70.unk410C = 0;
    D_00106F70.unk4111 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009AFCC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B090);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B110);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B188);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B218);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B32C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B3A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B3DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B4B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B774);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B844);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B8D8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009B910);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009BCF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009BD78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009BDF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009BE54);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009BF64);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C08C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C0EC);

void func_0009C174(void) {
    D_00106F70.unkD8 = -1;
    D_00106F70.unk100 = -1;
    D_00106F70.unkE2 = -1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C190);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C380);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C490);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C4EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C548);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C5E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C640);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C69C);

s32 func_0009C6F8(void) {
    s32 temp_v0;

    temp_v0 = func_00098EE4((s32) &D_00106F70, (s32) &D_0010EF7C, D_00106F70.unk14->unk14, (s32) (s16) (D_00106F70.unk14->unk26 * (D_00106F70.unk14->unk2C + 1)));
    D_00106F70.unkCC = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C75C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C7A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009C93C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CBC8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CC34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CE2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CE78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CF38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009CF94);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D000);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D0B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D268);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D52C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D5DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D684);

s32 func_0009D6F4(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0009D5DC() != -1) {
        var_s0 = 0;
        func_0009CE78(0, (s32) &D_0010B0EE);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D738);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D7EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009D920);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DA9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DAF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DB48);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DBFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DC6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DDD8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009DFFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E124);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E1F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E600);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E79C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E8F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009E970);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EA58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EB08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EBD8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EC74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009ED40);

void func_0009EDA0(s32 arg0) {
    func_000976D4(arg0, 0x24);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EDBC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EEA8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EF58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009EFD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F040);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F0A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F2B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F480);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F4E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F5B0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F6FC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F808);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009F944);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009FAE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009FCE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_0009FD40);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A01C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A090C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A0BA4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A0D14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A15E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1628);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A17A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1924);

void func_000A1978(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 3;
    func_000A1A34(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000A19B4(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 7;
    func_000A1A34(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000A19F0(s16 arg0, s16 arg1, s16 arg2) {
    D_00106F70.unk40FA = 5;
    D_00106F70.unk42BE = 0;
    func_000A1A34(2, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1A34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1C60);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1DF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A1EFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A227C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A2624);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A2984);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A2A38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A2DB0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A2FE4);

void func_000A316C(s32 arg0) {
    func_000A3188(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3188);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3224);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A393C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3AE0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3BB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3CA8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A3E6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A416C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4208);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A42D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A43F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A44E4);

s32 func_000A45F0(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_000A4638(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4660);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4770);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4A04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4B18);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4BD4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4CEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4D50);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A4FE0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A521C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A52A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5674);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5730);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A59B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5AFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5C7C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5CEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5E58);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5E88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5F78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A5FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A60AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000A60AC(void) {
    func_000B3D68((s32) &D_00123418, 0x14);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2764);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C27A4);

s32 func_000C27F0(void) {
    s32 temp_v0;

    func_000C2A24();
    temp_v0 = func_000C2828();
    func_000C2B14(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2828);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2A24);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2B14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2B74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2C38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2D50);

void func_000C2EA4(s16 arg0) {
    func_000C2764();
    if (arg0 == 0) {
        func_000C2EE8();
    } else {
        func_000C300C();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C2EE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C300C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C311C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C318C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3204);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3340);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C3BEC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4494);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4574);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C497C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4CF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C4D78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C512C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5164);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C51A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C52DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C540C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5588);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C55C0);
#endif

#if FW_VERSION == 282
void func_000A60AC(void) {
    func_000976D4((s32) &D_00108130, 0x14);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C693C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6988);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C69E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6A2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6D48);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6EA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6F4C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C70AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7248);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7408);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C745C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C75EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C77A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C78A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7924);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7B34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8904);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C9650);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C9788);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C9DC8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CA328);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CA3E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CA94C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CA9C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CAA64);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CAC78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CAE5C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB0A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB114);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A60D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6110);

s32 func_000A615C(void) {
    s32 temp_v0;

    func_000A6390();
    temp_v0 = func_000A6194();
    func_000A6480(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6194);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6390);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6480);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A64E0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A65A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A66BC);

void func_000A6810(s16 arg0) {
    func_000A60D0();
    if (arg0 == 0) {
        func_000A6854();
    } else {
        func_000A6978();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6854);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6978);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6A88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6AF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6B70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A6CAC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A7558);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A7E00);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A7EE0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A82E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A865C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A86E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8A98);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8AD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8B0C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8C48);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8D78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8EF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8F2C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB8A0);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB8A8);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB8DC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F620C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB914);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB920);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F6250);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB958);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB964);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB988);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB994);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB99C);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB9B0);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB9C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F62C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_00108B04);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB9CC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB9D4);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DB9F4);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DBBE8);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DBDDC);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DC1C4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F7A58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_0010A298);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DD160);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE3C4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_0010B9A8);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8B8);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F91C0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8C8);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8D0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000F91DC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8E4);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE8EC);

INCLUDE_RODATA("nonmatchings/pafmini_000AC228", D_000DE928);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C560C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C56F0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5734);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C57A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5810);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5880);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C592C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5A70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5B38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5B90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5D2C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5D98);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C5FAC);

void func_000C60B8(void) {
    M2C_FIELD(D_00123D14, u16 *, 8) = (u16) M2C_FIELD(D_00123D14, u16 *, 4);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C60CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6124);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C61B4);

void func_000C622C(void) {
    M2C_VFIELD(&D_00122258, s8, 0x417E) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3E88) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3E86) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3F76) = 0;
    func_000C62A8();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6260);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C62A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB180);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB2A8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB320);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB3C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB474);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB520);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB658);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB7E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB8C4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CB934);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CBB7C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CBC14);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CBF78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC178);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC1AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC220);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC2D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC364);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC3AC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC3F4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC418);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC444);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC4B4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC5CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC744);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC7C8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC83C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC894);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC8EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CC990);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCAB8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCB60);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCBF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCC9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCCF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A8F78);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A905C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A90A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A910C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A917C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A91EC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9298);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A93DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A94A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A94FC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9698);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9704);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9918);

void func_000A9A24(void) {
    D_00108A2C->unk8 = (u16) D_00108A2C->unk4;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9A38);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9A90);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9B20);

void func_000A9B98(void) {
    D_00106F70.unk417E = 0;
    D_00106F70.unk3E88 = 0;
    D_00106F70.unk3E86 = 0;
    D_00106F70.unk3F76 = 0;
    func_000A9C14();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9BCC);

void func_000A9C14(void) {
    D_0010DD08 = 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9C20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000A9C20(void) {
    func_000CB60C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C62D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6308);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6388);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C647C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C64D0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6538);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6578);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C65B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6620);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C66B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6728);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6798);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C67FC);

s32 func_000C683C(void) {
    return ((D_0012643C ^ 2) == 0) ? 0 : -1;
}

void func_000C6854(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C685C);
#endif

#if FW_VERSION == 282
void func_000A9C20(void) {
    func_000AEF78();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCD54);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9C3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9C74);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9CF4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9DE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9E3C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9EA4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9EE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9F24);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000A9F8C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA024);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA094);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA104);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA168);

s32 func_000AA1A8(void) {
    return ((D_0010B154 ^ 2) == 0) ? 0 : -1;
}

void func_000AA1C0(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA1C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA284);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AA284(void) {
    M2C_VFIELD(&D_00122258, u16, 0x18D0) = (u16) M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x1ABC), u16 *, 2);
    func_000C6D70();
    func_000C69CC();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C694C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C69CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6A9C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6AF0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6B30);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6BE8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6C94);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6D34);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6D70);
#endif

#if FW_VERSION == 282
void func_000AA284(void) {
    D_00106F70.unk18D0 = (u16) D_00106F70.unk1ABC->unk2;
    func_000AA6DC();
    func_000AA338();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCED4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CCFA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD0A4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD124);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD198);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD2D8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD3F8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD4B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD51C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA2B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA338);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA408);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA45C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA49C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA554);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA600);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA6A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA6DC);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA78C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000AA78C(void) {
    func_000C6F64();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000C6E3C(void) {
    switch (D_00123B26) {                           /* irregular */
    default:
        func_000C6FDC();
        break;
    case -1:
        func_000AACA4();
        func_000AAB08();
        break;
    case -2:
        func_000C6F64();
        break;
    case 273:
    case 278:
    case 280:
        func_000AACA4();
        func_000AAB34();
        break;
    }
}

void func_000C6ED8(void) {
    if (D_00123B26 != -1) {
        if (D_00123B26 != -2) {
            func_000AAB34();
        } else {
            func_000AA924();
        }
    } else {
        func_000AAB08();
    }
}

void func_000C6F30(void) {
    if (func_000AAAEC() != 0) {

    } else {
        func_000C6F64();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6F64);
#endif

#if FW_VERSION == 282
void func_000AA78C(void) {
    func_000AA8D0();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD644);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD72C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD7A0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD7E4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA7A8);

void func_000AA844(void) {
    if (D_0010883E != -1) {
        if (D_0010883E != -2) {
            func_000AAB34();
        } else {
            func_000AA924();
        }
    } else {
        func_000AAB08();
    }
}

void func_000AA89C(void) {
    if (func_000AAAEC() != 0) {

    } else {
        func_000AA8D0();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA8D0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA924);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C6FDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CD88C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AA948);
#endif

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAAEC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAB08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AAB08(void) {
    func_000C735C();
    func_000C7448();
    func_000C7404();
}
#endif

#if FW_VERSION == 282
void func_000AAB08(void) {
    func_000AACC8();
    func_000AADB4();
    func_000AAD70();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAB34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AAB34(void) {
    func_000C735C();
    func_000C6FDC();
    func_000C7404();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C71F4);

void func_000C7290(s16 arg0) {
    D_0012644C = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C729C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C72E0);
#endif

#if FW_VERSION == 282
void func_000AAB34(void) {
    func_000AACC8();
    func_000AA948();
    func_000AAD70();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDB6C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDCA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDCD0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDD4C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAB60);

void func_000AABFC(s16 arg0) {
    D_0010B164 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAC08);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAC4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AACA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AACA4(void) {
    func_000C7A70();
    func_000C7B20();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C735C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7404);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7448);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C749C);
#endif

#if FW_VERSION == 282
void func_000AACA4(void) {
    func_000AB3DC();
    func_000AB48C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDE30);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDEFC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDF84);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CDFF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AACC8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAD70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AADB4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAE08);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAE94);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000AAE94(void) {
    func_000C7B7C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7544);
#endif

#if FW_VERSION == 282
void func_000AAE94(void) {
    func_000AB4E8();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CE0C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAEB0);

void func_000AAF54(void) {
    func_000AAEB0(0);
}

void func_000AAF70(void) {
    func_000AAEB0(1);
}

void func_000AAF8C(s16 arg0) {
    func_000AD064(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAFA8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AAFF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB068);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB068(void) {
    func_000C7544(0);
}
#endif

#if FW_VERSION == 282
void func_000AB068(void) {
    func_000AD1C0(0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB084);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB084(void) {
    func_000C7544(1);
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7620);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C763C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C768C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C76C4);

void func_000C76FC(void) {
    func_000C9854(0);
}

void func_000C7718(void) {
    func_000C9854(1);
}
#endif

#if FW_VERSION == 282
void func_000AB084(void) {
    func_000AD1C0(1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CE210);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CE248);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB0A0);
#endif

#if FW_VERSION == 282
void func_000AB0A0(void) {
    struct Unk_func_000AB0A0_temp_s0 *temp_s0;

    temp_s0 = D_00108A2C;
    temp_s0->unk28 = func_000AB0D4(temp_s0->unk2C, (s32) temp_s0->unk4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000CE2F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000CE2F4(void) {
    void *temp_s0;

    temp_s0 = D_00123D14;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_000C7768(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7768);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C79B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7A1C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7A70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7B20);

void func_000C7B6C(s16 arg0) {
    M2C_FIELD(D_00123D14, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7B7C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7DA0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7DF8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7E7C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C7F60);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C802C);

void func_000C80F8(s16 arg0) {
    func_000C811C((s32) arg0);
    func_000D1EA4();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C811C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8218);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8378);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8440);

void func_000C84A4(void) {
    if (func_000C8440((s32) M2C_FIELD(D_00123D14, s16 *, 4)) != -1) {
        func_000CCDB4();
        func_000D1EA4();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C84E4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C850C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C863C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8744);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C88B8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8914);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8AC0);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8B04);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8B48);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8C70);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8D84);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C8FAC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C9334);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000C9458);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB0D4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB324);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB388);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB3DC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB48C);

void func_000AB4D8(s16 arg0) {
    D_00108A2C->unk3C = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB4E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB70C);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB764);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB7E8);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB8CC);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000AB998);

void func_000ABA64(s16 arg0) {
    func_000ABA88(arg0);
    func_000B5810();
}

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ABA88);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ABB84);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ABCE4);

INCLUDE_ASM("nonmatchings/pafmini_000AC228", func_000ABDAC);

void func_000ABE10(void) {
    if (func_000ABDAC((s32) M2C_FIELD(D_00108A2C, s16 *, 4)) != -1) {
        func_000B0720();
        func_000B5810();
    }
}
#endif
