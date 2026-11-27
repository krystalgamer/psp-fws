#ifndef CODEC_DECLS_H
#define CODEC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    s32 unk0[4];
    s32 (*unk10)(void);
    s32 unk14;
    s32 (*unk18)(void);
} KDebugUnkIf;

extern s8 D_000011F0[];
extern u8 D_00001230[];
extern s8 D_00001280[];

KDebugUnkIf *sceKernelSm1ReferOperations(void);
M2C_UNK func_0000004C(M2C_UNK, M2C_UNK);
void func_00000094(s32 arg0);
void func_000000E0(void);
void func_000000E4(void);
void func_00000130(void);
s32 func_0000017C(void);
M2C_UNK func_000002A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00000924(s32, s32, s32, s32);
s32 func_00000CF8(void);
s32 func_00000E60(void);
s32 sceCodecAudioClkoutClkDisable(void);
void sceCodecInputDisable(void);
void sceCodecOutputDisable(void);
void sceCodecOutputEnable(s32 arg0, s32 arg1);
s32 sceCodecSetHeadphoneVolume(s32);
s32 sceCodecSetSpeakerVolume(s32);
s32 sceCodec_driver_4515AE04(u32 arg0);
s32 sceCodec_driver_56494D70(s32, s32, s32);
M2C_UNK sceGpioPortClear(M2C_UNK);
M2C_UNK sceGpioPortSet(M2C_UNK);
M2C_UNK sceGpioSetPortMode(M2C_UNK, M2C_UNK);
s32 sceKernelDelayThread(u32);
s32 sceSysregAudioClkoutClkDisable();
s32 sceSysregGetTachyonVersion();

#endif
