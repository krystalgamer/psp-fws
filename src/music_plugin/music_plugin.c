/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

INCLUDE_ASM("nonmatchings/music_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/music_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/music_plugin", module_start);

s32 module_stop(void) {
    func_00001BBC();
    return 0;
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000015C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0000201C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002048);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);

void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = scePaf_D4FAE7D0(&D_0000206C);
    if (temp_v0 != 0) {
        scePaf_1A45C860(temp_v0, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000034C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000041C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000046C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000058C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0000206C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);

INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020AC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002154);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000C6C);

void func_00000F04(void) {
    sceVshCommonGui_1CF884A1();
}

void func_00000F20(void) {
    func_00000C6C(0);
}

void func_00000F3C(s32 arg0) {
    struct Unk_func_00000F3C_temp_v0 *temp_v0;

    sceVshCommonGui_1CF884A1();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000FF8, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00000F88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000FF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001030);

void func_00001080(void) {
    func_0000046C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000109C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001100);

INCLUDE_ASM("nonmatchings/music_plugin", func_000011A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000011C4);

void func_00001250(void) {
    func_000011C4(1, 0xFFFF);
}

void func_00001270(void) {
    func_000011C4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00001290);

INCLUDE_ASM("nonmatchings/music_plugin", func_000012C0);

void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_0000150C(arg0, arg1, var_v0);
}

void func_00001340(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000015C0(arg0, arg1, var_v0);
}

void func_00001390(void) {
    func_0000166C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_000013AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001478);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000150C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000166C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000018A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001984);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B64);
