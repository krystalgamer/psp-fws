/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION < 151 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006340);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006414);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005F58);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006088);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006168);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000045B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004704);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000047D8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000046F4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000487C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000646C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000659C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000667C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006708);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006870);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004AEC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006C50);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004CDC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000068D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006948);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004DE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004E50);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004EBC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004FC4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005064);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000693C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006C50);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006CE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006DE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006E58);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006F34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006FC8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000708C);

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005290);
#endif

#if FW_VERSION == 100
void func_00005290(void *arg0) {
    if (arg0 != NULL) {
        func_00007504(arg0, 0, 0x404);
    }
}
#endif

#if FW_VERSION >= 282
void func_000070C0(s32 *arg0) {
    if (arg0 != NULL) {
        sceNetMemset(arg0, 0, 0x404);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007244);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007358);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005434);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000073F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000077D8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000588C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005678);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005B2C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000060AC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000643C);
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000074A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000078F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007CD0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007FF8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008300);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080F0);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080D0);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DA4);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000080C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000834C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000086F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010888);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006A14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006D34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070FC);
#endif

#if FW_VERSION < 282
s32 func_00007324(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->unk4, 1);
    }
    return var_v0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000085A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008834);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008BE0);

s32 func_00008E00(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->unk4, 1);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E34);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000089C8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008BB0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008CC0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E44);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E64);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E90);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108A8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108BC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108CC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108FC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010900);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010904);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010908);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001090C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010910);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010930);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010934);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010938);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001093C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010940);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010944);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010948);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001094C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010950);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010954);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010958);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001095C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010960);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010964);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000901C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000090A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000090B4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009334);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000936C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000939C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000093C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009428);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000094A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009518);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009564);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009708);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009750);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000975C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000976C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000097D0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000097FC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009858);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009884);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000989C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000098AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000098BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000098D0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009914);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009964);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000099A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009AC8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009B9C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009C1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009CC0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D0C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D58);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D64);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D74);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009E70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009EDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F64);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F74);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F88);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F94);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009FAC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A0AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A0EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A12C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A16C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A268);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A324);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A368);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A370);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A378);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A41C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A478);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A480);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A4C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A4C8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A4E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A690);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A6A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A738);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A78C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A7D8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A7E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A7F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A848);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A888);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A99C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ABDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AC4C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ACF4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AD34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AD74);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ADB4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ADF4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AE34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AE3C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AE44);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AF80);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B04C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B0D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B1C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B23C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B264);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B2C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B318);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B490);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B608);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B708);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BC30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B724);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B740);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B760);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B79C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B7D8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B894);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B8C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B9F8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F20);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F24);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F28);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F2C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F30);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109D8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109DC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010ED4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F64);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F74);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109EC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010A7C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010A8C_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BC54);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BD1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BEA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C068);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C10C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C20C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C23C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C26C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C304);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C490);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C780);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CB24);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CC58);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CCA0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CEB8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D014);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D1DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D3F4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D550);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D718);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D888);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D9D0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DB70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DD10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DD7C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DDDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DDFC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DE1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DE60);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DEB8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF78);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF8C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF94);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF9C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DFE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E018);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E024);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010FFC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F9C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010AB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E1E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E3A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E3C8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E730);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7B8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F140);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F188);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F1DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F22C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000101B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00010204);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010AE8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010B08);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F08);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011308);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011408);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011508);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011608);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000EC30);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000EC78);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ECCC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ED1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000FCA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000FCF4);
#endif

#if FW_VERSION < 250
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000073E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000741C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007490);
#endif

#if FW_VERSION < 250
u8 *func_000074D0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

void *func_00007504(void *dst, s32 c, s32 n) {
    u8 *p;

    if (dst != NULL) {
        u8 v = c;
        p = dst;
        while (n > 0) {
            n--;
            *p++ = v;
        }
    }
    return dst;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007184);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007530);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008EB0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009098);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000091A8);

s32 func_00009328(void) {
    sceNetBpfClose();
    return 0;
}

s32 func_00009348(void) {
    s32 temp_v0;

    temp_v0 = sceNetBpfRead();
    return (temp_v0 < 0) ? 0x80410E87 : temp_v0;
}

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DF0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009374);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009500);

s32 func_00009588(s32 arg0) {
    D_00016528 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009598);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009818);
#endif
