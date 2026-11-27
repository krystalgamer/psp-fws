#ifndef INIT_DECLS_H
#define INIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002450;
extern s32 D_00002620;
extern s32 D_00002644;

s32 sceKernelShowIntrHandlerInfo(void);
s32 sceKernelShowIntrMaskTime(void);
s32 func_00001208(void);
s32 func_00001284(void);
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
s32 sceKernelApplicationType(void);
s32 sceKernelFillFreeBlock(M2C_UNK, M2C_UNK);
s32 sceKernelInitApitype(void);
s32 sceKernelInitFileName(void);
s32 sceKernelStartIntrLogging(void);
s32 sceKernelVolatileMemUnlock(s32);

#endif
