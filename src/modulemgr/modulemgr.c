/* cflags: -O2 -frename-registers */
#include "common.h"
#include "modulemgr_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000000D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000194);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6DE9FF11);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A1A78C58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_896C15B6);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_92EDEBD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6723BBFF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_49C5B9E1);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ECC2EAA9);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001924);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_3E4FEDDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_AB77DC5A);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5C88479B);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdList);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleId);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleGPByAddress);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5F0CC575);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A6E8C1F5);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B49FFB9E);
#endif

#if FW_VERSION != 100
s32 syslib_ADF12745(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
void module_reboot_before(void) {
    sceKernelSuspendThread(D_00007160);
}
#endif

INCLUDE_ASM("nonmatchings/modulemgr", syslib_D3744BE0);

#if FW_VERSION == 100
s32 func_00000108(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = sceKernelCpuSuspendIntr();
    temp_s1 = LoadCoreForKernel_CD0F3BAC();
    sceKernelCpuResumeIntr(temp_s0);
    return temp_s1;
}
#endif

#if FW_VERSION == 100
s32 func_00000148(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_44B292AB(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_00000190(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_AE7C6E76(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_000001D8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_74CF001A(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_00000220(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_6B2371C2(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_00000268(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_BD61D4D5(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_000002B0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_F32A2940(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_000002F8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = LoadCoreForKernel_CCE4A157(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
void func_00000340(void) {
    LoadCoreForKernel_7BE1421C();
}
#endif

#if FW_VERSION == 100
void func_0000035C(void) {
    LoadCoreForKernel_BF983EF2();
}
#endif

#if FW_VERSION == 100
void func_00000378(void) {
    LoadCoreForKernel_7068E6BA();
}
#endif

#if FW_VERSION == 100
void func_00000394(void) {
    LoadCoreForKernel_99A695F0();
}
#endif

#if FW_VERSION == 100
void func_000003B0(void) {
    LoadCoreForKernel_5873A31F();
}
#endif

#if FW_VERSION == 100
void func_000003CC(void) {
    LoadCoreForKernel_0E760DBA();
}
#endif

#if FW_VERSION == 100
void func_000003E8(void) {
    LoadCoreForKernel_0DE1F600();
}
#endif

#if FW_VERSION == 100
void func_00000404(void) {
    LoadCoreForKernel_DA1B09AA();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_9F3AD1E9);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_CE70664B);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B5DDABD3);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_667C1174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00003888);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_BA889C07);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5799EE32);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_53CA70EE);
#endif

#if FW_VERSION != 100
s32 ModuleMgrForKernel_25E1F458(void) {
    return 0x80020149;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_EF7A7F02);
#endif

#if FW_VERSION != 100
s32 ModuleMgrForKernel_74690AEB(void) {
    return 0x80020149;
}
#endif

#if FW_VERSION != 100
s32 ModuleMgrForKernel_F80F3C96(void) {
    return 0x80020149;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_2BE4807D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_04B7BD22);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);
#endif

#if FW_VERSION != 100
s32 ModuleMgrForKernel_61EC6AB0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00003FE0);
#endif

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D34);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D64);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DA0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000420);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000474);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000004C8);
#endif

#if FW_VERSION == 100
void func_00000594(void *arg0) {
    sceKernelFreePartitionMemory(M2C_FIELD(arg0, s32 *, 0x34));
    func_00000268((s32) arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00004998);
#endif

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DF4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000005C4);
#endif

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E28);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004C90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_0000066C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000718);
#endif

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E3C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E78);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004E70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000C4C);
#endif

INCLUDE_ASM("nonmatchings/modulemgr", func_00004FCC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00000E7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005018);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000504C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000505C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005070);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005088);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_000050D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005108);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005124);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000515C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001108);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000011E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001244);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000012E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000013F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001994);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001BD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001D78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00002090);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00002140);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_0000253C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000026F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ABE84F8A);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_BA889C07);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000028EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_437214AE);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_710F61B5);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005B90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005BBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_91B87FAE);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_23425E93);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_F0CAC59E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00003870);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00003BFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_04B7BD22);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_54D9E02E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000602C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5F0CC575);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006060);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_000060A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_000060C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_B49FFB9E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00005078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000051F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_0000552C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00005664);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000056E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_0000580C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000058E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00005B68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00005DD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00005EC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00006038);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00006304);
#endif
