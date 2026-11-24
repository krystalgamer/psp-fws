/* cflags: -Os */
#include "common.h"
#include "video_main_plugin_decls.h"

void func_00005B3C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00005F6C(arg0, arg1, var_v0);
}

void func_00005B8C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00006018(arg0, arg1, var_v0);
}

void func_00005BDC(void) {
    func_000060CC();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005BF8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005CC4);

void func_00005D58(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00006308();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005D78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005DF0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005E68);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005E88);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00005F6C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00006018);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_000060CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_000060F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00006308);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00006328);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00006404);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_0000653C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_00006590);

s32 func_000065E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin_005B3C", func_000065EC);

s32 func_00006640(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

