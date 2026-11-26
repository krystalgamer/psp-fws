#ifndef IMPOSE_DECLS_H
#define IMPOSE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_0000F334;
extern u32 *D_0000F510;
extern M2C_UNK D_0000F514;
extern s32 D_000102A4;
extern s32 D_00012884;
extern u32 *D_00018648;

void func_00000000(u32 arg0);
s32 func_000004C4(void);
s32 func_0000070C(void);
s32 func_000012B8(void);
void func_000012E4(void);
s32 func_00001324(s32, s32, s32, s32);
void func_00001E08(s32 arg0);
void func_00001E78(s32 arg0);
s32 func_000025F0(s32);
void func_00002B54(s32 arg0);
void func_00002BB4(s32 arg0);
void func_00002D30(s32 arg0);
void func_00002DC0(s32 arg0);
void func_00002E2C(s32 arg0);
s32 func_00002E3C(s32);
void func_000035EC(s32 arg0);
void func_00003658(s32 arg0);
s32 func_000043F8(s32, s32);
s32 func_000044B8(s32);
s32 func_0000478C(s32);
s32 func_000047EC(s32, s32);
s32 func_000048AC(s32);
s32 func_00004954(s32);
s32 module_reboot_before(void);
s32 sceAudioRoutingGetMode(void);
s32 sceAudioRoutingGetVolumeMode(void);
s32 sceAudioRoutingSetMode(s32 arg0);
s32 sceAudioRoutingSetVolumeMode(s32 arg0);
M2C_UNK sceCodec_driver_20C61103(s32);
s32 sceDisplaySetHoldMode(s32);
s32 sceDisplaySetMode(s32, s32, s32);
s32 sceImposeSetUMDPopup(s32 arg0);
s32 sceImpose_9BA61B49(void);
void sceImpose_driver_116DDED6(s32 arg0, s32 arg1, s32 arg2);
s32 sceImpose_driver_1B6E3400(void);
s32 sceImpose_driver_5595A71A(s32 arg0);
s32 sceImpose_driver_7084E72C(void);
s32 sceImpose_driver_9C8C6C81(s32);
s32 sceImpose_driver_B415FC59(void);
s32 sceImpose_driver_C7E36CC7(void);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteThread(s32);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelSetEventFlag(u32, u32);
s32 sceKernelWaitThreadEnd(s32, void *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
s32 syslib_ADF12745(s32 arg0);

#endif
