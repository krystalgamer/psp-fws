#include "common.h"
#include "libslim_decls.h"

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

void sceHVSlim_Library_3C6B3637(s32 arg0, M2C_UNK arg1) {
    sceHVSlim_Library_D2270E78();
    func_00008A4C(arg0, arg1);
}

void sceHVSlim_Library_EE051195(void) {
    func_00008B20();
    sceHVSlim_Library_5EEBE755();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_D2270E78);

void sceHVSlim_Library_5EEBE755(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000094);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000011C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000184);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000194);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000001CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000228);

void func_00000258(s32 arg0, M2C_UNK arg1) {
    func_00000228(arg0, arg1, sceHVSlim_Library_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000029C);

void func_000002C4(s32 arg0, s32 *arg1) {
    s32 temp_s1;

    temp_s1 = *arg1;
    func_00000228(arg0, temp_s1, sceHVSlim_Library_3EDA77E7(arg1));
}

void func_00000308(s32 arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    func_00000228(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000032C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000003D8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000464);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000584);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000006A0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000007CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000008E0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000094C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000096C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000988);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000009A4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000009C0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000009DC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000009F8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000A14);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000A30);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000A4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000A68);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000A84);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000AA0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000ABC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000AD8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000AF4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000B10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000B2C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000B4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000B6C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000B8C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000BAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000BCC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000BEC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000C0C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000C2C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000C4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000C6C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000C8C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000CAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000CCC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000CE8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D04);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D20);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D3C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D58);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D74);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000D90);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000DAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000DD0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000DEC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000E08);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000E24);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000E40);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000E60);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000E84);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000EA8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000ECC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000EE8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000F0C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000F30);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000F54);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000F78);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000F9C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000FC0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00000FE4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001000);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000101C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001114);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000126C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_1A02495A);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001404);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_D611E938);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000015CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001644);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001698);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001754);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000017C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000017E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000181C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000189C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001908);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000198C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001A10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001ABC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001B40);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001BEC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001C64);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001D0C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001DCC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001E74);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001F34);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00001FE8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002098);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002114);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000021D8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002278);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000022F4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000023B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002458);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000024DC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002560);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000026E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_59F62E22);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000028D4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002950);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000029F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002A38);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002AD4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002B08);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002B90);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_D62C3861);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002C80);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002D08);

void func_00002D90(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00002DE4(arg0, arg1, arg2, sceHVSlim_Library_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002DE4);

void func_00002E28(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00002E7C(arg0, arg1, arg2, sceHVSlim_Library_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002E7C);

void func_00002EDC(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00002F30(arg0, arg1, arg2, sceHVSlim_Library_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002F30);

void func_00002F7C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00002FD0(arg0, arg1, arg2, sceHVSlim_Library_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00002FD0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000303C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_9DAD41C2);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000333C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_15875ED4);

u8 *sceHVSlim_Library_BB5E8F0E(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 var_v1;

    var_a1 = arg1;
    var_v1 = *var_a1;
    var_a2 = arg0;
    if (var_v1 != 0) {
        do {
            *var_a2 = var_v1;
            var_a1 += 1;
            var_v1 = *var_a1;
            var_a2 += 1;
        } while (var_v1 != 0);
    }
    *var_a2 = 0;
    return arg0;
}

s32 sceHVSlim_Library_56988A48(s32 arg0, u8 *arg1) {
    sceHVSlim_Library_BB5E8F0E(arg0 + sceHVSlim_Library_15875ED4(arg0), arg1);
    return arg0;
}

s32 func_000036A4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000036F8(arg0 + sceHVSlim_Library_15875ED4(arg0), arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000036F8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003768);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003790);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_9D38B11B);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000388C);

s32 func_00003928(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 - 0x16E) >= 0) {
        var_v0 = ((arg0 - 0x16E) / 365) + 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003960);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003AA4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003B54);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003BB4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6DAD1415);

s32 func_00003E00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) == 0;
}

s32 func_00003E0C(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    return temp_v1 != 0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003E20);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003E68);

s32 func_00003EA4(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0);
    return sceHVSlim_Library_440B8F87(temp_s0, M2C_FIELD(arg0, s32 *, 8), 0) + M2C_FIELD(temp_s0, s16 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003EDC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003F10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003F4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003F70);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00003FA0);

void func_00004030(void) {
    func_00009568();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000404C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000040B4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000040FC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004134);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000418C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000041D4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004220);

s32 func_0000426C(s32 arg0) {
    return *func_000095F4(arg0, func_000040FC());
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000042A0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000042E0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000436C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004394);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004448);

void func_000044C0(void) {
    func_00009568();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000044DC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004540);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000457C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000045D4);

void func_0000461C(void *arg0, s32 arg1, M2C_UNK arg2) {
    sceHVSlim_Library_1A02495A(arg2, func_000095F4((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), M2C_FIELD(arg0, s16 *, 0xC));
}

void func_00004664(void *arg0, s32 arg1, s32 *arg2) {
    sceHVSlim_Library_1A02495A(func_000095F4((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), arg2, M2C_FIELD(arg0, s16 *, 0xC));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000046AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000046D0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004700);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004788);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000047B0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004860);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000048F0);

void sceHVSlim_Library_C04FADD9(void) {
    func_00009568();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000492C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004A3C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_E875CDC8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_8F49A62D);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6A6AB360);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004B8C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004BBC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004BF8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004C14);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_A9210C2E);

void sceHVSlim_Library_14411643(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_B6F9B107);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_A76795B7);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00004E38);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_32E4FDC6);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000050AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000517C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005240);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000052B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005330);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_B730C75F);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_16508B17);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_2B629F59);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_F489E9B4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005468);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005508);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005580);

s32 func_000055F8(s32 arg0, s32 arg1) {
    return *func_000095F4(arg0, arg1) != 0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000561C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005794);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_457A4136);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005824);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_41CEA51D);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000058EC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000590C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005968);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000059C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005A3C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005A64);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005AF4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005B14);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005B64);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005BA4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_34C99643);

void sceHVSlim_Library_B7DE4536(void *arg0) {
    func_0000761C();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_0F61EC8E);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005C68);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_1B83D569);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6B15F29F);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00005F60);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006054);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_EE1C1283);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_05F33A6C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_1DF9F3CD);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6DC3FDE4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000628C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006398);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000063F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006458);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006578);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006704);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000674C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006800);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000068A4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006954);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006A98);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006B10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006B38);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006BDC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006BFC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006C38);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006CB4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006CF0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006D2C);

void sceHVSlim_Library_81130A27(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 4) = arg2;
    M2C_FIELD(arg0, s16 *, 6) = 0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_BFE8268F);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_8E9CAD4A);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006EC8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00006FE8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007010);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000701C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000702C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007080);

void func_000070B0(s32 arg0) {
    sceHVSlim_Library_BFE8268F(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000070CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007140);

void func_00007198(s32 arg0) {
    func_00007010(arg0 + 4);
}

void func_000071B4(s32 arg0) {
    func_0000701C(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000071D0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007228);

void sceHVSlim_Library_B8C28371(void) {
    func_00009568();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007260);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000074C0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000761C);

s32 func_0000764C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) == 0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007658);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000076C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007730);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000774C);

void func_000077AC(void) {
    func_000074C0();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000077C8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007878);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007974);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00007DB0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008040);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000081BC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008400);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008448);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008490);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000084CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000852C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000085B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008700);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000880C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008890);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000894C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008A4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008A8C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008AD0);

void func_00008B20(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_5CA39435);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_24B1FCE6);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008C10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_A2F4AC9E);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_8BC25716);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6D4EE418);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_D39BDE45);

void func_00008DB8(s32 arg0, s32 arg1) {
    func_00008890(arg0 * arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008DDC);

void sceHVSlim_Library_880239D0(s32 *arg0) {
    func_00007DB0(*arg0, 1);
    func_00008700(arg0);
}

void func_00008E2C(s32 *arg0) {
    func_00008400(*arg0);
}

s32 sceHVSlim_Library_896E55F6(s32 *arg0) {
    func_00008448(*arg0, 1);
    return *arg0;
}

void sceHVSlim_Library_B29BE9CE(s32 *arg0) {
    func_00008448(*arg0, -1);
}

void sceHVSlim_Library_CA65803E(s32 arg0) {
    func_00008890(arg0, 0);
}

void func_00008EB4(s32 arg0) {
    func_00008890(arg0, 1);
}

void func_00008ED0(s32 arg0, s32 arg1) {
    func_00008890(arg0 * arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008EF4);

void sceHVSlim_Library_0D525122(s32 *arg0) {
    func_00007DB0(*arg0, 1);
    func_00008700(arg0);
}

void func_00008F44(s32 *arg0) {
    func_00008400(*arg0);
}

s32 sceHVSlim_Library_E459881C(s32 *arg0) {
    func_00008448(*arg0, 1);
    return *arg0;
}

void sceHVSlim_Library_08549708(s32 *arg0) {
    func_00008448(*arg0, -1);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00008FB0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000905C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009068);

void func_0000911C(s32 *arg0) {
    *arg0 = 0x400;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009128);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009138);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009214);

s32 func_00009520(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVSlim_Library_24B1FCE6(8);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 2;
        var_v1 = 1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009568);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_440B8F87);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000095F4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009618);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000096E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000973C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000097C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009854);

void func_0000987C(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009884);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000098DC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000098F8);

void func_00009A64(s32 arg0) {
    func_000098F8(arg0, sceHVSlim_Library_15875ED4(arg0));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009A94);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009AC0);

void func_00009B04(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    func_00002B90(temp_a0 + 0xC, M2C_FIELD(temp_a0, s32 *, 4));
}

void func_00009B28(void **arg0, s32 *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    func_00002DE4((s32) (temp_s0 + 0xC), M2C_FIELD(temp_s0, s32 *, 4), *arg1, sceHVSlim_Library_3EDA77E7(arg1));
}

void func_00009B74(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    func_00002DE4((s32) (temp_a0 + 0xC), M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

void func_00009BA4(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    func_00002E7C((s32) (temp_a0 + 0xC), M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009BD4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009C10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009C1C);

void sceHVSlim_Library_27D353B1(s32 arg0) {
    sceHVSlim_Library_D9FE99F5(arg0, sceHVSlim_Library_15875ED4(arg0));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_D9FE99F5);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_8C9ECF26);

void sceHVSlim_Library_BAFF7DF7(s32 arg0, s32 arg1) {
    func_00009E44(arg0, arg1, sceHVSlim_Library_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009E44);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_EEEBEFB7);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_3EDA77E7);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009F48);

void sceHVSlim_Library_9C96DDEB(s32 *arg0) {
    sceHVSlim_Library_D62C3861(*arg0);
}

void func_00009F9C(s32 arg0, s32 arg1) {
    func_00009FE0(arg0, arg1, sceHVSlim_Library_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00009FE0);

void sceHVSlim_Library_FF428AF7(s32 arg0, s32 *arg1) {
    func_00009F9C(arg0, *arg1);
}

void func_0000A024(s32 arg0, s32 arg1) {
    func_0000A068(arg0, arg1, sceHVSlim_Library_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A068);

void func_0000A090(s32 arg0, s32 *arg1) {
    func_0000A024(arg0, *arg1);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A0AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_5A97295F);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_700625E1);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A224);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A27C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A2D4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_C4BC962C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_C6156659);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A3F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A4E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_745DE4E7);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_DCC1C9E2);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A65C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_31885E20);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_06068307);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_5E3D4ABB);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A870);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A8F4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000A978);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AA54);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AB50);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AC24);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000ACD0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AD58);

s32 func_0000ADF0(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVSlim_Library_E459881C(arg2);
    temp_s0 = func_0000AD58(arg0, arg1, temp_s0_2, sceHVSlim_Library_3EDA77E7(arg2));
    sceHVSlim_Library_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AE68);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AF14);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AF3C);

void func_0000AFE8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_0000AFF0(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000AFF8);

void func_0000B010(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B018);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B090);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B100);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B12C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B230);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B39C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B61C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B76C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000B920);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BA44);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BACC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BB2C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BC88);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BD20);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BD78);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BDB8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BE48);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BE88);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BEBC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BF48);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BF64);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000BF80);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C014);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C030);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C04C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C0A0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_6DDF3D61);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C1BC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C1D8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C2E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C458);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C510);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C6C8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C800);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C860);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C8A8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000C8C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000CC84);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000CCC4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00014C78);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00014CA0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00014CC8);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00014CDC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00014CF0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_000150F0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_000151F0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_000152F0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015350);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015354);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015360);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015378);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015384);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_0001538C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015398);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_000153B0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000CD28);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D030);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D0EC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_000154B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D354);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D4BC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D5B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D638);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000D6CC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000DA10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000DB5C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000DE98);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000E250);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000E464);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000E638);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000E754);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000E7B0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000EB10);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000ED70);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F254);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F2B4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F310);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F4F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F698);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F6F8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F758);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F7B8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F89C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F988);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000F9F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FA58);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FA74);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FA90);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FAAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FAC8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FB30);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FBE0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FBFC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FC18);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FD60);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FEE4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0000FF78);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001000C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010090);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010114);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010174);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000101D4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010464);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010528);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000105EC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000106E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000107DC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000108C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000109AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000109F4);

void func_00010A74(void) {
    func_000109F4();
}

void func_00010A90(void) {
    func_000109F4();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010AAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010B4C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010C24);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010C40);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010C5C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010D00);

void func_00010DDC(void) {
    func_0000C0A0();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010DF8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010EF0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00010FE8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000110E0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001113C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011168);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000111D0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000112A0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011428);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011588);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011664);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011854);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011AB4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011B20);

s32 func_00011D38(void) {
    return 0x21;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011D40);

void func_00011DA0(void) {
    func_00011B20();
}

void func_00011DBC(void) {
    func_00011B20();
}

s32 func_00011DD8(void) {
    return -1;
}

s32 func_00011DE0(void) {
    return -1;
}

void func_00011DE8(s32 arg0, s32 arg1) {
    func_00008A4C(arg0, arg1);
    sceHVSlim_Library_D2270E78();
    func_00009854();
}

void func_00011E14(void) {
    func_0000987C();
    sceHVSlim_Library_5EEBE755();
    func_00008B20();
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011E40);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011EBC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011F14);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00011F8C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012028);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012070);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012124);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012158);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000121E8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012210);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012238);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012268);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001229C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000122D4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001230C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012358);

void func_000123B8(s32 *arg0) {
    *arg0 = 1;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000123C4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000124AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012560);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000126B0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000127BC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012874);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000128F0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012948);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012A08);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012A68);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012B28);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012BAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012C60);

void func_00012CB0(void) {
    func_00012028();
}

void func_00012CCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}

void func_00012CD8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012CEC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012D3C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012DC4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012E64);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012EEC);

s32 func_00012FC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00012FD0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013050);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001306C);

s32 func_0001316C(s32 *arg0) {
    func_00012158(*arg0 + 0x38);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013190);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000132AC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001330C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000134A8);

void func_0001363C(s32 **arg0) {
    s32 *temp_v1;

    temp_v1 = *arg0;
    *temp_v1 |= 4;
}

s32 func_00013650(s32 **arg0) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v1;

    temp_s0 = *arg0;
    temp_v0 = func_00012EEC(temp_s0);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = !(*temp_s0 & 4) ? 0 : -9;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013694);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000136F0);

void func_000137FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}

void func_00013808(void *arg0) {
    func_000124AC(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x6C), 0);
}

void func_0001382C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    func_000137FC(arg0);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_0001384C);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000138F8);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000139F8);

s32 func_00013B58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013B60);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013BD4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013BF0);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013C30);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013D18);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013D40);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013E04);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00013EAC);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00014034);

void func_000141C8(s32 *arg0) {
    func_000139F8(*arg0);
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_000141E4);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_DCB5C95C);

void sceHVSlim_Library_5C0C52DD(void) {
}

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", sceHVSlim_Library_00A9596D);

INCLUDE_ASM("tmp/asm/303/libslim/nonmatchings/libslim", func_00014310);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_0001591C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_0001595C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015A84);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AC4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015ACC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AD4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015ADC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AE4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AEC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AF4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015AFC);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B04);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B50);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B54);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B5C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B6C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B84);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015B9C);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015BB0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015BC8);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015BD4);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015C40);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015C58);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015C68);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00015CA0);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016018);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016028);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016038);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016048);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016298);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016318);

INCLUDE_RODATA("tmp/asm/303/libslim/nonmatchings/libslim", D_00016328);
