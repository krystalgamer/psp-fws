#ifndef HPREMOTE_DECLS_H
#define HPREMOTE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00002080_s {
    u8 pad0[0x120];
    volatile s32 unk120;
    u8 pad124[0xA0];
    volatile s32 unk1C4;
    volatile s32 unk1C8;
    volatile s32 unk1CC;
    volatile s32 unk1D0;
    volatile s32 unk1D4;
    volatile s32 unk1D8;
};

extern s32 D_00002078;
extern struct D_00002080_s D_00002080;
extern s32 D_0000213C;
extern s8 D_00002141;
extern s8 D_00002142;
extern s8 D_00002143;
extern u8 D_00002176;
extern s32 D_00002198;
extern u8 D_00002226;
extern s32 D_0000225C;
extern s8 D_00002261;
extern s8 D_00002262;
extern s8 D_00002263;

s32 func_0000030C(void);
s32 func_00000AE4(void);
s32 func_00000AF4(void);
s32 func_00001250(s32 arg0);
s32 func_0000134C(s32 arg0);
s32 func_00001924(void);
s32 module_start(void);
s32 sceHprmIsHeadphoneExist(void);
s32 sceHprmIsMicrophoneExist(void);
s32 sceHprmIsRemoteExist(void);
s32 sceHprm_driver_1C5BC5A0(void);
s32 sceHprm_driver_2C7B8B05(void);
s32 sceHprm_driver_4D1E622C(void);
s32 sceHprm_driver_526BB7F4(void);
u8 sceHprm_driver_71B5FB67(void);
s32 sceHprm_driver_7B038374(M2C_UNK **arg0);
s32 sceHprm_driver_971AE8FB(s32 *arg0);
s32 sceHprm_driver_F04591FA(s32 arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelSetEventFlag(s32, u32);
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
