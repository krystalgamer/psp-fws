/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009850);

s32 func_00009880(s32 arg0) {
    func_000098A4(arg0);
    return 0xF4240;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_000098A4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000990C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000998C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_000099FC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009A48);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009BEC);

s32 func_00009C34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2518) = 0;
    return 0;
}

s32 func_00009C40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2518) == 1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009C50);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009CB4);

s32 func_00009CE0(void *arg0) {
    void *temp_a4;
    void *temp_a6;

    temp_a4 = arg0 + 0x24F4;
    temp_a6 = arg0 + 0x24A0;
    M2C_FIELD(temp_a6, s32 *, 0xC) = (s32) M2C_FIELD(temp_a4, s32 *, 0x18);
    M2C_FIELD(temp_a4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a4, s32 *, 0xC) + 1);
    M2C_FIELD(temp_a6, s32 *, 0x14) = 0;
    func_00009098(M2C_FIELD(arg0, s32 *, 0x18), arg0 + 0x1C, arg0 + 0x10, arg0 + 0x2398, 1, 1, 1, 0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009D3C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009D68);

s32 func_00009D80(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 1;
    return 0;
}

s32 func_00009D90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24F4) = 1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009DA0);

s32 func_00009DB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x24FC) = 0;
    func_00009098(M2C_FIELD(arg0, s32 *, 0x18), arg0 + 0x1C, arg0 + 0x10, arg0 + 0x2398, 1, 1, 2, 0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009DF8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009E48);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009E88);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_00009FAC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A080);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A100);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A1A4);

s32 func_0000A1F0(void) {
    return 0;
}

s32 func_0000A1F8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A200);

s32 func_0000A23C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30F4) = 0;
    return 0;
}

s32 func_0000A248(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30F4) == 1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A258);

s32 func_0000A354(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2520;
    sceNet_lib_EF097716(arg0 + 0x2E, arg0 + 0x2B0C, M2C_FIELD(temp_s1, s32 *, 0xBC8));
    func_00009098(M2C_FIELD(arg0, s32 *, 0x18), (s32) (arg0 + 0x1C), (s32) (arg0 + 0x10), (s32) (arg0 + 0x2398), 1, 1, 0, (s32) (u16) M2C_FIELD(temp_s1, s32 *, 0xBC8));
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A3C0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A418);

s32 func_0000A448(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24E8) = 1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A458);

s32 func_0000A46C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24D4) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A478);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A490);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A590);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A5D0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A610);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A650);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A74C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A808);

s32 func_0000A84C(void) {
    return 0;
}

s32 func_0000A854(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A85C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A900);

s32 func_0000A95C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A964);

s32 func_0000A9A4(void) {
    return 0;
}

s32 func_0000A9AC(s32 arg0) {
    func_0000B328(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000A9CC);

s32 func_0000AB74(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2520) = 1;
    M2C_FIELD(arg0, s32 *, 0x2524) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AB88);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AC1C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AC70);

s32 func_0000ACBC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24B8) = 1;
    return 0;
}

s32 func_0000ACCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24B0) = 1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000ACDC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AD2C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AD6C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000AE80);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B0C0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B130);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B1D8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B218);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B258);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B298);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B2D8);

s32 func_0000B318(void) {
    return 0;
}

s32 func_0000B320(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B328);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B464);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B530);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B5B8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B6A4);

void func_0000B720(void) {
    sceNet_lib_57CC57DA(&D_000177A0, 0, 0x70);
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B748);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B7A4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B7FC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000B974);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BAEC);

void func_0000BBEC(s32 arg0) {
    func_0000BE5C(arg0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BC08);

void func_0000BCBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000BF90(arg0, arg1, arg2, arg3);
}

s32 func_0000BCD8(void) {
    func_0000C174();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BCF8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BD34);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E10);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E14);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E18);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E1C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E20);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E24);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E28);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E2C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E30);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E34);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E58);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E5C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E60);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E64);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E68);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E6C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E70);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E74);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E78);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E98);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010E9C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EA0);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EA4);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EA8);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EAC);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EB0);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EB4);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EB8);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EBC);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EC0);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EC4);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010EC8);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010ECC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BD70);

void func_0000BE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00009098(arg0, arg1, arg2, arg3, 0, 1, arg4 & 0xFF, arg5 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BE5C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000BF90);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C174);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C248);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C3D4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C594);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C638);

void func_0000C738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B974(arg2, arg3, arg0, arg1, arg4);
}

void func_0000C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B7FC(arg2, arg3, arg0, arg1, arg4);
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C798);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C830);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000C9BC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000CCAC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D050);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D184);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D1CC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D3E4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D544);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D714);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000D930);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000DA90);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000DC60);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000DDCC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000DF14);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E0B4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E254);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E2C0);

void func_0000E320(void) {
    func_0000BD70(2, 0);
}

void func_0000E340(void) {
    func_0000BD70(3, 0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E360);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E3A4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E3FC);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E454);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E4BC);

s32 func_0000E4D0(void) {
    return 0;
}

s32 func_0000E4D8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E4E0);

s32 func_0000E524(s32 *arg0) {
    func_0000BD70(4, 0x80411081);
    *arg0 = 0;
    return -1;
}

s32 func_0000E55C(s32 *arg0) {
    *arg0 = 0;
    return -1;
}

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F40);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F44);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F48);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F4C);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F50);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010F54);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010FE4);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", D_00010FF4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E568);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_009850", func_0000E728);

s32 func_0000E8E8(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, u32 *, 0x10), 4U);
    return 0;
}

