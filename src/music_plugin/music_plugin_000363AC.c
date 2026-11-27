/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000363AC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036448);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036598);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000366B0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000366B0(void *arg0) {
    func_000362A4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E7C8;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000366E4);
#endif

#if FW_VERSION == 100
void func_000366E4(s32 **arg0) {
    *arg0 = &D_0005E7C8;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000366E4(M2C_UNK **arg0) {
    *arg0 = &D_0005E7C8;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003670C);
#endif

#if FW_VERSION == 100
void func_0003670C(s32 **arg0) {
    *arg0 = &D_0005E7C8;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0003670C(M2C_UNK **arg0) {
    *arg0 = &D_0005E7C8;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036734);
#endif

#if FW_VERSION == 100
void func_00036734(s32 **arg0) {
    *arg0 = &D_0005E7C8;
    func_00036324((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003676C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000367B4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000368D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000368D8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E7F8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    sce_paf_private_memset(arg0 + 0x1C, 0, 6);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036924);
#endif

#if FW_VERSION == 100
void func_00036924(s32 **arg0) {
    *arg0 = &D_0005E7F8;
}
#endif

#if FW_VERSION == 152
void func_00036924(M2C_UNK **arg0) {
    *arg0 = &D_0005E7F8;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036934);
#endif

#if FW_VERSION == 100
void func_00036934(s32 **arg0) {
    *arg0 = &D_0005E7F8;
}
#endif

#if FW_VERSION == 152
void func_00036934(M2C_UNK **arg0) {
    *arg0 = &D_0005E7F8;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036944);
#endif

#if FW_VERSION == 100
void func_00036944(s32 **arg0) {
    *arg0 = &D_0005E7F8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00052484);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E6EC);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E6F0);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E6F4);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E6F8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E708);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E718);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E738);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E768);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E798);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E7C8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E7F8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003696C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000369C0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036ABC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036B28);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036B8C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036BB4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036C60);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036CD8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036D80);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036DE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036E4C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00036F2C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037024);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000370F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037130);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037164);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037238);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000372AC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037354);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037464);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000374D4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003753C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000375A8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000375EC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003764C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037690);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000376FC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037760);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000377D0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003A284);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039EC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003781C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037984);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000379E4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037A1C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037BE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037C10);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037D0C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037DF8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037EEC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037F3C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00037F98);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038078);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038158);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038264);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038318);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000383D8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038448);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038528);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038618);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038654);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038688);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000386F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038744);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000387C4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003884C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038924);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038978);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000389C4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038A08);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038A3C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038A64);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038AB4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038B5C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B6F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B340);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038C04);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038C7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B7E4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B42C);
#endif

#if FW_VERSION == 100
s32 func_00038CA8(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg2 < 3U) {
        M2C_FIELD(&D_00063070, s32 *, 0) = arg0;
        var_v1 = 0;
        M2C_FIELD(&D_00063070, s32 *, 0x1C) = arg1;
        M2C_FIELD(&D_00063070, u32 *, 0x50) = arg2;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038CD4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038D18);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038D48);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038D78);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038EFC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00038F5C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039008);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039074);
#endif

#if FW_VERSION == 152
s32 func_0003BA84(s32 arg0) {
    return ((arg0 ^ 5) != 0) ? arg0 : 1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039210);
#endif

#if FW_VERSION == 100
s32 func_00039210(s32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != 5) {
        var_v1 = arg0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039228);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003942C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000394F8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000396B4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039764);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000397EC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000398E8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003993C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C5C4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C5F4);
#endif

#if FW_VERSION == 152
void func_0003C1F4(s32 arg0) {
    func_0001D114(func_0001461C(), arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C224);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039980);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00039980(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 >= 0) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = -arg0;
    *arg2 = 1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000399A4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039A18);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039A8C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039BA0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039CB4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00039DD0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D594);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D1BC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E860);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E878);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005E920);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EA10);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EA94);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EB24);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EB3C);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EBC0);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EC80);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005ECF8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005ED88);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EDE8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EE54);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EEC0);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005EF44);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F034);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F0C4);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F1B4);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F22C);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F2D4);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F358);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F3DC);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F454);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F4FC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003A8FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003A9E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AA4C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AAB0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AB14);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DB18);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D73C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AB78);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ABD8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DCEC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D910);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ACE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AD54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ADC0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AE4C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AEB0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003AF1C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DC28);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B014);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B1B0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B25C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B318);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B3D4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B498);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F588);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E580);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E1A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003B588);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BC8C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EE3C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EA5C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BD78);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BDF4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BE60);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BECC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BF38);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003BFA4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C128);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C194);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C200);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F3E4_v150);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C26C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C314);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F5B8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F600);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F690);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F720);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063FB0);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063FD0);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063FD4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F7B8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000401B4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040320);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000404B0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040598);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040634);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004071C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000407A0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000408C0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040904);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040980);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000409FC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040A80);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040E78);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040EE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040F4C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041068);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041164);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004125C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000412F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000414C4);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063FF8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00064058);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000414F0_v150);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000415AC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041648);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000416D8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041714);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041750);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000417A8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041800_v150);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00064090);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041860);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C1C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C68);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041CCC_v150);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041DE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041DF4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042010);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004203C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004205C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042120);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F050);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F0E4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1A4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1EC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F27C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F30C);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063948);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063968);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0006396C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F3A4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003FD7C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003FEE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004006C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040154);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000401E8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000402D0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004034C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004046C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000404B0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004052C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000405A8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004062C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040A20);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040A90);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040AF4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040C08);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040D04);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040DEC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040E78);

void func_00041044(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    func_00033DB0((s32) ((temp_v0 == NULL) ? (arg0 + 0x14) : temp_v0), arg1, arg2);
}

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063990);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_000639F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004106C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041124);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000411B4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041244);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041280);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000412BC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041314);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004136C);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_00063A28);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000413CC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041784);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000417D0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041834);

s32 func_00041948(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041954);

void func_00041B5C(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x10);
    func_00033DB0((s32) ((temp_v0 == NULL) ? (arg0 + 0x14) : temp_v0), arg1, arg2);
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041B84);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041BA4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C68);
#endif

#if FW_VERSION == 100
void func_0003C38C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F628;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C3A4);
#endif

#if FW_VERSION == 100
void func_0003C3A4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F628;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C3BC);

void func_0003C3CC(M2C_UNK **arg0) {
    *arg0 = &D_0005F628;
}

void func_0003C3DC(s32 **arg0) {
    *arg0 = &D_0005F628;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C404);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C49C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C534);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C5A8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C61C);
#endif

#if FW_VERSION == 100
void func_0003C61C(s32 **arg0) {
    *arg0 = &D_0005F638;
    func_0003C3BC();
}
#endif

#if FW_VERSION == 152
void func_0003C61C(M2C_UNK **arg0) {
    *arg0 = &D_0005F638;
    func_0003C3BC();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C644);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C66C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C3BC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004224C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000422E0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042330);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004238C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004240C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041D94);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041E28);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041E78);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041ED4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C6A4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C6E0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C71C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C76C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C7BC);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F600);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F628);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F638);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F640);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F644);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003C814);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D094);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D164);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D234);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D2C8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D3B0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D45C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D498);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D4F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D548);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F658);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D5A8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D960);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003D9AC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DA10);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DB2C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DBC0);

void func_0003DD94(void *arg0, s32 arg1, s32 arg2) {
    void *var_a0;

    var_a0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_a0 == NULL) {
        var_a0 = arg0 + 0x14;
    }
    func_00033DB0((s32) var_a0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DDC0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DE7C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DF54);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DF90);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003DFE8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E040);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F6E8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E0A0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E450);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E49C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E500);

s32 func_0003E61C(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E628);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E844);
#endif

#if FW_VERSION == 152
s32 func_0003E844(void) {
    return func_00041E28() != 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042478);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000424F0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004253C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042560);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042590);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041FC0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042038);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00042084_v152);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000420A8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000420D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E870);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E890);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E954);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E980);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E9AC);
#endif

#if FW_VERSION == 100
void func_0003E9AC(s32 **arg0) {
    *arg0 = &D_0005F7B8;
    func_0003EAF4((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0003E9AC(M2C_UNK **arg0) {
    *arg0 = &D_0005F7B8;
    func_0003EAF4((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E9D4);
#endif

#if FW_VERSION == 100
void func_0003E9D4(s32 **arg0) {
    *arg0 = &D_0005F7B8;
    func_0003EAF4((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0003E9D4(M2C_UNK **arg0) {
    *arg0 = &D_0005F7B8;
    func_0003EAF4((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003E9FC);
#endif

#if FW_VERSION == 100
void func_0003E9FC(s32 **arg0) {
    *arg0 = &D_0005F7B8;
    func_0003EAF4((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EA34);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EAF4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EB70);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003EB70(void *arg0) {
    func_0003ECF0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F7C8;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EBA8);
#endif

#if FW_VERSION == 100
void func_0003EBA8(s32 **arg0) {
    *arg0 = &D_0005F7C8;
    func_0003ED80((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0003EBA8(M2C_UNK **arg0) {
    *arg0 = &D_0005F7C8;
    func_0003ED80((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EBD0);
#endif

#if FW_VERSION == 100
void func_0003EBD0(s32 **arg0) {
    *arg0 = &D_0005F7C8;
    func_0003ED80((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0003EBD0(M2C_UNK **arg0) {
    *arg0 = &D_0005F7C8;
    func_0003ED80((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EBF8);
#endif

#if FW_VERSION == 100
void func_0003EBF8(s32 **arg0) {
    *arg0 = &D_0005F7C8;
    func_0003ED80((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EC30);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EC98);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ECC4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ECF0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ED38);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003ED80);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EDA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003EDA8(s32 **arg0) {
    *arg0 = &D_0005F800;
    func_000359DC(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EDD0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003EDD0(s32 **arg0) {
    *arg0 = &D_0005F800;
    func_000359DC(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EE08);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EEB4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EEDC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003EF04);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F098);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F188);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1A0);
#endif

#if FW_VERSION == 100
void func_0003F1A0(s32 **arg0) {
    *arg0 = &D_0005F848;
}
#endif

#if FW_VERSION == 152
void func_0003F1A0(M2C_UNK **arg0) {
    *arg0 = &D_0005F848;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1B0);
#endif

#if FW_VERSION == 100
void func_0003F1B0(s32 **arg0) {
    *arg0 = &D_0005F848;
}
#endif

#if FW_VERSION == 152
void func_0003F1B0(M2C_UNK **arg0) {
    *arg0 = &D_0005F848;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1C0);
#endif

#if FW_VERSION == 100
void func_0003F1C0(s32 **arg0) {
    *arg0 = &D_0005F848;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F1E8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F230);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F278);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F3E4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003F3E4(void *arg0, s32 arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F860;
    temp_v0 = _Znwj(0x4184);
    func_000402E0(temp_v0, arg1);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F440);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F4A4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F508);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003F508(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F860;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F51C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003F51C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005F860;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F530);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F580);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F6A0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0003F6A0(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        var_v1 = func_00040608(temp_v0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F6D4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F708);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F77C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F7C0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F804);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F840);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F884);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F8C8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F90C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F950);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F994);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003F9D8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0003FA6C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00043688);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040088);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000401B0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000402E0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040410);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000404AC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000405EC);
#endif

#if FW_VERSION == 100
void func_000405EC(s32 arg0) {
    func_0004D018(arg0 + 8);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040608);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040624);
#endif

#if FW_VERSION == 100
void func_00040624(s32 arg0) {
    func_0004CFC8(arg0 + 8);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040640);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000406EC);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040770);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040804);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F758);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F7A8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F7AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F638);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F7B8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F7C8);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F800);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F838);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F848);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F850);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F860);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040878);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040B88);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040C64);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00040F30);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000410C8);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041260);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041384);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041384(s32 arg0) {
    func_000404AC(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000413A0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000413A0(s32 arg0) {
    func_00040548(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000413BC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000413BC(s32 arg0, s32 arg1) {
    func_00040804(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000413D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000413D8(s32 arg0, s32 arg1, s32 arg2) {
    func_00040878(arg0 - 4, arg1, arg2);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000413F4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000413F4(s32 arg0, s32 arg1, s32 arg2) {
    func_00040B88(arg0 - 4, arg1, arg2);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041410);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041410(s32 arg0, s32 arg1, s32 arg2) {
    func_00040C64(arg0 - 4, arg1, arg2);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004142C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004142C(s32 arg0, s32 arg1, s32 arg2) {
    func_00040F30(arg0 - 4, arg1, arg2);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041448);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041448(s32 arg0, s32 arg1, s32 arg2) {
    func_000410C8(arg0 - 4, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041464);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000414F0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000415B0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000415B0(s32 arg0) {
    return (arg0 & 0xFFE0) == 0xFFE0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000415C0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000415C0(s32 arg0) {
    return (arg0 & 0xFFE00000) == 0xFFE00000;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000415D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000415D4(s32 arg0) {
    return (4 - ((s32) (arg0 & 0x18) >> 3)) & 0xFF;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000415EC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000415EC(u32 arg0) {
    return (4 - ((arg0 >> 0x13) & 3)) & 0xFF;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041604);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00041604(s32 arg0) {
    return (4 - ((s32) (arg0 & 6) >> 1)) & 0xFF;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004161C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004161C(u32 arg0) {
    return (4 - ((arg0 >> 0x11) & 3)) & 0xFF;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041634);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_000416E0);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_0004178C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041800);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041880);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A1C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A60);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041A60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A6C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041A6C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A78);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041A78(void) {

}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A80);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041A80(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041A88);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041AE4);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041B00);

INCLUDE_RODATA("nonmatchings/music_plugin_000363AC", D_0005F880);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041B1C);

INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041B78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041BDC);
#endif

#if FW_VERSION == 100
s32 func_00041BDC(s32 arg0) {
    return sce_paf_private_memcmp(arg0, (s32) "VBRI", 4) == 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C04);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00041C04(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 4) << 8) | M2C_FIELD(arg0, u8 *, 5);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C18);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00041C18(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 6) << 8) | M2C_FIELD(arg0, u8 *, 7);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C2C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00041C2C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) << 8) | M2C_FIELD(arg0, u8 *, 9);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C40);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041C40(s32 arg0) {
    func_0001E000(arg0 + 0xA);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C5C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041C5C(s32 arg0) {
    func_0001E000(arg0 + 0xE);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C78);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041C78(s32 arg0) {
    func_0001E0C8(arg0 + 0x12);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041C94);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041C94(s32 arg0) {
    func_0001E0C8(arg0 + 0x14);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041CB0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041CB0(s32 arg0) {
    func_0001E0C8(arg0 + 0x16);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041CCC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00041CCC(s32 arg0) {
    func_0001E0C8(arg0 + 0x18);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_000363AC", func_00041CE8);
#endif
