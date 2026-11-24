#ifndef FATMSMOD_DECLS_H
#define FATMSMOD_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00013798_0_FA78 {
    u8 pad0[0x40];
    u32 unk40;
};

struct Unk_func_0000E3C0_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x10];
    s32 unk18;
};

struct Unk_func_0000E3D8_0 {
    u32 unk0;
    u32 unk4;
    u8 pad8[0x18];
    s32 unk20;
    u8 pad24[0x2];
    u16 unk26;
};

struct Unk_func_00013044_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_000135A8_0 {
    s8 unk0;
    s8 unk1;
};

struct Unk_func_00013798_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0xFA54];
    struct Unk_Unk_func_00013798_0_FA78 *unkFA78;
    u8 padFA7C[0x48];
    s32 unkFAC4;
    u8 padFAC8[0x18];
    s32 unkFAE0;
};

extern M2C_UNK D_0002411C;
extern s32 D_0002B568;
extern s32 D_0002B5CC;
extern M2C_UNK D_0002BAA0;
extern s32 D_0002BAC0;
extern s8 D_0002D730;
extern s32 D_0002DA00;
extern s32 D_0002DC10;

M2C_UNK IoFileMgrForKernel_C7F35804(s32);
M2C_UNK func_00000020();
void func_00000048(void);
M2C_UNK func_00000134();
M2C_UNK func_00000264();
M2C_UNK func_00000BFC();
M2C_UNK func_00000CE4();
M2C_UNK func_00000E00();
M2C_UNK func_00000EF8();
M2C_UNK func_00001CD0();
s32 func_000026FC(void);
M2C_UNK func_00002708();
M2C_UNK func_00002880();
s32 func_00003CD8(void);
void func_0000475C(void);
void func_00004778(void);
void func_000047C8(void);
void func_000047E4(void);
void func_00004800(void);
void func_0000481C(void);
void func_00004950(void);
void func_00004A58(void);
void func_00004A74(void);
void func_000053FC(void);
s32 func_00006724(void);
s8 *func_000067D4(void);
s32 func_000067E0(void);
s32 func_000067EC(void);
s32 func_00006960(void);
s32 func_000079A8(s8 *arg0);
s32 func_0000E3C0(struct Unk_func_0000E3C0_0 *arg0, s32 arg1);
s32 func_0000E3D8(struct Unk_func_0000E3D8_0 *arg0, u32 arg1);
s32 func_00013044(struct Unk_func_00013044_0 *arg0);
void func_000135A8(struct Unk_func_000135A8_0 *arg0);
void func_00013654(void *arg0);
void func_00013798(struct Unk_func_00013798_0 *arg0, u32 arg1);
void func_000149E0(void);
s32 func_0002214C(s32 arg0);
s32 func_0002233C(s32 arg0);
s8 func_00022344(s8 arg0);
s32 sceFatMS_driver_BCB9DEDB(void);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDeleteFpl();
s32 sceKernelDeleteMbx(s32);

#endif
