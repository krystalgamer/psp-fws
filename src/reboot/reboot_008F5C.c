/* cflags: -O2 -frename-registers */
#include "common.h"
#include "reboot_decls.h"

s32 func_00008F5C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000A3B4(arg0, arg1, arg2);
    func_0000E028();
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00008FB4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000900C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009094);

s32 func_000090DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000A7F4(arg0, arg1, arg2);
    func_0000E028();
    return temp_s1;
}

s32 func_00009134(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000ABCC(arg0, arg1);
    func_0000E028();
    return temp_s1;
}

s32 func_0000917C(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000AE8C(arg0, arg1);
    func_0000E028();
    return temp_s1;
}

s32 func_000091C4(struct Unk_func_000091C4_0 *arg0) {
    void **temp_a2;
    void **temp_v0;
    struct Unk_func_000091C4_temp_a0 *temp_a0;
    void *temp_a1;
    struct Unk_func_000091C4_temp_a3 *temp_a3;

    func_0000E028();
    temp_a0 = arg0->unk10;
    if (temp_a0 != NULL) {
        temp_a3 = temp_a0->unk8;
        temp_a1 = temp_a0->unk0;
        temp_a2 = temp_a0->unk4;
        temp_a3->unk8 = (s32) (temp_a3->unk8 - 1);
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_a1, void ***, 4) = temp_a2;
        } else {
            D_00017348 = temp_a2;
        }
        temp_v0 = temp_a0->unk4;
        if (temp_v0 != NULL) {
            *temp_v0 = temp_a1;
        } else {
            D_00017344 = temp_a1;
        }
        temp_a0->unk0 = (void *) D_0001734C;
        D_0001734C = temp_a0;
    }
    func_0000E028(temp_a0);
    return 0;
}

void func_00009254(s32 arg0, M2C_UNK arg1) {
    func_0000E028();
    func_0000AFCC(arg0, arg1);
}

void func_00009290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000E028();
    func_0000B148(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000092DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009344);

s32 func_00009384(s32 arg0, s32 arg1) {
    func_00001B78((s32) "%s: iob=%p name=%s\n", (s32) "UFatChdir", arg0, arg1);
    return 0x8001B000;
}

s32 func_000093BC(void) {
    s32 temp_s0;

    temp_s0 = func_00008444();
    func_0000E028();
    return temp_s0;
}

s32 func_000093E8(void) {
    s32 temp_s0;

    temp_s0 = func_00008D1C();
    func_0000E028();
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009414);

s32 func_00009484(void) {
    return 0x8001B000;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009490);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009550);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009638);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000983C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000099D0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009AD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009BC8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009C58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009D10);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00009D98);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A0E0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A2AC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A3B4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A52C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A654);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000A7F4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000ABCC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000AE8C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000AFCC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000B148);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000B284);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000B874);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000B96C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000BA58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000BDB0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000BF8C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000BFFC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000C0B4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000C140);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000C244);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000C678);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000C7EC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000CA14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000CBD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000CD00);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000CEDC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000CFBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D34C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D3DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D480);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D588);

s32 func_0000D694(struct Unk_func_0000D694_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D6A8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015B34);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015B54);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D754);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D82C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D964);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000D9E0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DA70);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DAC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015C64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DBB8);

s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (&D_0002DBF4 != NULL) {
        var_v0 = func_0000F78C(arg0, arg1, arg2, arg3, (s32) &D_0002DBF4);
    } else {
        func_00001B78((s32) "lflash.c:%s:Mallocfailed: 0x%08x\n", (s32) "df_open", 0, arg3);
        var_v0 = 0x8001000C;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DC9C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DDA8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015D38);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015D64);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015D8C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015D9C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015DBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000DEF4);

s32 func_0000E020(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E028);

s32 func_0000E098(void) {
    func_0000FC60();
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E0B8);

void func_0000E0E8(void) {
    func_0000E2F0((s32) &D_0001D890);
}

void func_0000E108(void) {
    func_0000F3D8((s32) &D_0001D890);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E128);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E178);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E1DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E230);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E294);

s32 func_0000E2E4(void) {
    return 0x8001B000;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E2F0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015E7C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015EC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015EC4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015EF4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015F30);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015F60);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015F88);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015F8C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015FA4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00015FB8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E668);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E7B0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E830);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000E924);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000EBA0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_000162E8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00016308);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_0001631C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000EE88);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000F0FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000F2F0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000F3D8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000F78C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000F990);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FAE0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FBBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FC60);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FE18);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FEC8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00016674);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0000FFF8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_000167A4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000101D4);

void func_00010328(s32 arg0) {
    s32 var_a1;
    s8 *temp_v0;

    var_a1 = 0;
    do {
        temp_v0 = arg0 + var_a1;
        var_a1 += 1;
        *temp_v0 = -1;
    } while (var_a1 < 0xC);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0001034C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010468);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010550);

s32 func_00010960(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010968);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010A14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010AC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_000169E8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010BDC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010C10);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010C44);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010C78);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", D_00016A30);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010CAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010CE8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010D24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010D6C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010DA0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010DD4);

s32 func_00010E08(void) {
    return 0x8001B000;
}

s32 func_00010E14(void) {
    return 0x8001B000;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010E20);

s32 func_00010EBC(void) {
    return 0x8001B000;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010EC8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00010F48);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011160);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011284);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000112F8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011384);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000113DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000115B8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011788);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011864);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011944);

s32 func_000119F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000119F8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011A4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011A80);

s32 func_00011AB0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011AB8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011AFC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011B24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011B40);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011B64);

void func_00011B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000115B8(arg0, arg1, arg2, arg3, 0x31);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011B9C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00011D88);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000120D4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00012220);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000122E8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0001239C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00012420);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00012570);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000125E4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00012670);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_0001277C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_000128FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot_008F5C", func_00012A30);

s32 func_00012BE0(void) {
    return D_00018BCC;
}

s32 func_00012BEC(void) {
    return D_00018BD0;
}

s32 func_00012BF8(void) {
    return D_00018BD4;
}

