#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000092E8);
#endif

#if FW_VERSION == 282
void func_000092E8(s32 arg0) {
    D_000A4238->unkE0(2, arg0 & 0xFF);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009318);
#endif

#if FW_VERSION == 282
void func_00009318(s32 arg0) {
    D_000A4238->unkE0(0x11, arg0 & 0xFF);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
void func_00009348(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00008CE4(arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AB18);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AC04);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AD5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AD78);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AD94);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AE10);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AE2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AE48);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B034);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B160);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B1A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B284);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B2D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B330);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B370);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B3B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B3D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B41C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B45C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B4A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B4E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B508);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B56C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B62C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009368);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000941C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000094D0);
#endif

#if FW_VERSION == 282
void func_000094D0(M2C_UNK **arg0) {
    *arg0 = &D_0009A4B0;
    if (sceVshCommonGui_071749CE() != 0) {
        sceVshCommonGui_4704D5BD(0);
    }
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009520);
#endif

#if FW_VERSION == 282
void func_00009520(M2C_UNK **arg0) {
    *arg0 = &D_0009A4B0;
    if (sceVshCommonGui_071749CE() != 0) {
        sceVshCommonGui_4704D5BD(0);
    }
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009570);
#endif

#if FW_VERSION == 282
void func_00009570(M2C_UNK **arg0) {
    *arg0 = &D_0009A4B0;
    if (sceVshCommonGui_071749CE() != 0) {
        sceVshCommonGui_4704D5BD(0);
    }
    func_00006DC8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099DB0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099DC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099DE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099E10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099E30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099E50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099E74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099E98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099EB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099ED8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099EF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099F18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099F38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099F58);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B15E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099F78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099F9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099FBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099FD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_00099FF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A010);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A02C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A04C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A06C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A084);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A09C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A0B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A0D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A0EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A108);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B17B0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A120);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A13C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A154);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A164);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A174);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A184);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1834);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000095C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A1B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A1B8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1860);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1870);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1884);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B19C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B19D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009684);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009900);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009960);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009AA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009B28);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009DF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009EA8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A350);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A368);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A390);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A3B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A3DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A400);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A418);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A43C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A460);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B914);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BA04);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BC80);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BCE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BD1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BD4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BD88);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BDC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009AA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BF98);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009DF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009EA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A480);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A484);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A488);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00009FE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A04C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A16C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A28C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A390);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A494);

void func_0000A4EC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = (func_0001EAD8(D_000A4250) ^ 1) & 0xFF;
    func_0001EA7C((s32) D_000A4250, temp_s1);
    func_0000A630(arg0, temp_s1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A548);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A60C);
#endif

#if FW_VERSION == 282
void func_0000A60C(struct Unk_func_0000A60C_0 *arg0) {
    arg0->unkC = (u8) (arg0->unkC ^ 1);
    func_00009684((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A630);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A694);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A818);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000A9FC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000CF70);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000CFE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D088);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D148);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D164);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D190);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D2E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D3B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D400);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D448);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D464);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D480);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D500);
#endif

#if FW_VERSION >= 282
s32 func_0000AA78(void) {
    return 0x201;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4D8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A4F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A500);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A510);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A51C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A528);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A534);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A544);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A554);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A564);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A56C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A578);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A584);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A590);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A59C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1C90);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A5F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A604);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A610);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A61C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1CE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1CF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1CF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1D04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1D10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1D1C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A628);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A634);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A644);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A654);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A65C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A664);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A670);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A678);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A680);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A68C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A694);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A6F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A708);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A720);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A73C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A748);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A75C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A778);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A790);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A7B0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A7B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A7CC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1ECC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B1ED0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A7E4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A928);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A944);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A960);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A97C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A998);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A9AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A9C0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B20C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A9DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009A9F4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B211C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B213C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2158);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2178);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2194);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B21B4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA14);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA2C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2208);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2228);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2244);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2264);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2280);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AA90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AAA4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2314);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AAC0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AAD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AAE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AAFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB44);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B23B0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AB84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ABA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ABC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000AA80);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B030);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B66C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B6F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B78C);

void func_0000B858(s32 arg0, s32 arg1, s32 arg2) {
    if (func_00011734(D_000A4274) != 1) {

    } else {
        func_0001DEFC((s32) D_000A4250);
    }
    D_000A4280 = D_000A4284;
    func_0000CE14(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B8D8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E41C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E4C8);
#endif

#if FW_VERSION >= 282
void func_0000B98C(struct Unk_func_0000B98C_0 *arg0) {
    void **temp_v0;
    void **temp_v0_2;

    temp_v0 = scePaf_72514A05(arg0->unk8, &D_0009A778, 0);
    M2C_FIELD(temp_v0, s8 *, 0x1FD) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x1FE) = 1;
    scePaf_86B41BA3(temp_v0);
    temp_v0_2 = scePaf_72514A05(arg0->unk8, &D_0009A790, 0);
    M2C_FIELD(temp_v0_2, s8 *, 0x1FD) = 0;
    M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
    scePaf_86B41BA3(temp_v0_2);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000B9F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BCBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BE08);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000BFAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C068);

void func_0000C184(struct Unk_func_0000C184_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk18;
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        arg0->unk18 = 0;
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C1C0);

void func_0000C274(struct Unk_func_0000C274_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        arg0->unk1C = 0;
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C2B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C450);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C6C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000C878);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000CB64);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000CE14);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D0A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000D124);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000DC8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E184);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E1E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E770);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011658);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011684);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000119E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011B40);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011B9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011C10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B24F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011CE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011D84);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011E58);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011EA0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E818);

void func_0000E898(void) {
    func_0000E818(1, 0xFFFF);
}

void func_0000E8B8(void) {
    func_0000E818(0, 0xFFFF);
}

void func_0000E8D8(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_00008CE4(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E8F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E954);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000E9D4);

void func_0000EA30(struct Unk_func_0000EA30_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_0000EA30_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

s32 func_0000EA8C(void) {
    return 0x200;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000EA94);

void func_0000EAD0(void **arg0) {
    void *temp_s0;
    struct Unk_func_0000EAD0_var_a0 *var_a0;
    struct Unk_func_0000EAD0_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000EB28);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000EBE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000ECA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000ED74);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000EE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AC88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AC98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACB0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ACF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD2C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AD98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADB0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B25C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B25CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B25DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B25EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B25F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2604);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2610);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2620);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2630);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009ADF4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2688);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2690);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2698);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B26A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B26B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B26BC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE1C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE34);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AE9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AEA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AEB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AEE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AEFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000EF24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AF18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009AF1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000F318);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000F590);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B07C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B08C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B0A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000FA80);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_0000FEB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000103C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000104E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B0F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B0F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B0F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010580);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B38A4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B29BC);
#endif

#if FW_VERSION >= 282
s32 func_00010CCC(void) {
    return 0x105;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010CD4);
#endif

void func_00010CF0(s32 arg0, s32 arg1, s32 arg2) {
    D_000A43C4 = arg0;
    D_000A43C8 = arg1;
    D_000A43CC = arg2;
}

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B118);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B128);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B134);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B140);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B14C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B158);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B168);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B178);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B184);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B190);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B19C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1BC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B1F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B204);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B210);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B21C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B228);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B234);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B240);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2A88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2A94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2ACC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2AF8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B248);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B254);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B260);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B26C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B278);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B284);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_000B2B84);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B290);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B29C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2AC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2C4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B2FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B308);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B310);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B31C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B324);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B32C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_0092E8", D_0009B338);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010D0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010ED8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000110D0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010D44);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00010D9C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00002F58);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011100);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011158);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_000111A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011250);

INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011408);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00014EDC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00014B64);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00003220);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_0092E8", func_00011438);
#endif
