#ifndef LOADCORE_DECLS_H
#define LOADCORE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_LoadCoreForKernel_C0913394_0 {
    u8 pad0[0xD4];
    s32 unkD4;
};

struct Unk_func_0000630C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

extern M2C_UNK D_000073A0;
extern s32 D_000074B4;
extern s32 D_000074B8;
extern s32 D_000075B4;
extern s32 D_000075B8;
extern M2C_UNK D_000077C4;
extern s32 D_000079C0;
extern s32 D_000079C8;
extern s32 D_00007F08;
extern s32 D_00008914;
extern M2C_UNK D_000097AC;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *);
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1);
s32 sceKernelLoadCoreMode(void);
void LoadCoreForKernel_4440853B(void);
s32 sceKernelAllocModule(s32 arg0);
void sceKernelRegisterLibraryForUser(s32 arg0);
void sceKernelDeleteModule(void *arg0);
s32 sceKernelModuleAssign(s32, s32);
s32 sceKernelModuleCount(void);
void sceKernelRegisterLibrary(s32 arg0);
s32 sceKernelMaskLibraryEntries(void);
void sceKernelFreeModule(void *arg0);
void sceKernelLinkLibraryEntriesWithModule(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK *sceKernelQueryLoadCoreCB(void);
s32 sceKernelCreateModule(void);
s32 sceKernelIcacheClearAll(void);
s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1);
void LoadCoreForKernel_FA3101A4(void);
M2C_UNK sceKernelAllocHeapMemory(s32, s32);
M2C_UNK sceKernelDeleteUID(s32);
M2C_UNK sceKernelCallUIDObjCommonFunction();
M2C_UNK sceKernelCreateUIDtype(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
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
s32 sceKernelDcacheWBinvAll(void);
void sceKernelDcacheWritebackInvalidateAll(void);
s32 sceKernelDcacheWritebackInvalidateRange(void *, u32);
void sceKernelIcacheInvalidateAll(void);
s32 sceKernelIcacheInvalidateRange(void *, u32);

#endif
