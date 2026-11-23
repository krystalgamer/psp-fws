#include "common.h"
#include "reboot_decls.h"

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000000);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", RebootForKernel_72E280A8);

s32 syslib_D3744BE0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000003BC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000003C8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000450);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000554);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000720);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000A9C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_0001484C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_0001486C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00000E48);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000010CC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000011B4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001AAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001B78);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001C14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001C20);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001C34);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001C64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001C74);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001CA4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001CB4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001CC0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001CD0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001CE8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D20);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D3C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D74);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001D80);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00001E20);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014B10);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014B30);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014B4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002050);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002294);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002938);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002964);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000298C);

void func_00002A00(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002A28);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002A4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002A90);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002AC4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002B0C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002B44);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002C2C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002C58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002C80);

s32 func_00002CB8(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002CC0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002CCC);

void func_00002CF0(void) {
    func_00002F14();
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D0C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D2C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D50);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D74);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D84);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002D90);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002DC8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002E30);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002EA0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002F14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002F5C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00002FDC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003058);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000030B8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000030EC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000311C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000031B8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003234);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000327C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003994);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000039E0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003A14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003A3C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003A7C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003ABC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003B3C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003B48);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003B78);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003BC4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003CA8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003D8C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003E7C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003ED8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003F0C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003F18);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00003F58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004034);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004090);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000040C4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000040CC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004244);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004270);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004298);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000433C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000436C);

void func_000043B8(void) {
    func_000040CC();
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000043D4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000043FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000441C);

s32 func_0000443C(void) {
    return 0;
}

s32 func_00004444(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000444C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000044D0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004558);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004670);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000046C0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000477C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014E18);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014EA8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014EAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004B70);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004BE8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004E18);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00014FF4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015000);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_0001500C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015050);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00004FC4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000150A4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000150C4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000526C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015164);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00005518);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000059A8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00005BD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00005E10);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00005E20);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00005EAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00006298);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00006538);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000152C4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000152D0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00006B24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00006F0C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015500);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015508);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015514);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015520);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015528);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00006FA4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000070A4);

s32 func_00007140(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015550);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015558);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007148);

s32 func_000071F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000071F8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000725C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000072BC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000072FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007350);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000748C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007978);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000079E4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007C3C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007D24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00007E50);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008268);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000155A8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000155D4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008368);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008444);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008D1C);

s32 func_00008E68(void) {
    return 0;
}

s32 func_00008E70(void) {
    return 0;
}

void func_00008E78(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000E028();
    func_00007E50(arg0, arg1, arg2, arg3);
}

s32 func_00008ED4(s32 arg0) {
    s32 temp_s0;

    func_0000E028();
    temp_s0 = func_00008268(arg0);
    func_0000E028();
    return temp_s0;
}

void func_00008F0C(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000E028();
    func_000079E4(M2C_FIELD(arg0, s32 *, 0x10), arg1, arg2, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008F5C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00008FB4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000900C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009094);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000090DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009134);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000917C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000091C4);

void func_00009254(s32 arg0, M2C_UNK arg1) {
    func_0000E028();
    func_0000AFCC(arg0, arg1);
}

void func_00009290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000E028();
    func_0000B148(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000092DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009344);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009384);

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

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009414);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009484);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009490);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009550);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009638);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000983C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000099D0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009AD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009BC8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009C58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009D10);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00009D98);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A0E0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A2AC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A3B4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A52C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A654);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000A7F4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000ABCC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000AE8C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000AFCC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000B148);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000B284);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000B874);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000B96C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000BA58);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000BDB0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000BF8C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000BFFC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000C0B4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000C140);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000C244);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000C678);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000C7EC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000CA14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000CBD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000CD00);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000CEDC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000CFBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D34C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D3DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D480);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D588);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D694);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D6A8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015B34);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015B54);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D754);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D82C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D964);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000D9E0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DA70);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DAC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015C64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DBB8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DC4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DC9C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DDA8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015D38);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015D64);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015D8C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015D9C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015DBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000DEF4);

s32 func_0000E020(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E028);

s32 func_0000E098(void) {
    func_0000FC60();
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E0B8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E0E8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E108);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E128);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E178);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E1DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E230);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E294);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E2E4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E2F0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015E7C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015EC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015EC4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015EF4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015F30);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015F60);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015F88);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015F8C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015FA4);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00015FB8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E668);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E7B0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E830);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000E924);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000EBA0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000162E8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00016308);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_0001631C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000EE88);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000F0FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000F2F0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000F3D8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000F78C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000F990);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FAE0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FBBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FC60);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FE18);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FEC8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00016674);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0000FFF8);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000167A4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000101D4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010328);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001034C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010468);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010550);

s32 func_00010960(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010968);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010A14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010AC0);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_000169E8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010BDC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010C10);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010C44);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010C78);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00016A30);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010CAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010CE8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010D24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010D6C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010DA0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010DD4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010E08);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010E14);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010E20);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010EBC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010EC8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00010F48);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011160);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011284);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000112F8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011384);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000113DC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000115B8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011788);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011864);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011944);

s32 func_000119F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000119F8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011A4C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011A80);

s32 func_00011AB0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011AB8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011AFC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011B24);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011B40);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011B64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011B80);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011B9C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00011D88);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000120D4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012220);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000122E8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001239C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012420);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012570);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000125E4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012670);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001277C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000128FC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012A30);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012BE0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012BEC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012BF8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012C04);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012C64);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012E90);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012EAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00012EC8);

void func_0001318C(void) {
    func_000135C4(1, 0);
}

void func_000131AC(void) {
    func_000135C4(2, 1);
}

void func_000131CC(void) {
    func_000135C4(2, 0);
}

void func_000131EC(void) {
    func_000135C4(4, 1);
}

void func_0001320C(void) {
    func_000135C4(4, 0);
}

void func_0001322C(void) {
    func_000135C4(8, 1);
}

void func_0001324C(void) {
    func_000135C4(8, 0);
}

void func_0001326C(void) {
    func_000135C4(0x10, 1);
}

void func_0001328C(void) {
    func_000135C4(0x10, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000132AC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000132F0);

void func_00013334(void) {
    func_000135C4(0x80, 1);
}

void func_00013354(void) {
    func_000135C4(0x80, 0);
}

void func_00013374(void) {
    func_000135C4(0x100, 1);
}

void func_00013394(void) {
    func_000135C4(0x100, 0);
}

void func_000133B4(void) {
    func_000135C4(0x200, 1);
}

void func_000133D4(void) {
    func_000135C4(0x200, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000133F4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013438);

void func_0001347C(void) {
    func_000135C4(0x1000, 1);
}

void func_0001349C(void) {
    func_000135C4(0x1000, 0);
}

void func_000134BC(void) {
    func_000135C4(0x2000, 1);
}

void func_000134DC(void) {
    func_000135C4(0x2000, 0);
}

void func_000134FC(void) {
    func_000135C4(0x4000, 1);
}

void func_0001351C(void) {
    func_000135C4(0x4000, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001353C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013580);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000135C4);

void func_000135F0(void) {
    func_00013AAC(2, 1);
}

void func_00013610(void) {
    func_00013AAC(2, 0);
}

void func_00013630(void) {
    func_00013AAC(4, 1);
}

void func_00013650(void) {
    func_00013AAC(4, 0);
}

void func_00013670(void) {
    func_00013AAC(8, 1);
}

void func_00013690(void) {
    func_00013AAC(8, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000136B0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000136F4);

void func_00013738(void) {
    func_00013AAC(0x40, 1);
}

void func_00013758(void) {
    func_00013AAC(0x40, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013778);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000137BC);

void func_00013800(void) {
    func_00013AAC(0x200, 1);
}

void func_00013820(void) {
    func_00013AAC(0x200, 0);
}

void func_00013840(void) {
    func_00013AAC(0x400, 1);
}

void func_00013860(void) {
    func_00013AAC(0x400, 0);
}

void func_00013880(void) {
    func_00013AAC(0x800, 1);
}

void func_000138A0(void) {
    func_00013AAC(0x800, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000138C0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000138CC);

void func_000138D8(void) {
    func_00013AAC(0x2000, 1);
}

void func_000138F8(void) {
    func_00013AAC(0x2000, 0);
}

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013918);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001395C);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000139A0);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_000139E4);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013A28);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013A44);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013A60);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013AAC);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_00013AD8);

INCLUDE_ASM("tmp/asm/151/reboot/nonmatchings/reboot", func_0001404C);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00016C14);

INCLUDE_RODATA("tmp/asm/151/reboot/nonmatchings/reboot", D_00016CE0);
