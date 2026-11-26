/* cflags: -Os */
#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00026D98(void) {
    s32 temp_s0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = vsh_81BBD0D1(vsh_34DA1B67(), &D_000315F4);
    if (temp_v0 != 0) {
        temp_s0 = vsh_34DA1B67()->unk4;
        temp_v0_2 = scePaf_B7E6052B(0x1C);
        scePaf_93538664(temp_v0_2, temp_v0, 0x280000, 0);
        D_00031E60 = temp_v0_2;
        D_00031E5C = scePaf_6D491648(0, temp_s0 + 0xFFD7FC00, temp_v0 + 0x280100);
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00026E40);
#endif

#if FW_VERSION >= 260
void func_000264B4(void) {
    func_00028090((s32) &D_00032258);
    func_00027590();
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000276EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00026EC4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027044);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027074);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027824);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027880);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00026704);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000279A4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000270EC);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_0002713C);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027300);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027600);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000277B8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027F78);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027978);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027EB0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027F08);

s32 func_00027FD0(struct Unk_func_00027FD0_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_00027978(arg0->unk0, arg0->unk10, (u8 *)arg0 + 0x14, arg1);
    arg0->unk8 = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027324);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000274FC);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027590);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028018);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028444);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028C44);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000286FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_0002878C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028814);
#endif

#if FW_VERSION == 350
s32 func_000288C0(void) {
    return scePaf_723D0C80() != 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
s32 func_000288C0(void) {
    return scePaf_75062BCF() != 0;
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_0002778C);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027870);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000279BC);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027A24);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027BB8);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027CF4);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00027F5C);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028020);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028090);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_0002878C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_000288E0);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028B18);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028E0C);

INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00028EC8);

INCLUDE_RODATA("nonmatchings/photo_plugin_026D98", D_000315F4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_026D98", func_00029134);

void func_00029238(void) {
    func_00029134(1, 0xFFFF);
}

void func_00029258(void) {
    func_00029134(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void *func_00029278(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    struct Unk_func_00029278_var_a0 *var_a0;
    void *var_v0;
    struct Unk_func_00029278_var_a0 *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = var_a0->unk4;
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = var_v1->unk4;
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif
