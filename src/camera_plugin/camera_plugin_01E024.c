/* cflags: -O1 -frename-registers */
#include "common.h"
#include "camera_plugin_decls.h"

void func_0001E024(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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
    func_0001F500((s32) arg0, arg1, arg2, arg3, arg4);
}

void func_0001E05C(void) {
    func_0001EC10();
}

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E078);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E0F8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E158);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E1CC);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E21C);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E314);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E70C);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001E9B8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001EC10);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001ECD0);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001ED90);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001EDDC);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001EDE8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001EEB8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001EF88);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F058);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F1F8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F2C8);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F410);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F488);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F500);

INCLUDE_ASM("nonmatchings/camera_plugin_01E024", func_0001F524);

s32 func_0001F52C(struct Unk_func_0001F52C_0 *arg0) {
    return arg0->unk18;
}

void func_0001F534(struct Unk_func_0001F534_0 *arg0, s32 arg1) {
    arg0->unk18 = arg1;
}

s32 func_0001F53C(struct Unk_func_0001F53C_0 *arg0) {
    return arg0->unk1C;
}

void func_0001F544(struct Unk_func_0001F544_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

