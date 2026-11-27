#ifndef LOADCORE_DECLS_H
#define LOADCORE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* .rodata.sceModuleInfo */
typedef struct {
    u16 modAttribute; /* 0x0 */
    u8 modVersion[2]; /* 0x2 */
    char modName[27]; /* 0x4 */
    char terminal; /* 0x1F */
    void *gpValue; /* 0x20 */
    void *entTop; /* 0x24 */
    void *entEnd; /* 0x28 */
    void *stubTop; /* 0x2C */
    void *stubEnd; /* 0x30 */
} SceModuleInfo;

/* loadcore exec file info (1.00 copy in loadelf.c). Offsets 0x8, 0x10, 0x20, 0x28, 0x34-0x3C, 0x48-0x58, 0x70-0x80 confirmed in the 1.00 asm;
   names from uOFW (6.60 layout, same offsets up to here). */
typedef struct {
    u32 unk0;
    u32 modeAttribute; /* 0x4 */
    u32 apiType; /* 0x8 */
    u32 unkC;
    u32 execSize; /* 0x10 */
    u32 maxAllocSize; /* 0x14 */
    s32 decompressionMemId; /* 0x18 */
    void *fileBase; /* 0x1C */
    s32 elfType; /* 0x20, 1 = PRX, 2 = ELF */
    void *topAddr; /* 0x24 */
    u32 entryAddr; /* 0x28 */
    u32 unk2C;
    u32 modCodeSize; /* 0x30 */
    u32 textSize; /* 0x34 */
    u32 dataSize; /* 0x38 */
    u32 bssSize; /* 0x3C */
    u32 partitionId; /* 0x40 */
    u32 isKernelMod; /* 0x44 */
    u32 isDecrypted; /* 0x48 */
    u32 moduleInfoOffset; /* 0x4C */
    SceModuleInfo *moduleInfo; /* 0x50 */
    u32 isCompressed; /* 0x54 */
    u16 modInfoAttribute; /* 0x58 */
    u16 execAttribute; /* 0x5A */
    u32 decSize; /* 0x5C */
    u32 isDecompressed; /* 0x60 */
    u32 isSignChecked; /* 0x64 */
    char *secureInstallId; /* 0x68 */
    u32 overlapSize; /* 0x6C */
    void *exportsInfo; /* 0x70 */
    u32 exportsSize; /* 0x74 */
    void *importsInfo; /* 0x78 */
    u32 importsSize; /* 0x7C */
    char *strtab; /* 0x80 */
    u8 numSegments; /* 0x84 */
    u8 padding[3];
    u32 segmentAddr[4]; /* 0x88 */
    u32 segmentSize[4]; /* 0x98 */
} SceLoadCoreExecFileInfo;
/* "~SCE" wrapper header in front of a module (magic 0x4543537E, size at 4) */
typedef struct {
    u32 magic; /* 0x0 */
    u32 size; /* 0x4 */
} SceHeader;

typedef struct SceSysmemUidCB {
    struct SceSysmemUidCB *PARENT0; /* 0x0 */
    struct SceSysmemUidCB *nextChild; /* 0x4 */
    struct SceSysmemUidCB *meta; /* 0x8 */
    SceUID uid; /* 0xC */
    char *name; /* 0x10 */
    u8 childSize; /* 0x14 */
    u8 size; /* 0x15, words */
    u16 attr; /* 0x16 */
} SceSysmemUidCB;

/* systable.c (1.00 layouts confirmed in the asm) */
typedef struct SceSysCallEntryTable {
    struct SceSysCallEntryTable *next; /* 0x0 */
    u16 inUse; /* 0x4, bit 0 */
    u16 numEntries; /* 0x6 */
    u32 startAddr; /* 0x8 */
} SceSysCallEntryTable;
typedef char chk_SceSysCallEntryTable[(sizeof(SceSysCallEntryTable) == 0xC) ? 1 : -1];
typedef struct SceSyscallTable {
    struct SceSyscallTable *next; /* 0x0 */
    s32 seed; /* 0x4 */
    s32 funcTableSize; /* 0x8 */
    s32 tableSize; /* 0xC */
    void (*syscalls[4096])(); /* 0x10 */
} SceSyscallTable;

/* loadcore control blocks, 1.00 layout (smaller than uOFW's 6.60 ones) */
typedef struct SceResidentLibrary {
    struct SceResidentLibrary *next; /* 0x0 */
    const char *libName; /* 0x4 */
    u16 version; /* 0x8 */
    u16 attribute; /* 0xA */
    u8 len; /* 0xC */
    u8 vStubCount; /* 0xD */
    u16 stubCount; /* 0xE */
    u32 *entryTable; /* 0x10 */
    void *libEntryTable; /* 0x14 */
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} SceResidentLibrary;
typedef char chk_SceResidentLibrary[(sizeof(SceResidentLibrary) == 0x24) ? 1 : -1];
typedef struct SceStubLibrary {
    struct SceStubLibrary *freeNext; /* 0x0, free-list link */
    struct SceStubLibrary *next; /* 0x4 */
    const char *libName; /* 0x8 */
    u16 version; /* 0xC */
    u16 attribute; /* 0xE */
    u8 stubEntryTableLen; /* 0x10 */
    u8 vStubCount; /* 0x11 */
    u16 stubCount; /* 0x12 */
    u32 *nidTable; /* 0x14 */
    void *stubTable; /* 0x18 */
    void *vStubTable; /* 0x1C */
    u32 unk20; /* 0x20 */
    void *libStubTable; /* 0x24 */
    u32 status; /* 0x28 */
} SceStubLibrary;
typedef char chk_SceStubLibrary[(sizeof(SceStubLibrary) == 0x2C) ? 1 : -1];

/* module control block, 1.00 layout (0xC0; uOFW 6.60 is 0xE4) */
typedef struct SceModule {
    struct SceModule *next; /* 0x0 */
    u16 attribute; /* 0x4 */
    u8 version[2]; /* 0x6 */
    char modName[27]; /* 0x8 */
    char terminal; /* 0x23 */
    u16 status; /* 0x24 */
    u16 padding; /* 0x26 */
    SceUID secId; /* 0x28 */
    SceUID modId; /* 0x2C */
    SceUID userModThid; /* 0x30 */
    SceUID moduleBlockId; /* 0x34 */
    SceUID mpIdText; /* 0x38 */
    SceUID mpIdData; /* 0x3C */
    void *entTop; /* 0x40 */
    SceSize entSize; /* 0x44 */
    void *stubTop; /* 0x48 */
    SceSize stubSize; /* 0x4C */
    u32 moduleStart; /* 0x50 */
    u32 moduleStop; /* 0x54 */
    u32 moduleBootstart; /* 0x58 */
    u32 moduleRebootBefore; /* 0x5C */
    u32 entryAddr; /* 0x60 */
    u32 gpValue; /* 0x64 */
    u32 textAddr; /* 0x68 */
    SceSize textSize; /* 0x6C */
    SceSize dataSize; /* 0x70 */
    SceSize bssSize; /* 0x74 */
    u8 nSegments; /* 0x78 */
    u8 padding2[3];
    u32 segmentAddr[4]; /* 0x7C */
    SceSize segmentSize[4]; /* 0x8C */
    s32 moduleStartThreadPriority; /* 0x9C */
    SceSize moduleStartThreadStacksize; /* 0xA0 */
    u32 moduleStartThreadAttr; /* 0xA4 */
    s32 moduleStopThreadPriority; /* 0xA8 */
    SceSize moduleStopThreadStacksize; /* 0xAC */
    u32 moduleStopThreadAttr; /* 0xB0 */
    s32 moduleRebootBeforeThreadPriority; /* 0xB4 */
    SceSize moduleRebootBeforeThreadStacksize; /* 0xB8 */
    u32 moduleRebootBeforeThreadAttr; /* 0xBC */
} SceModule;
typedef char chk_SceModule[(sizeof(SceModule) == 0xC0) ? 1 : -1];

/* loadcore's control block (sceKernelQueryLoadCoreCB), 1.00 layout */
typedef struct {
    SceResidentLibrary *registeredLibs; /* 0x0 */
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    SceModule *registeredMods; /* 0x14 */
    u32 regModCount; /* 0x18 */
    u32 secModId; /* 0x1C */
    u32 *bootCallBacks; /* 0x20 */
    void *unk24; /* 0x24 */
    SceUID loadCoreHeapId; /* 0x28 */
    u32 linkedLoadCoreStubs; /* 0x2C */
} SceLoadCore;

struct Unk_LoadCoreForKernel_C0913394_0 {
    u8 pad0[0xD4];
    s32 unkD4;
};

struct Unk_func_0000630C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

extern SceResidentLibrary *D_00007260; /* g_FreeLibEnt */
extern SceStubLibrary *D_00007264; /* g_FreeLibStub */
extern SceSysCallEntryTable *D_00007268; /* g_pFreeSysEnt */
extern SceSysCallEntryTable *D_0000726C; /* g_pSysEntControl */
extern SceSysmemUidCB *D_00007274; /* g_ModuleType */
extern SceResidentLibrary D_00007278[30]; /* g_LoadCoreLibEntries */
extern M2C_UNK D_000073A0;
extern s32 D_000074B4;
extern s32 D_000074B8;
extern s32 D_000075B4;
extern s32 D_000075B8;
extern SceStubLibrary D_000076B0[90]; /* g_LoadCoreLibStubs */
extern M2C_UNK D_000077C4;
extern s32 D_000079C0;
extern s32 D_000079C8;
extern s32 D_00007F08;
extern SceSysCallEntryTable D_00008628[60]; /* initialSysEntTable */
extern SceLoadCore D_000088FC; /* g_loadCore */
extern s32 D_00008914;
extern s32 D_00008C40;
extern M2C_UNK D_000097AC;

s32 Kprintf(const char *fmt, ...);
void LoadCoreForKernel_4440853B(void);
void LoadCoreForKernel_FA3101A4(void);
SceSysCallEntryTable *func_00000280(void);
SceSysCallEntryTable *func_000002CC(SceSysCallEntryTable *p);
s32 func_00000340(void);
void func_00000674(s32 arg0, s32 arg1);
void func_00000690(s32 arg0, s32 arg1);
void func_00000764(s32 arg0, s32 arg1, s32 arg2);
s32 func_00000770(void);
void func_00000784(s32 arg0, s32 arg1);
s32 func_000007A4(s32, s32, s32, s32);
s32 func_000007D0(void);
void func_00000800(s32 arg0, s32 arg1, s32 arg2);
void func_00000820(s32 arg0, s32 arg1);
s32 func_00000840(s32, s32, s32, s32);
s32 func_000008D0(s32, s32, s32);
void func_00000AAC(void *arg0, void *arg1);
s32 func_00000B4C(void);
SceUID func_00000C08(void);
s32 func_00000EF4(s32, s32);
s32 func_000014F8(s32, s32);
s32 func_00001560(s32);
s32 func_0000175C(s32, s32, s32, s32);
s32 func_00001830(s32, s32, s32, s32);
s32 func_00001B6C(s32, s32, s32);
s32 func_00001ECC(void);
void func_00002220(s32 arg0);
s32 func_000027F8(void);
s32 func_00002A5C(void);
void func_00002B40(void);
void func_00002B64(void);
void func_00002B88(void);
void func_00002BA4(void);
void func_00002BC0(void);
void func_00002BE4(void *arg0, u32 arg1);
void func_00002C20(void);
void func_00002C3C(void *arg0, u32 arg1);
void func_00002E84(void);
void func_00002EA8(void);
void func_00002ECC(void);
void func_00002EE8(void);
void func_00002F04(void);
void func_00002F28(void *arg0, u32 arg1);
void func_00002F64(void);
void func_00002F80(void *arg0, u32 arg1);
s32 func_000039F4(s32 arg0);
s32 func_00004404(void);
s32 func_000046C4(s32 arg0);
s32 func_00004B28(void *arg0);
SceModule *func_00004BD4(const char *name);
s32 func_00004D04(s32 arg0);
s32 func_00004D14(s32 arg0);
s32 func_00004D24(void);
void func_00004DBC(SceModule *mod);
s32 func_000051C0(s32 arg0);
s32 func_00005338(const char *a, const char *b); /* strcmp */
void func_000054D0(void);
s32 func_000056D8(s32, s32, s32, s32, s32, s32);
u8 *func_000057D0(u8 *arg0, u8 *arg1);
s32 func_00005858(s32 arg0);
s32 func_00005894(s32 arg0);
s32 func_000058D0(s32 arg0);
s32 func_00005998(s32 arg0);
void func_00005E20(void);
s32 func_0000630C(struct Unk_func_0000630C_0 *arg0);
u8 *func_00006434(u8 *arg0, u8 *arg1);
char *func_0000646C(char *dst, const char *src, s32 n); /* strncpy */
s32 func_0000665C(void); /* sceKernelLoadCoreLock */
s32 func_00006688(); /* sceKernelLoadCoreUnlock(intr) */
s32 func_000066E8(s32 arg0);
void *sceKernelAllocHeapMemory(SceUID heapId, SceSize size);
SceModule *sceKernelAllocModule(SceLoadCoreExecFileInfo *execInfo);
void sceKernelAssert(s32 ok, s32 unk);
s32 sceKernelCallUIDObjCommonFunction();
SceModule *sceKernelCreateModule(void);
s32 sceKernelCreateUID(SceSysmemUidCB *type, const char *name, s32 k1, SceSysmemUidCB **cb);
s32 sceKernelCreateUIDtype(const char *name, s32 size, void *funcTable, void *parent, void *type);
s32 sceKernelDcacheWBinvAll(void);
void sceKernelDcacheWritebackInvalidateAll(void);
s32 sceKernelDcacheWritebackInvalidateRange(void *, u32);
void sceKernelDeleteModule(void *arg0);
M2C_UNK sceKernelDeleteUID(s32);
SceModule *sceKernelFindModuleByUID(SceUID uid);
s32 sceKernelFreeHeapMemory(SceUID heapId, void *block);
void sceKernelFreeModule(void *arg0);
s32 sceKernelGetUIDcontrolBlockWithType(SceUID uid, SceSysmemUidCB *type, SceSysmemUidCB **cb);
s32 sceKernelIcacheClearAll(void);
void sceKernelIcacheInvalidateAll(void);
s32 sceKernelIcacheInvalidateRange(void *, u32);
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntriesWithModule(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2);
s32 sceKernelLoadCoreMode(void);
s32 sceKernelMaskLibraryEntries(void);
s32 sceKernelModuleAssign(SceModule *mod, SceLoadCoreExecFileInfo *execInfo);
s32 sceKernelModuleCount(void);
s32 *sceKernelQueryLoadCoreCB(void);
void sceKernelRegisterLibrary(s32 arg0);
void sceKernelRegisterLibraryForUser(s32 arg0);
s32 sceKernelRegisterSystemCallTable(SceSyscallTable *table);
s32 sceKernelRenameUID(SceUID uid, const char *name);
s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1);

#endif
