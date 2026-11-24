#ifndef MEMAB_DECLS_H
#define MEMAB_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002EA0;
extern s32 D_00003A78;

s32 module_start(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);

#endif
