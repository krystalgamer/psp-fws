/* cflags: -O1 */
#include "common.h"
#include "premo_plugin_decls.h"

s32 func_00018FBC(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == 1) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x80);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_018FBC", func_00018FD4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_018FBC", func_00019074);

void func_0001910C(void *arg0) {
    func_00018FD4(M2C_FIELD(arg0, s32 *, 4));
}

void func_00019128(void *arg0) {
    func_00019074(M2C_FIELD(arg0, s32 *, 4));
}

void func_00019144(M2C_UNK **arg0) {
    *arg0 = &D_0002AFA0;
}

