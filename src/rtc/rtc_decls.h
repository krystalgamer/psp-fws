#ifndef RTC_DECLS_H
#define RTC_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void sceRtcTickAddMicroseconds(void);
M2C_UNK sceRtcTickAddTicks();
s32 sceRtc_driver_48D07D70(void);
s32 sceRtc_driver_9CC2797E(void);
M2C_UNK sceRtc_driver_F0B5571C();

#endif
