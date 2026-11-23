#ifndef MODULEMGR_DECLS_H
#define MODULEMGR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern u32 D_00007160;

void *LoadCoreForKernel_FB8AE27D();
s32 ModuleMgrForKernel_25E1F458(void);
s32 ModuleMgrForKernel_54D9E02E(void);
s32 ModuleMgrForKernel_61EC6AB0(void);
s32 ModuleMgrForKernel_74690AEB(void);
s32 ModuleMgrForKernel_F80F3C96(void);
void func_000004C0(void *arg0, void *arg1);
s32 func_0000552C(s32);
void module_reboot_before(void);
s32 sceKernelSuspendThread(u32);
s32 syslib_ADF12745(void);

#endif
