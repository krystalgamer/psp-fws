/* cflags: -Os */
#include "common.h"
#include "savedata_plugin_decls.h"

void func_00011C54(struct Unk_func_00011C54_0 *arg0, s32 arg1, s32 arg2) {
    func_0000F1A0(arg0, arg1);
    arg0->unk0 = &D_00022718;
    func_000020A4((u8 *)arg0 + 0x20, 0);
    arg0->unk24 = arg2;
    arg0->unk1C = 0;
    func_00011ED4(arg0);
}

void func_00011CAC(struct Unk_func_00011CAC_0 *arg0, s32 arg1, s32 arg2) {
    func_0000F1A0(arg0, arg1);
    arg0->unk0 = &D_00022718;
    func_000020A4((u8 *)arg0 + 0x20, 0);
    arg0->unk24 = arg2;
    arg0->unk1C = 0;
    func_00011ED4(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011D04);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011D9C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011E34);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226A0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226B8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226C0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226D0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011ED4);

void func_00011F54(struct Unk_func_00011F54_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011F5C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012008);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001209C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012170);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001220C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000123C8);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012418);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012484);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000124F0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012580);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012610);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000126B0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000126DC);

void func_00012764(struct Unk_func_00012764_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001276C);

s32 func_00012860(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012868);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012A24);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012A7C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012AB0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012BF4);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012CB4);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012D18);

s32 func_00012D8C(struct Unk_func_00012D8C_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012D94);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012ECC);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012EF8);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012F84);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001300C);

void func_00013048(void **arg0) {
    void *temp_s0;
    struct Unk_func_00013048_var_a0 *var_a0;
    struct Unk_func_00013048_var_v0 *var_v0;

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

