#include "common.h"
#include "dnas_plugin_decls.h"

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/dnas_plugin", module_start);

s32 module_stop(void) {
    func_0000161C();
    return 0;
}

void func_0000015C(void) {
    scePaf_F609FA81(D_00001F4C, &D_00001AB4, 0, 0);
    scePaf_CAF05F1D(D_00001F4C, &D_00001AB4);
}

void func_000001AC(void) {
    D_00001F50 = -1;
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000001BC);

s32 func_00000210(void) {
    return D_00001F50 != 0;
}

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001A38);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001A4C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001A64);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001A78);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001A90);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001AA0);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001AB4);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000220);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000002B8);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000003E8);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000448);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_0000046C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001AE4);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001B08);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001B28);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001B48);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001B6C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001B90);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001BB4);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001BD0);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001BF4);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C0C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C28);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C40);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C54);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C6C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001C88);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001CA0);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_0000049C);

void func_00000810(void) {
}

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D1C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D20);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D30);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D3C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D48);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D50);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D58);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D70);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001D8C);

INCLUDE_RODATA("nonmatchings/dnas_plugin", D_00001DA0);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000818);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000009FC);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000B14);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000C50);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000C6C);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000D84);

void func_00000F58(void) {
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00000F60);

void func_00001068(void) {
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001070);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_0000112C);

void func_0000117C(void) {
    func_00001198();
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001198);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_0000122C);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001254);

void func_000013B4(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_000014F0(arg0);
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000013D4);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001404);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001454);

void func_000014F0(void **arg0) {
    struct Unk_func_000014F0_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

INCLUDE_ASM("nonmatchings/dnas_plugin", func_00001510);

INCLUDE_ASM("nonmatchings/dnas_plugin", func_000015C4);
