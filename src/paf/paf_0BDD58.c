#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 func_000BDD58(struct Unk_func_000BDD58_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((arg0->unk1F0 * arg0->unk1EC) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = arg0->unk1F2;
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BDDA8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BDF28);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BE470);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BE9A8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BECDC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BEF0C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF170);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF33C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF3F8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF6A4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF8AC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BF9BC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000BFE40);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0048);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0140);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C018C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0270);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0500);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0574);

s32 func_000C07DC(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C07FC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0938);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0980);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0BB4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0C48);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0D80);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0E34);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0E70);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C0F98);

s32 func_000C0FF8(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_001A53C0 == 0) {
        D_001A53C4 = (s32) *arg0;
        var_a1 = 0;
        D_001A53C0 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1028);

s32 func_000C1090(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_001A53C0 != 0) {
        D_001A53C0 = 0;
        D_001A53C4 = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C10BC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C115C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1208);
#endif

M2C_UNK *scePaf_962FA087(void) {
    return &D_001A53C8;
}

#if FW_VERSION == 282
s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A3ED0;
    D_001A3ED0 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069170);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069234);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069280);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_7952AE83);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_ED83B18F);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_D6C1FF36);

INCLUDE_RODATA("nonmatchings/paf_0BDD58", D_00198C04);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_D6232F26);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000693F8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_0006946C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000694B4);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000694FC);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069608);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069740);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_E418D7E0);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_2CB6FBBE);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_442F1731);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_71EDAD83);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C182C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_0E8A3B52);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C1A2C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069820);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_D96449B4);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_FDB98CAC);

void func_000C1CA0(struct Unk_func_000C1CA0_0 *arg0, s32 *arg1, s32 arg2) {
    func_0000C8BC((u8 *)arg0 + 0x64, *arg1);
    arg0->unk60 = arg2;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_00069A64);
#else
INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_BA1F20EE);
#endif

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_20F5234E);

INCLUDE_ASM("nonmatchings/paf_0BDD58", scePaf_6F74F263);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2410);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C24C8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2580);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C25D8);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2614);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2990);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2B64);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2C80);

void func_000C2CEC(void) {
    func_000C2C80(1, 0xFFFF);
}

void func_000C2D0C(void) {
    func_000C2C80(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2D2C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2D98);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2E0C);

INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2E78);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2EEC);
#else
void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F08);
#else
void func_000C2F08(void) {
    scePaf_D6C1FF36();
}
#endif

void func_000C2F24(void) {
    scePaf_D6232F26();
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F40);
#else
void func_000C2F40(void) {
    scePaf_2CB6FBBE();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F5C);
#else
void func_000C2F5C(void) {
    scePaf_442F1731();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0BDD58", func_000C2F78);
#else
void func_000C2F78(void) {
    scePaf_71EDAD83();
}
#endif
