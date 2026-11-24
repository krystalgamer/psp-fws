/* cflags: -Os */
#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002EB4);

void func_00002F04(void) {
    func_0000312C();
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002F20);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00002FEC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003080);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000312C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003158);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003368);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_00003444);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_0000357C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", func_000035D0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002EB4", module_start);

s32 module_stop(void) {
    func_000061BC();
    return 0;
}

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007200);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007210);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_0000721C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007228);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007230);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007240);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_002EB4", D_00007248);

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

