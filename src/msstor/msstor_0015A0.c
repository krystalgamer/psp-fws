/* cflags[100]: -Os */
#include "common.h"
#include "msstor_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000015A0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001660);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000016E4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000172C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001794);

#if FW_VERSION < 201
void func_000013E0(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg1, 8, -1));
}

void func_0000140C(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg2, arg1, -1));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000181C);
#endif

#if FW_VERSION == 100
void func_0000181C(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmReadMSRegHelper(*arg0, arg2, arg1, -1));
}
#endif

#if FW_VERSION < 201
void func_00001534(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmTPCReadShortData(*arg0, arg2, arg1, -1));
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001568);

void func_00001590(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmTPCSetCmdHelper(*arg0, arg1 & 0xFF, -1));
}
#else
void func_000017BC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg1, 8, -1));
}

void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg2, arg1, -1));
}

void func_0000181C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmReadMSRegHelper(*arg0, arg2, arg1, -1));
}

void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmTPCReadShortData(*arg0, arg2, arg1, -1));
}

void func_00001884(s32 *arg0) {
    func_000077C4(sceMScmResetHC(*arg0, 2));
}

void func_000018AC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmTPCSetCmdHelper(*arg0, arg1 & 0xFF, -1));
}
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000018D8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001550);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001610);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000192C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000019C8);

#if FW_VERSION < 201
void func_00001808(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg1, 8, -1));
}

void func_00001834(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg2, arg1, -1));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001B88);
#endif

#if FW_VERSION == 100
void func_00001B88(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmWriteMSRegHelper(*arg0, arg2, arg1, -1));
}
#endif

#if FW_VERSION < 201
void func_00001958(s32 *arg0, s32 arg1, s32 arg2) {
    func_000077C4(sceMScmTPCWriteShortData(*arg0, arg2, arg1, -1));
}
#else
void func_00001B28(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg1, 8, -1));
}

void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg2, arg1, -1));
}

void func_00001B88(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmWriteMSRegHelper(*arg0, arg2, arg1, -1));
}

void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmTPCWriteShortData(*arg0, arg2, arg1, -1));
}
#endif

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

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000842C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008434);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008170);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008178);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000920C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009214);
#endif

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

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003130);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003298);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000351C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003588);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000366C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000036F8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003A60);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003BD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003CA4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003E20);

#if FW_VERSION < 201
void func_00003C2C(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

void func_00003C4C(s32 arg0) {
    func_000008B8(arg0, 0xCC, 5);
}
#else
void func_00003E88(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

void func_00003EA8(s32 arg0) {
    func_000008B8(arg0, 0xCC, 5);
}
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003EC8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000413C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004204);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004300);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000432C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004360);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004664);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000046FC);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);
#endif

#if FW_VERSION < 201
void sceMSstorEntry(void) {
    sceMSstorRegisterCLDMSelf(0);
}

s32 func_00004514(void) {
    s32 temp_s0;

    temp_s0 = sceMScmRegisterCLD(0, &D_0000883C);
    bzero(&D_00008AA4, 0x4E84);
    return temp_s0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004558);
#endif

#if FW_VERSION == 100
s32 func_00004558(void) {
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    return 0;
}
#endif

#if FW_VERSION == 201
void func_00004750(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004770);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);

void sceMSstorEntry(void) {
    sceMSstorRegisterCLDMSelf(0);
}

s32 func_000049E4(void) {
    s32 temp_s1;

    temp_s1 = sceMScmRegisterCLD(0, &D_000098DC);
    bzero(&D_00009B54, 0x4E94);
    D_00009B54.unk4E88 = 0x1F4;
    func_000077A0(&D_00009B54, 1);
    return temp_s1;
}

s32 func_00004A48(void) {
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009248);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009250);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009264);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009270);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004588);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", module_reboot_before);
#endif

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    sceKernelWaitSema(D_00008934, 1, NULL);
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    sceKernelSignalSema(D_00008934, 1);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009284);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_000084F8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008508);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000823C);
#endif

#if FW_VERSION < 201
s32 func_000048A8(void *arg0) {
    s32 temp_v0;

    M2C_VFIELD(&D_00008934, s32, 4) = (s32) D_00008AA4;
    M2C_FIELD(&D_00008934, s32 **, 8) = &D_00008AA4;
    M2C_VFIELD(&D_00008934, s32, 0) = sceKernelCreateSema(&D_00009284, 1U, 1, 1, NULL);
    M2C_VFIELD(&D_00008934, s32, 0x14) = 0;
    M2C_VFIELD(&D_00008934, s32, 0xC) = 0;
    M2C_VFIELD(&D_00008934, s32, 0x10) = 0;
    M2C_VFIELD(&D_00008934, s32, 0x1C) = sceKernelCreateEventFlag("SceMSstorSleeper", 0x201U, 0U, NULL);
    temp_v0 = sceKernelCreateThread("SceMSstorSleep", (s32) &func_00006858, 0x6F, 0x800U, 0U, NULL);
    M2C_VFIELD(&D_00008934, s32, 0x18) = temp_v0;
    sceKernelStartThread(temp_v0, 0x20U, &D_00008934);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00008934;
    return 0;
}

s32 func_0000497C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00008934;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004990(void) {
    if (M2C_FIELD(&D_00008934, s32 *, 0) > 0) {
        sceKernelDeleteSema(M2C_FIELD(&D_00008934, s32 *, 0));
    }
    if (M2C_FIELD(&D_00008934, s32 *, 0x18) > 0) {
        sceKernelTerminateDeleteThread(M2C_FIELD(&D_00008934, s32 *, 0x18));
    }
    if (M2C_FIELD(&D_00008934, s32 *, 0x1C) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(&D_00008934, s32 *, 0x1C));
    }
    M2C_FIELD(&D_00008934, s32 *, 0) = -1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00004990(void) {
    if (M2C_FIELD(&D_00008934, s32 *, 0) > 0) {
        sceKernelDeleteSema(M2C_FIELD(&D_00008934, s32 *, 0));
    }
    if (M2C_FIELD(&D_00008934, s32 *, 0x18) > 0) {
        sceKernelTerminateDeleteThread(M2C_FIELD(&D_00008934, s32 *, 0x18));
    }
    if (M2C_FIELD(&D_00008934, s32 *, 0x1C) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(&D_00008934, s32 *, 0));
    }
    M2C_FIELD(&D_00008934, s32 *, 0) = -1;
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_00004A04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A90);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004B30);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004C00);

s32 func_00004C88(void *arg0) {
    s32 var_a1;
    void *temp_v1;

    var_a1 = 0x80020328;
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x10);
        var_a1 = 0;
        M2C_FIELD(temp_v1, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x10) - 1);
    }
    return var_a1;
}
#endif

#if FW_VERSION == 100
s32 func_00004A0C(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80220183;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        var_v1 = func_00004A98((s32) arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A40);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A98);

s32 func_00004B14(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_a0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x10) - 1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004B2C);
#else
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
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000053B4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000544C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004E70);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004F04);
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000054E4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000055B4);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005684);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005708);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000057A4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005938);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005AD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D18);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005738);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D0C);
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006758);
#endif

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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006858);
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007318);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000073D8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007498);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000074E8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007550);
#endif
