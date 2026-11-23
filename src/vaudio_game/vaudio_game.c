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

s32 sceVaudioSetEffectType(s32 arg0, s32 arg1) {
    return (arg0 == 0) ? arg1 : 0x80000102;
}

s32 sceVaudio_driver_DCC18F25(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudio_driver_82EF2F9D);

s32 sceVaudio_driver_5A7435B7(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudio_driver_72749E84);
