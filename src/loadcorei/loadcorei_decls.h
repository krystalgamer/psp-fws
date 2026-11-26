#ifndef LOADCOREI_DECLS_H
#define LOADCOREI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_LoadCoreForKernel_6B2371C2_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00000AAC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000AAC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000ACC_0 {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_func_00000ACC_1 {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_func_00000ADC_0 {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_func_00000ADC_1 {
    u8 pad0[0xC];
    u16 unkC;
};

struct Unk_func_00000AEC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00000AEC_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00000B10_0 {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_func_00000B10_1 {
    u8 pad0[0xC];
    u16 unkC;
};

struct Unk_func_00002B24_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00002B3C_0 {
    u8 pad0[0x4];
    u16 unk4;
};

struct Unk_func_000039A8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000053CC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_00007FF0;
extern M2C_UNK D_0000967C;
extern s32 D_00009694;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *);
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1);
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1);
void sceKernelRegisterLibraryForUser(s32 arg0);
void sceKernelDeleteModule(struct Unk_LoadCoreForKernel_6B2371C2_0 *arg0);
s32 sceKernelModuleCount(void);
void sceKernelRegisterLibrary(s32 arg0);
void sceKernelFreeModule(struct Unk_LoadCoreForKernel_6B2371C2_0 *arg0);
M2C_UNK *sceKernelQueryLoadCoreCB(void);
s32 sceKernelFindModuleByName(s32 arg0);
s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1);
M2C_UNK sceKernelRenameUID(s32, void *);
M2C_UNK sceKernelDeleteUID(s32);
M2C_UNK sceKernelCallUIDObjCommonFunction();
s32 func_00000340(void);
void func_00000674(s32 arg0, s32 arg1);
void func_00000690(s32 arg0, s32 arg1);
s32 func_000008D0(s32, s32, s32);
void func_00000AAC(struct Unk_func_00000AAC_0 *arg0, struct Unk_func_00000AAC_1 *arg1);
s32 func_00000ACC(struct Unk_func_00000ACC_0 *arg0, struct Unk_func_00000ACC_1 *arg1);
s32 func_00000ADC(struct Unk_func_00000ADC_0 *arg0, struct Unk_func_00000ADC_1 *arg1);
void func_00000AEC(struct Unk_func_00000AEC_0 *arg0, struct Unk_func_00000AEC_1 *arg1);
s32 func_00000B10(struct Unk_func_00000B10_0 *arg0, struct Unk_func_00000B10_1 *arg1);
s32 func_000014F8(s32, s32);
s32 func_00001B6C(s32, s32, s32);
M2C_UNK func_00001D1C(void *);
s32 func_00001ECC(void);
M2C_UNK func_00001F94(M2C_UNK, void *);
void func_00002204(u32 arg0, u32 arg1, M2C_UNK arg2);
s32 func_000029D8(s32 arg0);
void func_00002B24(struct Unk_func_00002B24_0 *arg0, s32 arg1);
s32 func_00002B3C(struct Unk_func_00002B3C_0 *arg0);
s32 func_000039A8(struct Unk_func_000039A8_0 *arg0);
s32 func_000053CC(struct Unk_func_000053CC_0 *arg0);
s32 func_00005478(s32);
M2C_UNK func_00005BF8(s32, s32);
s32 func_00005F98(s32, s32, s32, s32, s32, s32);
s32 func_000061CC();
M2C_UNK func_000061F8(s32);
s32 func_00006258(s32 arg0);

#endif
