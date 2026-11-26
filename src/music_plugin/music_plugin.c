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

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_plugin", D_0000201C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AD18);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);

void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = scePaf_D4FAE7D0(&D_0005AF74);
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

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F060);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF60);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF74);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);

INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AF88);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005AFB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BC80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BCA0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BCC0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000C6C);

void func_00000EEC(void) {
    sceVshCommonGui_1CF884A1();
}

void func_00000F08(void) {
    func_00000C6C(0);
}

void func_00000F24(s32 arg0) {
    void *temp_v0;

    sceVshCommonGui_1CF884A1();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00000FC8, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00000F70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000FC8);

void func_00001000(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_0005AF74);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0xC)();
        }
    }
    func_000009D4();
}

void func_00001050(void) {
    func_0000046C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000106C);
#endif

#if FW_VERSION < 282
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
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000010D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000018C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000294);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000005C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C890);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000748);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000810);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B084);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B094);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B0C0);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002048);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000180);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000318);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00000318(void) {
    s32 temp_v0;

    temp_v0 = scePaf_D4FAE7D0(&D_0000206C);
    if (temp_v0 != 0) {
        scePaf_1A45C860(temp_v0, 0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000034C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000003AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000041C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000046C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000058C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_0000206C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000610);
#endif

#if FW_VERSION >= 300
void func_00000A04(s32 arg0) {
    sceVshCommonUtil_0587F20C(&D_0000269C, 0x80, arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00000A2C);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000A9C);
#endif

#if FW_VERSION >= 300
void func_00000A54(s32 arg0) {
    sceVshCommonUtil_8584376D(&D_0000269C, arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00000A78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000009D4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005B8F0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000020D0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_plugin", D_000024D8);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_plugin", D_000027FC);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000020E0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002154);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000C6C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F04);
#endif

#if FW_VERSION == 330
void func_00000F04(void) {
    s32 temp_v0;

    temp_v0 = scePaf_D4FAE7D0(&D_000027FC);
    if (temp_v0 != 0) {
        scePaf_1A45C860(temp_v0, 0);
    }
}

INCLUDE_ASM("nonmatchings/music_plugin", func_00001000);
#endif

#if FW_VERSION == 282
void func_00000F04(void) {
    sceVshCommonGui_1CF884A1();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F20);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00001074);
#endif

#if FW_VERSION == 282
void func_00000F20(void) {
    func_00000C6C(0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00001140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001174);
#endif

#if FW_VERSION == 282
void func_00000F3C(s32 arg0) {
    struct Unk_func_00000F3C_temp_v0 *temp_v0;

    sceVshCommonGui_1CF884A1();
    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000FF8, 0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000F88);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_00001284);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00000FF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001030);

void func_00001080(void) {
    func_0000046C();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_0000135C);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_plugin", D_00002894);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000028C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000028EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002918);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00002924);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000109C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021E8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021EC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BB88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBD4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BBF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BC18);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD2C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FEA0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BD70);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BF94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005BFB0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F4);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C670);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005C684);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_0006080C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_plugin", D_000021F8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00003000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00003068);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000030DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000314C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000321C);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000370C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003784);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00004008);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004098);

INCLUDE_ASM("nonmatchings/music_plugin", func_00004188);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000047AC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005134);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000008C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000BE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000C8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000CF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000D64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000E00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000EB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00000F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004B6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00004C00);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00005314);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00004D80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00004F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000050F0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000059A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005EF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006060);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006118);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00000FE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000011D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000542C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005824);

INCLUDE_ASM("nonmatchings/music_plugin", func_00005894);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000058D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001278);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001358);

INCLUDE_ASM("nonmatchings/music_plugin", func_000013D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000013F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001488);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000773C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000157C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000169C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001720);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001764);

INCLUDE_ASM("nonmatchings/music_plugin", func_000017C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000077B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00007B24);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00009180);

INCLUDE_ASM("nonmatchings/music_plugin", func_000091C0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000097B4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000018DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000019FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001C10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001CB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001D7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000097F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A750);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000099AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00009A0C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00009ABC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A8D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001100);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000011A0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_plugin", func_000014CC);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_plugin", func_00000AA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000160C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001658);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001824);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A5E8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A67C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001DCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001F08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00001F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001F88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001FE4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0000204C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002040);

INCLUDE_ASM("nonmatchings/music_plugin", func_000020AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002178);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B288);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B29C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002220);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002248);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B304);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000228C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002354);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000237C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000023A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000023D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000B608);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B7E8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C63C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CC24);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000012C0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012E98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012EB8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00014338);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_0000150C(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012F80);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000143D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014440);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012FA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012FFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001307C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000130D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000131D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001322C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
void func_00001340(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000015C0(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION >= 282
void func_00001390(void) {
    func_0000166C();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_000013AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001478);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000150C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000015C0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013794);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013878);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000138F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001392C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000139DC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013A34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000025CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002728);

INCLUDE_ASM("nonmatchings/music_plugin", func_000028B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000028E0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013A50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013BB0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013D08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002B40);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000153A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002BA8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_000153DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00013EA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014020);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001403C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00002E28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002E94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002ED0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002EE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002F1C);
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000140FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001415C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849C4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000849F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00002FE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003054);

INCLUDE_ASM("nonmatchings/music_plugin", func_000030E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000141BC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000141F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00003140);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001421C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014300);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001450C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014540);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001456C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014588);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145CC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000145F0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001461C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015B4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015A00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000039B0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001607C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00003B28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00003B98);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00016154);

INCLUDE_ASM("nonmatchings/music_plugin", func_000161A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000161EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00014628);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD1C);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015C1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016088);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016310);

INCLUDE_ASM("nonmatchings/music_plugin", func_000163DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000045A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016418);

INCLUDE_ASM("nonmatchings/music_plugin", func_000164F0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016C50);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000165FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016660);

INCLUDE_ASM("nonmatchings/music_plugin", func_000166C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016728);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016774);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000049C4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000167C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001680C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00016850);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001689C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00004AFC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000168F8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016CEC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017364);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017444);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00016D58);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016DC8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00016E18);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016FB8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000054D0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017104);

INCLUDE_ASM("nonmatchings/music_plugin", func_000171A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001727C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000172D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005750);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017304);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001744C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000174E0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000175A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000175EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000176EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017768);

INCLUDE_ASM("nonmatchings/music_plugin", func_000177DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000178C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00005F50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017984);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000179E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017A80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000060F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017AEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00017B44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000061C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000622C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000062D0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017C30);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006410);

INCLUDE_ASM("nonmatchings/music_plugin", func_000065C0);
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00017DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00017F3C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001876C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018858);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00017F9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018084);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001810C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00006984);

INCLUDE_ASM("nonmatchings/music_plugin", func_000069D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000181A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000181E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001821C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018274);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018290);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00014338);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000012F0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000012F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00007080(arg0, arg1, var_v0);
}

void func_00001310(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000117CC(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000130D8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018B50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00012F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012EB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000182AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018340);

INCLUDE_ASM("nonmatchings/music_plugin", func_000183B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000183F0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000185DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00006EB8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001865C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018DD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018E10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000186A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007038);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000186D8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018710);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001871C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0001871C(void) {
    return func_00018CB4();
}

INCLUDE_ASM("nonmatchings/music_plugin", func_0000137C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001448);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00007080);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F04);
#endif

#if FW_VERSION == 152 || FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018A84);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00018810);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000191C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000194B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00018738);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00018F50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019878);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019174);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007B28);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000191B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000191EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019200);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019990);

INCLUDE_ASM("nonmatchings/music_plugin", func_000199D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00019214);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019230);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001924C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00007D0C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019308);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00008164);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019B18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CD2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00008460);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019DD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001934C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000195E0);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE78);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019E44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00019F0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00009108);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00009470);

INCLUDE_ASM("nonmatchings/music_plugin", func_000094C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000095D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009690);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009750);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A780);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00019FC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A004);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000091FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000092B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009364);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A048);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001A0D8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A128);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AA28);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001A1FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000095F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009674);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00009924);

INCLUDE_ASM("nonmatchings/music_plugin", func_00009934);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00009F9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A0D0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B3DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001B518_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001B654);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A258);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001AD94);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000A2CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000A3B4);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION < 260
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
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B1C8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BC8C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BCE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001BD04);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C398);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C408);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_0000166C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BE08);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001BFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C088);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFA0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFA8_v250);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFB8_v250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084AFC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B04);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B0C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084B20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CFA0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C038_v250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000B654);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C1A0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C370);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C3A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C410);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBC0);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C6A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C72C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7B4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CF48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005CFA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001C7C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001C8A8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D114);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D510);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C40C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C540);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C670);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000C740);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CBE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CCB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CD80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CE3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001CEF0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001CFA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D038);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D07C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D0D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000C9EC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1B0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D1F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D31C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CC28);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DD30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D378);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D56C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000CFB4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0B8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001D5F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D6D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001D94C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DBF0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EA5C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EAB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB4C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000D9D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000D9E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DA40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DA4C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EC2C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001ED84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DCD0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EE3C_v152);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001EEA0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EF80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000DD98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000DE48);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EFE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E118);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E1B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E664);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E728);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E8A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E900);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E94C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E9EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EA60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B868);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EC00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EC38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000ECEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EE64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF10);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E284);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E2BC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F2C0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F340);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F360);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000E344);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E4A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E5A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E6B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000E8F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EA70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EB04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EB44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EBB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CDB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000ED54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EDC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EE0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EF8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000EFC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F0A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F2B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F380);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000F390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DF68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFA4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DFEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E000);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E064);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E0C8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F508);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E12C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E224);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E274);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E2C4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00010284);

INCLUDE_ASM("nonmatchings/music_plugin", func_000102D4);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E42C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F634);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F5FC_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F634);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F69C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F6A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000F754);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F71C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F77C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F7E4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F840);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F848);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E47C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F85C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F870);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F910);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F918);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001F920);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F960);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E488);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E554);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E5F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0000FAE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FBA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FD18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FDD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FF14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0000FF54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010064);

INCLUDE_ASM("nonmatchings/music_plugin", func_000101E0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00010298);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010304);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010370);

INCLUDE_ASM("nonmatchings/music_plugin", func_000103DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010448);

INCLUDE_ASM("nonmatchings/music_plugin", func_000104C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000105DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001081C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010B6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010E18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00010FB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000112A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011488);

INCLUDE_ASM("nonmatchings/music_plugin", func_000114A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000114B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000115EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001167C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C148);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C150);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C154);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C160);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C16C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C178_v250);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C184);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C188);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C18C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061248);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084C98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084CE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001E62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E668);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E680);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061248);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061254);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005D138);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084D88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011688);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001173C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001175C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001177C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_000117CC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00018CB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001668);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001878);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001954);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001A8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001AE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001188C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000118F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011DD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011E90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00011F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012008);

INCLUDE_ASM("nonmatchings/music_plugin", func_000120A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012140);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E00);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E40);

INCLUDE_ASM("nonmatchings/music_plugin", func_000121F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000124A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000125A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012724);

INCLUDE_ASM("nonmatchings/music_plugin", func_000127F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000128F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000129D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000129E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084E9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F9D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012B08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012B78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012BE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012C58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00012D90);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00013AC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013C88);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00012E34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013068);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000132EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001333C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013344);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001334C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000133C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013444);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001344C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013454);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013508);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013574);

INCLUDE_ASM("nonmatchings/music_plugin", func_000135B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000135EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CA0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00013CCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013CE8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00013D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013DAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013E40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014054);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001406C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0001486C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014970);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001407C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001408C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084EE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084F60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001428C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001446C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000144F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014B04);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00014540_v201);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014588_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000145D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000145F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014B98);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001461C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014640);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00014CE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014DD0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00014768);

INCLUDE_ASM("nonmatchings/music_plugin", func_000147D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014830);

INCLUDE_ASM("nonmatchings/music_plugin", func_000148A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001491C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014948);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014988);

INCLUDE_ASM("nonmatchings/music_plugin", func_000149C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014C68);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C3F0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00084FB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00014DBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001553C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000157C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015BE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015C44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015D78);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00015DB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00015DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00015E20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E668);

INCLUDE_ASM("nonmatchings/music_plugin", func_0001E680);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00084FF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085008);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00016CD8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0001F4A4);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00021CA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00020774);

INCLUDE_ASM("nonmatchings/music_plugin", func_00020830);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002088C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000208E8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00022010);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00019244);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00021928);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001DDF0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000263EC);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0001EB38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002711C);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00028D78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000278A4);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00029924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00028484);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002B0D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00029C9C);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00022294);

INCLUDE_ASM("nonmatchings/music_plugin", func_000222D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002231C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002236C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000223B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000223BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022408);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085CC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085CE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022498);

INCLUDE_ASM("nonmatchings/music_plugin", func_000225B0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00022D6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022D98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022DD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022DEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022E08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022E24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022E54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022F74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023094);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023224);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F7E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002346C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023518_v250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023560);

INCLUDE_ASM("nonmatchings/music_plugin", func_000235A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000235F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013F78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00014004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000236D4_v250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023724);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002372C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000237A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002398C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023A30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023B98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085D10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D1C0_v250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023CF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023E48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023F40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023F74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023FA4_v250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023FD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024004);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024034);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024064);

INCLUDE_ASM("nonmatchings/music_plugin", func_000240A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000240D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024104);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024138);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024174);

INCLUDE_ASM("nonmatchings/music_plugin", func_000241A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000241B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000241C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000241C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000241D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000242EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024408);

INCLUDE_ASM("nonmatchings/music_plugin", func_000245BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024894);

INCLUDE_ASM("nonmatchings/music_plugin", func_000249B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024A08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024A58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024AAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025158);

INCLUDE_ASM("nonmatchings/music_plugin", func_000254B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025818);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D218);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D250);

INCLUDE_ASM("nonmatchings/music_plugin", func_000259E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025EAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000261F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000261F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000262A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026400);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026410);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026428);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026438);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026618);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026870);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026890);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026AC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027A60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00027C58);

INCLUDE_ASM("nonmatchings/music_plugin", func_000283DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028C88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028CD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028CF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028D0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028D34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028D5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028D98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028DA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028DAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028DE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028E24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028EB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028EF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028F28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028F44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028F68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000225EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002261C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002264C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022674);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002269C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000226D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022750);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D6C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D6D0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00085D10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002278C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002295C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000229E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022ACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022CF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022D38);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000296C8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00085D40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022D40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00022E80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022FC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00022FE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023010);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00085D40);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D710);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D71C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00023048);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D758);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D764);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D770);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D784);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D7A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D7B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D7D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D7F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D80C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D824);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D828);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008D830);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00023328);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023394);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023458);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002357C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023648);

INCLUDE_ASM("nonmatchings/music_plugin", func_000237FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00023AB8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0002A7C4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00023E58_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00024194);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002443C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024BA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00024E28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002504C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000251D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00025474);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002597C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002614C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026504);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026654);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026794);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026820);

INCLUDE_ASM("nonmatchings/music_plugin", func_000268F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026A30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026ACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026B90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00026E1C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0002D418);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D910);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00026EEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000276A8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00028054);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028144);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00028234);

INCLUDE_ASM("nonmatchings/music_plugin", func_000282F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002836C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00028A98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0002EDEC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00028B28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00029084);

INCLUDE_ASM("nonmatchings/music_plugin", func_00029B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A038);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A184);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A328);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A438);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A5F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A620);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A720);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A7AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A8DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AB14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ABBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ACA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002ADB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AE50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AE70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013548);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013558);

INCLUDE_ASM("nonmatchings/music_plugin", func_00013598);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AF5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AFC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B02C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B088);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B118);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B174);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B204);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B260);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B2BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B380);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B388);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B400);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B458);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B4B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B4E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B520);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B548);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B570);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085E9C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085EA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085EBC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085ED8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085EEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F28);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00085F98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000317DC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002B5A8_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002BB38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002BB94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002BC90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C14C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C234);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C27C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C284);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C2E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C30C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C334);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000860E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000860EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000860F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000860F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086100);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C36C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00032744);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C564_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C5A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C5AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C5DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C60C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C634);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C65C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C694);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C7D4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086180);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086190);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086194);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000329F8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C818_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CA74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000861B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000861C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC4C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086228);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008624C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086264);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086278);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086290);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008DC28);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00086298);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000862D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000862E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000862FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086318);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086320);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086328);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086330);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086338);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086344);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086364);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086384);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000863A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000863C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000863E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000863FC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086408);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086410);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008641C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00033F50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034278);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002DEC8_v201);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E1F0_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E2C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E3C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000345D4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E54C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E5EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E670);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086480);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086490);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086494);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086498);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008649C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000864A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000864A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002E678);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030810);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030860);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030F0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031198);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031220);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031238);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031260);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031270);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031298);

INCLUDE_ASM("nonmatchings/music_plugin", func_000312A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031318);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086C90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031360);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031704);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E14);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E1C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E54);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086E94);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086EAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086EC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086EE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086F00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086F18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086F30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086F4C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00086F6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003173C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003181C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003188C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000319B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00036DB8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00031A18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00031AF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031B38);

INCLUDE_ASM("nonmatchings/music_plugin", func_000328E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032904);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003292C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003297C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000329CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000329F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032A1C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087070);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087088);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000870A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000870B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032A54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032FBC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000870F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033048);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087138);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087150);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087188);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000871A0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008E834);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_000871A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000872E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087304);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008E9B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00087320);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008733C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00087358);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008736C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087388);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000873A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000873C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000873D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000873F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087408);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087424);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008743C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087450);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008746C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087480);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087494);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000874A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000874C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000874E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087500);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087520);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087540);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087560);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087564);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087568);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008756C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087570);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087574);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087578);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008757C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087580);

INCLUDE_ASM("nonmatchings/music_plugin", func_000332D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033560);

INCLUDE_ASM("nonmatchings/music_plugin", func_000335E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033694);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033700);

INCLUDE_ASM("nonmatchings/music_plugin", func_000339B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033AF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033FFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034038);

INCLUDE_ASM("nonmatchings/music_plugin", func_000341D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034450);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034604);

INCLUDE_ASM("nonmatchings/music_plugin", func_000348F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034970);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035434);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003591C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035980);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035F30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00035F80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00035FD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036078);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036098);

INCLUDE_ASM("nonmatchings/music_plugin", func_000360F4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B4F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00036174_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000361D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003622C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036234);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036270);

INCLUDE_ASM("nonmatchings/music_plugin", func_000362C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036308);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036348);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036370);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000363D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036494);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000875F0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EC88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ECB0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ECD8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ECF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ED18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ED3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ED60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ED80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EDA0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00087600);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087620);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087640);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087660);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087680);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000876A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000876C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000876EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008770C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008772C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087750);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087770);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EF34);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EF4C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EF64);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EF7C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EF98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EFB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EFD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008EFE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008F004);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008F01C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008F02C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008F03C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000364F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000877B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000877B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036568);

INCLUDE_ASM("nonmatchings/music_plugin", func_000367E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036848);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003699C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008791C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087944);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087968);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00036A20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036D1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00036DCC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00037004);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00087B50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087B68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087B90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087BB4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087BDC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00087C88);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00037004);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000372E0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C3C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C4A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00037354);

INCLUDE_ASM("nonmatchings/music_plugin", func_000373AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037408);

INCLUDE_ASM("nonmatchings/music_plugin", func_000374CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000374F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037554);

INCLUDE_ASM("nonmatchings/music_plugin", func_000376D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000378BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00037938);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00038B20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038B78);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CE80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CF18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002CFB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D024);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0002A87C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A90C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002A99C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A9C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002A9EC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
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

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DDF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002AA24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00039754);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002B348);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002B37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B454);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B4B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B5A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B698);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00062130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DE90);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DEE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DEF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002B790);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002E9B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002EB38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005DF38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C124);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C38C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000621F8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C4D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C564);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C5C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C62C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002C690);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002EF38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003ACE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002C71C);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000404BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000404D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040510);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040548);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040584);

INCLUDE_ASM("nonmatchings/music_plugin", func_000405C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B2D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B324);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B3E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B538);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B570);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00040644);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040684);

INCLUDE_ASM("nonmatchings/music_plugin", func_000406A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000407C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B5BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B65C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B6F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B868);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B890);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CBF8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B8D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B9B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003B9D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BA18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BB14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BB4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BB74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BB9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BBD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BBE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BC1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BC54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BC7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC40);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CC78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BCDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BCEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BD5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BDCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BDF4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0002CCB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BE54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003BE64);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E020);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00088088);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008808C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088098);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880BC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880C4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000880D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000880F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088100);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088110);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E058);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E078);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C714);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C74C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C774);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C78C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C794);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C7B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C9D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CA44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CA60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CA7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CA88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CA94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CAA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CAAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CAB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CB94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CC0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CC4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CCE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CE00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CF0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003CF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D048);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D058);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D320);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D328);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D330);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D338);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D3C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D400);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D41C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D464);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D488);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D4AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D4D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D4F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D5B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000884A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D644);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003D864);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DB2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DBD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DC84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DC8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DCD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DD28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DD68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DD70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DD78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DDD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DDE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DDF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003DED8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E1A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E298);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E3C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E558);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E574);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E5AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E5C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E5E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E61C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E638);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E654);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E670);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E68C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E6A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E730);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E7B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E938);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EB74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EB7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EC7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ECF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ED4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EE88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EE98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EEA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EEB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EEC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EED8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EF00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EF58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EFB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F018);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F080);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F0D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F128);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F184);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F18C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0004411C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F234);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F284);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F2D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F5F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F614);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F630);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F64C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F668);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F684);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F6A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F6BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F710);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F764);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F7A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F7EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F830);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F874);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F8C0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00044874);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F8C8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F918);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F968);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FC18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FC34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FC50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FC6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FCCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD74);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000884D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008856C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088590);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000885B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000885E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088618);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088640);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088660);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000886D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088718);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008871C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088720);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088724);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088728);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008872C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088730);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088734);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003FD90);

INCLUDE_ASM("nonmatchings/music_plugin", func_000404F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040530);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040568);

INCLUDE_ASM("nonmatchings/music_plugin", func_000405A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000405D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040608);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040638);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040678);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040694);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000406B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000406B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000406C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040724);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088748);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088758);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000887D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040788);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004090C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040BFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040C44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040C90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040CA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040CB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040CB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00040FD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004123C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004124C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004125C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004126C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004127C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000412E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004130C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004131C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004132C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004133C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004134C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041374);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041384);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000413F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004140C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041414);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004141C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041524);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041770);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041854);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041A6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041F64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042000);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042008);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042010);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042058);

INCLUDE_ASM("nonmatchings/music_plugin", func_000423B8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004248C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004256C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000425F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042688);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000426CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00042710);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088800);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088838);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088870);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088888);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000888A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000888C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000888EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088910);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088938);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088960);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004277C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042B00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042D44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042E44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042F14);

INCLUDE_ASM("nonmatchings/music_plugin", func_000433B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000433C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043534);

INCLUDE_ASM("nonmatchings/music_plugin", func_000437D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000438CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043C2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043E00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043E1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043E38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043EC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002D928);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058890);

INCLUDE_ASM("nonmatchings/music_plugin", func_00043F90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DA7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044070);

INCLUDE_ASM("nonmatchings/music_plugin", func_000440AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044144);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044160);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004417C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DBE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000441CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044208);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058B1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044294);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0002DDA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000443B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000443BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000443D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000443E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044450);

INCLUDE_ASM("nonmatchings/music_plugin", func_000444BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044534);

INCLUDE_ASM("nonmatchings/music_plugin", func_000445AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044620);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044694);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044710);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044910);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044918);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044A54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044CA0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000499E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00044CBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044D28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044DC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044DE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044ECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00044F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004500C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045084);

INCLUDE_ASM("nonmatchings/music_plugin", func_000450E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000451C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000452B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045378);

INCLUDE_ASM("nonmatchings/music_plugin", func_000453E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045414);

INCLUDE_ASM("nonmatchings/music_plugin", func_000454EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004555C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045618);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045728);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045798);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004586C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000458B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045910);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045954);

INCLUDE_ASM("nonmatchings/music_plugin", func_000459C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045A2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045A9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045AE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045CC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045D38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00045FA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000460AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004619C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046294);

INCLUDE_ASM("nonmatchings/music_plugin", func_000462E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046340);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046420);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046500);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046610);

INCLUDE_ASM("nonmatchings/music_plugin", func_000466C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004678C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000467FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000468E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000469D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046A0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046A40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046AA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046AF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046B78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046C00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046CD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046D24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046D70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046DB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046DE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046E10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046E64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046F0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046FB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00046FE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038C7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000470A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004714C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000471EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047224);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000889D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088A00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088A10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00088A20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047254);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004750C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004757C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047644);

INCLUDE_ASM("nonmatchings/music_plugin", func_000476B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004789C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000478AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047AD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047B98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047D5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047E0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047E94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047F90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00047FE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048024);

INCLUDE_ASM("nonmatchings/music_plugin", func_00048054);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004808C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0004D120);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000480E4);
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

#if FW_VERSION < 260
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
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E020);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E058);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E088);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E098);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00048E24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0002EB08);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003309C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00030D10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00030DE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030E44);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00050330);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050340);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050350);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050360);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050370);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000503DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050420);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050448);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050470);

INCLUDE_ASM("nonmatchings/music_plugin", func_000504AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000504C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000504DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000504E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000504F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005059C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000505D0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00030E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030EB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004B2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B2DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B304);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00090590);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000905D0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00030F10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00030FD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031098);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00031164);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003169C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00031768);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000317CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031830);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00033C38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00031894);

INCLUDE_ASM("nonmatchings/music_plugin", func_000319AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031C28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031C94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031D20);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00031E10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00031E1C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034244);

INCLUDE_ASM("nonmatchings/music_plugin", func_000324DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003426C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003427C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004B8B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B948);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BA54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00031E24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031E7C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00031ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031EFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00031F24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004BB50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BBC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BC30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BCB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BD88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BDC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004BDC8);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003495C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_000324DC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00032538);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032594);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003266C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000326E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032708);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032730);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E500);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000627B8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E528);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00088F78);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E538);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C5DC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5BC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00034BF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00032768);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00032C5C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E5E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C8B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004CBE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004D244);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089068);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089080);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00032C90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032CEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00032CF8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00035944);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00035AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00033488);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00033648);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033734);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00035D94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035E24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00033820);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003385C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033898);

INCLUDE_ASM("nonmatchings/music_plugin", func_000338C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000338E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033920);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00033930);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033940);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033950);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033960);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000890C8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E618);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E670);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00033988);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033AA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00033D30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004E60C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00033DB0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003695C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00034274);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6A4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6B8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008917C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6CC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00034608);

INCLUDE_ASM("nonmatchings/music_plugin", func_000347F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000348C8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00037348);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F8B0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_00037690_v152);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00034CA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00035030);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000353B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000357DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000501B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005075C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050B60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050B98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050E5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050F14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050FFC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00056608);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056670);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00051400);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052484);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00038C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00038C7C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003B42C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00038CA8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AA4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003AB14);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003D73C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AB78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003ABD8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003D910);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003ACE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003AD54);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003BC8C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003EA5C);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C194);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003C200);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C26C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003C314);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F0E4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1A4);
#endif

#if FW_VERSION == 152
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
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004046C);
#endif

#if FW_VERSION == 152
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
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00041244);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041280);
#endif

#if FW_VERSION == 152
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

#if FW_VERSION < 201
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

#if FW_VERSION < 260
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

#if FW_VERSION < 260
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E954);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E980);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003E9FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EA34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EAF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EB70);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EBD0);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F188);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1C0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F1E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F230);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F278);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F4A4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0003F508);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003F51C);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000415B0);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00041A78);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00041D54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00041D70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041DFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041E34);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00041E50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041F0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00041FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042084);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042204);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042288);

INCLUDE_ASM("nonmatchings/music_plugin", func_000422C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052D2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000423C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00042470);

INCLUDE_ASM("nonmatchings/music_plugin", func_000424F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042528);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042594);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004266C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000426D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042758);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00045F64);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000585A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0005336C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00053558);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005369C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00042858);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000429A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042B60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042C88);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00042D34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042E88);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004669C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000466B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00042F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00042F9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00042FC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E6EC);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FAC0);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00045A2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB00);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FB8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FBA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FBCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E708);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E718);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E738);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E768);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E798);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E7C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005E7F8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00048B1C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C3D4);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000899E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0005F848);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060530);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060540);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006054C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060558);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0006055C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060568);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060578);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00053A38);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004B9F8);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C168);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C178);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C188);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C198);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C1A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C1D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C200);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C230);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C260);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C290);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004C2DC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004C384);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00053BA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053EB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053F74);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004DA78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004DA94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0005FA90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060900);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054030);

INCLUDE_ASM("nonmatchings/music_plugin", func_000540A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054120);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054214);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004ECF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004ED7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE18);

INCLUDE_ASM("nonmatchings/music_plugin", func_000545C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000547BC);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EE64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EEC0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000549F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054A74);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004EF74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00054B00);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00059E08);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00054BB4_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00054C20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054C6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054CA0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005A7D8);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F410);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F59C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F5B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F5D4);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004F7FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F8BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004F97C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FA38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FAF4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FBB8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FBC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FC44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FCC8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FD3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00055A2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055B3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055C08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055C8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055CC0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005B010);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00055D2C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00055D98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055E04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055EF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056004);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005B48C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00056194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005638C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005B7F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000564DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000565C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056750);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005685C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005687C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056894);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089BD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089C50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089C6C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089C84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089CA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089CC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000568A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056954);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056974);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FED0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FEE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FEF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000569FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056A08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056D20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056E58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056E78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056E98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056F00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056F68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050170);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005027C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000502CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057408);

INCLUDE_ASM("nonmatchings/music_plugin", func_000575F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057880);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0004FF48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FFA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0004FFF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050060);

INCLUDE_ASM("nonmatchings/music_plugin", func_000500C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005011C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050170);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000501CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000501D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005799C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005CD14_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00057A14_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057A1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057A24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057AD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057B40);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000501DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005022C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005027C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000502CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005031C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050644);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050660);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005067C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00089D20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057C10);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005D690);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00050698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000506B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000506D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000583D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005848C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058548);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058604);

INCLUDE_ASM("nonmatchings/music_plugin", func_000586C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058784);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000506EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050708);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005075C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000507B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000507F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050838);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005087C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00058840);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058950);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058A1C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000508C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005090C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050914);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050964);

INCLUDE_ASM("nonmatchings/music_plugin", func_000509B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050C4C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00050C68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00058AD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058B40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058BAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058C18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058D04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058E0C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005E334);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00058F98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00059190);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005E698);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000592E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000593C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059554);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059660);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00050C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050CE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00050D44);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00050D54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00050D64);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00050D8C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000609C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A5C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060A80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060AA8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060AD0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060B50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060BC0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060C08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000596A4);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00051690);

INCLUDE_ASM("nonmatchings/music_plugin", func_000516AC);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052260);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052270);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052280);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052290);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00059800);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059964);

INCLUDE_ASM("nonmatchings/music_plugin", func_000599EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059A88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059AA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059B1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059B90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059C14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059C98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059D24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00059EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A0B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A12C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A1A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A20C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A320);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A374);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A3B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089EC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A858);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AA78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AA94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005FE2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAE8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005FE78);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FE94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FEB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FF6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060028);

INCLUDE_ASM("nonmatchings/music_plugin", func_000600E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000601A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060264);

INCLUDE_ASM("nonmatchings/music_plugin", func_000602E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060320);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060430);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060520);

INCLUDE_ASM("nonmatchings/music_plugin", func_000605A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000605D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060644);

INCLUDE_ASM("nonmatchings/music_plugin", func_000606B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006071C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060788);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060808);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060910);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060AD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060CF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060F70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061288);

INCLUDE_ASM("nonmatchings/music_plugin", func_000612A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000612C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000915C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00091640);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0009165C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00091674);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00091698);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000916B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000612CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061380);

INCLUDE_ASM("nonmatchings/music_plugin", func_000613A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000613C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000613D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000613E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000613F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061400);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061428);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061744);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006187C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006189C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000618BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006198C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061A10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061A94);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061B20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061C9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061EEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061F64);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061FDC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000620EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000620F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062100);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062210);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00091710);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00091740);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062254);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062530);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062650);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062658);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062674_v250);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062690);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062698);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005AAF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AB10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AB2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005ABE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005ACA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AD60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AE1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AEE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AF5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005AF9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B0AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B178);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B1FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B240);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B2AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B318);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B384);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B3F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B470);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B59C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B720);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005B914);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BA60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BB3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BCD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BDF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BE14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BE2C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089F10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089F90);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089FAC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089FC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00089FEC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A010);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BF88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005BFA8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000522B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000522F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052320);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005C044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C4C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C5C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C640);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C660);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A068);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C680);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C6F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C768);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C850);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C8DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005C968);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000645A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0005C9FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005CC04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CC0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CC14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CC1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CC98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CD14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CD1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CD24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CDD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CE44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CE90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005CECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D5B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D61C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D638);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D654);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00065250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005D670);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D704);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D798);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D800);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D868);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D890);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D8B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D8F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D910);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D92C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005D948);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DA2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DA80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DAEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DB48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DBC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DC34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DC58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DC90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DCC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DD68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DF44);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A0E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005DFD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005E4E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005E758);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005E7D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005E858);

INCLUDE_ASM("nonmatchings/music_plugin", func_000369C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005E9FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EA80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EAE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EB28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EB6C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006675C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000667D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066844);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061724);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006175C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006179C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00067308);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_0005EB74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EC80);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005ED8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005EF84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F3B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F6E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F7E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F8E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005F9DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FAE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FC90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FD40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005FF8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060074);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006007C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A190);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A198);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A1B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A258);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A354);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A3D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A474);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A48C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A510);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A5D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A654);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A6E4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A744);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A7B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A81C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A8B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008A9B4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AA50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AB4C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ABC4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AC6C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AD08);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008ADA4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AE1C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AEC4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AEE0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AEF8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AF1C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008AF3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000600E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000601B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060254);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060264);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006026C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060274);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006027C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060364);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060438);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006055C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060BD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060C84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060CE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00060DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000611BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061678);

INCLUDE_ASM("nonmatchings/music_plugin", func_000616EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00061724);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006175C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006179C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000621DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B008);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B058);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062588);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062674);

INCLUDE_ASM("nonmatchings/music_plugin", func_000626D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006273C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000627A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062804);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062864);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062974);

INCLUDE_ASM("nonmatchings/music_plugin", func_000629E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062A4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062BC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062C2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062C98);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062D7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062E78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00062E94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006815C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00063044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000630F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000631AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063268);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006332C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063348);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B0C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006343C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063B98);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00063C84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00063DD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063EB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063F24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063F90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00063FFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064068);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064180);

INCLUDE_ASM("nonmatchings/music_plugin", func_000641EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064258);

INCLUDE_ASM("nonmatchings/music_plugin", func_000642C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006433C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000693D0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00064460);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006450C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000645C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064684);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064748);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064764);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B148);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064858);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064CD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064DCC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064DEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064E68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064ED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064F40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00064FAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065018);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065130);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006519C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065208);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065274);

INCLUDE_ASM("nonmatchings/music_plugin", func_000652EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065364);

INCLUDE_ASM("nonmatchings/music_plugin", func_000653C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065424);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006545C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065494);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B1C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000654D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000655C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065624);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065688);

INCLUDE_ASM("nonmatchings/music_plugin", func_000656EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065750);

INCLUDE_ASM("nonmatchings/music_plugin", func_000658AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000659BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065BA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065C14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065D90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065EC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065F28);

INCLUDE_ASM("nonmatchings/music_plugin", func_00065F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006609C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066108);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066178);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B240);

INCLUDE_ASM("nonmatchings/music_plugin", func_000661B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066820);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066904);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066A5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066AB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066B70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066BD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066C38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066C9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066CF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066D5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066DC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066E24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066E88);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006BD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BDF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BE5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BE94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BECC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BF0C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B2E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C340);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C41C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C478);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C4D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C530);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C58C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C654);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C6B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C714);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C778);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C7F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C8D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00066EA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066EFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00066F50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006704C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00067148);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006724C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006CE4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00067404);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00092A08);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B300);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006D0BC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00067560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000679B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00067CE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00067DA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00067FB0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006DBFC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00068044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00068124);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006DDB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DE64);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00068220);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000682F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006833C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000683B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068434);

INCLUDE_ASM("nonmatchings/music_plugin", func_000684B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0006E5D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000688B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068944);

INCLUDE_ASM("nonmatchings/music_plugin", func_000689A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068CA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068D90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068E1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00068FF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B358);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B3C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00069018);

INCLUDE_ASM("nonmatchings/music_plugin", func_000690D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00069160);

INCLUDE_ASM("nonmatchings/music_plugin", func_000691F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00069258);

INCLUDE_ASM("nonmatchings/music_plugin", func_000692C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000693B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000694A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B3F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B450);

INCLUDE_ASM("nonmatchings/music_plugin", func_00069598);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A008);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A104);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B48C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B4A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A250);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A2FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A360);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A3C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A428);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A5A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A720);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A834);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006A840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006AB4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006AB88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006ABE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006AC38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B530);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006AC98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00070D5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006B05C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B0CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B130);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B244);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B250);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B460);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B488);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B4C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B500);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B528);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B550);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B588);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003E980);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B5E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B610);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B638);

INCLUDE_ASM("nonmatchings/music_plugin", func_0003EA34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B730);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B7AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B7E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B80C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B834);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B86C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B8D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B900);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B92C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B974);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006B9E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BA0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BA44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BAF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BB18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BB40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BCD0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052330);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052340);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052350);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052360);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006BE20);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BE68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006BEB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C118);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C270);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C3CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C528);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C670);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C71C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C750);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C784);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C7B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C7C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B5A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B608);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B630);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B640);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B678);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B6B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D70);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006C854);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006CC0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006CCF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006CDE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006D0F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00052388);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000523A8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000523B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006D340);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00073244);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006D520);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000523C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006D660);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006D67C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006D784);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006D88C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006D998);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DAA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DB28);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DBAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DC38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DC6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DCA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DCD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DE40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DEF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B6F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006DF90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006E310);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006E3FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006E78C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006E93C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EAEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006ECB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006ED74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006ED84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006ED98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EDB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EDC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EDE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EDF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EEA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EF50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006EFC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F038);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F1D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F218);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F224);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000523F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052408);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052420);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052428);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006F240);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F29C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F2B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B738);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F2D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00052430);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052538);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052784);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052868);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052A40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052D08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052DF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052EF0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052EF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0006F394);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F3BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F3D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F3E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F3F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F414);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F430);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F44C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F468);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F484);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F4A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F50C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F528);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F544);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F560);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F57C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F598);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F5B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F5D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F5EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F608);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F6FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F7F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006F91C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006FA48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006FAF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006FB98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0006FC44);

INCLUDE_ASM("nonmatchings/music_plugin", func_000705D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00070670);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00052F7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052F8C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00052F94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000706AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00070710);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B770);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B7B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B7B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B7F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B800);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B840);

INCLUDE_ASM("nonmatchings/music_plugin", func_000707A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000708E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00070988);

INCLUDE_ASM("nonmatchings/music_plugin", func_00070A04);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000768C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076A68);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00070BA0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00070D64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00070F24);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00076E70);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000711B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00071218);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071278);

INCLUDE_ASM("nonmatchings/music_plugin", func_000712D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071328);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000770F4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00052F9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00052FA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052FAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00052FF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000532B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00053380);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005340C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0005349C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000713DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071410);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071C04);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071C34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071CD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071D18);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B860);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000534E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060CE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D70);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060D88);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060DB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00071D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071E58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00071EA8);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00054B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054B50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00058744);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00071F80);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B878);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B880);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00077D6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078098);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00071FC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000722E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000725BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00072698);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_000784DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000784F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007851C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007855C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007859C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000785C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000785EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078624);

INCLUDE_ASM("nonmatchings/music_plugin", func_000786FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078724);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078868);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078890);

INCLUDE_ASM("nonmatchings/music_plugin", func_000788B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000788E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078938);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078964);

INCLUDE_ASM("nonmatchings/music_plugin", func_000789E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078A00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078A68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078B4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078C24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078C84);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00093028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00093060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0009308C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078CE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078DD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078EBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078FD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079010);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079110);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079120);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079128);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079408);
#endif

#if FW_VERSION == 152
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00054B6C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00054BB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054BFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054C50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054CA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054CE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054D8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00054E44);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_000930D8);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060EB8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00065260);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065270);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00054E84);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000550F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005510C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00072E3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00072E58);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00079C40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00072E74);

INCLUDE_ASM("nonmatchings/music_plugin", func_00072EE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00072F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00072FC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073044);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00079EB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079F50);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_000730E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007317C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00073220);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073260);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073410);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073418);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0007A3D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A3F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A410);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A448);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A464);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A480);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A488);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A4E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A540);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A5A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A608);

INCLUDE_ASM("nonmatchings/music_plugin", func_000730E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007317C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A72C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A750);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A8DC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00093118);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00093188);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000931D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A924);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AAD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_000735E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007361C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073638);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073654);

INCLUDE_ASM("nonmatchings/music_plugin", func_00073670);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00055128);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055134);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055140);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055148);

INCLUDE_ASM("nonmatchings/music_plugin", func_00055150);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005526C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B900);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008B970);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00059898);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00055700);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00059CF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00055B1C);
#endif

#if FW_VERSION < 260
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

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00074360);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007437C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0007B894);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00074398);

INCLUDE_ASM("nonmatchings/music_plugin", func_000743B4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0007B8D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00055FF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005608C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin", func_00056128);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056160);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056198);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005620C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005629C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000562F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056308);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0005A4B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005A5A4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00074F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00074F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00074F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00074F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00074F6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00074F94);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00074FCC);
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056AA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056ADC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00075054);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BA88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BB00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065428);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065448);

INCLUDE_RODATA("nonmatchings/music_plugin", D_000610E0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BBC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0007508C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000760B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076140);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007617C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056B10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056B60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00076240);

INCLUDE_ASM("nonmatchings/music_plugin", func_000762C4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_0007D79C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BC30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BC58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007633C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00056B9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056BAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00076494);

INCLUDE_ASM("nonmatchings/music_plugin", func_000764B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000764CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000764E8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056BBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056BCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00076524);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00056BDC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056BE4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00076554);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076678);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00056BEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056D78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056D90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00056DE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00076838);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076A3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076B90);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076BB0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076BD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076BF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076C00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076C10);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076C38);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076C40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076C48);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076D54);

INCLUDE_ASM("nonmatchings/music_plugin", func_00076E30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077098);

INCLUDE_ASM("nonmatchings/music_plugin", func_000770F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077154);

INCLUDE_ASM("nonmatchings/music_plugin", func_000771B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000771E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077208);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077244);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077254);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007725C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077264);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007726C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077274);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007727C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077284);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077480);

INCLUDE_ASM("nonmatchings/music_plugin", func_000775FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077774);

INCLUDE_ASM("nonmatchings/music_plugin", func_00077790);

INCLUDE_ASM("nonmatchings/music_plugin", func_000777AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000777C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000777D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000777E8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00093490);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BC58);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00093548);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061108);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin", func_00077810);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00077DBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000782F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000783B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000783D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000783EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078408);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078424);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078434);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078444);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007846C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000787B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000787EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078820);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078848);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078870);

INCLUDE_ASM("nonmatchings/music_plugin", func_000788AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000788FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007894C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000789C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078A34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078A5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078AC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078AC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078AD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078AD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D20);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D50);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D58);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078D60);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078EE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078F00);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078F18);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078F30);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078F40);

INCLUDE_ASM("nonmatchings/music_plugin", func_00078F50);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00060FB8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061028);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BCF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061108);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD20);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD30);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD3C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD48);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD4C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD78);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin", D_00065428);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00065448);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_000610E0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_000610F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BD98);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00056E08);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057070);

INCLUDE_ASM("nonmatchings/music_plugin", func_0005708C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570C4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000570E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BDB0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061108);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00079E68);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079E70);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079E78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079E80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079E88);

INCLUDE_ASM("nonmatchings/music_plugin", func_00079E90);
#endif

#if FW_VERSION < 201
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
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057F2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057F6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0007A11C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A14C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A17C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A1AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A1DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A228);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057F94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0007A2D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A430);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A6F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A6FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A734);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A76C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A7A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A7DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A828);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A8D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007A8D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AA38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AB64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AB6C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AC88);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007ACD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AD68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007ADA8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007ADD0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007ADF8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE30);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE38);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE48);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057FA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AE90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AEC0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AEE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AF10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007AF48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B090);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B0D4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00057FB4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00057FD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_0007B160);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B168);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B178);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B180);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B188);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B1A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B1C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B1D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B200);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B3C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B60C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B64C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B674);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B69C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B6D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B6E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B6E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B718);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B748);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B770);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B798);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B7D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B974);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B99C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B9DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B9EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007B9FC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA64);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BA9C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BAC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BC90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BCE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BD3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BD94);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BDF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BDFC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BE84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BEAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BED4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007BF0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C034);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C06C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C0A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C0CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C0F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C12C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C15C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C18C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C1B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C1DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C214);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C260);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C298);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C2D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C2F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C320);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C358);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C360);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C390);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C3C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C3E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C410);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C448);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C528);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C568);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C5B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C5F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C600);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C630);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C660);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C688);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C6B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C6E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C7EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C838);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C860);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C888);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C8C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C8C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C8D0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C8D8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C8E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C910);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C940);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C968);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C990);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007C9C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CB44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CB84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CBC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CBEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CC14);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CC4C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CC54);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CC8C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CCBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CCE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CD0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CD44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CE60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CEB8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CEE0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF08);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF40);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF48);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF60);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CF98);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CFC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007CFF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D018);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D1B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D1F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D218);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D240);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D278);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D280);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D2B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D2E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D308);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D330);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D368);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D440);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D478);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D4A0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D4C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D500);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D508);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D538);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D568);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D590);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D5B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D5F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D6C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D700);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D728);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D750);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D788);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D790);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D7C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D7F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D818);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D840);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D878);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D8DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D938);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D994);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D9BC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007D9E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA34);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA3C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA44);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DA74);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DAA4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DACC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DAF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DB2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DD00);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DE18);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DE2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DE90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DEF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DF58);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DF90);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DFC8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007DFF0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E018);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E050);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E058);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E088);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E0B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E0E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E108);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E140);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E2B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E2EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E314);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E33C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E374);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E37C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E3AC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E3DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E404);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E42C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E464);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E568);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E5CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E5DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E5EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E614);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E720);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E73C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E9C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007E9C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007EB04);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007EB24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F040);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F074);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F07C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F1C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F20C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F234);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F25C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F294);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F29C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F2A4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F2D4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F304);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F32C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F354);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F38C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F4B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F5E4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F630);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F658);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F680);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F6B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F6C0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F6C8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F6F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F728);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F750);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F778);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F7B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F900);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007F9EC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FAD8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FC10);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FC5C);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FC84);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FCAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FCE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FCEC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FCF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FD50);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FDAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FDE8);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FE24);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FE68);

INCLUDE_ASM("nonmatchings/music_plugin", func_0007FF78);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080094);

INCLUDE_ASM("nonmatchings/music_plugin", func_000800E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080108);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080130);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080168);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080170);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080178);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080180);

INCLUDE_ASM("nonmatchings/music_plugin", func_000801B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000801E0);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080208);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080230);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080268);

INCLUDE_ASM("nonmatchings/music_plugin", func_000803DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_0008051C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080568);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080590);

INCLUDE_ASM("nonmatchings/music_plugin", func_000805B8);

INCLUDE_ASM("nonmatchings/music_plugin", func_000805F0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000805F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080600);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080630);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080660);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080688);

INCLUDE_ASM("nonmatchings/music_plugin", func_000806B0);

INCLUDE_ASM("nonmatchings/music_plugin", func_000806E8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080814);

INCLUDE_ASM("nonmatchings/music_plugin", func_000808F4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080A2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080A84);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080AAC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080AD4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B0C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B14);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B24);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B2C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080B34);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080BC4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080BF4);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080C1C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080C44);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080C7C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080F80);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080FBC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00080FE4);

INCLUDE_ASM("nonmatchings/music_plugin", func_0008100C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00081044);

INCLUDE_ASM("nonmatchings/music_plugin", func_0008104C);

INCLUDE_ASM("nonmatchings/music_plugin", func_00081080);

INCLUDE_ASM("nonmatchings/music_plugin", func_000810B4);

INCLUDE_ASM("nonmatchings/music_plugin", func_000810DC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00081104);

INCLUDE_ASM("nonmatchings/music_plugin", func_0008113C);

INCLUDE_ASM("nonmatchings/music_plugin", func_000811CC);

INCLUDE_ASM("nonmatchings/music_plugin", func_000812F8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00081460);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin", func_00001698);

INCLUDE_ASM("nonmatchings/music_plugin", func_000018A8);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001984);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001ABC);

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B10);
#endif

INCLUDE_ASM("nonmatchings/music_plugin", func_00001B64);

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin", func_00058054);

INCLUDE_ASM("nonmatchings/music_plugin", func_00058090);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin", func_00088D58);
#endif

#if FW_VERSION < 260
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061208);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BE68);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BE78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BE88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BE98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BEA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BED0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061220);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BEF0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF00);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF10);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF28);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF38);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF50);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF60);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF78);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF88);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BF98);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFA8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFB8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFC8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFD8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008BFE8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C000);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C010);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C028);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C038);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C048);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C050);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C060);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C070);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C080);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C090);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0B0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0D0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C0F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C100);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C110);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C118);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C128);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C138);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C158);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C168);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C178);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C180);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C190);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1C0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1E8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C1F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C200);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C210);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C220);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C230);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C238);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C23C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C248);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C258);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C268);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C270);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C280);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C290);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2A0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2A8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2B8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2C8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2D8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2E0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2EC);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2F0);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2F4);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C2F8);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C31C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C320);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C324);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C328);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C32C);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C338);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C348);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C358);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C368);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C378);

INCLUDE_RODATA("nonmatchings/music_plugin", D_0008C388);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061198);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061208);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061220);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin", D_00061230);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061234);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061238);

INCLUDE_RODATA("nonmatchings/music_plugin", D_00061250);
#endif
