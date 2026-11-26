#ifndef DMACPLUS_DECLS_H
#define DMACPLUS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00004034_s {
    volatile s32 unk0;
    volatile s32 unk4;
};

struct D_0000404C_s {
    s16 unk0;
    volatile u16 unk2;
};

extern s32 D_00002E80;
extern M2C_UNK D_00002EC8;
extern M2C_UNK D_00002F40;
extern s32 D_00002F4C;
extern s32 D_00002F50;
extern s32 D_00002F54;
extern s32 D_00002F58;
extern s32 D_00002F88;
extern s32 D_00002F8C;
extern s32 D_00002F90;
extern s32 D_00002F94;
extern s32 D_00003F84;
extern s32 D_00003FC0;
extern s32 D_00003FD4;
extern s32 D_00003FEC;
extern M2C_UNK D_0000400C;
extern u16 D_0000400E;
extern M2C_UNK D_00004020;
extern struct D_00004034_s D_00004034;
extern struct D_0000404C_s D_0000404C;
extern u16 D_0000404E;
extern M2C_UNK func_00000288;
extern s32 func_00001BCC;
extern s32 func_00001C50;
extern s32 func_000020C4;
extern s32 func_00002148;
extern M2C_UNK func_00002198;
extern M2C_UNK func_000021EC;

M2C_UNK sceKernelEnableIntr(M2C_UNK);
M2C_UNK sceKernelRegisterIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 func_00000D18(void);
s32 func_00001328(void);
s32 func_00001334(s32 arg0);
s32 func_0000177C(void);
s32 func_00001798(void);
s32 func_00001A64(void);
s32 func_00001A70(s32 arg0);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceDmacplusAvcSuspend(void);
s32 sceDmacplusAvcQuerySuspend(void);
s32 sceDmacplusMe2ScInit(void);
s32 sceDmacplusLcdcGetFormat(s32 *arg0, s32 *arg1, s32 *arg2);
s32 sceDmacplusSc128Suspend(void);
s32 sceDmacplusSc128QuerySuspend(void);
s32 sceDmacplusLcdcResume(void);
s32 sceDmacplusSc128End(void);
s32 sceDmacplusLcdcGetBaseAddr(void);
s32 sceDmacplusAvcResume(void);
s32 sceDmacplusMe2ScSuspend(void);
s32 sceDmacplusMe2ScResume(void);
s32 sceDmacplusAvcEnd(void);
s32 sceDmacplusSuspend(void);
s32 sceDmacplusMe2ScQuerySuspend(void);
s32 sceDmacplusSc128Resume(void);
s32 sceDmacplusSc128Init(void);
s32 sceDmacplusAvcInit(void);
s32 sceDmacplusLcdcQuerySuspend(void);
s32 sceDmacplusSc2MeResume(void);
s32 sceDmacplusLcdcSuspend(void);
s32 sceDmacplusLcdcEnd(void);
s32 sceDmacplusSc2MeQuerySuspend(void);
s32 sceDmacplusMe2ScEnd(void);
s32 sceDmacplusResume(void);
s32 sceDmacplusEnd(void);
s32 sceDmacplusSc2MeEnd(void);
s32 sceDmacplusSc2MeInit(void);
s32 sceDmacplusLcdcInit(void);
s32 sceDmacplusSc2MeSuspend(void);
void sceKernelCpuResumeIntr(s32);
void sceKernelCpuResumeIntrWithSync(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelRegisterSubIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
s32 sceKernelSetEventFlag(s32, u32);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregDmacplusBusClockDisable();
M2C_UNK sceSysregDmacplusBusClockEnable();

#endif
