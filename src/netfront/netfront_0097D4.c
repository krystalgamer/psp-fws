/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000097D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000098C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000991C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000099E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009AAC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009B74);

s32 func_00009C3C(struct Unk_func_00009C3C_0 *arg0, struct Unk_func_00009C3C_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk18;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk14);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009CAC(struct Unk_func_00009CAC_0 *arg0, struct Unk_func_00009CAC_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk20;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk1C);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009D1C(struct Unk_func_00009D1C_0 *arg0, struct Unk_func_00009D1C_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk28;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk24);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00009D8C(struct Unk_func_00009D8C_0 *arg0, struct Unk_func_00009D8C_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk30;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk2C);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009DFC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009E08);

s32 func_00009E14(void) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00009E40();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = *temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009E40);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009E7C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009E9C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009EC0);

s32 func_00009ECC(void) {
    return D_001322BC;
}

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011D988);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011D9B4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DDC0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009ED8);

M2C_UNK *func_00009F4C(void) {
    return &D_001322CC;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00009F58);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_6CAE4020);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A240);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A288);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A2B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A318);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A348);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A448);

void func_0000A494(s32 arg0) {
    func_00023780();
    func_00023880(arg0, 0x1E0, 0x110);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A4C8);

void func_0000A700(void) {
}

s32 func_0000A708(void) {
    return 0;
}

s32 func_0000A710(void) {
    return 0x7FFFFFFF;
}

void func_0000A71C(void) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_5CA39435(0x28);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    }
}

void func_0000A740(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A760);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A828);

void func_0000A92C(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000A934);

s32 func_0000AA38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AA40);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000ABE8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AC50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AD18);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AD94);

void func_0000ADD4(struct Unk_func_0000ADD4_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if ((arg1 >= 0) && (arg1 < arg0->unk14)) {
            sceHVNetfront_Module_F489E9B4(arg0, sceHVNetfront_Module_1461AF80());
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AE24);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AEC8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AF44);

s32 func_0000AF68(struct Unk_func_0000AF68_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk20;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000AF7C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B07C);

s32 func_0000B13C(void) {
    return 0;
}

s32 func_0000B144(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B14C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B290);

void func_0000B2E8(struct Unk_func_0000B2E8_0 *arg0) {
    arg0->unk4 = 2;
    arg0->unk0 = 0;
}

void func_0000B2F8(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B300);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B5A4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DE90);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DE98);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEA0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEA8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEB0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEB8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEC4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DECC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DED4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEDC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B61C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DEF4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000B724);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000BCEC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000BD18);

void func_0000BECC(struct Unk_func_0000BECC_0 *arg0) {
    sceHVWWW_Library_52782A62(arg0->unk44, 0);
}

void func_0000BEEC(struct Unk_func_0000BEEC_0 *arg0) {
    sceHVWWW_Library_3CAF5AEF(arg0->unk44);
}

s32 func_0000BF08(struct Unk_func_0000BF08_0 *arg0) {
    return arg0->unk68C;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000BF10);

void func_0000BFD0(struct Unk_func_0000BFD0_0 *arg0, s32 arg1) {
    arg0->unk878 = arg1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000BFD8);

void func_0000C100(struct Unk_func_0000C100_0 *arg0, s32 arg1) {
    arg0->unk87C = arg1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C108);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C318);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C358);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C3A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C3E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C430);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C478);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C51C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C584);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C5EC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C654);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C69C);

s32 func_0000C700(struct Unk_func_0000C700_0 *arg0) {
    if (arg0->unk6B8 == 0) {
        func_0000C69C(func_00009DFC());
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C734);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C77C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C804);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C884);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C924);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000C9F0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000CAFC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000CDB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000CEC8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D0FC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D18C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D2C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D334);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D36C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D3A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D444);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D4BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D534);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D614);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D6BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D784);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D7DC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D858);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000D9F0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DA58);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DAF4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DBA4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DC54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DD04);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DD5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DDB4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DE0C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DE64);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DECC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DF44);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000DFF4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000E0A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000E10C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000E36C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000E3B4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000E520);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_CAA4BDD4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_6BA06056);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_E25ACBBB);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_A72A9616);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_DBF36A05);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_C1CBF794);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_2764F63A);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_B5E28668);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000EC38);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000EC88);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000ED64);

void func_0000EE48(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DF44(arg0, arg1);
    func_0000EC88(arg0, 0x10023, arg2);
}

void func_0000EE8C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000EC38(arg1, arg2);
    func_0000EC88(arg0, 0x10024, arg3);
}

void func_0000EEDC(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0000DFF4(func_00009DFC(), arg1);
    func_0000EC88(arg0, 0x10017, arg2);
}

void func_0000EF38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_0000D858(arg0, arg1, arg2, arg3, arg4, arg5);
    func_0000EC88(arg0, 0x10009, arg6);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000EF7C);

void func_0000EFC0(s32 arg0, s32 arg1) {
    func_0000D784();
    func_0000EC88(arg0, 0x10016, arg1);
}

void func_0000F004(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DBA4(arg0, arg1);
    func_0000EC88(arg0, 0x1000D, arg2);
}

void func_0000F048(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DAF4(arg0, arg1);
    func_0000EC88(arg0, 0x1000C, arg2);
}

void func_0000F08C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DC54(arg0, arg1);
    func_0000EC88(arg0, 0x1000E, arg2);
}

void func_0000F0D0(s32 arg0, s32 arg1) {
    func_0000DD5C();
    func_0000EC88(arg0, 0x10010, arg1);
}

void func_0000F114(s32 arg0, s32 arg1) {
    if (func_0000E10C() != 0) {
        func_0000EC88(arg0, 0x1001A, arg1);
    }
}

void func_0000F160(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;

    if (arg1 != 0) {
        func_0000DE0C();
        var_a1 = 0x10012;
    } else {
        func_0000DDB4();
        var_a1 = 0x10011;
    }
    func_0000EC88(arg0, var_a1, arg2);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F1C0);

void func_0000F288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000E3B4(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    func_0000EC88(arg0, 0x10022, arg7);
}

void func_0000F2CC(s32 arg0, s32 arg1, s32 arg2) {
    func_0000DE64(arg0, arg1);
    func_0000EC88(arg0, 0x10013, arg2);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F310);

void func_0000F354(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000D6BC(arg0, arg1, arg2, arg3);
    func_0000EC88(arg0, 0x10015, arg4);
}

void func_0000F398(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D614(arg0, arg1);
    func_0000EC88(arg0, 0x10027, arg2);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F3DC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F52C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F568);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DF34);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DF5C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DF60);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_D7F88071);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F798);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F7E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F86C);

s32 func_0000F914(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_0000F798(arg0);
    func_00011D74(temp_v0);
    temp_v0_2 = func_0001198C(func_0000F798(arg0), arg1, arg2);
    var_s0 = 0;
    if (temp_v0_2 != 1) {
        var_s0 = ~temp_v0_2 != 0;
    }
    func_00011D98(temp_v0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000F9A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FA34);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FAB4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FB64);

s32 sceHVNetfront_Module_E0BC5E08(void) {
    return func_00009DFC()->unk908;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FC40);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FD1C);

s32 func_0000FE90(struct Unk_func_0000FE90_0 *arg0) {
    void *sp0;
    func_0009315C(&sp0);
    return sp0 - arg0->unkB0;
}

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011DF98);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0000FEC4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010AA8);

void func_00010AFC(struct Unk_func_00010AFC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    temp_v0_2 = arg0->unkC;
    arg0->unk8 = 0;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0_2);
    }
    arg0->unkC = 0;
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x14);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010B5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010CB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010CF4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010DA8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010E98);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00010F28);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011140);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011184);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011304);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000113C8);

s32 func_00011574(struct Unk_func_00011574_0 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = arg0->unk10;
        sceHVNetfront_Module_A2F4AC9E(arg0->unkC);
        sceHVNetfront_Module_A2F4AC9E((s32) arg0);
        func_00015FAC(temp_s0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000115C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011698);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000116BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011760);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000117A4);

void func_00011838(struct Unk_func_00011838_0 *arg0) {
    s32 temp_a0;
    void *temp_s0;
    struct Unk_func_00011838_var_v0 *var_v0;

    temp_a0 = arg0->unk40;
    if (temp_a0 > 0) {
        sceKernelDeleteSema(temp_a0);
    }
    var_v0 = func_0001189C(arg0);
    if (var_v0 != NULL) {
        do {
            temp_s0 = var_v0->unk20;
            func_00011760(arg0, var_v0);
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001189C);

s32 func_000118A4(struct Unk_func_000118A4_0 *arg0) {
    return arg0->unk4;
}

void func_000118AC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_000118B4(struct Unk_func_000118B4_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000118BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001198C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011B30);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011CFC);

void func_00011D74(struct Unk_func_00011D74_0 *arg0) {
    sceKernelWaitSema(arg0->unk40, 1, 0);
}

void func_00011D98(struct Unk_func_00011D98_0 *arg0) {
    sceKernelSignalSema(arg0->unk40, 1);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011DB8);

void func_00011E38(struct Unk_func_00011E38_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk858 = arg1;
    }
}

s32 func_00011E48(struct Unk_func_00011E48_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk85C;
    }
    return var_v0;
}

void func_00011E5C(struct Unk_func_00011E5C_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk85C = arg1;
    }
}

s32 func_00011E6C(struct Unk_func_00011E6C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk868;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011E80);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011E90);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00011FCC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012130);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012188);

void func_00012340(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012360);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001249C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012608);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000127C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012908);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000129B8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E0C0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E0E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012A68);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00012DF4);

s32 func_00013158(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_00012DF4((u8 *)func_00009DFC() + 0x880, 0, 0, arg0, arg1);
    *arg2 = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000131C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013324);

void func_0001345C(s32 arg0) {
    func_00013324((u8 *)func_00009DFC() + 0x880, arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013490);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013614);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000136F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013888);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000139A4);

void func_00013B34(struct Unk_func_00013B34_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4;
        if (temp_v0 != 0) {
            sceHVNetfront_Module_88977645(temp_v0, -1);
        }
        sceHVNetfront_Module_D611E938((s32) arg0, 0, 8);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013B80);

s32 func_00013CCC(s32 arg0, M2C_UNK arg1) {
    return (func_00013B80(arg0 + 0x89C, 0, arg1) != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013CFC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013DB0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013E9C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00013F10);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014170);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000142EC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000143E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014428);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014470);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014794);

s32 sceHVNetfront_Module_D9956972(void) {
    return func_00009DFC()->unk910;
}

s32 sceHVNetfront_Module_CAE659B5(void) {
    return func_00009DFC()->unk69C;
}

s32 func_00014900(void) {
    return func_00009DFC()->unk698;
}

s32 func_00014920(void) {
    return func_00009DFC()->unk6A4;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014940);

s32 func_000149F4(void) {
    return 0;
}

void func_000149FC(struct Unk_func_000149FC_0 *arg0) {
    arg0->unk0 = func_00009E08();
    arg0->unk4 = func_00009E7C();
}

void func_00014A2C(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014A34);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014A94);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014AF4);

s32 func_00014B50(struct Unk_func_00014B50_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    sceHVNetfront_Module_D611E938(arg0, 0, 0xD4);
    var_a1 = 0;
    if (func_000155E8(arg0) != 0) {
        func_0001570C(arg0);
        temp_v0 = (u8 *)arg0 + 0x90;
        var_a1 = 1;
        arg0->unk20 = temp_v0;
        arg0->unk24 = temp_v0;
        *arg0->unk4 = 0;
    }
    return var_a1;
}

void func_00014BB4(s32 arg0) {
    func_000182E4();
    func_0001576C(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014BE0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014C3C);

s32 func_00014D4C(struct Unk_func_00014D4C_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00015FE0(arg0) != 0) {
        arg0->unk40 = 1;
        sceHVNetfront_Module_BB5E8F0E((u8 *)arg0 + 0x48, (s32) &D_0011E1E4);
        do {

        } while (func_000161A4(arg0, arg1) != 0);
        func_00016404(arg0);
        var_v1 = arg0->unk44;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014DC0);

s32 func_00014E24(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000161A4() == 0) {
        func_00016404(arg0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014E64);

s32 func_00014F40(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00017044() != 0) {
        var_v1 = func_00014F80(arg0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014F80);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00014FC0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015064);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015160);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000151E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001523C);

s32 func_0001529C(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00015558();
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0001523C(arg0, temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000152E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015368);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000153BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000153F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015430);

void func_000154C8(struct Unk_func_000154C8_0 *arg0) {
    struct Unk_func_000154C8_temp_a0 *temp_a0;

    temp_a0 = arg0->unk24;
    sceHVNetfront_Module_1DF9F3CD(temp_a0, temp_a0->unk18);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000154E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015558);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000155E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001570C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001576C);

s32 func_000157BC(s32 arg0, struct Unk_func_000157BC_1 *arg1) {
    arg1->unk0 = 0;
    arg1->unk4 = 0;
    func_000158A4((u8 *)arg1 + 0x28);
    return func_00018200(arg0, (u8 *)arg1 + 0x4C) != 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015810);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000158A4);

s32 func_000158D8(struct Unk_func_000158D8_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk20;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
    }
    temp_v0_2 = arg0->unk0;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
    }
    temp_v0_3 = arg0->unk4;
    if (temp_v0_3 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0_3);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015938);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015A34);

s32 func_00015B38(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    struct Unk_func_00015B38_temp_v0_3 *temp_v0_3;

    temp_v0_3 = func_00015BFC();
    if (temp_v0_3 == NULL) {
        *arg0 = NULL;
        return 0x4000;
    }
    temp_v0_3->unk8 = 1;
    temp_v0_3->unkC = 0x1F;
    *temp_v0_3->unk20 = 0;
    temp_v0 = func_00015A34(temp_v0_3, arg1, arg2, arg3);
    if ((temp_v0 != 0) && (temp_v0 & 0x90)) {
        *arg0 = temp_v0_3;
        return temp_v0;
    }
    temp_v0_2 = func_00014FC0(arg1, temp_v0_3);
    *arg0 = temp_v0_3;
    return temp_v0 | temp_v0_2;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015BFC);

void func_00015C5C(struct Unk_func_000158D8_0 *arg0) {
    func_000158D8(arg0);
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015C88);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015DFC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015F24);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015FAC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00015FE0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000161A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00016374);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00016404);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00016438);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E160);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E1C0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E1E4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E1EC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E210);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00016538);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000165F0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017044);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E274);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E278);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E27C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E280);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E288);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E294);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E2A4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E2B0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E2C0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E2C4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E2CC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001711C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017848);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000178BC);

s32 func_000179CC(struct Unk_func_000179CC_0 *arg0) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = arg0->unk3C;
    if (temp_v0 > 0) {
        var_s1 = func_00017848(arg0->unk0, arg0->unk34, temp_v0);
    }
    sceHVNetfront_Module_A2F4AC9E(arg0->unk34);
    arg0->unk34 = 0;
    arg0->unk3C = 0;
    sceHVNetfront_Module_71125C97(arg0->unk0);
    arg0->unk0 = -1;
    arg0->unk14 = 0;
    return var_s1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017A3C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017AFC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E378);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E37C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E390);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E394);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3A4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3A8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3B4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3C8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3CC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3E0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3E4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3EC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E3F8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E400);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E408);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E430);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E43C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E44C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E450);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E454);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017BBC);

void func_00017C98(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_BB5E8F0E(arg0, (s32) &D_0011E464);
    sceHVNetfront_Module_56988A48(arg0, arg1);
    sceHVNetfront_Module_56988A48(arg0, (s32) &D_0011E460);
    func_00017DB0(0xA, 0x30, arg0, arg2);
    sceHVNetfront_Module_56988A48(arg0, (s32) &D_0011E390);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017D1C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E460);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E464);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00017DB0);

void func_00017F3C(s32 *arg0, struct Unk_func_00017F3C_1 *arg1) {
    func_00017FC4(arg0, arg1->unk0);
    func_00018028(arg0, arg1->unk4);
    func_0001808C(arg0, arg1->unk8);
    func_00018094(arg0, arg1->unkC);
    func_0001809C(arg0, arg1->unk10);
    func_000180A4(arg0, arg1->unk18);
    func_000180AC(arg0, arg1->unk14);
    func_000180B4(arg0, 0);
}

void func_00017FC4(s32 *arg0, u8 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
        *arg0 = 0;
    }
    if ((arg1 != NULL) && (*arg1 != 0)) {
        *arg0 = sceHVNetfront_Module_27D353B1(arg1);
    }
}

void func_00018028(struct Unk_func_00018028_0 *arg0, u8 *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
        arg0->unk4 = 0;
    }
    if ((arg1 != NULL) && (*arg1 != 0)) {
        arg0->unk4 = sceHVNetfront_Module_27D353B1(arg1);
    }
}

void func_0001808C(struct Unk_func_0001808C_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

void func_00018094(struct Unk_func_00018094_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
}

void func_0001809C(struct Unk_func_0001809C_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
}

void func_000180A4(struct Unk_func_000180A4_0 *arg0, s32 arg1) {
    arg0->unk18 = arg1;
}

void func_000180AC(struct Unk_func_000180AC_0 *arg0, s32 arg1) {
    arg0->unk14 = arg1;
}

void func_000180B4(struct Unk_func_000180B4_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

void func_000180BC(s32 arg0, struct Unk_func_000180BC_1 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000158A4(arg1);
    func_00018168(arg0, arg1->unk0);
    func_0001819C(arg0, arg1->unk4);
    arg1->unk8 = func_000181D0(arg0);
    temp_v0 = func_000181D8(arg0);
    arg1->unkC = temp_v0;
    temp_v0_2 = func_00018FD0(temp_v0);
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_BB5E8F0E(arg1->unk20, temp_v0_2);
    }
    arg1->unk10 = func_000181E0(arg0);
    arg1->unk18 = func_000181E8(arg0);
    arg1->unk14 = func_000181F0(arg0);
    arg1->unk1C = func_000181F8(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018168);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001819C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181D8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181F0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000181F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018200);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000182E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018370);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018414);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_F9401A23);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018514);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_5EBA1D34);

s32 func_00018618(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018620);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018680);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000187C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001890C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018C24);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018C68);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018CFC);

s32 func_00018D70(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018D9C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018F14);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00018FD0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019038);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019108);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019158);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019398);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001946C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000197E8);

s32 func_00019880(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019888);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019A10);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019AAC);

void func_00019CD0(struct Unk_func_00019CD0_0 *arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_65813EA4(arg0->unk0, arg0->unk4, arg1);
}

void func_00019CF4(struct Unk_func_00019CF4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_00019D00(struct Unk_func_00019D00_0 *arg0) {
    arg0->unk0 = func_00009E08();
    arg0->unk4 = func_00009E7C();
}

void func_00019D30(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019D38);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019D78);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019EB0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4C4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4D0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4DC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4E4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4F0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E4FC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E50C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E514);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E51C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E524);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E52C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E530);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E538);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E544);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E550);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E5F8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E5FC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E604);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E60C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00019F84);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A0F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A1AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A3C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A490);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A5BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A72C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A89C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001A8C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AA78);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AB2C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AC2C);

void func_0001ACA4(void) {
}

void func_0001ACAC(void) {
}

void func_0001ACB4(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001ACBC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AD3C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001ADD8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AE7C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AEF8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001AF98);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B1D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B384);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E698);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B4E8);

void func_0001B824(void) {
}

void func_0001B82C(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

void func_0001B848(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B864);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B8BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001B980);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001BC40);

void func_0001C008(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C010);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C458);

void func_0001C500(void) {
}

void func_0001C508(void) {
}

void func_0001C510(void) {
}

void func_0001C518(void) {
}

void func_0001C520(void) {
}

void func_0001C528(void) {
}

void func_0001C530(void *arg0) {
    void *sp0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    struct Unk_func_0001C530_temp_s2 *temp_s2;

    func_0001E058(&D_001358C4);
    func_0001E108((s32) &D_001358C4);
    func_0001F6B0(arg0);
    func_000202C8(arg0);
    func_00022BE8(arg0);
    func_000227B0(arg0);
    func_0001F01C((s32) arg0);
    if (func_00020E54((s32) arg0, 0xB, 0xB) == 0) {
        func_00020FD0((s32) arg0, 0xB);
    }
    temp_v0 = func_000C580C(0, &sp0);
    temp_s2 = arg0 + 0x18;
    temp_a1 = temp_v0;
    if (sp0 == 0x18) {
        temp_s1 = temp_s2->unk10;
        temp_s0 = temp_s2->unk14;
        sceHVNetfront_Module_1A02495A((s32) temp_s2, temp_a1, 0x18);
        temp_s2->unk10 = temp_s1;
        temp_s2->unk14 = temp_s0;
    }
    if (temp_v0 != 0) {
        func_000C5908(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C61C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C710);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C744);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C7E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C88C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C934);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001C990);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001D200);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001D304);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001D408);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001DD8C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001DFE8);

s32 func_0001E058(void *arg0) {
    sceHVNetfront_Module_0F5AA1D5(arg0, 0x14);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E078);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E108);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E19C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E2B4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E514);

void func_0001E5F0(s32 ***arg0, struct Unk_func_0001E5F0_1 *arg1) {
    s32 temp_v1;

    temp_v1 = arg1->unk0;
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001E2B4((s32) arg0, arg1->unk1C, (s32) arg1);
        return;
    case 0x1022:
        func_0001E514((s32) arg0);
        return;
    default:
        func_000D45B0(***arg0, &D_00133BC8)->unk14(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E684);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001E9F8);

void func_0001EABC(s32 ***arg0, struct Unk_func_0001EABC_1 *arg1) {
    s32 temp_v1;

    temp_v1 = arg1->unk0;
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001E684((s32) arg0, arg1->unk1C, (s32) arg1);
        return;
    case 0x1022:
        func_0001E9F8();
        return;
    default:
        func_000D45B0(***arg0, &D_00133BE0)->unk14(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001EB50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001EEC4);

void func_0001EF88(s32 ***arg0, struct Unk_func_0001EF88_1 *arg1) {
    s32 temp_v1;

    temp_v1 = arg1->unk0;
    switch (temp_v1) {                              /* irregular */
    case 0x7:
        func_0001EB50((s32) arg0, arg1->unk1C, (s32) arg1);
        return;
    case 0x1022:
        func_0001EEC4();
        return;
    default:
        func_000D45B0(***arg0, &D_00133BF8)->unk14(arg0, arg1);
        return;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F01C);

void func_0001F18C(void) {
}

void func_0001F194(s32 arg0) {
    D_00133BC8.unk8 = func_0001C934(2, 0x48, func_000AFB7C(arg0, 0));
    D_00133BE0.unk8 = func_0001C934(3, 0x48, func_000AFB7C(arg0, 1));
    D_00133BF8.unk8 = func_0001C934(4, 0x48, func_000AFB7C(arg0, 2));
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F228);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F3A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F500);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F5F0);

M2C_UNK *func_0001F6B0(struct Unk_func_0001F6B0_0 *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000B2848(arg0);
    temp_s3 = func_000B20DC(arg0);
    temp_s4 = func_000B2114(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C10, temp_s2, (s32) &func_0001F5F0);
    M2C_FIELD(&D_00133C10, s32 *, 8) = func_0001C934(6, 0xA0, temp_s3);
    D_00133C10.unkC = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinChoice");
    return &D_00133C10;
}

void func_0001F764(void) {
}

void func_0001F76C(void *arg0) {
    D_00133C10.unk8 = func_0001C934(6, 0xA0, func_000B20DC(arg0));
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001F7A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001FEBC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0001FFB0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020114);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020208);

M2C_UNK *func_000202C8(struct Unk_func_000202C8_0 *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000D122C(arg0);
    temp_s3 = func_000D1070(arg0);
    temp_s4 = func_000D10A8(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C28, temp_s2, (s32) &func_00020208);
    M2C_FIELD(&D_00133C28, s32 *, 8) = func_0001C934(5, 0x60, temp_s3);
    D_00133C28.unkC = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinList");
    return &D_00133C28;
}

void func_0002037C(void) {
}

void func_00020384(void *arg0) {
    D_00133C28.unk8 = func_0001C934(5, 0x60, func_000D1070(arg0));
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000203BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002096C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020AEC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020BA4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020DB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020E54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020F80);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00020FD0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00021048);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00021138);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00021500);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00021D44);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022618);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000226F0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E724);

M2C_UNK *func_000227B0(struct Unk_func_000227B0_0 *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000B7A50(arg0);
    temp_s3 = func_000B79F4(arg0);
    temp_s4 = func_000B7A28(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C58, temp_s2, (s32) &func_000226F0);
    M2C_FIELD(&D_00133C58, s32 *, 8) = func_0001C934(0xD, 0x58, temp_s3);
    D_00133C58.unkC = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinTable");
    return &D_00133C58;
}

void func_00022864(void) {
}

void func_0002286C(void *arg0) {
    D_00133C58.unk8 = func_0001C934(0xD, 0x58, func_000B79F4(arg0));
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000228A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000229DC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022ABC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022B20);

M2C_UNK *func_00022BE8(struct Unk_func_00022BE8_0 *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = func_000BB9D8(arg0);
    temp_s3 = func_000BB80C(arg0);
    temp_s4 = func_000BB844(arg0);
    temp_s2_2 = func_000D4268((s32) arg0, (s32) &D_00133C70, temp_s2, (s32) &func_00022B20);
    M2C_FIELD(&D_00133C70, s32 *, 8) = func_0001C934(7, 0x54, temp_s3);
    D_00133C70.unkC = temp_s4;
    func_000D4428((s32) arg0, temp_s2_2, (s32) "SkinTextBox");
    return &D_00133C70;
}

void func_00022C9C(void) {
}

void func_00022CA4(void *arg0) {
    D_00133C70.unk8 = func_0001C934(7, 0x54, func_000BB80C(arg0));
}

M2C_UNK *func_00022CDC(void) {
    return &D_001358DC;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022CE8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022D24);

void func_00022E24(void) {
    func_00077818();
}

void func_00022E40(void ***arg0, s32 arg1) {
    func_000C9C60((s32) arg0, arg1, M2C_FIELD(**arg0, s32 *, 0x38));
}

s32 func_00022E64(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022E6C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00022FB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000232AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023320);

s32 func_00023778(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023780);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023880);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023978);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000239D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023A08);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023A28);

void func_00023A58(s32 arg0, M2C_UNK arg1) {
    func_00005DBC();
    func_00092A50(arg0, arg1);
    sceHVWWW_Library_62FB650D();
}

void func_00023A9C(void) {
    sceHVWWW_Library_A596909E();
    func_00092B24();
    func_00005DDC();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023AC8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023B0C);

s32 func_00023B7C(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != 0) {
        temp_v0 = func_00023B0C();
        if (temp_v0 != 0) {
            var_s0 = func_0002AF88(temp_v0);
        }
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023BC0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023C10);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023C8C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023D18);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023DC0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023E18);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023EE0);

void func_00023F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00035B88(arg0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00023F64);

void func_00023FC4(s32 arg0) {
    func_000AF940(arg0);
    func_000D0EE8(arg0);
    func_000B1F08(arg0);
    func_000BB6A0(arg0);
    func_000BB9E8((void *) arg0, 0);
    func_000B4160(arg0);
    func_000B7898(arg0);
    M2C_FIELD(M2C_FIELD(((func_000D122C((void *) arg0) * 0xC) + arg0), void **, 0xA8), M2C_UNK **, 0xC) = &D_0011EBBC;
    M2C_FIELD(M2C_FIELD(((func_000B2848((void *) arg0) * 0xC) + arg0), void **, 0xA8), M2C_UNK **, 0xC) = &D_0011EBE0;
    func_00035A7C(arg0);
}

void func_00024074(s32 arg0) {
    func_00035AE4();
    func_000B79B4(arg0);
    func_000B42B0(arg0);
    func_000BB7CC(arg0);
    func_000B209C(arg0);
    func_000D1030(arg0);
    func_000AFB3C(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000240C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024184);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024298);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024308);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024344);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024520);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024590);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024600);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024670);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000246F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024780);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E740);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E748);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E8D4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E8F8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011E944);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EB84);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EBB4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EBBC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EBE0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EC38);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EC3C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EC40);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EC44);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000247B4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024AA4);

s32 func_00024AE8(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (func_00024AA4() != 0) {
        var_v1 = func_000B4C4C(arg0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024B28);

void func_00024B9C(s32 arg0, s32 arg1) {
    if (func_00024AA4() != 0) {
        func_000B4810(arg0, arg1);
        return;
    }
    func_000CBF48((void **) arg0);
}

void func_00024BF0(s32 arg0) {
    func_0002AF88(arg0);
}

void func_00024C0C(void) {
    func_0002841C();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024C28);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00024F8C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025034);

void func_000250C4(void) {
    func_00024F8C();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000250E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025160);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025268);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000252CC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025400);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025430);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000254C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000255D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002564C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000256C8);

M2C_UNK *func_00025790(void *arg0) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    struct Unk_func_00025790_temp_v1 *temp_v1;

    temp_v0 = func_000282D8(arg0);
    temp_v1 = M2C_FIELD(((temp_v0 * 0xC) + arg0), void **, 0xA8);
    temp_s2 = temp_v1->unk8;
    temp_s3 = temp_v1->unkC;
    temp_v0_2 = func_000D4268((s32) arg0, (s32) &D_00133D08, temp_v0, (s32) &func_000256C8);
    D_00133D08.unk8 = temp_s2;
    D_00133D08.unkC = temp_s3;
    func_000D4428((s32) arg0, temp_v0_2, (s32) "PSPPane");
    return &D_00133D08;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025828);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025874);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000258C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025938);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025B54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025BB4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025C78);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025C94);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025CB0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00025D60);

s32 func_00025FD4(void **arg0, struct Unk_func_00025FD4_1 *arg1) {
    void *sp0;
    s32 temp_s1;

    temp_s1 = func_000C9FF4(arg0);
    func_000C9C24((s32 *) arg0, &sp0);
    arg1->unkC = temp_s1;
    func_000C12D0((s32) arg1, &sp0);
    return 1;
}

s32 func_00026030(void) {
    func_00025BB4();
    return 1;
}

s32 func_00026050(s32 arg0) {
    if (func_000C9E10() != 0) {
        func_00025BB4(arg0);
    }
    if (func_00025874(arg0) != 0) {
        func_00025B54(arg0);
    }
    return 1;
}

s32 func_000260A0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000260A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026118);

s32 func_000261C0(s32 arg0) {
    if (func_00025874(arg0) != 0) {
        func_00025B54(arg0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000261F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000263BC);

void func_0002645C(struct Unk_func_0002645C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk4C;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk4C = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002649C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000264F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026548);

s32 *func_00026598(s32 arg0) {
    s32 *temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = sceHVWWW_Library_0E71B25C();
    temp_v0 = sceHVNetfront_Module_6D4EE418(temp_v0_2);
    if (temp_v0 != NULL) {
        sceHVNetfront_Module_1A02495A(*temp_v0, arg0, temp_v0_2);
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000265F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026644);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000266CC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000267CC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026898);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026940);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000269E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026A5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026C5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026CC8);

s32 func_00026DCC(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, -0xA);
    return 1;
}

s32 func_00026DEC(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, 0xA);
    return 1;
}

s32 func_00026E0C(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, -0x5A);
    return 1;
}

s32 func_00026E2C(s32 arg0, s32 arg1) {
    func_00026CC8(arg0, arg1, 0x5A);
    return 1;
}

s32 func_00026E4C(s32 **arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    struct Unk_func_00026E4C_temp_a2 *temp_a2;

    temp_s5 = func_0002855C();
    temp_v0 = func_0002841C(arg0);
    if (((temp_v0 == 0) | (temp_s5 == 0)) == 0) {
        temp_a2 = temp_v0 + 0x948;
        temp_s4 = **arg0;
        if (arg1 != 0) {
            var_s1 = temp_a2->unk1EC;
            var_s0 = (arg2 * temp_a2->unk1FC) / 1000;
        } else {
            var_s0 = temp_a2->unk1E8;
            var_s1 = (arg2 * temp_a2->unk200) / 1000;
        }
        func_000C7E78(temp_s4, 1, temp_a2);
        sceHVWWW_Library_68822481(temp_s5, temp_v0, var_s0, var_s1);
        func_000C7EA0(temp_s4, 1);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026F58);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00026FB4);

s32 func_0002703C(s32 arg0, s32 arg1, s32 arg2, struct Unk_func_0002703C_3 *arg3) {
    s32 temp_s0;

    if (func_000265F4(arg0) != 0) {
        temp_s0 = func_0002855C(arg0);
        sceHVWWW_Library_F32F9DB7(temp_s0, func_0002841C(arg0), arg1, arg2, arg3->unk10, arg3->unk18);
        func_00026644(arg0, 0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000270D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000271E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000272B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027394);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027460);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027560);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027600);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000276A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000276EC);

void func_000277D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 sp4;

    func_0002A518(arg0, &sp0, (s32) &sp4);
    func_000276EC(arg0, arg1, arg2, arg3, sp0, sp4);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027840);

void func_00027890(s32 arg0, struct Unk_func_00027890_1 *arg1) {
    struct Unk_func_00027890_temp_a0 *temp_a0;

    temp_a0 = arg0 + 0x948;
    arg1->unk0 = (s32) (arg1->unk0 - temp_a0->unk1E8);
    arg1->unk4 = (s32) (arg1->unk4 - temp_a0->unk1EC);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000278B8);

s32 func_00027AB4(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027ABC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027D5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00027E44);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000281B8);

void func_00028298(struct Unk_func_00028298_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk38;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk38 = 0;
    }
}

s32 func_000282D8(struct Unk_func_000282D8_0 *arg0) {
    return arg0->unk4D0->unk38->unk18;
}

s32 func_000282E8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x18) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_00028310(struct Unk_func_00028310_0 *arg0) {
    return arg0->unk4D0->unk38 + 0x1C;
}

void func_00028320(struct Unk_func_00028320_0 *arg0, s32 arg1) {
    arg0->unk4D0->unk38->unk8 = arg1;
}

s32 func_00028330(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x38), s32 *, 0x18) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028358);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002841C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002846C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000284BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002850C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002855C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000285B4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028618);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028794);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000287E4);

void func_00028834(struct Unk_func_00028834_0 *arg0, s32 arg1) {
    arg0->unk4D0->unk38->unk34 = arg1;
}

void func_00028844(struct Unk_func_00028844_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00028844_temp_v0 *temp_v0;

    temp_v0 = arg0->unk4D0->unk38;
    temp_v0->unk38 = arg1;
    temp_v0->unk3C = arg2;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028858);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000288A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000289C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028A14);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028AD0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028B54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028C94);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028EAC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028F0C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00028F9C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000290BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002910C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002915C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000291E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029250);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000292A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029318);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002939C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000293EC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000294A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029540);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000295A0);

s32 func_0002963C(s32 arg0) {
    func_000295A0(arg0, 1);
    return 1;
}

s32 func_0002965C(s32 arg0) {
    func_000295A0(arg0, 0);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002967C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002969C);

s32 func_00029908(void ****arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00029908_temp_v0 *temp_v0;

    temp_v0 = func_000CA0B0((s32) arg0, M2C_FIELD(M2C_FIELD(***arg0, void **, 0x4D0), s32 *, 0x3C));
    if (temp_v0->unk18 == 0) {
        func_000CBCF4(arg0);
        temp_v0->unk8 = arg1;
        temp_v0->unkC = arg2;
        func_00028EAC(func_000CBF3C((void **) arg0), 1);
        temp_v0->unk1C = 1;
    }
    func_000CA128((s32 **) arg0);
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000299A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029A54);

s32 func_00029B00(void) {
    return 0;
}

s32 func_00029B08(void) {
    return 0;
}

s32 func_00029B10(void) {
    return 1;
}

s32 func_00029B18(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029B20);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029BAC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029DD8);

void func_00029E78(struct Unk_func_00029E78_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk3C;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk3C = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029EB8);

void func_00029F88(s32 ***arg0) {
    func_000BF15C(***arg0, (s32) arg0, (s32) func_00029F88);
    func_000C9E70(arg0, 0, 0);
    func_000CA758(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00029FDC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A074);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A0C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A13C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A19C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A290);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A350);

void func_0002A458(struct Unk_func_0002A458_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk50;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk50 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A498);

void func_0002A4DC(void) {
    func_000C9E70();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A4F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A518);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A634);

void func_0002A6EC(s32 ***arg0) {
    func_000BF15C(***arg0, (s32) arg0, (s32) func_00029F88);
    func_000BF15C(***arg0, (s32) arg0, (s32) &func_00029FDC);
    func_000CA758(arg0);
}

void func_0002A74C(s32 arg0) {
    func_000CB274();
    func_000CA73C(arg0);
}

void func_0002A778(void) {
    func_000CA758();
}

s32 func_0002A794(struct Unk_func_0002A794_0 *arg0) {
    return arg0->unk4D0->unk50->unk44;
}

s32 func_0002A7A4(struct Unk_func_0002A7A4_0 *arg0) {
    return arg0->unk4D0->unk50;
}

void func_0002A7B0(struct Unk_func_0002A7B0_0 *arg0, s32 arg1) {
    arg0->unk4D0->unk50->unk34 = arg1;
}

s32 func_0002A7C0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x44) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

s32 func_0002A7E8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x50), s32 *, 0x44) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A810);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A864);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A8B8);

s32 func_0002A944(void) {
    func_0002A8B8();
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A964);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002A9D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002AA54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002ACF8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002ADE0);

void func_0002AE9C(struct Unk_func_0002AE9C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk44;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk44 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002AEDC);

s32 func_0002AF28(struct Unk_func_0002AF28_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    struct Unk_func_0002AF28_temp_s1 *temp_s1;

    temp_s1 = arg0->unk4D0->unk44;
    func_000CB520(arg1, arg2);
    temp_v0 = func_000CCE14(arg2, temp_s1->unk18);
    func_0002A8B8(temp_v0);
    func_0002B72C(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002AF88);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002AFD8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B028);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B078);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B0D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B14C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B1AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B1FC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B288);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B350);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B3B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B40C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B558);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B5AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B60C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B678);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B72C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B7D8);

void func_0002B854(s32 arg0, s32 arg1) {
    func_0002B7D8(arg0, 0, arg1);
}

void func_0002B874(s32 arg0, s32 arg1) {
    func_0002B7D8(arg0, 1, arg1);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B894);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B934);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002B9AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002BB1C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002BCC0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002BE80);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002BF2C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002C264);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002C4C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002C71C);

void func_0002CACC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6) {
    if (arg5 < 2U) {
        func_0002C71C(arg0, arg1, arg2, arg3, arg4, (s32) arg5, arg6);
        return;
    }
    func_0002BF2C(arg0, arg1, arg2, arg3, arg4, (s32) arg5, arg6);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002CB00);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002CDF0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002CDF8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002CE84);

void func_0002D43C(struct Unk_func_0002D43C_0 *arg0, s32 arg1) {
    func_0007B340(arg0, arg1);
    arg0->unk8 = 0x64;
    arg0->unk4 = &func_0002CE84;
    arg0->unk30 = 0;
}

void func_0002D478(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D480);

void func_0002D4EC(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D4F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D56C);

s32 func_0002D61C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D624);

void func_0002D720(s32 ***arg0, s32 arg1) {
    if (arg1 != 0) {
        func_000BED5C(***arg0, 0);
        func_000BF908(arg1, 0);
        func_000CA430(arg0, arg1);
        sceHVNetfront_Module_A2F4AC9E(arg1);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D784);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D844);

void func_0002D894(void) {
    func_0002846C();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D8B0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D8F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D918);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002D98C);

void func_0002DB68(void) {
    func_000292A0();
}

void func_0002DB84(s32 ***arg0) {
    func_000BED5C(***arg0, 0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DBAC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DBDC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DCC0);

void func_0002DD1C(void) {
    func_000250C4();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DD38);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DEEC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002DFEC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E0EC);

void func_0002E28C(s32 arg0) {
    func_0002B288(func_000284BC(), arg0);
    func_00013490(func_0002841C(arg0), 0);
    func_00013CFC(func_0002841C(arg0));
    func_000C9644(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E2E8);

void func_0002E3C8(s32 arg0, s32 arg1) {
    func_0002B288(func_000284BC(arg1), arg1);
    func_000C9644(arg0);
}

void func_0002E410(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000CB1F0(arg0, arg2, arg3);
    func_000CB1F0(arg1, arg2, arg3);
    func_00028C94(arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E474);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E4A4);

void func_0002E4C4(s32 arg0, s32 *arg1) {
    s32 temp_v1;

    if (func_000C9DCC() & 0x80) {
        temp_v1 = *M2C_FIELD(M2C_FIELD(func_0002841C(arg0), void **, 0xB54), s32 **, 0xC);
        if (temp_v1 != 0) {
            *arg1 += temp_v1;
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E528);

s32 func_0002E62C(void) {
    s32 **temp_v0;
    s32 var_v1;

    temp_v0 = func_000CA00C();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = **temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E65C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E758);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E854);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E900);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002E990);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002EA74);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002ED04);

void func_0002EE38(s32 arg0) {
    s32 **temp_v0;
    s32 temp_v0_3;
    struct Unk_func_0002EE38_temp_v0_2 *temp_v0_2;

    temp_v0 = func_000CA00C();
    if (temp_v0 != NULL) {
        temp_v0_2 = sceHVNetfront_Module_896E55F6(temp_v0);
        func_0002E900(temp_v0_2);
        sceHVNetfront_Module_C04FADD9((u8 *)temp_v0_2 + 0x14);
        temp_v0_3 = temp_v0_2->unk3C;
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_3);
            temp_v0_2->unk3C = 0;
        }
        sceHVNetfront_Module_B29BE9CE(temp_v0);
        sceHVNetfront_Module_880239D0(temp_v0);
        func_000CA018(arg0, 0);
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002EEC8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002EF38);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F040);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F16C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F298);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F3AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F478);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F598);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F6A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F7A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F834);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002F988);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002FD4C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002FD94);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011ED10);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011ED1C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011ED9C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EDD4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002FDDC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0002FEC8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030118);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030388);

s32 func_000304E0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;
    struct Unk_func_000304E0_temp_v0 *temp_v0;

    if (func_000C9E40(arg0) == 0) {
        temp_v0 = *arg0;
        temp_a2 = temp_v0->unk54;
        var_v1 = M2C_FIELD(M2C_FIELD(((temp_a2 * 0xC) + *temp_v0->unk0), void **, 0xA8), s32 (**)(void **, s32, s32), 0x14)(arg0, arg4, temp_a2);
    } else {
        var_v1 = 0;
        if (func_000B2858((s32) arg0) & 4) {
            if (func_000B2AF4((s32) arg0) != 0) {
                var_v0 = func_000D223C(func_000B2970((s32) arg0));
            } else {
                var_v0 = func_000B2778((s32) arg0);
            }
            var_v1 = func_00030388((s32) arg0, arg1, arg2, arg3, var_v0, 1, arg4);
        }
    }
    return var_v1;
}

s32 func_000305E8(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;
    struct Unk_func_000305E8_temp_v0 *temp_v0;

    if (func_000C9E40(arg0) == 0) {
        temp_v0 = *arg0;
        temp_a2 = temp_v0->unk54;
        var_v1 = M2C_FIELD(M2C_FIELD(((temp_a2 * 0xC) + *temp_v0->unk0), void **, 0xA8), s32 (**)(void **, s32, s32), 0x14)(arg0, arg4, temp_a2);
    } else {
        var_v1 = 0;
        if (func_000B2858((s32) arg0) & 4) {
            if (func_000B2AF4((s32) arg0) != 0) {
                var_v0 = func_000D223C(func_000B2970((s32) arg0));
            } else {
                var_v0 = func_000B2778((s32) arg0);
            }
            var_v1 = func_00030388((s32) arg0, arg1, arg2, arg3, var_v0, 0, arg4);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000306F0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000307E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000308D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000309B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030ACC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030BEC);

void func_00030CE8(void) {
    func_000306F0();
}

void func_00030D04(void) {
    func_000307E8();
}

void func_00030D20(void) {
    func_000308D0();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030D3C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030E28);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00030F88);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000310C8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00031214);

s32 func_000313A0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000313A8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000316DC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000317D8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00031898);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000319E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00031AE4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00031E54);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032008);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032124);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032208);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032274);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000322E0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003234C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000323DC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000324C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032630);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000327C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000328AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032968);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032D10);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00032DB0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033094);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000333AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033488);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000336A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003386C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003391C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000339D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033A70);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033BB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033D94);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00033F50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034250);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034310);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034394);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000343C0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034780);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034A38);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034C6C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034C98);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034D1C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034F04);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034F24);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034F48);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00034FE0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035088);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000350AC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000350E0);

void func_00035104(s32 arg0) {
    func_000C9644(arg0);
}

void func_00035120(void) {
    func_000CAD58();
}

s32 func_0003513C(void) {
    return 0;
}

void func_00035144(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003514C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000352D4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035498);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035684);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000357B4);

s32 func_00035A20(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035A28);

void func_00035A44(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

void func_00035A64(void) {
}

void func_00035A6C(void) {
}

void func_00035A74(void) {
}

void func_00035A7C(s32 arg0) {
    func_00029DD8(arg0);
    func_000369F4(arg0);
    func_000281B8(arg0);
    func_00035FB4(arg0);
    func_000263BC(arg0);
    func_0002ADE0(arg0, 1);
    func_0002A350(arg0);
    func_00028320((void *) arg0, (s32) &D_0011ED10);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035AE4);

s32 func_00035B38(void **arg0) {
    return func_000C9EE4(arg0) == (s32) &func_000324C4;
}

void func_00035B64(void) {
    func_000CA00C(func_000CA00C());
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035B88);

s32 func_00035F18(void) {
    return 1;
}

s32 func_00035F20(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035F28);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF28);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF2C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00035FB4);

void func_00036054(struct Unk_func_00036054_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk40;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk40 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036094);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000360F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003613C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003615C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003617C);

s32 func_000362B4(void) {
    return 1;
}

s32 func_000362BC(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000362C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000363A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036454);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000366B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036718);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036834);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000369F4);

void func_00036A94(struct Unk_func_00036A94_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4D0->unk48;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0);
        arg0->unk4D0->unk48 = 0;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036AD4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036B50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036BA0);

s32 func_00036BF4(struct Unk_func_00036BF4_0 *arg0) {
    return arg0->unk4D0->unk48->unk18;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036C04);

void func_00036C3C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 4)();
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036C5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036D00);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036D44);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00036D98);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_18F4C8FC);

void sceHVNetfront_Module_DFCBF9BC(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_7EC69C94);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_4AF43191);

s32 sceHVNetfront_Module_9D42259B(struct Unk_vt_sceHVNetfront_Module_9D42259B_arg0 **arg0) {
    return (*arg0)->unk8;
}

s32 func_00036FCC(struct Unk_vt_func_00036FCC_arg0 **arg0) {
    return (*arg0)->unkC;
}

s32 func_00036FD8(struct Unk_vt_func_00036FD8_arg0 **arg0) {
    return (*arg0)->unk1C;
}

s32 sceHVNetfront_Module_BA0F8BF7(struct Unk_vt_sceHVNetfront_Module_BA0F8BF7_arg0 **arg0) {
    return (*arg0)->unk10;
}

s32 sceHVNetfront_Module_6C319E19(struct Unk_vt_sceHVNetfront_Module_6C319E19_arg0 **arg0) {
    return (*arg0)->unk14;
}

s32 func_00036FFC(struct Unk_vt_func_00036FFC_arg0 **arg0) {
    return (*arg0)->unk4;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037008);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037100);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_D091BFB4);

void sceHVNetfront_Module_6F26FEF5(s32 **arg0, s32 arg1) {
    s32 *temp_a0;

    temp_a0 = *arg0;
    if ((arg1 > 0) && (M2C_FIELD(temp_a0, s32 *, 8) != 1)) {
        sceHVNetfront_Module_08549708(M2C_FIELD(temp_a0, s32 *, 0x64));
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000372DC(s32 **arg0, s32 arg1, s32 arg2) {
    void *temp_s1;

    temp_s1 = sceHVNetfront_Module_D091BFB4(arg0, arg1);
    func_0003BABC((s32) temp_s1, sceHVNetfront_Module_D091BFB4(arg0, arg2));
    sceHVNetfront_Module_6F26FEF5(arg0, arg2);
    sceHVNetfront_Module_6F26FEF5(arg0, arg1);
}

void sceHVNetfront_Module_CC51DF45(void **arg0, s32 arg1) {
    s32 var_a1;
    struct Unk_sceHVNetfront_Module_CC51DF45_temp_a0 *temp_a0;
    void *var_a0;

    var_a1 = arg1;
    temp_a0 = *arg0;
    if ((var_a1 <= 0) || (var_a1 <<= 6, (temp_a0->unk8 == 1))) {
        var_a0 = (u8 *)temp_a0 + 0x24;
    } else {
        var_a0 = (*temp_a0->unk64 + var_a1) - 0x40;
    }
    sceHVNetfront_Module_90958874(var_a0, var_a1);
}

s32 sceHVNetfront_Module_30FFB4C9(s32 **arg0) {
    s32 var_s2;
    s32 var_s3;
    struct Unk_sceHVNetfront_Module_30FFB4C9_temp_v0 *temp_v0;
    struct Unk_sceHVNetfront_Module_30FFB4C9_temp_v0_2 *temp_v0_2;

    var_s3 = 1;
    var_s2 = 0;
    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    if (temp_v0->unk8 > 0) {
        do {
            temp_v0_2 = sceHVNetfront_Module_D091BFB4(arg0, var_s2);
            if (temp_v0_2->unk10 & 4) {
                var_s3 = (func_0003BE9C(temp_v0_2, M2C_FIELD(((temp_v0_2->unk8 * 4) + temp_v0->unk0), s32 *, 0x1C)) == 0) ? 0 : var_s3;
            }
            sceHVNetfront_Module_6F26FEF5(arg0, var_s2);
            var_s2 += 1;
        } while (var_s2 < temp_v0->unk8);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s3;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037458);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_5ECEBC07);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_BBD560F1);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_115D847D);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037A24);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037B14);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037BC4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037C60);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037CF8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037D54);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF48);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF58);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF68);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EF78);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EFB0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011EFB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037DB0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037ED0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00037F5C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00038048);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000380E0);

void func_00038160(struct Unk_func_00038160_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_a3;
    s32 var_a6;
    s32 var_a7;
    s32 var_t4;

    var_a6 = arg0->unk0;
    var_t4 = arg0->unk4;
    var_a3 = var_a6 + arg0->unk8;
    var_a7 = var_t4 + arg0->unkC;
    if (arg1 != arg3) {
        var_a6 = (s32) (var_a6 * arg3) / arg1;
        var_a3 = ((s32) ((var_a3 - 1) * arg3) / arg1) + 1;
    }
    if (arg2 != arg4) {
        var_t4 = (s32) (var_t4 * arg4) / arg2;
        var_a7 = ((s32) ((var_a7 - 1) * arg4) / arg2) + 1;
    }
    sceHVNetfront_Module_754AA115((s32) arg0, var_a6, var_t4, var_a3, var_a7);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00038210);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00038734);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000387BC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00038B64);

s32 func_0003908C(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039094);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000391B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039274);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000392C8);

s32 func_00039454(s32 **arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_D5A24BD1(sceHVNetfront_Module_896E55F6(arg0) + 0x24, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000394A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_34CDE779);

void sceHVNetfront_Module_B642A9C7(void) {
}

void sceHVNetfront_Module_4B6F7563(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_19553EDD(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

void sceHVNetfront_Module_E5842D1C(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_9AA96525(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

void func_00039624(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003962C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039770);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000397C0);

void func_00039848(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039850);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_000398EC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039904);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039AA4);

void func_00039B10(s32 **arg0) {
    struct Unk_func_00039B10_temp_v0 *temp_v0;
    struct Unk_func_00039B10_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk24;
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk18->unk1C = temp_v0;
        sceHVNetfront_Module_09FA691C(temp_v0_2);
        sceHVNetfront_Module_A2F4AC9E((s32) temp_v0->unk24);
        temp_v0->unk24 = NULL;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039B74);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_00039C74);

s32 func_0003A3D8(s32 **arg0, s32 **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_v0;
    struct Unk_func_0003A3D8_temp_v0_2 *temp_v0_2;
    struct Unk_func_0003A3D8_temp_v0_3 *temp_v0_3;

    temp_v0_2 = sceHVNetfront_Module_896E55F6(arg0);
    temp_v0_2->unk4 = arg1;
    temp_v0 = func_00039C74((s32) temp_v0_2, arg2, arg3, arg4, arg5, arg6);
    if ((temp_v0 & 1) && (M2C_FIELD(*arg1, s32 *, 8) == 1)) {
        temp_v0_3 = sceHVNetfront_Module_D091BFB4(arg1, 0);
        temp_v0_3->unk10 = (s32) (temp_v0_3->unk10 | 4);
        sceHVNetfront_Module_6F26FEF5(arg1, 0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A4B4);

s32 func_0003A5B0(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A5B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_B8A3F5EA);

void sceHVNetfront_Module_78614BE7(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A62C);

void func_0003A678(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A680);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A69C);

void func_0003A6B8(s32 arg0) {
    png_set_filler(arg0, 0, 0);
}

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F064);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003A6D8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AA10);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AA74);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AAD0);

void func_0003ABF0(void) {
    func_000F503C()->unk20 = 5;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AC14);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003ADB8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AE00);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AF64);

s32 func_0003AFA0(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 8U) {
        var_v1 = sceHVNetfront_Module_5D1D77DA(arg0, (s32) &D_0011F064, 8) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003AFE0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B0B8);

void func_0003B16C(s32 **arg0) {
    struct Unk_func_0003B16C_temp_v0 *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    func_0003ADB8(temp_v0);
    if (temp_v0->unkA4 != 0) {
        func_0003AF64(temp_v0);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B1C8);

s32 func_0003B344(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B34C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_56DB958B);

void sceHVNetfront_Module_77986A50(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B3C0);

void func_0003B4D8(s32 **arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0xB0) = 1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003B50C(s32 **arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(arg0), s32 *, 0xB4) = 1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003B540(void) {
}

void func_0003B548(void) {
}

void func_0003B550(void) {
}

void sceHVNetfront_Module_A606F102(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_FB59447A(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B590);

void sceHVNetfront_Module_58F4BEAC(s32 *arg0) {
    *arg0 = 0;
}

void sceHVNetfront_Module_7C778057(void) {
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_8CA61859);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_90958874);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F160);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_52F39350);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B69C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B6E8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_1805333D);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_661699B9);

void func_0003B820(struct Unk_func_0003B820_0 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_s1 = arg0->unk0;
    if ((arg0->unk10 & 3) == 1) {
        temp_v0 = arg0->unk34;
        if (temp_v0 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0);
        }
        temp_v0_2 = arg0->unk38;
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_2);
        }
        temp_v0_3 = arg0->unk3C;
        if (temp_v0_3 != 0) {
            sceHVNetfront_Module_0D525122(temp_v0_3);
        }
    }
    sceHVNetfront_Module_8CA61859(arg0, temp_s1);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B8A4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_F26EE3F7);

void sceHVNetfront_Module_9FDE9873(struct Unk_sceHVNetfront_Module_9FDE9873_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((arg0->unk10 & 3) == 1) {
        sceHVNetfront_Module_08549708(arg0->unk34);
        temp_v0 = arg0->unk38;
        if (temp_v0 != 0) {
            sceHVNetfront_Module_08549708(temp_v0);
        }
        temp_v0_2 = arg0->unk3C;
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_08549708(temp_v0_2);
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003B9F0);

void func_0003BA64(struct Unk_func_0003BA64_0 *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = arg0->unk4->unk10;
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void func_0003BA90(struct Unk_func_0003BA90_0 *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = arg0->unk4->unk14;
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003BABC);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003BB90);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003BD40);

void func_0003BE70(struct Unk_func_0003BE70_0 *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = arg0->unk4->unk24;
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003BE9C);

void func_0003BF24(struct Unk_func_0003BF24_0 *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = arg0->unk4->unk2C;
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003BF50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_C9A6CC1B);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_C2595823);

s32 func_0003C2B8(struct Unk_func_0003C2B8_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk10, 4, 1);
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003C2C4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003C374);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003C42C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003C888);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003CA50);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003CB78);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003CCF0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003D2E4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003D3F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003D564);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_823748DE);

void func_0003D690(void) {
}

s32 func_0003D698(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003D6A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003D948);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DA90);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DB9C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DCA4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DCF8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DD40);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003DE5C);

void func_0003E444(struct Unk_func_0003E444_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    arg0->unk0 = 0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
    }
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E484);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E510);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F354);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F388);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E578);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E6D0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E7B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E8B8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E8F4);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003E9C0);

s32 func_0003EB14(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_v0 = func_0003E484(arg3, &sp0);
    if ((temp_v0 != 0) && (temp_a3 = M2C_FIELD(temp_v0, s32 *, 0), (temp_a3 != 0)) && (temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 4), (temp_v0_2 != 0))) {
        var_s1 = func_00019AAC(arg0, arg1, arg2, temp_a3, temp_v0_2);
        func_0003E510(arg3, sp0);
        func_0003E6D0(arg3);
    } else {
        var_s1 = (arg0 == 0) ? 0 : -1;
        if (arg3 == D_00130F80) {
            var_s1 = D_00130F84;
        }
        func_0003E510(arg3, sp0);
    }
    D_00130F80 = arg3;
    D_00130F84 = var_s1;
    return var_s1;
}

void func_0003EBF8(s32 arg0) {
    if (D_00130F80 == arg0) {
        D_00130F80 = -1;
        D_00130F84 = -1;
    }
}

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003EC1C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3C8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3CC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3D0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3D4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3D8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3DC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3E0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3E4);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3E8);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3EC);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3F0);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F3F8);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003EE40);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003F220);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003F28C);

INCLUDE_ASM("nonmatchings/netfront_0097D4", func_0003F544);

void func_0003F56C(s32 **arg0) {
    sceHVNetfront_Module_896E55F6(arg0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003F598(void) {
}

s32 func_0003F5A0(void) {
    return 0;
}

void func_0003F5A8(void) {
}

s32 func_0003F5B0(void) {
    return 0;
}

s32 func_0003F5B8(void) {
    return 1;
}

void func_0003F5C0(void) {
}

s32 func_0003F5C8(void) {
    return 0;
}

s32 func_0003F5D0(void) {
    return -5;
}

s32 func_0003F5D8(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F440);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F444);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F464);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F46C);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F478);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F488);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F490);

INCLUDE_RODATA("nonmatchings/netfront_0097D4", D_0011F4A0);

INCLUDE_ASM("nonmatchings/netfront_0097D4", sceHVNetfront_Module_3D7606EA);

