/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E7E0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E840);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E880);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E8C0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E91C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E978);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001E9D4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EA14);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EAB0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EB4C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EBC8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EC08);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EC48);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EC88);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001ED04);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001ED60);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EDBC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EDFC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EE3C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001EE7C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F02C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F0A8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F0E8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F144);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F18C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F284);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F2E8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F390);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0001F390(void) {
    func_0002DE04((s32) &func_0001F18C);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F3B0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F3EC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F468);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00016CD8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F4A4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F5CC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F5FC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F654);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0001F654(s32 arg0) {
    D_00062098 = func_0001F5CC(arg0 + 6, 4);
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F680);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0001F680(s32 arg0) {
    D_0006209C = func_0001F5CC(arg0 + 6, 4);
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F6AC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0001F6AC(s32 arg0) {
    D_000620A0 = func_0001F5CC(arg0 + 6, 4);
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F6D8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F71C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F754);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F7E8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F8B4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F92C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001F9F8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FA30);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FA68);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FAE0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FB6C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FBC0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FBF8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FC30);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FC68);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FCBC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0001FCBC(s32 arg0) {
    D_000620A4 = func_0001F5CC(arg0 + 6, 4);
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FCE8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FD60);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FDF4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FE6C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FEA4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FEF8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FF14);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FF84);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0001FFBC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000200D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000200D0(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000200D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000200D8(void) {
    return 1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000200E0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020150);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000201D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000201D0(void) {
    sceKernelExitThread(1);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000201EC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020240);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000202AC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020300);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002033C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020394);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020400);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00020400(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelGetThreadId();
    if (temp_v0 > 0) {
        *arg0 = temp_v0;
    }
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020430);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020490);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000204EC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020528);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020564);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002067C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021CA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020774);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020830);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002088C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000208E8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022010);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020B50);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020BAC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020C08);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00020CF8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021094);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00021094(s32 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v0;

    temp_a1 = ((s32) (arg1 + 7) >> 3) * 8;
    temp_v0 = _Znaj(temp_a1, temp_a1);
    var_v0 = 0x80020190;
    if (temp_v0 != 0) {
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000210E0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000210E0(s32 arg0) {
    if (arg0 != 0) {
        _ZdaPv();
    }
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021104);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00021104(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002110C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002126C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002134C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021498);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D174);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D268);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D26C);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D270);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D274);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D278);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D27C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000215D0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021720);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D294);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D2A8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021760);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021820);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002185C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00019244);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021928);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021964);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021970);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00021970(void) {
    func_00025E0C(0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002198C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002198C(void) {
    func_00025E80();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000219A8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000219A8(void) {
    func_00025EB0();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000219C4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000219C4(void) {
    func_000265BC();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000219E0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000219E0(void) {
    func_000266D0();
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000219FC);
#endif

#if FW_VERSION == 152
s32 func_000219FC(void) {
    return ((func_00021A28() ^ 0x961E) == 0) ? 0 : 0x961D;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021A28);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021A64);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00021A64(void) {
    func_00021B50();
    func_00021B00();
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021A8C);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021AD0);
#endif

#if FW_VERSION == 152
s32 func_00021AD0(void) {
    func_000223DC();
    return (func_00021BC8() == 0) ? 0 : 0x8300;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021B00);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D2E4);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D2FC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021B50);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021BC8);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D33C);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D354);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021D3C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021E34);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021E7C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00021F3C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022050);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002206C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022094);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000220F8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022188);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022280);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000222D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000222D4(s32 arg0) {
    if (M2C_FIELD(&D_000620D4, s32 *, 0) == 0) {
        M2C_FIELD(&D_000620D4, s32 *, 0) = 1;
        M2C_FIELD(&D_000620D4, s32 *, 4) = arg0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000222F8);
#endif

#if FW_VERSION == 100
s32 func_000222F8(void) {
    D_000620D4 = 0;
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022308);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D3F0);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D408);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022368);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000223DC);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022480);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D458);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022598);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D494);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4A0);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4B8);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4C4);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4D0);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4DC);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D4F0);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D504);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D50C);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D520);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D52C);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D538);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D544);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D558);

INCLUDE_RODATA("nonmatchings/music_plugin_0001E7E0", D_0005D564);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022B40);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00022DF8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002310C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023430);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000234A4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023518);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000236D4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023778);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023804);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_0002384C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023864);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023870);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023A1C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00023A1C(s32 arg0) {
    return arg0 & 0x7F;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023A24);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00023A24(s32 arg0) {
    return arg0 & 0xFF;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023A2C);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023B40);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023BFC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00023BFC(s32 arg0) {
    func_00023870(__builtin_allegrex_min(sceIoClose(arg0), 0));
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023C28);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00023C28(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023C30);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023CA4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023D18);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023DE4);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023E58);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023ED0);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023F48);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023F80);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00023F80(void *arg0) {
    func_00023870(sceIoRemove(arg0));
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023FA4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00023FA4(void *arg0, void *arg1) {
    func_00023870(sceIoRename(arg0, arg1));
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00023FC8);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_00024044);

INCLUDE_ASM("nonmatchings/music_plugin_0001E7E0", func_000240CC);
#endif
