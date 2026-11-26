#include "common.h"
#include "vaudio_decls.h"

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioOutputBlocking);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChReserve);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChRelease);
#endif

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetEffectType);

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/vaudio", D_00000ED8);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000EDC);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000EF4);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F08);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F20);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F38);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F48);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F68);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000F7C);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000FB4);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000FC0);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000FF0);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000FF4);

INCLUDE_RODATA("nonmatchings/vaudio", D_00001010);

INCLUDE_RODATA("nonmatchings/vaudio", D_00001018);

INCLUDE_RODATA("nonmatchings/vaudio", D_0000102C);
#endif

INCLUDE_RODATA("nonmatchings/vaudio", D_00000D9C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/vaudio", module_start);
#endif

#if FW_VERSION >= 310
s32 sceVaudioChReserve(s32 arg0, s32 arg1, s32 arg2) {
    return func_0000078C(arg0, arg1, arg2, 0);
}

void sceVaudioChReserveBuffering(s32 arg0, s32 arg1, s32 arg2) {
    func_0000078C(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_5A7435B7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChRelease);
#endif

#if FW_VERSION < 282
s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vaudio", module_stop);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_82EF2F9D);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/vaudio", func_000006CC);

INCLUDE_ASM("nonmatchings/vaudio", func_000006D8);

INCLUDE_ASM("nonmatchings/vaudio", func_000006E4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_72749E84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vaudio", func_00000748);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vaudio", func_0000075C);

INCLUDE_ASM("nonmatchings/vaudio", func_00000878);

INCLUDE_ASM("nonmatchings/vaudio", func_00000924);

INCLUDE_ASM("nonmatchings/vaudio", func_000009C4);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A0C);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A18);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A24);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/vaudio", D_00000AE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/vaudio", func_000005DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetAlcMode);

s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}

INCLUDE_ASM("nonmatchings/vaudio", module_stop);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/vaudio", func_0000078C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/vaudio", func_00000794);

INCLUDE_ASM("nonmatchings/vaudio", func_0000081C);

INCLUDE_ASM("nonmatchings/vaudio", func_0000093C);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A84);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vaudio", func_00000790);

INCLUDE_ASM("nonmatchings/vaudio", func_00000818);

INCLUDE_ASM("nonmatchings/vaudio", func_00000930);

INCLUDE_ASM("nonmatchings/vaudio", func_00000A74);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/vaudio", D_00000E48);
#endif
