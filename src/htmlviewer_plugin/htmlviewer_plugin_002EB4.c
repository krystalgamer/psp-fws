/* cflags: -Os */
#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002EB4);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003F7C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003FAC);
#endif

void func_00002F04(void) {
    func_0000312C();
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002F20);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002FEC);

#if FW_VERSION >= 300
void func_000041C4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_000044FC(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003080);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000312C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003158);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000044FC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002C6C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002D48);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002E80);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002ED4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000025D0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000267C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000027F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003368);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003444);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000357C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000035D0);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00005850);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000486C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00004A3C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00004AA0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00004AF8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", module_start);

s32 module_stop(void) {
    func_000061BC();
    return 0;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003514);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000035A8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002878);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000028D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002934);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_000036FC(void) {
    s32 temp_v0;
    s32 var_v0;

    D_00006554 = 1;
    temp_v0 = sceHVUI_Module_F7038231();
    var_v0 = 0;
    if (temp_v0 != 0) {
        D_00005C00 = 0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002A04);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002A70);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00002A70(void) {
    D_00005C00 = 8;
    sceHVUI_Module_146CB797();
    D_00005C00 = 0;
}
#endif

#if FW_VERSION == 260
void func_00002A70(void) {
    D_00005C00 = 8;
    sceHVUI_Module_146CB797();
    func_000028D8();
    D_00005C00 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003980);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000398C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000039A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000039B0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002AD8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000039E0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003A18);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002B90);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003B90);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003BDC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003D3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003D3C(s8 arg0) {
    D_00006554 = arg0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003A30);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002D6C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007200);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007210);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000063DC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000721C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007228);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007230);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007240);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007248);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00009308);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007254);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007280);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000072AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000072D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007304);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007330);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000735C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007388);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000073B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000073E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000740C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007438);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007464);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000746C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007470);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007474);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007478);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000747C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007480);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007484);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007488);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000748C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007490);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007494);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007498);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000074A0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000074A8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003494);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_000066B0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002D94);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003674);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003710);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000037A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000381C);

s32 func_00003910(void) {
    s32 temp_v0;
    s32 var_v0;

    D_00008B94 = 1;
    temp_v0 = sceHVUI_Module_F7038231();
    var_v0 = 0;
    if (temp_v0 != 0) {
        D_00008240 = 0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

void func_00003950(void) {
    D_00008240 = 8;
    sceHVUI_Module_146CB797();
    D_00008240 = 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003980);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000398C);

void func_00003998(s32 arg0) {
    D_00008244 = arg0;
}
#endif
