#ifndef VSHBRIDGE_DECLS_H
#define VSHBRIDGE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002D20;
extern M2C_UNK D_00003C00;

M2C_UNK sceKernelDipswSet();
M2C_UNK sceKernelDipswClear();
void sceLflashFatfmtStartFatfmt(void);
M2C_UNK sceKernelLoadExecBufferVSHUsbWlan();
M2C_UNK sceKernelLoadExecVSHDisc();
M2C_UNK sceKernelLoadExecVSHMs2();
M2C_UNK sceKernelLoadExecVSHMs1();
M2C_UNK sceKernelLoadExecFromHost();
M2C_UNK sceKernelLoadExecBufferVSHUsbWlanDebug();
M2C_UNK sceKernelLoadExecBufferVSHPlain();
M2C_UNK sceKernelLoadExecVSHMs3();
M2C_UNK sceKernelLoadExecBufferPlain();
M2C_UNK sceKernelLoadExecVSHDiscDebug();
M2C_UNK sceKernelLoadExecVSHDiscUpdater();
M2C_UNK sceKernelLoadExecBufferVSHFromHost();
M2C_UNK sceKernelExitVSHVSH();
M2C_UNK sceKernelLoadExecBufferPlain0();
M2C_UNK sceKernelLoadModuleVSHByID();
M2C_UNK sceKernelLoadModuleVSH();
M2C_UNK sceKernelLoadModuleBufferVSH();
void func_0000095C(void);
s32 func_000020F8(void);
M2C_UNK sceImposeSetStatus(M2C_UNK);
s32 sceKernelExitGame(void);
s32 sceKernelLoadExec(void *, void *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceUmdSetSuspendResumeMode(M2C_UNK);
void vshKernelLoadExecVSHMs3(void);
void vshKernelLoadExecVSHDiscDebug(void);
void vshKernelExitVSHVSH(void);
void vshKernelLoadModuleVSHByID(void);
void vshKernelLoadExecBufferVSHUsbWlanDebug(void);
void vshKernelLoadExecBufferVSHUsbWlan(void);
void vshKernelLoadExecBufferPlain(void);
void vshKernelLoadExecBufferVSHFromHost(void);
void vshKernelLoadExecBufferVSHPlain(void);
void vshKernelLoadExecVSHMs2(void);
void vshKernelLoadExecBufferPlain0(void);
void vshKernelExitVSH(void);
void vshKernelLoadModuleVSH(void);
void vshKernelLoadExecVSHDiscUpdater(void);
void vshKernelDipswSet(void);
void vshKernelLoadModuleBufferVSH(void);
void vshKernelDipswClear(void);
void vshKernelLoadExecFromHost(void);
void vshKernelLoadExec(void *arg0, void *arg1);
void vshKernelLoadExecVSHMs1(void);
void vshKernelLoadExecVSHDisk(void);
s32 _vshVshBridgeStart(void);
s32 _vshVshBridgeStop(void);

#endif
