#ifndef MSCM_DECLS_H
#define MSCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_sceMScm_driver_0A054CDA_0_8 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_Unk_sceMScm_driver_B01C378C_0_8 {
    u8 pad0[0x2C];
    u32 unk2C;
};

struct Unk_func_00000C1C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006494_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000066DC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00006704_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceMScm_driver_0A054CDA_0 {
    u8 pad0[0x8];
    struct Unk_Unk_sceMScm_driver_0A054CDA_0_8 *unk8;
};

struct Unk_sceMScm_driver_B01C378C_0 {
    u8 pad0[0x8];
    struct Unk_Unk_sceMScm_driver_B01C378C_0_8 *unk8;
};

extern M2C_UNK D_00006F14;
extern s32 D_00007800;
extern s32 D_00007880;
extern s32 D_00007AF4;

s32 func_000001E4(void *arg0);
void func_00000930(s32 arg0);
s32 func_00000C1C(struct Unk_func_00000C1C_0 *arg0);
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_00003E58(s32, s32);
s32 func_00003F48(s32, s32);
s32 func_00004870(void);
s32 func_0000488C(s32, s32);
void func_00004E4C(void);
s32 func_00004E68(s32 arg0, s32 arg1);
s32 func_00005174(s32, s32, s32);
s32 func_000052F4(void);
s32 func_000053EC(void);
s32 func_000057F0(void);
s32 func_00005804(s32 arg0);
s32 func_000059CC(void);
s32 func_000059D8(void);
s32 func_00005A44(s32 arg0, s32 arg1, s32 arg2);
s32 func_00005AA8(void *arg0);
s32 func_00005AD0(s32);
s32 func_00005B3C(void *arg0, s32 arg1);
s32 func_00005B64(s32, s32);
s32 func_00006440(void *arg0);
s32 func_00006474(s32);
s32 func_00006484(void);
s32 func_0000648C(void);
s32 func_00006494(struct Unk_func_00006494_0 *arg0);
s32 func_000064C0(void);
s32 func_000064C8(s32);
s32 func_000064D8(s32, s32);
s32 func_0000652C(s32, s32);
s32 func_000066DC(struct Unk_func_000066DC_0 *arg0);
s32 func_00006704(struct Unk_func_00006704_0 *arg0, s32 arg1);
s32 sceKernelChangeThreadPriority(u32, s32);
s32 sceKernelClearEventFlag(u32, u32);
s32 sceKernelDelayThread(u32);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelGetThreadCurrentPriority(void);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceMScmClearALEvents(struct Unk_sceMScm_driver_B01C378C_0 *arg0);
s32 sceMScmHCLastStatus(struct Unk_sceMScm_driver_0A054CDA_0 *arg0);
void sceMScmIconResetIcon(s32 arg0);
s32 sceMScmResetHC(s32, s32);
s32 sceMScmSetPullDownReg(s32);
s32 sceMScmSetPullDownRegByDesc(void *arg0);
s32 sceMScmSetSlotPower(s32, s32);
s32 sceMScm_driver_D6DB3199(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK sceSysregMsifIoDisable(s32);
M2C_UNK sceSysregMsifIoEnable(s32);

#endif
