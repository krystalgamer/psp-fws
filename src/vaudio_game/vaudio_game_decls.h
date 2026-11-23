#ifndef VAUDIO_GAME_DECLS_H
#define VAUDIO_GAME_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 sceVaudioChRelease(void);
s32 sceVaudioChReserve(s32 arg0, s32 arg1, s32 arg2);
s32 sceVaudioOutputBlocking(s32 arg0, void *arg1);
s32 sceVaudioSetEffectType(s32 arg0, s32 arg1);
s32 sceVaudio_driver_5A7435B7(void);
s32 sceVaudio_driver_DCC18F25(void);

#endif
