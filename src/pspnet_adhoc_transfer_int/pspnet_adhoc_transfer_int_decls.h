#ifndef PSPNET_ADHOC_TRANSFER_INT_DECLS_H
#define PSPNET_ADHOC_TRANSFER_INT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00000D58_0 {
    u8 pad0[0x20];
    s32 unk20;
};

extern s32 D_00002410;
extern s32 D_00002424;

void func_0000043C(s32 arg0);
s32 func_00000464(u32 arg0);
void func_000004A8(void);
s32 func_000004E4(s32);
void func_00000558(void *arg0);
s32 func_00000D58(struct Unk_func_00000D58_0 *arg0);
s32 func_00001984(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3);
s32 sceKernelCreateVpl(void *, s32, u32, u32, void *);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceNetAdhocSetSocketAlert(s32, s32);
M2C_UNK sceNet_lib_EF097716(s32, M2C_UNK, s32);

#endif
