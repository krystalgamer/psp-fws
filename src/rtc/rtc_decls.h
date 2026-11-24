#ifndef RTC_DECLS_H
#define RTC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00004540;
extern M2C_UNK func_00003D10;
extern M2C_UNK func_00003DD4;
extern M2C_UNK func_00003DF4;
extern M2C_UNK sceRtc_driver_B44BDAED;

M2C_UNK UtilsForKernel_23A0C5BA(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_0000138C(s32 arg0);
s32 func_00003AF8(void *arg0, s32 arg1);
void func_00003D9C(void);
s32 module_reboot_before(void);
s32 sceRtcGetDayOfWeek(s32 arg0, s32 arg1, s32 arg2);
u32 sceRtcGetTickResolution(void);
s32 sceRtcIsLeapYear(s32 arg0);
s32 sceRtcTickAddMicroseconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddMinutes(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddSeconds(void *arg0, void *arg1, s64 arg2);
s32 sceRtcTickAddTicks(void *, void *, s64);
s32 sceRtc_driver_48D07D70(void);
s32 sceRtc_driver_9CC2797E(void);
s32 sceRtc_driver_F0B5571C(void);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSyscon_driver_A068B3D0(M2C_UNK, M2C_UNK);

#endif
