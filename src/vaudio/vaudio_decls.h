#ifndef VAUDIO_DECLS_H
#define VAUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_0000078C(s32, s32, s32, s32);
s32 sceVaudioChReserve(s32 arg0, s32 arg1, s32 arg2);
void sceVaudioChReserveBuffering(s32 arg0, s32 arg1, s32 arg2);
s32 sceVaudio_driver_DCC18F25(void);

#endif
