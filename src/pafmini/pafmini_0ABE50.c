/* cflags[100]: -O0 */
/* cflags: -O1 */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
void func_000ABE50(void) {
    func_000AEF78();
    D_00108846 = 0;
    func_000B5810();
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000ABE78);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000ABFA8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC0B0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC224);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC280);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC42C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC470);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC4B4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC5DC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC6F0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AC918);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000ACCA0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000ACDC4);
#endif

#if FW_VERSION == 100
void func_000ACED4(void) {
    func_000D1904(0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000ACED4(void) {
    func_000C9458(0);
}
#endif

#if FW_VERSION == 282
void func_000ACED4(void) {
    func_000ACDC4(0);
}
#endif

#if FW_VERSION == 100
void func_000ACEF0(void) {
    func_000D1904(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000ACEF0(void) {
    func_000C9458(1);
}

void func_000C95A0(void) {
    func_000CDBFC(0);
    func_000D1EA4();
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C95C4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C96F8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9854);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9934);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9A04);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9B40);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9B9C);
#endif

#if FW_VERSION == 282
void func_000ACEF0(void) {
    func_000ACDC4(1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE38C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE3E4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE844);

void func_000CE8CC(void) {
    D_001360CE = 0;
    D_001360D0 = 0;
    if (D_00138088 == 1) {
        D_001360D0 = 1;
    }
    if (D_001360CA == -1) {
        if (D_001360CC & 0x200) {
            D_001360CE = 1;
        }
        D_001360CC &= 0xFF;
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE960);

void func_000CEA9C(void) {
    func_000C67B8(0);
    D_0013AC34 = 0;
    D_00137E24 = 0;
    D_001360B6 = 0;
    D_001360B8 = 0;
    D_001360D8 = 0;
    D_001360D2 = 0;
    D_001360EA = 0;
    D_001360BC = 0;
    D_001360F6 = 1;
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEB14);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEB48);

void func_000CEE68(void) {
    if (D_001360B8 < D_001360B6) {
        func_000D5AD4((s32) (s16) ((u16) D_001360B8 + 1), (s32) D_001360B8, (s32) (s16) ((u16) D_001360B6 - (u16) D_001360B8));
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEEE8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF014);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF140);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF254);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF37C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF3BC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF540);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF7DC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF8FC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF9A0);
#endif

#if FW_VERSION == 282
void func_000ACF0C(void) {
    func_000B1568(0);
    func_000B5810();
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000ACF30);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD064);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD1C0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD2A0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD370);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD4AC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD508);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000AD548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000AD548(void) {
    func_000C7A70();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9BF8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9C54);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9C78);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9C9C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000C9E24);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA010);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA1F4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA278);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA4C0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA54C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CA778);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CAB44);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CAB8C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CAE24);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CAF5C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CAFC0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CB038);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CB09C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CB504);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CB60C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CB6BC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CBB78);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CBDFC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CBE8C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CBF0C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CBF8C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC290);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC360);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC4BC);

void func_000CC4E4(void) {

}

void func_000CC4EC(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC4F4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC510);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC568);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC5D4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CC754);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CCDB4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CD318);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CD374);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CD78C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CDA60);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CDA94);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CDBFC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CDEAC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CDF44);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE038);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE2A0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE328);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE454);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE58C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE6D4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE790);

void func_000CE7D8(void) {
    M2C_VFIELD(&D_00122258, s16, 0x190C) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x190A) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x18EA) = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE7F0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CE95C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEB30);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEB68);

s16 func_000CEB9C(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEBC0);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEC1C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEC98);

s32 func_000CECD8(s32 arg0) {
    return (u32) ((arg0 + 0x36) & 0xFF) < 5U;
}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CECE8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CED08);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CED78);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEDBC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEDE4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CEE2C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF08C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF0A4);

void func_000CF244(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF24C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF3B4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF464);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CF538);
#endif

#if FW_VERSION == 282
void func_000AD548(void) {
    func_000AB3DC();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CFA38);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CFC04);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CFD58);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CFF6C);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000CFFD8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D02BC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D0310);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D0364);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D04F8);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D0694);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D0BE4);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D11CC);

INCLUDE_ASM("nonmatchings/pafmini_0ABE50", func_000D134C);
#endif
