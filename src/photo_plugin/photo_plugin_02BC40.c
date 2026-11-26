#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 201
void func_0002BC40(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BC68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0002BC68(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION >= 201
void func_0002BCA0(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BCC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0002BCC8(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BD00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0002BD00(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION >= 201
void func_0002BD38(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
}

void func_0002BD60(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BD88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0002BD88(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031648);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031660);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031678);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031690);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000316A8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000316C0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BDC0);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BF84);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00017028);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000171A0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001722C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00017268);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00017388);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000174F4);
#else
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C288);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C404);

void func_0002C44C(s32 arg0, M2C_UNK arg1) {
    func_0002CC08(arg1, arg0);
}

void func_0002C470(s32 arg0, s32 arg1) {
    func_0002CC08(arg1, arg0 + 0xC);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C498);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C658);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C8B4);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00032C50);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CA60);

u16 func_0002CA9C(struct Unk_func_0002CA9C_0 *arg0) {
    return *arg0->unk4;
}

s32 func_0002CAA8(struct Unk_func_0002CAA8_0 *arg0) {
    return *arg0->unk4;
}

s32 func_0002CAB4(struct Unk_func_0002CAB4_0 *arg0) {
    return *arg0->unk4;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CAC0);

s32 func_0002CAFC(struct Unk_func_0002CAFC_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CB04);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000177B4);
#else
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CB84);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CC08);
#endif

void func_0002CC40(void) {
    func_0002CE54();
}

void func_0002CC5C(void) {
    func_0002CE60();
}

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D29C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C168);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C1E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CC78);
#endif

#if FW_VERSION < 260
void *func_0002CCEC(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    struct Unk_func_0002CCEC_var_a0 *var_a0;
    void *var_v0;
    struct Unk_func_0002CCEC_var_a0 *var_v1;

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CD24);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CD94);
#endif

s32 *func_0002CE1C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CEC0(arg1, arg2);
    return arg0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000179C8);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE54);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE60);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D45C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CEC0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C528);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C660);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002C6B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE7C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CEC0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CF10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D07C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A028);

void func_0001A110(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025008;
    if (temp_v1 == 0) {

    } else {
        scePaf_B3D2C3BB(temp_v1);
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        scePaf_B3D2C3BB(M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_0001A174(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025008;
    if (temp_v1 == 0) {

    } else {
        scePaf_B3D2C3BB(temp_v1);
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        scePaf_B3D2C3BB(M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_0001A1D8(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025008;
    if (temp_v1 == 0) {

    } else {
        scePaf_B3D2C3BB(temp_v1);
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        scePaf_B3D2C3BB(M2C_FIELD(arg0, s32 *, 8));
    }
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A244);
#endif

#if FW_VERSION == 100
void func_0001A2C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001A2C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00017DC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A2C8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A358);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A398);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A3D8);
#endif

#if FW_VERSION == 100
s32 func_0001A420(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24) == 2;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001A420(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20) == 2;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A430);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A534);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000180E8);

void func_000181BC(void **arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(*arg0, void **(**)(), 0x24)();
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0xC)(temp_v0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001820C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A5EC);
#endif

#if FW_VERSION == 100
void func_000182F8_v100(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 != 0) {
        scePaf_910A6B7B(temp_v0);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x50);
        if (temp_s1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
        } else {
            scePaf_21A183A7(temp_s1);
            scePaf_4E67BB08(temp_s1);
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
        }
    }
}
#endif

#if FW_VERSION < 201
void func_0001A658(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0xC);
    M2C_FIELD(temp_v0, s32 *, 0) = arg0;
    M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s32 *, 8) = arg2;
    scePaf_A0ED77C4(0, func_0001AD18, temp_v0, -1, -1, &func_0001AD40);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A6C8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A738);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00004460);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A7F0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A814);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000185B0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000186EC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A8A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F40);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F44);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F48);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F4C);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F50);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F54_v100);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023F58);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00018B64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AC08);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001ACB0);
#endif

#if FW_VERSION == 100
void func_00018C2C(void *arg0) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(arg0, void ***, 8);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x34)(temp_v0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00018C60);

void func_0001AD18(void ***arg0) {
    void **temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x30)(temp_a0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001AD18(void ***arg0) {
    void **temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x1C)(temp_a0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AD40);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001ADD0);

void func_0001AE90(s32 arg0) {
    func_0001A984(arg0);
}
#endif

#if FW_VERSION == 100
void func_0001AEAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != 0) {

    } else {
        func_0001A814(arg1, arg2);
        M2C_FIELD(arg1, s32 *, 0x24) = arg3;
        func_00018B64(arg1);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001AEAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != 0) {

    } else {
        func_0001A814(arg1, arg2);
        M2C_FIELD(arg1, s32 *, 0x20) = arg3;
        func_0001AC08(arg1);
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AF04);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AFC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B07C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B0D0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B180);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B1E8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00005100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00005100(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    func_0001B4C4((s32) arg0);
    func_0001B718((s32) arg0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 != 0) {
        scePaf_79493F8F(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000191E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B3FC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B4C4);

void func_0001B52C(s32 arg0) {
    func_0000529C(arg0, 0, 0);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0000529C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000193F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B678);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000194C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B780);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B7F8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B834);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B880);
#endif

#if FW_VERSION == 100
void func_0001B880(s32 arg0, s32 arg1) {
    if (arg0 != 0) {

    } else {
        func_000191E0(arg1);
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001951C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00019544);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00019710);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000198AC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000199B0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00019AB4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00019BC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001B8BC(void) {
    struct Unk_D_00031B84 *temp_s0;

    if ((D_00031B84 == NULL) || (M2C_FIELD(D_00031B84, s32 *, 0x50) == 0)) {
        func_0001BD20((s32) D_00031B84);
        temp_s0 = D_00031B84;
        M2C_FIELD(temp_s0, s32 *, 0x50) = scePaf_A0ED77C4(0, func_0001C92C, NULL, -1, -1, &func_0001C96C);
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B928);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BA08);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BAE8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BB34);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BB80);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BBD4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BD20);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BE64);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C51C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C594);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A384);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C6EC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C92C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C96C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C978);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CA08);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CB00);
#endif

#if FW_VERSION < 152
s32 func_0001CB00(void) {
    void *sp0;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = sceIoDevctl(&D_00024E8C, 0x02125802, NULL, 0U, &sp0, 4U);
    var_a1 = temp_v0;
    if (temp_v0 >= 0) {
        var_a1 = 1;
        if (sp0 != 0x11) {
            var_a1 = (sp0 == 0x41) * 2;
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CB60);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CBF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A6B8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A738_v100);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CC7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A84C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A8EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CCC0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CD04);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CD50);
#endif

#if FW_VERSION == 100
s32 func_0001CDD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001CDD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00007000);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CE30);

void func_0001CEE4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0xC);
    M2C_FIELD(temp_v0, s32 *, 0) = arg0;
    M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s32 *, 8) = arg2;
    scePaf_A0ED77C4(0, func_0001CF54, temp_v0, -1, -1, &func_0001D000);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CF54);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AD90);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AEE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D134);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D1E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D580);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B47C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B53C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B7C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D668);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D800);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DA68);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DB4C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DBA8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DC04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BA0C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BA7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001DC68(void *arg0) {
    void *sp0;
    s32 temp_s0;
    void **temp_a1;

    temp_a1 = M2C_FIELD(arg0, void ***, 0x4C);
    M2C_FIELD(*temp_a1, M2C_UNK (**)(void *, void **), 8)(&sp0, temp_a1);
    temp_s0 = func_0001A5EC((s32) arg0, &sp0);
    func_0000389C(&sp0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DCB8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DD68);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DE20);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E028);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E078);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E84);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E88);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E8C);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001BD2C);

s32 func_0001C054(void *arg0) {
    void *sp0;
    s32 temp_s0;
    void **temp_a1;

    temp_a1 = M2C_FIELD(arg0, void ***, 0x54);
    M2C_FIELD(*temp_a1, M2C_UNK (**)(void *, void **), 8)(&sp0, temp_a1);
    temp_s0 = func_0001A5EC((s32) arg0, &sp0);
    func_0000389C(&sp0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C0A4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C154);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C328);

s32 func_0001C3E0(void **arg0) {
    void *sp0;
    s32 temp_s0;

    M2C_FIELD(*arg0, M2C_UNK (**)(void *, void **), 8)(&sp0, arg0);
    temp_s0 = scePaf_8FE88010(sp0, 0, 0, 0, 0);
    func_0000389C(&sp0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E9C);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EA4);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EA8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E0C8);

void func_0001E194(void) {
    func_0001E0C8(1, 0xFFFF);
}

void func_0001E1B4(void) {
    func_0001E0C8(0, 0xFFFF);
}

void func_0001E1D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E1E4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E224);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E278);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E364);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E3B8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E4A4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C948);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C970);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E5D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C9E8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E614);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001E614(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E63C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001E63C(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CA60);
#endif

#if FW_VERSION < 201
void func_0001E674(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 == 0) {

    } else {
        func_0001E674(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}

void func_0001E6B4(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 == 0) {

    } else {
        func_0001E6B4(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}

s32 func_0001E6F4(void) {
    return 2;
}
#endif

#if FW_VERSION == 100
s32 func_0001E6FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40) + M2C_FIELD(arg0, s32 *, 0x50);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001E6FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(arg0, s32 *, 0x44);
}
#endif

#if FW_VERSION == 100
s32 func_0001E70C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001E70C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}
#endif

#if FW_VERSION < 201
void func_0001E714(void) {

}
#endif

#if FW_VERSION == 100
void func_0001E71C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001E71C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}
#endif

#if FW_VERSION < 201
void func_0001E740(void) {
    func_00007000();
}

s32 func_0001E75C(void) {
    return 1;
}

void func_0001E764(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 == 0) {

    } else {
        func_0001E764(temp_s0);
        scePaf_4E67BB08(temp_s0);
    }
}

s32 func_0001E7A4(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CBD4);
#endif

#if FW_VERSION < 201
void func_0001E7AC(M2C_UNK **arg0) {
    *arg0 = &D_00024EF0;
    func_0001CC7C((s32) arg0);
}

void func_0001E7D4(M2C_UNK **arg0) {
    *arg0 = &D_00024EF0;
    func_0001CC7C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

s32 func_0001E80C(void) {
    return 1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CC7C_v100);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CDD4_v100);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CF2C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D1F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001E814(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E81C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E8CC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E97C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EDF8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EF68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D3F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F06C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F25C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D580_v100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F340);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F428);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F570);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F5AC);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EB8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EBC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00023FE0_v100);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EF0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024F30);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024F70);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024FA8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024FE0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025008);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024168);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D690);

void func_0001D8DC(void **arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), void ***, 0x14);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **), 0xC)(temp_v0);
    } else {
        func_000181BC(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D924);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D9C8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DAB0);

s32 func_0001DBF8(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceIoOpen(arg0, 2, 0);
    var_v1 = 1;
    if (temp_v0 >= 0) {
        sceIoClose((u32) temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DC34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025020);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025030);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F6A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DDE8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DE58);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F760);

void func_0001F7F4(void) {
    func_0001F760(1, 0xFFFF);
}

void func_0001F814(void) {
    func_0001F760(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F834);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F8C4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F904);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F994);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F9D4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FA64);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FAA4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FAE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FB38);
#endif

#if FW_VERSION < 201
void func_0001FB8C(M2C_UNK **arg0) {
    *arg0 = &D_00025068;
    func_0001CC7C((s32) arg0);
}

void func_0001FBB4(M2C_UNK **arg0) {
    *arg0 = &D_00025068;
    func_0001CC7C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

s32 func_0001FBEC(void) {
    return 0;
}

s32 func_0001FBF4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FBFC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FC58);
#endif

#if FW_VERSION == 100
s32 func_0001FCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}
#endif

#if FW_VERSION < 201
s32 func_0001FCC4(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FCCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E4C8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E620);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E778);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EA98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FDF4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FF40);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002008C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020184);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020424);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000206C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EDA4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EE54);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F248);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000207B0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020818);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020CE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002108C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F770);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F810);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F8D4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F998);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021120);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002115C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000211E4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025040);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025068);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A4);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FA64_v100);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002158C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FBB8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FC6C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FD28);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FFE4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002010C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020378);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000206AC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020738);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002126C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002153C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021564);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002158C);

void func_000215CC(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000250D0;
    if (temp_a1 == 0) {

    } else {
        scePaf_B3D2C3BB(temp_a1);
    }
}

void func_0002160C(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000250D0;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
    }
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002165C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000216C4);

void func_00021790(void) {
    func_000216C4(1, 0xFFFF);
}

void func_000217B0(void) {
    func_000216C4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000217D0);

void func_00021844(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00021854(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021864);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000218D8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002194C);

void func_000219C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000219D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000219E0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021AA0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021B60);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021C20);

void func_00021CE0(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_00021D18(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
}

void func_00021D40(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
}

void func_00021D68(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_00021DA0(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
}

void func_00021DC8(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021E00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021E00(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021E38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021E38(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    func_0002158C((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D1F0);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D7DC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D828);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002DB70);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002DBD8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002DC4C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002DFC4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002DFF8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002E070);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002E13C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002E16C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002E40C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002E528);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D248);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250D0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250E8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025100);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025118);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025020);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025148);
#endif
