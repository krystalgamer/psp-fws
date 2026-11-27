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
    s8 magic[4];
    u32 version;
    u32 paramOff;
    u32 icon0Off;
    u32 icon1Off;
    u32 pic0Off;
    u32 pic1Off;
    u32 snd0Off;
    u32 dataPSPOff;
    u32 dataPSAROff;
} PBPHeader;

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
    u8 nsegment;
    u8 reserved[3];
    s32 segmentaddr[4];
    s32 segmentsize[4];
    u32 entry_addr;
    u32 gp_value;
    u32 text_addr;
    u32 text_size;
    u32 data_size;
    u32 bss_size;
} SceKernelModuleInfo;

typedef struct {
    SceSize size;
    SceUID mpIdStack;
    SceSize stackSize;
    s32 priority;
    u32 attribute;
} SceKernelSMOption;

typedef struct {
    SceSize size;
    SceUID stackMpid;
} SceKernelThreadOptParam;

#if FW_VERSION < 150
typedef struct {
    u8 unk0[0x14];
    SceSize maxAllocSize;
    SceUID decompressionMemId;
    u8 unk1C[0x14];
    SceSize modCodeSize;
    u8 unk34[0x20];
    u32 isCompressed;
    u8 unk58[0x68];
} SceLoadCoreExecFileInfo;
#else
typedef struct SceLoadCoreExecFileInfo SceLoadCoreExecFileInfo;
#endif

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
#if FW_VERSION < 150
    SceUID userModThid;
    SceUID memId;
    SceUID mpIdText;
    SceUID mpIdData;
    void *entTop;
    SceSize entSize;
    void *stubTop;
    SceSize stubSize;
    void *moduleStart;
    void *moduleStop;
    void *moduleBootstart;
    s32 (*moduleRebootBefore)(void *arg);
    u32 entryAddr;
    u32 gpValue;
    u32 textAddr;
    SceSize textSize;
    SceSize dataSize;
    SceSize bssSize;
    u8 nSegment;
    u8 padding2[3];
    u32 segmentAddr[4];
    SceSize segmentSize[4];
    s32 moduleStartThreadPriority;
    SceSize moduleStartThreadStacksize;
    u32 moduleStartThreadAttr;
    s32 moduleStopThreadPriority;
    SceSize moduleStopThreadStacksize;
    u32 moduleStopThreadAttr;
    s32 moduleRebootBeforeThreadPriority;
    SceSize moduleRebootBeforeThreadStacksize;
    u32 moduleRebootBeforeThreadAttr;
#endif
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

#if FW_VERSION < 201
typedef struct SceModuleMgrParam {
    s8 modeStart;
    s8 modeFinish;
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
#if FW_VERSION >= 152
    u32 unk5C;
#endif
} SceModuleMgrParam;
#else
typedef struct SceModuleMgrParam SceModuleMgrParam;
#endif

typedef s64 SceOff;

typedef struct {
    const char *libName;
    u8 version[2];
    s16 attribute;
    u8 len;
    u8 vStubCount;
    u16 stubCount;
    void *entryTable;
} SceResidentLibraryEntryTable;

typedef struct {
    SceSize size;
    u32 startAddr;
    u32 memSize;
    u32 attr;
} SceSysmemPartitionInfo;

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

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000004B0(SceModuleMgrParam *modParams, SceKernelLMOption *option);
#else
void func_000004B0(void *arg0, void *arg1);
#endif

extern char D_00004C90[];
extern char D_00004CF0[];
extern char D_00005018[];
extern char D_0000504C[];
extern char D_0000505C[];
extern char D_00005070[];
extern char D_00005088[];
extern char D_0000515C[];
extern u32 D_00005AF0;
extern char D_00005B90[];
extern char D_00005BBC[];
extern char D_00005C14[];
extern char D_00005C3C[];
extern char D_00005C64[];
extern char D_00005CB0[];
extern char D_00005DE0[];
extern char D_0000602C[];
extern char D_00006060[];
extern char D_000060A8[];
extern char D_000060C8[];
extern char D_00006100[];
extern char D_00006D34[];
extern char D_00006D64[];
extern s32 D_00006DA0;
extern char D_00006DF4[];
extern char D_00006E28[];
extern char D_00006E3C[];
extern u32 D_00007160;
extern s32 D_00008174;
extern s32 D_00008184;
extern SceModuleManagerCB modMgrCB;

u32 CheckMsHeader(PBPHeader *header, SceSize *pSize);
s32 Kprintf(const char *fmt, ...);
s32 LoadDeviceCheck(SceUID fd, s32 apiType);
s32 ModuleReleaseLibraries(SceModule *mod);
s32 SelfStopUnloadModule(u32 ra, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option);
s32 StartModule(SceModuleMgrParam *modParams, SceModule *mod, SceSize argSize, void *argp, s32 *pStatus);
u32 ThreadManForKernel_DD55A192(void);
s32 exe_thread(SceSize argSize, void *argp);
SceModule *func_00000108(void);
SceModule *func_00000148(s32 arg0);
s32 func_00000190(SceModule *mod);
s32 func_000001D8(SceModule *mod);
s32 func_00000220(SceModule *mod);
s32 func_00000268(SceModule *mod);
SceModule *func_000002B0(SceUID modId);
SceModule *func_000002F8(SceUID modId);
void func_00000340(void);
void func_0000035C(void);
void func_00000378(void);
void func_00000394(void);
void func_000003B0(void);
void func_000003CC(void);
void func_000003E8(void);
void func_00000404(void *libStubTable, SceSize size);
s32 func_00000420(void *libEntry);
s32 func_00000474(void *libEntry);
void func_000004C0(struct Unk_func_000004C0_0 *arg0, struct Unk_func_000004C0_1 *arg1);
void func_00000594(SceModule *mod);
s32 func_00000E7C(SceModuleMgrParam *modParams, SceModule *mod);
s32 func_000013F4(SceModuleMgrParam *modParams);
s32 func_00001994(SceModuleMgrParam *modParams);
s32 func_00001D78(SceModuleMgrParam *modParams, SceModule *mod, s32 mode, SceUID callerModId, SceSize argSize, void *argp, s32 *pStatus);
s32 func_000026F8(SceModuleMgrParam *modParams, SceKernelLMOption *option);
s32 func_00003210(SceModuleMgrParam *modParams);
s32 func_0000340C(SceUID fd, s32 apiType);
s32 func_000036B0(u32 ra, SceSize argSize, void *argp, s32 *pStatus, SceKernelSMOption *option);
void func_00004750(void);
s32 func_00004BA4(s32);
s32 func_0000552C(s32);
void *memcpy(void *dst, const void *src, SceSize n);
void *memset(void *s, s32 c, SceSize n);
void module_reboot_before(void);
s32 module_reboot_phase(void);
s32 sceIoClose(SceUID fd);
s32 sceIoIoctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen);
SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence);
SceUID sceIoOpen(const char *file, s32 flags, s32 mode);
s32 sceIoRead(SceUID fd, void *data, SceSize size);
SceModule *sceKernelAllocModule(s32 arg0);
SceUID sceKernelAllocPartitionMemory(SceUID mpid, const char *name, u32 type, SceSize size, void *addr);
void sceKernelAssert(s32 test, s32 lvl);
s32 sceKernelCanReleaseLibrary(void *libEntry);
s32 sceKernelChangeThreadPriority(SceUID thid, s32 priority);
M2C_UNK sceKernelCheckExecFile();
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
SceUID sceKernelCreateEventFlag(const char *name, u32 attr, u32 initPattern, void *option);
SceModule *sceKernelCreateModule(void);
SceUID sceKernelCreateSema(const char *name, u32 attr, s32 initVal, s32 maxVal, void *option);
SceUID sceKernelCreateThread(const char *name, void *entry, s32 initPriority, s32 stackSize, u32 attr, SceKernelThreadOptParam *option);
void sceKernelDcacheWritebackAll(void);
s32 sceKernelDeleteModule(SceModule *mod);
s32 sceKernelDeleteThread(SceUID thid);
s32 sceKernelExitDeleteThread(s32 status);
SceModule *sceKernelFindModuleByAddress(u32 addr);
SceModule *sceKernelFindModuleByName(const char *name);
SceModule *sceKernelFindModuleByUID(SceUID modId);
s32 sceKernelFreeModule(SceModule *mod);
s32 sceKernelFreePartitionMemory(SceUID id);
void *sceKernelGetBlockHeadAddr(SceUID id);
SceModule *sceKernelGetModuleFromUID(SceUID modId);
s32 sceKernelGetModuleList(s32 size, SceUID *list);
SceUID sceKernelGetThreadId(void);
s32 sceKernelGetUserLevel(void);
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
s32 sceKernelModuleCount(void);
SceModule *sceKernelModuleFromUID(SceUID modId);
s32 sceKernelModuleMgrMode(void);
M2C_UNK sceKernelProbeExecutableObject();
s32 sceKernelQueryMemoryPartitionInfo(SceUID mpid, SceSysmemPartitionInfo *info);
M2C_UNK sceKernelRegisterLibrary();
M2C_UNK sceKernelRegisterLibraryForUser();
s32 sceKernelRegisterModule(SceModule *mod);
s32 sceKernelReleaseLibrary(void *libEntry);
s32 sceKernelReleaseModule(SceModule *mod);
s32 sceKernelResizeMemoryBlock(SceUID id, s32 leftShift, s32 rightShift);
SceUID sceKernelSearchModuleByAddress(u32 addr);
SceUID sceKernelSearchModuleByName(const char *name);
s32 sceKernelSetEventFlag(SceUID evid, u32 bits);
s32 sceKernelSignalSema(SceUID semaId, s32 signal);
s32 sceKernelStartThread(SceUID thid, SceSize argSize, void *argp);
s32 sceKernelSuspendThread(u32);
s32 sceKernelUnLinkLibraryEntries(void *libStubTable, SceSize size);
s32 sceKernelWaitEventFlag(SceUID evid, u32 bits, u32 wait, u32 *outBits, void *timeout);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceKernelWaitThreadEnd(SceUID thid, u32 *timeout);
s32 start_exe_thread(SceModuleMgrParam *modParams);
void *wmemset(void *s, s32 c, SceSize n);

#endif
