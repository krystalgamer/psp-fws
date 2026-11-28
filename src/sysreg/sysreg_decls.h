#ifndef SYSREG_DECLS_H
#define SYSREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 enabled; /* sysreg software interrupt enable mask */
    u32 next;    /* round-robin start bit for the dispatcher */
} SceSysregIntrState;
typedef char chk_SceSysregIntrState[(sizeof(SceSysregIntrState) == 8) ? 1 : -1];

extern s32 D_000025C0;
extern const float D_00002B04[];
extern M2C_UNK D_00002BD0;
extern float g_pllFrequency;
extern SceSysregIntrState g_sysregIntr;

s32 func_000000B4(void);
s32 func_000000BC(void);
s32 func_000000C4(void);
s32 module_reboot_before(void);
s32 module_start(void);
float sceClkcGetBusFrequency(void);
float sceClkcGetCpuFrequency(void);
s32 sceClkcSetBusFrequency(float freq);
s32 sceClkcSetCpuFrequency(float freq);
s32 sceKernelCallSubIntrHandler(s32 intrNum, s32 subIntrNum, s32 arg2, void *arg3);
void sceKernelCpuResumeIntr(s32);
void sceKernelCpuResumeIntrWithSync(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelEnableIntr(M2C_UNK);
s32 sceKernelRegisterIntrHandler(s32 intno, s32 no, void *handler, s32 arg3, void *opt);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceSysregEnd(void);
void sceSysregGpioIoDisable(s32 arg0);
void sceSysregGpioIoEnable(s32 arg0);
s32 sceSysregInit(void);
s32 sceSysregIntrEnd(void);
s32 sceSysregIntrInit(void);
s32 sceSysregKeyClkDisable(void);
s32 sceSysregKeyClkEnable(void);
s32 sceSysregKeyIoDisable(void);
s32 sceSysregKeyIoEnable(void);
float sceSysregPllGetBaseFrequency(void);
float sceSysregPllGetFrequency(void);
float sceSysregPllUpdateFrequency(void);
s32 sceSysregUsbAcquireIntr(s32 arg0);
s32 sysregIntrHandler(s32 intno, s32 unk, void *arg);
s32 sysregSetBusClkBit(u32 mask, s32 on);
s32 sysregSetClk1Bit(u32 mask, s32 on);
s32 sysregSetClk2Bit(u32 mask, s32 on);
s32 sysregSetGpioIoBit(u32 bit, s32 on);
s32 sysregSetIoBit(u32 mask, s32 on);
s32 sysregSetResetBit(u32 mask, s32 on);
s32 sysregSetUnk74Bit(u32 mask, s32 on);
s32 sysregSubIntrDisable(s32 arg0, s32 bit);
s32 sysregSubIntrEnable(s32 arg0, s32 bit);
s32 sysregSubIntrIsOccured(s32 arg0, s32 bit);
s32 sysregSubIntrResume(s32 arg0, s32 bit, s32 val);
s32 sysregSubIntrSuspend(s32 arg0, s32 bit, s32 *old);

#endif
