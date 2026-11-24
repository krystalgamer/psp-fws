#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION == 201
void func_0002BC40(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BC68(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BCA0(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BCC8(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BD00(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BD38(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
}

void func_0002BD60(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BD88(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031648);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031660);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031678);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00031690);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000316A8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000316C0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BDC0);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002BF84);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CB84);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CC08);

void func_0002CC40(void) {
    func_0002CE54();
}

void func_0002CC5C(void) {
    func_0002CE60();
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CC78);

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

s32 *func_0002CE1C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CEC0(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE54);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE60);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CE7C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CEC0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002CF10);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D07C);

#if FW_VERSION == 150
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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A244);

void func_0001A2C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A2C8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A358);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A398);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A3D8);

s32 func_0001A420(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20) == 2;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A430);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A534);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A5EC);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A8A8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001A984);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AC08);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001ACB0);

void func_0001AD18(void ***arg0) {
    void **temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x1C)(temp_a0);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001AD40);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001ADD0);

void func_0001AE90(s32 arg0) {
    func_0001A984(arg0);
}

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B07C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B0D0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B124);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B180);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B1E8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B280);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B3FC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B4C4);

void func_0001B52C(s32 arg0) {
    func_0000529C(arg0, 0, 0);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0000529C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B678);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B718);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B780);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B7F8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B834);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001B880);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C51C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C594);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C6EC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C92C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C96C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001C978);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CA08);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CB00);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CB60);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CBF0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CC7C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CCC0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CD04);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001CD50);

s32 func_0001CDD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D134);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D1E4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D580);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D668);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001D800);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DA68);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DB4C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DBA8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001DC04);

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

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E80);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E84);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E88);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E8C);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E98);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024E9C);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EA4);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EA8);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E5D8);

void func_0001E614(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
}

void func_0001E63C(M2C_UNK **arg0) {
    *arg0 = &D_00025020;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

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

s32 func_0001E6FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(arg0, s32 *, 0x44);
}

s32 func_0001E70C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void func_0001E714(void) {

}

void func_0001E71C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

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

s32 func_0001E814(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E81C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E8CC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001E97C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EDF8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001EF68);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F06C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F25C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F340);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F428);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F570);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F5AC);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EB8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EBC);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EC8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024EF0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024F30);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024F70);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024FA8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00024FE0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025008);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025020);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025030);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001F6A8);

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

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FB38);

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

s32 func_0001FCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 func_0001FCC4(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FCCC);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FDF4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0001FF40);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002008C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020184);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020424);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000206C4);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000207B0);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020818);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00020CE8);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002108C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_00021120);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002115C);

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_000211E4);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025040);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025068);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A4);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250A8);

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

void func_00021E00(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    func_0002158C((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_00021E38(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    func_0002158C((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin_02BC40", func_0002D1F0);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250D0);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_000250E8);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025100);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025118);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025130);

INCLUDE_RODATA("nonmatchings/photo_plugin_02BC40", D_00025148);
#endif
