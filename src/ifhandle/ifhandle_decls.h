#ifndef IFHANDLE_DECLS_H
#define IFHANDLE_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00001330(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
void sceNetIfhandle_driver_16246B99(void *arg0, void *arg1);
s32 sceNetIfhandle_driver_C6D14282(void *arg0, s32 arg1);
s32 sceNetIfhandle_driver_D5AD6DEA(void *arg0);

#endif
