/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

void func_00026D98(void) {
    s32 temp_s0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = vsh_81BBD0D1(vsh_34DA1B67(), &D_000315F4);
    if (temp_v0 != 0) {
        temp_s0 = M2C_FIELD(vsh_34DA1B67(), s32 *, 4);
        temp_v0_2 = scePaf_B7E6052B(0x1C);
        scePaf_93538664(temp_v0_2, temp_v0, 0x280000, 0);
        D_00031E60 = temp_v0_2;
        D_00031E5C = scePaf_6D491648(0, temp_s0 + 0xFFD7FC00, temp_v0 + 0x280100);
    }
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00026E40);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00026EC4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027044);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027074);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_000270EC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_0002713C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027300);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027600);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_000277B8);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027978);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00027F08);

s32 func_00027FD0(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00027978(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u8 *, 0x10), arg0 + 0x14, arg1);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028018);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028444);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_000286FC);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_0002878C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028814);

s32 func_000288C0(void) {
    return scePaf_75062BCF() != 0;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_000288E0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028B18);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028E0C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00028EC8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", D_000315F4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_026D98", func_00029134);

void func_00029238(void) {
    func_00029134(1, 0xFFFF);
}

void func_00029258(void) {
    func_00029134(0, 0xFFFF);
}

void *func_00029278(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}

