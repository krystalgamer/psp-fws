#ifndef LOADCORE_DECLS_H
#define LOADCORE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

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
s32 func_00004D04(s32 arg0);
s32 func_00004D14(s32 arg0);
s32 func_00004D24(void);
s32 func_000051C0(s32 arg0);
s32 func_00005338(s32, s32);
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
s32 func_0000665C(void);
s32 func_00006688(void);
s32 func_000066E8(s32 arg0);
void *sceKernelAllocHeapMemory(SceUID heapId, SceSize size);
s32 sceKernelAllocModule(s32 arg0);
M2C_UNK sceKernelCallUIDObjCommonFunction();
s32 sceKernelCreateModule(void);
M2C_UNK sceKernelCreateUIDtype(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
s32 sceKernelDcacheWBinvAll(void);
void sceKernelDcacheWritebackInvalidateAll(void);
s32 sceKernelDcacheWritebackInvalidateRange(void *, u32);
void sceKernelDeleteModule(void *arg0);
M2C_UNK sceKernelDeleteUID(s32);
s32 sceKernelFreeHeapMemory(SceUID heapId, void *block);
void sceKernelFreeModule(void *arg0);
s32 sceKernelIcacheClearAll(void);
void sceKernelIcacheInvalidateAll(void);
s32 sceKernelIcacheInvalidateRange(void *, u32);
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntriesWithModule(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2);
s32 sceKernelLoadCoreMode(void);
s32 sceKernelMaskLibraryEntries(void);
s32 sceKernelModuleAssign(s32, s32);
s32 sceKernelModuleCount(void);
s32 *sceKernelQueryLoadCoreCB(void);
void sceKernelRegisterLibrary(s32 arg0);
void sceKernelRegisterLibraryForUser(s32 arg0);
s32 sceKernelRegisterSystemCallTable(SceSyscallTable *table);
s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1);

#endif
