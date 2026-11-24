/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

s32 func_00032F68(struct Unk_func_00032F68_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unk548 != 0) {
        var_v1 = (func_00035A24(arg0->unkAC, arg1) == 0) ? 0 : 5;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00032F9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00032FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033030);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033090);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_000330CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033114);

s32 func_00033158(struct Unk_func_00033158_0 *arg0) {
    func_00034C48(arg0->unkAC);
    return 0;
}

s32 func_00033178(struct Unk_func_00033178_0 *arg0) {
    func_000354AC(arg0->unkAC);
    return 0;
}

void func_00033198(struct Unk_func_00033178_0 *arg0) {
    func_00033178(arg0);
}

