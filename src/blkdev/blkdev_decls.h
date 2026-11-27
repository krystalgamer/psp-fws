#ifndef BLKDEV_DECLS_H
#define BLKDEV_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000F10;
extern s32 D_00000F30;
extern s32 *D_00001000[];

s32 module_start(void);
M2C_UNK sceBLKInit();
s32 sceBLKUnRegister(s32 *, s32);
s32 sceKernelDeleteHeap(s32);
s32 sceKernelDeleteSema(s32);

#endif
