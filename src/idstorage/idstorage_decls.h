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
u8 sceIdStorageIsReadOnly(void);
M2C_UNK sceIdStorageFlush();
M2C_UNK sceIdStorageInit();
s32 sceIdStorageGetLeafSize(void);
s32 sceIdStorageSuspend(void);
s32 sceIdStorageResume(void);
u8 sceIdStorageIsFormatted(void);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);

#endif
