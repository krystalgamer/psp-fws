#include "common.h"
#include "paf_decls.h"

void func_001188C8(struct Unk_func_001188C8_0 *arg0) {
    arg0->unk0 = &D_0019D238;
    sceKernelDeleteThread(arg0->unk4);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_80E521C5);
#else
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000BF480);
#endif

void func_00118930(void) {
    sceKernelExitThread(0);
}

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_5775283A);
#endif

#if FW_VERSION >= 270
void scePaf_5775283A(struct Unk_scePaf_5775283A_0 *arg0) {
    sceKernelWaitThreadEnd(arg0->unk4, 0);
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000BF4C8);
#endif

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011896C);

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011065C);
#endif

#if FW_VERSION == 270
s32 func_0011065C(void *arg0) {
    M2C_FIELD(&D_0019B7DC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_0019B7DC, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_0019B7DC, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_0019B7DC, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_0019B7DC, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_0019B7DC, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_0019B7DC, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(&D_0019B7DC, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    return 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1188C8", func_001106AC);
#endif

#if FW_VERSION == 282
s32 func_00118998(struct Unk_func_00118998_0 *arg0) {
    D_001A7CEC.unk0 = (s32) arg0->unk0;
    D_001A7CEC.unk4 = (s32) arg0->unk4;
    D_001A7CEC.unk8 = (s32) arg0->unk8;
    D_001A7CEC.unkC = (s32) arg0->unkC;
    D_001A7CEC.unk10 = (s32) arg0->unk10;
    D_001A7CEC.unk14 = (s32) arg0->unk14;
    D_001A7CEC.unk18 = (s32) arg0->unk18;
    D_001A7CEC.unk1C = (s32) arg0->unk1C;
    return 0;
}

M2C_UNK *func_001189E8(void) {
    return &D_001A7CEC;
}
#endif

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_36CB5601);

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_5B202AED);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118A84);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_669DE9B1);
#else
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000BF5DC);
#endif

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_50DC7446);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118B3C);

INCLUDE_RODATA("nonmatchings/paf_1188C8", D_0019D238);

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_BA32D6E6);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118BEC);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118C34);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118C7C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_EAB7BD23);
#else
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000BF7E4);
#endif

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118CFC);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118D54);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118D84);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118DDC);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118E14);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118ED8);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118F30);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00118FD8);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119018);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011905C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119130);

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_CAF82B9B);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011926C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_001192E0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119354);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119450);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011954C);

s32 func_00119634(s32 arg0) {
    func_00119DA4();
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011965C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011975C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011985C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_001199AC);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_001199DC);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119A38);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119A94);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119B00);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119B58);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119BD0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119CB4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119CE0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119D78);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119DA4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119E9C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_00119F78);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A00C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A2F0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A498);

M2C_UNK *func_0011A570(void) {
    return &D_001A7D10;
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A57C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A5B0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A610);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A758);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A79C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A840);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A8E4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A988);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AA18);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AAA8);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AB38);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011ABD0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AC6C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AD08);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AD3C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AD9C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AE2C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AF04);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AF8C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B048);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B0F8);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B2A8);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B318);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B350);

s32 func_0011B410(s32 arg0) {
    func_0011905C();
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B438);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B4E0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B674);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B8A0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B9B4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BAC4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BB28);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BC8C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BDF0);

#if FW_VERSION == 270
void func_0011A7FC(void) {
    func_0011BDF0(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A81C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011A874);

void func_0011A8CC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0019D328;
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {

    } else {
        func_0010BEEC(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x68));
    }
    func_0011B780((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BFC0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011C02C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AB9C);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011C3C8);

void func_0011AD64(void *arg0) {
    s32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x50);
    if ((temp_a4 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) < 4U)) {
        if (D_001A5AE0 == 0) {
            sceGuDispBuffer((s32) M2C_FIELD(arg0, s16 *, 0x18), (s32) M2C_FIELD(arg0, s16 *, 0x1A), temp_a4 + (M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x42)) + 0xFC000000, (s32) (M2C_FIELD(arg0, s32 *, 0x3C) * 8) >> M2C_FIELD(arg0, s32 *, 0xC));
            D_001A5AE0 = 1;
        }
    }
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011C490);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AE84);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AEEC);

s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011AF6C);

void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0011B000(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

void func_0011B01C(s32 arg0, s32 arg1) {
    func_0011FECC((s32) &D_001A7DA8, arg0, arg1);
    D_001A5B08 = 1;
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B054);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B118);

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_35F003C0);

INCLUDE_ASM("nonmatchings/paf_1188C8", scePaf_FB3A9617);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B610);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011B780);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_000C5FD4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_000C6118);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_1188C8", D_0011F230);
#endif

#if FW_VERSION != 270
void func_0011BE84(void) {
    func_0011BDF0(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BEA4);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BEFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000C6E04);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011BFC0);

INCLUDE_ASM("nonmatchings/paf_1188C8", func_0011C02C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000C2A6C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1188C8", func_000C2B98);
#endif
