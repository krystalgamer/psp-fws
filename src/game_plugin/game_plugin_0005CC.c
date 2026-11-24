/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

void func_000005CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_000125F0 = arg0;
    D_000125F4 = arg1;
    D_00012608 = arg2;
    D_0001260C = arg3;
    func_00008274(&D_0001247C);
}

void func_00000610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_000125F0 = arg0;
    D_000125F4 = arg1;
    D_000125F8 = arg2;
    D_000125FC = arg3;
    D_00012608 = arg4;
    D_0001260C = arg5;
    func_00008274(&D_0001247C);
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000115C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000664);

void func_0000076C(void) {
    func_00008120(&D_0001247C);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_0000078C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000868);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_0000088C);

void func_00000938(void) {
    func_0000088C(1, 0xFFFF);
}

void func_00000958(void) {
    func_0000088C(0, 0xFFFF);
}

void func_00000978(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}

void func_00000998(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}

void func_000009B8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_000009D8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000A58);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000A78);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000AA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000AD8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000BB8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000DA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000DEC);

void func_00000E68(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
}

void func_00000E78(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000EA0);

s32 func_00000ED0(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000115F0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000115FC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011608);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011614);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011628);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_0001163C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011650);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011664);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011674);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011688);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_0001169C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000116AC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000116C0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000116D8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000116E8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000116F8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011708);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_0001171C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011730);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011744);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011758);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011860);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011870);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011880);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011890);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00000EF8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00001118);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_000012C4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00001B24);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011980);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011990);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119A0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119B8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119C4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119D0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119E4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_000119F8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A08);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A18);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A28);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A30);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A3C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", D_00011A4C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00002034);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00002640);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_000026F0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_000028C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_000029F0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00002A60);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0005CC", func_00002AF8);

s32 func_00002B8C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00012638 != 0) {
        var_v0 = D_00012634 == 0;
    }
    return var_v0;
}

