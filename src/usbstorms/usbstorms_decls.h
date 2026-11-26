#ifndef USBSTORMS_DECLS_H
#define USBSTORMS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002A14;
extern s32 D_00002D00;
extern s32 D_00002D20;
extern s32 D_00002DB0;
extern s32 D_00002DD0;
extern s32 D_00002E10;
extern s32 D_00003460;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *);
s32 func_00003944(s32 arg0, s32 arg1);
s32 func_00004380(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceRegCloseCategory(s32);
M2C_UNK sceRegCloseRegistry(s32);
s32 sceUsbstor_internal_2CAFEFF1(M2C_UNK *);
s32 sceUsbstor_internal_489E6BF1(M2C_UNK *);

#endif
