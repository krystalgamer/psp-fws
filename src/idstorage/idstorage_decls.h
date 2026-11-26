#ifndef IDSTORAGE_DECLS_H
#define IDSTORAGE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000021F0;
extern M2C_UNK D_00006630;
extern u8 D_00006644;
extern u8 D_00006645;

s32 module_reboot_before(void);
s32 module_start(void);
u8 sceIdStorage_driver_2D633688(void);
M2C_UNK sceIdStorage_driver_3AD32523();
M2C_UNK sceIdStorage_driver_AB129D20();
s32 sceIdStorage_driver_EB830733(void);
s32 sceIdStorage_driver_F77565B6(void);
s32 sceIdStorage_driver_FE51173D(void);
u8 sceIdStorage_driver_FEFA40C2(void);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);

#endif
