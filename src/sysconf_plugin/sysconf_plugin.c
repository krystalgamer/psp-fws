#include "common.h"
#include "sysconf_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", module_start);

s32 module_stop(void) {
    func_00017BD4();
    return 0;
}

void func_0000015C(void) {
    func_0000091C();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000178);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000001CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000218);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000274);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000030C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000334);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000340);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000048C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000054C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000005EC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000610);

void func_0000073C(void) {
    func_00000610(1, 0xFFFF);
}

void func_0000075C(void) {
    func_00000610(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000077C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000007AC);

void func_00000824(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000844);

void func_000008C0(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00000824(arg0);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000008E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E30);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E48);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E60);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E7C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018E90);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018EA8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018EC0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018EDC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018EF4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F0C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F28);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F40);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F58);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018F88);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018FA0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018FB8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018FD4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00018FEC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019004);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019020);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019034);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001904C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019064);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019074);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019088);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000190A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000190B8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000190D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000190EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019104);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019120);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019144);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019170);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019184);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001919C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000191B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000191D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000191EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001920C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019228);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019248);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019268);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019288);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000192A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000192CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000192EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019310);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019330);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019354);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019378);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000193A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000193C0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000193E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019404);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019428);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001944C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019464);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001947C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019498);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000194AC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000194C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000194DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000194F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019510);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019528);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019544);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019564);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019580);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001959C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000195BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000195D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000195F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001960C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001962C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019648);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019664);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019684);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000196A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000196CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000196F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019714);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019730);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001974C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001976C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019784);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000197A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000197BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000197DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000197F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019814);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019834);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001984C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019864);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019880);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019894);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000198AC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000198C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000198E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000198F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019910);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001992C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019948);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019964);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019984);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001999C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000199B8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000199D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_000199F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019A10);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019A2C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019A4C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019A74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019A9C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019AC4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019AE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019AFC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B18);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B38);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B50);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B64);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B7C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019B94);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019BA8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019BC0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019BD8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019BF4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C0C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C40);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C54);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C6C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019C84);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019CA0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019CB8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019CD0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019CF0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019D08);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019D24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019D44);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019D68);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019D8C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019DB0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019DD4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019DF0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019E08);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_00019E20);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A510);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000091C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000A34);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000A94);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000AE8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000B24);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000B48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000B78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000C74);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000DD8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000E64);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000E94);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00000EE4);

void func_00001008(void) {
    func_0001604C();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001024);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000010E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A53C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A548);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A54C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001130);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000121C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000012A8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000012CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000134C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001384);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000013B0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001508);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A618);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001590);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000188C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000019AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000019CC);

void func_00001A48(void) {
    func_000019CC(1, 0xFFFF);
}

void func_00001A68(void) {
    func_000019CC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001A88);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001B08);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001B58);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001C0C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001C1C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A668);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A670);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001C44);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001CD0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A690);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A6A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A6B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A6BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A6E4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A6EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A710);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A728);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A73C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A744);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A750);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A758);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A76C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A784);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A7A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A7BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A7E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A804);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A818);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A830);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001D40);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001DF0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001E90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00001FFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002058);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000021C4);

void func_000021F8(void) {
    sceKernelPowerTick(1);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002214);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002780);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000283C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002CE8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002DE4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002F34);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00002FFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003708);

void func_000037C4(void) {
    func_00003990();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000037E0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000038AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000038FC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003990);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000039BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003BCC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003C78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003D54);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003E8C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003EE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A88C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A890);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A894);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A898);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A89C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8AC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8B8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8C0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8C8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8E4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8E8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A8FC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A900);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A904);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A908);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A90C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A910);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A914);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A918);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A91C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A920);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A924);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A928);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A92C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A930);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A934);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A938);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A93C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A940);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A944);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A948);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A94C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A950);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A954);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A958);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A95C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A960);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A964);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A968);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A96C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A970);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A974);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A978);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A97C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A980);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A984);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A988);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A98C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A990);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A994);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A998);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A99C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9AC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9B8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9C0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9C8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9E4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9E8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001A9FC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA00);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA04);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA08);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA0C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA10);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA14);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA18);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA1C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA20);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA28);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA2C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA30);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA34);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA38);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA3C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA40);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA44);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA48);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA4C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA50);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA54);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA58);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA5C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA60);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA64);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA68);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA6C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA70);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA78);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA7C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA80);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA84);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA88);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA8C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA90);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA94);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA98);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AA9C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAA0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAA4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAA8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAAC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAB0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAB4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAB8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AABC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAC0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAC4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAC8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AACC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAD0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAD4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAD8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AADC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAE4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAE8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAEC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAF0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAF4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAF8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AAFC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB00);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB04);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB08);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB0C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB10);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB14);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB18);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB1C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB20);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB28);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB2C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB30);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB34);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB38);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB3C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB40);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB44);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB48);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB4C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB50);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB54);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB58);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB5C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB60);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AB64);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00003F34);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004248);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004360);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000044B4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004678);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000471C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001ACD8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001ACDC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001ACF8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000048E4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004AB4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004B40);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004B64);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004BE4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004C1C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004C48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004D10);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AEC8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004D64);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004EB0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00004FCC);

void func_00005048(void) {
    func_00004FCC(1, 0xFFFF);
}

void func_00005068(void) {
    func_00004FCC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005088);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000050D8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000510C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000515C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AEE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AEFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005190);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000052C4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005650);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000056B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AF74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AF78);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AF8C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AFB0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AFCC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001AFF0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B010);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B02C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B04C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B070);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B08C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B0A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B0C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B0E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B100);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B124);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B130);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B13C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B14C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B164);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B180);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B188);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B194);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B198);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B19C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B1A0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B1A4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005718);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005890);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005B68);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005D30);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005DBC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005DE8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005E68);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005EB4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00005EE0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000060CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006120);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006658);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006688);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000066F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000067BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000067F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006914);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000695C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006A40);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006AB4);

void func_00006B30(void) {
    func_00006AB4(1, 0xFFFF);
}

void func_00006B50(void) {
    func_00006AB4(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B1B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B1D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B1EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B20C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B228);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006B70);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006C38);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006CFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006D38);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006EDC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006F58);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00006F88);

void func_00007088(void) {
    scePaf_66907719();
    sceVshCommonGui_1CF884A1();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000070AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00007228);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000072D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B2B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B2CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B2D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B2F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B320);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B344);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B370);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B394);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B3C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00007384);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00007744);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B4C8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B4DC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000077BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B5B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B5BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B5D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B5D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B5E4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B608);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B614);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B638);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B654);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B658);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B65C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B660);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B664);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B668);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B66C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00007E28);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00007F0C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000082D0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008430);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000086AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000088C8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000893C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008AEC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008BC4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008BF8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008CA0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008D44);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008DE0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008E3C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008E90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00008F18);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009278);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000092BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000093D8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000094F0);

void func_000094FC(void) {
    func_00008DE0(0);
}

void func_00009518(void) {
    func_00008DE0(0);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009534);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000095A8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000096BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000096F0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009794);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009828);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B720);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B730);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B744);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000988C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009A78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009AC8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009B00);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009B54);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009BC4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B780);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B788);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B798);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B7C4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009C34);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009D78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00009DF0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A068);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A2C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A364);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A3B0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A3CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A47C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A57C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A608);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A694);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A6B8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A738);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A770);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A79C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A848);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B938);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A89C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A9B4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000A9E4);

void func_0000AA60(void) {
    func_0000A9E4(1, 0xFFFF);
}

void func_0000AA80(void) {
    func_0000A9E4(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000AAA0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000AF94);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B97C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B980);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B98C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B998);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B9B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001B9CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B080);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B0A8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B0D0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B0F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B148);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B17C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B1CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B200);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B2B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BA14);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BA18);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BA1C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BA20);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BA24);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B4FC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B634);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B6C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B6E4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B764);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B79C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B7C8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B98C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BB84);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000B9E0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BC6C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BC9C);

void func_0000BD18(void) {
    func_0000BC9C(1, 0xFFFF);
}

void func_0000BD38(void) {
    func_0000BC9C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BD58);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BD94);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BDEC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BE28);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BEDC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BB9C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BBAC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BBBC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BBD0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BBDC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BBE4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BC20);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000BFB8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BC3C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000C280);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BC58);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000C354);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000C49C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000C970);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD2C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD34);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD40);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD50);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD64);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD84);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BD94);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDAC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDC4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDD0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDEC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BDF8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE10);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE38);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE54);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE78);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE84);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BE90);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BEA0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BEB8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BED4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BEF8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF18);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF38);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF50);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF60);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF70);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BF94);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BFAC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BFCC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BFE0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BFE4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001BFF4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C018);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C024);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C048);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C06C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C090);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C0B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C0D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C0DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C0F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C104);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C118);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C12C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C140);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C154);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C168);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C17C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C190);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C1A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C1BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C1D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C204);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C228);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C248);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C264);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C290);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C2BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C2D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C2F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C310);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C32C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C344);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C360);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C380);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C3A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C3C0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C3DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C3FC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C418);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C43C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C45C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C474);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C490);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C4A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C4C4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C4E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C4FC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C524);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C54C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C56C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C590);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C5BC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C5DC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C5F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C620);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C648);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C658);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C674);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C68C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C6B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C6C0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C6E0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C6F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C71C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C738);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C754);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C768);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C780);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C7A8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C7CC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C7F0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C7F8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C81C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C840);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C864);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C888);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C8B0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C8D0);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C8E8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C90C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C938);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C95C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C970);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C99C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C9B4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C9D4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001C9F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CA24);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CA50);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000C994);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CA48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CB08);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CB48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CBBC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CC1C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CCB0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CD40);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CE0C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CE6C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000CF80);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D09C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D1C4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D380);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D500);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D604);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D640);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D750);

void func_0000D864(void) {
    scePaf_66907719();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D880);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D8D8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D97C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000D9CC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DA24);

s32 func_0000DA5C(void) {
    sceKernelPowerLock(0);
    return 0;
}

void func_0000DA7C(void) {
    vsh_8F76CA2A();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DA98);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DAEC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DB34);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DC60);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DD88);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000DF44);

void func_0000E0D4(void) {
    scePaf_66907719();
    sceVshCommonGui_1CF884A1();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000E0F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000E8C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000EB20);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000ECB8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000EEA8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000EF2C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F1B8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F22C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F450);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F510);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F56C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F8F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000F95C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FC68);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FCF4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FD18);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FD98);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FDD0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0000FDFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000108D0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00010AC0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00010D4C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000110EC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001116C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000111EC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00011264);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000117FC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00011850);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000118B0);

void func_00011A60(void) {
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00011A68);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012670);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012700);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000128B0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000128F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012958);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012A08);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012A7C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012ACC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012B7C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012DD4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012FA0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00012FE8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013038);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000131AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013348);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000134F8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013540);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013590);

void func_00013774(void) {
    func_00013590(1, 0xFFFF);
}

void func_00013794(void) {
    func_00013590(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000137B4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013880);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000138C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013910);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013944);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000139F4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CBC0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013B74);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013C00);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013C8C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013CB0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013D30);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013D68);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013D94);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013EC8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CC14);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00013F1C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000140C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000140F0);

void func_0001416C(void) {
    func_000140F0(1, 0xFFFF);
}

void func_0001418C(void) {
    func_000140F0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000141AC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001420C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CC2C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014240);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014338);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014368);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CC74);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CC80);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CC8C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000144FC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001467C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000146EC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014798);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CCE4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CCF0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000147FC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000149C0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014B8C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014CBC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014D48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014D6C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014DEC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014E24);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014E50);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014F90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00014FE4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001518C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000151BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015210);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015278);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000152B4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015314);

void func_00015390(void) {
    func_00015314(1, 0xFFFF);
}

void func_000153B0(void) {
    func_00015314(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000153D0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015484);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000155D8);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CE5C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CE8C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CE90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001561C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015708);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015794);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000157B8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015838);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015870);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001589C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015948);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CF48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001599C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015C5C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015C8C);

void func_00015D08(void) {
    func_00015C8C(1, 0xFFFF);
}

void func_00015D28(void) {
    func_00015C8C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015D48);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015D90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015DD8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015E14);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015E50);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015E90);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015EE0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00015F5C);

void func_00015F98(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

void func_00015FF0(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_0001604C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016078);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001CF60);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000160C4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000162B8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016310);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016484);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D03C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D050);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D068);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D07C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D088);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D098);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D0A4);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001D0AC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001EDA0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000164D4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016618);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016728);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016A7C);

void func_00016B5C(void) {
    func_00000A94();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016B78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016BEC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016C3C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016CD0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016CFC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016D2C);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016DD4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016EF0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00016F78);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017078);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017354);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000173A4);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000173D8);

void func_000174C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00017560();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000174E8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017560);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017580);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000175BC);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000175F8);

void func_00017644(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_61FE226A();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017668);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017694);

void func_000176C4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    vsh_7ADF6A69();
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000176EC);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001EE04);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017728);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000177D0);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017840);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_000178A8);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017924);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017A18);

s32 func_00017A68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00017A70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00017A78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00017A80(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00017A88(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00017A90(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00017A98(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017AA0);

void func_00017AC4(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}

void func_00017AE0(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_00017AFC(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017B18);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017B40);

INCLUDE_ASM("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", func_00017B7C);

INCLUDE_RODATA("tmp/asm/282/sysconf_plugin/nonmatchings/sysconf_plugin", D_0001EF18);
