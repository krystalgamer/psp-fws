#ifndef RINIT_DECLS_H
#define RINIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00001140(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000011E4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00001288(void);
s32 func_00001340(s32 arg0);
s32 func_00001530(void);
s32 func_000015AC(void);
s32 func_000016B4(void);
s32 func_000016BC(void);
void func_000016C4(void);
void func_000016E0(void);
void func_000016FC(void);
s32 func_000073B8(s32, s32);
void func_00007470(void *arg0, void *arg1);
s32 func_000076CC(s32 arg0);
void func_00007804(s32 arg0, s32 arg1);
s32 sceIoClose(s32);
M2C_UNK sceIoOpen();
s32 sceIoRead(s32, M2C_UNK, M2C_UNK);
s32 sceIoWrite(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceKernelLibcClock();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelStderr();
s32 sceKernelStdin();
s32 sceKernelStdout();

#endif
