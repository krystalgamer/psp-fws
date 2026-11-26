#ifndef CLOCKGEN_DECLS_H
#define CLOCKGEN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000930;
extern s32 D_0000093C;

s32 func_00000318(void);
s32 func_00000414(void);
s32 func_0000041C(void);
s32 func_00000468(s32 arg0);
M2C_UNK func_00000614(M2C_UNK, M2C_UNK);
s32 func_000006C0(s32, s32);
s32 module_reboot_before(void);
s32 module_start(void);
void sceClockgenAudioClkDisable(void);
void sceClockgenAudioClkEnable(void);
s32 sceClockgenEnd(void);
s32 sceClockgenGetRevision(void);
s32 sceClockgenInit(void);
void sceClockgenLeptonClkDisable(void);
void sceClockgenLeptonClkEnable(void);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSignalSema(s32, s32);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);

#endif
