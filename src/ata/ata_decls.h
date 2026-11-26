#ifndef ATA_DECLS_H
#define ATA_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000046A8_s {
    s32 unk0;
    s32 unk4;
};

struct D_00004700_s {
    u8 pad0[0x4];
    volatile s32 unk4;
    volatile s32 unk8;
    volatile s32 unkC;
    volatile s32 unk10;
    volatile s32 unk14;
    volatile s32 unk18;
};

struct Unk_func_0000277C_0 {
    u8 pad0[0x1C];
    void * unk1C;
};

struct Unk_func_0000277C_1 {
    u8 pad0[0xC];
    s32 unkC;
};

extern M2C_UNK D_00003F1C;
extern s32 D_00004250;
extern s32 D_00004260;
extern s32 D_00004280;
extern s32 D_000042A0;
extern s32 D_000042E0;
extern s32 D_00004324;
extern s32 D_00004328;
extern s32 D_00004370;
extern s32 D_00004640;
extern struct D_000046A8_s D_000046A8;
extern s32 D_000046E8;
extern s32 D_000046EC;
extern struct D_00004700_s D_00004700;
extern s32 D_00004728;
extern M2C_UNK func_000018B8;
extern M2C_UNK func_00003D3C;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_00000000(s32);
void func_00001274(u32 arg0);
s32 func_000012C8(void);
void func_000012D4(s32 arg0);
s32 func_000020F8(void *arg0, void *arg1, s32 arg2);
s32 func_00002120(void);
s32 func_0000212C(void);
void func_00002134(void);
M2C_UNK *func_00002160(void);
s32 func_000022E0(void);
s32 func_000022EC(void);
void func_000022F4(void);
s32 func_0000277C(struct Unk_func_0000277C_0 *arg0, struct Unk_func_0000277C_1 *arg1, s32 arg2);
s32 func_000033D4(void);
s32 func_0000341C(void);
s32 func_000034CC(void);
s32 func_000036FC(void);
s32 func_00003704(void);
s32 func_0000370C(void);
s32 func_00003714(void);
s32 func_0000371C(void);
void func_00003C58(void);
void func_00003CA0(u32 arg0);
void func_00003CF4(s32 arg0);
s32 func_00003D30(void);
void func_00003FB0(void);
void func_00003FF0(u32 arg0);
void func_00004044(s32 arg0);
s32 func_00004080(void);
s32 func_0000408C(s32 *arg0);
s32 module_start(void);
s32 *sceAtaAhbGetAtaBlock(void);
s32 sceAtaAhbGetEventFlag(void);
void sceAtaAhbInit(void);
void sceAtaAhbSetAtaBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void sceAtaAhbTerm(void);
void sceAtaClearDriveStat(s32 arg0, s32 arg1);
void sceAtaClearIntrStateFlag(s32 arg0);
s32 *sceAtaGetAtaCallBack(void);
s32 sceAtaGetAtaDrive(s32);
s32 sceAtaGetDriveStat(s32 arg0);
s32 sceAtaGetIntrFlag(void);
s32 sceAtaGetIntrStateFlag(void);
s32 sceAtaIsDvdDrive(void);
s32 sceAtaIsNormalDriveStat(void);
s32 sceAtaIsUmdDrive(void);
void sceAtaSetDriveStat(s32 arg0, s32 arg1);
void sceAtaSetIntrFlag(s32 arg0);
void sceAtaSetIntrStateFlag(s32 arg0);
void sceAta_driver_6FD8E2AB(void);
s32 sceAta_driver_AC84FF0A(void);
s32 sceAta_driver_ACFF7CB5(void);
void sceAta_driver_B5982381(void);
s32 sceKernelCancelAlarm(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDipsw(M2C_UNK);
u32 sceKernelDipswAll();
M2C_UNK sceKernelDisableIntr(M2C_UNK);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelSetAlarm(u32, s32, void *);

#endif
