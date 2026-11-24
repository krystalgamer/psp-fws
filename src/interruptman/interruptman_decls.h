#ifndef INTERRUPTMAN_DECLS_H
#define INTERRUPTMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00003E00_s {
    u8 pad0[0x1AC];
    volatile s32 unk1AC;
    volatile s32 unk1B0;
    u8 pad1B4[0xECC];
    volatile s32 unk1080;
    volatile s32 unk1084;
};

extern struct D_00003E00_s D_00003E00;
extern s32 D_00003F94;
extern s32 D_00003F98;
extern s32 D_00003F9C;
extern s32 D_00003FA0;
extern s32 D_00004E7C;

M2C_UNK *InterruptManagerForKernel_00B6B0F3(void);
s32 InterruptManagerForKernel_20804B41(void);
void InterruptManagerForKernel_2CD783A1(s32 arg0, s32 arg1);
s32 InterruptManagerForKernel_2DC9709B(void);
void InterruptManagerForKernel_55242A8B(void);
s32 InterruptManagerForKernel_750E2507(s32, s32);
void InterruptManagerForKernel_7A05D976(s32 arg0, s32 arg1);
void InterruptManagerForKernel_7EF7500F(void);
void InterruptManagerForKernel_D774BA45(s32 arg0);
s32 InterruptManagerForKernel_E9E652A9(void);
s32 InterruptManager_D2E8363F(void);
s32 func_00002FDC(s32 arg0);
s32 func_00002FE4(void);
s32 func_000030AC(s32 arg0);
s32 func_000030B4(void);
s32 func_000031AC(s32 arg0);
s32 func_0000340C(s32 arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1);

#endif
