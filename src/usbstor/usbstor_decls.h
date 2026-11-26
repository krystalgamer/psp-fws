#ifndef USBSTOR_DECLS_H
#define USBSTOR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002724;
extern s32 D_000029A8;
extern s32 D_000029C8;
extern s32 D_000029F0;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *);
void func_00001A40(void);
void func_00001BB0(void);
void func_00001BE4(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUsbbdRegister(M2C_UNK *);
s32 sceUsbbdUnregister(M2C_UNK *);

#endif
