#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00072B60);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00072C3C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00072CFC);

s32 func_00072D68(void *arg0) {
    s32 temp_v0_2;
    s32 var_a1;
    void *temp_v0;

    var_a1 = 4;
    temp_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_000856C8(temp_v0);
        var_a1 = ((temp_v0_2 ^ 0x80108F01) != 0) ? temp_v0_2 : 0x15;
        if (temp_v0_2 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
            var_a1 = 0;
        }
    }
    return var_a1;
}

s32 func_00072DC4(void *arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 4;
    temp_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (temp_v0 != NULL) {
        func_000856FC(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00072DF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073AFC);

void func_00073B5C(s32 arg0) {
    func_000723BC(arg0 - 4);
}

void func_00073B78(s32 arg0) {
    func_000724B4(arg0 - 4);
}

void func_00073B94(s32 arg0) {
    func_000725B4(arg0 - 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073BB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073C6C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073D28);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073DE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073EA0);

s32 func_00073F64(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x14) >= 0) && (func_000535DC(arg0 + 0xC) != 0)) {
        if ((func_00052AC4(arg0 + 4) != 0) && (func_000535DC(arg0 + 0x2C) != 0)) {
            var_s1 = func_00052AC4(arg0 + 0x24) != 0;
        }
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00073FE0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074020);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074130);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074224);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000742A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000742DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_0007435C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000743C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074434);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000744A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074520);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_0007464C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074810);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074A5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074BF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074CF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00074ED0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_0007503C);

s32 func_0007505C(void) {
    return (D_000A562C != 0) ? 0 : 0x8010961D;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075074);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A14D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A1558);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A1574);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A158C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A15B0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", D_000A15D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075080);

void func_00075134(void) {
    func_00075080(1, 0xFFFF);
}

void func_00075154(void) {
    func_00075080(0, 0xFFFF);
}

void func_00075174(M2C_UNK **arg0) {
    *arg0 = &D_000A1668;
}

void func_00075184(M2C_UNK **arg0) {
    *arg0 = &D_000A1668;
}

void func_00075194(M2C_UNK **arg0) {
    *arg0 = &D_000A1668;
}

void func_000751A4(M2C_UNK **arg0) {
    *arg0 = &D_000A1668;
}

void func_000751B4(M2C_UNK **arg0) {
    *arg0 = &D_000A1668;
    scePaf_4E67BB08(arg0);
}

M2C_UNK *func_000751DC(void) {
    return &D_000A5658;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000751E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075520);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000755DC);

void func_00075658(void) {
    func_000755DC(1, 0xFFFF);
}

void func_00075678(void) {
    func_000755DC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075698);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075714);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075790);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075944);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075BF0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075CE8);

s32 func_00075DE8(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x74) != 0) {
        var_v1 = func_000505F8(arg0 + 4) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00075E24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00076008);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000762B4);

void func_00076348(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

s32 func_00076350(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00076358);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000763D0);

s32 func_00076448(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 func_00076450(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00076458);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_0007651C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_000765FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_072B60", func_00076664);

