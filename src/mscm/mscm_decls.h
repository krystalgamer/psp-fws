#ifndef MSCM_DECLS_H
#define MSCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* Memory Stick host controller (MSIF) registers, 0xBD200000 */
typedef struct {
    u8 unk0[0x30];
    volatile u16 command;   /* 0x30: TPC << 12 | size */
    u16 unk32;
    volatile u32 data;      /* 0x34 */
    volatile u16 status;    /* 0x38 */
    u16 unk3A;
    volatile u16 sys;       /* 0x3C */
    u16 unk3E;
    volatile u32 unk40;     /* 0x40 */
} SceMScmHCReg;

/* host controller state; drivers get a pointer to it as their HC descriptor */
typedef struct SceMScmHC {
    SceMScmHCReg *reg;      /* 0x00 */
    s32 index;              /* 0x04: slot / HC number */
    struct SceMScmHC *hc;   /* 0x08: points to itself */
    s32 inService;          /* 0x0C */
#if FW_VERSION < 250
    s32 unk10;
    u32 intrStatus;         /* 0x14 */
    s32 lastStatus;         /* 0x18 */
    s32 unk1C;
    s32 unk20[4];           /* 0x20: initialised to -1 */
    SceUID evf;             /* 0x30: "SceMScmAl" */
    u8 unk34[0x27C - 0x34];
#if FW_VERSION >= 150
    s32 unk27C;
    s32 unk280;
#endif
#else
    s32 unk10;
    s32 lastStatus;         /* 0x14 */
    s32 unk18;
    s32 unk1C[4];
    SceUID evf;             /* 0x2C */
#endif
} SceMScmHC;
#if FW_VERSION < 150
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x27C) ? 1 : -1];
#elif FW_VERSION < 250
typedef char chk_SceMScmHC[(sizeof(SceMScmHC) == 0x284) ? 1 : -1];
#endif

extern SceMScmHC D_00006F14[1];
extern s32 D_00007800;
extern s32 D_00007880;
extern s32 D_00007AF4;

s32 func_000001E4(SceMScmHC *hc);
void func_00000930(s32 arg0);
s32 func_00000C1C(SceMScmHC *hc);
s32 func_00002194(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_00003E58(SceMScmHC *hc, s32 *out);
s32 func_00003F48(SceMScmHC *hc, s32 *out);
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
s32 func_00005AA8(SceMScmHC *hc, s32 mode);
s32 func_00005AD0(s32 slot, s32 mode);
s32 func_00005B3C(SceMScmHC *hc, s32 *out);
s32 func_00005B64(s32 slot, s32 *out);
s32 func_00006440(SceMScmHC *hc);
s32 func_00006474(s32 slot, s32 mode);
s32 func_00006484(void);
s32 func_0000648C(void);
s32 func_00006494(SceMScmHC *hc);
s32 func_000064C0(void);
s32 func_000064C8(s32);
s32 func_000064D8(s32 slot, s32 *out);
s32 func_0000652C(s32, s32);
s32 func_000066DC(SceMScmHC *hc);
s32 func_00006704(SceMScmHC *hc, s32 arg1);
s32 sceKernelChangeThreadPriority(u32, s32);
s32 sceKernelClearEventFlag(u32, u32);
s32 sceKernelDelayThread(u32);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelGetThreadCurrentPriority(void);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceMScmClearALEvents(SceMScmHC *hc);
s32 sceMScmHCLastStatus(SceMScmHC *hc);
void sceMScmIconResetIcon(SceMScmHC *hc);
s32 sceMScmResetHC(SceMScmHC *hc, s32 mode);
s32 sceMScmSetPullDownReg(s32 slot, s32 on);
s32 sceMScmSetPullDownRegByDesc(SceMScmHC *hc, s32 on);
s32 sceMScmSetSlotPower(SceMScmHC *hc, s32 on);
s32 sceMScm_driver_D6DB3199(SceMScmHC *hc, s32 *arg1, s32 *arg2, s32 *arg3);
M2C_UNK sceSysregMsifIoDisable(s32);
M2C_UNK sceSysregMsifIoEnable(s32);

#endif
