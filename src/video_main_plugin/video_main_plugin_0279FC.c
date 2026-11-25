/* cflags: -Os */
#include "common.h"
#include "video_main_plugin_decls.h"

s32 func_000279FC(s32 arg0) {
    if (arg0 != 0) {
        func_00027E70(arg0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027A20);

s32 func_00027D70(struct Unk_func_00027D70_0 *arg0, s32 arg1) {
    return arg0->unk4 + (arg1 * 0xA);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027D88);

u32 func_00027DB4(u8 *arg0, s32 *arg1) {
    u32 temp_s0;

    temp_s0 = (u8) *arg0 >> 6;
    *arg1 = __builtin_allegrex_ext(func_00027E10((s32) arg0), 1, 0xB);
    return temp_s0;
}

void func_00027DF4(s32 arg0) {
    func_00027E28(arg0 + 6);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027E10);

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027E28);

void func_00027E54(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027E70);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0279FC", D_00053BB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027E90);

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00027F10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_0279FC", D_00053BC8);

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_000282A0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00028570);

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_00028618);

void func_000286B4(void) {
    sceIoClose();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_0279FC", func_000286D0);
#endif
