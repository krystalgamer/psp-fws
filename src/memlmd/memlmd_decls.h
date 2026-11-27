#ifndef MEMLMD_DECLS_H
#define MEMLMD_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002B44;

s32 func_0000006C(s32, s32, s32, s32);
s32 func_00000134(s32, s32, s32, s32);
s32 func_00001218(s32, s32);
s32 func_00001270(void);
s32 func_0000133C(void);
s32 func_000013C8(s32 ev_id);
s32 func_00001414(void);
s32 func_0000145C(void);
void memlmd_6A811217(s32 arg0, s32 arg1, s32 arg2);
void memlmd_7CF1CD3E(s32 arg0, s32 arg1, s32 arg2);
void module_reboot_before(void);
void module_start(void);
s32 sceKernelReleaseIntrHandler(s32);
s32 sceKernelUnregisterSysEventHandler(void *);
void sceUtilsGetLoadModuleABLength(s32 arg0, s32 arg1, s32 arg2);
void sceUtilsGetLoadModuleABLengthByPolling(s32 arg0, s32 arg1, s32 arg2);

#endif
