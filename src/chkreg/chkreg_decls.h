#ifndef CHKREG_DECLS_H
#define CHKREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern u8 *D_00000850;
extern s32 D_00000880;
extern s32 D_00000884;
extern s32 D_00000EC0;

s32 sceKernelCreateSema(void *, u32, s32, s32, void *);

#endif
