#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007618);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007E7C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007694);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000077FC);

s32 func_0000787C(struct Unk_func_0000787C_0 *arg0) {
    s32 var_v0;
    struct Unk_func_0000787C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk10;
    var_v0 = 0x80004003;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk38;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007898);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000078D4);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007A40);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007C88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007D24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007ECC);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008058);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000080DC);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008278);

s32 func_000083E8(struct Unk_func_000083E8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80070057;
    if (func_00007A40(arg0, arg1, 0xF) != 0) {
        var_v1 = 0x80004003;
        if (arg0->unkC != 0) {
            if (arg0->unk28 != 2) {
                func_000080DC(arg0, 2, -1);
            }
            var_v1 = __builtin_allegrex_min(func_0003E1F0(arg0->unkC, arg1), 0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008470);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008544);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000086B4);

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
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000087B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000087B4(struct Unk_func_00008208_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v1_3;
    struct Unk_func_000087B4_temp_a0 *temp_a0;
    struct Unk_func_000087B4_temp_v0 *temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unk43C;
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
        temp_v1_2 = temp_a0->unk448;
        if (arg0->unk2C != temp_v1_2) {
            arg0->unk2C = temp_v1_2;
        }
        temp_v1_3 = temp_a0->unk530;
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
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000088C8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008E04);
#endif

#if FW_VERSION >= 282
void func_0000896C(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000576E8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000402F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006DDC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00005C58);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006048);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000060BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006110);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006164);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006180);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000619C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000061A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000061AC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000073FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000074F8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00005E2C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D38);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D5C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D7C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040DC0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006388);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004057C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000064B4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007650);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00005FFC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000061A0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006A20);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007C04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007C58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006C44);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006684);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008974);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008E2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008EB8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008F1C);

s32 func_00008F70(void) {
    return D_0005F104;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008F7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009078);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009118);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000091BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000970C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009770);

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

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000097FC);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000577B0);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040E58);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000577C4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040404);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EA0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000577E4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057804);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057820);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004045C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EF8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040F1C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040F3C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005783C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005785C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057880);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000578A0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000404D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000404F4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000578B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000578D4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000578F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057914);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007DA8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000066E0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041004);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041024);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041028);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000067E8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006C44);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000068A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ABA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006A94);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006AF8);

void func_00006B5C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00057B10;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00057B50;
    func_0002CD70((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006C08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009914);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000099DC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007EEC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00006CF4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009A58);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A524);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009B68);
#endif

#if FW_VERSION == 250
void func_00009B68(s32 arg0) {
    if (arg0 != 0) {

    } else {
        InputDevice_PspPad_Lock();
        func_0002D8D4();
        Job_Start(0, &func_00007B18, 0, -1, -1, &func_0000AADC);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057948);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009BD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009C80);

#if (FW_VERSION >= 270 && FW_VERSION < 282) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009CFC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00009CFC(void) {
    if (D_0005F10C != NULL) {
        D_0005F10C->unk34 = 0;
    }
}
#endif

#if FW_VERSION < 270
void func_00009CFC(void) {
    if (D_0005F10C != NULL) {
        D_0005F10C->pad0[0x30] = 0;
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007464);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000705C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009D14);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000579FC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A14);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A34);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A54);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A5C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A60);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A78);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000409D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000409EC);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057A94);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057AB0);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004128C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057AD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A030);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A150);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A1AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A278);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A2D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A560);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A5EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A7E4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B270);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B278);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008CD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008E00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007B18);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A870);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A99C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AA88);
#endif

#if FW_VERSION == 282
s32 func_0000AA88(void) {
    if ((&D_0005EEA0 == NULL) || (__builtin_allegrex_ext(D_0005EEA0.unk160, 0xC, 1) != 1)) {

    } else {
        func_00002048((s32) &D_0005EEA0);
    }
    sceKernelDelayThread(0x186A0U);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AADC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007FC4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AB14);
#endif

void func_0000AB84(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000AC9C();
}

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ABA4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ABD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ACBC);

void func_0000AD70(M2C_UNK **arg0) {
    *arg0 = &D_00057B50;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AD80);
#else
void func_0000AD80(M2C_UNK **arg0) {
    *arg0 = &D_00057B50;
    _ZdlPv(arg0);
}
#endif

void func_0000ADA8(void) {
}

void func_0000ADB0(void) {
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AEC4);
#endif

s32 func_0000ADB8(void) {
    return 1;
}

void func_0000ADC0(void) {
}

#if (FW_VERSION >= 270 && FW_VERSION < 282) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADC8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009300);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007D88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007DEC);

void func_00007E50(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00057FF0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00057B50;
    func_0002CD70((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CA98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CACC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007EFC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000ADC8(struct Unk_func_0000ADC8_0 *arg0) {
    arg0->unk0 = &D_00057B10;
    arg0->unk20 = &D_00057B50;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AE40);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AF10);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008574);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00007FE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AF8C);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B0A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B0EC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009624);
#endif

#if FW_VERSION < 270
void func_000081B8(void) {
    if (D_0005F110 != 0) {
        M2C_FIELD(D_0005F110, s8 *, 0x30) = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B168);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057B10);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057B50);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057B58);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057B68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B1A4);

s32 func_0000B2F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B2F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B364);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B3F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057C40);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008A6C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B4B0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057C6C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057C84);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057C9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057CB4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008C04);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B64C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057CE4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040C48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040C64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008D6C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D00);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B7B4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D60);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D78);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000409B4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414E4);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057D94);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008EF8);
#else
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057DB0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B940);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057DE4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057DFC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D60);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E18);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E30);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E4C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E6C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E88);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057E9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057EB4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057ED8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057EF4);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B11C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B138);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B14C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004164C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F0C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F24);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040E84);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041674);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F50);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F6C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EF0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EF4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040BC8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EF8_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040EFC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009F94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000084D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000085A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000086DC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000884C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F90);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F94);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F98);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057F9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BAE0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BBC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BC4C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C748);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A174);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A1E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A2DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BCE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BD54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BE48);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BED0);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008A90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008B80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008BF0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BF3C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C114);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00008E94);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C174);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009728);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C1FC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CE18);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C330);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009084);
#endif

#if FW_VERSION == 250
void func_00009084(void) {
    if (&D_0005EEA0 != NULL) {
        M2C_FIELD(&D_0005EEA0, s8 *, 0x68C) = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C374);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C3D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C514);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C630);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C6BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C784);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009508);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ADD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AEFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CA98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CACC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B060);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B0A4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009650);

void func_00009694(M2C_UNK **arg0) {
    *arg0 = &D_000419D0;
    func_0002CD70((s32) arg0);
}

void func_000096BC(M2C_UNK **arg0) {
    *arg0 = &D_000419D0;
    func_0002CD70((s32) arg0);
}

void func_000096E4(M2C_UNK **arg0) {
    *arg0 = &D_000419D0;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C804);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C880);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C9AC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CA98);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000CA98(struct Unk_func_0000CA98_0 *arg0) {
    arg0->unk0 = &D_00057FF0;
    arg0->unk20 = &D_00057B50;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CACC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CB10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CB54);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00057FF0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040C58);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040C74);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040C8C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040CA4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040CBC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058028);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058044);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005805C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058074);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005808C);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CB94);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B1EC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040CE8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000580D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D28);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D70);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00040D98);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CC3C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009824);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009880);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000098F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000992C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009A2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009AD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009D9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009DF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00009E7C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A7C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000580B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000580D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000580F8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058118);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058140);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B3C0_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B3C0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B3C0_v350);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058168);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005817C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058194);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000581B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000581D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000581F4);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000580D8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058214);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058228);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058230);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058260);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041928);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B22C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B580);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B614);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B65C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B764);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B814);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BB68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BBBC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BC48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BD10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BD1C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041958);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004197C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041984);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004198C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CCDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D03C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D0D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D11C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D224);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D2D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D63C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D690);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D71C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D7E4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000D7E4(struct Unk_func_0000D7E4_0 *arg0, s32 arg1) {
    arg0->unk24 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D7F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000D7F0(void) {
    if (D_0005F114 != NULL) {
        D_0005F114->unk24 = -1;
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D810);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D8E4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BEC8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000582A0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A0BC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000419D0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A1E0);
#endif

#if FW_VERSION == 250
void func_0000A1E0(s32 arg0) {
    s32 temp_v1;

    if (arg0 != 0) {

    } else {
        _ZN3vsh12BusyIcon_IncEv();
        InputDevice_PspPad_Lock();
        temp_v1 = Job_Start(0, &func_0000DBF4, (s32) func_0000A1E0, -1, -1, &func_0000A544);
        if (D_00048960 != NULL) {
            M2C_FIELD(D_00048960, s32 *, 0x24) = temp_v1;
        }
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A24C);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D99C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DACC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DB60);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DBF4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A3F8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C248);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C380);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C490);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A50C);
#endif

#if FW_VERSION == 250
void func_0000A50C(s32 arg0) {
    if ((sce_paf_private_strcmp(&D_00058228, arg0) == 0) && (&D_0005EEA0 != NULL)) {
        M2C_FIELD(&D_0005EEA0, s8 *, 0x68C) = 0;
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AE18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AE98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AF14);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A544);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A654);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A694);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B07C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A700);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000A9C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AA88);

void func_0000AAC8(M2C_UNK **arg0) {
    *arg0 = &D_000582A0;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DC88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD0C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DE94);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DFDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E038);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E0B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E134);
#endif

void func_0000E1F0(M2C_UNK **arg0) {
    *arg0 = &D_000582A0;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E218);
#else
void func_0000E218(M2C_UNK **arg0) {
    *arg0 = &D_000582A0;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000582A0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E250);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E2EC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C858);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C8B4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC3C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC70);
#endif

#if FW_VERSION == 250
s32 func_0000AC70(void) {
    return 4;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC78);
#endif

#if FW_VERSION == 250
s32 func_0000AC78(void) {
    return 3;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC80);
#endif

#if FW_VERSION == 250
s32 func_0000AC80(void) {
    return 2;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC88);
#endif

#if FW_VERSION == 250
s32 func_0000AC88(void) {
    return 1;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AC90);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E368);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E3C4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E5A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E614);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E650);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000CBCC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000AE4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E6E4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E740);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B97C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BA30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BC34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BCF4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BE3C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BEE8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BFB8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041A5C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041A74);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041A84);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041A8C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E898);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B09C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E94C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EB6C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000582A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B230);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B2CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B3D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EC2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000ED90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EE3C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EF30);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_0000EF30(s32 arg0) {
    if (arg0 != 0x1000) {

    } else if (D_0005F118 != NULL) {
        D_0005F118->unk20 = 1;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058414);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EF58);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D4E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D548);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D570);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041078);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041080);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041084);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041088);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004108C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041090);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041094);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041098);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004109C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000410A0);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D4E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D548);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D570);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412B0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412B8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412BC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412C0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412C4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000412CC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000410C0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000582A0);
#endif

#if FW_VERSION < 270
void func_0000B548(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002CC00(arg0, arg1, arg2, arg3 & 0xFF, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00058488;
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

void func_0000B584(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002CC00(arg0, arg1, arg2, arg3 & 0xFF, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00058488;
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

void func_0000B5C0(M2C_UNK **arg0) {
    *arg0 = &D_00058488;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F02C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000F02C(struct Unk_func_0000F02C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (_ZN3paf9PhHandler9IsTimerCBEi(temp_v0, 0x3E8) != 0) {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
void func_0000F090(M2C_UNK **arg0) {
    *arg0 = &D_00058488;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F0B8);
#endif

#if FW_VERSION < 270 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_0000F0B8(M2C_UNK **arg0) {
    *arg0 = &D_00058488;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058440);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058448);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005844C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058450);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058454);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058458);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005845C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058460);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058464);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058468);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005846C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058470);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058474);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058478);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005847C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058488);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F0F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F184);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F1E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F35C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C40C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000B8E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BAC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000BB5C);
#endif

#if FW_VERSION >= 282
void func_0000F398(void) {
    func_00038B30(2, 3, 1);
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000584D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000584D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000584F8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C42C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C68C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C724);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041B2C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041B3C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041B48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F3BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F620);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F6B8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058540);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058558);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058578);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058598);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000585B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000585D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000585E4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000585FC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058614);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058634);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058654);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058670);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F748);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F8B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F8E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F95C);

void func_0000FA10(void) {
    if (D_0005F11C == 0) {

    } else {
        func_000101D8(D_0005F11C, 2);
    }
}

#if (FW_VERSION >= 270 && FW_VERSION < 282) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FA48);
#endif

#if FW_VERSION < 270
void func_0000FA48(void) {
    s32 temp_v0;

    if (D_0005F11C != NULL) {
        if (D_0005F11C->unk1C == 0) {

        } else {
            temp_v0 = _ZN3paf4View4FindEPKc(&D_00041B2C);
            if (temp_v0 != 0) {
                _ZN3paf4View9PlaySoundEPKc(temp_v0, &D_00041B48);
            }
        }
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000FA48(void) {
    if (D_0005F11C != 0) {
        if (D_0005F11C->unk1C == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FBB8);
#endif

#if (FW_VERSION >= 270 && FW_VERSION < 282) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FA88);
#endif

#if FW_VERSION < 270
void func_0000FA88(void) {
    s32 temp_v0;

    if ((D_0005F11C != NULL) && (D_0005F11C->unk1C != 0)) {
        temp_v0 = _ZN3paf4View4FindEPKc(&D_00041B2C);
        if (temp_v0 != 0) {
            _ZN3paf4View9PlaySoundEPKc(temp_v0, &D_00041B3C);
        }
    }
    _ZN3vsh12BusyIcon_IncEv();
    InputDevice_PspPad_Lock();
    Job_Start(0, &func_000100E4, 0, -1, -1, &func_0000C5A8);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000FA88(void) {
    if ((D_0005F11C != 0) && (D_0005F11C->unk1C != 0)) {
        func_00038A9C(0);
    }
    _ZN3vsh12BusyIcon_IncEv();
    InputDevice_PspPad_Lock();
    if (Job_Start(0, &func_000100E4, 0, -1, -1, &func_00010130) != 0) {

    } else {
        InputDevice_PspPad_Unlock();
        _ZN3vsh12BusyIcon_DecEv();
    }
}
#endif

void func_0000FB1C(void) {
    if (D_0005F11C == 0) {

    } else {
        func_000101D8(D_0005F11C, 3);
    }
}

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FB54);
#else
void func_0000FB54(void) {
    if (D_0005F11C != 0) {
        if (D_0005F11C->unk1C == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}
#endif

void func_0000FB94(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FB9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FC70);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FD30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FEE4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C4C8);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010008);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000100E4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E5CC);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C5A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010130);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000101D8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000586B8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058488);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000102EC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D580);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000C9AC);

void func_0000C9E0(M2C_UNK **arg0) {
    *arg0 = &D_000586B8;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010528);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00010528(struct Unk_func_00010528_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (_ZN3paf9PhHandler9IsTimerCBEi(temp_v0, 0x3E8) != 0) {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}
#endif

void func_0001058C(M2C_UNK **arg0) {
    *arg0 = &D_000586B8;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000105B4);
#else
void func_000105B4(M2C_UNK **arg0) {
    *arg0 = &D_000586B8;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000586B8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000105EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010678);

void func_000106D8(s32 arg0) {
    if (D_0005F7B0 == 0) {

    } else {
        func_0002D1AC(D_0005F7B0, arg0);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010710);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010754);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010784);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000107DC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058718);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058738);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058758);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058780);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000587A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000587C0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000587E8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058808);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005880C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001089C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041798);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010940);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD48);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD70);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD98);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F0EC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414E0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414F8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041518);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041538);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000414F8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F180);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F1E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F23C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F2A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F2B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F2C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F334);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F3F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F44C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F4D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F58C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F660);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F778);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F718_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041520);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F824);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F84C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F884);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000415A8_v271);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041568);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F92C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F9C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FA5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FA98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FAA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FAA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FE4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FEB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FFEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010140);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000415A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010204);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010298);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000102A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000102E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010304);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010338);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010368);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010488);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010538);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001066C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000107E4_v271);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010784_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000107BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000107E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001081C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010880);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000108F8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000109E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010A44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010AA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010BF4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004160C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004162C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004168C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004164C_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041668);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041684);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000416A0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000416B8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000416D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000416D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000416F4);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010984);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000109E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010A40);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010B94);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010B9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010E34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001101C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011024);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011084);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001108C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001115C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041730);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011288);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011334);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001135C);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000586B8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DDD0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DE5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DED8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DF6C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004171C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004180C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000417CC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041734);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041748);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004174C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E000);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011608);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E040);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E0E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E228);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E2E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E3B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E4E8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058820);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041798);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E5B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E5B8);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010940);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D0A0);

void func_0000D0D4(M2C_UNK **arg0) {
    *arg0 = &D_00058820;
    func_0002CD70((s32) arg0);
}
#endif

void func_00010BF0(M2C_UNK **arg0) {
    *arg0 = &D_00058820;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010C18);
#else
void func_00010C18(M2C_UNK **arg0) {
    *arg0 = &D_00058820;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058820);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010C50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010CE4);

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010D44);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D2DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010DA0);

void func_00010E0C(void) {
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010E14);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00010E14(void) {
    if (D_0005F7B4 != NULL) {
        D_0005F7B4->unk1C = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010E2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010E98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010F5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010FB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001103C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058868);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058880);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000588A0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D378);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D3B8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000588C0);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000110F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000111C4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D5EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D6AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D764);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058820);

s32 func_0000D82C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D834);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000D8E4_v250);

void func_0000D918(M2C_UNK **arg0) {
    *arg0 = &D_000588E8;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001127C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
void func_00011388(M2C_UNK **arg0) {
    *arg0 = &D_000588E8;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000113B0);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_000113B0(M2C_UNK **arg0) {
    *arg0 = &D_000588E8;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000588E8);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000113E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011490);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DA8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DB54);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011528);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000115CC);

void func_00011608(void) {
}

void func_00011610(void) {
}
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058930);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041FD4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041FE0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041FF0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042018);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042030);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004205C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042074);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DBF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DC30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DD6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000DFA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E094);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011618);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000119BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011A20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011B5C);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011CB0);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011F34);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E1DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E308);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E348);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058970);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058820);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000588E8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E488);

void func_0000E4D8(M2C_UNK **arg0) {
    *arg0 = &D_00058970;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011D74);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00011D74(void) {
    if ((D_0005F7B8 != NULL) && (D_0005F7B8->unk28 != 0)) {
        func_00038A9C(0);
    }
    _ZN3vsh12BusyIcon_IncEv();
    InputDevice_PspPad_Lock();
    if (Job_Start(0, &func_00011FF4, 0, -1, -1, &func_000120B4) != 0) {

    } else {
        InputDevice_PspPad_Unlock();
        _ZN3vsh12BusyIcon_DecEv();
    }
}
#endif

#if FW_VERSION >= 282
void func_00011E08(void) {
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011E10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00011E10(void) {
    if (D_0005F7B8 != NULL) {
        if (D_0005F7B8->unk28 == 0) {

        } else {
            func_00038A9C(2);
        }
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011E50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011E74);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011EA8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011ED4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011FF4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000120B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000121F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001231C);
#endif

void func_00012364(M2C_UNK **arg0) {
    *arg0 = &D_00058970;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001238C);
#else
void func_0001238C(M2C_UNK **arg0) {
    *arg0 = &D_00058970;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058970);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000123C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012428);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000124A0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F37C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001252C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001258C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000125E8);

void func_0001273C(void) {
}

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000589D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000589F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A14);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A30);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A4C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A68);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A80);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058A9C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058AA0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058ABC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012744);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000129DC);

void func_00012BC4(void) {
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000137D8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012BCC);
#endif

#if FW_VERSION >= 282
void func_00012C2C(void) {
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012C34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012D04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012E30);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013B04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013B84);
#endif

#if FW_VERSION >= 282
void func_00012EDC(M2C_UNK **arg0) {
    *arg0 = &D_00058AF8;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012F04);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00012F04(M2C_UNK **arg0) {
    *arg0 = &D_00058AF8;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058AF8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012F3C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012FCC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013048);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000130DC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058B7C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058B94);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058B98);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058BC0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005BE18);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B968);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005BF28);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A310);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E90_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E90_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E90_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E90_v300);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058BD8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058C4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013170);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001348C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001323C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000133A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000134F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000135B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013688);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000137BC);

s32 func_00013898(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000138A0);

void func_00013928(M2C_UNK **arg0) {
    *arg0 = &D_00058C90;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013950);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00013950(M2C_UNK **arg0) {
    *arg0 = &D_00058C90;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058C90);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013988);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013A1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013A7C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013B44);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058D34);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058D4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013BD8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013C5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013D98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013E64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013F54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013FDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001409C);

void func_0001418C(M2C_UNK **arg0) {
    *arg0 = &D_00058DA0;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000141B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000141B4(M2C_UNK **arg0) {
    *arg0 = &D_00058DA0;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058DA0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000141EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000142A0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000143C8);

void func_00014434(void) {
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E6DC);
#else
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058DE8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001443C);
#endif

void func_0001459C(void) {
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E82C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F718);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000E95C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000145A4);

s32 func_0001472C(void) {
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014734);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F7F8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EA94);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001480C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058E68);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058E90);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000421CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000EC88);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013384);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F1E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F330);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014A74);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014FCC);
#endif

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000150F0);
#else
void func_000150F0(void) {
    D_0005F7C8->unk28 = 1;
    func_000145A4(0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015120);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F434);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F4F8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015184);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00015184(s32 arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_00015184_temp_s0 *temp_s0;
    void *var_a0;

    if (arg1 != 1) {
        if (D_0005F7C8 != NULL) {
            func_0002CFF8((s32) D_0005F7C8);
        }
        if (arg0 != 0) {
            if (D_0005F7C8->unkF4 != 1) {
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
            _ZN3vsh12BusyIcon_IncEv();
            temp_s0 = D_0005F7C8;
            if ((temp_s0 == NULL) || (temp_v0 = Job_Start(0, &func_0001527C, 0, -1, -1, &func_00015444), temp_s0->unk24 = temp_v0, (temp_v0 == 0))) {
                _ZN3vsh12BusyIcon_DecEv();
            }
        }
    }
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058F30);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004227C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058F44);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A21C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058F74);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058F9C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058FD0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059000);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059018);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059048);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059070);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00041BB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010188);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F630);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010480);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000104CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000F728);
#endif

#if FW_VERSION < 270
void func_0000F7B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002CC00(arg0, arg1, arg2, arg3 & 0xFF, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00059118;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

void func_0000F7EC(M2C_UNK **arg0) {
    *arg0 = &D_00059118;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001527C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015444);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000155D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001561C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000590E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000156D4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001654C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001583C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015864);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005BEBC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005BEC0);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005C47C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005C480);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A864);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A868);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3E4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3E8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000157F4);
#endif

#if FW_VERSION < 350
void func_0001583C(M2C_UNK **arg0) {
    *arg0 = &D_00059118;
    func_0002CD70((s32) arg0);
}

void func_00015864(M2C_UNK **arg0) {
    *arg0 = &D_00059118;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059104);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059108);

#if FW_VERSION >= 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059118);
#else
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00058970);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001589C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015940);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000159A0);

void func_00015AE8(void) {
}

#if FW_VERSION < 282
void func_00015AF0(void) {
    func_0002B8B0(2, 1);
}
#else
void func_00015AF0(void) {
    func_00038B30(2, 1, 1);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015B14);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FB30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0000FC24);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015B8C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015C18);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059284);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005928C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000592AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000592BC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000592D4);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000592E4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000592F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059308);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059324);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005933C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059350);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005936C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059380);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059398);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000593B0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000593C4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000593E0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059400);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059420);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059434);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059448);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042088);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042098);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042704);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004271C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005945C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005946C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059484);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005949C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000594B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000594E0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059508);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005950C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059510);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016754);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016828);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042108);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014EE4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014F34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014F5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014F94);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014FD0);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059118);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000168E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016968);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000169D8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016A58);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000109D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010A14);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010A70);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016AA8);
#endif

#if FW_VERSION >= 282
void func_00016AA8(M2C_UNK **arg0) {
    *arg0 = &D_00059530;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000185AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000185E8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016AD0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00016AD0(M2C_UNK **arg0) {
    *arg0 = &D_00059530;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059530);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016B08);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00010C2C);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016B9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016BFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016CC4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000595D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000595EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059604);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059608);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A918);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A940);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016D58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016DDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016F18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017024);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017128);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000171B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017270);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017360);

void func_0001757C(M2C_UNK **arg0) {
    *arg0 = &D_00059668;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000175A4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000175A4(M2C_UNK **arg0) {
    *arg0 = &D_00059668;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000175DC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059668);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017618);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000176E8);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017788);
#else
void func_00017788(s32 arg0) {
    void **temp_v0;

    if (D_0005F7D4 == NULL) {

    } else {
        func_0002D1AC((s32) D_0005F7D4, arg0);
    }
    temp_v0 = _ZN3paf8PhWidget9FindChildEPKci(arg0, "lftv_page190_group000_text000", 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0xF, 0x20);
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017818);

#if FW_VERSION < 282
void func_00017894(void) {
    func_0002B8B0(2, 3);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011C48);
#endif

#if FW_VERSION >= 282
void func_00017894(void) {
    func_00038B30(2, 3, 1);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000178B8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000179B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017A58);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011FC4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011088);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017C10);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017C64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017CF0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000596F0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059714);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005972C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005974C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005976C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005978C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042168);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059798);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005979C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000597BC);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000597C0);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AFA0);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000597E8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017DA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017E84);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017F50);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000114B8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001249C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012564);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011554);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011600);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011808);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001283C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000422C8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012980);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016094);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000118D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000119F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018064);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018240);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018300);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001834C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000184AC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000184AC(struct Unk_func_000184AC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (_ZN3paf9PhHandler9IsTimerCBEi(temp_v0, 0x3E8) != 0) {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018510);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011BC0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011C08);
#endif

#if FW_VERSION < 270
void func_00011C08(M2C_UNK **arg0) {
    *arg0 = &D_00059930;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000161D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016214);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000162B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016330);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001637C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016384);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000163DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000163E4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001647C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016514);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016690);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004234C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042360);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042364);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004237C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016724);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016780);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016810);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016860);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016918);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016ADC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016B74);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016BA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016C08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016D74);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059930);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016E50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016EA4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016F40);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016FE0);
#endif

#if FW_VERSION < 282
void func_00019734(M2C_UNK **arg0) {
    *arg0 = &D_00059930;
    func_0002CD70((s32) arg0);
}

void func_0001978C(M2C_UNK **arg0) {
    *arg0 = &D_00059930;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000185AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000185E8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059830);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001862C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000186CC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000173C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000174D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042444);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042458);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004245C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042474);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004248C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017574);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000175CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017650);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017698);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017744);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001790C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000179A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017AFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017B90);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042B28);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018748);
#endif

s32 func_00018794(void) {
    return 0;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017C74);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001879C);
#endif

#if FW_VERSION >= 282
void func_0001879C(void) {
    struct Unk_func_0001879C_temp_s0 *temp_s0;

    temp_s0 = D_0005F7D4;
    if ((temp_s0 != NULL) && (temp_s0->unkC == 0)) {
        func_0002CF90((s32) temp_s0);
        func_0002D0DC(temp_s0);
    }
    func_00019278();
}
#endif

#if FW_VERSION < 270
s32 func_00011E28(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00011E30);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000187F4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017D9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017E9C);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000188BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018A3C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000598B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018AD0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018C5C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018CAC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018D04);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018DC0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000598D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000598F0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001215C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000121B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012240);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012290);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012348);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013448);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000134EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013520);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001249C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012534);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059910);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018EC4);

void func_00018F5C(void) {
    if (D_0005F7D8 == 0) {

    } else {
        func_00018EC4(D_0005F7D8);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018F90);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018FF0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019140);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019224);
#endif

#if FW_VERSION == 250
void func_00019224(s32 arg0, s32 arg1) {
    struct Unk_D_0005F114 *temp_s0;

    if (arg0 == 0) {
        temp_s0 = D_0005F114;
        if (temp_s0 != NULL) {
            func_0002CF90((s32) temp_s0);
            func_0002D0DC((struct Unk_func_0002D0DC_0 *) temp_s0);
        }
        func_000127D8();
    }
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000127D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001290C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000129AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012C5C);

void func_00012CA0(M2C_UNK **arg0) {
    *arg0 = &D_00042B28;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION < 282
void func_00012CC8(M2C_UNK **arg0) {
    *arg0 = &D_00042B28;
    func_0002CD70((s32) arg0);
}

void func_00012CF0(M2C_UNK **arg0) {
    *arg0 = &D_00042B28;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000181FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018334);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001842C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018434);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000184A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018540);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019278);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019320);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001938C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000194E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001969C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019734);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001978C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059930);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000197EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019890);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019930);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019A48);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000599B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000599CC);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000425F8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000425B8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042AC8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000599E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00012FE4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000187CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001892C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001303C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000130B8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059A04);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059A18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019AEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019B6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019BB0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019C6C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000131AC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013304);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013398);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019D1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019E14);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019E50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019EE0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019F50);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A060);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A0E8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059BC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018AD8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042B28);
#endif

s32 func_0001A1D0(void) {
    return 0;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018E10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018EB4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001366C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A1D8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A250);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013764);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013860);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013BFC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A328);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A3A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A604);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A688);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A794);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A820);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A8E4);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A97C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A9D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059A58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AA34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AAE8);

s32 func_0001AB64(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AB6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001ABD4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AC9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AE58);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059B04);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059B1C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005CDFC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005C94C);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005CF0C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B2F4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AE6C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059B34);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AEEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AF30);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B090);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B110);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B198);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B258);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B3B4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B43C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B480);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059BC8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B4CC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001908C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000190EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019264);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000426E4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000426FC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042754);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042714);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000192F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019338);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019478);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001950C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059D20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000195D8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000196F4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013DB8);
#endif

#if FW_VERSION < 282
s32 func_00013E34(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013E3C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00013E98);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B55C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B5BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B734);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059C5C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059C74);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005CF54);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005CAA4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005D064_v330);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B44C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B44C_v310);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AFC4_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AFC4_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AFC4_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005AFC4_v300);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000424B4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042C04);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042C78);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042C88);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059C8C);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B7C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B80C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000142D0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B968);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B9FC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C414);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059BC8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014498);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BAC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BB58);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
s32 func_0001BC14(void) {
    return 0;
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000147D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014878);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014964);

void func_00014998(M2C_UNK **arg0) {
    *arg0 = &D_00059D20;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BC1C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BC84);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0001BC84(struct Unk_func_0001BC84_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk1C != 0) {
        var_v1 = 1;
    } else if (D_0005F858 != NULL) {
        var_v1 = D_0005F858->unkC != 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BCB8);
#endif

void func_0001BD80(M2C_UNK **arg0) {
    *arg0 = &D_00059D20;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BDA8);
#else
void func_0001BDA8(M2C_UNK **arg0) {
    *arg0 = &D_00059D20;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019938);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014A20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014AAC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019A5C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014B0C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014C88);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000425FC);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042D4C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004262C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042D64);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014D24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014D64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014E6C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014EF4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059D20);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00014FB4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000150D0);

s32 func_00015190(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015198);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000151F4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000152A8);

void func_000152DC(M2C_UNK **arg0) {
    *arg0 = &D_00042E88;
    func_0002CD70((s32) arg0);
}

void func_00015304(M2C_UNK **arg0) {
    *arg0 = &D_00042E88;
    func_0002CD70((s32) arg0);
}

void func_0001532C(M2C_UNK **arg0) {
    *arg0 = &D_00042E88;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015364);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000153F0);

void func_00015450(s32 arg0) {
    void **temp_v0;

    if (D_00049030 == 0) {

    } else {
        func_0002D1AC(D_00049030, arg0);
    }
    temp_v0 = _ZN3paf8PhWidget9FindChildEPKci(arg0, "lftv_page195_group000_text000", 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0xF, 0x20);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000154C8);

void func_00015534(void) {
    func_0002B8B0(1, 3);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015554);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042E88);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BDE0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015638);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00015688);

void func_000156D8(M2C_UNK **arg0) {
    *arg0 = &D_00043118;
    func_0002CD70((s32) arg0);
}

void func_00015700(M2C_UNK **arg0) {
    *arg0 = &D_00043118;
    func_0002CD70((s32) arg0);
}

void func_00015728(M2C_UNK **arg0) {
    *arg0 = &D_00043118;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059D20);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BE04);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042ED0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BEA8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001584C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BF08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C060);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059DA4);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001588C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000160A4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059DBC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059DC4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059DCC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059DF0);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430CC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430D4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430D8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430DC);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C0F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C138);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C1D8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016484);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000164E8);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C43C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C4D8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C694);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C7E8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E48);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C8B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C928);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C970);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C9D8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A528);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A5B0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000169A0);

s32 func_00016AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016AC0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00043118);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00043158);

s32 func_00016B14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

void func_00016B20(M2C_UNK **arg0) {
    *arg0 = &D_00043158;
    _ZN3paf10PhMenuListD2Ev();
}

void func_00016B48(M2C_UNK **arg0) {
    *arg0 = &D_00043158;
    _ZN3paf10PhMenuListD2Ev();
    _ZdlPv(arg0);
}

s32 func_00016B80(u32 arg0) {
    s32 var_v0;

    var_v0 = arg0 + 1;
    if (arg0 >= 0x3EU) {
        var_v0 = ((u32) (arg0 - 0x3E) < 0x33U) ? (arg0 + 0x33) : 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016BA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016BE0);

void func_00016C18(M2C_UNK **arg0) {
    *arg0 = &D_00059E48;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CA48);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CAD0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001CAD0(struct Unk_func_0001CAD0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (_ZN3paf9PhHandler9IsTimerCBEi(temp_v0, 0x3E8) != 0) {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}
#endif

void func_0001CB34(M2C_UNK **arg0) {
    *arg0 = &D_00059E48;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CB5C);
#else
void func_0001CB5C(M2C_UNK **arg0) {
    *arg0 = &D_00059E48;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016B80);
#endif

#if FW_VERSION >= 282
s32 func_0001CB94(u32 arg0) {
    s32 var_v0;

    var_v0 = arg0 + 1;
    if (arg0 >= 0x3EU) {
        var_v0 = ((u32) (arg0 - 0x3E) < 0x33U) ? (arg0 + 0x33) : 0;
    }
    return var_v0;
}

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E48);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CBBC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CC54);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A78C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016D8C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CCB4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CD50);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E90);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059EB0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042958);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059ED0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CD94);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00016EA0);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CDD8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D0B0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D120);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D1D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D48C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D518);

#if FW_VERSION < 282
void func_0001D7B0(void) {
    if (D_0005F82C != NULL) {
        M2C_FIELD(D_0005F82C, s32 *, 0x1C) = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D7B0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001D7B0(void) {
    if (D_0005F82C != 0) {
        D_0005F82C->unk20 = 0;
    }
}
#endif

#if FW_VERSION < 282
void func_0001D7C8(void) {
    if (D_0005F82C != NULL) {
        M2C_FIELD(D_0005F82C, s32 *, 0x1C) = 1;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D7C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001D7C8(void) {
    if (D_0005F82C != 0) {
        D_0005F82C->unk20 = 1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D7E4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B374);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B4FC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059F28);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000185C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018744);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018850);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017858);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059E48);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00017A8C);

void func_00017AC0(M2C_UNK **arg0) {
    *arg0 = &D_00059F28;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D8B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DA90);
#endif

void func_0001DBF0(M2C_UNK **arg0) {
    *arg0 = &D_00059F28;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DC18);
#else
void func_0001DC18(M2C_UNK **arg0) {
    *arg0 = &D_00059F28;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059F28);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DC50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DCDC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DD3C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DE40);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059FBC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059FD4);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005D2B4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005CE04);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005D3C4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B7AC);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B324_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B324_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B324_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005B324_v300);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042AB4);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042A74);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042BB4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0004338C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059FEC);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DED4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DF18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E068);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E0FC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A080);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00059F28);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E1C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E1F8);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001812C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018170);

void func_000181B4(M2C_UNK **arg0) {
    *arg0 = &D_0005A080;
    func_0002CD70((s32) arg0);
}
#endif

void func_0001E260(M2C_UNK **arg0) {
    *arg0 = &D_0005A080;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E288);
#else
void func_0001E288(M2C_UNK **arg0) {
    *arg0 = &D_0005A080;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A080);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E2C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000182C8);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E360);
#endif

void func_0001E400(s32 arg0) {
    if (D_0005F834 == 0) {

    } else {
        func_0002D1AC(D_0005F834, arg0);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E438);

#if FW_VERSION < 282
void func_0001E4A4(void) {
    func_0002B8B0(2, 3);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BF4C);
#endif

#if FW_VERSION >= 282
void func_0001E4A4(void) {
    func_00038B30(2, 3, 1);
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018468);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E4C8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E5A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E6F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E73C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E7C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A0C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A0EC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A104);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A124);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A144);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A14C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E87C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E9D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EA94);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018A70);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C738);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C6D8_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A190);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018B38);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A080);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018C44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018D0C);

s32 func_00018DA8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C97C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018DB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00018DEC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EBA0);
#endif

#if FW_VERSION < 270
void func_0001EBA0(M2C_UNK **arg0) {
    *arg0 = &D_0005A190;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EBEC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001ED54);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0001ED54(struct Unk_func_0001ED54_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 == 0) {

    } else if (_ZN3paf9PhHandler9IsTimerCBEi(temp_v0, 0x3E8) != 0) {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk10, 0x3E8);
        func_0002D99C(0, 0, 0, arg0);
    }
}
#endif

void func_0001EDB8(M2C_UNK **arg0) {
    *arg0 = &D_0005A190;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EDE0);
#else
void func_0001EDE0(M2C_UNK **arg0) {
    *arg0 = &D_0005A190;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A190);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EE18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EEA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EF08);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EF64);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A1F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A20C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A22C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A24C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A26C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A274);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A27C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A2A8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A2B0);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001EFF8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F03C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F178);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CE4C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000192A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F224);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F32C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F374);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F400);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F4B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F594);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F658);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F6C0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001D350);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001972C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F728);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F7C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001F84C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A308);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A190);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000199EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019A2C);

void func_00019A6C(M2C_UNK **arg0) {
    *arg0 = &D_0005A308;
    func_0002CD70((s32) arg0);
}
#endif

void func_0001FBE4(M2C_UNK **arg0) {
    *arg0 = &D_0005A308;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FC0C);
#else
void func_0001FC0C(M2C_UNK **arg0) {
    *arg0 = &D_0005A308;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A308);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FC44);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FCE4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FD44);

s32 func_0001FD90(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FD98);

s32 func_0001FE14(void) {
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019C98);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019D34);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FE1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FE60);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001FF34);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020098);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A38C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A394);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3A4);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3C4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002012C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001DB18);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AE5C_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00019FF4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020170);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000202EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020394);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000203E8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A2C8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B1D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B26C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B2A0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A37C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A3F8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000204D4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020628);

void func_000206B4(void) {
    if (D_0005F83C == 0) {

    } else {
        func_00020628(D_0005F83C);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000206E8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020748);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020828);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3F8);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A308);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000208F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002095C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A6F4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001A8D8);

void func_0001A91C(M2C_UNK **arg0) {
    *arg0 = &D_0005A3F8;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000209C4);
#endif

void func_00020A9C(M2C_UNK **arg0) {
    *arg0 = &D_0005A3F8;
    func_0002CD70((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020AC4);
#else
void func_00020AC4(M2C_UNK **arg0) {
    *arg0 = &D_0005A3F8;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3F8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020AFC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020B98);

s32 func_00020C14(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020C1C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020C9C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020D64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020E4C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A45C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042E78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020EE0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002106C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000210BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021114);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000211D8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A480);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A498);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A4B0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AD28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AD84);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AE0C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AE5C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001E920);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001AF14);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BEE0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BF84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B070);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A4D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000212D4);

void func_0002136C(void) {
    if (D_0005F840 == 0) {

    } else {
        func_000212D4(D_0005F840);
    }
}
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000213A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000214BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002156C);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A620);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A3F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B3D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B470);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001B70C);

void func_0001B750(M2C_UNK **arg0) {
    *arg0 = &D_0005A620;
    func_0002CD70((s32) arg0);
}
#endif

#if FW_VERSION < 282
void func_00022C48(M2C_UNK **arg0) {
    *arg0 = &D_0005A620;
    func_0002CD70((s32) arg0);
}

void func_00022CA0(M2C_UNK **arg0) {
    *arg0 = &D_0005A620;
    func_0002CD70((s32) arg0);
    _ZdlPv(arg0);
}
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021660);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000216CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021828);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000219C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021A58);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021AB0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A4F8);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021B10);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021BB4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021C54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021D5C);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A57C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A594);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000438AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000438C4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00042FB8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A5AC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BA94);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BAEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BC48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BCC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BD58);
#else
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A5CC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A5E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021E00);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021E80);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021EC4);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00021F80);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001BE4C);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022030);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022128);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022164);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000221F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022264);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022374);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000223FC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00043000);
#endif

s32 func_000224E4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000224EC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022528);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C1E8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C2E4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020060);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C67C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C6D8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000200C0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000201F4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002034C);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000202EC_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000202F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020320);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000203B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020568);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430B4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000430CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000205FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002063C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020794);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000207F8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002088C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A718);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020958);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020CA8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020CB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00020D54);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00023710);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00023754);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022600);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002267C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000228D0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022954);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022A60);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022AEC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022BB0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022C48);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022CA0);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A620);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001C7AC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022D00);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022DB4);

s32 func_00022E30(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022E38);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022E64);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_00022F2C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000230E8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A6C8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_0005A6E0);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_000439F8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_007618", D_00043A08);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0002317C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_000231C0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/lftv_main_plugin_007618", func_0001CD10);
#endif
