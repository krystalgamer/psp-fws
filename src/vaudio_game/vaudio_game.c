#include "common.h"
#include "vaudio_game_decls.h"

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudioOutputBlocking);

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudioChReserve);

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudioChRelease);

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudioSetEffectType);

s32 sceVaudio_driver_DCC18F25(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudio_driver_82EF2F9D);

s32 sceVaudio_driver_5A7435B7(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/vaudio_game/nonmatchings/vaudio_game", sceVaudio_driver_72749E84);
