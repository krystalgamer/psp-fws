#ifndef NP9660_DECLS_H
#define NP9660_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00004CA0;
extern s32 D_00004CA4;
extern s32 D_00004CA8;
extern s32 D_00004CAC;
extern s32 D_00004CB0;
extern s32 D_00004CD4;
extern s32 D_00004CEC;
extern s32 D_00004CF0;
extern s32 D_00004CF4;
extern M2C_UNK D_00004CF8;
extern s32 D_00004D08;
extern s32 D_00004D0C;
extern s32 D_00004D10;
extern s32 D_00004D14;
extern M2C_UNK D_00004D1C;
extern s32 D_00004DD8;
extern s32 D_00004DE0;

s32 func_00000718(void);
s32 func_000007C8(void);
void func_000007D4(s32 arg0);
void func_000007E0(s32 arg0);
s32 func_00000F88(void);
s32 func_000013B4(void);
void func_00001874(s32 arg0);
s32 func_000018A8(void);
s32 func_000018B4(void);
s32 func_000018BC(void);
s32 func_000018DC(s32 arg0);
s32 func_00001914(void);
s32 func_00001A78(void);
void func_00002114(void);
s32 func_000022CC(void);
s32 func_00002474(void);
s32 func_00002528(void);
s32 func_00002578(void);
s32 func_00002580(void *arg0);
s32 func_00002634(void);
s32 func_00002674(void);
s32 func_000042F8(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 sceKernelCancelEventFlag(s32, u32, void *);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteFpl(s32);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelGetThreadmanIdType(s32);
s32 sceKernelNotifyCallback(s32, s32);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceUmd9660_driver_2C6C3F4C(void);
s32 sceUmd9660_driver_44EF600C(void);
s32 sceUmd9660_driver_C7CD9CE8(void);
s32 sceUmdCancelWaitDriveStat(void);
s32 sceUmdMan_driver_2787078E(void);
s32 sceUmdMan_driver_4217E7F5(s32 arg0);
s32 sceUmdMan_driver_60933ECD(void);
s32 sceUmdReplacePermit(void);
s32 sceUmdReplaceProhibit(void);
s32 sceUmdWaitDriveStat(u32 arg0);
s32 sceUmd_71F81482(void);
void sceUmd_9B22AED7(s32 arg0);
s32 sceUmd_D45D1FE6(void);

#endif
