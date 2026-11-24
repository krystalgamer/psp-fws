#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007E53C);

void func_0007E5FC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

void func_0007E67C(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007E72C);

void func_0007E7E0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007E860);

void func_0007E918(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 == 0) {

    } else {
        func_0007B2DC(temp_a0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007EA50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007EBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007EC64);

void func_0007ECEC(struct Unk_func_0007ECEC_0 *arg0) {
    if (arg0 != NULL) {
        func_0007ED20(arg0->unk38);
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007ED20);

s32 func_0007ED7C(struct Unk_func_0007ED7C_0 *arg0) {
    u32 var_s2;
    struct Unk_func_0007ED7C_temp_s0 *temp_s0;

    var_s2 = 0;
    if (arg0->unk8 == 0) {

    } else {
        do {
            if (func_000815B8(arg0, var_s2) != NULL) {
                temp_s0 = func_000815B8(arg0, var_s2);
                if (temp_s0->unk29C != (func_000815B8(arg0, var_s2) + 0x180)) {
                    func_000A4400(M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C));
                }
                M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C) = 0;
            }
            var_s2 += 1;
        } while (var_s2 < (u32) arg0->unk8);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007EE40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007EEB4);

void func_0007EF3C(void *arg0) {
    u32 var_s1;

    M2C_FIELD(arg0, s32 *, 0) = 8;
    var_s1 = 0;
    func_0007EFF4(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, u32 *, 0x34) == 0) {

    } else {
        do {
            if (func_0007F32C(arg0, var_s1) != NULL) {
                func_0007F0B8(func_0007F32C(arg0, var_s1));
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + *func_0007F32C(arg0, var_s1));
            }
            var_s1 += 1;
        } while (var_s1 < (u32) M2C_FIELD(arg0, u32 *, 0x34));
    }
}

void func_0007EFF4(struct Unk_func_0007EFF4_0 *arg0) {
    arg0->unk0 = 0x10;
    if (func_000829BC(arg0->unkB, 0) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 8);
    }
    if (func_000829BC(arg0->unkB, 1) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_000829BC(arg0->unkB, 3) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_000829BC(arg0->unkB, 4) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_000829BC(arg0->unkB, 5) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F0B8);

s32 func_0007F190(struct Unk_func_0007F190_0 *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x500F;
    if (((arg0 == NULL) | (arg1 == 0)) == 0) {
        var_v0 = arg0->unk34;
        if (var_v0 == 0) {
            arg0->unk38 = arg1;
        } else {
            M2C_FIELD(func_0007F32C(arg0, var_v0 - 1), s32 *, 0x20) = arg1;
            var_v0 = arg0->unk34;
        }
        arg0->unk34 = (s32) (var_v0 + 1);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F28C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F32C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F374);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F408);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F578);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F724);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F7BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F878);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FAE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FB70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FBA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FE48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FE94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007FEFC);

s32 func_0007FFE8(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x3C);
        }
    }
    return var_a3;
}

s32 func_00080020(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x40);
        }
    }
    return var_a3;
}

s32 func_00080058(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x14);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080090);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000800E0);

s32 func_00080140(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != 0) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x1C);
    }
    return var_v1;
}

s32 func_00080164(struct Unk_func_00080164_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk18;
    }
    return var_v1;
}

s32 func_00080180(struct Unk_func_00080180_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk220;
    }
    return var_v1;
}

s32 func_0008019C(struct Unk_func_0008019C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk14;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000801B8);

s32 func_00080204(struct Unk_func_00080204_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk21C;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080960);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080A78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080C20);

void func_00080C40(void) {
    scePaf_3AC3E06A();
}

s32 func_00080C5C(s32 **arg0, u32 arg1, s32 arg2) {
    s32 *temp_v0;
    s32 var_v0;

    temp_v0 = func_00080C20(arg2);
    var_v0 = 1;
    if (temp_v0 != NULL) {
        func_00078688(temp_v0, *arg0, (arg1 >= (u32) arg2) ? arg2 : (s32) arg1);
        scePaf_4729E549(*arg0);
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080CD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080F50);

s32 func_00080F7C(s32 arg0, s32 arg1, struct Unk_func_00080F7C_2 *arg2, s32 arg3) {
    s32 temp_v0;

    arg2->unk20 = 0;
    temp_v0 = func_00083A34(arg0, arg1, (s32) arg2, arg3);
    if (temp_v0 != 0x5001) {
        func_00082CF4((s32 *) arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00080FC8);

s32 func_0008102C(s32 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x5001;
    if (arg0 != NULL) {
        func_000A4DDC(arg0);
        var_v0 = func_00097104((s32) arg0, arg1);
    }
    return var_v0;
}

