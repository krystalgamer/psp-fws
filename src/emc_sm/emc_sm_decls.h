#ifndef EMC_SM_DECLS_H
#define EMC_SM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00002930;
extern M2C_UNK D_00002970;
extern s32 D_00002FD0;
extern s32 D_00002FD4;
extern s32 D_00002FD8;

M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 func_00000F18(s32 arg0);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceNandWriteAccess(s32, s32, s32, s32, s32);
s32 sceNandResume(void);
s32 sceNandSuspend(void);
s32 sceNandReadAccess(s32, s32, s32, s32, s32);
M2C_UNK sceNandInit();
s32 sceNandLock(s32);
s32 sceNandGetPagesPerBlock(void);
void sceNandWritePagesRawAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNandGetTotalBlocks(void);
void sceNandReadPagesRawAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNandGetPageSize(void);
void sceNandReadPagesRawExtra(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);

#endif
