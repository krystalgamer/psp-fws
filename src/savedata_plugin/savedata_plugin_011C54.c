/* cflags: -Os */
#include "common.h"
#include "savedata_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011C54);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011CAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011D04);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011D9C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011E34);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", D_000226A0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", D_000226B8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", D_000226C0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", D_000226D0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011ED4);

void func_00011F54(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00011F5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012008);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_0001209C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012170);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_0001220C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_000123C8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012418);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012484);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_000124F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012580);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012610);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_000126B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_000126DC);

void func_00012764(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_0001276C);

s32 func_00012860(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012868);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012A24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012A7C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012AB0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012BF4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012CB4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012D18);

s32 func_00012D8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012D94);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012ECC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012EF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_00012F84);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin_011C54", func_0001300C);

void func_00013048(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

