/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

void sceHVNetfront_Module_D193E37E(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    sceHVNetfront_Module_1A02495A(arg4, sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10) + arg2, arg3);
}

void sceHVNetfront_Module_50CD0162(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10) + arg2, arg4, arg3);
}

void sceHVNetfront_Module_7B120250(s32 arg0, s32 arg1) {
    void *sp0;
    func_00089C54(arg0, arg1, &sp0);
}

s32 func_0008A140(s32 arg0, s32 arg1) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00089C54(arg0, arg1, &sp0);
    if (temp_v0 != 0) {
        sceHVNetfront_Module_D611E938(sp0 + M2C_FIELD(arg0, s16 *, 0x10), 0, arg1);
    }
    return temp_v0;
}

void sceHVNetfront_Module_FD8A0A98(void) {
    func_00089EB4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A1BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_8AF2F499);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_754AA115);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_D5A24BD1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A2C8);

s32 sceHVNetfront_Module_D38CE2BC(struct Unk_sceHVNetfront_Module_D38CE2BC_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0->unk8 == 0) || (arg0->unkC == 0)) {
        var_v1 = 1;
    }
    return var_v1;
}

s32 sceHVNetfront_Module_6AC5DDC6(struct Unk_sceHVNetfront_Module_6AC5DDC6_0 *arg0, struct Unk_sceHVNetfront_Module_6AC5DDC6_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg0->unk0 == arg1->unk0) && (arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8)) {
        var_a2 = arg0->unkC == arg1->unkC;
    }
    return var_a2;
}

s32 sceHVNetfront_Module_50475141(struct Unk_sceHVNetfront_Module_50475141_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;

    temp_v1 = arg0->unk0;
    var_a3 = 0;
    if ((arg1 >= temp_v1) && (arg1 < (temp_v1 + arg0->unk8))) {
        temp_v1_2 = arg0->unk4;
        if (arg2 >= temp_v1_2) {
            var_a3 = arg2 < (temp_v1_2 + arg0->unkC);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_21E620AF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_44660B53);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_A05B7FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_B0FF9AC6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A7AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A7B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_C04F6796);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_2EE82579);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A858);

s32 *func_0008A92C(void) {
    s32 *temp_v0;
    s32 *var_v0;

    temp_v0 = sceHVNetfront_Module_6D4EE418(0x24);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        if (sceHVNetfront_Module_457A4136(sceHVNetfront_Module_896E55F6((s32 **) temp_v0), 0x10) == 0) {
            sceHVNetfront_Module_B29BE9CE((s32 **) temp_v0);
            sceHVNetfront_Module_880239D0((s32 **) temp_v0);
            return NULL;
        }
        sceHVNetfront_Module_B29BE9CE((s32 **) temp_v0);
        var_v0 = temp_v0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

void func_0008A9A0(s32 **arg0) {
    sceHVNetfront_Module_C04FADD9(*arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008A9D0);

s32 func_0008AA00(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x1C) == 0;
}

s32 func_0008AA10(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008AA1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008AB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008ABB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008AE1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008AF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B354);

s32 func_0008B4C0(s32 **arg0, struct Unk_func_0008B4C0_1 *arg1) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6(arg0);
    arg1->unkC = temp_v0;
    var_v1 = 1;
    if (sceHVNetfront_Module_2408FBF3(temp_v0, 0, arg1) == 0) {
        sceHVNetfront_Module_B29BE9CE(arg0);
        var_v1 = 0;
    }
    return var_v1;
}

void func_0008B520(s32 **arg0, struct Unk_func_0008B520_1 *arg1) {
    sceHVNetfront_Module_703D7675(arg1->unkC, (s32) arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B550);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B56C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B588);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B5C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008B734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_5BF885D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_F59C0117);

void sceHVNetfront_Module_0C3F76E2(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void sceHVNetfront_Module_FF6A3B64(void) {
}

void sceHVNetfront_Module_B355C896(s32 arg0, struct Unk_sceHVNetfront_Module_B355C896_1 *arg1) {
    arg1->unk0 = arg0;
    arg1->unk4 = -1;
    arg1->unk8 = -1;
    arg1->unkA = -1;
}

void sceHVNetfront_Module_F2D9F9FD(void) {
}

void func_0008B938(struct Unk_func_0008B938_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_v1;

    temp_v1 = arg0->unkA;
    if (temp_v1 == -1) {
        func_0008C6D8(arg1, arg2);
        return;
    }
    sceHVNetfront_Module_6DDF3D61(arg1, arg2, *sceHVNetfront_Module_5BF885D2(temp_v1, arg2), arg0->unk8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_04894EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_A3153A23);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008BA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008BB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008BCBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008BF3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C08C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C364);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C3EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C44C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C5A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C640);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C6D8);

void func_0008C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    func_0008C698(&sp0, arg0, arg1, arg3);
    func_0008C3EC(&sp0, arg2);
}

void sceHVNetfront_Module_E3E135CC(s32 arg0, s32 arg1, s32 arg2) {
    void *sp0;
    func_0008C698(&sp0, arg0, arg1, arg2);
    func_0008C640(&sp0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C7DC);

void func_0008C868(s32 arg0, s32 arg1, s32 arg2) {
    func_0008C7DC(arg0, arg1, arg2, 1);
}

void func_0008C884(s32 arg0, s32 arg1, s32 arg2) {
    func_0008C7DC(arg0, arg1, arg2, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C8A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C96C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008C9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_6DDF3D61);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008CADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008CAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_01524F3D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_DE2F174A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008CCA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008CE48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008CF00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_ED23423C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008D1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008D250);

void func_0008D298(s32 arg0, s32 arg1, s32 arg2) {
    func_0008D1F0(arg0, arg1, arg2, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008D2B4);

void func_0008D674(struct Unk_func_0008D674_0 *arg0, s32 arg1) {
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk14 = 0;
    arg0->unk10 = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk1C = 0;
    arg0->unk18 = 0;
    if (arg1 == 3) {
        arg0->unkC = 2;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008D6B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001261FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126200);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012620C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126224);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126230);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126238);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126244);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012624C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012626C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126278);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008D718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008DA20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008DADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008DD44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008DE90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008DF44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E0D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E1A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E34C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E7C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008E914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008EAD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008EE00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008EFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_55DEAEBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008F440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_97037761);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008F83C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FB54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FC7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FD70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FE48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0008FFC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000900DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000901BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126380);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012678C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001267E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000905C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009088C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090A9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00090F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00091268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00091620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00091834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00091940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00091D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000921C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009244C);

void func_00092494(s32 arg0, s32 arg1) {
    struct Unk_func_00092494_temp_v1 *temp_v1;

    temp_v1 = D_00133EE0 + (((s32) (arg0 - D_00133ED8) >> 0xB) * 0xC);
    if (temp_v1->unk0 == 0) {
        temp_v1->unk8 = arg1;
    }
}

s32 func_000924D0(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00091940(0x800, 1);
    var_v0 = 0;
    if (temp_v0 != 0) {
        func_0009244C(temp_v0, 1);
        sceHVNetfront_Module_D611E938(temp_v0, 0, 0x800);
        M2C_FIELD(temp_v0, s16 *, 2) = 0x1FF;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092530);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000925BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_A3194FCD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_6F8055CA);

void func_00092B24(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_5CA39435);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_24B1FCE6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092C14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_A2F4AC9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00092CD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_6D4EE418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_D39BDE45);

void func_00092DBC(s32 arg0, s32 arg1) {
    func_00092894(arg0 * arg1, 1);
}

void func_00092DE0(s32 arg0, s32 arg1) {
    func_00092950(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_880239D0);

void func_00092E30(s32 *arg0) {
    func_00092404(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_896E55F6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_B29BE9CE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_CA65803E);

void func_00092EB8(s32 arg0) {
    func_00092894(arg0, 1);
}

void func_00092ED4(s32 arg0, s32 arg1) {
    func_00092894(arg0 * arg1, 1);
}

void func_00092EF8(s32 arg0, s32 arg1) {
    func_00092950(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_0D525122);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_7D1421C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_E459881C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_08549708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_86AB5444);

void func_00093060(s32 arg0) {
    D_00133F68 = arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009306C);

void func_00093120(s32 *arg0) {
    *arg0 = 0x800;
}

void func_0009312C(s32 *arg0) {
    *arg0 = D_00133F4C;
}

void func_0009313C(void) {
    D_00133F70 = D_00133F6C - D_00133F4C;
}

void func_0009315C(s32 *arg0) {
    *arg0 = D_00133F70;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009316C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093238);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093314);

s32 func_00093620(struct Unk_func_00093620_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24B1FCE6(8);
    var_v1 = 0;
    arg0->unk0 = temp_v0;
    if (temp_v0 != 0) {
        arg0->unk4 = 2;
        var_v1 = 1;
        arg0->unk8 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_440B8F87);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_234F9191);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000937E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_96BF9A55);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000938C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_FA035F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_6586506B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_E42E1A51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00093DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_BB4FD3D9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_3F9C6B99);

void sceHVNetfront_Module_EF305D32(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_5C2358BA);

void sceHVNetfront_Module_A71A4744(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_060EC20F);

void sceHVNetfront_Module_B3475EA5(struct Unk_sceHVNetfront_Module_B3475EA5_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg0->unk10 == 0) && (((arg2 < arg0->unk4) | (arg1 == 0)) == 0)) {
        arg0->unk0 = arg1;
        arg0->unk4 = arg2;
        arg0->unk10 = arg3;
    }
}

void sceHVNetfront_Module_863666A0(struct Unk_sceHVNetfront_Module_863666A0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk10 = arg4;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unkC = arg3;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094378);

s32 sceHVNetfront_Module_43BDE443(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 4);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

s32 func_000943C4(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 8);
    var_v1 = 4;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_000943F8(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_75166C95);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_38FB998B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000944A0);

void func_000944C8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000944D0);

void func_00094538(s32 arg0) {
    sceHVNetfront_Module_38FB998B(arg0);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_3EF6933E);

s32 func_0009464C(s32 (***arg0)()) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = **arg0;
    var_v1 = 4;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void sceHVNetfront_Module_2594578F(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void sceHVNetfront_Module_7F17DC79(void) {
}

void sceHVNetfront_Module_9C5ACD64(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00094698(void) {
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001268C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001269F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001269F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_517019DD);

void sceHVNetfront_Module_89FF7199(struct Unk_sceHVNetfront_Module_89FF7199_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = arg2;
    arg0->unk4 = arg1;
    arg0->unk8 = arg3;
}

void sceHVNetfront_Module_7B63B90F(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000948B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009490C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009493C);

void func_00094A08(s32 *arg0) {
    sceHVNetfront_Module_6DC3FDE4(*arg0);
    func_000948B0(arg0, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094A3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094DCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00094FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009503C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095098);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000950C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009519C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009522C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000955B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000959E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095A24);

void func_00095A8C(void) {
    func_000944C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095AA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095C90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00095FA4);

void func_00096078(s32 arg0, s32 arg1, s32 arg2) {
    func_00095C90(arg0, arg1, arg2, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096378);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096A1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096BC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096CEC);

void func_00096D60(struct Unk_func_00096D60_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk2 = 0;
    arg0->unk14 = 0;
}

void func_00096D70(struct Unk_func_00096D70_0 *arg0) {
    s32 temp_a0;

    if (arg0->unk2 > 0) {
        do {
            func_00096CEC(arg0);
        } while (arg0->unk2 > 0);
    }
    temp_a0 = arg0->unk14;
    if (temp_a0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_a0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00096E88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000971CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009722C);

s32 func_0009755C(s32 arg0) {
    return arg0 + 0x10;
}

void func_00097564(struct Unk_func_00097564_0 *arg0) {
    sceHVNetfront_Module_D611E938((u8 *)arg0 + 0x10, 0, 0x20);
    arg0->unk14 = -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009759C);

void func_000975D8(struct Unk_func_000975D8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_88977645(temp_v0, -1);
        arg0->unkC = 0;
    }
    func_00096D70((u8 *)arg0 + 0x30);
}

s32 func_0009761C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 1;
    if (((arg1 == 0) | (arg2 < 1)) == 0) {
        var_v0 = func_00096C08(arg0 + 0x30, arg1, arg2);
    }
    return var_v0;
}

void func_00097650(struct Unk_func_00097650_0 *arg0) {
    if (arg0->unk8 == 0) {
        func_000971CC();
        if (arg0->unk8 == 2) {
            arg0->unk8 = 1;
        }
    }
}

void func_00097698(s32 arg0) {
    func_000944A0(arg0, 0x48, (s32) func_0009755C, (s32) &func_0009722C, (s32) func_00097564, (s32) &func_0009759C, (s32) func_000975D8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_000976EC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000976F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00097728);

s32 func_000978CC(s32 arg0) {
    return arg0 + 4;
}

void func_000978D4(struct Unk_func_000978D4_0 *arg0, s32 arg1) {
    func_00094378((u8 *)arg0 + 4);
    arg0->unk8 = arg1;
}

void func_0009790C(s32 arg0) {
    func_000944A0(arg0, 0x58, (s32) func_000978CC, (s32) &func_00097728, (s32) func_000978D4, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
}

void func_0009795C(void) {
}

void func_00097964(struct Unk_func_00097964_0 *arg0, s32 arg1) {
    func_00094378((u8 *)arg0 + 0x48);
    arg0->unk4C = arg1;
}

s32 func_0009799C(s32 arg0) {
    return arg0 + 0x48;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000979A4);

void func_00097A58(void) {
    func_000959E8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00097A74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00097B04);

void sceHVNetfront_Module_D42BFA17(s32 arg0) {
    func_00095A24(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_000979A4;
    M2C_FIELD(arg0, void (**)(), 0x14) = func_00097A58;
    M2C_FIELD(arg0, void (**)(void *, s32), 0xC) = func_00097964;
    M2C_FIELD(arg0, s32 (**)(s32), 4) = func_0009799C;
    sceHVNetfront_Module_457A4136(arg0 + 0x24, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_31827CC9);

void func_00097CF0(s32 arg0) {
    func_00094378(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_B8C1F074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00097DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00097F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009803C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_00CEAD19);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00098524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009864C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000989DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00098BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00098C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00098E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00098FEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000990CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126B14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099368);

s32 func_000994F4(s32 arg0) {
    return arg0 + 0xC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000994FC);

void func_000997DC(struct Unk_func_000997DC_0 *arg0, s32 arg1) {
    func_000994FC(arg0->unk4, arg1, (u8 *)arg0 + 0xC, (s32) (&arg0->unk4), (s32) ((u8 *)arg0 + 8));
}

void sceHVNetfront_Module_20A7707B(struct Unk_sceHVNetfront_Module_20A7707B_0 *arg0, s32 arg1, s32 arg2) {
    void *sp0;
    M2C_UNK sp4;

    func_000994FC(arg0->unk4, arg1, arg2, &sp0, (s32) &sp4);
}

void func_0009982C(struct Unk_func_0009982C_0 *arg0, s32 arg1) {
    func_00097CF0((u8 *)arg0 + 0xC);
    arg0->unk10 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099864);

void func_00099878(s32 arg0) {
    func_000944A0(arg0, 0x3C, (s32) func_000994F4, (s32) func_000997DC, (s32) func_0009982C, (s32) func_00099864, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_000998C8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000998D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099A44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099DB8);

void sceHVNetfront_Module_2FA79A94(s32 arg0) {
    func_00099878(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_00099DB8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_00099B44;
}

void sceHVNetfront_Module_0FB109D0(void) {
    func_000998C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099E4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126BCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126BD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_00099F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_050C318E);

s32 func_0009A1BC(struct Unk_func_0009A1BC_0 *arg0) {
    func_00099864();
    arg0->unk4 = (s32) (arg0->unk4 | 6);
    return 1;
}

void func_0009A1F0(s32 arg0) {
    func_00099878(arg0);
    M2C_FIELD(arg0, s32 (**)(void *), 0x10) = func_0009A1BC;
}

void func_0009A220(void) {
    func_000998C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_59B0EF30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_449342C5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_9C286F1A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_4C776B9A);

void func_0009A5D4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A7C8);

s32 func_0009A86C(struct Unk_func_0009A86C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
    arg0->unkC = arg4;
    return 1;
}

void func_0009A884(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

s32 func_0009A8AC(struct Unk_func_0009A8AC_0 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (((arg0->unk8 | arg0->unkC) == 0) && (arg0->unk0 == 0)) {
        var_a1 = arg0->unk4 == 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A8DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009A900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AB9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009ABD4);

void func_0009AC54(s32 arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 4) = arg2;
}

s32 func_0009AC98(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 8);
}

s32 func_0009ACD0(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AD08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009ADF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AE64);

s32 func_0009AED8(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AF10);

s32 func_0009AFD4(struct Unk_func_0009AFD4_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009AFDC);

void func_0009B018(s32 arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x18) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B05C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B0C0);

s32 func_0009B164(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0, __builtin_allegrex_ins(arg1, 0, 0x16, 0xA) * 4) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B27C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B32C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B39C);

void func_0009B3E4(struct Unk_func_0009B3E4_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk4 = arg2;
    arg0->unk8 = arg3;
    arg0->unk18 = arg5;
    arg0->unk24 = arg4;
    arg0->unk0 = arg1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    func_0009B32C((s32) arg0);
    sceHVNetfront_Module_0F5AA1D5((u8 *)arg0 + 0x28, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B434);

void func_0009B454(struct Unk_func_0009B454_0 *arg0) {
    arg0->unk20 = 1;
}

void func_0009B460(struct Unk_func_0009B460_0 *arg0) {
    arg0->unk20 = 2;
}

s32 func_0009B46C(struct Unk_func_0009B46C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = sceHVNetfront_Module_9DAD41C2(arg0->unkC, arg0->unk10 + arg0->unk8, (u8 *)arg0 + 4, (s32) (&arg0->unk8), 0, 0);
    func_0009B32C((s32) arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B4C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009B9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009BBF8);

s32 func_0009BF18(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0009BBF8();
    var_v1 = 0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_1B83D569(*arg0, arg1, 0, temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009BF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009C0F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009C210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009C26C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009C664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009C750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CA14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CC2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CEC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CF1C);

void func_0009CFA0(struct Unk_func_0009CFA0_0 *arg0) {
    arg0->unk0 = 0;
    sceHVNetfront_Module_2A34EDF3((u8 *)arg0 + 4);
    sceHVNetfront_Module_A2F4AC9E(arg0->unk5C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009CFD4);

void func_0009D0E0(struct Unk_func_0009D0E0_0 *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_a2;
    void *var_a1;
    void *var_v1;

    var_a1 = arg1;
    var_a2 = 0;
    arg0->unk58 = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
    if (arg0->unk38 > 0) {
        var_v1 = arg0->unk5C;
        do {
            var_a2 += 1;
            M2C_FIELD(var_v1, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0x10);
            temp_v0 = M2C_FIELD(var_a1, s32 *, 0x14);
            var_a1 += 8;
            M2C_FIELD(var_v1, s32 *, 4) = temp_v0;
            var_v1 += 8;
        } while (var_a2 < arg0->unk38);
    }
}

void func_0009D128(struct Unk_func_0009D128_0 *arg0) {
    s32 temp_s1;
    void *temp_s2;

    temp_s2 = (u8 *)arg0 + 0x1C;
    temp_s1 = (u8 *)arg0 + 4;
    sceHVNetfront_Module_40EFD93B(temp_s1, temp_s2);
    sceHVNetfront_Module_C0A215A2((void *) temp_s1);
    sceHVNetfront_Module_1A741A10(temp_s1, arg0->unk18 - 1, temp_s2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D230);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D27C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D30C);

s32 func_0009D394(void) {
    return 1;
}

s32 func_0009D39C(struct Unk_func_0009D39C_0 *arg0) {
    s32 *temp_a1;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_a1 = M2C_FIELD(arg0->unk44, s32 **, 4);
    temp_s0 = *temp_a1;
    temp_s3 = (arg0->unk2C + arg0->unk30) - arg0->unk58;
    temp_v0 = sceHVNetfront_Module_3EDA77E7((s32) temp_a1);
    temp_a4 = temp_v0;
    if (arg0->unk3C & 2) {
        temp_a2 = arg0->unk34;
        var_v0 = func_0008D2B4(arg0->unk58, temp_s3, temp_a2, temp_s0, temp_a4, temp_a2, 0, 3) == 0;
    } else {
        var_v0 = sceHVNetfront_Module_A02BB72A(arg0->unk58, temp_s3, temp_s0, temp_v0);
    }
    var_v1 = 0;
    if (var_v0 != 0) {
        var_v1 = 1;
        arg0->unk58 = (s32) (arg0->unk58 + temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D548);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009D650);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DA24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DAB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DBB0);

s32 func_0009DC84(struct Unk_func_0009DC84_0 *arg0) {
    void *sp0;
    func_0009D30C((s32) arg0, arg0->unk54, 0, &sp0, &arg0->unk54);
    arg0->unk44 = func_0008952C(arg0->unk0, sp0, (u8 *)arg0 + 0x48);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DCD0);

s32 func_0009DDE8(struct Unk_func_0009DDE8_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0009CFD4((s32) arg0, 3, arg0->unk48, arg0->unk54);
    var_v1 = 0;
    if (temp_v0 != -1) {
        arg0->unk44 = sceHVNetfront_Module_882E0127(arg0->unk0, &arg0->unk48);
        var_v1 = 1;
        arg0->unk54 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DE4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DEF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009DF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E0A4);

void func_0009E2E8(s32 arg0) {
    func_0009E0A4(arg0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E65C);

void func_0009E8DC(void) {
    sceHVNetfront_Module_34C99643();
}

void func_0009E8F8(void) {
    sceHVNetfront_Module_B8C28371();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009E914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EAF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EBA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EC88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EE3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EEA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009EEE4);

void func_0009F018(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_D77AFB32);

void sceHVNetfront_Module_0FD607BB(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_88977645);

void func_0009F138(s32 arg0) {
    sceHVNetfront_Module_88977645(arg0, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_CF3077BE);

void sceHVNetfront_Module_4E8351E4(s32 arg0) {
    sceHVNetfront_Module_CF3077BE(arg0, sceHVNetfront_Module_15875ED4(arg0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_EE835D7A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_68FDD829);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_AFCC3786);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F384);

void sceHVNetfront_Module_692B427C(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    sceHVNetfront_Module_42E27595((s32) (temp_a0 + 0xC), M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

void sceHVNetfront_Module_2B3ECF44(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    sceHVNetfront_Module_D1EF37CB(temp_a0 + 0xC, M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F430);

s32 func_0009F46C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_27D353B1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_D9FE99F5);

s32 sceHVNetfront_Module_8C9ECF26(s32 arg0) {
    s32 temp_s1;

    temp_s1 = sceHVNetfront_Module_27D353B1(sceHVNetfront_Module_E459881C(arg0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s1;
}

void func_0009F65C(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_AE926D7C(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_AE926D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_3EDA77E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F7A4);

void func_0009F7DC(s32 *arg0) {
    func_000842BC(*arg0);
}

void func_0009F7F8(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_9CDC3730(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_9CDC3730);

void sceHVNetfront_Module_FF428AF7(s32 arg0, s32 *arg1) {
    func_0009F7F8(arg0, *arg1);
}

void func_0009F880(s32 arg0, s32 arg1) {
    func_0009F8C4(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F8C4);

void sceHVNetfront_Module_12AE9009(s32 arg0, s32 *arg1) {
    func_0009F880(arg0, *arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_AFEF4A19);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009F9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_700625E1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009FA80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009FAD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_8F6C6F95);

void sceHVNetfront_Module_C4BC962C(s32 arg0, struct Unk_sceHVNetfront_Module_C4BC962C_1 *arg1) {
    s32 temp_v0;

    arg1->unk4 = sceHVNetfront_Module_7D1421C0(arg0);
    temp_v0 = sceHVNetfront_Module_E459881C(arg0);
    arg1->unk8 = 0x3F8;
    arg1->unk0 = temp_v0;
    arg1->unkC = sceHVNetfront_Module_15875ED4(temp_v0);
    arg1->unk10 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_C6156659);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_1BC9B1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009FD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_745DE4E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_DCC1C9E2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_0009FEB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_31885E20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_06068307);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_5E3D4ABB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A00CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_055CBAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_736A2D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_EAA7FA6F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_6375C58E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0480);

s32 func_000A052C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVNetfront_Module_E459881C(arg2);
    temp_s0 = func_000A0480(arg0, arg1, temp_s0_2, sceHVNetfront_Module_3EDA77E7(arg2), arg3);
    sceHVNetfront_Module_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A05B4);

s32 func_000A064C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVNetfront_Module_E459881C(arg2);
    temp_s0 = func_000A05B4(arg0, arg1, temp_s0_2, sceHVNetfront_Module_3EDA77E7(arg2));
    sceHVNetfront_Module_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A06C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_14A6B003);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_89C1EDD7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_BA5A2E8A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0A58);

void func_000A0AB4(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_14A6B003((s32) &D_001272C4, arg0, arg1);
}

void func_000A0AE0(s32 arg0, s32 arg1) {
    func_00092A50(arg0, arg1);
    sceHVNetfront_Module_D2270E78();
    sceHVNetfront_Module_D77AFB32();
}

void func_000A0B0C(void) {
    sceHVNetfront_Module_0FD607BB();
    sceHVNetfront_Module_5EEBE755();
    func_00092B24();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0C0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0C84);

void func_000A0D20(struct Unk_func_000A0D20_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        sceHVNetfront_Module_A2F4AC9E(arg0->unk4);
        return;
    case 1:
        sceHVNetfront_Module_0D525122(arg0->unk4);
        return;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_03D27BCE);

void sceHVNetfront_Module_4C96FA60(struct Unk_sceHVNetfront_Module_4C96FA60_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = (s32) (arg2 * 8);
    arg0->unk4 = arg1;
    sceHVNetfront_Module_D611E938(arg1, 0, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A0E50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_A93E0E9F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_EF477CFA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_9D05957E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_310CAD12);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_810ADFBD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_2B20EB10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_E2030681);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_780CC2E9);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126D78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126DCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126DE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126DFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126E14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126E2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00126F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001272B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001272C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_47E2BF36);

void func_000A1394(struct Unk_func_000A1394_0 *arg0) {
    struct Unk_func_000A1394_temp_a0 *temp_a0;

    temp_a0 = arg0->unk8;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0x18)(temp_a0);
    arg0->unk0 = (s32) (__builtin_allegrex_ins(arg0->unk0, 0, 0, 4) | 6);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_3927422C);

void sceHVNetfront_Module_6148A422(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_40BDC0A2);

s32 sceHVNetfront_Module_4417421E(struct Unk_sceHVNetfront_Module_4417421E_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = 4;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    return 1;
}

void sceHVNetfront_Module_D34DCBBE(void) {
}

void func_000A16E4(s32 *arg0) {
    *arg0 = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A16F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A17D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A188C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A19DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1AE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1D34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A1F8C);

void func_000A1FDC(struct Unk_func_000A0D20_0 *arg0) {
    func_000A0D20(arg0);
}

void func_000A1FF8(struct Unk_func_000A1FF8_0 *arg0) {
    arg0->unk28 = (s32) arg0->unk20;
}

void func_000A2004(struct Unk_func_000A2004_0 *arg0) {
    arg0->unk6C = (s32) arg0->unk20;
    arg0->unk70 = (s32) arg0->unk2C;
}

void func_000A2018(struct Unk_func_000A2018_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 4;
    func_000A17D8(temp_s1, arg0->unk6C, 0);
    func_000A1D34(temp_s1, arg0->unk6C);
    arg0->unk2C = (s32) arg0->unk70;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A20F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2218);

s32 sceHVNetfront_Module_F45546DA(struct Unk_sceHVNetfront_Module_F45546DA_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_DE0C90FA);

void sceHVNetfront_Module_ED3A897E(s32 arg0) {
    func_000A1FDC(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2398);

s32 func_000A2498(s32 *arg0) {
    func_000A0E50(*arg0 + 0x38);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A24BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A25D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2638);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A27D4);

void func_000A2968(s32 **arg0) {
    s32 *temp_v1;

    temp_v1 = *arg0;
    *temp_v1 |= 4;
}

s32 func_000A297C(s32 **arg0) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v1;

    temp_s0 = *arg0;
    temp_v0 = func_000A2218(temp_s0);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = !(*temp_s0 & 4) ? 0 : -9;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_AED8D7BD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2A1C);

void func_000A2B28(struct Unk_func_000A2B28_0 *arg0) {
    arg0->unk6C = (s32) arg0->unk20;
}

void func_000A2B34(struct Unk_func_000A2B34_0 *arg0) {
    func_000A17D8((s32) ((u8 *)arg0 + 4), arg0->unk6C, 0);
}

void func_000A2B58(struct Unk_func_000A2B28_0 *arg0) {
    arg0->unk28 = (s32) arg0->unk20;
    func_000A2B28(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2D24);

s32 sceHVNetfront_Module_905CB6D7(struct Unk_sceHVNetfront_Module_905CB6D7_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_C382CB05);

void sceHVNetfront_Module_AE6CB5A5(s32 arg0) {
    func_000A1FDC(arg0 + 4);
}

s32 sceHVNetfront_Module_2045C943(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 0x10) {
        var_v1 = sceHVNetfront_Module_42E27595(arg0, 0xC, (s32) &D_001272F0, 0xC);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A2F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A306C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3130);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A31D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3360);

void func_000A34F4(s32 *arg0) {
    func_000A2D24(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", sceHVNetfront_Module_1794F669);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A35C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A3F18);

s32 func_000A4130(void) {
    return 0x22;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4138);

void func_000A4198(void) {
    func_000A3F18();
}

void func_000A41B4(void) {
    func_000A3F18();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A41D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A428C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A430C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A43C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A44D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A45D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A476C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A47C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001272F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A490C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A49D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4A38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4CCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4DD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4F3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A4FC0);

void func_000A4FE0(void) {
    func_000AE270();
}

void func_000A4FFC(void) {
    func_000AE270();
}

void func_000A5018(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x1A);
}

void func_000A5034(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x1B);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5050);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A534C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127328);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127588);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127668);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001276A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5648);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A58B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5A14);

s32 func_000A5A2C(s32 arg0, struct Unk_func_000A5A2C_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000A58B4(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

void func_000A5A94(void) {
    func_000AE270();
}

void func_000A5AB0(void) {
    func_000AE270();
}

void func_000A5ACC(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0xC);
}

void func_000A5AE8(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0xD);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5B04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5E64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5EF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A5F78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A60D8);

s32 func_000A60F0(s32 arg0, struct Unk_func_000A60F0_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000A5F78(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

void func_000A6158(void) {
    func_000AE270();
}

void func_000A6174(void) {
    func_000AE270();
}

void func_000A6190(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0xE);
}

void func_000A61AC(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0xF);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012773C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127768);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001277C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127928);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127988);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A61C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A631C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A64D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A65A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A67C0);

s32 func_000A67D8(s32 arg0, struct Unk_func_000A67D8_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000A6660(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6840);

s32 func_000A6858(s32 arg0, struct Unk_func_000A6858_1 *arg1) {
    if (arg0 != 0) {
        sceHVNetfront_Module_1A02495A(arg0, arg1->unk0, arg1->unk4);
    }
    return arg1->unk4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A688C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6A00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6C3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6D64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6F04);

s32 func_000A6F1C(s32 arg0, struct Unk_func_000A6F1C_1 *arg1) {
    if (arg0 != 0) {
        sceHVNetfront_Module_1A02495A(arg0, arg1->unk0, arg1->unk4);
    }
    return arg1->unk4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A6F50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7088);

void func_000A721C(void) {
    func_000AE270();
}

void func_000A7238(void) {
    func_000AE270();
}

void func_000A7254(void) {
    func_000AE270();
}

void func_000A7270(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x10);
}

void func_000A728C(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x11);
}

void func_000A72A8(s32 arg0, s32 arg1, s32 arg2) {
    func_0008D1F0(arg0, arg1, arg2, 0x12);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A72C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A73D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127B64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127BC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127CC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127D24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127D84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127D94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A760C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7A18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7AE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127ED8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00127F78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7B98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7C8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012801C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012805C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7D40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A7E34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A807C);

void func_000A80E4(void) {
    func_000AE270();
}

void func_000A8100(void) {
    func_000AE270();
}

void func_000A811C(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x13);
}

void func_000A8138(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A82A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A84C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A86C0);

s32 func_000A86D8(s32 arg0, struct Unk_func_000A86D8_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000A8560(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

void func_000A8740(void) {
    func_000AE270();
}

void func_000A875C(void) {
    func_000AE270();
}

void func_000A8778(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x1C);
}

void func_000A8794(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x1E);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A87B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8994);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8EB4);

s32 func_000A8ECC(s32 arg0, struct Unk_func_000A8ECC_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000A8D38(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128134);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128164);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012817C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A8F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9564);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A97F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9B1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9B88);

void func_000A9D4C(s32 arg0, struct Unk_func_000A9D4C_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    func_000A9B88(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

void func_000A9DAC(void) {
    func_000AE270();
}

void func_000A9DC8(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x15);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_001287C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000A9FF4);

s32 func_000AA00C(s32 arg0, struct Unk_func_000AA00C_1 *arg1) {
    if (arg0 != 0) {
        sceHVNetfront_Module_1A02495A(arg0, arg1->unk0, arg1->unk4);
    }
    return arg1->unk4;
}

void func_000AA040(void) {
    func_000AE270();
}

void func_000AA05C(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x16);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA2A8);

s32 func_000AA2C0(s32 arg0, struct Unk_func_000AA2C0_1 *arg1) {
    if (arg0 != 0) {
        sceHVNetfront_Module_1A02495A(arg0, arg1->unk0, arg1->unk4);
    }
    return arg1->unk4;
}

void func_000AA2F4(void) {
    func_000AE270();
}

void func_000AA310(s32 arg0, s32 arg1, s32 arg2) {
    func_0008D1F0(arg0, arg1, arg2, 0x17);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA32C);

s32 func_000AA344(s32 arg0, struct Unk_func_000AA344_1 *arg1) {
    if (arg0 != 0) {
        sceHVNetfront_Module_1A02495A(arg0, arg1->unk0, arg1->unk4);
    }
    return arg1->unk4;
}

void func_000AA378(void) {
    func_000AE270();
}

void func_000AA394(void) {
    func_000AE270();
}

void func_000AA3B0(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x18);
}

void func_000AA3CC(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 0x19);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA3E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA51C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA5CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA67C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA7DC);

s32 func_000AA7F4(s32 arg0, struct Unk_func_000AA7F4_1 *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (arg0 == 0) {
        return arg1->unk4;
    }
    func_0008C698(&sp0, arg1->unk0, arg1->unk4, arg3);
    return func_000AA67C(&sp0, (s32) (&arg1->unk4), arg0, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AA85C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AAA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AAB6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AABC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AAF28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AB1A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AB6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AB6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AB714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AB90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABB38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABB74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABC90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABD74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABDDC);

void func_000ABE44(s32 arg0, s32 arg1) {
    func_000ABBB0(arg0, arg1, 1);
}

void func_000ABE60(s32 arg0, s32 arg1) {
    func_000ABBB0(arg0, arg1, 0);
}

void func_000ABE7C(s32 arg0, s32 arg1) {
    func_000ABC90(arg0, arg1, 1);
}

void func_000ABE98(s32 arg0, s32 arg1) {
    func_000ABC90(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABEB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ABF40);

void func_000AC004(s32 arg0, s32 arg1) {
    func_000ABEB4(arg0, arg1, 1);
}

void func_000AC020(s32 arg0, s32 arg1) {
    func_000ABF40(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC03C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128B30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128B70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128C30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC0EC);

void func_000AC224(s32 arg0, s32 arg1) {
    func_000AC03C(arg0, arg1, 1);
}

void func_000AC240(s32 arg0, s32 arg1) {
    func_000AC0EC(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC25C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC30C);

void func_000AC3BC(s32 arg0, s32 arg1) {
    func_000AC25C(arg0, arg1, 1);
}

void func_000AC3D8(s32 arg0, s32 arg1) {
    func_000AC30C(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC5C0);

void func_000AC724(s32 arg0, s32 arg1) {
    func_000AC3F4(arg0, arg1, 1);
}

void func_000AC740(s32 arg0, s32 arg1) {
    func_000AC4EC(arg0, arg1, 1);
}

void func_000AC75C(s32 arg0, s32 arg1) {
    func_000AC5C0(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128D64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128E24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128FA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00128FE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AC84C);

void func_000AC9E4(s32 arg0, s32 arg1) {
    func_000AC778(arg0, arg1, 1);
}

void func_000ACA00(s32 arg0, s32 arg1) {
    func_000AC84C(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACA1C);

void func_000ACACC(s32 arg0, s32 arg1) {
    func_000ACA1C(arg0, arg1, 1);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129158);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACAE8);

void func_000ACC14(s32 arg0, s32 arg1) {
    func_000ACAE8(arg0, arg1, 1);
}

void func_000ACC30(void) {
    func_000ACC4C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACC4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACD60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACD7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACD98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ACEE4);

void func_000AD0EC(s32 arg0, s32 arg1) {
    func_000ACD98(arg0, arg1, 1);
}

void func_000AD108(s32 arg0, s32 arg1) {
    func_000ACEE4(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD268);

void func_000AD45C(s32 arg0, s32 arg1) {
    func_000AD124(arg0, arg1, 1);
}

void func_000AD478(s32 arg0, s32 arg1) {
    func_000AD268(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD7F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AD9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ADA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ADCE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ADDA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ADE68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000ADF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE058);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE270);

void func_000AE2F0(void) {
    func_000AE270();
}

void func_000AE30C(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE3C8);

void func_000AE4A0(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 4);
}

void func_000AE4BC(s32 arg0, s32 arg1, s32 arg2) {
    func_000AE3C8(arg0, arg1, arg2, 5);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE4D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE57C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE640);

void func_000AE658(void) {
    func_0008C9C0();
}

s32 func_000AE674(void) {
    return -1;
}

s32 func_000AE67C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AE7BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AEA68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AEDA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF080);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF188);

s32 func_000AF24C(void) {
    func_000AF080();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF26C);

s32 func_000AF390(void ****arg0, s32 arg1) {
    s32 var_v1;
    struct Unk_func_000AF390_temp_a0 *temp_a0;

    var_v1 = 0;
    if (arg1 == 0x1000A) {
        temp_a0 = ***arg0;
        if (temp_a0->unk30C == arg0) {
            func_000CBD1C(temp_a0);
        }
        func_000AE6E4(arg0, 0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF45C);

s32 func_000AF5C4(void ****arg0) {
    if (M2C_FIELD(***arg0, s32 *, 0x30C) == arg0) {
        func_000AE6E4(arg0, 1);
    }
    return 1;
}

s32 func_000AF5FC(void ****arg0) {
    if (M2C_FIELD(***arg0, s32 *, 0x30C) == arg0) {
        func_000AE6E4(arg0, 0);
    }
    return 1;
}

s32 func_000AF634(void ****arg0) {
    func_000AE750(arg0, 1);
    return 0;
}

s32 func_000AF654(void ****arg0) {
    struct Unk_func_000AF654_temp_a0 *temp_a0;

    temp_a0 = ***arg0;
    if (temp_a0->unk30C == arg0) {
        func_000CBD1C(temp_a0);
        func_000AE6E4(arg0, 0);
    }
    func_000AE750(arg0, 0);
    return 0;
}

s32 func_000AF6B0(void) {
    func_000CD980();
    return 1;
}

s32 func_000AF6D0(void ****arg0) {
    struct Unk_func_000AF6D0_temp_a0 *temp_a0;

    temp_a0 = ***arg0;
    if (temp_a0->unk30C == arg0) {
        func_000CBD1C(temp_a0);
        func_000AE6E4(arg0, 0);
    }
    func_000CD980(arg0);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF728);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AF940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFB3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFB7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFC1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFD20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFD80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000AFFFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0050);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B02E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B04A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B069C);

s32 func_000B0718(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_a2;
    s32 temp_v0_2;
    struct Unk_func_000B0718_temp_v0 *temp_v0;

    if (func_000D2834() != 0) {
        temp_v0 = *arg0;
        temp_a2 = temp_v0->unk54;
        return M2C_FIELD(M2C_FIELD(((temp_a2 * 0xC) + *temp_v0->unk0), void **, 0xA8), s32 (**)(void **, M2C_UNK, s32), 0x14)(arg0, arg3, temp_a2);
    }
    temp_v0_2 = func_000D295C(arg0, arg1, arg2);
    if ((temp_v0_2 >= 0) && (temp_v0_2 != func_000D22A4(arg0))) {
        func_000D2350(arg0, temp_v0_2);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B07DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B09B4);

void func_000B0AA0(s32 arg0) {
    if (func_000C9E10() != 0) {
        func_000CD980(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B0F1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B10D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B12C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B143C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B17DC);

s32 func_000B19F0(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == 0x1000A) {
        func_000B0BB4(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1A38);

s32 func_000B1A94(s32 arg0) {
    func_000B0B44(arg0, 1);
    return 0;
}

s32 func_000B1AB4(s32 arg0) {
    func_000B0B44(arg0, 0);
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1B9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1C00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B1F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B209C);

s32 func_000B20DC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0x1C) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_000B2104(struct Unk_func_000B2104_0 *arg0) {
    return arg0->unk4D0->unk1C + 0x1C;
}

s32 func_000B2114(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0x1C) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B213C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B22D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2390);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B24B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B27CC);

s32 func_000B2848(struct Unk_func_0001F6B0_0 *arg0) {
    return *arg0->unk4D0->unk1C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B28AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B290C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B29C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2A28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2BE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B2E2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3AF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_0012967C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3D24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3D74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3DF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3E60);

s32 func_000B3E9C(void) {
    return 1;
}

s32 func_000B3EA4(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B3F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4000);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B40DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B42B0);

s32 func_000B42F0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0x10) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_000B4318(struct Unk_func_000B4318_0 *arg0) {
    return arg0->unk4D0->unk10 + 0x1C;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B450C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B45CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B48A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B48FC);

s32 func_000B4960(struct Unk_func_000B4960_0 *arg0) {
    return *arg0->unk4D0->unk10;
}

s32 func_000B4970(struct Unk_func_000B4970_0 *arg0) {
    return M2C_FIELD(arg0->unk4D0->unk10, s32 *, 0x84);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B49DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4DD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B4E90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B52A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B52C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B53FC);

s32 func_000B56EC(s32 arg0) {
    func_000CD9B4();
    func_000B9270(arg0, 0);
    return 1;
}

s32 func_000B5720(void) {
    func_000CD9B4();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B5740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B5B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B6424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B6BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B6CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B6ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B70DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7630);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B79B4);

s32 func_000B79F4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x30), s32 *, 0x64) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_000B7A1C(struct Unk_func_000B7A1C_0 *arg0) {
    return arg0->unk4D0->unk30;
}

s32 func_000B7A28(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x30), s32 *, 0x64) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

s32 func_000B7A50(struct Unk_func_000227B0_0 *arg0) {
    return M2C_FIELD(arg0->unk4D0->unk30, s32 *, 0x64);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7AFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7B64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7BE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7DE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B7F20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8110);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B81E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B843C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B852C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B860C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B86B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8764);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B8EDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B90F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B921C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B92C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B97CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B98B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B997C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B99E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9A34);

s32 func_000B9AC0(struct Unk_func_000B9AC0_0 *arg0, struct Unk_func_000B9AC0_1 *arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unk44;
    arg1->unk4 = temp_a0;
    func_000CB7F8(temp_a0);
    return 1;
}

s32 func_000B9AE4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9AEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000B9D60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA0A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA1E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA2E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA360);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA5C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA7EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BA9D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAC4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BACA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BADB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAE10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAF50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BAFCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB1BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB2A4);

s32 func_000BB31C(void) {
    return 1;
}

s32 func_000BB324(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB32C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB7CC);

s32 func_000BB80C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0xC) * 0xC) + arg0), void **, 0xA8), s32 *, 8);
}

s32 func_000BB834(struct Unk_func_000BB834_0 *arg0) {
    return arg0->unk4D0->unkC + 0x1C;
}

s32 func_000BB844(void *arg0) {
    return M2C_FIELD(M2C_FIELD(((*M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), s32 **, 0xC) * 0xC) + arg0), void **, 0xA8), s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB86C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BB940);

s32 func_000BB9D8(struct Unk_func_00022BE8_0 *arg0) {
    return *arg0->unk4D0->unkC;
}

void func_000BB9E8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(((func_000BB9D8(arg0) * 0xC) + arg0), void **, 0xA8), void **, 0xC), s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBA34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBB80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBBD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBC8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBCEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBD94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBE2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBEC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBF5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BBFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC06C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC1DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC238);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC2F0);

s32 func_000BC3D4(void) {
    return *func_000BBB80() == 0x2A;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC3FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC4E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC6F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC920);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BC9EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCAC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCB70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCBF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCC70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCE2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCE94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCF04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BCFE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD060);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD0B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD1F0);

void func_000BD264(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_90958874(arg0 + 0x3CC, arg1);
    sceHVNetfront_Module_C04FADD9(arg0 + 0x370);
}

void func_000BD298(struct Unk_func_000BD298_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk394 = arg1;
    arg0->unk398 = arg2;
    arg0->unk39C = arg3;
    arg0->unk3A0 = arg4;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD2AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BD880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BDB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BDD74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BDE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BDEFC);

void func_000BDFC0(struct Unk_func_000BDFC0_0 *arg0, M2C_UNK arg1) {
    struct Unk_func_000BDFC0_var_s0 *var_s0;

    var_s0 = arg0->unk474;
    if (var_s0 != NULL) {
        do {
            M2C_FIELD(var_s0, M2C_UNK (**)(void *, M2C_UNK, s32), 4)(arg0, arg1, var_s0->unk8);
            var_s0 = var_s0->unk0;
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE01C);

void func_000BE270(struct Unk_func_000BE270_0 *arg0, s32 *arg1, s32 *arg2) {
    M2C_UNK (*temp_v0)(s32, s32 *, s32 *);
    struct Unk_func_000BE270_temp_s2 *temp_s2;

    temp_s2 = func_000C7560();
    temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, s32 *, s32 *), 0x4B4);
    if (temp_v0 != NULL) {
        temp_v0(temp_s2->unk4, arg1, arg2);
    } else {
        *arg1 = arg0->unk460;
        *arg2 = arg0->unk464;
    }
    *arg1 -= temp_s2->unk4C;
    *arg2 -= temp_s2->unk50;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE4C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE610);

void func_000BE69C(s32 arg0) {
    func_000BF398();
    sceHVNetfront_Module_C04FADD9(arg0 + 0x410);
    sceHVNetfront_Module_C04FADD9(arg0 + 0x434);
}

void func_000BE6D4(struct Unk_func_000BE6D4_0 *arg0) {
    arg0->unk40C = 1;
    func_000BF398();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE6F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BE838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BEA48);

s32 func_000BEAE4(struct Unk_func_000BEAE4_0 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk42C;
    var_v0 = 0;
    if (temp_v1 != 0) {
        if (arg1 != 0) {
            func_000874F0((s32) ((u8 *)arg0 + 0x410), temp_v1, arg1);
        }
        var_v0 = 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BEB24);

s32 func_000BED34(s32 arg0, M2C_UNK arg1) {
    return sceHVNetfront_Module_41CEA51D(arg0 + 0x410, 0, arg1) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BED5C);

void func_000BEED0(struct Unk_func_000BEED0_0 *arg0, s32 arg1) {
    arg0->unk468 = arg1;
}

void func_000BEED8(struct Unk_func_000BEED8_0 *arg0, s32 arg1) {
    arg0->unk46C = arg1;
}

void func_000BEEE0(struct Unk_func_000BEEE0_0 *arg0, s32 arg1) {
    arg0->unk470 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BEEE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BEF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BEFFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF15C);

void func_000BF224(void ****arg0, struct Unk_func_000BF224_1 *arg1) {
    void ****temp_v0;

    temp_v0 = M2C_FIELD(***arg0, void *****, 0x308);
    arg1->unkC = temp_v0;
    if (temp_v0 == NULL) {
        arg1->unkC = arg0;
    }
    func_000CBC8C((s32) arg1->unkC, (u8 *)arg1 + 8);
    if (arg1->unk0 != 0) {
        func_000BEFFC(***arg0, (s32) arg0, arg1->unk4, (s32) func_000BF224, (s32) arg1);
    }
    arg1->unk0 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF2A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF398);

s32 func_000BF3D0(struct Unk_func_000BF3D0_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk14 = arg1;
    arg0->unk0 = 0;
    if (arg2 != 0) {
        arg0->unk0 = sceHVNetfront_Module_D9FE99F5(arg2, sceHVNetfront_Module_15875ED4(arg2));
    }
    if (arg3 != 0) {
        sceHVNetfront_Module_1A02495A((s32) ((u8 *)arg0 + 4), arg3, 0xC);
    }
    arg0->unk4A8 = &sceHVNetfront_Module_4C5A5066;
    arg0->unk4AC = &sceHVNetfront_Module_AF7B3F4B;
    arg0->unk4B0 = &sceHVNetfront_Module_BA0DA285;
    arg0->unk4A0 = 0;
    func_000C7190(arg0);
    return 0;
}

s32 func_000BF47C(s32 *arg0) {
    s32 temp_v0;

    func_000C7230();
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF4B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF79C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF988);

void func_000BF9C4(void **arg0) {
    struct Unk_func_000BF9C4_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0->unk0, M2C_UNK (**)(s32), 0x4A8)(temp_v0->unk4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BF9F0);

void func_000BFA88(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct Unk_func_000BFA88_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0->unk0, M2C_UNK (**)(s32, s32, s32, s32), 0x4B0)(temp_v0->unk4, arg2 + arg3, arg4, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BFAC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BFCCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000BFE50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C00AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C01F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C0500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C08BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C0A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C0D04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C0EDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C10DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C12D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1474);

void func_000C1694(s32 arg0, struct Unk_func_000C1694_1 *arg1, struct Unk_func_000C1694_2 *arg2) {
    void *sp0;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a3_5;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_v1;
    s32 temp_v1_2;

    sceHVNetfront_Module_8AF2F499(&sp0, arg1->unk0, arg1->unk4, arg2->unk8, arg2->unkC);
    func_000C2BF4(arg0, &sp0, 0x5A, 0x5A);
    temp_a0 = arg2->unkC;
    temp_a3 = arg2->unk8;
    sceHVNetfront_Module_8AF2F499(&sp0, arg1->unk0, arg1->unk4 + ((s32) (temp_a0 + ((u32) temp_a0 >> 0x1F)) >> 1), (s32) (temp_a3 + ((u32) temp_a3 >> 0x1F)) >> 1, arg1->unkC - temp_a0);
    func_000C12D0(arg0, &sp0);
    temp_a4 = arg2->unkC;
    sceHVNetfront_Module_8AF2F499(&sp0, arg1->unk0, (arg1->unk4 + arg1->unkC) - temp_a4, arg2->unk8, temp_a4);
    func_000C2BF4(arg0, &sp0, 0xB4, 0x5A);
    temp_v1 = arg2->unk8;
    sceHVNetfront_Module_8AF2F499(&sp0, arg1->unk0 + ((s32) (temp_v1 + ((u32) temp_v1 >> 0x1F)) >> 1), arg1->unk4, arg1->unk8 - temp_v1, arg1->unkC);
    func_000C12D0(arg0, &sp0);
    temp_a3_2 = arg2->unk8;
    sceHVNetfront_Module_8AF2F499(&sp0, (arg1->unk0 + arg1->unk8) - temp_a3_2, arg1->unk4, temp_a3_2, arg2->unkC);
    func_000C2BF4(arg0, &sp0, 0, 0x5A);
    temp_v1_2 = arg2->unkC;
    temp_a3_3 = arg2->unk8;
    temp_a3_4 = (s32) (temp_a3_3 + ((u32) temp_a3_3 >> 0x1F)) >> 1;
    sceHVNetfront_Module_8AF2F499(&sp0, (arg1->unk0 + arg1->unk8) - temp_a3_4, arg1->unk4 + ((s32) (temp_v1_2 + ((u32) temp_v1_2 >> 0x1F)) >> 1), temp_a3_4, arg1->unkC - temp_v1_2);
    func_000C12D0(arg0, &sp0);
    temp_a4_2 = arg2->unkC;
    temp_a3_5 = arg2->unk8;
    sceHVNetfront_Module_8AF2F499(&sp0, (arg1->unk0 + arg1->unk8) - temp_a3_5, (arg1->unk4 + arg1->unkC) - temp_a4_2, temp_a3_5, temp_a4_2);
    func_000C2BF4(arg0, &sp0, 0x10E, 0x5A);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1AC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C1F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C22A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C2444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C2668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C2838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C29F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C2BF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C2DA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C30D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C3454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C394C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C3D10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C3DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C3F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C42B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4680);

void func_000C47C8(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x2C);
    sceHVNetfront_Module_EA8FFAF4(arg0 + 4);
}

void func_000C4800(s32 arg0) {
    sceHVNetfront_Module_C04FADD9(arg0 + 4);
}

void func_000C481C(s32 arg0, s32 arg1) {
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        func_00088300(arg0 + 4, 0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4858);

void func_000C48EC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C48F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C49C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4C64);

void func_000C4D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000C48F4((s32) &D_00135FB4, arg0, arg1, arg2, arg3);
}

s32 func_000C4D68(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v0 = func_000C48F4((s32) &D_00135FB4, arg0, arg1, &sp0, arg3);
    var_v0 = 0;
    if (temp_v0 != 0) {
        if (arg2 != NULL) {
            *arg2 = sp0;
        }
        temp_v0_2 = sceHVNetfront_Module_5CA39435(sp0);
        if (temp_v0_2 != 0) {
            sceHVNetfront_Module_1A02495A(temp_v0_2, temp_v0, sp0);
        }
        var_v0 = temp_v0_2;
    }
    return var_v0;
}

void func_000C4DEC(s32 arg0) {
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C4E44);

void func_000C51BC(struct Unk_func_000C51BC_0 *arg0) {
    s32 temp_v0;
    s32 var_s2;
    void *temp_a0;
    void *var_s0;

    var_s2 = 0;
    var_s0 = arg0->unk18;
    if (arg0->unk0 > 0) {
        do {
            var_s2 += 1;
            if (M2C_FIELD(var_s0, s32 *, 4) == 4) {
                temp_v0 = M2C_FIELD(var_s0, s32 *, 0xC);
                if (temp_v0 != 0) {
                    func_000C57D0(temp_v0);
                }
            }
            var_s0 += 0x40;
        } while (var_s2 < arg0->unk0);
    }
    if (arg0->unk0 > 0) {
        temp_a0 = arg0->unk18;
        if (temp_a0 != NULL) {
            func_000C4DEC((s32) temp_a0);
        }
    }
    func_000C4DEC((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5620);

void func_000C5708(s32 arg0) {
    func_000C4DEC(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C57D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C580C);

void func_000C5908(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5928);

void func_000C5A24(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5A44);

void func_000C5B40(s32 arg0) {
    if (arg0 != 0) {
        sceHVNetfront_Module_A2F4AC9E(arg0);
    }
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129794);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129A64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", D_00129B24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C5FF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C61D4);

void func_000C6454(struct Unk_func_000C6454_0 *arg0) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk68;
    if (temp_v0 != 0) {
        temp_a2 = arg0->unk54 + 0x3F;
        temp_v0_2 = arg0->unk58 + 0x3F;
        sceHVNetfront_Module_D611E938(temp_v0, 0, (((s32) (temp_a2 + ((u32) (temp_a2 >> 0x1F) >> 0x1A)) >> 6) * ((s32) (temp_v0_2 + ((u32) (temp_v0_2 >> 0x1F) >> 0x1A)) >> 6)) + 4);
    }
}

s32 func_000C64BC(struct Unk_func_000C64BC_0 *arg0, struct Unk_func_000C64BC_1 *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    var_s2 = 0;
    temp_s0 = arg1->unk8 + 0x3F;
    temp_v0 = arg1->unkC + 0x3F;
    temp_s0_2 = (((s32) (temp_s0 + ((u32) (temp_s0 >> 0x1F) >> 0x1A)) >> 6) * ((s32) (temp_v0 + ((u32) (temp_v0 >> 0x1F) >> 0x1A)) >> 6)) + 4;
    temp_v0_2 = sceHVNetfront_Module_5CA39435(temp_s0_2);
    if (temp_v0_2 != 0) {
        var_s2 = 1;
        sceHVNetfront_Module_D611E938(temp_v0_2, 0, temp_s0_2);
        arg0->unk68 = temp_v0_2;
    }
    return var_s2;
}

void func_000C6560(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C65A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6B08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6CC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C6F6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7054);

void func_000C7138(struct Unk_func_000C7138_0 *arg0, s32 arg1) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg0->unk64;
    if (temp_v0 != NULL) {
        sceHVNetfront_Module_90958874(temp_v0, arg1);
        sceHVNetfront_Module_A2F4AC9E((s32) arg0->unk64);
    }
    temp_v0_2 = arg0->unk68;
    arg0->unk64 = NULL;
    if (temp_v0_2 != 0) {
        sceHVNetfront_Module_A2F4AC9E(temp_v0_2);
    }
    arg0->unk68 = 0;
}

void func_000C7190(struct Unk_func_000BF3D0_0 *arg0) {
    sceHVNetfront_Module_0F5AA1D5((u8 *)arg0 + 0x7C, 4);
    arg0->unk498 = 0;
    arg0->unk49C = 0;
}

void func_000C71C4(struct Unk_func_000C71C4_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    void *temp_s1;

    var_v0 = arg0->unk90;
    if (var_v0 > 0) {
        do {
            temp_s0 = var_v0 - 1;
            temp_s1 = (u8 *)arg0 + 0x7C;
            temp_v0 = sceHVNetfront_Module_A20CC0BA(temp_s1, temp_s0);
            if (temp_v0 != 0) {
                func_000C7854(temp_v0);
            }
            sceHVNetfront_Module_C0A215A2(temp_s1);
            var_v0 = temp_s0;
        } while (temp_s0 > 0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7230);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C724C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C72F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C73E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C74F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7560);

s32 func_000C7568(void) {
    s32 var_v1;
    struct Unk_func_000C7568_temp_v0 *temp_v0;

    temp_v0 = func_000C74F0();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unk38;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7594);

void func_000C77E4(struct Unk_func_000C7138_0 *arg0, s32 arg1) {
    s32 **temp_v0;
    s32 temp_v0_2;

    func_000C7138(arg0, arg1);
    temp_v0 = arg0->unk5C;
    if (temp_v0 != NULL) {
        func_0008A9A0(temp_v0);
        arg0->unk5C = NULL;
    }
    if (arg0->unkC != 2) {
        func_00006048(arg0->unk4);
    }
    temp_v0_2 = arg0->unk38;
    if (temp_v0_2 != 0) {
        func_000C9644(temp_v0_2);
    }
    sceHVNetfront_Module_A2F4AC9E((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C78A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7E50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7E78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7EC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7F94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C7FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C807C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C80D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C81A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C826C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8300);

void **func_000C8334(void **arg0) {
    void **var_a0;
    void **var_v0;
    void **var_v1;

    var_v1 = M2C_FIELD(*arg0, void ***, 8);
    var_a0 = NULL;
    if (var_v1 != NULL) {
        var_v0 = M2C_FIELD(*var_v1, void ***, 0xC);
        if (var_v0 != NULL) {
            do {
                var_v1 = var_v0;
                var_v0 = M2C_FIELD(*var_v0, void ***, 0xC);
            } while (var_v0 != NULL);
        }
        var_a0 = var_v1;
    }
    return var_a0;
}

void **func_000C8374(void **arg0) {
    void **var_a0;
    void **var_v0;
    void **var_v0_2;

    var_a0 = arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        var_v0_2 = M2C_FIELD(*var_a0, void ***, 0xC);
        if (var_v0_2 != NULL) {
            do {
                var_a0 = var_v0_2;
                var_v0_2 = M2C_FIELD(*var_v0_2, void ***, 0xC);
            } while (var_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C83AC);

void func_000C842C(void **arg0, void **arg1) {
    void **temp_v0;
    struct Unk_func_000C842C_temp_v0_2 *temp_v0_2;

    temp_v0 = func_000C8334(arg0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, void ***, 0xC) = arg1;
    } else {
        M2C_FIELD(*arg0, void ***, 8) = arg1;
    }
    temp_v0_2 = *arg1;
    temp_v0_2->unk4 = arg0;
    temp_v0_2->unkC = 0;
    temp_v0_2->unk10 = temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C84D0);

s32 func_000C859C(void **arg0) {
    s32 var_v1;
    struct Unk_func_000C859C_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0;
    if ((temp_a0->unk4 != 0) || (temp_a0->unk10 != 0) || (temp_a0->unkC != 0)) {
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C85D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8638);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8698);

void func_000C86E8(s32 **arg0, s32 arg1) {
    **arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C86F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8AC4);

void func_000C8B54(s32 ***arg0, s32 arg1) {
    void *sp0;
    s32 temp_v0;

    func_000CA430(arg0, arg1);
    func_000C9C60((s32) arg0, &sp0, M2C_FIELD(**arg0, s32 *, 0x38));
    temp_v0 = func_000C9DC0((s32) arg0);
    if (func_0008AF7C(temp_v0, &sp0) == 0) {
        func_0008A9D0(temp_v0);
    }
}

void func_000C8BB8(s32 arg0, struct Unk_func_000C8BB8_1 *arg1) {
    s32 temp_s0;

    func_000CA1A4();
    temp_s0 = arg1->unk18;
    if (temp_s0 != 0) {
        if (func_0008B0C8(temp_s0, func_000C9DC0(arg0)) == 0) {
            func_0008A9D0(temp_s0);
        }
    }
}

void func_000C8C18(s32 ***arg0, s32 arg1) {
    func_000CA430(arg0, arg1);
    func_0008A9D0(func_000C9DC0((s32) arg0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8DDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C8F2C);

s32 func_000C902C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x58);
}

void func_000C9038(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x58) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C90D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C91C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C92B8);

void func_000C932C(struct Unk_func_000C932C_0 *arg0) {
    func_000D484C();
    func_000D409C(arg0);
    arg0->unk2FC = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C935C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C98CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9908);

s32 func_000C996C(struct Unk_func_000C996C_0 *arg0) {
    return arg0->unk2FC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9974);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9994);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9A60);

void func_000C9AB0(void **arg0, s32 *arg1, s32 *arg2, void **arg3) {
    struct Unk_func_000C9AB0_temp_a3 *temp_a3;
    struct Unk_func_000C9AB0_temp_t0 *temp_t0;

    temp_t0 = *arg0;
    temp_a3 = *arg3;
    *arg1 += temp_t0->unk34 - temp_a3->unk34;
    *arg2 += temp_t0->unk38 - temp_a3->unk38;
}

void func_000C9AEC(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_D5A24BD1(arg1, *arg0 + 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9B14);

void func_000C9C24(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_D5A24BD1(arg1, *arg0 + 0x34);
    func_0008A7AC(arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9C60);

void func_000C9CD0(void **arg0, s32 *arg1, s32 *arg2, void **arg3) {
    void **temp_v1;
    struct Unk_func_000C9CD0_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    *arg1 = temp_v0->unk34;
    temp_v1 = M2C_FIELD(temp_v0->unk0, void ***, 0x38);
    *arg2 = temp_v0->unk38;
    if (temp_v1 != arg3) {
        func_000C9AB0(temp_v1, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9D10);

void func_000C9D80(void **arg0, s32 *arg1, s32 *arg2, void **arg3) {
    void **temp_v1;
    struct Unk_func_000C9D80_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    *arg1 = temp_v0->unk24;
    temp_v1 = M2C_FIELD(temp_v0->unk0, void ***, 0x38);
    *arg2 = temp_v0->unk28;
    if (temp_v1 != arg3) {
        func_000C9AB0(temp_v1, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9DCC);

void func_000C9DD8(void **arg0, s32 arg1) {
    struct Unk_func_000C9DD8_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk48 = (s32) (temp_v1->unk48 | arg1);
}

void func_000C9DEC(void **arg0, s32 arg1) {
    struct Unk_func_000C9DEC_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk48 = (s32) (temp_v1->unk48 & arg1);
}

s32 func_000C9E00(void **arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(*arg0, s32 *, 0x48), 2, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9E10);

s32 func_000C9E20(void **arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(*arg0, s32 *, 0x48), 1, 1);
}

s32 func_000C9E30(void **arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(*arg0, s32 *, 0x48), 3, 1);
}

s32 func_000C9E40(void **arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(*arg0, s32 *, 0x48) ^ 0x10, 4, 1);
}

s32 func_000C9E54(void **arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(*arg0, s32 *, 0x48), 0x19, 1);
}

s32 func_000C9E64(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x50);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9E70);

void func_000C9ECC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x4C) = arg1;
}

s32 func_000C9ED8(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x4C);
}

s32 func_000C9EE4(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x70);
}

s32 func_000C9EF0(void **arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_000C9EF0_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v0 = temp_v1->unk70;
    temp_v1->unk70 = arg1;
    return temp_v0;
}

s32 func_000C9F00(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x5C);
}

void func_000C9F0C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

s32 func_000C9F18(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x60);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000C9F24);

s32 func_000C9FDC(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x64);
}

void func_000C9FE8(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x64) = arg1;
}

s32 func_000C9FF4(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x68);
}

void func_000CA000(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x68) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA00C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA018);

s32 func_000CA024(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x6C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA030);

s32 func_000CA098(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x7C);
}

void func_000CA0A4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x7C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA0B0);

void func_000CA128(s32 **arg0) {
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA144);

void func_000CA19C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA1A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA2B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA568);

void func_000CA720(s32 arg0) {
    func_000CA568(arg0, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA73C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA758);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CA9FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAA44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAC00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAC34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAC50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CACB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CAD58);

void func_000CAFF8(void ***arg0, s32 arg1) {
    void *sp0;
    sceHVNetfront_Module_D5A24BD1(&sp0, arg1);
    func_000C9A60((s32) arg0, &sp0, M2C_FIELD(**arg0, s32 *, 0x38));
    func_0008AE1C(func_000C9DC0((s32) arg0), &sp0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB04C);

void func_000CB0F4(s32 ***arg0) {
    func_000BED5C(***arg0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB11C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB58C);

void func_000CB768(void ****arg0) {
    s32 temp_v0;
    void **temp_v0_2;
    void **temp_v1;
    struct Unk_func_000CB768_temp_a0 *temp_a0;
    struct Unk_func_000CB768_temp_a3 *temp_a3;

    temp_v1 = **arg0;
    temp_a0 = M2C_FIELD(temp_v1, void **, 0);
    if ((arg0 != temp_a0->unk308) && (temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x38), (arg0 != temp_v0))) {
        func_000C9994(temp_a0, temp_v0);
        temp_v0_2 = func_000CBED8(arg0);
        temp_a3 = ***arg0;
        if (temp_v0_2 != temp_a3->unk304) {
            func_000C9038(temp_v0_2, (s32) arg0);
            return;
        }
        func_000C90D4(temp_a3, temp_a3->unk308, arg0, temp_a3);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB7F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CB8DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBC8C);

void func_000CBCF4(void ****arg0) {
    M2C_FIELD(***arg0, void *****, 0x30C) = arg0;
}

void func_000CBD08(void ****arg0) {
    M2C_FIELD(***arg0, void *****, 0x310) = arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBD1C);

void func_000CBD24(struct Unk_func_000CBD24_0 *arg0) {
    arg0->unk310 = 0;
}

void func_000CBD2C(struct Unk_func_000CBD2C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk314 = arg1;
    arg0->unk318 = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBD38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBE1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBE68);

s32 func_000CBECC(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x74);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBED8);

s32 func_000CBF3C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

s32 func_000CBF48(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void func_000CBF54(void **arg0) {
    func_000C8334(arg0);
}

s32 func_000CBF70(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xC);
}

s32 func_000CBF7C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CBF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC0D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC1C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC248);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC2B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC3AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC494);

void func_000CC4BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000CBF88(arg0, arg1, arg2, arg3, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC4D8);

s32 func_000CC55C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x8C);
}

s32 func_000CC568(void ****arg0) {
    s32 var_a1;
    struct Unk_func_000CC568_temp_v1 *temp_v1;

    temp_v1 = ***arg0;
    var_a1 = 0;
    if (temp_v1->unk31C == arg0) {
        var_a1 = temp_v1->unk320 != 0;
    }
    return var_a1;
}

void func_000CC590(void) {
    func_000CC248();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC5AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC7C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CC844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CCA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CCAE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CCB28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_08A04C", func_000CCB88);

