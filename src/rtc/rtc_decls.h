#ifndef RTC_DECLS_H
#define RTC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00004580_s {
    volatile s32 unk0;
    volatile s32 unk4;
    volatile s32 unk8;
    volatile s32 unkC;
    volatile s32 unk10;
    volatile s32 unk14;
    u8 pad18[0x4];
    volatile s32 unk1C;
};

struct Unk_func_00003AF8_0 {
    s8 unk0;
    s8 unk1;
};

extern s32 D_00003BF0;
extern s32 D_00004530;
extern M2C_UNK D_00004540;
extern struct D_00004580_s D_00004580;
extern M2C_UNK func_00000000;
extern M2C_UNK func_00003D10;
extern M2C_UNK func_00003DD4;
extern M2C_UNK func_00003DF4;
extern M2C_UNK sceRtc_driver_B44BDAED;

M2C_UNK UtilsForKernel_23A0C5BA(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 UtilsForKernel_7B7ED3FD(M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_00000DB0(s32 arg0);
s32 func_0000138C(s32 arg0);
s32 func_000032D0(void *arg0, s32 arg1);
s32 func_0000358C(void);
s32 func_00003AF8(struct Unk_func_00003AF8_0 *arg0, s32 arg1);
void func_00003D9C(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceRtcGetDayOfWeek(s32 arg0, s32 arg1, s32 arg2);
u32 sceRtcGetTickResolution(void);
s32 sceRtcIsLeapYear(s32 arg0);
s32 sceRtcTickAddMicroseconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddMinutes(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddSeconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddTicks(void *, void *, s64);
s32 sceRtc_driver_48D07D70(void);
s32 sceRtc_driver_912BEE56(void);
s32 sceRtc_driver_9CC2797E(void);
s32 sceRtc_driver_C499AF2F(void);
s32 sceRtc_driver_CE27DE2F(void);
s32 sceRtc_driver_F0B5571C(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSyscon_driver_A068B3D0(M2C_UNK, M2C_UNK);

#endif
