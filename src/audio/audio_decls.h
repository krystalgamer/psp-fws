#ifndef AUDIO_DECLS_H
#define AUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_000029D4(s32, s32, s32);
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2);
s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1);
s32 sceAudioOutput2Release(void);
s32 sceAudioOutput2Reserve(s32 arg0);
s32 sceAudio_38553111(s32, s32, s32);
s32 sceAudio_5C37C0AE(void);
s32 sceAudio_E0727056(s32, s32);

#endif
