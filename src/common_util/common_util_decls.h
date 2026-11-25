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

extern s32 D_000080C0;
extern s32 D_000080C4;
extern s32 D_00008BF0;
extern s32 D_00008BF4;
extern s32 D_00008BF8;
extern s32 D_00008BFC;
extern M2C_UNK D_0000ADD8;
extern M2C_UNK D_0000DBFC;
extern s32 D_0000E79C;
extern s32 D_0000E7A0;
extern s32 D_0000E7A4;
extern s32 D_0000E7A8;

M2C_UNK func_00000000();
void func_00000978(void);
void func_00001140(void *arg0);
void func_000011A8(void);
s32 func_000011B8(s32);
s32 func_00001248(void);
s32 func_00001250(s32, s32, s32);
void func_000012C0(void);
void func_000012F8(void);
void func_00001D08(void);
M2C_UNK func_000083D0();
M2C_UNK func_00009F60();
s32 module_start(void);
s32 module_stop(void);
s32 sceIoClose(s32);
s32 sceKernelClearEventFlag(s32, u32);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
M2C_UNK scePaf_C9831AFF(M2C_UNK *);
M2C_UNK scePower_DB62C9CF();
M2C_UNK sceReg_0CAE832B(s32);
M2C_UNK sceReg_0D69BF40(s32);
M2C_UNK sceReg_39461B4D(s32);
M2C_UNK sceReg_FA8A5739(s32);
void sceVshCommonUtil_0587F20C(void);
void sceVshCommonUtil_0713D516(void);
void sceVshCommonUtil_0AF412FC(void);
void sceVshCommonUtil_0F553311(void *arg0);
void sceVshCommonUtil_107EDCD9(void);
void sceVshCommonUtil_12F5429A(void);
void sceVshCommonUtil_1EBD43EA(void);
M2C_UNK sceVshCommonUtil_249059B5();
void sceVshCommonUtil_3FAF35EC(void);
void sceVshCommonUtil_4DE8BDCB(void);
void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1);
void sceVshCommonUtil_622815DD(void);
void sceVshCommonUtil_686AAA1A(void);
M2C_UNK sceVshCommonUtil_7683BE4D();
void sceVshCommonUtil_8584376D(s32 arg0);
void sceVshCommonUtil_98E57F6D(struct Unk_sceVshCommonUtil_98E57F6D_0 *arg0);
void sceVshCommonUtil_9E42444E(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK *sceVshCommonUtil_B55DCA45(void);
void sceVshCommonUtil_B9B916C5(void *arg0);
void sceVshCommonUtil_D4D66154(s32 *arg0);
s32 sceVshCommonUtil_EDED68FB(s32);

#endif
