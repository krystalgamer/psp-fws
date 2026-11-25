#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_0012038C(s32 arg0) {
    sceCccIsValidUCS4(arg0);
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_001203A8);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120544);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF8toUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toUTF8);

s32 func_001207C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7DD8;
    D_001A7DD8 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_001A7DDC = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_001A7DE0 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_D4DAB044);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_15939BB8);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_8D736C8F);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccStrlenSJIS);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F274);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6CDC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F374);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccJIStoUCS);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F49C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011F574);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0012091C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001209AC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120A1C);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccJIStoUCS);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120B44);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120C1C);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toSJIS);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120EB0);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C0C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C1C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C2C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C38);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6C48);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6CDC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6CF8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00118148);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6D28);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccStrlenUTF8);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccStrlenSJIS);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C6F80);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccDecodeSJIS);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011FB10);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C7064);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_001211B8);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121288);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001212D0);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C743C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000C7550);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccJIStoUCS);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C75F8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF8toUTF16);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00118B5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00118B8C);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_00118C34_v200);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toSJIS);

INCLUDE_ASM("nonmatchings/paf_12038C", sceCccUTF16toUTF8);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_B9383A25);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_F93D4E1F);

s32 func_00121740(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121748);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012177C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001217B0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001217E8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121820);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121858);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121904);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121938);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012196C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001219A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_000CC7F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_001219D4);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121A0C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121A40);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121A74);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121AA8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121ADC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121B0C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121B40);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121B74);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121BA8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121BD8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121C08);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121C38);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121C68);
#else
s32 func_00121C68(struct Unk_func_00121C68_0 *arg0) {
    func_0012446C(arg0->unk7C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121C88);

s32 func_00121CB0(void) {
    return 1;
}

s32 func_00121CB8(void) {
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121CC0);
#else
s32 func_00121CC0(struct Unk_func_00121CC0_0 *arg0) {
    struct Unk_func_00121CC0_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD88(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121CEC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121D20);
#else
s32 func_00121D20(struct Unk_func_00121D20_0 *arg0) {
    struct Unk_func_00121D20_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD90(temp_a0);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121D4C);
#else
s32 func_00121D4C(struct Unk_func_00121D4C_0 *arg0) {
    struct Unk_func_00121D4C_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD98(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_60CBB63F);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_D6CDB3BB);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121E94);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012203C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001220F8);

s32 func_00122158(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00122168(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00119CFC);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_00119DA4_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_54AB18DD);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00119FB8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00119FD4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00119FF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00119F64);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A00C_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A028);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A044);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00120E58);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120E74);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120E90);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120EAC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120EC8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120EE4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A060);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A074);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A080);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A08C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A0A0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A10C);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00120F34);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00120FA0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012101C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121094);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A148);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A190);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A1F4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A234);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A260);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121228);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A338);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00121384);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121394);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A148);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121488);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121538);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121570);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012161C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121644);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121658);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121694);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001216FC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001217A0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121830);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A404);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A4DC);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_001219C4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121A64);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121B20);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121B30);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121BAC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121C20);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121CD0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121D08);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121DB8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121DF0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121E04);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A08C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121EC0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121F64);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00121FF4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001220B0);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00122188);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_00122228);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001222E4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001222F4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122370);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001223F4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001224A4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001224DC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012258C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A5B4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A5D8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A5FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A568);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A610_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A63C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A668);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A694);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A6C0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A6E8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A70C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A730);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A744);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A770);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A6F4);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A79C_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A7C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A7F4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A81C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A798);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A840_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A8F4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011A9D8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011AA8C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011AB78);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011AC30);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0011AC80);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_12038C", D_0019D3A4);

INCLUDE_RODATA("nonmatchings/paf_12038C", D_0019D3B8);

INCLUDE_RODATA("nonmatchings/paf_12038C", D_0019D3C0);

INCLUDE_ASM("nonmatchings/paf_12038C", scePaf_54AB18DD);

void func_00122458(void) {
    sceCccSetTable();
}

void func_00122474(void) {
    scePaf_D4DAB044();
}

void func_00122490(s32 arg0) {
    func_0012038C(arg0);
}

void func_001224AC(s32 arg0) {
    func_001209AC(arg0 & 0xFFFF);
}

void func_001224C8(s32 arg0) {
    func_001225DC(arg0 & 0xFFFF);
}

void func_001224E4(s32 arg0) {
    func_001234E8(arg0 & 0xFFFF);
}

void func_00122500(s32 arg0) {
    func_00122D3C(arg0 & 0xFFFF);
}

void func_0012251C(s32 arg0) {
    func_00120EB0(arg0 & 0xFFFF);
}

void func_00122538(s32 arg0) {
    func_00122A2C(arg0 & 0xFFFF);
}

void func_00122554(s32 arg0) {
    func_0012398C(arg0 & 0xFFFF);
}

void func_00122570(s32 arg0) {
    func_001231C8(arg0 & 0xFFFF);
}

void func_0012258C(s32 arg0, s32 arg1) {
    D_001A7E0C = arg0;
    D_001A7E08 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_001225A0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001225DC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122648);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001226C4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012273C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001227F8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001228D0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122970);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122A2C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122A3C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122AB8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122B30);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122BE0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122C18);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122CC4);

void func_00122CEC(s32 arg0, s32 arg1) {
    D_001A7E18 = arg0;
    D_001A7E14 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122D00);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122D3C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122DA4);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122E48);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122ED8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00122F94);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012306C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012310C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001231C8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001231D8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123254);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001232C8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123378);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001233B0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123460);

void func_00123498(s32 arg0, s32 arg1) {
    D_001A7E24 = arg0;
    D_001A7E20 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_001234AC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001234E8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123568);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012360C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012369C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123758);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123830);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001238D0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012398C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012399C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123A18);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123A9C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123B4C);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123B84);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123C34);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123C6C);

void func_00123C90(s32 arg0, M2C_UNK arg1) {
    func_00123C6C(0xD, arg0, arg1);
}

s32 func_00123CB4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7E2C.unk9C;
    D_001A7E2C.unk9C = arg0;
    return temp_v0;
}

void func_00123CC8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123E60(0xD, arg0, arg1, arg2);
}

void func_00123CF4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123F14(0xD, arg0, arg1, arg2);
}

void func_00123D20(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123FF8(0xD, arg0, arg1, arg2);
}

void func_00123D4C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001240AC(0xD, arg0, arg1, arg2);
}

void func_00123D78(s32 arg0, s32 arg1) {
    func_00123C6C(0xE, arg0, arg1);
}

s32 func_00123D9C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7E2C.unkA8;
    D_001A7E2C.unkA8 = arg0;
    return temp_v0;
}

void func_00123DB0(s32 arg0, s32 arg1, s32 arg2) {
    func_00123E60(0xE, arg0, arg1, arg2);
}

void func_00123DDC(s32 arg0, s32 arg1, s32 arg2) {
    func_00123F14(0xE, arg0, arg1, arg2);
}

void func_00123E08(s32 arg0, s32 arg1, s32 arg2) {
    func_00123FF8(0xE, arg0, arg1, arg2);
}

void func_00123E34(s32 arg0, s32 arg1, s32 arg2) {
    func_001240AC(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123E60);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123F14);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00123FF8);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001240AC);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00124198);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00124250);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001242A0);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_001242D4);

s32 func_0012441C(struct Unk_func_0012441C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 == 0) {

    } else {
        func_001245FC(temp_v0);
    }
    arg0->unk8(0, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_0012446C);

s32 func_0012448C(void **arg0) {
    struct Unk_func_0012448C_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    temp_a0->unkF8(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_001244B4);

s32 func_001244E0(void) {
    return 0;
}

s32 func_001244E8(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C8AD0);
#endif

INCLUDE_ASM("nonmatchings/paf_12038C", func_001244F0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001245FC);

s32 func_00124648(void) {
    return 0;
}

s32 func_00124650(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_00124658);

s32 func_001247E4(s32 arg0) {
    func_00124830(arg0 + 0x100);
    return 0;
}

s32 func_00124804(void) {
    return 0;
}

s32 func_0012480C(struct Unk_func_0012480C_0 *arg0) {
    arg0->unk60C = 0x80;
    arg0->unk604 = 0;
    arg0->unk600 = 0;
    arg0->unk608 = 0;
    return 0;
}

s32 func_00124828(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_12038C", func_00124830);

INCLUDE_ASM("nonmatchings/paf_12038C", func_001248A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_000CD5E0);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000CD764);

INCLUDE_ASM("nonmatchings/paf_12038C", func_000CD848);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_12038C", func_000C8EC4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_12038C", func_00124910);

INCLUDE_ASM("nonmatchings/paf_12038C", func_00124A94);
#endif
