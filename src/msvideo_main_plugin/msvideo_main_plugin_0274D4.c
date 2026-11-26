/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_000274D4(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_00026160(arg1, arg0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00027500);

void func_00027648(void) {
    func_00027500(1, 0xFFFF);
}

void func_00027668(void) {
    func_00027500(0, 0xFFFF);
}

void func_00027688(M2C_UNK **arg0) {
    *arg0 = &D_000B0F78;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00027698);
#else
void func_00027698(M2C_UNK **arg0) {
    *arg0 = &D_000B0F78;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_000276C0(M2C_UNK **arg0) {
    *arg0 = &D_000B0F88;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_000276D0);
#else
void func_000276D0(M2C_UNK **arg0) {
    *arg0 = &D_000B0F88;
    scePaf_6261C0A5((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_000276F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00027778);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_000277EC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0274D4", D_000B0F38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0274D4", D_000B0F78);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0274D4", D_000B0F88);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00028EB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00028F68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00028FDC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_0274D4", D_000B0F90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0274D4", func_00027860);

void func_00027C54(struct Unk_func_00027C54_0 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->unk28;
    if (temp_v0 != 0) {
        temp_a1 = arg0->unk30;
        func_0002F6AC(temp_v0, (temp_a1 < 0) ? 3 : temp_a1);
    }
}
