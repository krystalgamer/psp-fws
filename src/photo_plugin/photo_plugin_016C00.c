/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

void func_00016C00(void) {
    struct Unk_func_00016C00_temp_v0 *temp_v0;

    temp_v0 = func_00012DE4();
    if (temp_v0 != NULL) {
        temp_v0->unk14(0xD);
        temp_v0->unk0(6);
    }
    func_00016ECC();
}

void func_00016C50(void) {
    func_0000B8A4();
    func_00016ECC();
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016C74);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016E18);

s32 func_00016E94(void) {
    s32 var_v1;
    struct Unk_func_00016E94_temp_v0 *temp_v0;

    temp_v0 = func_00012DE4();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0->unk3C();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016ECC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016F70);

void func_00016FF0(s32 arg0) {
    void *sp0;
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = scePaf_D4FAE7D0(&D_0002FF34);
        if (temp_v0 != 0) {
            sceVshCommonGui_54BC644C(&sp0, scePaf_BB3CBD19(temp_v0, arg0, -1));
            func_000038CC(&sp0);
        }
    }
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00017050);

void func_00017138(void) {
    func_00017050(1, 0xFFFF);
}

void func_00017158(void) {
    func_00017050(0, 0xFFFF);
}

