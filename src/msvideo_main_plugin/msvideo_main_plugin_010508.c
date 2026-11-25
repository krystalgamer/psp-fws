/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_00010508(struct Unk_func_00010508_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000FC70(arg0, arg1);
    arg0->unk1C = arg3;
    arg0->unk18 = arg2;
    arg0->unk0 = &D_000AF5E8;
}

void func_00010558(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
}

void func_00010580(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
}

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_010508", func_000105A8);
#else
void func_000105A8(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF330);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF3B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF3D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF3F0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF408);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF418);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF424);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF430);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF43C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF440);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF44C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF458);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF464);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF470);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF474);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF480);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF48C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF498);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF49C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF4A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF4B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF4C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_010508", D_000AF4C4);
