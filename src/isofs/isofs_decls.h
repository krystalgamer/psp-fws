#ifndef ISOFS_DECLS_H
#define ISOFS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00007608_s {
    u8 pad0[0x1C];
    volatile s32 unk1C;
    volatile s32 unk20;
};

extern M2C_UNK D_00005F30;
extern s32 D_00005F98;
extern s32 D_00005FE0;
extern s32 D_00006200;
extern s32 D_00006224;
extern s32 D_000065C0;
extern s32 D_000065C4;
extern struct D_00007608_s D_00007608;
extern M2C_UNK func_000048CC;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32);
s32 SysMemForKernel_7B749390(s32, s32);
s32 func_00000440(void *arg0);
s32 func_000004E4(void *arg0, s32 arg1);
s32 func_00000620(void);
s32 func_000006EC(void);
s32 func_00000790(s32);
s32 func_000007FC(s32, s32);
void func_00002364(void *arg0);
s32 func_00003BB4(void *arg0);
s32 func_00004064(s32 arg0);
s32 func_00004DB0(void);
s32 func_00004E30(s32);
s32 func_00005970(s32 arg0);
s32 func_000059DC(void);
s32 sceIsofs_driver_19F9734D(s32 arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelFreeFpl(s32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceUmdMan_driver_4217E7F5(M2C_UNK);
s32 sceUmdMan_driver_BF8AED79(M2C_UNK, M2C_UNK *, s32);

#endif
