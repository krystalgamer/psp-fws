#ifndef LFTV_PLUGIN_DECLS_H
#define LFTV_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000031AC;
extern M2C_UNK D_0000329C;
extern s8 D_000033F9;
extern s32 D_000033FC;
extern s32 D_00003410;
extern M2C_UNK D_0000343C;
extern M2C_UNK func_000018E0;

s32 func_00000AC0(s32 arg0);
M2C_UNK *func_00000B90(void);
void func_00000C54(void);
s32 func_00000D28(void);
s32 func_000012C0(void);
void func_0000186C(void);
s32 func_000020F8(void);
M2C_UNK func_000021FC(M2C_UNK, M2C_UNK);
void func_000022C4(void);
void func_000022E4(void);
void func_00002334(void);
void func_0000241C(s32 arg0, s32 arg1);
void func_00002500(s32 arg0, s32 arg1);
M2C_UNK func_00002580();
M2C_UNK func_000027BC(s32, s32, s32);
M2C_UNK func_00002868(s32, s32, s32);
M2C_UNK func_00002CD8();
s32 module_stop(void);
M2C_UNK sceKernelDelayThread(M2C_UNK);
M2C_UNK sceKernelPowerLock(M2C_UNK);
M2C_UNK sceKernelPowerUnlock(M2C_UNK);
M2C_UNK scePaf_1A45C860(s32, M2C_UNK *);
void *scePaf_338C3774(s32, M2C_UNK);
s32 scePaf_CA79D58B(s32);
s32 scePaf_D4FAE7D0(M2C_UNK *);
s32 scePaf_FD4C9F47(s32);
M2C_UNK sceVshCommonGui_72E652AA(s32);

#endif
