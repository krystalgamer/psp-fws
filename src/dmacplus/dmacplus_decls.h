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

extern M2C_UNK D_00002EC8;
extern M2C_UNK D_00002F40;
extern s32 D_00002F88;
extern s32 D_00002F8C;
extern s32 D_00002F90;
extern s32 D_00002F94;
extern s32 D_00003FC0;
extern struct D_00004034_s D_00004034;
extern struct D_0000404C_s D_0000404C;
extern u16 D_0000404E;
extern M2C_UNK func_00000288;
extern M2C_UNK func_00002198;
extern M2C_UNK func_000021EC;

M2C_UNK InterruptManagerForKernel_4D6E7305(M2C_UNK);
M2C_UNK InterruptManagerForKernel_58DD8978(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_00001798(void);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceDmacplus_driver_168836CF(void);
s32 sceDmacplus_driver_1E7483D0(void);
s32 sceDmacplus_driver_1F5A80D0(void);
s32 sceDmacplus_driver_241601AE(s32 *arg0, s32 *arg1, s32 *arg2);
s32 sceDmacplus_driver_3DB353DB(void);
s32 sceDmacplus_driver_410ED0DD(void);
s32 sceDmacplus_driver_42BEB349(void);
s32 sceDmacplus_driver_4F1B8D26(void);
s32 sceDmacplus_driver_58C380BB(void);
s32 sceDmacplus_driver_5E32C8AF(void);
s32 sceDmacplus_driver_6D4F8BD7(void);
s32 sceDmacplus_driver_78A55D62(void);
s32 sceDmacplus_driver_7AAE5443(void);
s32 sceDmacplus_driver_853C5EC6(void);
s32 sceDmacplus_driver_9393B40D(void);
s32 sceDmacplus_driver_97DCBBBF(void);
s32 sceDmacplus_driver_B6592A56(void);
s32 sceDmacplus_driver_BEC10779(void);
s32 sceDmacplus_driver_C3236D69(void);
s32 sceDmacplus_driver_C5B75E09(void);
s32 sceDmacplus_driver_C8336549(void);
s32 sceDmacplus_driver_CDB039A7(void);
s32 sceDmacplus_driver_D0464B29(void);
s32 sceDmacplus_driver_D1E1567E(void);
s32 sceDmacplus_driver_D49A5922(void);
s32 sceDmacplus_driver_F7DEC189(void);
s32 sceDmacplus_driver_FD8B15BC(void);
s32 sceDmacplus_driver_FE3F3228(void);
s32 sceDmacplus_driver_FEE3392C(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelRegisterSubIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
s32 sceKernelSetEventFlag(s32, u32);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_168C09B8();
M2C_UNK sceSysreg_driver_678AD3ED();

#endif
