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

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ADBC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ADE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AED4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AEEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF24);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F060);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B000);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B01C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B050);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B06C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B094);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B110);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B130);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B14C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B17C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B190);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B1AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B8AC);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002048);

#if FW_VERSION == 282
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
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_0000206C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);

INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);
#endif

#if FW_VERSION != 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B8F0);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020E0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002154);

#if FW_VERSION == 282
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
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021E8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B96C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B988);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B9F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA0C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BA94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BAFC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB18);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC8C);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021EC);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBD4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC18);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BCEC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE58_v152);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD2C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEA0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD70);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BDE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BE94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BEB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BED4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BEF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF2C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060080);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600A4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BFB0);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F4);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BFF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C008);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C040);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0DC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C0F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C10C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C124);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C140);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C15C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000602CC_v152);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C174);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C2F0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060468);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C310);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C44C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C474);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C498);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C4F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C510);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C52C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C568);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C588);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C5EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C608);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C624);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C63C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C658);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000607C8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C670);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C684);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0006080C);
#endif

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C6FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C714);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C730);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C754);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C76C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C780);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7BC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060930);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060950);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060970);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060990_v152);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C798);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7A8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000609D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000609EC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7BC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C7E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C804);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C820);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C840);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C85C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C874);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C890);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8AC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C8F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C914);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C92C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C94C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C980);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C994);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C9EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CA08);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020C4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000029B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00002840);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00003000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00003068);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000030DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000314C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000321C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000032EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000033C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003434);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00003164);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003224);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00003600);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000370C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003784);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00004008);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004098);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004188);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00003E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003E94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004200);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004408);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004478);

INCLUDE_ASM("nonmatchings/music_plugin", func_000044DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000046B8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000046F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000047AC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00005134);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B6C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00004C00);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00005314);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004D80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00004F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000050F0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000059A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005EF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006060);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000542C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005824);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005894);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000058D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005900);

INCLUDE_ASM("nonmatchings/music_plugin", func_000063C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006450);

INCLUDE_ASM("nonmatchings/music_plugin", func_000064B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006764);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000680C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000071D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000068D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000717C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007254);

INCLUDE_ASM("nonmatchings/music_plugin", func_000072C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007408);

INCLUDE_ASM("nonmatchings/music_plugin", func_000075C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000076D0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00008318);

INCLUDE_ASM("nonmatchings/music_plugin", func_000086F4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000773C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000077B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007B24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00007BC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_000082F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000088B8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000982C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00008B9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008D10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00009180);

INCLUDE_ASM("nonmatchings/music_plugin", func_000091C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000097B4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A520);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000097F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A750);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000099AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00009A0C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00009ABC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A8D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001100);
#endif

#if FW_VERSION != 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000011A0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00009B40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009C78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009CDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A24C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A2F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A3A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A5E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A67C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AA40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AC70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000AFB4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BF28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C170);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B014);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B134);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B288);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B29C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B2E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B304);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B608);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B7E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BB6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000BBE4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CF0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000D064);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000BC90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000BDF4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C63C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CC24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000D0C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DAB4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FCA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FFD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000105E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DCFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000ECC8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F150);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00010D14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_000117E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F394);

INCLUDE_ASM("nonmatchings/music_plugin", func_000101A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000108B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000110CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011130);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011178);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011228);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011290);

INCLUDE_ASM("nonmatchings/music_plugin", func_000113E8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00012B20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00011558);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00011A74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011D40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011FE4);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_000011C4);

void func_00001250(void) {
    func_000011C4(1, 0xFFFF);
}

void func_00001270(void) {
    func_000011C4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00001290);

#if FW_VERSION != 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000012C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00012E98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012EB8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00014338);
#endif

void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_0000150C(arg0, arg1, var_v0);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00012F80);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000143D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014440);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00012FA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012FFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001307C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000130D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000131D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001322C);
#endif

void func_00001340(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000015C0(arg0, arg1, var_v0);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000132D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013334);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013390);

INCLUDE_ASM("nonmatchings/music_plugin", func_000133EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001346C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000134C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013548);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013558);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013598);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013614);
#else
void func_00001390(void) {
    func_0000166C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_000013AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001478);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_0000150C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00013794);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013878);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001392C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000139DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013A34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013A50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013BB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013D08);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000153A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000153DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00013EA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00014020);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001403C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000140C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000140FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001415C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000141BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000141F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001421C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014300);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001450C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014540);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00015AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001456C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00014588);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145CC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000145F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001461C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001607C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016154);

INCLUDE_ASM("nonmatchings/music_plugin", func_000161A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000161EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00014628);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD1C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00014634);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014994);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014D1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014D7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015070);

INCLUDE_ASM("nonmatchings/music_plugin", func_000150D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015134);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001519C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015488);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015560);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015568);

INCLUDE_ASM("nonmatchings/music_plugin", func_000155BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000155C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000155E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015720);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001592C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015ACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015B3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015BAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CDA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00015C1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016088);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016310);

INCLUDE_ASM("nonmatchings/music_plugin", func_000163DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016418);

INCLUDE_ASM("nonmatchings/music_plugin", func_000164F0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00016C50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000165FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016660);

INCLUDE_ASM("nonmatchings/music_plugin", func_000166C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016728);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016774);

INCLUDE_ASM("nonmatchings/music_plugin", func_000167C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001680C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016850);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001689C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000168F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016CEC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00017364);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017444);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016D58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00016DC8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00017530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016E18);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00016FB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017104);

INCLUDE_ASM("nonmatchings/music_plugin", func_000171A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001727C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000172D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017304);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001744C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000174E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000175A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000175EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000176EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017768);

INCLUDE_ASM("nonmatchings/music_plugin", func_000177DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000178C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000179E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017A80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017AEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017B44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C30);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018548);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00017CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017CF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017D88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017DA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017DC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017DDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00017DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017F3C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001876C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018858);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00017F9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018084);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001810C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000181A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000181E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001821C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018274);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018290);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018B50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000182AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018340);

INCLUDE_ASM("nonmatchings/music_plugin", func_000183B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000183F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000185DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001865C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018DD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018E10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000186A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000186D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018710);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001871C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000194B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00018738);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018768);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000187D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018AD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018DDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F50);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00019878);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00019134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019200);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00019990);

INCLUDE_ASM("nonmatchings/music_plugin", func_000199D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00019214);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019230);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001924C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019308);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00019B18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019DD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001934C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000195E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00019648);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019650);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019658);

INCLUDE_ASM("nonmatchings/music_plugin", func_000196B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019710);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001974C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019788);

INCLUDE_ASM("nonmatchings/music_plugin", func_000197C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019800);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019808);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001992C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019948);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019ADC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019AEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019B2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019C18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019C8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019DBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019E0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE6C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019E44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019F0C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A780);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00019FC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A004);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A048);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A0D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A128);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA28);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A1FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A234);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A23C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A294);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A2EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A334);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A428);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A430);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A468);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A470);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A4CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A4DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A51C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A5C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A66C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A714);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A798);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A7BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A80C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A970);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AC18);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B3DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B518_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B654);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ADB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ADC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AE54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AEA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AEFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001AF70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B074);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B184);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B214);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B518);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B58C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B5D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B66C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B850);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B8B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B920);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B96C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B9C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B9E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BA00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BA54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BAB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BB04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BB90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BD04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C398);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C408);
#else
INCLUDE_ASM("nonmatchings/music_plugin", func_0000166C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BE08);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C088);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C1A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C370);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C3A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C410);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBC0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C44C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C480);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C4B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C4E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C524);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C55C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C594);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C604);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C638);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C66C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C6A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C72C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CFA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C8A8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D114);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C8B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C918);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C970);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C990);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C9EC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D510);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CCB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CD80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CEF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CFA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D038);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D07C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D0D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D31C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DD30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D378);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D56C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D94C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DBF0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EAB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB4C_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EE3C_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EEA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EF80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F340);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DF68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E000);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E064);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0C8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F508);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E12C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E224);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E274);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E2C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E318);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D078);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D0E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E368);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E3D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E42C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5FC_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F634);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F69C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F71C_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F77C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F848);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E47C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F85C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F870);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F910);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F918);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F920);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F960);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E488);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E554);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E610);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E668);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E680);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061248);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061254);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D138);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E6FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E7E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E880);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E8C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E91C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E978);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E9D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EBC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EDBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EDFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EE3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EE7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F02C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F0A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F0E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F144);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F18C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F284);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F390);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F3B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F3EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F468);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F654);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F680);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F71C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F754);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F8B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F92C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F9F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FA30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FA68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FAE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FB6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FBC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FC30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FC68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FCBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FCE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FD60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FDF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FE6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FEA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FEF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001FFBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000200D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000200D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000200E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020150);

INCLUDE_ASM("nonmatchings/music_plugin", func_000201D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000201EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020240);

INCLUDE_ASM("nonmatchings/music_plugin", func_000202AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020300);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002033C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020394);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020400);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020430);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020490);

INCLUDE_ASM("nonmatchings/music_plugin", func_000204EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020528);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020564);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002067C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00021CA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00020774);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020830);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002088C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000208E8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00022010);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00020B50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020BAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020C08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020CF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021094);

INCLUDE_ASM("nonmatchings/music_plugin", func_000210E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021104);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002110C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002126C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002134C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021498);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D174);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D268);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D26C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D270);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D274);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D278);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D27C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000215D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021720);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D294);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D2A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021760);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002185C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021964);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021970);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002198C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000219A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000219C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000219E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000219FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021A28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021A64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021AD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021B00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D2E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D2FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021B50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021BC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D33C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D354);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021D3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021E34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021E7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00021F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002206C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022094);

INCLUDE_ASM("nonmatchings/music_plugin", func_000220F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022188);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022280);

INCLUDE_ASM("nonmatchings/music_plugin", func_000222D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000222F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022308);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D3F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D408);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022368);

INCLUDE_ASM("nonmatchings/music_plugin", func_000223DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022480);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D458);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022598);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D494);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D4F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D504);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D50C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D520);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D52C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D538);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D544);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D564);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022B40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002310C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023430);

INCLUDE_ASM("nonmatchings/music_plugin", func_000234A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023518);

INCLUDE_ASM("nonmatchings/music_plugin", func_000236D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023778);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023804);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002384C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023864);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023870);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023A1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023A24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023A2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023B40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023BFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023C30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023CA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023D18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023E58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023ED0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023F48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023FA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024044);

INCLUDE_ASM("nonmatchings/music_plugin", func_000240CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024290);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024318);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002439C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002444C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002461C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024710);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024734);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002476C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000247A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002486C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002488C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000248FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024970);

INCLUDE_ASM("nonmatchings/music_plugin", func_000249E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024A5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024BE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024D50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024DEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024DF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024DFC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D6C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D728);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024EF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024F00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024F0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024FAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024FD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000250E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025180);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002519C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002525C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025300);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025348);

INCLUDE_ASM("nonmatchings/music_plugin", func_000253BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025404);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025518);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025720);

INCLUDE_ASM("nonmatchings/music_plugin", func_000257B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025864);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002588C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000258F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025AF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025B28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025CC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025E0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025E80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025EB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025EE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026084);

INCLUDE_ASM("nonmatchings/music_plugin", func_000263EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002647C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000265A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000265BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000265D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000266B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000266D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D7E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D7F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000266EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D81C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D830);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D838);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D840);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D848);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D850);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D858);

INCLUDE_ASM("nonmatchings/music_plugin", func_000268E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026A6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026B20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026CC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026E68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026F98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002703C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002711C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027140);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002714C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002716C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000273D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027554);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027650);

INCLUDE_ASM("nonmatchings/music_plugin", func_000276F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000277EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027814);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002782C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00028D78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000278A4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027924);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027B58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027BB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D9F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DA04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DA20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028108);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DA64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DA70);

INCLUDE_ASM("nonmatchings/music_plugin", func_000282CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028434);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00029924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00028484);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000285F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028654);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028814);

INCLUDE_ASM("nonmatchings/music_plugin", func_000288E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028A78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028B78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028BEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028F18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029000);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029054);

INCLUDE_ASM("nonmatchings/music_plugin", func_000290B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029198);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DAD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002924C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002944C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002948C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000294DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029630);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029690);

INCLUDE_ASM("nonmatchings/music_plugin", func_000297C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029C38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029C78);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002B0D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00029C9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00029CC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029CD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029CDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029D90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029EDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029EE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029F74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029FF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A070);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A0D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A160);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A1D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A25C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A2CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A308);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A358);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A394);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A420);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A470);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A4AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A4FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A56C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A5D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A5DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DB94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DBC4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DBD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DBDC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DBE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DBF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC28);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC54);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DC98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCD8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DCF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DD78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A5E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A728);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A730);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A738);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A740);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A748);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A85C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002BCA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002BCCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002BCD8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061F10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061F28);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061F38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002BCE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C3A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C3F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C778);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C84C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C8A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C910);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CCC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CD08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CF18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D024);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0002A87C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A90C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002A99C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A9C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A9EC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002D120);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D1B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D240);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D268);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D290);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061FC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DE90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DDE0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DDF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AA24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B348);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B454);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B4B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B5A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B698);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00062130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DE90);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DEE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DEF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B790);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E9B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EB38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DF38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C124);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C38C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000621F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C4D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C564);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C5C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C690);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002EF38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C71C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C818);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C894);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C8DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C95C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C994);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C9E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CA1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CA9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DFF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CAA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CB20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CB28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CB44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CB60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CBBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CCB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CCF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CD64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CDB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D084);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D0C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D148);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D1CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D258);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D41C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D67C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D7AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D850);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0002D878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D900);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D928);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D950);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D98C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D9A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D9C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D9D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DA7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DAEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DCD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DDE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DDE8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002DE04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DE20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DE58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DE90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DEC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DF30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DF9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E000);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E038);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E078);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E0B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E128);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E170);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E1F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E228);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E260);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E2A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E2F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E360);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E3BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E404);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E43C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E494);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E4CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E504);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E54C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E558);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E584);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E5D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E638);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E698);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E724);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E020);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E058);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E088);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E098);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E79C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E898);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E8B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E0B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E0D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E0DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E8D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E934);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E968);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E970);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E9F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EA10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EA88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EB08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EC9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ED00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ED6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ED98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EF90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F074);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E0FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E11C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E134);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F08C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F19C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F210);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F25C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F30C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F3AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F3B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F3D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F47C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F530);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E14C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E164);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F550);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F660);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E18C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E1A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E1B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F680);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F8D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F904);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E27C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002F9C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FAD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FAF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E2B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E2D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E2D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FB30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FB90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FBC4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E2F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FBCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E328);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E340);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E348);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FCE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FDE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FFB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002FFEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E380);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030020);

INCLUDE_ASM("nonmatchings/music_plugin", func_000301C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000302B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030354);

INCLUDE_ASM("nonmatchings/music_plugin", func_000304BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030618);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003082C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030B04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003309C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00030D10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00030DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030E44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030EB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030FD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031098);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031164);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003169C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00031768);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000317CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031830);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00033C38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00031894);

INCLUDE_ASM("nonmatchings/music_plugin", func_000319AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031C94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031D20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031E10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031E1C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034244);

INCLUDE_ASM("nonmatchings/music_plugin", func_000324DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003426C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003427C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00031E24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031E7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031EFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031F24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031FB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003200C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032034);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003205C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032094);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032158);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003221C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000322B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003234C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003245C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003249C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003495C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000324DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00032538);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032594);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003266C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000326E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032708);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032730);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E500);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_000627B8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E528);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E538);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5BC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00034BF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00032768);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00032C5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032C90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032CEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032CF8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00035944);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00033488);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00033648);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033734);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00035D94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035E24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00033820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003385C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033898);

INCLUDE_ASM("nonmatchings/music_plugin", func_000338C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000338E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033920);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033930);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033940);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033950);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033960);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E618);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E670);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033988);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033AA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033D30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033DB0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003695C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00034274);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034608);

INCLUDE_ASM("nonmatchings/music_plugin", func_000347F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000348C8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00037348);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037690_v152);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00034CA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035030);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000353B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000357DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035994);

INCLUDE_ASM("nonmatchings/music_plugin", func_000359B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000359DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035A14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035A4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035B00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035B4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035BD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035C14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035CFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035D38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035DB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035DEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035E20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035E48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035EA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035EF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003601C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036048);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036074);

INCLUDE_ASM("nonmatchings/music_plugin", func_000360B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000360EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036114);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003613C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000361BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000362A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000362E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003634C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036374);

INCLUDE_ASM("nonmatchings/music_plugin", func_000363AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036448);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036598);

INCLUDE_ASM("nonmatchings/music_plugin", func_000366B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000366E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003670C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036734);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003676C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000367B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000368D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036924);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036934);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036944);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E708);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E718);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E738);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E768);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E798);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E7C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E7F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003696C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000369C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036B28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036B8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036BB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036C60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036CD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036D80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036DE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036E4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037024);

INCLUDE_ASM("nonmatchings/music_plugin", func_000370F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037130);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037164);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037238);

INCLUDE_ASM("nonmatchings/music_plugin", func_000372AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037354);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037464);

INCLUDE_ASM("nonmatchings/music_plugin", func_000374D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003753C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000375A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000375EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003764C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037690);

INCLUDE_ASM("nonmatchings/music_plugin", func_000376FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037760);

INCLUDE_ASM("nonmatchings/music_plugin", func_000377D0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00039EC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003781C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00037984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000379E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037A1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037BE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037C10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037EEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037F98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038078);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038158);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038264);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038318);

INCLUDE_ASM("nonmatchings/music_plugin", func_000383D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038448);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038528);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038618);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038654);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038688);

INCLUDE_ASM("nonmatchings/music_plugin", func_000386F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038744);

INCLUDE_ASM("nonmatchings/music_plugin", func_000387C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003884C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038924);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038978);

INCLUDE_ASM("nonmatchings/music_plugin", func_000389C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038A08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038A3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038A64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038AB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038B5C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B340);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00038C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038C7C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B42C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00038CA8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00038CD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038D18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038D48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038EFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039008);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039074);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BA84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00039210);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00039228);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003942C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000394F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000396B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039764);

INCLUDE_ASM("nonmatchings/music_plugin", func_000397EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000398E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003993C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C1F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C224);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00039980);

INCLUDE_ASM("nonmatchings/music_plugin", func_000399A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039A18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039BA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00039DD0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003D1BC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E860);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E878);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E920);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EA10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EA94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EB24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EB3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EBC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EC80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ECF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005ED88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EDE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EE54);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EEC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005EF44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F034);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F0C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F1B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F22C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F2D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F358);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F3DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F454);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F4FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003A8FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003A9E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AA4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AB14);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003D73C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AB78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ABD8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003D910);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003ACE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AD54);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003ADC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AE4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AEB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AF1C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003DC28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B014);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B1B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B25C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B318);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B3D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B498);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F588);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E1A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B588);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BC8C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003EA5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BD78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BDF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BE60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BF38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BFA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C128);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C194);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C200);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C26C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C314);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F0E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F27C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F30C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00063948);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00063968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006396C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F3A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FEE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004006C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040154);

INCLUDE_ASM("nonmatchings/music_plugin", func_000401E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000402D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004034C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004046C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000404B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004052C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000405A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004062C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040A20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040A90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040AF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040C08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040DEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040E78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041044);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00063990);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000639F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004106C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041124);

INCLUDE_ASM("nonmatchings/music_plugin", func_000411B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041244);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041280);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041314);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004136C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00063A28);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041784);

INCLUDE_ASM("nonmatchings/music_plugin", func_000417D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041834);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041948);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041954);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041B5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041B84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041BA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C38C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C404);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C49C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C534);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C5A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C61C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C66C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C6A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C6E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C71C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C76C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C7BC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F600);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F628);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F638);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F640);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C814);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D094);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D164);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D234);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D2C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D3B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D45C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D498);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D4F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F658);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D5A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D960);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D9AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DA10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DB2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DBC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DDC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DE7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DF54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DF90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DFE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E040);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F6E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E0A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E450);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E49C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E500);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E61C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E628);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E844);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00041FC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042038);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042084_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_000420A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000420D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E870);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E890);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E954);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EA34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EAF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EB70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EC30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EC98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ECC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ECF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ED38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ED80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EDD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EE08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EEB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EEDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EF04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F098);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F188);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F230);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F278);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F4A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F508);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F51C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F530);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F580);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F6A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F6D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F708);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F77C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F7C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F804);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F884);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F8C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F90C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F950);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F994);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F9D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FA6C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00043688);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00040088);

INCLUDE_ASM("nonmatchings/music_plugin", func_000401B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000402E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040410);

INCLUDE_ASM("nonmatchings/music_plugin", func_000404AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040548);

INCLUDE_ASM("nonmatchings/music_plugin", func_000405EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040608);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040624);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040640);

INCLUDE_ASM("nonmatchings/music_plugin", func_000406EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040770);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040804);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F758);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F7A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F7AC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F638);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F7B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F7C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F800);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F838);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F848);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F850);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F860);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040878);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040B88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040C64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040F30);

INCLUDE_ASM("nonmatchings/music_plugin", func_000410C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041260);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041384);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041410);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004142C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041448);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041464);

INCLUDE_ASM("nonmatchings/music_plugin", func_000414F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000415B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000415C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000415D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000415EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041604);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004161C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041634);

INCLUDE_ASM("nonmatchings/music_plugin", func_000416E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004178C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041800);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041880);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041AE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041B00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F880);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041B1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041B78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041BDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041C94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041CB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041F0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042084);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042204);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042288);

INCLUDE_ASM("nonmatchings/music_plugin", func_000422C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000423C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042470);

INCLUDE_ASM("nonmatchings/music_plugin", func_000424F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042528);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042594);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004266C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000426D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042758);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00045F64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00042858);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000429A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042B60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042C88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042D34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042E88);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004669C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000466B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00042F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042F9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00042FC4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F8E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F928);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F930);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F970);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F978);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F9B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F9C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F9DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F9F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FA18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FA38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042FD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043084);

INCLUDE_ASM("nonmatchings/music_plugin", func_000430A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000430C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000430D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000430E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000430F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043104);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004312C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043138);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043470);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004352C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000435A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000435C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FA90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FAC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000435E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043654);

INCLUDE_ASM("nonmatchings/music_plugin", func_000436C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004372C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043798);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004381C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000438A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004392C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043B24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043CB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043CC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043D48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043DC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043DCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043DD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043E88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043EF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000447F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044814);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044830);

INCLUDE_ASM("nonmatchings/music_plugin", func_000448EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000449A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044A64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044B20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044BE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044CA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044E60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044EE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044F18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044F84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044FF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004505C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000450C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045148);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045250);

INCLUDE_ASM("nonmatchings/music_plugin", func_000453A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000456A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004576C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000458DC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00049240);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049258);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000459E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045A04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00045A2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FBA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FBCC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FBF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045AD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045B84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045BA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045BD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045BEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045BFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045C0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045C34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045C40);

INCLUDE_ASM("nonmatchings/music_plugin", func_000460E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000461E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004625C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004627C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FC88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004629C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046310);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046384);

INCLUDE_ASM("nonmatchings/music_plugin", func_000463F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004646C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000464F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046584);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046618);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004681C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004699C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000469A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000469AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046A28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046AA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046AAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046AB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046B68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046BD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046C20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046C64);

INCLUDE_ASM("nonmatchings/music_plugin", func_000472B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047304);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047320);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004733C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000473C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047444);

INCLUDE_ASM("nonmatchings/music_plugin", func_000474AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047514);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004753C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047564);

INCLUDE_ASM("nonmatchings/music_plugin", func_000475A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000475BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000475D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000475F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000476D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004771C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047784);

INCLUDE_ASM("nonmatchings/music_plugin", func_000477E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047858);

INCLUDE_ASM("nonmatchings/music_plugin", func_000478CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000478F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047960);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047B98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FCC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048124);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004BB1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0004839C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048568);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0004870C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000487A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004882C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048890);

INCLUDE_ASM("nonmatchings/music_plugin", func_000488D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048918);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048920);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004895C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048998);

INCLUDE_ASM("nonmatchings/music_plugin", func_000489C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000489E8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C150);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C1BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00048A20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048A6C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00048B1C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C3D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00048C38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048C48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048C58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048C68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048C78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048CD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048D10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048D20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048D30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048D60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048F70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048F88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048FA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048FB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048FD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049000);

INCLUDE_ASM("nonmatchings/music_plugin", func_000491E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000492F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049320);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049340);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049360);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049380);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000493F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004CCA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00049504);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000495C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049808);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049860);

INCLUDE_ASM("nonmatchings/music_plugin", func_000498C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049950);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049978);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000499F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049B30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049C90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049DFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00049E98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A3A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A868);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A928);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A944);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A960);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A97C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A998);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A9A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A9B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004A9E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FD60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FD70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FDD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FDE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FDF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE28);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FE9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEA4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEBC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FECC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FED4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEF4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF1C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF24);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF6C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FF98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFD4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFDC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFE4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FFF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060004);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060010);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006001C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060030);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060040);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060048);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060050);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060058);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060070);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006007C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060094);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006009C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600BC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000600F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060100);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060108);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060110);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006011C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060128);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060130);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006013C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006014C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060154);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060160);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060170);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060178);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060180);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006018C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060198);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000601FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006020C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060218);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060220);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060228);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060230);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060238);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060248);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060250);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006025C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060268);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060270);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006027C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060284);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060290);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060298);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602BC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000602FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060308);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060314);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060320);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006032C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060530);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060540);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006054C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006055C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060568);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060578);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060588);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AD0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AD44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AD6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AD84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AD8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004ADA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AF78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004AFCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B03C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B058);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B074);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B080);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B08C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B098);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B0A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B0AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B18C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B204);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B244);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B2E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B3F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B504);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B57C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B640);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B650);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B918);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B920);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B928);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B930);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BA14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BA38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BA5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BA80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BAA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BAC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BAEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BB3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BB8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BC00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BC74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BC9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BCC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BF64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C168);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C178);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C188);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C198);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C1D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C200);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C230);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C260);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C290);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C2DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C384);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C4C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C774);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C77C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C7B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C7EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C824);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C85C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C8A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C950);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C958);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CA9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CBAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CBB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CCBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CD0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CD9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CDDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CE58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CEFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CF24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CF60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CFC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CFF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D008);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D010);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D018);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D020);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D1E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D408);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D570);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D6E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D850);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D8FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D9A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DA5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DA78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DA94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000608F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060900);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060928);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060938);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060948);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DE70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DF4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E244);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E468);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E470);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E628);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E74C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E768);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E784);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E840);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060968);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060990);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004E8C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EA94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004ECF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004ED7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EEC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F27C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00052D78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F36C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F410);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F59C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F5B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F5D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F60C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F628);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F660);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F67C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F698);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F6B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F6D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F6EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F774);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F7FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F97C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FA38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FAF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FBB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FBC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FC44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FCC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FD3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FED0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FEE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FEF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FFA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FFF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050060);

INCLUDE_ASM("nonmatchings/music_plugin", func_000500C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005011C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050170);

INCLUDE_ASM("nonmatchings/music_plugin", func_000501CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000501D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000501DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005022C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005027C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000502CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005031C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050644);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050660);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005067C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000506B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000506D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000506EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050708);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005075C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000507B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000507F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050838);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005087C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000508C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005090C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050914);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050964);

INCLUDE_ASM("nonmatchings/music_plugin", func_000509B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050CE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050D54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050D64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050D8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000609C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060AA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060AD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060BC0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C0C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C1C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051510);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051548);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051580);

INCLUDE_ASM("nonmatchings/music_plugin", func_000515B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000515F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051620);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051650);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051690);

INCLUDE_ASM("nonmatchings/music_plugin", func_000516AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000516C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005172C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060CB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051790);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051918);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051C0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051C58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051CA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051CC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00051FE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052260);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052270);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052280);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052290);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052320);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052330);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052340);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052350);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052360);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052388);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052408);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052420);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052428);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052430);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052538);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052784);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052868);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052A40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052D08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052EF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052EF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052FA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052FAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052FF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000532B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053380);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005340C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005349C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000534E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060CE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060DB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060DD4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060DF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060E20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060E48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005354C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000538AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053B24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053CB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054154);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054160);

INCLUDE_ASM("nonmatchings/music_plugin", func_000542D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054508);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054600);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054960);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054B18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054B50);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00058744);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000587CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D928);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005881C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058870);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058888);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058890);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D9D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DA7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005897C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000589B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058A50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058A6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058A88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058AD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058B1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DCD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058CA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058CC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058CC8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00054B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054BB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054BFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054C50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054CA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054E44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EB8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00065260);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065270);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00054E84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005510C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055128);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055148);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055150);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005526C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000553B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055424);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005546C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000554B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055508);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005555C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000555A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000555E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005563C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00059898);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00055700);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00055708);

INCLUDE_ASM("nonmatchings/music_plugin", func_000557FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005580C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005585C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000558AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055908);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055964);

INCLUDE_ASM("nonmatchings/music_plugin", func_000559A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000559EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055A44);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00059CF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00055B1C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00055B24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055C18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055CD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055D10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055D2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055D48);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00059F78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A028);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A0D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A19C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00055D64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055DC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055E2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055EC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055F5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00055FF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005608C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00056128);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056160);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056198);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0005620C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005629C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056308);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0005A4B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A5A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00056314);

INCLUDE_ASM("nonmatchings/music_plugin", func_000564A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061090);

INCLUDE_ASM("nonmatchings/music_plugin", func_000569C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056A88);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00056AA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056ADC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056D90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DE0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065428);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065448);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000610E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000610F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056E08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057070);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005708C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061108);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005710C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000574C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000574E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000574FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057518);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057534);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057544);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057554);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061128);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005757C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005797C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057990);

INCLUDE_ASM("nonmatchings/music_plugin", func_000579A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000579B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000579CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000579DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000579EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057A14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057BBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057BCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057BDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057DC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057E04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057E3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057ED8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057EF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FD4);
#else
INCLUDE_ASM("nonmatchings/music_plugin", func_00001698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000018A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001984);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B10);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B64);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00058054);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058090);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058640);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005868C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000589D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058A3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058AB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058E28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005904C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059128);

INCLUDE_ASM("nonmatchings/music_plugin", func_000591F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005922C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000592A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059374);

INCLUDE_ASM("nonmatchings/music_plugin", func_000593A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059640);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005975C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061148);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061158);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061188);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061198);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061208);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061220);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061230);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061234);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061238);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061250);
#endif
