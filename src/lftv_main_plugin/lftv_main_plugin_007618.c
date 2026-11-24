#include "common.h"
#include "lftv_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007618);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007694);

s32 func_000077C4(struct Unk_func_000077C4_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        var_v1 = func_0003D0D0(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000077FC);

s32 func_0000787C(struct Unk_func_0000787C_0 *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = arg0->unk10;
    var_v0 = 0x80004003;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x38);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007898);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000078D4);

s32 func_00007938(struct Unk_func_00007938_0 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;

    var_a1 = arg1;
    if (var_a1 == 0xF) {
        var_a1 = arg0->unk18;
    }
    temp_v0 = arg0->unk10;
    var_a2 = 0x80004003;
    if (temp_v0 != NULL) {
        var_a2 = 1;
        if (arg0->unk14 != 0x20) {
            var_a2 = func_0003D0E8(temp_v0, var_a1);
        }
    }
    return var_a2;
}

s32 func_00007990(struct Unk_func_00007990_0 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;

    var_a1 = arg1;
    if (var_a1 == 0xF) {
        var_a1 = arg0->unk18;
    }
    temp_v0 = arg0->unk10;
    var_a2 = 0x80004003;
    if (temp_v0 != NULL) {
        var_a2 = 1;
        if (arg0->unk14 != 0x20) {
            var_a2 = func_0003D0E8(temp_v0, var_a1);
        }
    }
    return var_a2;
}

s32 func_000079E8(struct Unk_func_000079E8_0 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;

    var_a1 = arg1;
    if (var_a1 == 0xF) {
        var_a1 = arg0->unk18;
    }
    temp_v0 = arg0->unk10;
    var_a2 = 0x80004003;
    if (temp_v0 != NULL) {
        var_a2 = 0xC;
        if (arg0->unk14 != 0x20) {
            var_a2 = func_0003D140(temp_v0, var_a1);
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007A40);

s32 func_00007C08(struct Unk_func_00007C08_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk10;
    var_v1 = 0x80004003;
    if (temp_v0 != 0) {
        var_v1 = func_0003D1FC(temp_v0, 8);
    }
    return var_v1;
}

s32 func_00007C48(struct Unk_func_00007C48_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk10;
    var_v1 = 0x80004003;
    if (temp_v0 != 0) {
        var_v1 = func_0003D240(temp_v0, 8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007C88);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007D24);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00007ECC);

s32 func_00007FE8(struct Unk_func_00007FE8_0 *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 == 0xF) {
        var_a1 = arg0->unk28;
    }
    switch (var_a1) {                               /* irregular */
    default:
        return 0;
    case 2:
        return arg0->unk1C;
    case 8:
        return arg0->unk24;
    case 4:
        return arg0->unk20;
    }
}

void func_00008040(struct Unk_func_00008040_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    if (arg1 != 3) {
        arg0->unk48 = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008058);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000080DC);

s32 func_00008208(struct Unk_func_00008208_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80070057;
    if (!(arg0->unk18 & 8)) {

    } else {
        var_v0 = func_00008278((s32) arg0, arg1);
    }
    return var_v0;
}

s32 func_00008240(struct Unk_func_00008208_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80070057;
    if (!(arg0->unk18 & 6)) {

    } else {
        var_v0 = func_00008278((s32) arg0, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008278);

s32 func_000083E8(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80070057;
    if (func_00007A40(arg0, arg1, 0xF) != 0) {
        var_v1 = 0x80004003;
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x28) != 2) {
                func_000080DC(arg0, 2, -1);
            }
            var_v1 = __builtin_allegrex_min(func_0003E1F0(M2C_FIELD(arg0, s32 *, 0xC), arg1), 0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008470);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008544);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000086B4);

s32 func_00008728(struct Unk_func_00008208_0 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    func_00007C88((s32) arg0, arg0->unk14);
    func_00007D24((s32) arg0, arg0->unk18);
    func_000080DC((s32) arg0, arg0->unk28, -1);
    var_v0 = 2;
    if (arg0->unk28 == 2) {
        temp_v0 = arg0->unk18;
        var_v0 = temp_v0 & 6;
        if (var_v0 == 0) {
            if (temp_v0 & 8) {
                var_v0 = func_00008208(arg0, arg0->unk30);
            }
        } else {
            var_v0 = func_00008240(arg0, arg0->unk2C);
        }
    }
    return var_v0;
}

void func_000087B4(struct Unk_func_00008208_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x43C);
        if (arg0->unk14 != temp_v1) {
            arg0->unk14 = temp_v1;
        }
        if (arg0->unk18 != func_000063A0(arg0->unk4)) {
            arg0->unk18 = func_000063A0(arg0->unk4);
        }
        if (arg0->unk28 != func_000063B0(arg0->unk4)) {
            arg0->unk28 = func_000063B0(arg0->unk4);
        }
        temp_a0 = arg0->unk4;
        temp_v1_2 = M2C_FIELD(temp_a0, s32 *, 0x448);
        if (arg0->unk2C != temp_v1_2) {
            arg0->unk2C = temp_v1_2;
        }
        temp_v1_3 = M2C_FIELD(temp_a0, u8 *, 0x530);
        if (arg0->unk30 != temp_v1_3) {
            arg0->unk30 = (s32) temp_v1_3;
        }
        if (arg0->unk1C != func_00006538(arg0->unk4, 2)) {
            arg0->unk1C = func_00006538(arg0->unk4, 2);
        }
        if (arg0->unk20 != func_00006538(arg0->unk4, 4)) {
            arg0->unk20 = func_00006538(arg0->unk4, 4);
        }
        if (arg0->unk24 != func_00006538(arg0->unk4, 8)) {
            arg0->unk24 = func_00006538(arg0->unk4, 8);
        }
        func_00008728(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000088C8);

void func_0000896C(void) {
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000576E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008974);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008E2C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008EB8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008F1C);

s32 func_00008F70(void) {
    return D_0005F104;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00008F7C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009078);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009118);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000091BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000970C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009770);

s32 func_000097C4(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = *arg0;
    if (temp_v0 >= 0) {
        sceKernelSetEventFlag(temp_v0, 2);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000097FC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000577B0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000577C4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000577E4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057804);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057820);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005783C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005785C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057880);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000578A0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000578B8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000578D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000578F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057914);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009914);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000099DC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009A58);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009B68);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057948);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009BD8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009C80);

void func_00009CFC(void) {
    if (D_0005F10C != NULL) {
        M2C_FIELD(D_0005F10C, s8 *, 0x34) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00009D14);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000579FC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A14);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A34);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A54);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A5C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A60);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A78);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057A94);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057AB0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057AD4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A030);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A150);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A1AC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A278);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A2D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A560);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A5EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A7E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A870);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000A99C);

s32 func_0000AA88(void) {
    if ((&D_0005EEA0 == NULL) || (__builtin_allegrex_ext(D_0005EEA0.unk160, 0xC, 1) != 1)) {

    } else {
        func_00002048((s32) &D_0005EEA0);
    }
    sceKernelDelayThread(0x186A0U);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AADC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AB14);

void func_0000AB84(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AC9C();
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000ABA4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000ABD4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AC4C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AC9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000ACBC);

void func_0000AD70(M2C_UNK **arg0) {
    *arg0 = &D_00057B50;
}

void func_0000AD80(M2C_UNK **arg0) {
    *arg0 = &D_00057B50;
    scePaf_4E67BB08(arg0);
}

void func_0000ADA8(void) {
}

void func_0000ADB0(void) {
}

s32 func_0000ADB8(void) {
    return 1;
}

void func_0000ADC0(void) {
}

void func_0000ADC8(struct Unk_func_0000ADC8_0 *arg0) {
    arg0->unk0 = &D_00057B10;
    arg0->unk20 = &D_00057B50;
    func_0002CD70((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000ADFC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AE40);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AF10);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000AF8C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B0A8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B0EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B168);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057B10);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057B50);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057B58);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057B68);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B1A4);

s32 func_0000B2F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B2F8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B364);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B3F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057C40);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B4B0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057C6C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057C84);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057C9C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057CB4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B64C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057CE4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D00);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D1C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B7B4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D48);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D60);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D78);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057D94);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057DB0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000B940);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057DE4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057DFC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E18);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E30);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E4C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E6C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E88);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057E9C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057EB4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057ED8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057EF4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F0C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F24);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F50);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F6C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F90);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F94);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F98);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057F9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BAE0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BBC8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BC4C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BCE0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BD54);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BE48);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BED0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000BF3C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C114);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C174);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C1FC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C330);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C374);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C3D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C514);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C630);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C6BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C784);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C804);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C880);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000C9AC);

void func_0000CA98(struct Unk_func_0000CA98_0 *arg0) {
    arg0->unk0 = &D_00057FF0;
    arg0->unk20 = &D_00057B50;
    func_0002CD70((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CACC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CB10);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CB54);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00057FF0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058028);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058044);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005805C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058074);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005808C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CB94);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CC3C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000580B8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000580D8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000580F8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058118);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058140);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058168);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005817C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058194);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000581B4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000581D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000581F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058214);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058228);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058230);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058260);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000CCDC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D03C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D0D0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D11C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D224);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D2D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D63C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D690);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D71C);

s32 func_0000D7E4(struct Unk_func_0000D7E4_0 *arg0, s32 arg1) {
    arg0->unk24 = arg1;
    return 0;
}

s32 func_0000D7F0(void) {
    if (D_0005F114 != NULL) {
        M2C_FIELD(D_0005F114, s32 *, 0x24) = -1;
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D810);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D8E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000D99C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DACC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DB60);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DBF4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DC88);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DD0C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DE94);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000DFDC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E038);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E0B8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E134);

void func_0000E1F0(M2C_UNK **arg0) {
    *arg0 = &D_000582A0;
    func_0002CD70((s32) arg0);
}

void func_0000E218(M2C_UNK **arg0) {
    *arg0 = &D_000582A0;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000582A0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E250);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E2EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E368);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E3C4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E5A8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E614);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E650);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E6E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E740);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E898);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000E94C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000EB6C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000EC2C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000ED90);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000EE3C);

void func_0000EF30(s32 arg0) {
    if (arg0 != 0x1000) {

    } else if (D_0005F118 != NULL) {
        M2C_FIELD(D_0005F118, s8 *, 0x20) = 1;
    }
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058414);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000EF58);

void func_0000F02C(struct Unk_func_0000F02C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (scePaf_3F81333A(temp_v0, 0x3E8) != 0) {
        scePaf_EAA5AFF6(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}

void func_0000F090(M2C_UNK **arg0) {
    *arg0 = &D_00058488;
    func_0002CD70((s32) arg0);
}

void func_0000F0B8(M2C_UNK **arg0) {
    *arg0 = &D_00058488;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058440);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058448);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005844C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058450);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058454);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058458);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005845C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058460);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058464);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058468);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005846C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058470);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058474);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058478);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005847C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058488);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F0F0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F184);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F1E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F35C);

void func_0000F398(void) {
    func_00038B30(2, 3, 1);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000584D0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000584D8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000584F8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F3BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F620);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F6B8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058540);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058558);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058578);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058598);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000585B8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000585D8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000585E4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000585FC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058614);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058634);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058654);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058670);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F748);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F8B8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F8E0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000F95C);

void func_0000FA10(void) {
    if (D_0005F11C == 0) {

    } else {
        func_000101D8(D_0005F11C, 2);
    }
}

void func_0000FA48(void) {
    if (D_0005F11C != 0) {
        if (M2C_FIELD(D_0005F11C, u8 *, 0x1C) == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}

void func_0000FA88(void) {
    if ((D_0005F11C != 0) && (M2C_FIELD(D_0005F11C, u8 *, 0x1C) != 0)) {
        func_00038A9C(0);
    }
    sceVshCommonGui_80271F41();
    scePaf_6B1E90C7();
    if (scePaf_A0ED77C4(0, &func_000100E4, 0, -1, -1, &func_00010130) != 0) {

    } else {
        scePaf_66907719();
        sceVshCommonGui_1CF884A1();
    }
}

void func_0000FB1C(void) {
    if (D_0005F11C == 0) {

    } else {
        func_000101D8(D_0005F11C, 3);
    }
}

void func_0000FB54(void) {
    if (D_0005F11C != 0) {
        if (M2C_FIELD(D_0005F11C, u8 *, 0x1C) == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}

void func_0000FB94(void) {
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000FB9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000FC70);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000FD30);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0000FEE4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010008);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000100E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010130);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000101D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000102EC);

void func_00010528(struct Unk_func_00010528_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (scePaf_3F81333A(temp_v0, 0x3E8) != 0) {
        scePaf_EAA5AFF6(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}

void func_0001058C(M2C_UNK **arg0) {
    *arg0 = &D_000586B8;
    func_0002CD70((s32) arg0);
}

void func_000105B4(M2C_UNK **arg0) {
    *arg0 = &D_000586B8;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000586B8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000105EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010678);

void func_000106D8(s32 arg0) {
    if (D_0005F7B0 == 0) {

    } else {
        func_0002D1AC(D_0005F7B0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010710);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010754);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010784);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000107DC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058718);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058738);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058758);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058780);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000587A0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000587C0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000587E8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058808);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005880C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001089C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010940);

void func_00010BF0(M2C_UNK **arg0) {
    *arg0 = &D_00058820;
    func_0002CD70((s32) arg0);
}

void func_00010C18(M2C_UNK **arg0) {
    *arg0 = &D_00058820;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058820);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010C50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010CE4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010D44);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010DA0);

void func_00010E0C(void) {
}

void func_00010E14(void) {
    if (D_0005F7B4 != NULL) {
        M2C_FIELD(D_0005F7B4, s8 *, 0x1C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010E2C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010E98);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010F5C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00010FB0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001103C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058868);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058880);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000588A0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000588C0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000110F0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000111C4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001127C);

void func_00011388(M2C_UNK **arg0) {
    *arg0 = &D_000588E8;
    func_0002CD70((s32) arg0);
}

void func_000113B0(M2C_UNK **arg0) {
    *arg0 = &D_000588E8;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000588E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000113E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011490);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011528);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000115CC);

void func_00011608(void) {
}

void func_00011610(void) {
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058930);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011618);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000119BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011A20);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011B5C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011CB0);

void func_00011D74(void) {
    if ((D_0005F7B8 != NULL) && (M2C_FIELD(D_0005F7B8, u8 *, 0x28) != 0)) {
        func_00038A9C(0);
    }
    sceVshCommonGui_80271F41();
    scePaf_6B1E90C7();
    if (scePaf_A0ED77C4(0, &func_00011FF4, 0, -1, -1, &func_000120B4) != 0) {

    } else {
        scePaf_66907719();
        sceVshCommonGui_1CF884A1();
    }
}

void func_00011E08(void) {
}

void func_00011E10(void) {
    if (D_0005F7B8 != NULL) {
        if (M2C_FIELD(D_0005F7B8, u8 *, 0x28) == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011E50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011E74);

s32 func_00011EA8(struct Unk_func_00011EA8_0 *arg0, s32 arg1) {
    s32 var_v0;

    if (arg1 & 4) {
        return arg0->unk20;
    }
    var_v0 = 0;
    if (arg1 & 8) {
        var_v0 = arg0->unk24;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011ED4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00011FF4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000120B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000121F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001231C);

void func_00012364(M2C_UNK **arg0) {
    *arg0 = &D_00058970;
    func_0002CD70((s32) arg0);
}

void func_0001238C(M2C_UNK **arg0) {
    *arg0 = &D_00058970;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058970);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000123C4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012428);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000124A0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001252C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001258C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000125E8);

void func_0001273C(void) {
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000589D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000589F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A14);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A30);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A4C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A68);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A80);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058A9C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058AA0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058ABC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012744);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000129DC);

void func_00012BC4(void) {
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012BCC);

void func_00012C2C(void) {
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012C34);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012D04);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012E30);

void func_00012EDC(M2C_UNK **arg0) {
    *arg0 = &D_00058AF8;
    func_0002CD70((s32) arg0);
}

void func_00012F04(M2C_UNK **arg0) {
    *arg0 = &D_00058AF8;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058AF8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012F3C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00012FCC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013048);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000130DC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058B7C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058B94);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058B98);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058BC0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058BD8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058C4C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013170);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001323C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000133A8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000134F0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000135B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013688);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000137BC);

s32 func_00013898(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000138A0);

void func_00013928(M2C_UNK **arg0) {
    *arg0 = &D_00058C90;
    func_0002CD70((s32) arg0);
}

void func_00013950(M2C_UNK **arg0) {
    *arg0 = &D_00058C90;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058C90);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013988);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013A1C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013A7C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013B44);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058D34);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058D4C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013BD8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013C5C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013D98);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013E64);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013F54);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00013FDC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001409C);

void func_0001418C(M2C_UNK **arg0) {
    *arg0 = &D_00058DA0;
    func_0002CD70((s32) arg0);
}

void func_000141B4(M2C_UNK **arg0) {
    *arg0 = &D_00058DA0;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058DA0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000141EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000142A0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000143C8);

void func_00014434(void) {
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058DE8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001443C);

void func_0001459C(void) {
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000145A4);

s32 func_0001472C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00014734);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001480C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058E68);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058E90);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00014A74);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00014FCC);

void func_000150F0(void) {
    M2C_FIELD(D_0005F7C8, s8 *, 0x28) = 1;
    func_000145A4(0, 0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015120);

void func_00015184(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;
    void *var_a0;

    if (arg1 != 1) {
        if (D_0005F7C8 != NULL) {
            func_0002CFF8((s32) D_0005F7C8);
        }
        if (arg0 != 0) {
            if (M2C_FIELD(D_0005F7C8, s32 *, 0xF4) != 1) {
                var_a0 = D_0005EED8;
            } else {
                var_a0 = D_0005EEE4;
            }
            if (var_a0 != NULL) {
                func_0002D0DC(var_a0);
            }
        } else {
            func_00026380();
            func_0002D8D4();
            func_00038B30(1, 1, 1);
            sceVshCommonGui_80271F41();
            temp_s0 = D_0005F7C8;
            if ((temp_s0 == NULL) || (temp_v0 = scePaf_A0ED77C4(0, &func_0001527C, 0, -1, -1, &func_00015444), M2C_FIELD(temp_s0, s32 *, 0x24) = temp_v0, (temp_v0 == 0))) {
                sceVshCommonGui_1CF884A1();
            }
        }
    }
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058F30);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058F44);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058F74);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058F9C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00058FD0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059000);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059018);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059048);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059070);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001527C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015444);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000155D0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001561C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000590E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000156D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000157F4);

void func_0001583C(M2C_UNK **arg0) {
    *arg0 = &D_00059118;
    func_0002CD70((s32) arg0);
}

void func_00015864(M2C_UNK **arg0) {
    *arg0 = &D_00059118;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059104);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059108);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059118);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001589C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015940);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000159A0);

void func_00015AE8(void) {
}

void func_00015AF0(void) {
    func_00038B30(2, 1, 1);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015B14);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015B8C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00015C18);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059284);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005928C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000592AC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000592BC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000592D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000592E4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000592F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059308);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059324);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005933C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059350);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005936C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059380);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059398);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000593B0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000593C4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000593E0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059400);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059420);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059434);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059448);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005945C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005946C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059484);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005949C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000594B4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000594E0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059508);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005950C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059510);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016754);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016828);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000168E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016968);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000169D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016A58);

void func_00016AA8(M2C_UNK **arg0) {
    *arg0 = &D_00059530;
    func_0002CD70((s32) arg0);
}

void func_00016AD0(M2C_UNK **arg0) {
    *arg0 = &D_00059530;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059530);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016B08);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016B9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016BFC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016CC4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000595D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000595EC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059604);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059608);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016D58);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016DDC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00016F18);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017024);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017128);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000171B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017270);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017360);

void func_0001757C(M2C_UNK **arg0) {
    *arg0 = &D_00059668;
    func_0002CD70((s32) arg0);
}

void func_000175A4(M2C_UNK **arg0) {
    *arg0 = &D_00059668;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000175DC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059668);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017618);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000176E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017788);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017818);

void func_00017894(void) {
    func_00038B30(2, 3, 1);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000178B8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000179B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017A58);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017C10);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017C64);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017CF0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000596F0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059714);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005972C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005974C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005976C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005978C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059798);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005979C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000597BC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000597C0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000597E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017DA4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017E84);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00017F50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018064);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018240);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018300);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001834C);

void func_000184AC(struct Unk_func_000184AC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (scePaf_3F81333A(temp_v0, 0x3E8) != 0) {
        scePaf_EAA5AFF6(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018510);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000185AC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000185E8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059830);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001862C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000186CC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018748);

s32 func_00018794(void) {
    return 0;
}

void func_0001879C(void) {
    void *temp_s0;

    temp_s0 = D_0005F7D4;
    if ((temp_s0 != NULL) && (M2C_FIELD(temp_s0, u8 *, 0xC) == 0)) {
        func_0002CF90((s32) temp_s0);
        func_0002D0DC(temp_s0);
    }
    func_00019278();
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000187F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000188BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018A3C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000598B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018AD0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018C5C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018CAC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018D04);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018DC0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000598D8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000598F0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059910);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018EC4);

void func_00018F5C(void) {
    if (D_0005F7D8 == 0) {

    } else {
        func_00018EC4(D_0005F7D8);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018F90);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00018FF0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019140);

void func_00019224(s32 arg0, s32 arg1) {
    void *temp_s0;

    if (arg1 != 1) {
        if (arg0 == 0) {
            temp_s0 = D_0005F114;
            if (temp_s0 != NULL) {
                func_0002CF90((s32) temp_s0);
                func_0002D0DC(temp_s0);
            }
            func_00019278();
        }
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019278);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019320);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001938C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000194E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001969C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019734);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001978C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059930);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000197EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019890);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019930);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019A48);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000599B4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000599CC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_000599E4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059A04);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059A18);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019AEC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019B6C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019BB0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019C6C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019D1C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019E14);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019E50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019EE0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00019F50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A060);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A0E8);

s32 func_0001A1D0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A1D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A250);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A328);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A3A4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A604);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A688);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A794);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A820);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A8E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A97C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001A9D4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059A58);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AA34);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AAE8);

s32 func_0001AB64(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AB6C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001ABD4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AC9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AE58);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059B04);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059B1C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059B34);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AEEC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001AF30);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B090);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B110);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B198);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B258);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B3B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B43C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B480);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059BC8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B4CC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B55C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B5BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B734);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059C5C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059C74);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059C8C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B7C8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B80C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B968);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001B9FC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BAC8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BB58);

s32 func_0001BC14(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BC1C);

s32 func_0001BC84(struct Unk_func_0001BC84_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk1C != 0) {
        var_v1 = 1;
    } else if (D_0005F858 != NULL) {
        var_v1 = M2C_FIELD(D_0005F858, u8 *, 0xC) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BCB8);

void func_0001BD80(M2C_UNK **arg0) {
    *arg0 = &D_00059D20;
    func_0002CD70((s32) arg0);
}

void func_0001BDA8(M2C_UNK **arg0) {
    *arg0 = &D_00059D20;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BDE0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059D20);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BE04);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BEA8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001BF08);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C060);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059DA4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059DBC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059DC4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059DCC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059DF0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C0F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C138);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C1D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C43C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C4D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C694);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C7E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C8B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C928);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C970);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001C9D8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CA48);

void func_0001CAD0(struct Unk_func_0001CAD0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (scePaf_3F81333A(temp_v0, 0x3E8) != 0) {
        scePaf_EAA5AFF6(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}

void func_0001CB34(M2C_UNK **arg0) {
    *arg0 = &D_00059E48;
    func_0002CD70((s32) arg0);
}

void func_0001CB5C(M2C_UNK **arg0) {
    *arg0 = &D_00059E48;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0001CB94(u32 arg0) {
    s32 var_v0;

    var_v0 = arg0 + 1;
    if (arg0 >= 0x3EU) {
        var_v0 = ((u32) (arg0 - 0x3E) < 0x33U) ? (arg0 + 0x33) : 0;
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059E48);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CBBC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CC54);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CCB4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CD50);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059E90);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059EB0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059ED0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CD94);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001CDD8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D0B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D120);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D1D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D48C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D518);

void func_0001D7B0(void) {
    if (D_0005F82C != 0) {
        M2C_FIELD(D_0005F82C, s32 *, 0x20) = 0;
    }
}

void func_0001D7C8(void) {
    if (D_0005F82C != 0) {
        M2C_FIELD(D_0005F82C, s32 *, 0x20) = 1;
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D7E4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001D8B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DA90);

void func_0001DBF0(M2C_UNK **arg0) {
    *arg0 = &D_00059F28;
    func_0002CD70((s32) arg0);
}

void func_0001DC18(M2C_UNK **arg0) {
    *arg0 = &D_00059F28;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059F28);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DC50);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DCDC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DD3C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DE40);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059FBC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059FD4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_00059FEC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DED4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001DF18);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E068);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E0FC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E1C8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E1F8);

void func_0001E260(M2C_UNK **arg0) {
    *arg0 = &D_0005A080;
    func_0002CD70((s32) arg0);
}

void func_0001E288(M2C_UNK **arg0) {
    *arg0 = &D_0005A080;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A080);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E2C0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E360);

void func_0001E400(s32 arg0) {
    if (D_0005F834 == 0) {

    } else {
        func_0002D1AC(D_0005F834, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E438);

void func_0001E4A4(void) {
    func_00038B30(2, 3, 1);
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E4C8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E5A8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E6F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E73C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E7C8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A0C8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A0EC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A104);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A124);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A144);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A14C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E87C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001E9D0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EA94);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EBA0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EBEC);

void func_0001ED54(struct Unk_func_0001ED54_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (scePaf_3F81333A(temp_v0, 0x3E8) != 0) {
        scePaf_EAA5AFF6(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}

void func_0001EDB8(M2C_UNK **arg0) {
    *arg0 = &D_0005A190;
    func_0002CD70((s32) arg0);
}

void func_0001EDE0(M2C_UNK **arg0) {
    *arg0 = &D_0005A190;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A190);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EE18);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EEA8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EF08);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EF64);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A1F4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A20C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A22C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A24C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A26C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A274);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A27C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A2A8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A2B0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001EFF8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F03C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F178);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F224);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F32C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F374);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F400);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F4B4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F594);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F658);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F6C0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F728);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F7C4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001F84C);

void func_0001FBE4(M2C_UNK **arg0) {
    *arg0 = &D_0005A308;
    func_0002CD70((s32) arg0);
}

void func_0001FC0C(M2C_UNK **arg0) {
    *arg0 = &D_0005A308;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A308);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FC44);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FCE4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FD44);

s32 func_0001FD90(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FD98);

s32 func_0001FE14(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FE1C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FE60);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0001FF34);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020098);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A38C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A394);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3A4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3AC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3C4);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3C8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3CC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002012C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020170);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000202EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020394);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000203E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000204D4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020628);

void func_000206B4(void) {
    if (D_0005F83C == 0) {

    } else {
        func_00020628(D_0005F83C);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000206E8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020748);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020828);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000208F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002095C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000209C4);

void func_00020A9C(M2C_UNK **arg0) {
    *arg0 = &D_0005A3F8;
    func_0002CD70((s32) arg0);
}

void func_00020AC4(M2C_UNK **arg0) {
    *arg0 = &D_0005A3F8;
    func_0002CD70((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A3F8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020AFC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020B98);

s32 func_00020C14(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020C1C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020C9C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020D64);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020E4C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A45C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00020EE0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002106C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000210BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021114);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000211D8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A480);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A498);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A4B0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A4D0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000212D4);

void func_0002136C(void) {
    if (D_0005F840 == 0) {

    } else {
        func_000212D4(D_0005F840);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000213A0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000214BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002156C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021660);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000216CC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021828);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000219C0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021A58);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021AB0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A4F8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021B10);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021BB4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021C54);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021D5C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A57C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A594);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A5AC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A5CC);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A5E0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021E00);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021E80);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021EC4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00021F80);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022030);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022128);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022164);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000221F4);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022264);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022374);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000223FC);

s32 func_000224E4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000224EC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022528);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022600);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002267C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000228D0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022954);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022A60);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022AEC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022BB0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022C48);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022CA0);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A620);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022D00);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022DB4);

s32 func_00022E30(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022E38);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022E64);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_00022F2C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000230E8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A6C8);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", D_0005A6E0);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_0002317C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_007618", func_000231C0);

