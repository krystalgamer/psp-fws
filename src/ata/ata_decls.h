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

extern s32 D_00004640;
extern struct D_000046A8_s D_000046A8;
extern s32 D_000046E8;
extern s32 D_000046EC;
extern struct D_00004700_s D_00004700;
extern s32 D_00004728;

s32 KDebugForKernel_24C32559(M2C_UNK);
s32 func_000022E0(void);
s32 func_000022EC(void);
void func_000022F4(void);
s32 func_0000277C(struct Unk_func_0000277C_0 *arg0, struct Unk_func_0000277C_1 *arg1, s32 arg2);
void func_00003FB0(void);
void func_00003FF0(u32 arg0);
void func_00004044(s32 arg0);
s32 func_00004080(void);
s32 func_0000408C(s32 *arg0);
void sceAta_driver_110D3739(s32 arg0, s32 arg1);
s32 sceAta_driver_1C29566B(void);
s32 sceAta_driver_52D9A4CA(s32);
void sceAta_driver_68DEA2FF(s32 arg0);
s32 sceAta_driver_6FC42083(void);
void sceAta_driver_6FD8E2AB(void);
void sceAta_driver_7BBA095C(s32 arg0, M2C_UNK arg1);
void sceAta_driver_7F551D66(s32 arg0);
s32 sceAta_driver_9AE67E14(s32 arg0);
void sceAta_driver_AE100256(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void sceAta_driver_B5982381(void);
void sceAta_driver_B7F5B2CA(s32 arg0);
s32 sceAta_driver_D8E525CB(void);
s32 sceAta_driver_DCC8A89E(void);
M2C_UNK *sceAta_driver_F76A5B9C(void);
M2C_UNK *sceAta_driver_FCF939D9(void);
s32 sceKernelCancelAlarm(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelSetAlarm(u32, s32, void *);

#endif
