#ifndef USBSTORBOOT_DECLS_H
#define USBSTORBOOT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00001B60;
extern M2C_UNK D_00001F00;
extern M2C_UNK D_00001F20;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *);
void func_00002474(void);
s32 func_00002490(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
M2C_UNK sceSemawm_51E51869();
M2C_UNK sceSemawm_77C42467();
s32 sceUsbstor_internal_489E6BF1(M2C_UNK *);

#endif
