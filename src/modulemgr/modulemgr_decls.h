#ifndef MODULEMGR_DECLS_H
#define MODULEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_ModuleMgrForKernel_54D9E02E_temp_v0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_000004C0_0 {
    u8 pad0[0x2];
    u8 unk2;
    u8 unk3;
    u8 pad4[0x10];
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x20];
    s32 unk3C;
    u8 pad40[0xC];
    s32 unk4C;
    s32 unk50;
    u8 pad54[0xC];
    s32 unk60;
};

struct Unk_func_000004C0_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    u8 padC[0x4];
    u8 unk10;
    u8 unk11;
};

extern u32 D_00005AF0;
extern M2C_UNK D_00006DA0;
extern u32 D_00007160;
extern s32 D_00008174;
extern s32 D_00008184;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
M2C_UNK sceKernelLinkLibraryEntriesForUser();
M2C_UNK sceKernelLinkLibraryEntries();
s32 sceKernelAllocModule(s32);
M2C_UNK sceKernelRegisterLibraryForUser();
s32 sceKernelDeleteModule(s32);
M2C_UNK sceKernelLoadExecutableObject();
s32 sceKernelReleaseModule(s32);
M2C_UNK sceKernelCheckExecFile();
M2C_UNK sceKernelRegisterLibrary();
s32 sceKernelCanReleaseLibrary();
s32 sceKernelRegisterModule(s32);
s32 sceKernelFreeModule(s32);
M2C_UNK sceKernelProbeExecutableObject();
s32 sceKernelFindModuleByUID(s32);
s32 sceKernelCreateModule();
void *sceKernelFindModuleByName();
M2C_UNK sceKernelUnLinkLibraryEntries();
s32 sceKernelModuleFromUID(s32);
void *sceKernelFindModuleByAddress();
s32 sceKernelSearchModuleByName(void);
s32 sceKernelLoadModuleBootInitBtcnf(void);
s32 sceKernelSearchModuleByAddress(void);
s32 sceKernelModuleMgrMode(void);
s32 sceKernelLoadModuleByIDBootInitConfig(void);
s32 sceKernelLoadModuleBufferBootInitConfig(void);
s32 func_00000108(void);
s32 func_00000148(s32 arg0);
s32 func_00000190(s32 arg0);
s32 func_000001D8(s32 arg0);
s32 func_00000220(s32 arg0);
s32 func_00000268(s32 arg0);
s32 func_000002B0(s32 arg0);
s32 func_000002F8(s32 arg0);
void func_00000340(void);
void func_0000035C(void);
void func_00000378(void);
void func_00000394(void);
void func_000003B0(void);
void func_000003CC(void);
void func_000003E8(void);
void func_00000404(void);
s32 func_00000420(void);
void func_000004B0(void *arg0, void *arg1);
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1);
void func_00000594(void *arg0);
s32 func_00003210(s32);
void func_00004750(void);
s32 func_00004BA4(s32);
s32 func_0000552C(s32);
void module_reboot_before(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelFreePartitionMemory(s32);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelSuspendThread(u32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 module_reboot_phase(void);

#endif
