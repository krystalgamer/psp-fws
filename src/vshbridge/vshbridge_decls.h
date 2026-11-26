#ifndef VSHBRIDGE_DECLS_H
#define VSHBRIDGE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002D20;
extern M2C_UNK D_00003C00;

s32 _vshVshBridgeStart(void);
s32 _vshVshBridgeStop(void);
void func_0000095C(void);
s32 func_000020F8(void);
M2C_UNK sceImposeSetStatus(M2C_UNK);
M2C_UNK sceKernelDipswClear();
M2C_UNK sceKernelDipswSet();
s32 sceKernelExitGame(void);
M2C_UNK sceKernelExitVSHVSH();
s32 sceKernelLoadExec(void *, void *);
M2C_UNK sceKernelLoadExecBufferPlain();
M2C_UNK sceKernelLoadExecBufferPlain0();
M2C_UNK sceKernelLoadExecBufferVSHFromHost();
M2C_UNK sceKernelLoadExecBufferVSHPlain();
M2C_UNK sceKernelLoadExecBufferVSHUsbWlan();
M2C_UNK sceKernelLoadExecBufferVSHUsbWlanDebug();
M2C_UNK sceKernelLoadExecFromHost();
M2C_UNK sceKernelLoadExecVSHDisc();
M2C_UNK sceKernelLoadExecVSHDiscDebug();
M2C_UNK sceKernelLoadExecVSHDiscUpdater();
M2C_UNK sceKernelLoadExecVSHMs1();
M2C_UNK sceKernelLoadExecVSHMs2();
M2C_UNK sceKernelLoadExecVSHMs3();
M2C_UNK sceKernelLoadModuleBufferVSH();
M2C_UNK sceKernelLoadModuleVSH();
M2C_UNK sceKernelLoadModuleVSHByID();
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
void sceLflashFatfmtStartFatfmt(void);
M2C_UNK sceUmdSetSuspendResumeMode(M2C_UNK);
void vshKernelDipswClear(void);
void vshKernelDipswSet(void);
void vshKernelExitVSH(void);
void vshKernelExitVSHVSH(void);
void vshKernelLoadExec(void *arg0, void *arg1);
void vshKernelLoadExecBufferPlain(void);
void vshKernelLoadExecBufferPlain0(void);
void vshKernelLoadExecBufferVSHFromHost(void);
void vshKernelLoadExecBufferVSHPlain(void);
void vshKernelLoadExecBufferVSHUsbWlan(void);
void vshKernelLoadExecBufferVSHUsbWlanDebug(void);
void vshKernelLoadExecFromHost(void);
void vshKernelLoadExecVSHDiscDebug(void);
void vshKernelLoadExecVSHDiscUpdater(void);
void vshKernelLoadExecVSHDisk(void);
void vshKernelLoadExecVSHMs1(void);
void vshKernelLoadExecVSHMs2(void);
void vshKernelLoadExecVSHMs3(void);
void vshKernelLoadModuleBufferVSH(void);
void vshKernelLoadModuleVSH(void);
void vshKernelLoadModuleVSHByID(void);

#endif
