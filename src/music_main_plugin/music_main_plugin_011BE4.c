/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_00011BE4(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x519000;
    }
    return var_v0;
}

s32 func_00011C08(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x625800;
    }
    return var_v0;
}

s32 func_00011C2C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x725800;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00011C50);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015708);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015390_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015390_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015390_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015390_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_000153D8);

Class_000B2FE0::~Class_000B2FE0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_000154A8);

s32 func_0001561C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_0001562C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_0001588C);

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015920);

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015AF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015B10);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_011BE4", D_000B2FB8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_011BE4", D_000B2FCC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_011BE4", D_000B2FE0);

__asm__(".globl _ZTV14Class_000B2FE0\n_ZTV14Class_000B2FE0 = D_000B2FE0 - 8\n");
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_011BE4", D_0009B500);

INCLUDE_RODATA("nonmatchings/music_main_plugin_011BE4", D_0009B510);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015C58);

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015D80);
#endif

#if FW_VERSION >= 301
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00015DCC);
#endif

#if FW_VERSION == 300
s32 func_00015DCC(void) {
    return 0x203;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00011C5C);
#else
s32 func_00011C5C(void) {
    return Job_isCanceled() != 0;
}
#endif
