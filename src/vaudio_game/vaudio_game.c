/* cflags: -O2 -frename-registers */
#include "common.h"
#include "vaudio_game_decls.h"

s32 sceVaudioOutputBlocking(s32 arg0, void *arg1) {
    return 0x80000003;
}

s32 sceVaudioChReserve(s32 arg0, s32 arg1, s32 arg2) {
    return 0x80000003;
}

s32 sceVaudioChRelease(void) {
    return 0x80000003;
}

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/vaudio_game", sceVaudioSetEffectType);
#else
s32 sceVaudioSetEffectType(s32 arg0, s32 arg1) {
    return (arg0 == 0) ? arg1 : 0x80000102;
}
#endif

s32 sceVaudio_driver_DCC18F25(void) {
    return 0;
}

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/vaudio_game", sceVaudio_driver_82EF2F9D);
#else
M2C_UNK *sceVaudio_driver_82EF2F9D(s32 arg0) {
    if (arg0 == 0) {
        return "THRU";
    }
    return NULL;
}
#endif

s32 sceVaudio_driver_5A7435B7(void) {
    return 0;
}

s32 sceVaudio_driver_72749E84(void) {
    return 0;
}
