/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_000114B0(s32 arg0) {
    s32 var_v0;

    var_v0 = 3;
    if (arg0 != 0) {
        var_v0 = func_000114E8(func_00014CC4(D_000A43C8, arg0, 1));
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_000114E8);

s32 func_00011734(struct Unk_func_00011734_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00011734_temp_a0 *temp_a0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk8;
        if (temp_a0 != NULL) {
            var_v0 = temp_a0->unk4;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011750);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_000117D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_0001186C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011874);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_0001187C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011888);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011894);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_000118C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_000118D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011930);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_0009B4E0);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_000169D8);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011990);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011A00);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011A90);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2DE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2E04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F58);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F74_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F74_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F74_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F8C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2DF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2E18);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B26F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2710);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B272C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2744);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B3E3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B3E54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B3E70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B3E88);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2F88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0114B0", D_000B2FA0);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011AC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011AFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011B24);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011B58);
#else
void func_00011B58(void) {
    D_000A43D0 = _ZN3vsh10FixedAlloc4LockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), D_000A3254);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_0114B0", func_00011B8C);
#else
void func_00011B8C(void) {
    _ZN3vsh10FixedAlloc6UnlockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), D_000A3254);
}
#endif
