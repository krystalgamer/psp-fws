#ifndef COMMON_UTIL_DECLS_H
#define COMMON_UTIL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_sceVshCommonUtil_98E57F6D_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    s32 unk8;
    u8 padC[0x4];
    u8 unk10;
};

extern s32 D_00008BF0;
extern s32 D_00008BF4;
extern s32 D_00008BF8;
extern s32 D_00008BFC;

M2C_UNK func_00000000();
void func_00000978(void);
M2C_UNK func_000083D0();
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelClearEventFlag(s32, u32);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
M2C_UNK scePower_DB62C9CF();
M2C_UNK sceReg_0CAE832B(s32);
M2C_UNK sceReg_0D69BF40(s32);
M2C_UNK sceReg_39461B4D(s32);
M2C_UNK sceReg_FA8A5739(s32);
void sceVshCommonUtil_0713D516(void);
void sceVshCommonUtil_0AF412FC(void);
void sceVshCommonUtil_107EDCD9(void);
void sceVshCommonUtil_12F5429A(void);
M2C_UNK sceVshCommonUtil_249059B5();
void sceVshCommonUtil_3FAF35EC(void);
void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1);
void sceVshCommonUtil_686AAA1A(void);
M2C_UNK sceVshCommonUtil_7683BE4D();
void sceVshCommonUtil_98E57F6D(struct Unk_sceVshCommonUtil_98E57F6D_0 *arg0);
void sceVshCommonUtil_D4D66154(s32 *arg0);

#endif
