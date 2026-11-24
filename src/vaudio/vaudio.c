#include "common.h"
#include "vaudio_decls.h"

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioOutputBlocking);

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChReserve);

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChRelease);

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetEffectType);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000D9C);

INCLUDE_ASM("nonmatchings/vaudio", module_start);

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetAlcMode);

s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}

INCLUDE_ASM("nonmatchings/vaudio", module_stop);

INCLUDE_ASM("nonmatchings/vaudio", func_00000790);

INCLUDE_ASM("nonmatchings/vaudio", func_00000818);

INCLUDE_ASM("nonmatchings/vaudio", func_00000930);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A74);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000E48);
