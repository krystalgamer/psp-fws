/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "premo_plugin_decls.h"

s32 func_00018FBC(struct Unk_func_00018FBC_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == 1) {
        var_v1 = arg0->unk80;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_018FBC", func_00018FD4);

INCLUDE_ASM("nonmatchings/premo_plugin_018FBC", func_00019074);

void func_0001910C(struct Unk_func_0001910C_0 *arg0) {
    func_00018FD4(arg0->unk4);
}

void func_00019128(struct Unk_func_00019128_0 *arg0) {
    func_00019074(arg0->unk4);
}

void func_00019144(M2C_UNK **arg0) {
    *arg0 = &D_0002AFA0;
}
