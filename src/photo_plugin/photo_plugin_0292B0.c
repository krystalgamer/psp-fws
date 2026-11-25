#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_000292B0);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029320);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_000293B8);

s32 *func_000294A4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002968C(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_000294DC);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029550);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029588);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_000295CC);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002968C);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029714);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002986C);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029A3C);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029C20);

void func_00029D94(M2C_UNK **arg0, struct Unk_func_00029D94_1 *arg1) {
    struct Unk_func_00029D94_temp_a2 *temp_a2;
    M2C_UNK *temp_v0;
    struct Unk_func_00029D94_temp_v1 *temp_v1;

    temp_v1 = arg1->unk8;
    temp_a2 = arg1->unk0;
    temp_v0 = temp_v1->unk4;
    arg1->unk0 = temp_v1;
    temp_v1->unk4 = arg1;
    arg1->unk8 = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (temp_a2->unk4 == arg1) {
        temp_a2->unk4 = temp_v1;
    } else {
        temp_a2->unk8 = temp_v1;
    }
    temp_v1->unk0 = temp_a2;
}

void func_00029DD4(M2C_UNK **arg0, struct Unk_func_00029DD4_1 *arg1) {
    struct Unk_func_00029DD4_temp_a2 *temp_a2;
    M2C_UNK *temp_v0;
    struct Unk_func_00029DD4_temp_v1 *temp_v1;

    temp_v1 = arg1->unk4;
    temp_a2 = arg1->unk0;
    temp_v0 = temp_v1->unk8;
    arg1->unk0 = temp_v1;
    arg1->unk4 = temp_v0;
    temp_v1->unk8 = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (temp_a2->unk4 == arg1) {
        temp_a2->unk4 = temp_v1;
    } else {
        temp_a2->unk8 = temp_v1;
    }
    temp_v1->unk0 = temp_a2;
}

void func_00029E14(void) {
    func_00029E40();
}

void func_00029E30(struct Unk_func_00029E30_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029E40);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029E4C);

void func_00029E8C(void) {
    func_00029EA8();
}

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029EA8);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029EC4);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029F70);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_00029FC8);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A0F0);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A21C);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A348);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A440);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A6C4);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002A948);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002AA28);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002AA90);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002ADF4);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B02C);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B0C0);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B0FC);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B158);

INCLUDE_RODATA("nonmatchings/photo_plugin_0292B0", D_00031614);

INCLUDE_RODATA("nonmatchings/photo_plugin_0292B0", D_0003161C);

INCLUDE_RODATA("nonmatchings/photo_plugin_0292B0", D_00031620);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B1B4);

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B44C);

void func_0002B53C(struct Unk_func_0002B53C_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_00031648;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        arg0->unk4 = 0;
    }
}

void func_0002B584(struct Unk_func_0002B584_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_00031648;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        arg0->unk4 = 0;
    }
}

void func_0002B5CC(struct Unk_func_0002B5CC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_00031648;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
        arg0->unk4 = 0;
    }
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B61C);

void func_0002B6E8(void) {
    func_0002B61C(1, 0xFFFF);
}

void func_0002B708(void) {
    func_0002B61C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin_0292B0", func_0002B728);
#endif
