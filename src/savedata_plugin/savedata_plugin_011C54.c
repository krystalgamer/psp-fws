/* cflags: -Os */
#include "common.h"
#include "savedata_plugin_decls.h"

#if FW_VERSION == 282
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
#endif

#if FW_VERSION != 250
INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226A0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226B8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000F758);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000F7C0);

void func_0000F844(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000F84C);
#endif

#if FW_VERSION < 282
void func_0000F86C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000F1A0(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000212C0;
    func_000020A4(arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00011ED4(arg0);
}

void func_0000F8C4(s32 arg0, s32 arg1, s32 arg2) {
    func_0000F1A0(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000212C0;
    func_000020A4(arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00011ED4(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000F91C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010BA8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000F9A8_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000FA34);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000226D0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011ED4);

#if FW_VERSION < 282
void func_0000FB5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010B04);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010BB8);
#endif

#if FW_VERSION == 282
void func_00011F54(struct Unk_func_00011F54_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011F5C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012008);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001209C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012170);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010DBC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000FC20);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000FCFC);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0000FDE4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001220C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000123C8);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012418);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012484);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001112C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000124F0);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012580);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012610);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000102C4);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000126B0);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_000126DC);

#if FW_VERSION < 282
void func_000103B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#else
void func_00012764(struct Unk_func_00012764_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001276C);

#if FW_VERSION < 282
s32 func_000104AC(void) {
    return 1;
}
#else
s32 func_00012860(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012868);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_00021238);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_00021258);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_00021270);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012A24);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012A7C);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012AB0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010814);
#else
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012BF4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012CB4);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012D18);

#if FW_VERSION < 282
s32 func_00010994(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001099C);
#endif

#if FW_VERSION == 282
s32 func_00012D8C(struct Unk_func_00012D8C_0 *arg0) {
    return arg0->unk10;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012D94);

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012ECC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000227B8);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_000212C0);

INCLUDE_RODATA("nonmatchings/savedata_plugin_011C54", D_00022738);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012EF8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00011D6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00012F84);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_0001300C);

#if FW_VERSION < 282
void func_00010BE0(void **arg0) {
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

INCLUDE_ASM("nonmatchings/savedata_plugin_011C54", func_00010C38);
#else
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
#endif
