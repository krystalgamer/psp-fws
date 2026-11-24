#ifndef IFHANDLE_152_DECLS_H
#define IFHANDLE_152_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00003AD8;
extern s32 D_00003ADC;
extern s32 D_00004378;
extern s32 D_0000437C;
extern s32 D_00004380;
extern s32 D_00004384;

s32 func_0000189C(void);
s32 module_start(void);
s32 module_stop(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateVpl(void *, s32, u32, u32, void *);
s32 sceKernelDeleteVpl(s32);
s32 sceNetIfhandle_driver_0C391E9F(u32 arg0);
void sceNetIfhandle_driver_0FB8AE0D(void);
void sceNetIfhandle_driver_16246B99(void *arg0, void *arg1);
s32 sceNetIfhandle_driver_29ED84C5(void);
s32 sceNetIfhandle_driver_62B20015(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceNetIfhandle_driver_C6D14282(void *arg0, s32 arg1);
s32 sceNetIfhandle_driver_D5AD6DEA(void *arg0);

#endif
