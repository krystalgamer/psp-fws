#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000000C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000148);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000180);

void func_00000190(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000001C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000001EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000210);

s32 func_00000250(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x690) = arg1;
    return arg1;
}

s32 func_0000025C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x690);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00000560);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x68C) = 1;
    func_00005DE4();
    return 0;
}

s32 sceHVNetfront_Module_7011BF0F(void) {
    return 0;
}

s32 module_reboot_before(void) {
    func_00005984();
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_75F9756F);

s32 sceHVNetfront_Module_16459EDF(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x68C) = 1;
    M2C_FIELD(func_00009DFC(), s32 *, 0x694) = 1;
    func_00005DE4();
    return M2C_FIELD(func_00009DFC(), s32 *, 0x6A0);
}

void sceHVNetfront_Module_F6316E3A(void) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x6A8) = 1;
    sceHVNetfront_Module_16459EDF();
}

void sceHVNetfront_Module_8AB563FF(void) {
    func_000001C4();
    func_0000BCEC(func_00009DFC());
    func_000001EC();
}

s32 sceHVNetfront_Module_7526590E(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x150);
}

void sceHVNetfront_Module_2A1DCF7E(s32 *arg0) {
    *arg0 = func_00000210();
    func_00009EC0();
}

void sceHVNetfront_Module_081DEF97(void) {
    func_00000154();
}

void sceHVNetfront_Module_D97D8CB2(s32 arg0) {
    func_0000C108(func_00009DFC(), arg0);
}

s32 sceHVNetfront_Module_07C7E121(void) {
    func_0000C358(func_00009DFC());
    return 1;
}

s32 sceHVNetfront_Module_5575313B(void) {
    func_0000C3A0(func_00009DFC());
    return 1;
}

s32 sceHVNetfront_Module_FD6F2F09(void) {
    func_0000C430(func_00009DFC());
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_84BDA560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D7A2F26A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F0614C11);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7E1DC98D);

s32 sceHVNetfront_Module_A499ED24(void) {
    sceKernelSetEventFlag(M2C_FIELD(func_00009DFC(), s32 *, 0x8C8), 1);
    sceHVNetfront_Module_F0614C11();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3F43F04B);

s32 sceHVNetfront_Module_DB779BC4(s32 arg0, M2C_UNK arg1) {
    func_0000D0FC(func_00009DFC(), arg0, arg1, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E7092282);

s32 sceHVNetfront_Module_D33B0FB2(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00009DFC();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x850) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x854) = arg1;
    }
    func_00011E80(temp_v0, 1);
    func_0000D2C0(temp_v0, arg0, arg1);
    return 1;
}

s32 sceHVNetfront_Module_5CCF6A9B(s32 arg0, M2C_UNK arg1) {
    func_0000D334(func_00009DFC(), arg0, arg1);
    return 1;
}

s32 sceHVNetfront_Module_9373433B(s32 arg0, M2C_UNK arg1) {
    func_0000D36C(func_00009DFC(), arg0, arg1);
    return 1;
}

s32 sceHVNetfront_Module_2BC1C7AD(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000C77C(func_00009DFC(), arg0, arg1, arg2);
    return 1;
}

void sceHVNetfront_Module_DB246B1D(s32 arg0) {
    M2C_FIELD(func_00009DFC(), s32 *, 0x920) = arg0;
}

s32 sceHVNetfront_Module_98A11887(s32 arg0) {
    func_000001C4();
    func_0000C51C(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9C39A39F);

s32 sceHVNetfront_Module_5CB97BC6(s32 arg0) {
    func_000001C4();
    func_0000C5EC(func_00009DFC(), arg0);
    func_000001EC();
    return 1;
}

void sceHVNetfront_Module_75B6ED88(s32 arg0) {
    void *temp_v0;

    func_000001C4();
    temp_v0 = func_00009DFC();
    M2C_FIELD(temp_v0, s32 *, 0x908) = arg0;
    func_0000C654(temp_v0);
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A1EB6B4A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED6A8557);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B58682CA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E3D7CBBF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00001920);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A6DA31B1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_52E49519);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DCF92220);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D7406F0);

s32 sceHVNetfront_Module_0A399803(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    func_000001C4();
    temp_s0 = func_0000CDB8(func_00009DFC(), arg0, arg1);
    func_000001EC();
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D3206B42);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_504892A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3C889DF2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8CAFBEC9);

void sceHVNetfront_Module_22E35EF2(void) {
    func_000001C4();
}

void sceHVNetfront_Module_F2FE2FA3(void) {
    func_000001EC();
}

void sceHVNetfront_Module_AB5986DF(void) {
    func_000001C4();
    func_0000F52C();
    func_000001EC();
}

void sceHVNetfront_Module_62C6B537(void) {
    func_000001C4();
    func_0000F568();
    func_000001EC();
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D65C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B77DC646);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E0C9280E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34C35025);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1D9201D7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_08D6708A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_79EB264E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1E72A5E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB80F94F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A31DF7D9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6E8CFF36);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_30B217A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ADCA8B1B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8C46FE20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3C66313A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_321CEE51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B475D7A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_495CE47E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DA82E6B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E17B3197);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BD1979CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_886C700E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_744A355F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_234B1549);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ADE7A8D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_271C1E57);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AD77DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD3824C9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDB584F2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5E20E209);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_71EC1568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3990B41B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB2076F2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_07383DE7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D537E0DB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_451069DF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E4DE49A9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_969B6862);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_58141642);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A410886F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_657F04A7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_523DD19F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_02DDC9AA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9DF2A2C5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E2C269E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A777EA56);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2F312E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_97CBB02D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2BDCADD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_88B043A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000431C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000043AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00004408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00004464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000044BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_76411162);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EBC39918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39E18C54);

void sceHVNetfront_Module_9C897ECC(s32 arg0) {
    func_000001C4();
    M2C_FIELD(func_00009DFC(), s32 *, 0x70) = arg0;
    func_000001EC();
}

void sceHVNetfront_Module_533FF02B(s32 arg0) {
    func_000001C4();
    M2C_FIELD(func_00009DFC(), s32 *, 0x74) = arg0;
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E704D8E3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_02BC68FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E884F119);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_59FD01C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000049F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A9AB5006);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7F315DEB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0D966A22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C4CEE604);

void sceHVNetfront_Module_144F7F76(void) {
    func_000001C4();
    func_000143E0(func_00009DFC());
    func_000001EC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A89C5C06);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7A785747);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_67B49F49);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_22C21178);

void sceHVNetfront_Module_49A6D9F9(void) {
    func_0000C318();
    sceHVNetfront_Module_7E1DC98D();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000051D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000051E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000051EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005254);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005348);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000053C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000549C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000054EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B2D31636);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_71125C97);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20044791);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5641BC86);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_60ED98CD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000058DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005984);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000059CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005A0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005B24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005DBC);

void func_00005DDC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005DE4);

void func_00005E08(void) {
    sceKernelSleepThread();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_00A9596D);

s32 func_00005E74(void) {
    return 1;
}

s32 func_00005E7C(void) {
    return 0;
}

void func_00005E84(void) {
    func_0000A318(0x64);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005ED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005F70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00005FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000060D8);

void func_00006154(void) {
    sceHVNetfront_Module_831B4A41();
}

void func_00006170(void) {
    sceHVNetfront_Module_6F1E32E6();
}

void func_0000618C(void) {
    func_000086D8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000061A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000061F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006268);

void func_000062AC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000062B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006414);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000064A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000067F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006868);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000068EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4C5A5066);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006CF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006D88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00006DE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AF7B3F4B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA0DA285);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000074D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_74FB57AC);

void func_00007570(void) {
}

void func_00007578(void) {
}

void func_00007580(void) {
}

void func_00007588(void) {
}

void func_00007590(void) {
}

void func_00007598(void) {
}

s32 func_000075A0(void) {
    return 1;
}

void func_000075A8(void) {
}

s32 func_000075B0(void) {
    return 0;
}

void func_000075B8(void) {
}

s32 func_000075C0(void) {
    return 0;
}

s32 func_000075C8(void) {
    return 0;
}

void func_000075D0(void) {
}

void func_000075D8(void) {
}

void func_000075E0(void) {
}

void func_000075E8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000075F0);

void func_00007624(void) {
}

void func_0000762C(void) {
}

void func_00007634(void) {
}

void sceHVNetfront_Module_5412D662(void) {
    sceHVNetfront_Module_24B1FCE6(0x7C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_447295B3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6A661C7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F21FB535);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DCE1309);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_76D0A3FA);

s32 sceHVNetfront_Module_4DC20E88(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007944);

void func_0000795C(void) {
}

s32 sceHVNetfront_Module_AE662080(void) {
    return 0x7FFFFFFF;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_085F8604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDE9ECBA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A0E6CD64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007B3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D7CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D7D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D84C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D94C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A04377E3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F55D8699);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16240448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_19BA8C5E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1C77605A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007F00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007F40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00007F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008030);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000082C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000858C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_831B4A41);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6F1E32E6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000086D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000871C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008770);

void func_000087C0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000087C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0FB2D27A);

void func_00008ABC(void *arg0) {
    func_000087C8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00008AE8(void) {
    sceHVNetfront_Module_5CA39435();
}

void func_00008B04(void) {
    sceHVNetfront_Module_A2F4AC9E();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008BF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008D40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00008DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000092C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009318);

s32 func_0000948C(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009494);

void func_000094F0(void *arg0) {
    if (arg0 != NULL) {
        func_000095F4();
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x38)(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000095F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000096A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009750);

s32 func_00009798(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_000097B8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000097D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000098C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000991C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000099E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009C3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009CAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009D1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009D8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E08);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009EC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009ECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D988);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011D9B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DDC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00009F58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6CAE4020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A2B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A348);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A448);

void func_0000A494(s32 arg0) {
    func_00023780();
    func_00023880(arg0, 0x1E0, 0x110);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A4C8);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A828);

void func_0000A92C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000A934);

s32 func_0000AA38(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AA40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000ABE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AC50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AD18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AD94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000ADD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AE24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AF44);

s32 func_0000AF68(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000AF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B07C);

s32 func_0000B13C(void) {
    return 0;
}

s32 func_0000B144(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B290);

void func_0000B2E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void func_0000B2F8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B5A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DE90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DE98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B61C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DEF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000B724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BCEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BD18);

void func_0000BECC(void *arg0) {
    sceHVWWW_Library_52782A62(M2C_FIELD(arg0, s32 *, 0x44), 0);
}

void func_0000BEEC(void *arg0) {
    sceHVWWW_Library_3CAF5AEF(M2C_FIELD(arg0, s32 *, 0x44));
}

s32 func_0000BF08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BF10);

void func_0000BFD0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x878) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000BFD8);

void func_0000C100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x87C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C3A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C3E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C51C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C5EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C654);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C77C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C924);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000C9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CAFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CDB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000CEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D0FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D18C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D2C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D36C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D3A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D4BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D614);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D6BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D7DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000D9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DA58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DBA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DC54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DD04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DD5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DDB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DE0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DE64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DF44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000DFF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E0A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E10C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E36C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E3B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000E520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CAA4BDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6BA06056);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E25ACBBB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A72A9616);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DBF36A05);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C1CBF794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2764F63A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B5E28668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EC88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000ED64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EE48);

void func_0000EE8C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000EC38(arg1, arg2);
    func_0000EC88(arg0, 0x10024, arg3);
}

void func_0000EEDC(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0000DFF4(func_00009DFC(), arg1);
    func_0000EC88(arg0, 0x10017, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EF38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000EF7C);

void func_0000EFC0(s32 arg0, s32 arg1) {
    func_0000D784();
    func_0000EC88(arg0, 0x10016, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F004);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F08C);

void func_0000F0D0(s32 arg0, s32 arg1) {
    func_0000DD5C();
    func_0000EC88(arg0, 0x10010, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F114);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F1C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F2CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F354);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F3DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F52C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D7F88071);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F7E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F86C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000F9A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FA34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FAB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FB64);

s32 sceHVNetfront_Module_E0BC5E08(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x908);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FC40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FE90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011DF98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0000FEC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010AA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010AFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010CB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010DA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010E98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00010F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000113C8);

s32 func_00011574(void *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
        sceHVNetfront_Module_A2F4AC9E(M2C_FIELD(arg0, void **, 0xC));
        sceHVNetfront_Module_A2F4AC9E(arg0);
        func_00015FAC(temp_s0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000115C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000116BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000117A4);

void func_00011838(void *arg0) {
    s32 temp_a0;
    void *temp_s0;
    void *var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_a0 > 0) {
        sceKernelDeleteSema(temp_a0);
    }
    var_v0 = func_0001189C(arg0);
    if (var_v0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 0x20);
            func_00011760(arg0, var_v0);
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001189C);

s32 func_000118A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void func_000118AC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_000118B4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000118BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001198C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011B30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011CFC);

void func_00011D74(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x40), 1, 0);
}

void func_00011D98(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x40), 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011DB8);

void func_00011E38(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x858) = arg1;
    }
}

s32 func_00011E48(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x85C);
    }
    return var_v0;
}

void func_00011E5C(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x85C) = arg1;
    }
}

s32 func_00011E6C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x868);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011E90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00011FCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012130);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012360);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001249C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012608);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000127C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000129B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E0C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E0E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00012DF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000131C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013324);

void func_0001345C(s32 arg0) {
    func_00013324(func_00009DFC() + 0x880, arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013614);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000136F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000139A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013B80);

s32 func_00013CCC(s32 arg0, M2C_UNK arg1) {
    return (func_00013B80(arg0 + 0x89C, 0, arg1) != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00013F10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000142EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000143E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014794);

s32 sceHVNetfront_Module_D9956972(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x910);
}

s32 sceHVNetfront_Module_CAE659B5(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x69C);
}

s32 func_00014900(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x698);
}

s32 func_00014920(void) {
    return M2C_FIELD(func_00009DFC(), s32 *, 0x6A4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014940);

s32 func_000149F4(void) {
    return 0;
}

void func_000149FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_00009E08();
    M2C_FIELD(arg0, s32 *, 4) = func_00009E7C();
}

void func_00014A2C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014A34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014B50);

void func_00014BB4(s32 arg0) {
    func_000182E4();
    func_0001576C(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014BE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014C3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014D4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014E24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014E64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014F40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014F80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00014FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000151E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001523C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001529C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000152E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000153BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000153F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015430);

void func_000154C8(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x24);
    sceHVNetfront_Module_1DF9F3CD(temp_a0, M2C_FIELD(temp_a0, s32 *, 0x18));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000154E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000155E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001570C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001576C);

s32 func_000157BC(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s8 *, 4) = 0;
    func_000158A4(arg1 + 0x28);
    return func_00018200(arg0, arg1 + 0x4C) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000158A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000158D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015A34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015BFC);

void func_00015C5C(s32 arg0) {
    func_000158D8();
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015FAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00015FE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000161A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016374);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016438);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E1EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00016538);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000165F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017044);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E274);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E278);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E27C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E280);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E288);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E294);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E2CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001711C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000178BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000179CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017A3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017AFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E378);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E37C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E390);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E394);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E3F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E408);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E43C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E44C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E450);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017BBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017C98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017D1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E460);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017F3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00017FC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018028);

void func_0001808C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void func_00018094(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void func_0001809C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

void func_000180A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void func_000180AC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void func_000180B4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000180BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001819C);

s32 func_000181D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_000181D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000181E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_000181E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_000181F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_000181F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000182E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018414);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F9401A23);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5EBA1D34);

s32 func_00018618(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018680);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000187C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001890C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018C68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018D70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018F14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00018FD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001946C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000197E8);

s32 func_00019880(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019AAC);

void func_00019CD0(void *arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_65813EA4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019CF4);

void func_00019D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_00009E08();
    M2C_FIELD(arg0, s32 *, 4) = func_00009E7C();
}

void func_00019D30(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019D78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019EB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E4FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E50C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E514);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E51C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E524);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E52C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E530);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E538);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E544);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E550);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E5F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E5FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00019F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A0F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A1AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A5BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A72C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A89C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001A8C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AA78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AB2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AC2C);

void func_0001ACA4(void) {
}

void func_0001ACAC(void) {
}

void func_0001ACB4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001ACBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AD3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001ADD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AE7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AEF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001AF98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B1D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B384);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B4E8);

void func_0001B824(void) {
}

void func_0001B82C(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

void func_0001B848(s32 *arg0) {
    sceHVWWW_Library_4881039E(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B8BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001B980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001BC40);

void func_0001C008(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C010);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C458);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C530);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C7E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C88C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001C990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001D408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001DD8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001DFE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E058);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E2B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E5F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001E9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EEC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001EF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F01C);

void func_0001F18C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F3A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F5F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F6B0);

void func_0001F764(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001F7A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001FEBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0001FFB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020114);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000202C8);

void func_0002037C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000203BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002096C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020AEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020F80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00020FD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021138);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00021D44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000226F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000227B0);

void func_00022864(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002286C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000228A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000229DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022ABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022BE8);

void func_00022C9C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022CA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022CDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022D24);

void func_00022E24(void) {
    func_00077818();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022E40);

s32 func_00022E64(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022E6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00022FB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000232AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023320);

s32 func_00023778(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023978);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000239D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023A28);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023AC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023B0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023B7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023BC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023C10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023D18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023EE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023F38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00023FC4);

void func_00024074(s32 arg0) {
    func_00035AE4();
    func_000B79B4(arg0);
    func_000B42B0(arg0);
    func_000BB7CC(arg0);
    func_000B209C(arg0);
    func_000D1030(arg0);
    func_000AFB3C(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000240C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000246F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E740);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E748);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E8D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E8F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011E944);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EB84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EBE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EC44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000247B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024AA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024AE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024B28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024B9C);

void func_00024BF0(void) {
    func_0002AF88();
}

void func_00024C0C(void) {
    func_0002841C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024C28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00024F8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025034);

void func_000250C4(void) {
    func_00024F8C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000250E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000252CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025400);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000254C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000255D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002564C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000256C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000258C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025D60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00025FD4);

s32 func_00026030(void) {
    func_00025BB4();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026050);

s32 func_000260A0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000260A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000261C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000261F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000263BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002645C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002649C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000264F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026548);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000265F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000266CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000267CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000269E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026C5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026CC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026DCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026E0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026E2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026F58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00026FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002703C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000270D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000271E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000272B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027460);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000276A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000276EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000277D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027840);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027890);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000278B8);

s32 func_00027AB4(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027ABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00027E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000281B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000282D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000282E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028330);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002841C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002846C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000284BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002850C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002855C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000285B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000287E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000288A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000289C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028A14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028F0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00028F9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000290BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002910C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002915C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000291E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000292A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002939C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000293EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000294A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000295A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002963C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002965C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002967C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002969C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000299A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029A54);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029E78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029EB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029F88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00029FDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A0C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A13C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A498);

void func_0002A4DC(void) {
    func_000C9E70();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A4F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A6EC);

void func_0002A74C(s32 arg0) {
    func_000CB274();
    func_000CA73C(arg0);
}

void func_0002A778(void) {
    func_000CA758();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A7A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A7B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A7C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A7E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A8B8);

s32 func_0002A944(void) {
    func_0002A8B8();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A964);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002A9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AA54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ACF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ADE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AE9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AEDC);

s32 func_0002AF28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D0), void **, 0x44);
    func_000CB520(arg1, arg2);
    temp_v0 = func_000CCE14(arg2, M2C_FIELD(temp_s1, s32 *, 0x18));
    func_0002A8B8(temp_v0);
    func_0002B72C(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002AFD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B0D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B1AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B1FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B3B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B40C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B5AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B72C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B7D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BCC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BE80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002BF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C4C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002C71C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CB00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CDF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002CE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D43C);

void func_0002D478(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D480);

void func_0002D4EC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D4F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D56C);

s32 func_0002D61C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D624);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D720);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D844);

void func_0002D894(void) {
    func_0002846C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D8B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D8F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002D98C);

void func_0002DB68(void) {
    func_000292A0();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DB84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DBAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DBDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DCC0);

void func_0002DD1C(void) {
    func_000250C4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DD38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DEEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002DFEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E0EC);

void func_0002E28C(s32 arg0) {
    func_0002B288(func_000284BC(), arg0);
    func_00013490(func_0002841C(arg0), 0);
    func_00013CFC(func_0002841C(arg0));
    func_000C9644(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E2E8);

void func_0002E3C8(s32 arg0, s32 arg1) {
    func_0002B288(func_000284BC(arg1), arg1);
    func_000C9644(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E410);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E474);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E4A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E4C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E528);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E65C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E758);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002E990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EA74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002ED04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EE38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002EF38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F16C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F3AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F6A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F7A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002F988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FD4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FD94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011ED9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FDDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0002FEC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000304E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000305E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000306F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000307E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000308D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000309B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030BEC);

void func_00030CE8(void) {
    func_000306F0();
}

void func_00030D04(void) {
    func_000307E8();
}

void func_00030D20(void) {
    func_000308D0();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030D3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030E28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00030F88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000310C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031214);

s32 func_000313A0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000313A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000316DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000317D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000319E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031AE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00031E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000322E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003234C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000323DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000324C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032630);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000327C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000328AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032D10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00032DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000333AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000336A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003386C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003391C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000339D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033A70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033BB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00033F50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000343C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034A38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034C6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034C98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034D1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00034FE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000350AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000350E0);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003514C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000352D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035498);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000357B4);

s32 func_00035A20(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035A28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035A44);

void func_00035A64(void) {
}

void func_00035A6C(void) {
}

void func_00035A74(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035AE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035B38);

void func_00035B64(void) {
    func_000CA00C(func_000CA00C());
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035B88);

s32 func_00035F18(void) {
    return 1;
}

s32 func_00035F20(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035F28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00035FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036054);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000360F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003613C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003615C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003617C);

s32 func_000362B4(void) {
    return 1;
}

s32 func_000362BC(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000362C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000363A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000366B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000369F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036BF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036C04);

void func_00036C3C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 4)();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036C5C);

void func_00036D00(s32 arg0) {
    void *temp_s0;

    temp_s0 = *sceHVNetfront_Module_896E55F6();
    sceHVNetfront_Module_B29BE9CE(arg0);
    M2C_FIELD(temp_s0, M2C_UNK (**)(s32), 8)(arg0);
}

void func_00036D44(s32 arg0, M2C_UNK arg1) {
    void *temp_s0;

    temp_s0 = *sceHVNetfront_Module_896E55F6();
    sceHVNetfront_Module_B29BE9CE(arg0);
    M2C_FIELD(temp_s0, M2C_UNK (**)(s32, M2C_UNK), 0x10)(arg0, arg1);
}

void func_00036D98(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_s0;

    temp_s0 = *sceHVNetfront_Module_896E55F6();
    sceHVNetfront_Module_B29BE9CE(arg0);
    M2C_FIELD(temp_s0, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK), 0x14)(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_18F4C8FC);

void sceHVNetfront_Module_DFCBF9BC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7EC69C94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4AF43191);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D42259B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036FCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036FD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA0F8BF7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6C319E19);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00036FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D091BFB4);

void sceHVNetfront_Module_6F26FEF5(void **arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = *arg0;
    if ((arg1 > 0) && (M2C_FIELD(temp_a0, s32 *, 8) != 1)) {
        sceHVNetfront_Module_08549708(M2C_FIELD(temp_a0, s32 *, 0x64));
    }
    sceHVNetfront_Module_B29BE9CE((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000372DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CC51DF45);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_30FFB4C9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5ECEBC07);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BBD560F1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_115D847D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037C60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037D54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EF78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EFB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011EFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00037F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000380E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000387BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00038B64);

s32 func_0003908C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000391B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000392C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000394A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34CDE779);

void sceHVNetfront_Module_B642A9C7(void) {
}

void sceHVNetfront_Module_4B6F7563(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_19553EDD(void) {
    sceHVNetfront_Module_A2F4AC9E();
}

void sceHVNetfront_Module_E5842D1C(void) {
    sceHVNetfront_Module_5CA39435();
}

void sceHVNetfront_Module_9AA96525(void) {
    sceHVNetfront_Module_A2F4AC9E();
}

void func_00039624(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003962C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000397C0);

void func_00039848(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000398EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039AA4);

void func_00039B10(s32 arg0) {
    void **temp_v0;
    void *temp_v0_2;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 0x24);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0x18), void ***, 0x1C) = temp_v0;
        sceHVNetfront_Module_09FA691C(temp_v0_2);
        sceHVNetfront_Module_A2F4AC9E(M2C_FIELD(temp_v0, void **, 0x24));
        M2C_FIELD(temp_v0, void **, 0x24) = NULL;
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00039C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A3D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A4B4);

s32 func_0003A5B0(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A5B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B8A3F5EA);

void sceHVNetfront_Module_78614BE7(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A62C);

void func_0003A678(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A680);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A6B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003A6D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AA10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AA74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AAD0);

void func_0003ABF0(void) {
    M2C_FIELD(func_000F503C(), s32 *, 0x20) = 5;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AC14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003ADB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AE00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AF64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003AFE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B0B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B16C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B1C8);

s32 func_0003B344(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B34C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_56DB958B);

void sceHVNetfront_Module_77986A50(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B3C0);

void func_0003B4D8(s32 arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0xB0) = 1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_0003B50C(s32 arg0) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0xB4) = 1;
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

void sceHVNetfront_Module_FB59447A(void) {
    sceHVNetfront_Module_A2F4AC9E();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B590);

void sceHVNetfront_Module_58F4BEAC(s32 *arg0) {
    *arg0 = 0;
}

void sceHVNetfront_Module_7C778057(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8CA61859);

void sceHVNetfront_Module_90958874(void) {
    func_0003B820();
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_52F39350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B6E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1805333D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_661699B9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B8A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F26EE3F7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9FDE9873);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003B9F0);

void func_0003BA64(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void func_0003BA90(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x14);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BB90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BD40);

void func_0003BE70(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x24);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BE9C);

void func_0003BF24(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x2C);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003BF50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9A6CC1B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C2595823);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C2B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C2C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C374);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C42C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003C888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CB78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003CCF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D2E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D564);

s32 sceHVNetfront_Module_823748DE(void) {
    return 0;
}

void func_0003D690(void) {
}

s32 func_0003D698(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003D948);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DA90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DB9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DCA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DCF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003DE5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E484);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E510);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F354);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E6D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E7B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E8B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E8F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003E9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EB14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EBF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EC1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003EE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F220);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F28C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F544);

void func_0003F56C(s32 arg0) {
    sceHVNetfront_Module_896E55F6();
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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F440);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F444);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F464);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F46C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F478);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F490);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F4A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D7606EA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3DEAAAB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003F85C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_13C197DB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9E7CE15);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_158E3F31);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF9A1668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2263AFB9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3E7A28A);

void sceHVNetfront_Module_55C75F96(void **arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, u16 *, 0x20) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x20) & 0xDFB5);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FB68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FB88);

void func_0003FB94(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x78) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FBA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FCBC);

void func_0003FCE0(s32 *arg0, s32 arg1) {
    sceKernelClearEventFlag(*arg0, 0);
    sceKernelSetEventFlag(*arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FD24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FD5C);

void func_0003FDB8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0003FEC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000400A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000402E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040574);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040670);

s32 func_000406FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040714);

s32 func_0004083C(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v1;

    M2C_FIELD(arg0, s32 *, 8) = arg2;
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_v1, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x2C) + 1);
    func_00043A68(arg1, -1);
    sceHVNetfront_Module_86F90291(arg1, 8);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040890);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000409D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040A5C);

void func_00040AD8(void *arg0) {
    s32 temp_v0;
    void *temp_s1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    temp_s1 = M2C_FIELD(arg0, void **, 0);
    if (temp_v0 != -1) {
        M2C_FIELD(temp_s1, M2C_UNK (**)(s32), 0x38)(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = -1;
        M2C_FIELD(temp_s1, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x2C) - 1);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040BFC);

void func_00040D50(s32 arg0) {
    func_00040BA4();
    sceHVNetfront_Module_880239D0(arg0);
}

void func_00040D7C(void) {
    func_00040BA4();
}

void func_00040D98(void) {
}

void func_00040DA0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040DA8);

void func_00040DB8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_22AF3BA2);

void sceHVNetfront_Module_0316CB2F(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040E98);

void func_00040EBC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00040EC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_258B5150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_122F81AF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF96B26D);

void sceHVNetfront_Module_1702E191(void) {
}

void sceHVNetfront_Module_EFDFDF36(void) {
}

void sceHVNetfront_Module_FDE5859B(void) {
}

void func_00041118(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041120);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E778D3F3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_09F69379);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_53729A91);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_04ACFFEA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0EF6CBAE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_33028746);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_46E43E6F);

void sceHVNetfront_Module_131F0AB6(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg0, arg1, 0x68);
    sceHVNetfront_Module_D611E938(arg1, 0, 0x68);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_728066E6);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F53C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F598);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F5A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F5F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F630);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F66C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F688);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F6B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F6FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011F7F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FB50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FBF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FC98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FCF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FD70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FE68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FEFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FF9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0011FFF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120018);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120024);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012003C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120044);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120054);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012005C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012006C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120094);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120098);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001200B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012017C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001204C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C74A5305);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000419EC);

s32 func_00041B14(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041B1C);

void func_00041B3C(s32 *arg0) {
    sceHVNetfront_Module_AFCC3786(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041BD0);

void func_00041BD8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041BE0);

s32 func_00041C30(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    return ((temp_v0 ^ M2C_FIELD(arg0, s32 *, 0x24)) == 0) ? 0 : temp_v0;
}

s32 func_00041C44(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_16508B17();
    return ((temp_v0 ^ M2C_FIELD(arg0, s32 *, 0x24)) == 0) ? 0 : temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041DF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00041F7C);

void func_00042040(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042050);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000420CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004220C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042280);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000422E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000423F8);

s32 *func_00042424(void) {
    s32 *temp_v0;
    s32 *var_v0;

    temp_v0 = sceHVNetfront_Module_6D4EE418(0x44);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        func_00041F7C(*temp_v0, 1);
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042464);

void **sceHVNetfront_Module_51CAE7B4(void **arg0) {
    func_00042040(*arg0, 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E31B0CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CB726F9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F3EAE3EF);

void sceHVNetfront_Module_AA3634F4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x18) = arg1;
}

void sceHVNetfront_Module_125D89FA(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x1C) = arg1;
}

void sceHVNetfront_Module_2CCCD8B0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x20) = arg1;
}

void func_00042568(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x24) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C5BAB1D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_45AC12ED);

void sceHVNetfront_Module_5E44B688(void **arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004260C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042650);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E992C60B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EEA26996);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000426D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042788);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000427C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042818);

s32 func_000428A4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = func_00042050(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 *, 0x58)), arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 *, 0x58));
    return temp_s0;
}

s32 func_00042904(void *arg0, M2C_UNK arg1) {
    s32 temp_s1;

    temp_s1 = func_000420CC(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 *, 0x58)), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), arg1);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 *, 0x58));
    return temp_s1;
}

s32 func_0004295C(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    temp_s1 = func_00042170(sceHVNetfront_Module_896E55F6(M2C_FIELD(arg0, s32 *, 0x58)), arg1, M2C_FIELD(arg0, s32 *, 0x60), arg2);
    sceHVNetfront_Module_B29BE9CE(M2C_FIELD(arg0, s32 *, 0x58));
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000429C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B23D7F7F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042AF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042D70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042DC0);

void sceHVNetfront_Module_A8078858(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x50) = arg1;
}

void func_00042E34(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x3C) = arg1;
}

void func_00042E40(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x40) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_86F90291);

void func_00042E58(void **arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0x54) = arg1;
    if (arg1 != 0) {
        M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) | 2);
    }
}

void func_00042E78(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x28) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3850E9A6);

void func_00042ECC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x18) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042F1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00042F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_74A30655);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6C78CC40);

void func_00042FBC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

void sceHVNetfront_Module_6CA88BC3(void **arg0, void **arg1) {
    void **temp_v0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = *arg0;
    temp_v0 = M2C_FIELD(temp_s0, void ***, 0x58);
    if (temp_v0 != NULL) {
        func_00042464(temp_v0);
    }
    temp_v1 = *arg1;
    M2C_FIELD(temp_s0, void ***, 0x58) = arg1;
    if (M2C_FIELD(temp_v1, s32 *, 0x10) != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 8);
    }
    if (M2C_FIELD(temp_v1, s32 *, 0x24) != -2) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000432D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_78E29B62);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_94EB0154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000436CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043754);

void func_000437DC(s32 *arg0) {
    func_000436CC(*arg0);
}

void func_000437F8(s32 *arg0) {
    func_00043754(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043814);

void sceHVNetfront_Module_C3B0CA67(s32 *arg0) {
    func_00043814(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000438B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043A9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043B00);

void func_00043BA4(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    if (func_00042280(M2C_FIELD(temp_s0, s32 *, 0x58)) != 0) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) | 8);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043BF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_794DB63E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FA39DAA2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043E7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00043ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C98899FC);

void sceHVNetfront_Module_E330BB9F(void *arg0) {
    sceHVNetfront_Module_880239D0(M2C_FIELD(arg0, s32 *, 0x4E0));
    sceHVNetfront_Module_C04FADD9(arg0 + 0x4AC);
    func_00041F4C(arg0 + 0x40);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FAB16895);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9729D6E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_979F5A7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000445B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004472C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_44F0D3D4);

void func_00044940(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EB9C36E9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000449F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044A34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00044AA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_25F5CA8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D01C1872);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F55329EF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D533CF0D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9B8F6179);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8F6A9B89);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045034);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39EE6D2A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4B5823BF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E1A51715);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B17C0A53);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A4E019F5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2A065450);

void sceHVNetfront_Module_CAE363A8(s32 arg0) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    func_00043A9C(*temp_v0);
    sceHVNetfront_Module_74A30655(*temp_v0, 1, 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A941FF30);

s32 func_000454B8(void **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = -1;
    if (sceHVNetfront_Module_BA4FFC3A() != 0) {
        temp_v0 = M2C_FIELD(*arg0, s32 **, 0x24);
        if (temp_v0 != NULL) {
            var_v1 = *temp_v0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6C0BD2A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA4FFC3A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AEB1D27);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004584C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000458B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045904);

void func_00045924(s32 **arg0) {
    func_00042F2C(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045944);

void func_00045958(s32 ***arg0) {
    sceHVNetfront_Module_C3B0CA67(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045978);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045994);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000459AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000459C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000459E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045A0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1672EC47);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_092E2C73);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_90AB89E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_24196BE2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D2B3653);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7BC430AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20F2DAA4);

void sceHVNetfront_Module_3897ADE7(s32 arg0) {
    sceHVNetfront_Module_B23D7F7F(*sceHVNetfront_Module_896E55F6(), -1, 0);
    sceHVNetfront_Module_B29BE9CE(arg0);
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045DCC);

void func_00045DE8(s32 **arg0) {
    func_00042F2C(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045E1C);

void func_00045E38(s32 ***arg0) {
    sceHVNetfront_Module_C3B0CA67(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045E58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045E70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045E88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045EA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045EF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045F14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00045F50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_40368F55);

void sceHVNetfront_Module_6AB7B8E9(s32 **arg0) {
    func_00043BDC(**arg0);
}

void func_00046044(s32 **arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = **arg0;
    func_00042F2C(temp_s0);
    func_00042FBC((void **) temp_s0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D392E84A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2281D96A);

void sceHVNetfront_Module_9E409DB4(s32 **arg0) {
    func_00042D70(**arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6DFAC2F9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046144);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DF595A9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8F9488F9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F90CF781);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046238);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004633C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000464B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000466BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0BC2850C);

void sceHVNetfront_Module_C7AA9F45(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_90AB89E7(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = 5;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_v0;
    if ((temp_v0 == -1) || (sceHVNetfront_Module_F2D8CC12(*M2C_FIELD(arg0, s32 **, 0), temp_v0, 1) == 0)) {
        func_000467F4(arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000467F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004687C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004695C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046AF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046C3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046D34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046F10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00046FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004704C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004717C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A8B3EB32);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_429782B3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_84212B7D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8D3E0625);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7A41AD6E);

void func_000477A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000477B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004780C);

s32 func_00047844(void) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_000477B4();
    var_v1 = 0x1000;
    if (temp_v0 != NULL) {
        var_v1 = *temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B71657D5);

void sceHVNetfront_Module_C9B744B4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000478B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000478FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004794C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004796C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000479B8);

void func_000479F8(s32 arg0) {
    func_0004796C();
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

s32 sceHVNetfront_Module_81A43081(void) {
    return 1;
}

void func_00047A2C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047A34);

void func_00047A54(s32 arg0) {
    func_00047A2C();
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4B122153);

void sceHVNetfront_Module_B3733A46(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047BBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E1B41D47);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4370F699);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00047EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B588DC22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_48F86618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F2D8CC12);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120538);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012053C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012054C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120550);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BF1F29EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000483DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001205FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120614);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120618);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1633B2A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B205F749);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_77FCD4C1);

s32 sceHVNetfront_Module_57C112FD(s32 arg0, M2C_UNK arg1) {
    s32 (*temp_v0_2)(void **, M2C_UNK);
    s32 var_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_v0_2 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK), 0xC);
    var_s0 = -8;
    if (temp_v0_2 != NULL) {
        var_s0 = temp_v0_2(temp_v0, arg1);
    }
    sceHVNetfront_Module_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BEFC4F0D);

s32 sceHVNetfront_Module_4136A224(s32 arg0) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004877C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4EA9EF34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048818);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000488CC);

void func_0004898C(s32 arg0) {
    sceHVNetfront_Module_880239D0(arg0);
}

void func_000489A8(void) {
}

void func_000489B0(void) {
}

void func_000489B8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000489C0);

void func_000489D0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ECD79235);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EED7BC00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8C211F28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C86459A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048C48);

void sceHVNetfront_Module_6F772B18(void **arg0, void **arg1, s32 arg2) {
    M2C_UNK (*temp_v0)();
    void *temp_v0_2;

    if (arg2 == 0) {
        temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x1C);
        if (temp_v0 != NULL) {
            temp_v0();
        }
    }
    temp_v0_2 = *arg1;
    if (temp_v0_2 != NULL) {
        sceHVNetfront_Module_B23D7F7F(temp_v0_2, -1, 0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_55CF576E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_55AD0295);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7184F810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D9560A46);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00048F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000490BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3D27259A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CA6AD0F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000493A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FF5E3F11);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9AA02806);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_015932EE);

void sceHVNetfront_Module_A7781C73(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E7C67B64);

s32 sceHVNetfront_Module_2BB00E05(s32 arg0) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B05DB1D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_309FE171);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049914);

void func_00049984(s32 arg0, s32 arg1) {
    func_00041678(arg0 + 8, arg1 + 8, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000499A8);

void func_00049A24(s32 arg0) {
    sceHVNetfront_Module_728066E6(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049B24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049B6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120648);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00049D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A7D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A8A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004A968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004AC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004AD7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9FF54B2A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A5C11A26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_341E643A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_64367903);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B068);

s32 sceHVNetfront_Module_BBDFB7FD(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceHVNetfront_Module_FF5E3F11() != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        var_v1 = 1;
    }
    return var_v1;
}

void sceHVNetfront_Module_4329FB08(void) {
    sceHVNetfront_Module_9AA02806();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_876375DE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0C2B2F3B);

void func_0004B3BC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7F9C3EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_11B159B6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B52C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B58C);

void func_0004B608(void) {
    sceHVNetfront_Module_309FE171();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7E5C8FE3);

void sceHVNetfront_Module_99111A60(void) {
    sceHVNetfront_Module_A7781C73();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B6C8);

void func_0004B6D8(void) {
}

void func_0004B6E0(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_7DF3A448(void **arg0) {
    func_0004B6E0(arg0);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

s32 func_0004B738(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 4);
    var_v1 = -1;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

s32 func_0004B76C(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 8);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B7A0);

void func_0004B7BC(void) {
    func_0004B6D8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B7D8);

void func_0004B7F4(void) {
    func_0004B6D8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004B848);

void func_0004B860(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0A4203B2);

void sceHVNetfront_Module_E2C79DAF(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_11F03B41(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_C40D454A(void **arg0) {
    sceHVNetfront_Module_11F03B41(arg0);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

void sceHVNetfront_Module_F9D901ED(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

void sceHVNetfront_Module_0146B875(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

s32 sceHVNetfront_Module_D728FA9F(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x1C);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

s32 sceHVNetfront_Module_9E9146BE(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x20);
    var_v1 = -1;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_0004BA50(void **arg0, M2C_UNK arg1) {
    func_0004B698(arg1, M2C_FIELD(*arg0, s32 *, 4), arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BA78);

void func_0004BAB4(void) {
    func_0004B860();
}

s32 sceHVNetfront_Module_DCC7ADEA(void **arg0) {
    s32 (*temp_v0)();
    s32 var_v1;

    temp_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x14);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0();
    }
    return var_v1;
}

void func_0004BB04(void **arg0, s32 arg1) {
    func_0004B698(arg1, M2C_FIELD(*arg0, s32 *, 4), arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BB2C);

void func_0004BB5C(void) {
    func_0004B860();
}

void sceHVNetfront_Module_AEF7B564(s32 *arg0, M2C_UNK arg1) {
    func_0004B810(arg1, *arg0);
}

void sceHVNetfront_Module_48B72D3A(void *arg0, s32 arg1) {
    func_0004B810(arg1, M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2E045C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BC5C);

void func_0004BC68(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BC70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004BEB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_12ECDFFD);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001206EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001206F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C5B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EECC58C1);

void sceHVNetfront_Module_A86CAFDE(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    sceHVNetfront_Module_5DBB6513(temp_a0 + 0xC, M2C_FIELD(temp_a0, s32 *, 4), arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AB616A03);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A08F42C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CB04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_783814D1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4B5CEB81);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004CCF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D99F11A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3AAC0376);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_907152F5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D29C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D2F4);

s32 sceHVNetfront_Module_8690B158(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24614BB0(arg1, 0x14);
    var_v1 = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_v0;
        var_v1 = 1;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = 7;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return var_v1;
}

void sceHVNetfront_Module_A9E1B08D(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D37C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D57C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D66C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D7C4);

void func_0004D814(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x28);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D888);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012078C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120790);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120798);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004D8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DC68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004DD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_865DA205);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_18A89A8D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E220);

void func_0004E290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0004E220(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

s32 func_0004E2E4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVNetfront_Module_E459881C(arg2);
    temp_s0 = func_0004E220(arg0, arg1, temp_s0_2, sceHVNetfront_Module_3EDA77E7(arg2));
    sceHVNetfront_Module_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E3CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_818326B6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9F60651B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004E9C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004EBB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001207F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2F0F73A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2BC805F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F0EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F2A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF65C5D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004F8BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F208D3A6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004FA98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0004FAB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_49631038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4E064DB2);

void **sceHVNetfront_Module_ECAD3AF5(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xC) + 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3450EDDB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6A893809);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39054344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3BB4DE88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DBEC6D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050420);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000505E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000506D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000508D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000509CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00050D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051958);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051C6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051CCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B06196EE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C07EB167);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00051E04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1CC665B1);

void func_00051FD8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x17C0) = 0;
}

void func_00051FE0(void) {
}

void func_00051FE8(void *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(*arg1, s32 *, 0x38) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x17C0) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052004);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD777988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9160D20A);

void func_000521FC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x20) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0C8E766E);

void sceHVNetfront_Module_DA60A0AF(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x2C) = arg1;
}

void func_0005225C(void **arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x30) | arg1);
}

void func_00052270(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x34) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005227C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052288);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120CC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120D90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000522BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000523C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A48D19CF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000525D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005278C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000527D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052DE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052EDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052F00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052FCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00052FE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053004);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005303C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053058);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005312C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000531D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000531F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053230);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000532B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000532D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000532F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053330);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053390);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000533B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000533D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000533F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053410);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000535BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000536B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000537BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053828);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005384C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053870);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000538B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000538DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053924);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053948);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000539B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053B64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053CAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053CCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053D20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053D5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053E14);

void func_00053EB8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1820) = 0;
    M2C_FIELD(arg0, s32 *, 0x1824) = 0;
    sceHVNetfront_Module_0F5AA1D5(arg0 + 0x1808, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053EE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00053F80);

void func_0005401C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1820) = arg1;
}

void func_00054024(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1824) = arg1;
}

void func_0005402C(void) {
}

void func_00054034(void) {
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00120EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121308);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121330);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005403C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000540E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005415C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005419C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012136C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000541D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054364);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005443C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054474);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000544B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000544CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000544EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005457C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005459C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000545B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000545D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000545F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054610);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005462C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005464C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000546A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000546C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A958E676);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001213E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012140C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121454);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121478);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012149C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000548B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000548C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054A0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001214C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054CA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054CB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00054EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000550EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000551A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000552D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000552FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000555C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005565C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000557BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005582C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055974);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DDE841E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E7909110);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055D80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055E28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055ECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00055F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056018);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121508);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121540);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CA404834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D1B3D959);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A03FCFFE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005656C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001215C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000565E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000568D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056B18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056CC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056D1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056D54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056DC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00056F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_63086D26);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000572DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005750C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000575F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000576C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000577C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000578A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005798C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000579AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057A90);

s32 func_00057B68(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9E0B1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00057FC8);

void func_000580B4(s32 arg0) {
    sceHVNetfront_Module_880239D0(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_08AC1E83);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16034D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005818C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_46EF316E);

void func_00058200(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_603889A9(arg1);
    sceHVNetfront_Module_5BA9037D(arg0, temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ABAE54FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000582E8);

void sceHVNetfront_Module_2E02B3E3(s32 arg0) {
    sceHVNetfront_Module_ABAE54FF(arg0, sceHVNetfront_Module_15875ED4(arg0));
}

s32 sceHVNetfront_Module_A57E0937(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_E459881C(arg0);
    temp_s0 = sceHVNetfront_Module_ABAE54FF(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_07F2F8A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_169508E3);

s32 **sceHVNetfront_Module_19F6AEBF(s32 **arg0) {
    s32 *temp_a0;

    temp_a0 = *arg0;
    *temp_a0 += 1;
    return arg0;
}

s32 func_000584D4(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CE95AE54();
    temp_s0 = sceHVNetfront_Module_ABAE54FF(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058528);

void func_00058534(s32 **arg0, s32 arg1) {
    **arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D35CA859);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CE95AE54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_603889A9);

void sceHVNetfront_Module_2BD387F9(s32 arg0) {
    sceHVNetfront_Module_15875ED4(sceHVNetfront_Module_603889A9(arg0));
}

void sceHVNetfront_Module_D5F20A4D(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 4) = sceHVNetfront_Module_7D1421C0();
    temp_v0 = sceHVNetfront_Module_CE95AE54(arg0);
    M2C_FIELD(arg1, s32 *, 8) = 0x3F8;
    M2C_FIELD(arg1, s32 *, 0) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0xC) = sceHVNetfront_Module_15875ED4(temp_v0);
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2AB94A45);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000587C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_19F8738A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000589BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058A64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C05902A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A25C60AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_30C8571F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058C20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058CC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED34D3DF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058E5C);

s32 func_00058EE4(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_CE95AE54();
    temp_s0 = sceHVNetfront_Module_CF3077BE(temp_v0, sceHVNetfront_Module_15875ED4(temp_v0));
    sceHVNetfront_Module_08549708(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001216B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00058F64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000590D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000590E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0BE49B1B);

void func_00059188(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    sceHVNetfront_Module_C0A215A2(M2C_FIELD(arg0, s32 *, 0));
}

void func_000591B4(void *arg0, s32 arg1) {
    sceHVNetfront_Module_488D3C7B(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void func_000591DC(void *arg0, s32 arg1) {
    func_00086C14(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void func_00059204(void *arg0, s32 arg1) {
    sceHVNetfront_Module_440B8F87(M2C_FIELD(arg0, s32 *, 0), sceHVNetfront_Module_4681A961(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1), 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059248);

void func_00059294(void *arg0, s32 arg1) {
    sceHVNetfront_Module_234F9191(M2C_FIELD(arg0, s32 *, 0), sceHVNetfront_Module_4681A961(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + arg1));
}

void func_000592D4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5C264E89);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9E9DD219);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000593E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000594E8);

void func_0005951C(void) {
    sceHVNetfront_Module_EA8FFAF4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059538);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059550);

s32 func_000595C8(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00088300(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), arg1);
    if (temp_v0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = temp_v0;
        }
        M2C_FIELD(arg0, s32 *, 8) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    return temp_v0;
}

void func_00059620(s32 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000596BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005987C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059DBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00059EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A7D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005A938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AA6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AD5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005AFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121818);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B0F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B40C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B44C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B5C8);

void func_0005B644(void) {
    func_0005B458();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005B988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BAEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BBC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BC5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BCEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BEB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BF00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BF28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BF84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005BFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C084);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C2A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C2D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C3A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C3E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C40C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C460);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C4D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C55C);

s32 func_0005C5B8(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C5C0);

void func_0005C5F4(s32 arg0) {
    func_0005C5C0(0, arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C614);

s32 func_0005C6CC(s32 arg0, s32 arg1) {
    return sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC);
}

void func_0005C6F8(void) {
}

void func_0005C700(void) {
    sceHVNetfront_Module_A76795B7();
}

void func_0005C71C(void) {
    sceHVNetfront_Module_32E4FDC6();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C89C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121A9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ABC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ACC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121ADC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121AFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121B80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005C90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CA70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CC64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CC9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005CE24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_03D34A77);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7D655E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1CC15992);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D9CB3AF);

s32 func_0005D0EC(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x1C);
}

void sceHVNetfront_Module_67FC33F8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x24) = arg2;
}

s32 sceHVNetfront_Module_52564790(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D194);

s32 func_0005D21C(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D250);

u8 func_0005D290(void *arg0, s32 arg1) {
    return M2C_FIELD((sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10)), u8 *, 0x32);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D2C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D30C);

void func_0005D3A4(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_0005D30C(arg0, arg1, sceHVNetfront_Module_234F9191(arg0 + 4, arg1) + M2C_FIELD(arg0, s16 *, 0x10), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D400);

void sceHVNetfront_Module_2907C1F0(void **arg0, M2C_UNK arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    func_0005C90C(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1955409B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E2C32DF7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9BA8E706);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D5F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0DCCBB6F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B725FAEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3071BAAE);

void func_0005D924(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC) & 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B541796B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9C6C2E91);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005D98C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3445D8F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AD3723FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_540174C1);

void func_0005DBD0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DCA8);

void func_0005DCF8(void) {
    func_0005DCA8();
}

void func_0005DD14(void) {
    sceHVNetfront_Module_C6EE5561();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DDC0);

void func_0005DE50(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, s32 *, 0xC) & 0xA) == 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DE64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DF08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005DF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E034);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E2A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A65312B1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E3D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E42C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E4D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E5E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E68C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E6FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E77C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E7FC);

void func_0005E940(void *arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_52564790(arg0, arg1), M2C_UNK (**)(void *, s32), 0x24)(arg0, arg1);
    func_0005CA70(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_58E21566);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121CFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005E9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EAA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EBEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005ECC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7C762DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F8DE932C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005EFF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F18C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F1C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F2F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F38C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121DD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00121FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F420);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F49C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F594);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F5D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F818);

void func_0005F8B4(void) {
    sceHVNetfront_Module_2A34EDF3();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005F9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FB2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FC08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FC4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FD10);

s32 func_0005FD1C(s32 **arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = **arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FD34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FD94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FEB8);

void func_0005FEF4(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(*arg0 + 0x38, arg1, 0x1C);
}

void func_0005FF18(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_1A02495A(arg1, *arg0 + 0x38, 0x1C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FF98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FFD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0005FFF8);

s32 func_00060220(void *arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C));
    return 7;
}

void func_00060244(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006024C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000602C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006049C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000604FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006053C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000605AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000607C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060B4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00060DF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000619C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061D8C);

void func_00061DF4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00061E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00062024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00062194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00062214);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000635F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AAF146AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063780);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063870);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_85311068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3E4445A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0E1F569F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4E297BC5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_62803759);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063AFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063DD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00063EF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DD454C67);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006410C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000641E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A11D9FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006447C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CF69A52B);

s32 func_00064654(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = sceHVNetfront_Module_57FC5C24(sceHVNetfront_Module_B3E4445A());
    sceHVNetfront_Module_0E1F569F(arg0, arg1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000646A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000648CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00122FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123250);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123260);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000649D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00064E84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065058);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000651A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000651D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000651FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000653DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000653FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065434);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000657F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000658EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000658F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012329C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001232E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000659D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065D4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065E2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00065FD4);

void func_00066058(void) {
    func_00065FD4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066220);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006623C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000664D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000664F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006660C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006684C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066868);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000668A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000669FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00066F20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000671BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00067E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006846C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000684A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000684C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000684DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006860C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068630);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068654);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006869C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000686C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000686E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006872C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000687BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000687E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006899C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000689C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068B2C);

void func_00068BC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x17C4) = 0;
}

void func_00068BC8(void) {
}

void func_00068BD0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xC0) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2B314C92);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068C6C);

void func_00068CC4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x4C) = arg1;
}

void func_00068CD0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xBC) = arg1;
}

void func_00068CDC(s32 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 4) + *arg0), s32 *, 0x50) = arg2;
}

s32 func_00068CF0(s32 *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 4) + *arg0), s32 *, 0x50);
}

void func_00068D04(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x78) = arg1;
}

void func_00068D10(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xE0) = arg1;
}

s32 func_00068D1C(void *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x4C) >= 2U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DAA2D2E2);

s32 func_00068D48(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0xC0) - 6) < 2U;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068D58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D4D03A3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E653C40E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9716DAAD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068E90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012344C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012374C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00068FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006909C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000690FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006915C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006919C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000691DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006922C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000692C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000692E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069360);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000693F0);

void func_00069440(void *arg0, void **arg1, s32 arg2) {
    if (arg1 != NULL) {
        M2C_FIELD(*arg1, s32 *, 0xEC) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x17C4) = arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006945C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1E850C3D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000694A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000694C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000694E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FF74C8F7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EAB56A29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069800);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4AE4E3A7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006991C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069998);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069A48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3AB64B09);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1666F7FB);

void sceHVNetfront_Module_0ABF34A9(void **arg0) {
    s32 temp_s0;
    void *temp_s1;

    func_00069838();
    temp_s1 = *arg0;
    temp_s0 = temp_s1 + 8;
    func_00063B34(temp_s0, 0);
    func_000590E8(temp_s0);
    sceHVNetfront_Module_2A34EDF3(temp_s1 + 0xA0);
    M2C_FIELD(temp_s1, s32 *, 0x4C) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E5F5CA1A);

s32 func_00069D78(void *arg0, s32 arg1) {
    if (arg1 != -1) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x40)) {
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    }
    return arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069DAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069DD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00069F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A0A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A1F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A2FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A3FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A5E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A5F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006A88C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006AB00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ABA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ABDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006AD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006B824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006BA5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006BB80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A5E9E8F5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C624);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C6EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C76C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006C964);

void func_0006CDEC(s32 arg0) {
    func_0006C884(arg0, sceHVNetfront_Module_896E55F6(), 3);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006CE28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_88A1BF4E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6EE5561);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D1EA353);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EDDF1A9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CC137D18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006CF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_320FE336);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006CFC4);

void sceHVNetfront_Module_B7DF3AB0(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x48) | 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D030);

void func_0006D0F0(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s0 = *arg0;
    temp_s1 = temp_s0 + 0x88;
    func_00068B2C(M2C_FIELD(temp_s0, s32 *, 0), sceHVNetfront_Module_234F9191((s32) temp_s1, sceHVNetfront_Module_4681A961((s32) temp_s1, M2C_FIELD(temp_s0, s32 *, 0x9C) - 1)));
    sceHVNetfront_Module_C0A215A2((s32) temp_s1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D14C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D1EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D4B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D554);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006D9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006DFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E0DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006E838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006EAFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006ED84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006EE70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F210);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123D9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123DB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123DDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123E80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00123FDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124004);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012405C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012406C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001240A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001240C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012416C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124190);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001241DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124258);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001242DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124304);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012430C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124348);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012436C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001243FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F2F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F4E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F7A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F9A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006F9DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0006FFF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000700EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000702A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007040C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000706E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AAFCCCFA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000708C8);

void func_00070A04(void) {
    sceHVNetfront_Module_AAFCCCFA();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EAA204F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_57FC5C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00070F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D80A1B5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EE86317E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F6604D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6FC750A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F1423651);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007132C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071498);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007163C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071A04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00071E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007200C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000721B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000721F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000723AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000723DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072570);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000725AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000725F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007289C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072904);

void func_0007296C(void) {
    func_0007040C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072A58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072AC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072C58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00072F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000730F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000731B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073224);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073388);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000733E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007355C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007368C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000736B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000736E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073CC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073CF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073D68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00073F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074098);

void func_0007410C(void) {
    func_00074098();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074200);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124874);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124878);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012487C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124880);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124884);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124888);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012488C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124894);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124898);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012489C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001248FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124900);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124904);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124908);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012490C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124910);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124914);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124918);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012491C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124920);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124924);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000746CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074788);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007481C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000748B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000749E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074C50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00074DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000750DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000754B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000755BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000755DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000755E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000756A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007573C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000757B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075890);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000758B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000758DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075904);

s32 func_000759A8(void **arg0) {
    sceHVNetfront_Module_9716DAAD(M2C_FIELD(*arg0, s32 *, 0x1C), 4);
    return 6;
}

s32 func_000759D0(void **arg0) {
    sceHVNetfront_Module_5D4D03A3(M2C_FIELD(*arg0, s32 *, 0x1C));
    return 7;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000759F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124964);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124A84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124AA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124AE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124B10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124B34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124CF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124D94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124E08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124E28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124F9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00124FF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125000);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125008);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125010);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012501C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125020);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125030);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125038);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125040);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125048);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125050);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125058);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125060);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125064);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012506C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125074);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125080);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125088);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125090);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012509C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001251E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075B58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00075F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000763B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000767C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076890);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012541C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00076FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077048);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000771A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000771AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000773F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000776CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077734);

void func_000777B8(void) {
    func_00077818();
}

s32 func_000777D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 0x1C;
}

s32 func_000777E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 1;
}

s32 func_000777EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 0x60;
}

void func_000777F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077808);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077818);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007787C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000778A0);

s32 func_000778D0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return temp_v0;
}

s32 func_000778DC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    return temp_v0;
}

s32 func_000778E8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000778F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000779F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077A4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077AE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077B44);

void func_00077BF4(s32 arg0) {
    func_00077670();
    func_00077270(arg0, 3, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077C2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00077EEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000782DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00078DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007980C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079B2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00079F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007A1E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007AC60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007AFA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B340);

void func_0007B37C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B3E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B4E4);

void func_0007B544(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0, *arg1);
}

void func_0007B564(s32 *arg0, s32 *arg1) {
    func_0007B4E4(*arg0 + 0xC, *arg1 + 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B5D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B72C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B764);

s32 func_0007B790(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B798);

void func_0007B7B4(void) {
    func_0007B58C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B7D0);

s32 func_0007B7F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B7FC);

void func_0007B818(s32 arg0) {
    sceHVNetfront_Module_AFCC3786(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B840);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B874);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B8D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BAC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BB44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BC24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BEA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007BF0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C39C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C3F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C4B8);

void func_0007C520(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x44);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C554);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C5B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C66C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C6B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C768);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C7A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C7E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007C970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CB90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CC90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CD84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CDF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007CF2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D01C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D0E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D178);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D20C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D2C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D5B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007D810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DB24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DCA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007DEE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E314);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E6F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E788);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E8AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007E9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EB24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007ECF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007ED04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EE84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007EF24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F0CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F2C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F79C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007F81C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FAA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FC20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FE60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FF80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0007FFC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000800D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008011C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000805C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000805E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080CA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080D28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080E14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00080EFC);

void func_00081540(void **arg0, M2C_UNK arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_A2F4AC9E(arg1);
    M2C_FIELD(temp_s0, s32 *, 0x184) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008156C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008160C);

void sceHVNetfront_Module_D2270E78(void) {
    func_00082D48(1);
}

void sceHVNetfront_Module_5EEBE755(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_80631855);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_57FDE0C7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F4EA7F0A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_84AF80AA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5BA9037D);

void sceHVNetfront_Module_90A5AF9D(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_5BA9037D(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008194C);

void func_00081974(s32 arg0, s32 *arg1) {
    s32 temp_s1;

    temp_s1 = *arg1;
    sceHVNetfront_Module_5BA9037D(arg0, temp_s1, sceHVNetfront_Module_3EDA77E7((s32) arg1));
}

void func_000819B8(s32 arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    sceHVNetfront_Module_5BA9037D(arg0, (s32) (temp_a1 + 0xC), M2C_FIELD(temp_a1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000819DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_389E8450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081F90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00081FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008201C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082054);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082070);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008208C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000820FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082118);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082150);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008216C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000821FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008221C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008223C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008225C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008227C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008229C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000822FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008231C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008235C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008237C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000823EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008245C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008249C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000824F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082510);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082534);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008257C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000825BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000825E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082628);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008264C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000826B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000826CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000827C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5D1D77DA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1A02495A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4EAC15D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D611E938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082C7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082CF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082D48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9ED6914E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082ECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00082FB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008303C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000830C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A7EB7C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000831F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008329C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_10AE4328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000833BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008347C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_04911EC3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2ED8B315);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000837C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_38C38C7D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000839A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083A68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0CC5AB29);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9A925AD1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083C10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_484C100A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_59F62E22);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00083F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AEF9D476);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_28FDE037);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2CA48B51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000841BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_39D070F1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000842BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_559D9F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000843BC);

void sceHVNetfront_Module_46A9D965(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_42E27595(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_42E27595);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_65813EA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D1EF37CB);

void func_00084590(s32 arg0, M2C_UNK arg1, s32 arg2) {
    sceHVNetfront_Module_A02BB72A(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A02BB72A);

void sceHVNetfront_Module_46EE5586(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_5DBB6513(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5DBB6513);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_81D4F0FE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9DAD41C2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C45C352C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_15875ED4);

u8 *sceHVNetfront_Module_BB5E8F0E(u8 *arg0, u8 *arg1) {
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

s32 sceHVNetfront_Module_56988A48(s32 arg0, u8 *arg1) {
    sceHVNetfront_Module_BB5E8F0E(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1);
    return arg0;
}

s32 func_00084D58(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_C412B8FC(arg0 + sceHVNetfront_Module_15875ED4(arg0), arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C412B8FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084E1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D38B11B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00084F40);

s32 func_00084FDC(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 - 0x16E) >= 0) {
        var_v0 = ((arg0 - 0x16E) / 365) + 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085208);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000852F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000853A8);

void sceHVNetfront_Module_6448C9FD(void) {
    func_000F151C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C9903493);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085ADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2CEB5C59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D09FD444);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001254F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125504);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012552C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125554);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012557C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012597C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125A7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125B7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125C9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125CEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125ECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125ED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125EFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00125F98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00085C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_17AD2C3F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_73C70CE6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2E5A2E51);

s32 func_000867F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) == 0;
}

s32 func_00086800(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    return temp_v1 != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086814);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008685C);

s32 func_00086898(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0);
    return sceHVNetfront_Module_440B8F87(temp_s0, M2C_FIELD(arg0, s32 *, 8), 0) + M2C_FIELD(temp_s0, s16 *, 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000868D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3AF6022);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086964);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0F5AA1D5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2A34EDF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C0A215A2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4681A961);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_350ABDEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5AFD3D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_488D3C7B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086C14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A20CC0BA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_989778A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1A741A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_40EFD93B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B71993AE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF43C7A1);

void sceHVNetfront_Module_56891AC0(void) {
    func_00093668();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FF85936E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00086FC8);

void func_00087010(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

void func_00087058(void *arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191((s32) arg0, arg1 << M2C_FIELD(arg0, s16 *, 0xE)), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xC));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000870A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000870C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B1EBD134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_62342C9A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_165CA66D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087254);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000872E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C04FADD9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E875CDC8);

void func_000874F0(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(arg2, sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

void sceHVNetfront_Module_6A6AB360(s32 arg0, s32 arg1, s32 arg2) {
    sceHVNetfront_Module_1A02495A(sceHVNetfront_Module_234F9191(arg0, arg1) + M2C_FIELD(arg0, s16 *, 0xC), arg2, (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6F80558B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000875B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000875EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087608);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A9210C2E);

void sceHVNetfront_Module_14411643(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B6F9B107);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A76795B7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008782C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_32E4FDC6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087CAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087D24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B730C75F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_16508B17);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2B629F59);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F489E9B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_10C4F8A3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2D98366C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00087FEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1461AF80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_457A4136);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B21203FF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_41CEA51D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EA8FFAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E1280750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2408FBF3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_703D7675);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E6D4D13C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_83191313);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2918F48C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_12E3C14E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4E6D9390);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_34C99643);

void func_00088600(void *arg0) {
    func_0008A010();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0F61EC8E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_24614BB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1B83D569);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6B15F29F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_957CE668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_70683D75);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EE1C1283);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_05F33A6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1DF9F3CD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6DC3FDE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088C80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088D8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00088E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6B5460E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000890F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000891F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_654D2937);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C1F09F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C8731B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008952C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000895D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_25AEB6E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008962C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000896A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_882E0127);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089720);

void sceHVNetfront_Module_81130A27(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 4) = arg2;
    M2C_FIELD(arg0, s16 *, 6) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BFE8268F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8E9CAD4A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6475D8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000899DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_0EB196AD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089A10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089A20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089A74);

void func_00089AA4(s32 arg0) {
    sceHVNetfront_Module_BFE8268F(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089AC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089B34);

void func_00089B8C(s32 arg0) {
    sceHVNetfront_Module_0EB196AD(arg0 + 4);
}

void func_00089BA8(s32 arg0) {
    func_00089A10(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3CD6256A);

void sceHVNetfront_Module_B8C28371(void) {
    func_00093668();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00089EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A010);

s32 func_0008A040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) == 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D193E37E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_50CD0162);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7B120250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A140);

void sceHVNetfront_Module_FD8A0A98(void) {
    func_00089EB4();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A1BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8AF2F499);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_754AA115);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D5A24BD1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A2C8);

s32 sceHVNetfront_Module_D38CE2BC(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) || (M2C_FIELD(arg0, s32 *, 0xC) == 0)) {
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6AC5DDC6);

s32 sceHVNetfront_Module_50475141(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    var_a3 = 0;
    if ((arg1 >= temp_v1) && (arg1 < (temp_v1 + M2C_FIELD(arg0, s32 *, 8)))) {
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 4);
        if (arg2 >= temp_v1_2) {
            var_a3 = arg2 < (temp_v1_2 + M2C_FIELD(arg0, s32 *, 0xC));
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_21E620AF);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_44660B53);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A05B7FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B0FF9AC6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A7AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A7B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C04F6796);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2EE82579);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A92C);

void func_0008A9A0(void **arg0) {
    sceHVNetfront_Module_C04FADD9(*arg0);
    sceHVNetfront_Module_880239D0((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008A9D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AA00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AA10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AA1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008ABB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AE1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008AF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B354);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B4C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B550);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B56C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B588);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B5C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5BF885D2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F59C0117);

void sceHVNetfront_Module_0C3F76E2(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void sceHVNetfront_Module_FF6A3B64(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B355C896);

void sceHVNetfront_Module_F2D9F9FD(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008B938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_04894EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A3153A23);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008BA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008BB50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008BCBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008BF3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C08C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C364);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C3EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C44C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C5A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C640);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C6D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C768);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E3E135CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C7DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C868);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C8A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C96C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008C9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6DDF3D61);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008CADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008CAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_01524F3D);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DE2F174A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008CCA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008CE48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008CF00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED23423C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D2B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D674);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D6B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001261FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126200);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012620C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126224);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126230);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126238);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126244);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012624C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012626C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126278);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008D718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008DA20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008DADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008DD44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008DE90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008DF44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E0D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E1A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E250);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E34C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E514);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E7C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008E914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008EAD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008EE00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008EFBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_55DEAEBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008F440);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_97037761);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008F83C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FB54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FC7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FD70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FE48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0008FFC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000900DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000901BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126380);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012678C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001267E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000905C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009088C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090A9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00090F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00091268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00091620);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00091834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00091940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00091D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000921C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092404);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009244C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000924D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092530);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000925BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A3194FCD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6F8055CA);

void func_00092B24(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5CA39435);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_24B1FCE6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092C14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A2F4AC9E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092CD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6D4EE418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D39BDE45);

void func_00092DBC(s32 arg0, s32 arg1) {
    func_00092894(arg0 * arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092DE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_880239D0);

void func_00092E30(s32 *arg0) {
    func_00092404(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_896E55F6);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B29BE9CE);

void sceHVNetfront_Module_CA65803E(s32 arg0) {
    func_00092894(arg0, 0);
}

void func_00092EB8(s32 arg0) {
    func_00092894(arg0, 1);
}

void func_00092ED4(s32 arg0, s32 arg1) {
    func_00092894(arg0 * arg1, 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00092EF8);

void sceHVNetfront_Module_0D525122(s32 *arg0) {
    func_00091D94(*arg0, 1);
    func_00092704(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_7D1421C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E459881C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_08549708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_86AB5444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093060);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009306C);

void func_00093120(s32 *arg0) {
    *arg0 = 0x800;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009312C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009313C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009315C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009316C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093238);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093314);

s32 func_00093620(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_24B1FCE6(8);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 2;
        var_v1 = 1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_440B8F87);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_234F9191);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000937E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_96BF9A55);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000938C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_FA035F7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6586506B);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E42E1A51);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093D00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00093DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BB4FD3D9);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3F9C6B99);

void sceHVNetfront_Module_EF305D32(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5C2358BA);

void sceHVNetfront_Module_A71A4744(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_060EC20F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B3475EA5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_863666A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094378);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_75166C95);

void sceHVNetfront_Module_38FB998B(void **arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000944A0);

void func_000944C8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000944D0);

void func_00094538(void **arg0) {
    sceHVNetfront_Module_38FB998B(arg0);
    sceHVNetfront_Module_A2F4AC9E(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3EF6933E);

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

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001268C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001269F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001269F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_517019DD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_89FF7199);

void sceHVNetfront_Module_7B63B90F(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000948B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009490C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009493C);

void func_00094A08(s32 *arg0) {
    sceHVNetfront_Module_6DC3FDE4(*arg0);
    func_000948B0(arg0, -1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094A3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094DCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00094FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009503C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095098);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000950C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009519C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009522C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000955B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000959E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095A24);

void func_00095A8C(void) {
    func_000944C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095AA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095C90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00095FA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096378);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096A1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096BC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096CEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096D60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096D70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00096E88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000971CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009722C);

s32 func_0009755C(s32 arg0) {
    return arg0 + 0x10;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097564);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009759C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000975D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009761C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097650);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097698);

void func_000976EC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000976F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097728);

s32 func_000978CC(s32 arg0) {
    return arg0 + 4;
}

void func_000978D4(void *arg0, s32 arg1) {
    func_00094378(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009790C);

void func_0009795C(void) {
}

void func_00097964(void *arg0, s32 arg1) {
    func_00094378(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}

s32 func_0009799C(s32 arg0) {
    return arg0 + 0x48;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000979A4);

void func_00097A58(void) {
    func_000959E8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097A74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097B04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D42BFA17);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_31827CC9);

void func_00097CF0(s32 arg0) {
    func_00094378(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_B8C1F074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00097F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009803C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_00CEAD19);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00098524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009864C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000989DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00098BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00098C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00098E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00098FEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000990CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126B14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126B20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099368);

s32 func_000994F4(s32 arg0) {
    return arg0 + 0xC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000994FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000997DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20A7707B);

void func_0009982C(void *arg0, s32 arg1) {
    func_00097CF0(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099878);

void func_000998C8(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000998D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099A44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2FA79A94);

void sceHVNetfront_Module_0FB109D0(void) {
    func_000998C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099E4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126BCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126BD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00099F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_050C318E);

s32 func_0009A1BC(void *arg0) {
    func_00099864();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 6);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A1F0);

void func_0009A220(void) {
    func_000998C8();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_59B0EF30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126C8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_449342C5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9C286F1A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_4C776B9A);

void func_0009A5D4(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A7C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A86C);

void func_0009A884(s32 **arg0) {
    s32 *temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        sceHVNetfront_Module_0D525122(temp_v0);
    }
}

s32 func_0009A8AC(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (((M2C_FIELD(arg0, s32 *, 8) | M2C_FIELD(arg0, s32 *, 0xC)) == 0) && (M2C_FIELD(arg0, s32 *, 0) == 0)) {
        var_a1 = M2C_FIELD(arg0, s32 *, 4) == 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A8DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009A900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AB9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009ABD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AC54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AC98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009ACD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AD08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AD88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009ADF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AE64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AF10);

s32 func_0009AFD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009AFDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B05C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B0C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B164);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B19C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B27C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B32C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B39C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B3E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B434);

void func_0009B454(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
}

void func_0009B460(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B46C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B4C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B6AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009B9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009BBF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009BF18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009BF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009C0F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009C210);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009C26C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009C664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009C750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CA14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CC2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CEC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CF1C);

void func_0009CFA0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    sceHVNetfront_Module_2A34EDF3(arg0 + 4);
    sceHVNetfront_Module_A2F4AC9E(M2C_FIELD(arg0, s32 *, 0x5C));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009CFD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D0E0);

void func_0009D128(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 + 0x1C;
    temp_s1 = arg0 + 4;
    sceHVNetfront_Module_40EFD93B(temp_s1, temp_s2);
    sceHVNetfront_Module_C0A215A2(temp_s1);
    sceHVNetfront_Module_1A741A10(temp_s1, M2C_FIELD(arg0, s32 *, 0x18) - 1, temp_s2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D188);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D230);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D27C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D30C);

s32 func_0009D394(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D39C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D548);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009D650);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DA24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DAB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DC84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DDE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DE4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DEF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009DF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E0A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E2E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E304);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E65C);

void func_0009E8DC(void) {
    sceHVNetfront_Module_34C99643();
}

void func_0009E8F8(void) {
    sceHVNetfront_Module_B8C28371();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009E914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EAF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EBA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EC88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EE3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EEA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009EEE4);

void func_0009F018(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D77AFB32);

void sceHVNetfront_Module_0FD607BB(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_88977645);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F138);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_CF3077BE);

void sceHVNetfront_Module_4E8351E4(s32 arg0) {
    sceHVNetfront_Module_CF3077BE(arg0, sceHVNetfront_Module_15875ED4(arg0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EE835D7A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_68FDD829);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AFCC3786);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F384);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F46C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F478);

void sceHVNetfront_Module_27D353B1(s32 arg0) {
    sceHVNetfront_Module_D9FE99F5(arg0, sceHVNetfront_Module_15875ED4(arg0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_D9FE99F5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8C9ECF26);

void func_0009F65C(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_AE926D7C(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AE926D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3EDA77E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F7A4);

void func_0009F7DC(s32 *arg0) {
    func_000842BC(*arg0);
}

void func_0009F7F8(s32 arg0, s32 arg1) {
    sceHVNetfront_Module_9CDC3730(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9CDC3730);

void sceHVNetfront_Module_FF428AF7(s32 arg0, s32 *arg1) {
    func_0009F7F8(arg0, *arg1);
}

void func_0009F880(s32 arg0, s32 arg1) {
    func_0009F8C4(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F8C4);

void sceHVNetfront_Module_12AE9009(s32 arg0, s32 *arg1) {
    func_0009F880(arg0, *arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AFEF4A19);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009F9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_700625E1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009FA80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009FAD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_8F6C6F95);

void sceHVNetfront_Module_C4BC962C(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 4) = sceHVNetfront_Module_7D1421C0();
    temp_v0 = sceHVNetfront_Module_E459881C(arg0);
    M2C_FIELD(arg1, s32 *, 8) = 0x3F8;
    M2C_FIELD(arg1, s32 *, 0) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0xC) = sceHVNetfront_Module_15875ED4(temp_v0);
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C6156659);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1BC9B1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009FD40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_745DE4E7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DCC1C9E2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0009FEB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_31885E20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_06068307);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_5E3D4ABB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A00CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_055CBAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_736A2D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EAA7FA6F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_6375C58E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0480);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A052C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A05B4);

s32 func_000A064C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0_2 = sceHVNetfront_Module_E459881C(arg2);
    temp_s0 = func_000A05B4(arg0, arg1, temp_s0_2, sceHVNetfront_Module_3EDA77E7(arg2));
    sceHVNetfront_Module_08549708(arg2);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A06C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_14A6B003);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_89C1EDD7);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_BA5A2E8A);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0A58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0AB4);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0C0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0C84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0D20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_03D27BCE);

void sceHVNetfront_Module_4C96FA60(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2 * 8);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    sceHVNetfront_Module_D611E938(arg1, 0, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A0E50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_A93E0E9F);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_EF477CFA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_9D05957E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_310CAD12);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_810ADFBD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2B20EB10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_E2030681);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_780CC2E9);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126D78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126DCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126DE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126DFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126E14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126E2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00126F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001272B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001272C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_47E2BF36);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1394);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_3927422C);

void sceHVNetfront_Module_6148A422(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_40BDC0A2);

s32 sceHVNetfront_Module_4417421E(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = 4;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return 1;
}

void sceHVNetfront_Module_D34DCBBE(void) {
}

void func_000A16E4(s32 *arg0) {
    *arg0 = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A16F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A17D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A188C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A19DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1AE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1BA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1D34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1D94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A1F8C);

void func_000A1FDC(void) {
    func_000A0D20();
}

void func_000A1FF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}

void func_000A2004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A20F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2218);

s32 sceHVNetfront_Module_F45546DA(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_DE0C90FA);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_ED3A897E);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2398);

s32 func_000A2498(s32 *arg0) {
    func_000A0E50(*arg0 + 0x38);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A24BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A25D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2638);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A27D4);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AED8D7BD);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2A1C);

void func_000A2B28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}

void func_000A2B34(void *arg0) {
    func_000A17D8(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x6C), 0);
}

void func_000A2B58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    func_000A2B28(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2C24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2D24);

s32 sceHVNetfront_Module_905CB6D7(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_C382CB05);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AE6CB5A5);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_2045C943);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A2F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A306C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3130);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A31D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3360);

void func_000A34F4(s32 *arg0) {
    func_000A2D24(*arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1794F669);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A35C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3698);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A3F18);

s32 func_000A4130(void) {
    return 0x22;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4138);

void func_000A4198(void) {
    func_000A3F18();
}

void func_000A41B4(void) {
    func_000A3F18();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A41D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A428C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A430C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A43C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4448);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A44D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A45D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A476C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A47C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001272F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127300);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A490C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A49D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4A38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4CCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4DD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4E94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4F3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A4FC0);

void func_000A4FE0(void) {
    func_000AE270();
}

void func_000A4FFC(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5034);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5050);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A534C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127328);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127588);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127668);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001276A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5648);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A58B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5A14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5A2C);

void func_000A5A94(void) {
    func_000AE270();
}

void func_000A5AB0(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5AE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5B04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5E64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5EF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A5F78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A60D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A60F0);

void func_000A6158(void) {
    func_000AE270();
}

void func_000A6174(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A61AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012773C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127768);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001277C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127928);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127988);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127A08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A61C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A631C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A64D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A65A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A67C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A67D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6840);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A688C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6A00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6C3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6D64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6F1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A6F50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7088);

void func_000A721C(void) {
    func_000AE270();
}

void func_000A7238(void) {
    func_000AE270();
}

void func_000A7254(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A728C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A72A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A72C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A73D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127B64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127BC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127CC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127CE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127D24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127D84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127D94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A760C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7A18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7AE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127ED8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127EE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127EF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127F38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00127F78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7B98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7C8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012801C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012805C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7D40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A7E34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A807C);

void func_000A80E4(void) {
    func_000AE270();
}

void func_000A8100(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A811C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8138);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A82A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A84C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8560);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A86C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A86D8);

void func_000A8740(void) {
    func_000AE270();
}

void func_000A875C(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A87B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8994);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8CE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8EB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8ECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128134);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128164);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012817C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128194);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A8F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9340);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9564);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A97F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9914);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9B1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9D4C);

void func_000A9DAC(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9DC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001287C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000A9FF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA00C);

void func_000AA040(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA05C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128968);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA2A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA2C0);

void func_000AA2F4(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA32C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA344);

void func_000AA378(void) {
    func_000AE270();
}

void func_000AA394(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA3B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA3CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA3E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA51C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA5CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA67C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA7DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA7F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AA85C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AAA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AAB6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AABC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AAF28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AB1A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AB6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AB6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AB714);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AB90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABABC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABB38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABB74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABC90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABD74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABDDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABE44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABE60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABE7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABE98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABEB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ABF40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC004);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC03C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128B30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128B70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128C30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC0EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC224);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC25C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC30C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC3BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC3D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC5C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC75C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128D64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128E24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128F24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128FA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00128FE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129064);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AC9E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACA00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACA1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACACC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129158);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129218);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACAE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACC14);

void func_000ACC30(void) {
    func_000ACC4C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACC4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACD60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACD7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACD98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ACEE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD0EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD108);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD45C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD7F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD888);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD90C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AD9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ADA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ADCE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ADDA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ADE68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ADF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE058);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE270);

void func_000AE2F0(void) {
    func_000AE270();
}

void func_000AE30C(void) {
    func_000AE270();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE3C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE4A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE4BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE4D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE57C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE640);

void func_000AE658(void) {
    func_0008C9C0();
}

s32 func_000AE674(void) {
    return -1;
}

s32 func_000AE67C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AE7BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AEA68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AEDA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF080);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF188);

s32 func_000AF24C(void) {
    func_000AF080();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF26C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF390);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF3F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF45C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF5C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF5FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF654);

s32 func_000AF6B0(void) {
    func_000CD980();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF6D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF728);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AF940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFB3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFB7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFC1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFCD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFD20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFD80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFDD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000AFFFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0050);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B02E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0370);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0418);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B04A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B069C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B07DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B09B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0B44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0BB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B0F1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B10D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B12C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B143C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B17DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B19F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1A38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1AD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1B38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1B9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1C00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1CB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B1F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B209C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B20DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2104);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2114);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B213C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2228);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2284);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B22D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2390);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B24B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B27CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2858);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B28AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B290C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B29C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2A28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2AF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2B50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2BE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B2E2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3750);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3AF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012967C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3D24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3D74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3DF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3E60);

s32 func_000B3E9C(void) {
    return 1;
}

s32 func_000B3EA4(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B3F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4000);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B40DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B42B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B42F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4384);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B450C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B45CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4704);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B48A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B48FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4960);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B49DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4BAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4DD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B4E90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B52A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B52C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B53FC);

s32 func_000B56EC(s32 arg0) {
    func_000CD9B4();
    func_000B9270(arg0, 0);
    return 1;
}

s32 func_000B5720(void) {
    func_000CD9B4();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B5740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B5B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B6424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B6BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B6CE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B6ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B70DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7630);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129730);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B79B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B79F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7A1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7A28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7AFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7B64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7BE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7DE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B7F20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8020);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8110);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B81E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8328);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B843C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B852C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B860C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8660);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B86B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8764);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8B74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B8EDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B90F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B921C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B92C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B97CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9850);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B98B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B997C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B99E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9A34);

s32 func_000B9AC0(void *arg0, void *arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x44);
    M2C_FIELD(arg1, s32 *, 4) = temp_a0;
    func_000CB7F8(temp_a0);
    return 1;
}

s32 func_000B9AE4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9AEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000B9D60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA0A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA1E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA2E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA360);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA5C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA7EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BA9D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAA50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAC4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BACA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BADB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAE10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAF50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BAFCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB068);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB1BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB2A4);

s32 func_000BB31C(void) {
    return 1;
}

s32 func_000BB324(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB32C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB6A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB7CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB80C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB86C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB9D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BB9E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBA34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBB80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBBD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBC8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBCEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBD94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBE2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBEC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBF5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BBFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC06C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC1DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC238);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC2F0);

s32 func_000BC3D4(void) {
    return *func_000BBB80() == 0x2A;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC3FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC468);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC4E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC6F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC920);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BC9EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCAC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCB70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCBF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCC70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCD1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCDBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCE2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCE94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCF04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCF6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BCFE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD060);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD0B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD128);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD264);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD298);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD2AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BD880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BDB1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BDD74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BDE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BDEFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BDFC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE01C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE270);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE4C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE610);

void func_000BE69C(s32 arg0) {
    func_000BF398();
    sceHVNetfront_Module_C04FADD9(arg0 + 0x410);
    sceHVNetfront_Module_C04FADD9(arg0 + 0x434);
}

void func_000BE6D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 1;
    func_000BF398();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE6F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE738);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BE838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEA48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEAE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEB24);

s32 func_000BED34(s32 arg0, M2C_UNK arg1) {
    return sceHVNetfront_Module_41CEA51D(arg0 + 0x410, 0, arg1) != 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BED5C);

void func_000BEED0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x468) = arg1;
}

void func_000BEED8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x46C) = arg1;
}

void func_000BEEE0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x470) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEEE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BEFFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF15C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF224);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF2A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF3D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF47C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF4B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF79C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF988);

void func_000BF9C4(void **arg0) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(s32), 0x4A8)(M2C_FIELD(temp_v0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BF9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BFA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BFAC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BFCCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000BFE50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C00AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C01F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C0500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C08BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C0A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C0D04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C0EDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C10DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C12D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1474);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1AC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1C78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1D50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C1F04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C22A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C2444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C2668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C2838);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C29F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C2BF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C2DA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C30D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C3454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C394C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C3D10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C3DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C3F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C42B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4680);

void func_000C47C8(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x2C);
    sceHVNetfront_Module_EA8FFAF4(arg0 + 4);
}

void func_000C4800(s32 arg0) {
    sceHVNetfront_Module_C04FADD9(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C481C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4858);

void func_000C48EC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C48F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C49C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4C64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4D2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4D68);

void func_000C4DEC(void) {
    sceHVNetfront_Module_A2F4AC9E();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C4E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C51BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5620);

void func_000C5708(void) {
    func_000C4DEC();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C57D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C580C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5908);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5928);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5A44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5B40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129794);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129A64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129B24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C5FF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C61D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6454);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C64BC);

void func_000C6560(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C65A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6B08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6CC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C6F6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7054);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7138);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C71C4);

void func_000C7230(s32 arg0) {
    sceHVNetfront_Module_2A34EDF3(arg0 + 0x7C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C724C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C72F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C73E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C74F0);

s32 func_000C7560(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

s32 func_000C7568(void) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_000C74F0();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0x38);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7594);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C77E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C78A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7C74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7E50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7E78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7EA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7EC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7F94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C7FBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C807C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C80D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C81A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C826C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8300);

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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C83AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C842C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C84D0);

s32 func_000C859C(void **arg0) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0;
    if ((M2C_FIELD(temp_a0, s32 *, 4) != 0) || (M2C_FIELD(temp_a0, s32 *, 0x10) != 0) || (M2C_FIELD(temp_a0, s32 *, 0xC) != 0)) {
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C85D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8638);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8698);

void func_000C86E8(s32 **arg0, s32 arg1) {
    **arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C86F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8AC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8B54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8BB8);

void func_000C8C18(s32 arg0) {
    func_000CA430();
    func_0008A9D0(func_000C9DC0(arg0));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8C4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8D0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8DDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C8F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C902C);

void func_000C9038(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x58) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C90D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C91C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C92B8);

void func_000C932C(void *arg0) {
    func_000D484C();
    func_000D409C(arg0);
    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C935C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C98CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9908);

s32 func_000C996C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2FC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9974);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9994);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9A60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9AB0);

void func_000C9AEC(s32 *arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_D5A24BD1(arg1, *arg0 + 0x14);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9B14);

void func_000C9C24(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_D5A24BD1(arg1, *arg0 + 0x34);
    func_0008A7AC(arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9C60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9CD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9D10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9D80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9DC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9DCC);

void func_000C9DD8(void **arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x48) | arg1);
}

void func_000C9DEC(void **arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x48) & arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9E70);

void func_000C9ECC(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x4C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9ED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9EE4);

s32 func_000C9EF0(void **arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = *arg0;
    temp_v0 = M2C_FIELD(temp_v1, s32 *, 0x70);
    M2C_FIELD(temp_v1, s32 *, 0x70) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9F00);

void func_000C9F0C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9F18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9F24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9FDC);

void func_000C9FE8(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x64) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000C9FF4);

void func_000CA000(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x68) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA00C);

void func_000CA018(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x78) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA030);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA098);

void func_000CA0A4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x7C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA0B0);

void func_000CA128(s32 arg0) {
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA144);

void func_000CA19C(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA1A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA2B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA518);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA720);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA73C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA758);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CA9FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAA44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAC00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAC34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAC50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CACB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAD58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CAFF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB04C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB0F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB11C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB184);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB1F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB424);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB58C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB768);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB7F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CB8DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBC8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBCF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBD08);

void func_000CBD1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30C) = 0;
}

void func_000CBD24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x310) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBD2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBD38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBE1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBE68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBED8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBF3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBF48);

void func_000CBF54(void **arg0) {
    func_000C8334(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBF70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CBF88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC0D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC1C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC248);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC2B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC3AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC464);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC4BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC4D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC55C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC568);

void func_000CC590(void) {
    func_000CC248();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC5AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC6E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC7C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CC844);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCAE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCB28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCB88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCCDC);

void func_000CCCF4(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x98) = arg1;
}

s32 func_000CCD00(void) {
    return 0;
}

s32 func_000CCD08(void) {
    return 0;
}

s32 func_000CCD10(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCD18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCE14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCF08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CCFB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD494);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD4A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD568);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD5E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD980);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD9B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CD9EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CDCD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CDD3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CDF30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CDFB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE0C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE130);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE198);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE200);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE258);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE30C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE3A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE4C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CE9BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEA60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEAF0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEB2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEBB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEC50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CED80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEE74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CEEE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF614);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF7A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CF9F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000CFA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D03E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0520);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D05E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0650);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D06E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0764);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0814);

s32 func_000D08C4(void) {
    func_000CEA60();
    return 1;
}

s32 func_000D08E4(void) {
    func_000CEBB8();
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0984);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0BCC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D0EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1030);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1070);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1098);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D10A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D10D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D11D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D122C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D123C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D12F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1348);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D13DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1484);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D16F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D185C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1B30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1D84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1E24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1EC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D1FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2090);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D20F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D21A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D223C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D22A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D254C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D25F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D26EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2760);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D27B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2834);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D288C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D28F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D295C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2CA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2D3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2DEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2E3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2E90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2F1C);

s32 func_000D2F70(void) {
    return 1;
}

s32 func_000D2F78(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D2F80);

s32 func_000D2FA0(void) {
    return 1;
}

s32 func_000D2FA8(void) {
    return 1;
}

s32 func_000D2FB0(void) {
    return 1;
}

s32 func_000D2FB8(void) {
    return 1;
}

s32 func_000D2FC0(void) {
    return 1;
}

s32 func_000D2FC8(s32 arg0, M2C_UNK arg1) {
    func_000CC464();
    func_000CCD18(arg0, arg1);
    return 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D3008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D3088);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D30E8);

void func_000D3148(void) {
    func_000CCA4C();
}

s32 func_000D3164(void) {
    return 1;
}

s32 func_000D316C(void) {
    func_000CC590();
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D318C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D371C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D38CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D3B30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D3DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D409C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4104);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4488);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4530);

s32 func_000D45B0(s32 arg0, void *arg1) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    var_a2 = 0;
    if (temp_v1 >= 0) {
        var_v1 = M2C_FIELD(((temp_v1 * 0xC) + arg0), s32 *, 0xA0);
        if (var_v1 < 0) {
            var_v1 = M2C_FIELD(arg1, s32 *, 4);
        }
        var_a2 = M2C_FIELD(((var_v1 * 0xC) + arg0), s32 *, 0xA8);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D45F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4638);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D476C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D47D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D484C);

s32 func_000D488C(void) {
    return 0x4038;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4960);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4B04);

s32 func_000D4B18(s32 arg0, s32 arg1, s32 arg2) {
    return (arg1 - arg0) >= arg2;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4B28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4C0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4CD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4D44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4D84);

void func_000D4DDC(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4DE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4E5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4E80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4EA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4EC8);

void func_000D4F2C(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x60);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D4F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D50C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D511C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5204);

void func_000D5268(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x118);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D536C);

void func_000D5418(s32 arg0) {
    sceHVNetfront_Module_D611E938(arg0, 0, 0x10);
    sceHVNetfront_Module_D611E938(arg0 + 0x30, 0, 0x10);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5524);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D55A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D5604);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D6988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D69D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D6AD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D6BFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D6EF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7164);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D720C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D73E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D75D4);

void func_000D77C4(s32 arg0, M2C_UNK arg1) {
    func_000D7164(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D77E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D784C);

void func_000D78B0(s32 arg0, s32 arg1) {
    func_000D7164(arg1, arg0);
    func_000D7164(arg1 + 8, arg0 + 0x80);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D78FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7990);

void func_000D7A24(s32 arg0, s32 arg1) {
    func_000D7164(arg1, arg0);
    func_000D7164(arg1 + 8, arg0 + 0x80);
    func_000D7164(arg1 + 0x10, arg0 + 0x100);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7BA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D7C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D8690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D86CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D87CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D88F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D8950);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_18CB51AB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D8A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000D8AB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129DF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129E08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129E1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129E30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129E44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00129F44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012A548);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012A648);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012A748);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012A788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012A78C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012AF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B00C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_216D1BF1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_461C7724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA1C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA2C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA344);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA490);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA4C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DA690);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B26C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B29C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B2DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B31C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_85C2B45D);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B3EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B410);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAC40);

s32 func_000DAC4C(void) {
    return 0x55;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAC54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAC74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAC94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DACB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAE34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAE40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DAE6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DB268);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012B458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DB6A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_108703C2);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_09FA691C);

void func_000DBD14(void) {
    func_000E6350();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DBD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_26B067E3);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC000);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC0FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_20D27DB1);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_1171FA01);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC408);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_F6376D31);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC7D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DC8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCB34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCD20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCE3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCE98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCEAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DCFC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DD028);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DD0A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DD168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DD590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DD934);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DDD50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DE078);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DE1E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DE4D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DE5EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DE7AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DEAD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DEBE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DED6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DEE74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF168);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", sceHVNetfront_Module_AB30BEB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF380);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF3A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF44C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF53C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF5A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DF958);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DFA90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DFD30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DFF10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000DFF54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0064);

void func_000E0190(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C0);
    M2C_FIELD(temp_v1, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E01A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E02C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0320);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E04CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E0E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E10F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E123C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E16F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E17A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E18C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E196C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1C88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1DF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1E08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1F00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E1F74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2038);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2124);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E229C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2548);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E257C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E25A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2618);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E27B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E27E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E29B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2CEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2DB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E2E74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E30F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3204);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E352C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3744);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E38C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3918);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3A5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3A78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3A94);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3AB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3ACC);

void func_000E3AD4(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x14) = 0x31;
    M2C_FIELD(temp_v1, M2C_UNK (**)(), 0)();
}

s32 func_000E3B00(void) {
    return 0;
}

void func_000E3B08(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3B10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3C7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3CAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3CDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E3EAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4074);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E414C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E41F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4450);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E476C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E47F4);

void func_000E4954(void) {
}

void func_000E495C(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x14) = 0x2E;
    M2C_FIELD(temp_v1, M2C_UNK (**)(), 0)();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4988);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4B08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4B48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4B7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E4FE0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E51A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5348);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E543C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5670);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5800);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5DAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5E88);

void func_000E5EC0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E5EC8);

void func_000E6068(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x1C) = 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6078);

s32 func_000E6258(s32 arg0, s32 arg1) {
    return (s32) ((arg0 + arg1) - 1) / arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6278);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6298);

void func_000E6308(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0010C3E0(arg1, arg0, arg2 << 7);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6330);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E63A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E63E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6410);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E643C);

void func_000E6488(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    func_000E643C();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E64A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6510);

s32 func_000E67D4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E67DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E69D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6C08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E6D58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7508);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E77BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E78E4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7960);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E79F8);

void func_000E7B40(void) {
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D4F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D530);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D570);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D574);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D768);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D770);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D878);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7B48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E7D68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8030);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E80F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8294);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8600);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8790);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E88DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8984);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8E44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E8EF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9014);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9144);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E923C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9310);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E93AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E964C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9684);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012D9D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DA58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DA78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DAB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E97CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000E9BDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EA098);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EA6BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EAAAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EAD18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EAD54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EAE04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EAE64);

void func_000EAE74(s32 arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 4) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EAEB0(s32 arg0) {
    sceHVNetfront_Module_896E55F6();
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EAEDC(s32 arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0x38) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
    return arg1;
}

s32 func_000EAF1C(s32 arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0x38);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EAF58(s32 arg0, s32 arg1) {
    M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0x60) = arg1;
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EAF94(s32 arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVNetfront_Module_896E55F6(), s32 *, 0x60);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EAFD0(s32 arg0, s32 arg1) {
    func_000EB0B0(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1));
}

void func_000EB014(s32 arg0, s32 arg1) {
    func_000EAFD0(arg0, sceHVNetfront_Module_E459881C(arg1));
    sceHVNetfront_Module_08549708(arg1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB05C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB0B0);

void func_000EB10C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_000EB22C(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB160);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB1C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB22C);

void func_000EB2A0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x20)(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB2FC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x24)(temp_v0, arg1, arg2);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EB358(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC008(sceHVNetfront_Module_896E55F6());
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB39C(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC024(sceHVNetfront_Module_896E55F6());
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB3E0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC040(sceHVNetfront_Module_896E55F6(), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB44C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC158(sceHVNetfront_Module_896E55F6(), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB4B8);

void func_000EB534(s32 arg0) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **), 0x28)(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB574(s32 arg0) {
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **), 0x2C)(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

s32 func_000EB5B4(s32 arg0) {
    s32 temp_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_s0 = M2C_FIELD(*temp_v0, s32 (**)(void **), 0x30)(temp_v0);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB604(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC2A0(sceHVNetfront_Module_896E55F6());
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

void func_000EB648(s32 *arg0) {
    func_000EC2AC(*arg0);
}

void func_000EB664(s32 *arg0) {
    func_000EC2C8(*arg0);
}

void func_000EB680(s32 *arg0) {
    func_000EC2D4(*arg0);
}

void func_000EB69C(s32 *arg0) {
    func_000EC2F0(*arg0);
}

void func_000EB6B8(s32 *arg0) {
    func_000EC2FC(*arg0);
}

void func_000EB6D4(s32 *arg0) {
    func_000EC318(*arg0);
}

void func_000EB6F0(s32 arg0, M2C_UNK arg1) {
    func_000EC324(sceHVNetfront_Module_896E55F6(), arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

void func_000EB734(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x5C) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB740);

s32 func_000EB74C(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_s0 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK), 0x3C)(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

s32 func_000EB7A0(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_s0 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK), 0x40)(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

void func_000EB7F4(s32 arg0, M2C_UNK arg1) {
    func_000EC350(sceHVNetfront_Module_896E55F6(), arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB838);

s32 func_000EB8AC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_000EC374(sceHVNetfront_Module_896E55F6());
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s1;
}

s32 func_000EB8F0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;

    temp_s0 = func_000EC37C(sceHVNetfront_Module_896E55F6(), arg1, arg2, arg3);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB95C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EB9B0);

s32 func_000EBA14(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;
    void **temp_v0;

    temp_v0 = sceHVNetfront_Module_896E55F6();
    temp_s0 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK), 0x5C)(temp_v0, arg1);
    sceHVNetfront_Module_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBA68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBB5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBCD4);

void func_000EBE7C(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    func_000EBCD4(arg0, arg1, arg2, sceHVNetfront_Module_3EDA77E7(*arg2));
}

void func_000EBED0(s32 arg0) {
    func_000F0F48(arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBEEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBEF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EBFFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC008);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC024);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC040);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC158);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC1C0);

void func_000EC280(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC290);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC2FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC318);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC350);

void func_000EC358(s32 arg0) {
    func_000F025C(arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC374);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC37C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC3DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC4C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EC93C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECA60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECCD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECE4C);

void func_000ECEE4(s32 arg0) {
    sceHVNetfront_Module_457A4136(arg0 + 0x8C, 0xC);
}

void func_000ECF04(s32 arg0) {
    sceHVNetfront_Module_C04FADD9(arg0 + 0x8C);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECF20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECF7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ECFFC);

void func_000ED07C(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_000EBED0(arg0);
    func_000EE45C(arg0, arg1, -arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED0CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED178);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED21C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED278);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED3F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DB08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED4F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED71C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000ED97C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EDA0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EDA40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EDD24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE0E0);

s32 func_000EE138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE174);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE1FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE45C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE55C);

s32 func_000EE5C0(void *arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x8C;
    return M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0, sceHVNetfront_Module_1461AF80(temp_s0)) + M2C_FIELD(arg0, s16 *, 0x98)), s32 *, 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE8E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EE9DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEAA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEB60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EED20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEE70);

void func_000EEF40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void func_000EEF48(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xB0) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEF54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EEFC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF068);

void func_000EF124(s32 arg0) {
    func_000EBED0(arg0);
}

void func_000EF140(void) {
    func_000EBEEC();
}

void func_000EF15C(void *arg0) {
    func_000EC280(arg0);
}

s32 func_000EF178(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF2A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF4A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF678);

s32 func_000EF7A4(void) {
    return 1;
}

s32 func_000EF7AC(void) {
    return 1;
}

s32 func_000EF7B4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF7BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EF938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFA90);

void func_000EFBB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFBC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFBE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFC60);

void func_000EFCCC(s32 arg0, s32 arg1, M2C_UNK arg2) {
    func_000EFC60(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFD20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFD90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFDCC);

void func_000EFE44(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    sceHVNetfront_Module_AE926D7C(*arg0, arg1, arg2);
    func_000EFDCC(arg0, arg2, arg3);
}

void func_000EFE94(s32 *arg0, s32 arg1, s32 arg2) {
    func_000EFE44(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), arg2);
}

void func_000EFEE8(s32 *arg0, s32 arg1, s32 arg2) {
    func_0009F738(*arg0);
    func_000EFDCC(arg0, sceHVNetfront_Module_3EDA77E7(arg1), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000EFF40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0080);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F025C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F04F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F05C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0710);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F07F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0944);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0C2C);

void func_000F0D28(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    func_000F0C2C(arg0, arg1, arg2, sceHVNetfront_Module_3EDA77E7(*arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F0FD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F118C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1234);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F12C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1348);

void func_000F1420(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_08549708(*arg0);
    sceHVNetfront_Module_703D7675(arg1 + 0x14, arg1 + 0x38);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F151C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DBCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DC9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DCF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DD10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DD2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DD48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DD64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DD80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1594);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1624);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DDC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1648);

void func_000F16C8(void) {
    func_000F3018();
}

void func_000F16E4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = func_000DAE40(0, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F17C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1D94);

s32 func_000F1DEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x414);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1DF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1E00);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1E0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DEDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1E24);

void func_000F1EAC(s32 arg0) {
    func_000D88F8(arg0 + 0x428);
}

s32 func_000F1EC8(void) {
    return 0x27DE;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1ED0);

s32 func_000F1EEC(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1EF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1F44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F1FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F20C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2138);

void func_000F2148(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2150);

s32 func_000F2160(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x408);
}

s32 func_000F2168(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 8) & arg2;
    }
    return var_v0;
}

s32 func_000F218C(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_v0;
}

s32 func_000F21AC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xD4);
    }
    return var_v0;
}

s32 func_000F21CC(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = *arg1;
    }
    return var_v0;
}

s32 func_000F21EC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    return var_v0;
}

u8 func_000F220C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x18);
    }
    return var_v0;
}

u8 func_000F222C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x19);
    }
    return var_v0;
}

u8 func_000F224C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1B);
    }
    return var_v0;
}

u8 func_000F226C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1C);
    }
    return var_v0;
}

u8 func_000F228C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1A);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F22AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F22F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F238C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F24B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F24FC);

u8 func_000F2540(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1D);
    }
    return var_v0;
}

s32 func_000F2560(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F25BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2674);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F272C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F276C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F27B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F27F4);

s32 func_000F2860(s32 arg0, void *arg1, s32 *arg2) {
    if (((arg0 != 0) & (arg1 != NULL)) && (arg2 != NULL)) {
        *arg2 = M2C_FIELD(arg1, s32 *, 0xCC);
    }
    return M2C_FIELD(arg1, s32 *, 0xD0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F288C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012DF18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F28D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2A78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2ADC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2B84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2BEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2C38);

s32 func_000F2C7C(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_v1;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 0x30);
        if (temp_v1 > 0) {
            if (arg2 != NULL) {
                *arg2 = M2C_FIELD(arg1, s32 *, 0x38);
            }
            if (arg3 != NULL) {
                *arg3 = temp_v1;
            }
            return M2C_FIELD(arg1, s32 *, 0x30);
        }
    }
    if (arg3 != NULL) {
        *arg3 = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2CCC);

s32 func_000F2D58(s32 arg0, void *arg1, s32 *arg2) {
    if (((arg0 != 0) & (arg1 != NULL)) && (arg2 != NULL)) {
        *arg2 = M2C_FIELD(arg1, s32 *, 0xB4);
    }
    return M2C_FIELD(arg1, s32 *, 0xB8);
}

u8 func_000F2D84(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5B4);
    }
    return var_v0;
}

s32 func_000F2D98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5A4);
    }
    return var_v0;
}

s32 func_000F2DAC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5CC);
    }
    return var_v0;
}

s32 func_000F2DC0(s32 arg0) {
    return !(arg0 & 1) ? 0 : 0xFC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2DD0);

u8 func_000F2DF0(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5C5);
    }
    return var_v0;
}

s32 func_000F2E04(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5C8);
    }
    return var_v0;
}

s32 func_000F2E18(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F0);
    }
    return var_v0;
}

s32 func_000F2E2C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F4);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F2FDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3060);

void func_000F3090(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x420);
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (temp_s1 | 0x100000);
    func_000F2F48();
    M2C_FIELD(arg0, s32 *, 0x420) = temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F30D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3104);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3128);

s32 func_000F3138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5D0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F31A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3A44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3A54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3D88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F3FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F412C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F483C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F48CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4F88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F4FDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5010);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F503C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E1C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E1CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E1E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E1F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F538C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F53B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5438);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5C34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5C60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5DE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E3C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F5F30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F63FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F64F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F658C);

void func_000F6A44(void **arg0, void **arg1, void **arg2) {
    s32 temp_s3;
    s32 temp_s4;
    void *var_s0;
    void *var_s2;
    void *var_s6;

    var_s6 = NULL;
    var_s2 = NULL;
    var_s0 = NULL;
    if (arg0 != NULL) {
        var_s0 = *arg0;
    }
    if (arg1 != NULL) {
        var_s2 = *arg1;
    }
    if (arg2 != NULL) {
        var_s6 = *arg2;
    }
    temp_s3 = M2C_FIELD(var_s0, s32 *, 0x5D8);
    temp_s4 = M2C_FIELD(var_s0, s32 *, 0x5D0);
    func_000F6B50(var_s0, var_s2, var_s6);
    if (var_s2 != NULL) {
        func_000F1900(var_s0, var_s2, 0x4000, -1);
        func_000F2F08(var_s2, temp_s3, temp_s4);
        *arg1 = NULL;
    }
    if (var_s6 != NULL) {
        func_000F1900(var_s0, var_s6, 0x4000, -1);
        func_000F2F08(var_s6, temp_s3, temp_s4);
        *arg2 = NULL;
    }
    if (var_s0 != NULL) {
        func_000F2F08(var_s0, temp_s3, temp_s4);
        *arg0 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F6B50);

void func_000F6E50(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x540) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F6E58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F70A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F70D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F712C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7224);

void func_000F72F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x400);
}

void func_000F7300(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x40000);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7314);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E5B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E5E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E628);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E638);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E660);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012E684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7C34);

void func_000F7C94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CA4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CD4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x4000);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7CE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7D30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7E58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F7E70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F8C64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F8EEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F9368);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F9500);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F975C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F97D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F99CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F9B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000F9F34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FA1A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FA9C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FAA4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FBD10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FC268);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FC598);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FCB08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FCCBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD550);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD6B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD6E0);

s32 func_000FD70C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

void func_000FD724(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000F70A0();
    func_000F1718(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FD8D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FDC2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FDDAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FDFAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FE028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012EA1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FE1B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FE324);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012EBC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FE75C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FE98C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FEBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FEE98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF26C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF3CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FF904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FFA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FFC78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FFE20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_000FFED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00100248);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001006CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010090C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00100C48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00100F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F428);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F42C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F464);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F4A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F4C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F4D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F4F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F51C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F548);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F570);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F598);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F5B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F5E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F600);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F61C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F650);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F674);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F698);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F6CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F6EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F70C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F734);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F758);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F7A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F7D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F804);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F844);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F864);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00100FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001011BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010136C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010142C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001014C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001015B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010195C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101B70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101BA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101C64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101CA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101CD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101DB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00101F44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010219C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001023EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010256C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001025B0);

s32 func_001025D0(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 & 5;
    var_v0 = 0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x5BC) = temp_a1;
        var_v0 = temp_a1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001025EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010274C);

void func_001027B8(s32 arg0, void *arg1, M2C_UNK arg2) {
    if ((arg0 != 0) & (arg1 != NULL)) {
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) & ~arg2);
    }
}

void func_001027E0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001027E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001027F4);

void func_00102800(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 1);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102810);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102834);

void func_0010285C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4DB) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102880);

s32 func_001028A8(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (M2C_FIELD(arg0, u8 *, 0x4D7) != 0) {
        var_v1 = 7;
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001028CC);

void func_00102938(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x20000);
}

void func_0010294C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x80000);
}

void func_00102960(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102970);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102A2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102E3C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102F68);

s32 func_00102FA4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00102FAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103890);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103B98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F940);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F960);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012F9FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FA9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00103EBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010402C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FADC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00104208);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00104394);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00104534);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00104A74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00104BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010517C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00105ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001062E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00106674);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00106BC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00106F98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001076CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00108938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00109014);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FB74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FBFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FC5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FCFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FD9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FDE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FE9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FED0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FEE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FF9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0012FFE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001300FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130100);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130104);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130108);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013010C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130110);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130114);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130118);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013011C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130120);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130124);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130128);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013012C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130130);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130134);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130138);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013013C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130140);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130144);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130148);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013014C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130150);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130154);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130158);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013015C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130164);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130168);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013016C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130170);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130174);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130178);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013017C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130180);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130184);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130188);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013018C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130190);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130194);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130198);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013019C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001301C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001302D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001303FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130408);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130410);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00109334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00109AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00109BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00109F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010AC04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010AED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B5B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B5CC);

s32 func_0010B5F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B5F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B80C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B9DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013048C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130490);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130494);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130498);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013049C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001304FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130508);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130548);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013054C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130550);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130554);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130558);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013055C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130560);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130564);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013056C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130570);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130574);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130578);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013057C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130580);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130584);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130588);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013058C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130590);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001305A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130600);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013060C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130610);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130614);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130618);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013061C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130620);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130624);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130628);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013062C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130668);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013066C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130670);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130674);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130678);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013067C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130680);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130684);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130688);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013068C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130690);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130694);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130698);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013069C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130720);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130724);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130728);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013072C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130730);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130734);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130738);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013073C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130740);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130744);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130748);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013074C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130750);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130754);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130758);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013075C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130760);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130764);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130768);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013076C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130770);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130774);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013077C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130784);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013078C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130790);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130794);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130798);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013079C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_001307FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130800);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010B9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010BB08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010BB28);

void func_0010BB48(void) {
    func_0010BB64();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010BB64);

void func_0010BB8C(s32 arg0) {
    func_0010BE14(func_0010BB64(), arg0);
}

void func_0010BBBC(s32 arg0) {
    func_00110AF8(func_0010BB64(), arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010BBEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010BE14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C3E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C4EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C5A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C5E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C748);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C7B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C830);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C8E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010C930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010CAB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010CB14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010CB60);

void func_0010CC08(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(func_0010BB64(), s32 *, 0x38) == 0) {
        func_00110A74(func_0010BB64());
    }
    func_0010CC84(func_0010BB64(), arg0, arg1, arg2);
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013082C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_0013083C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010CC84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010E69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010E864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010E93C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010E9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010EBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010EFD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010F0F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0010F338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001108D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011094C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110A30);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110A74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110D74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00110EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111290);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111438);

void func_00111444(s32 arg0, M2C_UNK arg1) {
    func_00111398(func_0010BB64(), arg0, arg1);
}

void func_00111484(void) {
    func_00111438(func_0010BB64());
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001114A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111610);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111A00);

void func_00111AB8(void *arg0, void *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (M2C_FIELD(arg1, s32 *, 4) * 4) + M2C_FIELD(arg0, s32 *, 0x4C);
        M2C_FIELD(arg1, void **, 0) = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111AE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111D14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111D9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111E54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00111E88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001120A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001121B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001122F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112358);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011290C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112E64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112EB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00112F4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113170);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001131A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011321C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001132A8);

void func_00113320(void *arg0) {
    func_001134E8(func_0010BB64(), M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113350);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001133C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011342C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001134E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001135A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113610);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001136B4);

u32 func_001136F0(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001136FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011370C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113728);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113758);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001137C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001138C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113B40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113B50);

void func_00113D18(void) {
    func_0011552C();
}

void func_00113D34(void) {
    func_00115558();
}

void func_00113D50(s32 arg0) {
    func_0011370C(arg0);
}

void func_00113D6C(s32 arg0) {
    func_00115708(arg0 & 0xFFFF);
}

void func_00113D88(s32 arg0) {
    func_00113E9C(arg0 & 0xFFFF);
}

void func_00113DA4(s32 arg0) {
    func_00114DA8(arg0 & 0xFFFF);
}

void func_00113DC0(s32 arg0) {
    func_001145FC(arg0 & 0xFFFF);
}

void func_00113DDC(s32 arg0) {
    func_00115C0C(arg0 & 0xFFFF);
}

void func_00113DF8(s32 arg0) {
    func_001142EC(arg0 & 0xFFFF);
}

void func_00113E14(s32 arg0) {
    func_0011524C(arg0 & 0xFFFF);
}

void func_00113E30(s32 arg0) {
    func_00114A88(arg0 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113E9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113F84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00113FFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001140B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114230);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001142EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001142FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114378);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001143F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001144A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001144D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001145AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001145C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001145FC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114798);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011492C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001149CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114A88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114A98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114B14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114B88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114C38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114C70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114D20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114D58);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114D6C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114DA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114E28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114ECC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00114F5C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115018);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001150F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115190);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011524C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011525C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001152D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011535C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011540C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115444);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001154F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011552C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115540);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011554C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115558);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001155E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011563C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115708);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115820);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001158A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115978);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115A50);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115B34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115C0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115C1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115F14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00115FE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011602C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011642C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116578);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001165D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116644);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001168DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001169D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116A40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116AA8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116B10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116B60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116BFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116C80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116CD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116D38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116DB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116DF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130C88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130D50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130D74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116E2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116ED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00116FE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001171D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00117308);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001175B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00117B24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00117E38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00117EBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00118430);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001189DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00118A28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00118D70);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00118DD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00118E4C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001191C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001193E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001194F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119580);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119608);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119690);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001197F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001198C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011990C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119940);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_001199B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119A7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119D14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119E28);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_00119F8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130DF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront", D_00130E10);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A154);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A34C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A43C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A4E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A584);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A608);

s32 func_0011A618(void) {
    return 1;
}

void func_0011A620(void) {
    sceIoRename();
}

s32 func_0011A63C(void) {
    return -1;
}

s32 func_0011A644(void) {
    return -1;
}

s32 func_0011A64C(void) {
    return -1;
}

s32 func_0011A654(void) {
    return -1;
}

s32 func_0011A65C(void) {
    return -1;
}

s32 func_0011A664(void) {
    return -1;
}

s32 func_0011A66C(void) {
    return -1;
}

s32 func_0011A674(void) {
    return -1;
}

s32 func_0011A67C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A684);

void func_0011A6DC(void) {
    sceKernelLibcTime();
}

void func_0011A6F8(void) {
    sceKernelLibcGettimeofday();
}

s32 func_0011A714(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A71C);

s32 func_0011A72C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A734);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront", func_0011A804);
