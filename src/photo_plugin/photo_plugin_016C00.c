/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

void func_00016C00(void) {
    void *temp_v0;

    temp_v0 = func_00012DE4();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK), 0x14)(0xD);
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK), 0)(6);
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
    void *temp_v0;

    temp_v0 = func_00012DE4();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, s32 (**)(), 0x3C)();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016ECC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016F70);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00016FF0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_016C00", func_00017050);

void func_00017138(void) {
    func_00017050(1, 0xFFFF);
}

void func_00017158(void) {
    func_00017050(0, 0xFFFF);
}

