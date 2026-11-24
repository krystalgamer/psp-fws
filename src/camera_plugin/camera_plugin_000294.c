/* cflags: -Os */
#include "common.h"
#include "camera_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_000294", func_00000294);

void func_00000300(void) {
    func_0000BEAC();
}

INCLUDE_RODATA("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_000294", D_00021640);

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_000294", func_0000031C);

s32 func_000004F8(void) {
    sceVshCommonUtil_DA88D006(&D_00024C5C, 1, 0);
    func_0000C718();
    func_00002428();
    sceVshCommonUtil_F6567B66(&D_00024C5C, 1, 0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_000294", func_00000550);

INCLUDE_ASM("tmp/asm/352/camera_plugin/nonmatchings/camera_plugin_000294", func_00000578);

void func_000005F4(void) {
    func_00000578(1, 0xFFFF);
}

void func_00000614(void) {
    func_00000578(0, 0xFFFF);
}

