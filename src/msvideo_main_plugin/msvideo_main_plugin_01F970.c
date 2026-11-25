/* cflags: -O1 */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001F970);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void func_0001F970(struct Unk_func_0001F970_0 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        M2C_FIELD(arg0, u8 *, 0xD0) = 0U;
    }
}
#endif

#if FW_VERSION == 352
void func_0001F970(struct Unk_func_0001F970_0 *arg0) {
    if (arg0->unkCC != 0) {
        arg0->unkD0 = 0;
        arg0->unkCC = 0U;
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001F98C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001F9C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FA50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FB04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FB4C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FBEC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FBFC);

M2C_UNK *func_0001FC0C(void) {
    return &func_0001FBEC;
}

M2C_UNK *func_0001FC18(void) {
    return &func_0001FBFC;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_000216C0);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FC24);
#endif

void func_0001FCE4(s32 arg0) {
    func_0001FD00(arg0, 0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FD00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FEA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FF7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_01F970", func_0001FFD0);

void func_00020028(struct Unk_func_00020028_0 *arg0) {
    arg0->unk24 = 1;
}
