#ifndef PSPNET_ADHOC_MATCHING_DECLS_H
#define PSPNET_ADHOC_MATCHING_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00003DB0;
extern s32 D_00003DB4;
extern s32 D_00003DC4;
extern s32 D_00003DC8;

void func_0000113C(void *arg0, s32 *arg1);
void func_00002188(void *arg0);
void func_000023E8(void *arg0);
s32 func_00002420(void *arg0);
s32 func_0000256C(void *arg0, s32 arg1);
void func_00002648(void *arg0);
void func_00002794(void *arg0, s32 *arg1);
void func_000029F8(void *arg0, void *arg1);
void func_00002AF4(void *arg0, u32 arg1);
void func_00002B68(void *arg0);
void func_00002BB8(void *arg0);
s32 func_00002C08(void *arg0);
s32 func_00002C64(void *arg0);
s32 func_00002CC0(void *arg0);
void func_00002EE8(void);
s32 func_00002F24(void);
s32 func_00002F90(s32);
s32 func_00002FC4(void);
s32 func_00002FD4(void);
void func_000030C8(void);
void func_00003178(void *arg0);
s32 func_000031A0(void);
s32 sceKernelCancelAlarm(u32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteMbx(u32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(u32);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelWaitThreadEnd(u32, void *);
s32 sceNetAdhocPdpDelete(s32, s32);
s32 sceNetAdhocPdpSend(s32, void *, u32, void *, s32, u32, s32);
s32 sceNetAdhocSetSocketAlert(s32, s32);
s32 sceNetFreeThreadinfo(u32);
M2C_UNK sceNet_lib_57CC57DA(void *, M2C_UNK, M2C_UNK);

#endif
