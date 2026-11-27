/* cflags[100]: -O0 */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD564);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD5C0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD5E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD608);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD790);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AD97C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ADB60);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ADBE4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ADE2C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ADEB8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE0E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE4B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE4F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE790);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE8C8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE92C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AE9A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AEA08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AEE70);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AEF78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF028);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF4E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF768);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF7F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF878);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AF8F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFBFC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFCCC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFE28);

void func_000AFE50(void) {
}

void func_000AFE58(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFE60);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFE7C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFED4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000AFF40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B00C0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B0720);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B0C84);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B0CE0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B10F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B13CC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1400);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1568);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1818);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B18B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B19A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1C0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1C94);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1DC0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B1EF8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2040);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B20FC);

void func_000B2144(void) {
    D_00106F70.unk190C = 0;
    D_00106F70.unk190A = 0;
    D_00106F70.unk18EA = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B215C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B22C8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B249C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B24D4);

s16 func_000B2508(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B252C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2588);

s32 func_000B2604(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_000B2644(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2644);

s32 func_000B2654(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2674);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B26E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2728);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2750);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2798);

s32 func_000B29F8(void) {
    return D_00106F70.unkA820;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2A10);

void func_000B2BB0(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2BB8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2D20);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2DD0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2EA4);

void func_000B2F24(s32 arg0, s16 arg1, s32 arg2) {
    func_000B2DD0(arg0, (s32) arg1, arg2);
}

s32 func_000B2F40(s32 arg0, s16 arg1, s32 arg2) {
    return func_000B3048(arg0, (s32) arg1, (s32) &D_0010DC8C, arg2) == 1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2F70);

void func_000B2FAC(s32 arg0, s16 arg1, s32 arg2) {
    func_000B2F40(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2FC8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B2FE4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3048);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3690);
#endif

#if FW_VERSION == 100
void func_000B3690(void) {
    func_000D134C(0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000CF5D4(s32 arg0, s16 arg1, s32 arg2) {
    return func_000CF6DC(arg0, (s32) arg1, (s32) &D_00128F74, arg2) == 1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CF604);
#endif

#if FW_VERSION == 282
void func_000B3690(void) {
    func_000B4D6C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B36AC);
#endif

#if FW_VERSION == 100
void func_000B36AC(void) {
    func_000D134C(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CF65C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CF678);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CF6DC);
#endif

#if FW_VERSION == 282
void func_000B36AC(void) {
    func_000B4E0C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B36C8);
#endif

#if FW_VERSION == 100
void func_000B36C8(void) {
    func_000D8CB4(0);
    func_000DFA40();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFD40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000CFD40(s32 arg0, s32 arg1, s32 arg2) {
    func_000D14A0(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFD5C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000CFD5C(void) {
    func_000D15B0();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFD78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFF08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFF68);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000CFF94);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D0124);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D02BC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D04B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D04D4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D0590);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D05D8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D0DD0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D0F80);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D10D4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1150);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D122C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1278);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1380);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1400);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D14A0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D15B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1818);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1908);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1E2C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1E48);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1EA4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D213C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D23B4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D241C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D24A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2550);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D25E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D26B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2788);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D280C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2874);
#endif

#if FW_VERSION == 282
void func_000B36C8(void) {
    func_000B4F1C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1508);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D16AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1904);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1A24);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1B7C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1DB8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1E2C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B36E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3874);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B38D4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3900);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3A90);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3C28);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3E1C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3E40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3EFC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B3F44);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B473C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B48EC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4A40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4ABC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4B98);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4BE4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4CEC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4D6C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4E0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B4F1C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5184);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5274);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5798);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B57B4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5810);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5AA8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5D20);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5D88);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5E10);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5EBC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B5F50);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B601C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B60F4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6178);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B61E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6274);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000B6274(s32 arg0) {
    func_000D2934(arg0);
    func_000D5558(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2934);
#endif

#if FW_VERSION == 282
void func_000B6274(s32 arg0) {
    func_000B62A0();
    func_000B8EC4(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1EC4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B62A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6348);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000B6348(struct Unk_func_000B6348_0 *arg0) {
    struct Unk_func_000B6348_temp_s0 *temp_s0;

    temp_s0 = arg0->unk4;
    func_000D750C(temp_s0->unk3A74);
    temp_s0->unk3A74 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2A08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2ADC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D3188);
#endif

#if FW_VERSION == 282
void func_000B6348(struct Unk_func_000B6348_0 *arg0) {
    struct Unk_func_000B6348_temp_s0 *temp_s0;

    temp_s0 = arg0->unk4;
    func_000BAE78(temp_s0->unk3A74);
    temp_s0->unk3A74 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1F5C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D1FD4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D236C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D26FC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2A08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D2AAC);

void func_000D2FC8(void) {
    if ((D_00138093 & 4) && (D_0013810E & 0x40)) {
        D_00137F9E = 6;
        func_000D305C();
    }
    if (D_0013810E & 0x20) {
        func_000D33AC();
    }
    if (D_0013810E & 0x10) {
        func_000D3A5C();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D305C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D33AC);

s32 func_000D39FC(void) {
    s32 sp0;

    func_000AF7DC((s32) &D_00137FA8, 4);
    D_00137FAA = 4;
    if (func_000B8EB4() != 0) {
        sp0 = -1;
    } else {
        sp0 = 0;
    }
    return sp0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D3A5C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D3E5C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D40B0);

void func_000D41D4(void) {
    D_00136CDA = D_00137E22;
    do {
        D_00137BEE = 1;
        D_001360FA = func_000C69E4();
        if (D_001360FA & 2) {
            func_000D42F4();
        }
    } while (!(D_001360FA & 0x20));
    func_000C67B8(0);
}

void func_000D4258(void) {
    u16 sp0;

    D_001360BA = D_00137E22;
    D_00136CD8 = 0;
    D_00136CD6 = 0;
    D_00137BDE = 0;
    D_00136106 = 0;
    D_00136108 = 0;
    func_000C67B8(0);
    func_000D41D4();
    if (D_001360BC != 0) {
        sp0 = 2;
    } else {
        sp0 = 1;
    }
    D_001360D2 = (s16) sp0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D42F4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4A24);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4BD0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4D08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5554);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D596C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5A34);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5AD4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5B74);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6090);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D61E0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D645C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6374);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6448);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6AF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6E30);
#endif

#if FW_VERSION == 100
void func_000B6E30(void) {

}
#endif

#if FW_VERSION == 282
void func_000B6E30(void) {
    func_000B8FCC();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6E4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_000B6E4C(s32 arg0) {
    func_000D5558(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D34FC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D35F0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D3678);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D37C4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D38E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D3FBC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D420C);

void func_000D433C(s32 arg0, s32 arg1, s32 arg2) {
    func_000D435C(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D435C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D45E8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D46D4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4884);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4A30);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D4B50);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5558);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D559C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D55EC);

s32 func_000D5660(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, u8 *, 0x88) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D567C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5704);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D57A0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5820);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D58E0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D593C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5A78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D5AD0);
#endif

#if FW_VERSION == 282
void func_000B6E4C(s32 arg0) {
    func_000B8EC4(arg0);
}
#endif

#if FW_VERSION == 100
void func_000D64DC(void) {
    D_001360BA = D_00137E22;
    D_001360B8 = 0;
    D_001360B6 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6518);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D65B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D666C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D68A8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7410);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7D4C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7DE8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7E48);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D85C8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8A08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8A80);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8CB4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9154);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9294);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D93F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9804);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D98C4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9A58);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9D0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D9F9C);

void func_000DA0C4(void) {
    if ((D_0013AC48 < 0x65) && (D_001360C2 < 0x3D)) {

    } else {
        D_0013AC34 = 0;
    }
    if (D_001360C2 >= 0x3D) {
        D_001360C2 = 0x3C;
    }
}

void func_000DA138(void) {
    D_00136106 = 0;
    D_001360E6 = 0;
    D_00136108 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA16C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA39C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA698);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA6DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA75C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA7DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA83C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA8CC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA96C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DA9D8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DAA30);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DAA94);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DAB78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DAC14);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DAC94);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DACF0);

s32 func_000DB0F0(void) {
    return D_0013E6BC;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB114);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB364);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB384);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB4CC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB564);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB660);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB754);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB844);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB888);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB900);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB96C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB9B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DB9EC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DBACC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC5F0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC628);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC668);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC6A0);

s32 func_000DC8D8(void) {
    return D_0013ABC4;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC8FC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC98C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DC9D0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DCBF4);

s32 func_000DCE54(void) {
    return D_0013ABC0 - D_0013ABC8;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DCE84);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DD210);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DD26C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DD38C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DD3F8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE0D0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE3B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE56C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE69C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE7E0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DE860);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DEA0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DEAA4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DEB9C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DED0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DF054);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DF1AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DF978);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DF9B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DFA40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000DFF04);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E03A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0474);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E05CC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E06D8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0828);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E08A0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0994);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0ACC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0B80);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0C68);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0D64);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0D9C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0E78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E0EC0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E1030);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E19A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E1E6C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E1ED0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E1F00);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E1F30);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E209C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E2180);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E23DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E25C0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E306C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E346C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E3634);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E3684);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E3A64);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E3C0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E40E8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E4588);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E47E0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5904);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5978);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5A00);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5B18);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5B6C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5C0C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5D78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5EC4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E5FE4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6058);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E61BC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E62CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6E68);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6F5C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B6FE4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7130);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7250);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7928);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7B78);

void func_000B7CA8(s32 arg0, s32 arg1, s32 arg2) {
    func_000B7CC8(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7CC8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B7F54);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8040);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B81F0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B839C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B84BC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8EC4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8F08);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8F58);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8FCC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B8FE8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9070);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B910C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B918C);

void func_000B924C(struct Unk_func_000B924C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        func_000B9FB0(arg0->unkC, temp_v0);
        func_000B92A8((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B92A8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B93E4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B943C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEB5C);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEB90);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEB9C);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEBD0);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEBE4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000F95D4);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000F960C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_0010BE14);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_0010BE4C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DECDC);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DED14);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DED28);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000F9690);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_0010BED0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DED98);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEDBC);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEDC4);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEDD0);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_000DEDDC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6000);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60CC(void) {
    return 0x62;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60D4(void) {
    return 0x63;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60DC(void) {
    return 0x64;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60E4(void) {
    return 0x5A;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60EC(void) {
    return 0x67;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60F4(void) {
    return 0x6E;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D60FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D60FC(void) {
    return 0x72;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6104);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D6104(void) {
    return 0x73;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D610C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D610C(void) {
    return 0x80;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6114);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D6114(void) {
    return 0x87;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D611C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D611C(void) {
    return 0x2F;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000D6124(void) {
    return 0x187;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D612C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6200);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6518);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6574);

s32 func_000D662C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) & 0xF) + M2C_FIELD(arg0, u8 *, 6) + 9;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6644);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D66AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D66DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6A1C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D6C70);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7018);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7200);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7360);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D750C);

u16 func_000D7564(void *arg0) {
    u16 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != -1) {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x1CB8);
    } else {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            var_a1 = M2C_FIELD(temp_a0, u16 *, 0xE);
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7594);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7648);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7684);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D770C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D772C);

s32 func_000D77EC(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8) + 4;
}

s32 func_000D77FC(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    return (temp_v1 == 0) ? 0 : (temp_v1 + arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D780C);

s32 func_000D782C(void *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK), 0xC)(M2C_FIELD(arg0, s32 *, 0), 1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D785C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7890);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7924);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7970);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D79AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D79D0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D79F0);

s32 func_000D7A54(s32 arg0, s32 arg1, s32 arg2) {
    return func_000D7890(arg0, arg1, 0x41, arg2) != 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7A78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7B24);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7C1C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7D34);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7E48);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D7F20);

void func_000D8010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1F80) = 0;
    func_000D7F20((s32) arg0, arg1, 0);
}

void func_000D8030(void *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x1F80) + 1;
    M2C_FIELD(arg0, s32 *, 0x1F80) = temp_a2;
    func_000D7F20((s32) arg0, arg1, temp_a2);
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8054);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8340);

s32 func_000D839C(s8 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*arg0 != 0) {
        do {
            var_a1 += 1;
        } while (*(arg0 + var_a1) != 0);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D83C4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D83F8);

u8 *func_000D846C(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = arg1;
    var_v1 = arg0;
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (temp_v0 != 0);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D848C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D84B4);

u32 func_000D84F8(void *arg0) {
    u16 temp_a3;
    u16 temp_v1;
    u16 var_a4;
    u32 var_a1;
    u32 var_a5;
    void *var_a0;

    temp_a3 = M2C_FIELD(arg0, u16 *, 0x3C60);
    var_a4 = 0;
    var_a0 = arg0 + 0x3C64;
    var_a5 = 0;
    var_a1 = 0;
    if (temp_a3 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, u16 *, 0x82);
            var_a0 += 0x84;
            if (var_a4 < temp_v1) {
                var_a4 = temp_v1;
                var_a5 = var_a1;
            }
            var_a1 = (var_a1 + 1) & 0xFFFF;
        } while (var_a1 < temp_a3);
    }
    return var_a5;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8544);

s32 func_000D857C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_000D8624(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D85B0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8624);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8678);

s32 func_000D86E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_000D83F8(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D871C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8830);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8BEC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000D8CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6B98);

INCLUDE_RODATA("nonmatchings/pafmini_0AD564", D_0010C14C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6BD8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6D68);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6D84);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E6F2C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E74A8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E75A4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E76E8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E7728);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E77BC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E7820);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E7C88);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E809C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E86AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E8950);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E8980);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E8C38);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E8F54);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E8FB8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E902C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E91B8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9284);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E93DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E944C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E95C8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9600);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9658);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E969C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E96FC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E974C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E981C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9898);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9918);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9960);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E99AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9A40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9A90);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9BAC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9D44);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000E9F3C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EA138);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EA2F4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EA4B8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EA500);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EA554);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAABC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EABB8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAC10);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAC94);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAD3C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EADAC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAE20);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAEC8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAF74);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EAFF4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB05C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB194);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB23C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB330);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB3AC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EB570);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EBC10);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EBDC4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EBFCC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC124);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC304);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC45C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC530);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC578);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC634);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC670);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC940);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC95C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000EC9E8);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ECA74);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ECA78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000ECB90);
#else
INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B996C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A38);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A40);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A48);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A50);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A58);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A60);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A68);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A70);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A78);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A80);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A88);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A90);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9A98);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9B6C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9E84);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9EE0);

s32 func_000B9F98(struct Unk_func_000B9F98_0 *arg0) {
    return (arg0->unk8 & 0xF) + arg0->unk6 + 9;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000B9FB0);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BA018);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BA048);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BA388);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BA5DC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BA984);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BAB6C);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BACCC);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BAE78);

u16 func_000BAED0(struct Unk_func_000BAED0_0 *arg0) {
    u16 var_a1;
    struct Unk_func_000BAED0_temp_a0 *temp_a0;

    var_a1 = 0;
    if (arg0->unk4 != -1) {
        var_a1 = arg0->unk1CB8;
    } else {
        temp_a0 = arg0->unk0;
        if (temp_a0 != NULL) {
            var_a1 = temp_a0->unkE;
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BAF00);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BAFB4);

INCLUDE_ASM("nonmatchings/pafmini_0AD564", func_000BAFF0);
#endif
