#include "common.h"
#include "vaudio_decls.h"

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", sceVaudioOutputBlocking);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", sceVaudioChReserve);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", sceVaudioChRelease);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", sceVaudioSetEffectType);

INCLUDE_RODATA("tmp/asm/282/vaudio/nonmatchings/vaudio", D_00000D9C);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", module_start);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", sceVaudioSetAlcMode);

s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", module_stop);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", func_00000790);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", func_00000818);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", func_00000930);

INCLUDE_ASM("tmp/asm/282/vaudio/nonmatchings/vaudio", func_00000A74);

INCLUDE_RODATA("tmp/asm/282/vaudio/nonmatchings/vaudio", D_00000E48);
