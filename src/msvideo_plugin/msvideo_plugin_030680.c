#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030680);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_000306D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030720);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030770);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_000307C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030818);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_000308F0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030974);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_000309A8);

s32 func_000309DC(void *arg0) {
    func_00030CCC(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}

s32 func_000309FC(void *arg0) {
    func_00030CE8(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}

s32 func_00030A1C(void *arg0) {
    func_00030B34(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030A3C);

s32 func_00030AF8(void *arg0) {
    func_00030D84(M2C_FIELD(arg0, s32 *, 0));
    func_000310FC(M2C_FIELD(arg0, s32 *, 4));
    scePaf_545FE2DA(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030B34);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030B50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030BAC);

s32 func_00030C80(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

s32 func_00030C90(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 8) = 3;
    temp_v0 = func_00030E34(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 8) = 1;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030CCC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030CE8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030D04);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030D84);

s32 func_00030DB8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030DC4);

s32 func_00030E24(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030E34);

s32 func_00030F2C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xC) = 1;
    return 0;
}

s32 func_00030F3C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    return 0;
}

void func_00030F48(u32 arg0) {
    u32 temp_v1;
    u32 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 + 0xC0;
    if (var_a0 < temp_v1) {
        do {
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            var_a0 += 0x10;
        } while (var_a0 < temp_v1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030F74);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030F9C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00030FE8);

s32 func_000310BC(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_5FAC9869(4);
    var_v1 = 2;
    if (temp_v0 != NULL) {
        *arg0 = temp_v0;
        var_v1 = 0;
        *temp_v0 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_000310FC);

s32 func_0003111C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

s32 func_00031128(s32 *arg0) {
    return func_00033114(*arg0) != 0;
}

s32 func_00031148(s32 *arg0) {
    return func_000330CC(*arg0) != 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031168);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031440);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031718);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031978);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031BD8);

void func_00031E40(void) {
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031E48);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031EE8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00031F9C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065000);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065040);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_0006504C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065060);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065078);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065084);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", D_00065090);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00032094);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00032B58);

s32 func_00032C70(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00032C8C);

s32 func_00032DE0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x5F1) = 0;
    return 0;
}

void func_00032DEC(s32 arg0, s32 arg1, s32 arg2) {
    func_00032E08(arg0, arg1, arg2, 0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_030680", func_00032E08);

