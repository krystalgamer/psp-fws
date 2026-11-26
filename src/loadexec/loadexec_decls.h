#ifndef LOADEXEC_DECLS_H
#define LOADEXEC_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void LoadExecForKernel_6D8D3A3A(s32 arg0, s32 arg1);
s32 LoadExecForUser_2AC9954B(s32);
s32 LoadExecForUser_D1FB50DC(s32);
s32 func_000017D8(void);
s32 func_00001934(s32, s32, s32, s32);
s32 func_00001A98(void);
s32 func_00001B64(s32, s32, s32, s32, s32);
void func_00001C70(s32 arg0);
s32 func_00001D6C(s32, s32, s32, s32, s32);
s32 func_00001FA8(s32, s32, s32, s32);
s32 func_00002190(s32, s32, s32, s32, s32);
s32 func_00002288(s32, s32);
s32 sceKernelExitGame(void);
void sceKernelExitVSHKernel(s32 arg0);
s32 sceKernelIsToolMode();
void sceKernelLoadExecBufferVSHPlain(s32 arg0, s32 arg1, s32 arg2);
void sceKernelLoadExecBufferVSHUsbWlan(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelLoadExecBufferVSHUsbWlanDebug(s32 arg0, s32 arg1, s32 arg2);
void sceKernelLoadExecVSHDisc(s32 arg0, s32 arg1);
s32 sceKernelLoadExecVSHDiscDebug(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHDiscUpdater(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHFromHost(s32 arg0, s32 arg1, s32 arg2);
void sceKernelLoadExecVSHMs1(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHMs2(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHMs3(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHMs4(s32 arg0, s32 arg1);
void sceKernelLoadExecVSHMs5(s32 arg0, s32 arg1);
void sceKernelReboot(void);

#endif
