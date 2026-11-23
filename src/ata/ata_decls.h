#ifndef ATA_DECLS_H
#define ATA_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00004640;

s32 KDebugForKernel_24C32559(M2C_UNK);
s32 func_000022E0(void);
s32 func_000022EC(void);
void func_000022F4(void);
void func_00003FB0(void);
s32 func_0000408C(s32 *arg0);
void sceAta_driver_110D3739(s32 arg0, s32 arg1);
s32 sceAta_driver_52D9A4CA(s32);
s32 sceAta_driver_6FC42083(void);
void sceAta_driver_6FD8E2AB(void);
void sceAta_driver_7BBA095C(s32 arg0, M2C_UNK arg1);
s32 sceAta_driver_9AE67E14(s32 arg0);
s32 sceAta_driver_DCC8A89E(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);

#endif
