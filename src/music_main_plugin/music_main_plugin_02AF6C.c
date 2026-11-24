#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_0002AF6C(void) {
    s32 var_v1;

    var_v1 = sceKernelDeleteThread();
    switch (var_v1) {                               /* irregular */
    case 0x80020198:
    case 0x80020064:
        var_v1 = 0x80020197;
        break;
    case 0x800201A4:
        var_v1 = 0x800201A2;
        break;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002AFDC);

void func_0002B05C(void) {
    sceKernelExitThread(1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B0CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B138);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B18C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B1C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B21C);

s32 func_0002B288(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadId();
    if (temp_v0 > 0) {
        *arg0 = temp_v0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B2B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B3A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B3DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B4F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B5EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B638);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B6A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B6FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B758);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B95C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002B9B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BA14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BA70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BB60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BEFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BF44);

void func_0002BF68(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002BF70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C0F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C1A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C2F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C41C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C510);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C514);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C518);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C51C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C520);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C524);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C434);

void func_0002C584(void) {
    if (func_0002C894() != 0) {

    } else {
        func_00031858(0xC02D, D_000A37A4, 1, 0);
    }
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C53C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C550);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C5C4);

void func_0002C684(struct Unk_func_0002C684_0 *arg0) {
    if (func_0002C894() != 0) {

    } else {
        func_00034704(arg0->unk4);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C6C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C7A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C7FC);

void func_0002C808(void) {
    func_00030D4C(0);
}

void func_0002C824(void) {
    func_00030DC0();
}

void func_0002C840(void) {
    func_00030DF0();
}

void func_0002C85C(void) {
    func_00031524();
}

void func_0002C878(void) {
    func_00031644();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C894);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C8D4);

s32 func_0002C918(void) {
    func_0002CA08();
    func_0002C9B8();
    return 0;
}

s32 func_0002C940(void) {
    s32 temp_v0;

    func_00031DDC();
    temp_v0 = func_0002C984();
    if (temp_v0 == 0) {

    } else {
        func_0002C9B8();
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C984);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002C9B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C58C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C5A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CA08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CA80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C5E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C5FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CBF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CCEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CD34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CDF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CF08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CF24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CF4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002CFB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D138);

s32 func_0002D18C(s32 arg0) {
    if (D_000A4558.unk0 == 0) {
        D_000A4558.unk0 = 1;
        D_000A4558.unk4 = arg0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D1B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D1C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C698);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C6B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D224);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D298);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D33C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C700);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D454);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C73C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C748);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C760);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C76C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C778);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C784);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C798);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C7EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C800);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02AF6C", D_0009C80C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002D9FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002DCB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002DFD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E2F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E36C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E3E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E59C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E640);

INCLUDE_ASM("nonmatchings/music_main_plugin_02AF6C", func_0002E6CC);

