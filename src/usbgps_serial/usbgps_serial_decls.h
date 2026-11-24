#ifndef USBGPS_SERIAL_DECLS_H
#define USBGPS_SERIAL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00005210;
extern M2C_UNK D_00005260;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, s32);
s8 *func_00000000(s8 *arg0, s32 arg1);
s32 func_00000F28(s32);
s32 func_00001504(s32 arg0);
void func_000022CC(void);
void func_000022E8(void);
s32 func_00002304(void);
s32 func_00002928(void);
s32 func_00002D4C(void);
s32 func_00002D94(void);
s32 func_00002E50(void);
s32 func_00002EB8(void);
s32 func_00002EC0(s32 *arg0);
s32 func_00004754(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceUsbBus_driver_B1644BE7(M2C_UNK *);
s32 sceUsbBus_driver_C1E2A540(M2C_UNK *);
s32 sceUsbGps_driver_268F95CA(u32 arg0);

#endif
