/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008B64);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00008B64(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00008F40(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008BB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008C48);

void func_00008CE4(void **arg0) {
    struct Unk_func_00008CE4_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008D04);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008D30);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008F40);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00008FEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000090C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00009200);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00009254);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000092A8);

s32 func_000092C8(void) {
    return 1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_0000AA34);
#endif

#if FW_VERSION >= 301
INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_0000AA5C);

void func_000092D0(void) {
    D_000A4234 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000092DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_000092E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_00009318);

void func_00009348(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_00008CE4(arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_00099DB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B11F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1200);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B120C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1218);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1224);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1230);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B123C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1248);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1250);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B125C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B126C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B127C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1288);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1294);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B12F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1300);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B130C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1318);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1320);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B0A68);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1328);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1334);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B134C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1354);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1360);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1370);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1380);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B138C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B1394);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B139C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_008B64", D_000B13F4);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_008B64", func_0000AA5C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
void func_000092D0(void) {
    D_000A4234 = 0;
}

void func_000092DC(s8 arg0) {
    D_000A4223 = arg0;
}
#endif
