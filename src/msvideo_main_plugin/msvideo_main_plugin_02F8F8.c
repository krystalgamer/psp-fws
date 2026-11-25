/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_02F8F8", func_0002F8F8);

void func_0002F94C(struct Unk_func_0002F94C_0 *arg0, s32 arg1) {
    arg0->unk440 = arg1;
    func_0002F8F8();
}

s32 func_0002F96C(struct Unk_func_0002F96C_0 *arg0) {
    return arg0->unk440;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_02F8F8", func_0002F974);

void func_0002F9F8(struct Unk_func_0002F9F8_0 *arg0, s32 arg1) {
    arg0->unk490 = arg1;
}

s32 func_0002FA00(struct Unk_func_0002FA00_0 *arg0) {
    return arg0->unk490;
}
