#ifndef IOFILEMGR_DECLS_H
#define IOFILEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 IoFileMgrForKernel_BD17474F(void *arg0);
void IoFileMgrForKernel_CB05F8D6(s32 arg0, s32 arg1, s32 arg2);
s32 func_000033DC(void);
s32 func_00003570(s32, s32, s32, s32);
s32 func_00003748(s32, s32, s32);
s32 func_00003AD4(s32, s32, s32, s32);
s32 func_00003C34(s32, s32, s32, s32);
s32 func_00004114(s32, s32, s32);
s32 func_00004374(s32, s32, s32, s32);
s32 func_0000467C(void);
s32 sceIoChdir(void *arg0);
s32 sceIoChstat(void *arg0, void *arg1, u32 arg2);
s32 sceIoClose(u32 arg0);
s32 sceIoCloseAsync(u32 arg0);
s32 sceIoGetstat(void *arg0, void *arg1);
s32 sceIoMkdir(void *arg0, s32 arg1);
s32 sceIoPollAsync(u32 arg0, void *arg1);
s32 sceIoRead(u32 arg0, void *arg1, u32 arg2);
s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2);
s32 sceIoRmdir(void *arg0);
s32 sceIoWaitAsync(u32 arg0, void *arg1);
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1);
s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2);
s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2);

#endif
