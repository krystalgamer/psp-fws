#ifndef ISOFS_DECLS_H
#define ISOFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00007608_s {
    u8 pad0[0x1C];
    volatile s32 unk1C;
    volatile s32 unk20;
};

struct Unk_func_00000440_0 {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad44[0xC];
    u8 unk50;
    u8 pad51[0x47];
    s32 unk98;
};

struct Unk_func_000004E4_0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_func_00002364_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_00003BB4_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_00003BB4_temp_v0 {
    u8 pad0[0x58];
    s32 unk58;
};

extern s32 D_00005A00;
extern s32 D_00005A04;
extern s32 D_00005F30;
extern s32 D_00005F38;
extern s32 D_00005F98;
extern s32 D_00005FE0;
extern s32 D_00006200;
extern s32 D_00006224;
extern s32 D_000065C0;
extern s32 D_000065C4;
extern s32 D_000067C4;
extern struct D_00007608_s D_00007608;
extern s32 D_00007B40;
extern s32 D_00008A40;
extern s32 D_00008A80;
extern s32 D_00008A90;
extern s32 D_00009AC0;
extern s32 D_00009B00;
extern s32 D_00009B40;
extern s32 D_00009B80;
extern s32 D_00009BC0;
extern s32 D_00009C00;
extern M2C_UNK D_00009C40;
extern s32 D_00009C70;
extern u8 D_00009C81;
extern u8 D_00009C82;
extern u8 D_00009C83;
extern u8 D_00009C84;
extern u16 D_00009C86;
extern s32 D_00009C8C;
extern s32 func_00004614;
extern M2C_UNK func_000048CC;
extern M2C_UNK func_000073FC;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32);
s32 SysMemForKernel_7B749390(s32, s32);
s32 func_00000250(s32 arg0);
void func_000003E8(void *arg0);
s32 func_00000440(struct Unk_func_00000440_0 *arg0);
s32 func_00000494(void *arg0, s32 arg1);
s32 func_000004E4(struct Unk_func_000004E4_0 *arg0, s32 arg1);
s32 func_00000620(void);
s32 func_0000065C(s32);
s32 func_000006EC(void);
s32 func_00000790(s32);
s32 func_000007FC(s32, s32);
s32 func_00000D28(void);
s32 func_00000E6C(void);
s32 func_00000F9C(s32);
s32 func_00001A4C(void *arg0);
void func_00002328(void);
void func_00002364(struct Unk_func_00002364_0 *arg0);
s32 func_00002374(void *arg0);
s32 func_00002D7C(void);
void func_00003AE8(void *arg0);
s32 func_00003BB4(struct Unk_func_00003BB4_0 *arg0);
s32 func_00004064(s32 arg0);
s32 func_00004DB0(void);
s32 func_00004E30(s32);
void func_00004FC4(void);
s32 func_00004FE8(void);
s32 func_00004FF4(void);
s32 func_00005000(void);
s32 func_0000500C(void);
s32 func_00005018(void);
u8 func_00005024(void);
u8 func_00005030(void);
s32 func_0000503C(void);
u16 func_00005048(void);
u8 func_00005054(void);
u8 func_00005060(void);
s32 func_0000506C(u32 arg0);
void func_000050CC(void *arg0);
s32 func_000054D4(s32 arg0);
s32 func_00005908(void *arg0);
s32 func_00005970(s32 arg0);
s32 func_000059DC(void);
s32 func_00005E10(void);
void func_00005E1C(s32 arg0, void *arg1, u32 arg2);
s32 func_0000664C(s32 arg0);
s32 func_00006720(s32 arg0);
s32 func_00007700(void);
s32 func_0000770C(void);
s32 func_00007718(void);
s32 func_00007724(void);
s32 func_00007730(void);
s32 func_0000773C(void);
s32 func_00007748(void);
s32 func_00007FC0(s32 arg0);
s32 func_00007FF0(void);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIsofsGetFileSystem(s32 arg0);
M2C_UNK sceKernelAssert(s32, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteFpl(s32);
M2C_UNK sceKernelDeleteHeap(s32);
s32 sceKernelFreeFpl(s32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
u32 sceUmd9660_driver_2C6C3F4C();
s32 sceUmd9660_driver_44EF600C();
s32 sceUmd9660_driver_C7CD9CE8();
M2C_UNK sceUmd9660_driver_DB1AC979(s32);
s32 sceUmdManRegisterInsertEjectUMDCallBack(M2C_UNK, M2C_UNK *, s32);
M2C_UNK sceUmdManUnRegisterInsertEjectUMDCallBack(M2C_UNK);
s32 sceUmdRegisterInsertEjectUMDCallBack(M2C_UNK *, s32);
M2C_UNK sceUmdUnRegisterInsertEjectUMDCallBack(s32);

#endif
