#include "common.h"
#include "msstor_decls.h"

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000015A0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001660);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000016E4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000172C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001794);

void func_000017BC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScm_driver_BE455B5D(*arg0, arg1, 8, -1));
}

void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_BE455B5D(*arg0, arg2, arg1, -1));
}

void func_0000181C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_CBB2BF6F(*arg0, arg2, arg1, -1));
}

void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_36921225(*arg0, arg2, arg1, -1));
}

void func_00001884(s32 *arg0) {
    func_000077C4(sceMScm_driver_AA67D87A(*arg0, 2));
}

void func_000018AC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScm_driver_3FFE76E5(*arg0, arg1 & 0xFF, -1));
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000018D8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000192C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000019C8);

void func_00001B28(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScm_driver_21183216(*arg0, arg1, 8, -1));
}

void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_21183216(*arg0, arg2, arg1, -1));
}

void func_00001B88(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_6C8AEF0B(*arg0, arg2, arg1, -1));
}

void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScm_driver_EF42A4A3(*arg0, arg2, arg1, -1));
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001BF0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001F78);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000263C);

void func_000026A8(s32 arg0) {
    func_000008B8(arg0, 0xC3, 1);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000026C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000299C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009194);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_000091AC);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000920C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009214);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00002A54);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000031EC);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000032A4);

s32 func_000034CC(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a1;
    s32 var_a0;

    temp_a1 = arg1 & 0xFFFF;
    var_a0 = -1;
    if (((((s32) ((M2C_FIELD(arg0, u8 *, 0x4404) << 8) | M2C_FIELD(arg0, u8 *, 0x4405)) >> 9) * 0x1F0) - 3) >= temp_a1) {
        var_a0 = 0;
        *arg2 = (s32) M2C_FIELD(((temp_a1 * 2) + arg0), u16 *, 0x260);
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000351C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003588);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000366C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000036F8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003A60);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003BD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003CA4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003E20);

void func_00003E88(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

void func_00003EA8(s32 arg0) {
    func_000008B8(arg0, 0xCC, 5);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003EC8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000413C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004204);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004300);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000432C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004360);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004664);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000046FC);

void func_00004750(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004770);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);

void sceMSstor_driver_6FC1E8AE(void) {
    sceMSstor_driver_714782D6(0);
}

s32 func_000049E4(void) {
    s32 temp_s1;

    temp_s1 = sceMScm_driver_12BD8FEC(0, &D_000098DC);
    bzero(&D_00009B54, 0x4E94);
    D_00009B54.unk4E88 = 0x1F4;
    func_000077A0(&D_00009B54, 1);
    return temp_s1;
}

s32 func_00004A48(void) {
    IoFileMgrForKernel_C7F35804(&D_00009264);
    IoFileMgrForKernel_C7F35804(&D_00009248);
    return 0;
}

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009248);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009250);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009264);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009270);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009284);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A78);

INCLUDE_ASM("nonmatchings/msstor_0015A0", module_reboot_before);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004D14);

s32 func_00004E2C(struct Unk_func_00004E2C_0 *arg0) {
    arg0->unk4 = &D_000099D4;
    return 0;
}

s32 func_00004E40(void) {
    if (D_000099D4.unk0 > 0) {
        sceKernelDeleteSema(D_000099D4.unk0);
    }
    if (D_000099D4.unk18 > 0) {
        sceKernelTerminateDeleteThread(D_000099D4.unk18);
    }
    if (D_000099D4.unk28 > 0) {
        sceKernelTerminateDeleteThread(D_000099D4.unk28);
    }
    if (D_000099D4.unk24 > 0) {
        sceKernelDeleteEventFlag(D_000099D4.unk24);
    }
    D_000099D4.unk0 = -1;
    return 0;
}

s32 func_00004EC8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004F70);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005040);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000050C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000513C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000053B4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000544C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000054E4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000055B4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005684);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005708);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000057A4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005938);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005AD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D18);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006758);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006A68);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006AC8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006BE8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006C70);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006CD8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006DFC);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006E60);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006EBC);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006F10);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000700C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007108);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007234);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000072A4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007318);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000073D8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007498);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000074E8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007550);

