#ifndef MODULEMGR_DECLS_H
#define MODULEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

enum ModuleMgrExecModes {
    CMD_LOAD_MODULE,
    CMD_RELOCATE_MODULE,
    CMD_START_MODULE,
    CMD_STOP_MODULE,
    CMD_UNLOAD_MODULE
};

typedef struct {
    SceSize size;
    SceUID mpIdText;
    SceUID mpIdData;
    u32 flags;
    u8 position;
    u8 access;
    u8 cReserved[2];
} SceKernelLMOption;

typedef struct {
    SceSize size;
    SceUID mpIdStack;
    SceSize stackSize;
    s32 priority;
    u32 attribute;
} SceKernelSMOption;

typedef struct SceModule {
    struct SceModule *next;
    u16 attribute;
    u8 version[2];
    char modName[27];
    char terminal;
    u16 status;
    u16 padding;
    SceUID secId;
    SceUID modId;
} SceModule;

typedef struct SceModuleLink {
    struct SceModuleLink *next;
    struct SceModuleLink *prev;
} SceModuleLink;

typedef struct {
    SceUID threadId;
    SceUID semaId;
    SceUID eventId;
    SceUID userThreadId;
    SceModuleLink list;
} SceModuleManagerCB;

#if FW_VERSION == 100
typedef struct SceModuleMgrParam {
    u8 modeStart;
    u8 modeFinish;
    u8 position;
    u8 access;
    u32 apiType;
    SceUID *pResult;
    SceModule *pMod;
    SceUID mpIdText;
    SceUID mpIdData;
    SceUID threadMpIdStack;
    SceSize stackSize;
    s32 threadPriority;
    u32 threadAttr;
    SceUID modId;
    SceUID callerModId;
    SceUID fd;
    void *pExecInfo;
    void *fileBase;
    SceSize argSize;
    void *argp;
    u32 unk44;
    u32 unk48;
    s32 *pStatus;
    SceUID eventId;
    u32 unk54;
    u32 unk58;
} SceModuleMgrParam;
#else
typedef struct SceModuleMgrParam SceModuleMgrParam;
#endif

typedef s64 SceOff;

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
extern s32 D_00006DA0;
extern u32 D_00007160;
extern s32 D_00008174;
extern s32 D_00008184;

void Kprintf(const char *fmt, ...);
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
s32 func_00000474(void);
void func_000004B0(void *arg0, void *arg1);
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1);
void func_00000594(void *arg0);
s32 func_0000253C(SceModuleMgrParam *modParams);
s32 func_000026F8(SceModuleMgrParam *modParams, SceKernelLMOption *option);
s32 func_00003210(s32);
void func_00004750(void);
s32 func_00004BA4(s32);
s32 func_0000552C(s32);
void *memset(void *s, s32 c, SceSize n);
void module_reboot_before(void);
s32 module_reboot_phase(void);
SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence);
s32 sceKernelAllocModule(s32);
s32 sceKernelCanReleaseLibrary();
M2C_UNK sceKernelCheckExecFile();
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateModule();
s32 sceKernelDeleteModule(s32);
SceModule *sceKernelFindModuleByAddress(u32 addr);
SceModule *sceKernelFindModuleByName(const char *name);
s32 sceKernelFindModuleByUID(s32);
s32 sceKernelFreeModule(s32);
M2C_UNK sceKernelFreePartitionMemory(s32);
s32 sceKernelIsIntrContext(void);
M2C_UNK sceKernelLinkLibraryEntries();
M2C_UNK sceKernelLinkLibraryEntriesForUser();
M2C_UNK sceKernelLoadExecutableObject();
s32 sceKernelLoadModuleBootInitBtcnf(void);
s32 sceKernelLoadModuleBufferBootInitConfig(void);
SceUID sceKernelLoadModuleBufferWithApitype(void *buf, s32 flags, s32 apiType, SceKernelLMOption *option);
s32 sceKernelLoadModuleByIDBootInitConfig(void);
SceUID sceKernelLoadModuleWithApitype(const char *path, s32 flags, s32 apiType, SceKernelLMOption *option);
s32 sceKernelLockMutex(s32, s32, void *);
s32 sceKernelModuleFromUID(s32);
s32 sceKernelModuleMgrMode(void);
M2C_UNK sceKernelProbeExecutableObject();
M2C_UNK sceKernelRegisterLibrary();
M2C_UNK sceKernelRegisterLibraryForUser();
s32 sceKernelRegisterModule(s32);
s32 sceKernelReleaseLibrary();
s32 sceKernelReleaseModule(s32);
SceUID sceKernelSearchModuleByAddress(u32 addr);
SceUID sceKernelSearchModuleByName(const char *name);
s32 sceKernelSuspendThread(u32);
M2C_UNK sceKernelUnLinkLibraryEntries();
s32 sceKernelWaitSema(s32, s32, void *);

#endif
