#ifndef INTERRUPTMAN_DECLS_H
#define INTERRUPTMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00003E00_s {
    u8 pad0[0x1AC];
    volatile s32 unk1AC;
    volatile s32 unk1B0;
    u8 pad1B4[0xECC];
    volatile s32 unk1080;
    volatile s32 unk1084;
};

extern s32 D_00003910;
extern s32 D_00003950;
extern s32 D_00003AA8;
extern s32 D_00003AAC;
extern s32 D_00003AB0;
extern s32 D_00003B0C;
extern struct D_00003E00_s D_00003E00;
extern s32 D_00003F6C;
extern s32 D_00003F8C;
extern s32 D_00003F90;
extern s32 D_00003F94;
extern s32 D_00003F98;
extern s32 D_00003F9C;
extern s32 D_00003FA0;
extern s32 D_00004ABC;
extern s32 D_00004E7C;

s32 InterruptManagerForKernel_53991063(void);
void RegisterSubIntrruptMonitor(s32 arg0, s32 arg1);
void ReleaseSubIntrruptMonitor(void);
s32 *QueryInterruptManCB(void);
s32 QueryIntrHandlerInfo(void);
void RegisterContextHooks(s32 arg0, s32 arg1);
void ReleaseContextHooks(void);
s32 _sceKernelGetCpuClockCounterHigh(void);
s32 _sceKernelGetCpuClockCounterLow(void);
s32 func_00000000(s32 arg0);
s32 func_00000274(void);
void func_00000348(s32 arg0);
s32 func_00002FDC(s32 arg0);
s32 func_00002FE4(void);
s32 func_000030AC(s32 arg0);
s32 func_000030B4(void);
s32 func_000031AC(s32 arg0);
s32 func_0000340C(s32 arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateHeap(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
void sceKernelDisableIntr(s32 arg0);
M2C_UNK sceKernelFreeHeapMemory(s32, s32);
s32 sceKernelGetInterruptExitCount(void);
s32 sceKernelGetIntrSyscallFrame(void);
s32 sceKernelIsIntrContext(void);
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1);
s32 sceKernelSuspendIntr(s32, s32);

#endif
