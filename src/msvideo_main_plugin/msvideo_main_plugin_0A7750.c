/* cflags: -O1 -frename-registers */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_000A7750(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;
    s8 *var_v0;

    var_v0 = arg0;
    var_v1 = 0x1C8;
    do {
        var_v1 -= 1;
        *var_v0 = 0;
        var_v0 += 1;
    } while (var_v1 > 0);
    M2C_FIELD(arg0, s32 *, 0x34) = 8;
    func_000A8C2C((s32) arg0, arg1, arg2, arg3, arg4);
}

void func_000A7788(void) {
    func_000A833C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A77A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A7824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A7884);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A7948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A7A40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A80E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A833C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A84BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8508);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8514);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A85E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A86B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8B3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0A7750", func_000A8C50);

s32 func_000A8C58(struct Unk_func_000A8C58_0 *arg0) {
    return arg0->unk18;
}

void func_000A8C60(struct Unk_func_000A8C60_0 *arg0, s32 arg1) {
    arg0->unk18 = arg1;
}

s32 func_000A8C68(struct Unk_func_000A8C68_0 *arg0) {
    return arg0->unk1C;
}

void func_000A8C70(struct Unk_func_000A8C70_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

