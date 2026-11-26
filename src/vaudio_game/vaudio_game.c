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
s32 sceVaudioSetEffectType(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 == 0) {
        var_v0 = arg1;
    }
    return var_v0;
}
#else
s32 sceVaudioSetEffectType(s32 arg0, s32 arg1) {
    return (arg0 == 0) ? arg1 : 0x80000102;
}
#endif

s32 sceVaudio_driver_DCC18F25(void) {
    return 0;
}

#if FW_VERSION < 201
s32 *sceVaudioGetEffectString(s32 arg0) {
    if (arg0 == 0) {
        return "THRU";
    }
    return NULL;
}
#else
M2C_UNK *sceVaudioGetEffectString(s32 arg0) {
    if (arg0 == 0) {
        return "THRU";
    }
    return NULL;
}
#endif

s32 sceVaudioInit(void) {
    return 0;
}

s32 sceVaudioEnd(void) {
    return 0;
}
