#include "common.h"
#include "vaudio_decls.h"

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioOutputBlocking);

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChReserve);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChRelease);
#endif

INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetEffectType);

INCLUDE_RODATA("nonmatchings/vaudio", D_00000D9C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_5A7435B7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioChRelease);
#endif

#if FW_VERSION == 100
s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_82EF2F9D);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudio_driver_72749E84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vaudio", func_000005DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", module_start);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", sceVaudioSetAlcMode);
#endif

#if FW_VERSION != 100
s32 sceVaudio_driver_DCC18F25(void) {
    return 5;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", module_stop);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", func_00000790);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", func_00000818);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", func_00000930);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vaudio", func_00000A74);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/vaudio", D_00000E48);
#endif
