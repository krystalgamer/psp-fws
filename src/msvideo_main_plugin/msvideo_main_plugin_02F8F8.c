/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_02F8F8", func_0002F8F8);

void func_0002F94C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x440) = arg1;
    func_0002F8F8();
}

s32 func_0002F96C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x440);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_02F8F8", func_0002F974);

void func_0002F9F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x490) = arg1;
}

s32 func_0002FA00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x490);
}

