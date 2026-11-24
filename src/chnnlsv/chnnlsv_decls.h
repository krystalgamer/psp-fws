#ifndef CHNNLSV_DECLS_H
#define CHNNLSV_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002AD4;
extern s32 D_00002AD8;

s32 module_start(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);

#endif
