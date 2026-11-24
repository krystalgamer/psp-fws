/* cflags: -O2 -frename-registers */
#include "common.h"
#include "modulemgr_decls.h"

INCLUDE_ASM("nonmatchings/modulemgr", func_00000000);

INCLUDE_ASM("nonmatchings/modulemgr", func_000000D4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00000194);

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

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6DE9FF11);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A1A78C58);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_896C15B6);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_92EDEBD0);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_6723BBFF);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_49C5B9E1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_ECC2EAA9);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_A4370E7C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001924);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_3E4FEDDC);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_AB77DC5A);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_5C88479B);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStartModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSelfStopUnloadModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdList);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelQueryModuleInfo);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleId);

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

INCLUDE_ASM("nonmatchings/modulemgr", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_9F3AD1E9);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

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

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);

s32 ModuleMgrForKernel_61EC6AB0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/modulemgr", func_00003FE0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D34);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D64);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DA0);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004998);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DF4);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E28);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E3C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00006E78);

INCLUDE_ASM("nonmatchings/modulemgr", func_00004FCC);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005078);

INCLUDE_ASM("nonmatchings/modulemgr", func_000051F0);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000552C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005664);

INCLUDE_ASM("nonmatchings/modulemgr", func_000056E0);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000580C);

INCLUDE_ASM("nonmatchings/modulemgr", func_000058E4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005B68);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005DD8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00005EC0);

INCLUDE_ASM("nonmatchings/modulemgr", func_00006038);

INCLUDE_ASM("nonmatchings/modulemgr", func_00006304);
