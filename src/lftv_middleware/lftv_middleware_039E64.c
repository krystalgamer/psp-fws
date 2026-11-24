/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

void func_00039E64(struct Unk_func_00039E64_0 *arg0) {
    arg0->unk8 = 1;
    arg0->unk0 = &D_00056648;
    arg0->unk4 = 0;
}

void func_00039E80(struct Unk_func_00039E80_0 *arg0) {
    arg0->unk8 = 1;
    arg0->unk0 = &D_00056648;
    arg0->unk4 = 0;
}

void func_00039E9C(M2C_UNK **arg0) {
    *arg0 = &D_00056648;
    func_0003A0A0((s32) arg0);
}

void func_00039EC4(M2C_UNK **arg0) {
    *arg0 = &D_00056648;
    func_0003A0A0((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_00039EEC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_00039F24);

void func_0003A004(struct Unk_func_0003A004_0 *arg0) {
    arg0->unk8 = 1;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A010);

u8 func_0003A098(struct Unk_func_0003A098_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A0A0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A0E4);

void func_0003A110(u32 arg0) {
    D_0005C5F0 = arg0;
    D_0005C5EC = 0xFA000U / arg0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A13C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A1C4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A24C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A35C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A394);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A4A8);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A5A4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A624);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A758);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A7B4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A810);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A890);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A8DC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003A9CC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003AA50);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003AB8C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003AD5C);

void func_0003ADC8(struct Unk_func_0003ADC8_0 *arg0, s32 arg1) {
    arg0->unk2C = arg1;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003ADD0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003AE70);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003AF1C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B038);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B0F8);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B134);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B1A8);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B21C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B298);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B38C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B528);

void func_0003B6C8(struct Unk_func_0003B6C8_0 *arg0) {
    void **temp_a0;
    void *temp_a1;

    arg0->unk18 = 1;
    temp_a0 = arg0->unk20;
    temp_a1 = *temp_a0;
    M2C_FIELD(temp_a1, M2C_UNK (**)(void **, void *), 8)(temp_a0, temp_a1);
}

void func_0003B6F8(struct Unk_func_0003B6F8_0 *arg0) {
    void **temp_a0;
    void *temp_a1;

    arg0->unk19 = 1;
    temp_a0 = arg0->unk1C;
    temp_a1 = *temp_a0;
    M2C_FIELD(temp_a1, M2C_UNK (**)(void **, void *), 8)(temp_a0, temp_a1);
}

void func_0003B728(struct Unk_func_0003B728_0 *arg0) {
    void **temp_a0;
    void **temp_a0_2;
    void *temp_a1;

    arg0->unk18 = 1;
    arg0->unk19 = 1;
    temp_a0 = arg0->unk1C;
    temp_a1 = *temp_a0;
    M2C_FIELD(temp_a1, M2C_UNK (**)(void **, void *), 8)(temp_a0, temp_a1);
    temp_a0_2 = arg0->unk20;
    M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **), 8)(temp_a0_2);
}

void func_0003B77C(struct Unk_func_0003B77C_0 *arg0) {
    void **temp_a0;
    void *temp_a1;

    temp_a0 = arg0->unk1C;
    temp_a1 = *temp_a0;
    M2C_FIELD(temp_a1, M2C_UNK (**)(void **, void *), 8)(temp_a0, temp_a1);
    arg0->unk1A = 1;
}

void func_0003B7B8(struct Unk_func_0003B7B8_0 *arg0) {
    arg0->unk1A = 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B7C0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B7E4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B808);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B8A0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B8E0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B920);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003B9CC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_039E64", func_0003BA78);

void func_0003BB2C(struct Unk_func_0003BB2C_0 *arg0) {
    func_0003BD24(arg0->unk24);
}

void func_0003BB48(struct Unk_func_0003BB48_0 *arg0) {
    func_0003BD50(arg0->unk24);
}

void func_0003BB64(struct Unk_func_0003BB64_0 *arg0, s32 arg1) {
    func_0003BD78(arg0->unk24, arg1);
}

void func_0003BB80(struct Unk_func_0003BB80_0 *arg0, s32 arg1, s32 arg2) {
    func_0003BE50(arg0->unk24, arg1, arg2);
}

void func_0003BB9C(struct Unk_func_0003BB9C_0 *arg0, s32 arg1) {
    func_0003BF14(arg0->unk24, arg1);
}

