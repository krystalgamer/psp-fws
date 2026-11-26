#ifndef INIT_DECLS_H
#define INIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002450;
extern s32 D_00002620;
extern s32 D_00002644;

s32 InitForKernel_33D30F49(void);
s32 InitForKernel_7233B5BC(void);
s32 InitForKernel_7A2333AD(void);
s32 InitForKernel_A6E71B93(void);
s32 InitForKernel_C4F1BA33(void);
s32 InitForKernel_FD0F25AD(void);
s32 SysMemForKernel_A2A65F0E(M2C_UNK, M2C_UNK);
s32 func_00001208(void);
s32 func_00001284(void);
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
s32 sceKernelVolatileMemUnlock(s32);

#endif
