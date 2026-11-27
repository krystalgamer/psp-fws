/* cflags[100]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "modulemgr_decls.h"
#include "k1.h"

static inline void *getRa(void) {
    void *ra;

    __asm__("move %0, $31" : "=r"(ra));
    return ra;
}

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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecForUser);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDisc);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDiscUpdater);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDiscDebug);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs1);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs2);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs3);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSH);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001540);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleToBlock);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBootInitConfig);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleDeci);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/modulemgr", D_00004D48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_000000D4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C20);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C24);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C38);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C4C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C64);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C84);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C9C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007CB4);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007CCC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007CDC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007D04);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007D18);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007DD8);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007DEC);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007F74);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007F7C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007F90);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00007FA0);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00008004);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000803C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000803C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000803C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/modulemgr", D_00008050);

INCLUDE_RODATA("nonmatchings/modulemgr", D_0000808C);
#endif

#if FW_VERSION >= 282
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecForUser);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModule);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_E4C4211C);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FBE27467);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_FEF27DC1);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_710F61B5);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDisc);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDiscUpdater);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHDiscDebug);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_1B91F6EC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs1);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs2);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs3);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs4);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleForLoadExecVSHMs5);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSH);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/modulemgr", func_0000206C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00001924);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleToBlock);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBootInitConfig);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleDeci);

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

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForUser);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootPhaseForKernel);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForKernel);

s32 module_reboot_phase(void) {
    return 0;
}

void module_reboot_before(void) {
    sceKernelSuspendThread(D_00007160);
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007AB8);
#endif

#if FW_VERSION == 100
s32 module_bootstart(SceSize argSize, void *argp) {
    SceModuleLink *list;
    SceUID evid;

    D_00006160.threadId = sceKernelCreateThread("SceKernelModmgrWorker", func_00002140, 0x20, 0x4000, 0, NULL);
    D_00006160.semaId = sceKernelCreateSema("SceKernelModmgr", 0, 1, 1, NULL);
    if (D_00006160.semaId < 0) {
        Kprintf("modulemgr.c:%s:modMgrCB.semid 0x%x\n", "ModuleMgrInit", D_00006160.semaId);
        Kprintf(D_00006D34, D_00006D64, "ModuleMgrInit", 0xAE);
        sceKernelAssert(0, 0);
    }
    evid = sceKernelCreateEventFlag("SceKernelModmgr", 0, 0, NULL);
    D_00006160.userThreadId = -1;
    D_00006160.eventId = evid;
    list = &D_00006160.list;
    list->next = list;
    list->prev = list;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", module_bootstart);
#endif

#if FW_VERSION == 100
s32 func_00000108(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = sceKernelCpuSuspendIntr();
    temp_s1 = sceKernelCreateModule();
    sceKernelCpuResumeIntr(temp_s0);
    return temp_s1;
}

s32 func_00000148(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelAllocModule(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000190(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelRegisterModule(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000001D8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelReleaseModule(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000220(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelDeleteModule(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_00000268(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelFreeModule(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000002B0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelModuleFromUID(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_000002F8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelFindModuleByUID(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

void func_00000340(void) {
    sceKernelCheckExecFile();
}

void func_0000035C(void) {
    sceKernelProbeExecutableObject();
}

void func_00000378(void) {
    sceKernelLoadExecutableObject();
}

void func_00000394(void) {
    sceKernelRegisterLibrary();
}

void func_000003B0(void) {
    sceKernelRegisterLibraryForUser();
}

void func_000003CC(void) {
    sceKernelLinkLibraryEntries();
}

void func_000003E8(void) {
    sceKernelLinkLibraryEntriesForUser();
}

void func_00000404(void) {
    sceKernelUnLinkLibraryEntries();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitGame);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_24EC0641);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForLoadExecBufferVSHUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForLoadExecBufferVSHUsbWlanDebug);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSHByID);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferVSH);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitVSHVSH);

INCLUDE_ASM("nonmatchings/modulemgr", func_00003888);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBuffer);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitVSHKernel);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForRebootKernel);

s32 sceKernelLoadModuleBootInitBtcnf(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferBootInitBtcnf);

s32 sceKernelLoadModuleByIDBootInitConfig(void) {
    return 0x80020149;
}

s32 sceKernelLoadModuleBufferBootInitConfig(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);

INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_2BE4807D);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSearchModuleByName);

SceUID sceKernelSearchModuleByAddress(u32 addr) {
    SceUID ret;
    SceModule *mod;

    mod = sceKernelFindModuleByAddress(addr);
    ret = 0x8002012E;
    if (mod != NULL) {
        ret = mod->modId;
    }
    return ret;
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
s32 sceKernelModuleMgrMode(void) {
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00005030);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00004780);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00003FE0);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D34);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006D64);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/modulemgr", D_00007C24);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/modulemgr", D_000078BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferWithApitype);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleByID);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleWithApitype);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DA0);
#endif

#if FW_VERSION == 100
s32 func_00000420(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCanReleaseLibrary();
    if (temp_v0 >= 0) {

    } else {
        Kprintf(&D_00006DA0, "CanReleaseLibrary", temp_v0);
    }
    return temp_v0;
}

s32 func_00000474(void) {
    s32 temp_v0;

    temp_v0 = sceKernelReleaseLibrary();
    if (temp_v0 >= 0) {

    } else {
        Kprintf(&D_00006DA0, "ReleaseLibrary", temp_v0);
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/modulemgr", func_000004C8);

void func_00000594(void *arg0) {
    sceKernelFreePartitionMemory(M2C_FIELD(arg0, s32 *, 0x34));
    func_00000268((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/modulemgr", func_00004998);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_RODATA("nonmatchings/modulemgr", D_00006DF4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/modulemgr", func_000051E4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", func_0000631C);

INCLUDE_ASM("nonmatchings/modulemgr", func_00006390);
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

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSHByID);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_0000505C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSH);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005070);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSHPlain);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferVSH);
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForUser);
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootPhaseForKernel);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForKernel);

s32 module_reboot_phase(void) {
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
INCLUDE_ASM("nonmatchings/modulemgr", module_bootstart);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitGame);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForUser_1196472E);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForLoadExecBufferVSHUsbWlan);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForLoadExecBufferVSHUsbWlanDebug);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSHByID);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferVSH);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitVSHVSH);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00003340);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/modulemgr", func_00002C74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_00001108);

s32 func_000011E8(SceUID fd) {
    s32 size;

    size = sceIoLseek(fd, 0, 2);
    sceIoLseek(fd, 0, 0);
    return size;
}

INCLUDE_ASM("nonmatchings/modulemgr", func_00001244);

INCLUDE_ASM("nonmatchings/modulemgr", func_000012E4);

INCLUDE_ASM("nonmatchings/modulemgr", func_000013F4);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001994);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001BD8);

INCLUDE_ASM("nonmatchings/modulemgr", func_00001D78);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002090);

INCLUDE_ASM("nonmatchings/modulemgr", func_00002140);

INCLUDE_ASM("nonmatchings/modulemgr", func_0000253C);

s32 func_000026F8(SceModuleMgrParam *modParams, SceKernelLMOption *option) {
    if (option != NULL) {
        modParams->mpIdText = option->mpIdText;
        modParams->mpIdData = option->mpIdData;
        modParams->position = option->position;
        modParams->access = option->access;
    } else {
        modParams->access = 1;
        modParams->mpIdText = 0;
        modParams->mpIdData = 0;
        modParams->position = 0;
    }
    modParams->unk44 = 0;
    modParams->unk48 = 0;
    modParams->unk58 = 0;
    modParams->pExecInfo = NULL;
    return func_0000253C(modParams);
}

s32 func_00002764(SceUID fd, s32 flags, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;

    memset(&modParams, 0, sizeof(modParams));
    modParams.modeStart = CMD_LOAD_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fd = fd;
    modParams.fileBase = NULL;
    return func_000026F8(&modParams, option);
}

SceUID sceKernelLoadModuleBufferWithApitype(void *buf, s32 flags, s32 apiType, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (k1IsUserMode()) {
        Kprintf("modulemgr.c:%s:SCE_KERNEL_ERROR_ILLEGAL_PERM_CALL\n", "sceKernelLoadModuleBufferWithApitype");
        setK1(oldK1);
        return 0x80020149;
    }
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    memset(&modParams, 0, sizeof(modParams));
    modParams.modeStart = CMD_RELOCATE_MODULE;
    modParams.apiType = apiType;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fileBase = buf;
    modParams.fd = (SceUID)buf;
    ret = func_000026F8(&modParams, option);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 152
SceUID sceKernelLoadModuleBuffer(void *buf, s32 flags, SceKernelLMOption *option) {
    return sceKernelLoadModuleBufferWithApitype(buf, flags, 0, option);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBuffer);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForExitVSHKernel);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferForRebootKernel);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceKernelLoadModuleBootInitBtcnf(void) {
    return 0x80020149;
}

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleBufferBootInitBtcnf);

s32 sceKernelLoadModuleByIDBootInitConfig(void) {
    return 0x80020149;
}

s32 sceKernelLoadModuleBufferBootInitConfig(void) {
    return 0x80020149;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/modulemgr", func_000028EC);

SceUID sceKernelLoadModuleByID(SceUID fd, s32 flags, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    memset(&modParams, 0, sizeof(modParams));
    if (k1IsUserMode()) {
        modParams.apiType = 0x10;
    } else {
        modParams.apiType = 0;
    }
    if (k1IsUserMode()) {
        ret = sceIoIoctl(fd, 0x8001, NULL, 0, NULL, 0);
        if (ret < 0) {
            Kprintf("modulemgr.c:%s:SCE_IOCTL_PERMIT_LOADMODULE - 0x%08x\n", "sceKernelLoadModuleByID", ret);
            setK1(oldK1);
            return 0x80020146;
        }
    }
    modParams.modeStart = CMD_LOAD_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fd = fd;
    modParams.fileBase = NULL;
    ret = func_000026F8(&modParams, option);
    setK1(oldK1);
    return ret;
}

SceUID sceKernelLoadModuleWithApitype(const char *path, s32 flags, s32 apiType, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    SceUID fd;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (path == NULL || (k1IsUserMode() && (s32)path < 0)) {
        goto bad;
    }
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        goto bad;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    fd = sceIoOpen(path, 1, 0x1FF);
    if (fd < 0) {
        Kprintf("modulemgr.c:%s:open failed [%s] apitype 0x%08x\n", "sceKernelLoadModuleWithApitype", path, apiType);
        return fd;
    }
    modParams.apiType = apiType;
    if (apiType == 0x10 || apiType == 0) {
        if (k1IsUserMode()) {
            modParams.apiType = 0x10;
        } else {
            modParams.apiType = 0;
        }
    }
    ret = func_000028EC(fd, modParams.apiType);
    if (ret < 0) {
        sceIoClose(fd);
        setK1(oldK1);
        return ret;
    }
    modParams.modeStart = CMD_LOAD_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fileBase = NULL;
    modParams.fd = fd;
    ret = func_000026F8(&modParams, option);
    sceIoClose(fd);
    if (ret < 0) {
        Kprintf("modulemgr.c:%s:sceKernelLoadModule failed 0x%08x\n", "sceKernelLoadModuleWithApitype", ret);
        return ret;
    }
    return ret;
bad:
    setK1(oldK1);
    return 0x800200D3;
}
#endif

#if FW_VERSION < 152
SceUID sceKernelLoadModule(const char *path, s32 flags, SceKernelLMOption *option) {
    return sceKernelLoadModuleWithApitype(path, flags, 0x10, option);
}

SceUID ModuleMgrForKernel_710F61B5(const char *path, s32 flags, SceKernelLMOption *option) {
    return sceKernelLoadModuleWithApitype(path, flags, 0x11, option);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/modulemgr", D_00005B90);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005BBC);

SceUID sceKernelLoadModuleVSHByID(SceUID fd, s32 flags, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        Kprintf(D_00005B90, "sceKernelLoadModuleVSHByID");
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (k1IsUserMode() && sceKernelGetUserLevel() != 4) {
        Kprintf(D_00005C14, "sceKernelLoadModuleVSHByID");
        setK1(oldK1);
        return 0x80020149;
    }
    ret = sceIoIoctl(fd, 0x8003, NULL, 0, NULL, 0);
    if (ret < 0) {
        Kprintf(D_00005BBC, "sceKernelLoadModuleVSHByID", ret);
        setK1(oldK1);
        return 0x80020146;
    }
    memset(&modParams, 0, sizeof(modParams));
    modParams.apiType = 0x20;
    modParams.modeStart = CMD_LOAD_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fd = fd;
    modParams.fileBase = NULL;
    ret = func_000026F8(&modParams, option);
    setK1(oldK1);
    return ret;
}

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C14);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C3C);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005C64);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSH);

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005CB0);

INCLUDE_ASM("nonmatchings/modulemgr", sceKernelLoadModuleVSHPlain);

SceUID sceKernelLoadModuleBufferUsbWlan(SceSize bufSize, void *buf, s32 flags, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        goto bad;
    }
    if (k1IsUserMode() && (s32)((u32)buf | bufSize | ((u32)buf + bufSize)) < 0) {
        goto bad;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (k1IsUserMode() && sceKernelGetUserLevel() != 2) {
        Kprintf("modulemgr.c:%s:This API for USBWLAN only\n", "sceKernelLoadModuleBufferUsbWlan");
        setK1(oldK1);
        return 0x80020149;
    }
    modParams.apiType = 0x30;
    modParams.modeStart = CMD_RELOCATE_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fileBase = buf;
    modParams.fd = (SceUID)buf;
    ret = func_000026F8(&modParams, option);
    setK1(oldK1);
    return ret;
bad:
    Kprintf(D_00005B90, "sceKernelLoadModuleBufferUsbWlan");
    setK1(oldK1);
    return 0x800200D3;
}

SceUID sceKernelLoadModuleBufferVSH(SceSize bufSize, void *buf, s32 flags, SceKernelLMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        goto bad;
    }
    if (k1IsUserMode() && (s32)((u32)buf | bufSize | ((u32)buf + bufSize)) < 0) {
        goto bad;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (k1IsUserMode() && sceKernelGetUserLevel() != 4) {
        Kprintf(D_00005C3C, "sceKernelLoadModuleBufferVSH");
        setK1(oldK1);
        return 0x80020149;
    }
    modParams.apiType = 0x20;
    modParams.modeStart = CMD_RELOCATE_MODULE;
    modParams.modeFinish = CMD_RELOCATE_MODULE;
    modParams.fileBase = buf;
    modParams.fd = (SceUID)buf;
    ret = func_000026F8(&modParams, option);
    setK1(oldK1);
    return ret;
bad:
    Kprintf(D_00005B90, "sceKernelLoadModuleBufferVSH");
    setK1(oldK1);
    return 0x800200D3;
}

s32 sceKernelStartModule(SceUID modId, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (argp != NULL && k1IsUserMode() && (s32)((u32)argp | argSize | ((u32)argp + argSize)) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (pStatus != NULL && k1IsUserMode() && (s32)pStatus < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(*option))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    memset(&modParams, 0, sizeof(modParams));
    modParams.modeStart = CMD_START_MODULE;
    modParams.modeFinish = CMD_START_MODULE;
    modParams.modId = modId;
    modParams.argSize = argSize;
    modParams.argp = argp;
    modParams.pStatus = pStatus;
    if (option != NULL) {
        modParams.threadMpIdStack = option->mpIdStack;
        modParams.stackSize = option->stackSize;
        modParams.threadPriority = option->priority;
        modParams.threadAttr = option->attribute;
    } else {
        modParams.threadMpIdStack = 0;
        modParams.stackSize = 0;
        modParams.threadPriority = 0;
        modParams.threadAttr = 0;
    }
    ret = func_0000253C(&modParams);
    if (ret < 0) {
        Kprintf("modulemgr.c:%s:result = 0x%08x\n", "sceKernelStartModule", ret);
    }
    setK1(oldK1);
    return ret;
}

INCLUDE_RODATA("nonmatchings/modulemgr", D_00005DE0);

s32 func_00003870(SceUID modId, SceUID callerModId, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option) {
    SceModuleMgrParam modParams;
    s32 status;
    SceModule *mod;

    memset(&modParams, 0, sizeof(modParams));
    mod = sceKernelModuleFromUID(modId);
    modParams.pMod = mod;
    if (mod != NULL && (mod->attribute & 1)) {
        Kprintf(D_00005DE0, "StopModuleApiBody");
        return 0x80020136;
    }
    modParams.modeStart = CMD_STOP_MODULE;
    modParams.modeFinish = CMD_STOP_MODULE;
    modParams.modId = modId;
    modParams.callerModId = callerModId;
    modParams.argSize = argSize;
    modParams.argp = argp;
    if (pStatus != NULL) {
        modParams.pStatus = pStatus;
    } else {
        modParams.pStatus = &status;
    }
    if (option != NULL) {
        modParams.threadMpIdStack = option->mpIdStack;
        modParams.stackSize = option->stackSize;
        modParams.threadPriority = option->priority;
        modParams.threadAttr = option->attribute;
    } else {
        modParams.threadMpIdStack = 0;
        modParams.stackSize = 0;
        modParams.threadPriority = 0;
        modParams.threadAttr = 0;
    }
    return func_0000253C(&modParams);
}

s32 sceKernelStopModule(SceUID modId, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option) {
    SceModuleMgrParam modParams;
    u32 ra = (u32)getRa();
    s32 oldK1 = shiftK1Noreorder();
    SceModule *caller;
    SceModule *mod;
    s32 ret;

    if (argp != NULL && k1IsUserMode() && (s32)((u32)argp | argSize | ((u32)argp + argSize)) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (pStatus != NULL && k1IsUserMode() && (s32)((u32)pStatus | ((u32)pStatus + sizeof(*pStatus))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(option))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    caller = sceKernelFindModuleByAddress(ra);
    if (caller == NULL) {
        Kprintf("StopModule(): panic !!! call from unknown Module !!!\n");
        setK1(oldK1);
        return 0x80020136;
    }
    memset(&modParams, 0, sizeof(modParams));
    mod = sceKernelModuleFromUID(modId);
    modParams.pMod = mod;
    if (mod != NULL && (mod->attribute & 1)) {
        Kprintf(D_00005DE0, "sceKernelStopModule");
        setK1(oldK1);
        return 0x80020136;
    }
    modParams.modeStart = CMD_STOP_MODULE;
    modParams.modeFinish = CMD_STOP_MODULE;
    modParams.modId = modId;
    modParams.callerModId = caller->modId;
    modParams.argSize = argSize;
    modParams.argp = argp;
    modParams.pStatus = pStatus;
    if (option != NULL) {
        modParams.threadMpIdStack = option->mpIdStack;
        modParams.stackSize = option->stackSize;
        modParams.threadPriority = option->priority;
        modParams.threadAttr = option->attribute;
    } else {
        modParams.threadMpIdStack = 0;
        modParams.stackSize = 0;
        modParams.threadPriority = 0;
        modParams.threadAttr = 0;
    }
    ret = func_0000253C(&modParams);
    setK1(oldK1);
    return ret;
}

s32 sceKernelUnloadModule(SceUID modId) {
    SceModuleMgrParam modParams;
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    memset(&modParams, 0, sizeof(modParams));
    modParams.modeStart = CMD_UNLOAD_MODULE;
    modParams.modeFinish = CMD_UNLOAD_MODULE;
    modParams.modId = modId;
    modParams.argSize = 0;
    modParams.argp = NULL;
    modParams.pStatus = NULL;
    ret = func_0000253C(&modParams);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelUnloadModule);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", ModuleMgrForKernel_2BE4807D);
#endif

#if FW_VERSION == 100
s32 func_00003BFC(u32 ra, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option) {
    SceModuleMgrParam modParams;
    s32 status;
    SceModule *mod;
    s32 ret;

    mod = sceKernelFindModuleByAddress(ra);
    if (mod == NULL) {
        Kprintf("modulemgr.c:%s:call from unknown Module !!!\n", "SelfStopUnloadModule");
        return 0x80020136;
    }
    memset(&modParams, 0, sizeof(modParams));
    modParams.modeStart = CMD_STOP_MODULE;
    modParams.modeFinish = CMD_UNLOAD_MODULE;
    modParams.modId = mod->modId;
    modParams.callerModId = mod->modId;
    modParams.argSize = argSize;
    modParams.argp = argp;
    if (pStatus != NULL) {
        modParams.pStatus = pStatus;
    } else {
        modParams.pStatus = &status;
    }
    ret = func_0000253C(&modParams);
    if (ret < 0) {
        Kprintf("modulemgr.c:%s:Cannot stop/unload module 0x%08x\n", "SelfStopUnloadModule", ret);
        return ret;
    }
    sceKernelExitDeleteThread(ret);
    return ret;
}

s32 sceKernelSelfStopUnloadModule(s32 unk, SceSize argSize, void *argp) {
    u32 ra = (u32)getRa();
    s32 oldK1 = shiftK1Noreorder();
    s32 ret;

    if (argp != NULL && k1IsUserMode() && (s32)((u32)argp | argSize | ((u32)argp + argSize)) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (k1IsUserMode()) {
        ra = ThreadManForKernel_DD55A192();
    }
    ret = func_00003BFC(ra, argSize, argp, NULL, NULL);
    if (ret < 0) {
        Kprintf("modulemgr.c:%s:SelfSTopUnloadModule failed: 0x%08x\n", "sceKernelSelfStopUnloadModule", ret);
    }
    setK1(oldK1);
    return ret;
}

s32 sceKernelStopUnloadSelfModule(SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option) {
    SceModuleMgrParam modParams;
    u32 ra = (u32)getRa();
    s32 oldK1;
    s32 ret;

    memset(&modParams, 0, sizeof(modParams));
    oldK1 = shiftK1Noreorder();
    if (argp != NULL && k1IsUserMode() && (s32)((u32)argp | argSize | ((u32)argp + argSize)) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (pStatus != NULL && k1IsUserMode() && (s32)((u32)pStatus | ((u32)pStatus + sizeof(*pStatus))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (option != NULL && k1IsUserMode() && (s32)((u32)option | ((u32)option + sizeof(option))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (k1IsUserMode()) {
        ra = ThreadManForKernel_DD55A192();
    }
    ret = func_00003BFC(ra, argSize, argp, pStatus, option);
    if (ret < 0) {
        Kprintf("modulemgr.c:%s:SelfStopUnloadModule failed: 0x%08x\n", "sceKernelStopUnloadSelfModule", ret);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelStopUnloadSelfModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelSearchModuleByName);
#endif

#if FW_VERSION == 100
SceUID sceKernelSearchModuleByName(const char *name) {
    SceUID ret;
    SceModule *mod;

    mod = sceKernelFindModuleByName(name);
    ret = 0x8002012E;
    if (mod != NULL) {
        ret = mod->modId;
    }
    return ret;
}
#endif

#if FW_VERSION < 282
SceUID sceKernelSearchModuleByAddress(u32 addr) {
    SceUID ret;
    SceModule *mod;

    mod = sceKernelFindModuleByAddress(addr);
    ret = 0x8002012E;
    if (mod != NULL) {
        ret = mod->modId;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelGetModuleIdByAddress);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceKernelModuleMgrMode(void) {
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForUser);
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
INCLUDE_ASM("nonmatchings/modulemgr", sceKernelRebootBeforeForKernel);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00005078);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00006EE4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/modulemgr", func_000064E8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/modulemgr", func_00005B68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00005DD8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00007208);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00005EC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/modulemgr", func_00006038);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/modulemgr", func_00007644);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
