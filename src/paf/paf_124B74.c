#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 func_00124B74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_001257F0(arg0, arg1, arg2, arg3);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xD0)(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    D_001A7EE0 = (((s32) D_001A7EE0 ^ arg0) == 0) ? NULL : D_001A7EE0;
    return 0;
}
#endif

s32 func_00124BD8(void) {
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD8B4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD978);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000C8ED4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9040);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9124);
#endif

#if FW_VERSION == 282
s32 func_00124BE0(struct Unk_func_00124BE0_0 *arg0) {
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
    func_0012592C((s32) temp_s0, 0x108, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    func_0012592C((s32) temp_s0, 0x1A, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    return 0;
}

s32 func_00124CA4(struct Unk_func_00124CA4_0 *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}
#endif

s32 func_00124CD8(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9190);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9274);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C92A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124CE0);
#else
s32 func_00124CE0(struct Unk_func_00124CE0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 7;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124D28);
#else
s32 func_00124D28(struct Unk_func_00124D28_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124D70);
#else
s32 func_00124D70(struct Unk_func_00124D70_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124DA0);
#else
s32 func_00124DA0(struct Unk_func_00124DA0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_00124DD0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00124EB8);

s32 func_00124F0C(void) {
    return 0;
}

s32 func_00124F14(void) {
    return 0;
}

s32 func_00124F1C(void) {
    return 0;
}

s32 func_00124F24(void) {
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CDC00);
#endif

#if FW_VERSION == 282
s32 func_00124F2C(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124F34);
#endif

#if FW_VERSION == 282
s32 func_00124F34(struct Unk_func_00124F34_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124F64);
#endif

#if FW_VERSION == 282
s32 func_00124F64(struct Unk_func_00124F64_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124F94);
#endif

#if FW_VERSION == 282
s32 func_00124F94(struct Unk_func_00124F94_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124FC4);
#endif

#if FW_VERSION == 282
s32 func_00124FC4(struct Unk_func_00124FC4_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00124FF4);
#endif

#if FW_VERSION == 282
s32 func_00124FF4(struct Unk_func_00124FF4_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00125024);
#endif

#if FW_VERSION == 282
s32 func_00125024(struct Unk_func_00125024_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_0012592C(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CDD28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CDDCC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CDF5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000C961C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9694);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00125054);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001250F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125288);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_001252D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012549C);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D43C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE200);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011FD14);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011D514_v151);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011F394);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE4C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9AA0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9CE4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_0012552C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001257F0);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012592C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D484);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012597C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011F3CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00131A7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001259CC);
#else
s32 func_001259CC(s32 arg0) {
    return (D_001A7EE0->unkE0(D_001A7EE0, arg0) == 0) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125A04);

s32 func_00125A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = D_001A7EE0->unkEC(D_001A7EE0, arg0);
    D_001A7EE0->unkE4(D_001A7EE0, arg0, arg1, arg2, 1);
    return D_001A7EE0->unkEC(D_001A7EE0, arg0) - temp_s4;
}

s32 func_00125B30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000C9FC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE918);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE940);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE95C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE998);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CE9E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEA28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEA48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEAC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEAE8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEBB0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEC94);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CECF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEF34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEF6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF0BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF0E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF154);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF1AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF200);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF3A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF418);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF448);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA04C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA0A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA0E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA168);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA1FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA290);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA2D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA3D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA40C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA4D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA590);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA64C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA734);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CA804);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CABF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CAC50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CAE34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CAE90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CAF54);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CAFE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB0A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB3A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB448);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB4BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB778);
#endif

#if FW_VERSION == 282
s32 func_00125BD0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= arg2) ? 0 : -1;
}

s16 func_00125C48(u8 *arg0) {
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

void func_00125C70(s32 arg0, s32 arg1) {
    func_00125C8C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125C8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125CC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125D10);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125D58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125D78);

void func_00125DF4(s32 arg0, M2C_UNK arg1) {
    func_00125D78(4, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125E18);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125EE0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00125FC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126028);

void func_00126264(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_00126028(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012629C);

void func_001263EC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_0012629C((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126414);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126484);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001264DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126530);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001266D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126748);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126778);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126944);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012698C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001269B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF6A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF79C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF7D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF8EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF92C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF974);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFE98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFEA0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFEE8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFF6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0100);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0160);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D01F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0238);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D02A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0550);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D05A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D05C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D06C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D07CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D07EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1388);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1500);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D15AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D16FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D17F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D18A4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D19AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1A1C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1AA8);
#endif

#if FW_VERSION == 282
s32 func_001269B8(void) {
    func_00127218();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CB86C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CBA28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CBA78);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CBC50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CBCB4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CBD74);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CC63C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CC658);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001269D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126ACC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126B04);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126C1C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126C5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00126CA4);

void func_001271C8(void) {
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_001271D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00127218);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CC7A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCA28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCADC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCBC0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCC60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCCF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CCDD0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD168);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD20C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD250);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD478);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD6A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CD70C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CED48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CEEFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF054);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF240);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF374);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF43C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF5C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF66C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF730);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_0012729C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127430);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127490);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127520);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127568);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001275D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127880);

s32 func_001278D0(void) {
    return ~func_00127880();
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_001278F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001279F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127AFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00127B1C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001286B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128830);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001288DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128A2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128B20);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128BD4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128CDC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128D4C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00128DD8);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D4BC);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D4CC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011F3FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00131AAC);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_00131BA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D4EC);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D5F4);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D5F8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011F510);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D600);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D608);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D614);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D618);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019D658);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1C3C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2028);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2040);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D20E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D213C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2190);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D22CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D22FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2320);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D23E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2464);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D24DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D256C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2680);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D26F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2730);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D280C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2AC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2B98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2C2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2C64);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3044);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D30CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3144);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D31A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D32B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D33E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3440);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D34C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D34E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D36D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D37E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3840);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D389C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3938);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3994);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D39F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3A4C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3AB0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3AFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3C90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3F1C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3F88);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4180);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D41CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D428C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D42E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4354);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D440C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D45BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4880);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4930);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D49D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4A48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4A8C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2DC0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4B40_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4C74);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4DF0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4E48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4E9C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4F50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4FC0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D512C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5350);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5478);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D554C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5954);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5AF0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5C44);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5CC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5DAC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5E5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5F2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5FC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6094);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D60F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6110);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D61FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D62AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6328);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6394);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D63F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D660C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D67D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6834);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6904);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6A50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6B5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6C98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6E3C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D703C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7094);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D751C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7C60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7EF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8068);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8934);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D897C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8AFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8C78);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8CCC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8D08);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8D44);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8D88);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8FB4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D914C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D9250);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D95D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D9978);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D9CD8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D9D8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA104);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA338);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA4C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA4DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA578);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAC90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAE34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAF08);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAFFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB1C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB4C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB55C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB624);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB744);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB838);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB944);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB98C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB9B4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBAC4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000D9FD8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBD58_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBE6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBF28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC040);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC0A4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC334);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC570);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC5F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC9C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCA84);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCD0C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCE50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCFD0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD040);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD1AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD1DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD2CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD30C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000CF960);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFEF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000CFF2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0010);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0088);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0124);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D02DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0320);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D036C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D045C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0534);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0604);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0704);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D08D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D095C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D09E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D0BB8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1034);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D11A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D12AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1340);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1AD0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1B90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1C40);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1D04);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D1EE8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2040);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D20BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D21B4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D21F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D24B4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2658);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D26EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2790);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2888);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2920);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D29B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2A54);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2AF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2B68);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D2DE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D31B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D324C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D354C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D35C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D36F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3798);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D382C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3968);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D3BE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4018);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4124);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D41DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D429C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D42F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D43E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4584);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D47B4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4864);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D48D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D49F0_v100);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4AB0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4C58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D4FB8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5190);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D52C4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D59C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5C5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5E88);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D5F24);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6084);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6178);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D62C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D63E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D64D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D65A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D65DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D679C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6870);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6968);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6A68);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6B7C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D6E4C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D70C4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7150);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7274);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D746C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D75D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7794);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D79C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7CD8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D7D98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8434);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D8F40);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D927C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000D94E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA154);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA200);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA450);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA6B0_v100);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA720);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA784);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA7E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DA854);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAB90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAD7C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DAF9C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB494);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DB9AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBEE8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBFFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC53C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DC89C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCB58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCB8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DCC70);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD6D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD974);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDAC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDC48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDEF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE2E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE3B8_v100);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE488);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE63C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE768);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE8D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE950);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE9C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DEB34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DEF48);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF11C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF234);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF48C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF52C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF8E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFCAC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFD98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E03C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0484);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0864);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0A84);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0C7C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0D14);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0FE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1070);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E11E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E126C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00128F6C);

void func_00129358(void) {
    D_001E0ECC.unk41C2 = 0;
    D_001E0ECC.unkDE = 0;
    D_001E0ECC.unkDC = 0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129370);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129414);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012946C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001294C0);

void func_001295FC(void) {
    func_0012962C();
    D_001E0ECC.unk15F3 = 0;
    D_001E0ECC.unk4138 = 0;
    D_001E0ECC.unk417C = 0;
}

void func_0012962C(void) {
    D_001E0ECC.unk4110 = 0;
    D_001E0ECC.unk410F = 0;
    D_001E0ECC.unk410E = 0;
    D_001E0ECC.unk410D = 0;
    D_001E0ECC.unk410C = 0;
    D_001E0ECC.unk4111 = 0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129650);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129714);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129794);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012980C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012989C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001299B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129A24);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129A60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129B3C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129DF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129EC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129F5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00129F94);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A374);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A3FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A474);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A4D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A5E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A710);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A770);

void func_0012A7F8(void) {
    D_001E0ECC.unkD8 = -1;
    D_001E0ECC.unk100 = -1;
    D_001E0ECC.unkE2 = -1;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012A814);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AA04);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AB14);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AB70);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012ABCC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AC68);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012ACC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AD20);

s32 func_0012AD7C(void) {
    s32 temp_v0;

    temp_v0 = func_00127568((s32) &D_001E0ECC, (s32) &D_001E8ED8, D_001E0ECC.unk14->unk14, (s32) (s16) (D_001E0ECC.unk14->unk26 * (D_001E0ECC.unk14->unk2C + 1)));
    D_001E0ECC.unkCC = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012ADE0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AE2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012AFC0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B24C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B2B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B4B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B4FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B5BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B618);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B684);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B73C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012B8EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BBB0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BC60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BD08);

s32 func_0012BD78(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0012BC60() != -1) {
        var_s0 = 0;
        func_0012B4FC(0, (s32) &D_001E504A);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BDBC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BE70);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012BFA4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C120);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C178);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C1CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C280);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C2F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C45C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C680);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C7A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012C87C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012CC84);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012CE20);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012CF74);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012CFF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D0DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D18C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D25C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D2F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D3C4);

void func_0012D424(s32 arg0) {
    func_00125D58(arg0, 0x24);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D440);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D52C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D5DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D658);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D6C4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D724);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012D93C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DB04);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DB64);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DC34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DD80);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DE8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012DFC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012E16C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012E36C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012E3C4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012E84C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012EF90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012F228);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012F398);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012FC64);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012FCAC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012FE2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0012FFA8);

void func_0012FFFC(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 3;
    func_001300B8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_00130038(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 7;
    func_001300B8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_00130074(s16 arg0, s16 arg1, s16 arg2) {
    D_001E0ECC.unk40FA = 5;
    D_001E0ECC.unk42BE = 0;
    func_001300B8(2, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_001300B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001302E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013047C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00130580);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00130900);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00130CA8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00131008);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001310BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00131434);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00131668);

void func_001317F0(s32 arg0) {
    func_0013180C(arg0, 0);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013180C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001318A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00131FC0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132164);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132238);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013232C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001324F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001327F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013288C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132954);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132A74);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132B68);

s32 func_00132C74(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00132CBC(u8 *arg0, s32 arg1) {
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

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132CE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00132DF4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133088);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013319C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133258);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133370);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001333D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133664);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001338A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133924);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133CF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00133DB4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013403C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134180);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134300);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134370);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001344DC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013450C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001345FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013463C);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00134730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD424);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD464);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD4B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD4E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD6E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD7D4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD834);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DD8F8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DBC90);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDA10_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDB64);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDBA8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDCCC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDDDC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDE4C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DDEC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE000);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DE8AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF154);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF234);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF63C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF9B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFA38);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFDEC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFE24);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFE60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFF9C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E00CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0248);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0280);
#endif

#if FW_VERSION == 282
void func_00134730(void) {
    func_00125D58((s32) &D_001E208C, 0x14);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E13F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E143C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1498);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E14E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E17FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1954);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1A00);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1B60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1CFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1EBC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1F10);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E20A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E225C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E2354);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E23D8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E25E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E33B8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E4104);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E423C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E487C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E4DDC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E4E94);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5400);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E547C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5518);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E572C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5910);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5B58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5BC8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00134754);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134794);

s32 func_001347E0(void) {
    s32 temp_v0;

    func_00134A14();
    temp_v0 = func_00134818();
    func_00134B04(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134818);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134A14);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134B04);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134B64);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134C28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134D40);

void func_00134E94(s16 arg0) {
    func_00134754();
    if (arg0 == 0) {
        func_00134ED8();
    } else {
        func_00134FFC();
    }
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134ED8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00134FFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013510C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013517C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001351F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00135330);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00135BDC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00136484);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00136564);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013696C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00136CE0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00136D68);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013711C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137154);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137190);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001372CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001373FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137578);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001375B0);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DAF0);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DAF8);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DB2C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011FA74);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DB64);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DB70);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011FAB8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DBA8);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DBB4);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DBD8);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DBE4);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DBEC);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DC00);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DC10);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0011FB2C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_124B74", D_001321DC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DC1C);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DC24);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DC44);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019DE38);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019E02C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019E328);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019E398);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019E3B8);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019E414);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_001212C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00133970);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_00134B00);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_00134B70);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_00134B90);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_00134BD0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019EE58);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_0019F3B0);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0614);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00135080);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B08);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B10);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00122A28);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B18);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B20);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_00122A44);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B34);
#endif

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B3C);

INCLUDE_RODATA("nonmatchings/paf_124B74", D_001A0B78);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E02CC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E03B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E03F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0460);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E04D0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0540);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E05EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0730);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E07F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0850);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E09EC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0A58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0C6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0D78);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0D8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0DE4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0E74);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0EEC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0F20);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5C34);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5D5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5DD4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5E7C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5F28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E5FD4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E610C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E629C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6378);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E63E8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6630);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E66C8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6A2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6C2C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6C60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6CD4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6D88);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6E18);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6E60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6EA8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6ECC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6EF8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E6F68);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7080);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E71F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E727C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E72F0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7348);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E73A0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7444);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E756C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7614);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E76AC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7750);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E77A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001375FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001376E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137724);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137790);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137800);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137870);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013791C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137A60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137B28);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137B80);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137D1C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137D88);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00137F9C);

void func_001380A8(void) {
    D_001E2988->unk8 = (u16) D_001E2988->unk4;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_001380BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138114);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001381A4);

void func_0013821C(void) {
    D_001E0ECC.unk417E = 0;
    D_001E0ECC.unk3E88 = 0;
    D_001E0ECC.unk3E86 = 0;
    D_001E0ECC.unk3F76 = 0;
    func_00138298();
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138250);

void func_00138298(void) {
    D_001E7C64 = 0;
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_001382A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0F90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E0FC8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1048);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E113C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1190);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E11F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1238);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1278);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E12E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1378);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E13E8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DF6D8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1458_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E14BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E14FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1514);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E151C);
#endif

#if FW_VERSION == 282
void func_001382A4(void) {
    func_0013D5FC();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7808);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001382C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001382F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138378);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013846C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001384C0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138528);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138568);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001385A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138610);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001386A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138718);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138788);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001387EC);

s32 func_0013882C(void) {
    return ((D_001E50B0 ^ 2) == 0) ? 0 : -1;
}

void func_00138844(void) {
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013884C);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00138908);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E160C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E168C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E175C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E17B0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000DFA70);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E17F0_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E18A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1954);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E19F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1A30);
#endif

#if FW_VERSION == 282
void func_00138908(void) {
    D_001E0ECC.unk18D0 = (u16) D_001E0ECC.unk1ABC->unk2;
    func_00138D60();
    func_001389BC();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7988);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7A54);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7B58);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7BD8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7C4C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7D8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7EAC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7F6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E7FD0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_0013893C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001389BC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138A8C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138AE0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138B20);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138BD8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138C84);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138D24);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138D60);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00138E10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1AFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1B98);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1BF0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1C24);
#endif

#if FW_VERSION == 282
void func_00138E10(void) {
    func_00138F54();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E80F8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E81E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8254);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8298);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00138E2C);

void func_00138EC8(void) {
    if (D_001E279A != -1) {
        if (D_001E279A != -2) {
            func_001391B8();
        } else {
            func_00138FA8();
        }
    } else {
        func_0013918C();
    }
}

void func_00138F20(void) {
    if (func_00139170() != 0) {

    } else {
        func_00138F54();
    }
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138F54);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_00138FA8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1C9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8340);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00138FCC);
#endif

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139170);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_0013918C);
#else
void func_0013918C(void) {
    func_0013934C();
    func_00139438();
    func_001393F4();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001391B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1EB4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1F50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1F5C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E1FA0);
#endif

#if FW_VERSION == 282
void func_001391B8(void) {
    func_0013934C();
    func_00138FCC();
    func_001393F4();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8620);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8754);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8784);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8800);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_001391E4);

void func_00139280(s16 arg0) {
    D_001E50C0 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013928C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001392D0);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00139328);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E201C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E20C4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E2108);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E215C);
#endif

#if FW_VERSION == 282
void func_00139328(void) {
    func_00139A60();
    func_00139B10();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E88E4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E89B0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8A38);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8AA8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_0013934C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001393F4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139438);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013948C);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00139518);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E2204);
#endif

#if FW_VERSION == 282
void func_00139518(void) {
    func_00139B6C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8B7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00139534);

void func_001395D8(void) {
    func_00139534(0);
}

void func_001395F4(void) {
    func_00139534(1);
}

void func_00139610(s16 arg0) {
    func_0013B6E8(arg0);
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013962C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013967C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001396B4);
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_001396EC);
#endif

#if FW_VERSION == 282
void func_001396EC(void) {
    func_0013B844(0);
}
#else
INCLUDE_ASM("nonmatchings/paf_124B74", func_00139708);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E22E0);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E22FC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E234C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E2384);
#endif

#if FW_VERSION == 282
void func_00139708(void) {
    func_0013B844(1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8CC4);

INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8CFC);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139724);
#endif

#if FW_VERSION == 282
void func_00139724(void) {
    struct Unk_func_00139724_temp_s0 *temp_s0;

    temp_s0 = D_001E2988;
    temp_s0->unk28 = func_00139758(temp_s0->unk2C, (s32) temp_s0->unk4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_124B74", func_000E8DA8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_124B74", func_00139758);

INCLUDE_ASM("nonmatchings/paf_124B74", func_001399A8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139A0C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139A60);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139B10);

void func_00139B5C(s16 arg0) {
    D_001E2988->unk3C = arg0;
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139B6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139D90);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139DE8);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139E6C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_00139F50);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013A01C);

void func_0013A0E8(s16 arg0) {
    func_0013A10C(arg0);
    func_00143E94();
}

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013A10C);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013A208);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013A368);

INCLUDE_ASM("nonmatchings/paf_124B74", func_0013A430);

void func_0013A494(void) {
    if (func_0013A430((s32) M2C_FIELD(D_001E2988, s16 *, 4)) != -1) {
        func_0013EDA4();
        func_00143E94();
    }
}
#endif
