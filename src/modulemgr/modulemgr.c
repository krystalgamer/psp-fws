/* cflags: -O2 -frename-registers */
#include "common.h"
#include "modulemgr_decls.h"

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000_v271);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000_v201);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00000194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00000174);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/modulemgr", func_000000A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_000000B8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000004B0(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
        M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    } else {
        M2C_FIELD(arg0, u8 *, 3) = 1U;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    func_00004BA4((s32) arg0);
}
#endif

#if FW_VERSION == 201
void func_000004B0(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
        M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    } else {
        M2C_FIELD(arg0, u8 *, 3) = 1U;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_00004BA4((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000004B0(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
        M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    } else {
        M2C_FIELD(arg0, u8 *, 3) = 1U;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_00003210((s32) arg0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6DE9FF11);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A1A78C58);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_896C15B6);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_92EDEBD0);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6723BBFF);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_49C5B9E1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ECC2EAA9);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001540);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_3E4FEDDC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_AB77DC5A);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5C88479B);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004D48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_000000D4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000194);
#endif

#if FW_VERSION == 282
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1) {
    if (arg1 != NULL) {
        arg0->unk14 = (s32) arg1->unk4;
        arg0->unk18 = (s32) arg1->unk8;
        arg0->unk2 = (u8) arg1->unk10;
        arg0->unk3 = (u8) arg1->unk11;
    } else {
        arg0->unk3 = 1U;
        arg0->unk14 = 0;
        arg0->unk18 = 0;
        arg0->unk2 = 0U;
    }
    arg0->unk4C = 0;
    arg0->unk50 = 0;
    arg0->unk60 = 0;
    arg0->unk3C = 0;
    func_0000552C((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6DE9FF11);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A1A78C58);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_896C15B6);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_92EDEBD0);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6723BBFF);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_49C5B9E1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ECC2EAA9);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F07E1A2F);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_0CE03872);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", func_0000206C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00001924);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_3E4FEDDC);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_AB77DC5A);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5C88479B);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdList);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleId);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleGPByAddress);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5F0CC575);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A6E8C1F5);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B49FFB9E);

s32 syslib_ADF12745(void) {
    return 0;
}

void module_reboot_before(void) {
    sceKernelSuspendThread(D_00007160);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", syslib_D3744BE0);
#endif

#if FW_VERSION == 100
s32 func_00000108(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = sceKernelCpuSuspendIntr();
    temp_s1 = LoadCoreForKernel_CD0F3BAC();
    sceKernelCpuResumeIntr(temp_s0);
    return temp_s1;
}

s32 func_00000148(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_44B292AB(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000190(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_AE7C6E76(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000001D8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_74CF001A(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000220(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_6B2371C2(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000268(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_BD61D4D5(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000002B0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_F32A2940(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000002F8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_CCE4A157(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

void func_00000340(void) {
    LoadCoreForKernel_7BE1421C();
}

void func_0000035C(void) {
    LoadCoreForKernel_BF983EF2();
}

void func_00000378(void) {
    LoadCoreForKernel_7068E6BA();
}

void func_00000394(void) {
    LoadCoreForKernel_99A695F0();
}

void func_000003B0(void) {
    LoadCoreForKernel_5873A31F();
}

void func_000003CC(void) {
    LoadCoreForKernel_0E760DBA();
}

void func_000003E8(void) {
    LoadCoreForKernel_0DE1F600();
}

void func_00000404(void) {
    LoadCoreForKernel_DA1B09AA();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_9F3AD1E9);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_CE70664B);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B5DDABD3);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_667C1174);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003888);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_BA889C07);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5799EE32);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_53CA70EE);

s32 ModuleMgrForKernel_25E1F458(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_EF7A7F02);

s32 ModuleMgrForKernel_74690AEB(void) {
    return 0x80020149;
}

s32 ModuleMgrForKernel_F80F3C96(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_2BE4807D);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_04B7BD22);

s32 ModuleMgrForKernel_54D9E02E(void) {
    s32 var_v0;
    struct Unk_ModuleMgrForKernel_54D9E02E_temp_v0 *temp_v0;

    temp_v0 = LoadCoreForKernel_FB8AE27D();
    var_v0 = 0x8002012E;
    if (temp_v0 != NULL) {
        var_v0 = temp_v0->unk2C;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 310
void func_00004750(void) {
    sceKernelLockMutex(D_00008174, 1, NULL);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00004750(void) {
    sceKernelWaitSema(D_00008184, 1, NULL);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);
#endif

#if FW_VERSION >= 282
s32 ModuleMgrForKernel_61EC6AB0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", func_00004780);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00003FE0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D34);
#endif

#if FW_VERSION < 152 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D64);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/modulemgr", D_000078BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ABE84F8A);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_437214AE);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000420);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000474);

INCLUDE_ASM("nonmatchings/modulemgr", func_000004C8);

void func_00000594(void *arg0) {
    sceKernelFreePartitionMemory(M2C_FIELD(arg0, s32 *, 0x34));
    func_00000268((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/modulemgr", func_00004998);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DF4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/modulemgr", func_000051E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000005C4);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 310)
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E28);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004C90);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000066C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000718);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 310)
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E3C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007994);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004E70);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00004EA4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000984);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000C4C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00004FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000E7C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005018);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000504C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000505C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005070);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_23425E93);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdList);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_000050D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleId);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleGPByAddress);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5F0CC575);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005108);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005124);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000515C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A6E8C1F5);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B49FFB9E);

s32 syslib_ADF12745(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", module_reboot_before);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void module_reboot_before(void) {
    sceKernelSuspendThread(D_00005AF0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", syslib_D3744BE0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_9F3AD1E9);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_CE70664B);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B5DDABD3);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_667C1174);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00003340);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00002C74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001108);

INCLUDE_ASM("nonmatchings/modulemgr", func_000011E8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001244);

INCLUDE_ASM("nonmatchings/modulemgr", func_000012E4);

INCLUDE_ASM("nonmatchings/modulemgr", func_000013F4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001994);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001BD8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001D78);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002090);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002140);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000253C);

INCLUDE_ASM("nonmatchings/modulemgr", func_000026F8);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ABE84F8A);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_BA889C07);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5799EE32);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_53CA70EE);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 ModuleMgrForKernel_25E1F458(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_EF7A7F02);

s32 ModuleMgrForKernel_74690AEB(void) {
    return 0x80020149;
}

s32 ModuleMgrForKernel_F80F3C96(void) {
    return 0x80020149;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000028EC);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_437214AE);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_710F61B5);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005B90);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005BBC);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C14);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C3C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C64);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005CB0);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_23425E93);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005DE0);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003870);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_2BE4807D);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00003BFC);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);
#endif

#if FW_VERSION == 100 || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_04B7BD22);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_54D9E02E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 ModuleMgrForKernel_54D9E02E(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = LoadCoreForKernel_FB8AE27D();
    var_v0 = 0x8002012E;
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, s32 *, 0x2C);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 ModuleMgrForKernel_61EC6AB0(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00003A20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_000036B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006254);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006284);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006500);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000643C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00004114);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_000062C0);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004064);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_000062E8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000631C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000632C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/modulemgr", func_000031D8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003774);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_000021F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000602C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_000065D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5F0CC575);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006060);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_000063AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00004644);

INCLUDE_ASM("nonmatchings/modulemgr", func_000046F4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004868);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004BA4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00005384);

INCLUDE_ASM("nonmatchings/modulemgr", func_000053DC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_000060A8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/modulemgr", func_00003A9C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003C18);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003210);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00004020);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004074);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00004D7C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00005558);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/modulemgr", func_000040C0);

INCLUDE_ASM("nonmatchings/modulemgr", func_000041C0);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000443C);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_000060C8);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005770);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000057A0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000057D0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000057F4);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/modulemgr", D_000057E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005824);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000583C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005880);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000058A4);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000058C4);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000058E8);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005910);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000593C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000594C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000598C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000598C_v151);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/modulemgr", D_000059CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_0000296C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002D4C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002EFC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C3C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C70);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005CA0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C90);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005CD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_00003210);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000340C);

INCLUDE_ASM("nonmatchings/modulemgr", func_000036B0);

INCLUDE_ASM("nonmatchings/modulemgr", func_000037C8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/modulemgr", func_00003DBC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/modulemgr", func_00004708);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_00003E9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/modulemgr", func_00004058);

INCLUDE_ASM("nonmatchings/modulemgr", func_000041DC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00004A7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_0000512C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00005BA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_0000539C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005480);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_000055D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", func_0000556C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005834);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", func_0000428C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B49FFB9E);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00005078);

INCLUDE_ASM("nonmatchings/modulemgr", func_000051F0);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000552C);
#endif

#if FW_VERSION >= 300
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1) {
    if (arg1 != NULL) {
        arg0->unk14 = arg1->unk4;
        arg0->unk18 = arg1->unk8;
        arg0->unk2 = arg1->unk10;
        arg0->unk3 = arg1->unk11;
    } else {
        arg0->unk3 = 1;
        arg0->unk14 = 0;
        arg0->unk18 = 0;
        arg0->unk2 = 0;
    }
    arg0->unk4C = 0;
    arg0->unk50 = 0;
    arg0->unk60 = 0;
    arg0->unk3C = 0;
    func_0000552C((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00005664);

INCLUDE_ASM("nonmatchings/modulemgr", func_000056E0);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000580C);

INCLUDE_ASM("nonmatchings/modulemgr", func_000058E4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/modulemgr", func_000064E8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/modulemgr", func_00005B68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00005DD8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005EC0);

INCLUDE_ASM("nonmatchings/modulemgr", func_00006038);

INCLUDE_ASM("nonmatchings/modulemgr", func_00006304);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", func_00006DA8);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C70);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007CD0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007D20);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007D50);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007D80);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007DF0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007E20);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007E90);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007E78);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007EC0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007EF0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007F50);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007FB0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007FD0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007FEC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00008008);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00008020);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000803C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00008060);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000807C);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000805C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/modulemgr", D_00008094);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000080AC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000080C4);

INCLUDE_RODATA("nonmatchings/modulemgr", D_000080E4);
#endif
