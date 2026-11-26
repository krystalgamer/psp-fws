#ifndef MEDIAMAN_DECLS_H
#define MEDIAMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00000FA0;
extern s32 D_00000FD0;
extern s32 D_00000FD4;
extern s32 D_00000FD8;
extern s32 D_00000FDC;
extern s32 D_00001000;
extern s32 D_00001004;
extern s32 D_000012F8;
extern s32 D_0000132C;
extern M2C_UNK D_00002980;
extern s32 D_00002AE0;
extern s32 D_00002AF0;
extern s32 D_00002B00;
extern s32 D_00002B10;
extern s32 D_00002B30;
extern s32 D_00002B40;
extern s32 D_00002B50;
extern s32 D_00002B60;
extern s32 D_00002B70;
extern s32 D_00002B90;
extern M2C_UNK D_00002BC0;

s32 func_00000000(s32);
s32 func_00000138(void);
s32 func_0000042C(void);
void func_00001448(s32 arg0);
void func_00001524(s32 arg0);
void func_000018DC(s32 arg0);
s32 func_000018E8(void);
void func_000018F4(s32 arg0);
s32 func_00001928(void);
s32 func_00001934(void);
s32 func_00001940(void);
void func_00001C60(void);
s32 func_00001C98(void);
void func_00001CA4(void);
s32 func_00001CDC(void);
s32 module_start(void);
s32 sceGpioPortRead();
M2C_UNK sceGpioPortSet(M2C_UNK);
M2C_UNK sceGpioSetIntrMode(M2C_UNK, M2C_UNK);
s32 sceGpioSetPortMode(M2C_UNK, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUmdAssertLeptonWakeup(void);
void sceUmdClearDriveStatus(s32 arg0);
s32 sceUmdDisableUMDDetectIntr(void);
s32 sceUmdEnableUMDDetectIntr(void);
s32 sceUmdGetAssignedFlag(void);
s32 sceUmdGetDetectUMDCallBackId(void);
s32 sceUmdGetDiscInfo(s32 *arg0);
void sceUmdGetDriveStat(void);
M2C_UNK sceUmdGetDriveStatus();
s32 sceUmdGetSuspendResumeMode(void);
s32 sceUmdGetUserEventFlagId(void);
void sceUmdSetAssignedFlag(s32 arg0);
s32 sceUmdSetDeactivateData(s32 arg0, s32 arg1);
void sceUmdSetDetectUMDCallBackId(s32 arg0);
void sceUmdSetDriveStatus(u32 arg0);
void sceUmdSetErrorStatus(s32 arg0);
void sceUmdSetSuspendResumeMode(s32 arg0);
void sceUmdUnRegisterActivateDVDCallBack(void);
void sceUmdUnRegisterDeactivateCallBack(void);
s32 sceUmdUnRegisterGetUMDInfoCallBack(void);
s32 sceUmdUnRegisterGetUMDPowerOnOffCallBack(void);
s32 sceUmdUnRegisterMediaPresentCallBack(void);
s32 sceUmdUnRegisterPowerOnOffUMDCallBack(void);
s32 sceUmdUnRegisterUMDCallBack(s32 arg0);
void sceUmdUnuseUMDDetectIntr(void);
void sceUmdUseUMDDetectIntr(void);
s32 sceUmd_0F7E578A(void);
s32 sceUmd_F8FD25E7(void);
s32 strcmp(s32, M2C_UNK *);

#endif
