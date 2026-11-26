#ifndef LIBUPDOWN_DECLS_H
#define LIBUPDOWN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000030D4;
extern M2C_UNK D_000037C1;
extern M2C_UNK D_00003A98;
extern s32 D_00003AC0;

M2C_UNK func_00000550(s32);
M2C_UNK func_00000564();
M2C_UNK func_00000D70();
s32 func_000017D0(void);
M2C_UNK func_0000191C(s32);
void func_000020A0(s32 arg0);
M2C_UNK *func_0000257C(void);
void func_0000258C(void);
u8 *func_00002600(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00002660(s32, s32);
u8 *func_00002B44(u8 *arg0, u8 *arg1);
s32 module_start(void);
s32 module_stop(void);
M2C_UNK sceKernelGetSystemTimeLow();
s32 sceUpdateDownloadAbort(void);
s32 sceUpdateDownloadSetDestCode(s32 arg0);
void sceUpdateDownloadSetServerRegion(s32 arg0);
void sceUpdateDownloadSetUrl(void);
s32 sceUpdateDownloadSetVersion(void);

#endif
