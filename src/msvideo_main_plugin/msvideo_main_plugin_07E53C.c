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

void func_0007ECEC(void *arg0) {
    if (arg0 != NULL) {
        func_0007ED20(M2C_FIELD(arg0, s32 *, 0x38));
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007ED20);

s32 func_0007ED7C(void *arg0) {
    u32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    if (M2C_FIELD(arg0, u32 *, 8) == 0) {

    } else {
        do {
            if (func_000815B8(arg0, var_s2) != NULL) {
                temp_s0 = func_000815B8(arg0, var_s2);
                if (M2C_FIELD(temp_s0, s32 *, 0x29C) != (func_000815B8(arg0, var_s2) + 0x180)) {
                    func_000A4400(M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C));
                }
                M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C) = 0;
            }
            var_s2 += 1;
        } while (var_s2 < (u32) M2C_FIELD(arg0, u32 *, 8));
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

void func_0007EFF4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x10;
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 8);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0007F0B8);

s32 func_0007F190(void *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x500F;
    if (((arg0 == NULL) | (arg1 == 0)) == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        if (var_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        } else {
            M2C_FIELD(func_0007F32C(arg0, var_v0 - 1), s32 *, 0x20) = arg1;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (var_v0 + 1);
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

s32 func_00080164(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    return var_v1;
}

s32 func_00080180(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x220);
    }
    return var_v1;
}

s32 func_0008019C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000801B8);

s32 func_00080204(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x21C);
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

s32 func_00080F7C(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 temp_v0;

    M2C_FIELD(arg2, s32 *, 0x20) = 0;
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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000810A0);

void func_000810FC(void) {
    func_00098D00();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000812CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081388);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000815B8);

s32 func_000815F8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081670);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008174C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008179C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008198C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081CD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081D20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081E44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00081F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00082060);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000820E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000821A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008231C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008233C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00082394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000828C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000829BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000829D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00082A00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00082BF8);

void func_00082CF4(s32 *arg0) {
    func_00082D34(arg0);
    if (*arg0 == 0) {

    } else {
        func_000A4DDC(arg0);
    }
}

void func_00082D34(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0xDC) - 1) < 0xFU) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 0x10;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {

    } else {
        func_000A57D4(arg0 + 0xA8);
    }
}

s32 func_00082D84(void *arg0, s32 *arg1, s32 arg2) {
    s32 var_a3;
    void *temp_v0;

    var_a3 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x2AC);
        if ((temp_v0 != NULL) && (var_a3 = 0, (M2C_FIELD(temp_v0, s32 *, 0x88) == 0))) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0xB8);
        } else {
            var_a3 = func_000952C4((s32) (arg0 + 0x180), (s32) arg1, arg2);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00082DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008313C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000831D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083424);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083484);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000834C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083568);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000835F8);

s32 func_0008363C(u32 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 + arg1;
    var_a2 = 0x500E;
    if ((temp_v1 >= temp_v0) & (temp_v1 >= arg1)) {
        *arg0 = temp_v1;
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083670);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000838AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083A34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00083ABC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00084240);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00084458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00084A14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00084D7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000851B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000854B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00085704);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00085A4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00085EC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00086048);

void func_00086418(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
}

void func_0008646C(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_0007B094(arg1);
}

void func_00086508(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0007B094(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000865BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00086638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000869E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00086BF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00086F24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00087474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000875A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00087950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00087EE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008801C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000882CC);

void func_00088838(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = func_0007B134(arg1);
    M2C_FIELD(arg0, s16 *, 2) = func_0007B134(arg1);
    M2C_FIELD(arg0, s32 *, 4) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 8) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_0007B184(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B0E4(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B0E4(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x20) = func_0007B134(arg1);
    func_0007B1D4((s32) (arg0 + 0x22), 0x20, arg1);
    M2C_FIELD(arg0, s16 *, 0x42) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x44) = func_0007B134(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088910);

void func_000889DC(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_0007B184(arg1);
}

void func_00088A48(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_0007B134(arg1);
}

void func_00088A9C(s32 arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
}

void func_00088AC0(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x1C) = func_0007B134(arg1);
    M2C_FIELD(arg0, s16 *, 0x1E) = func_0007B134(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088B44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088C7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088DEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088E98);

s32 func_00088F64(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x188) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00088F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000893E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008950C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00089578);

s32 func_000895C8(void **arg0, void **arg1) {
    s32 var_a2;
    void *temp_v0;

    temp_v0 = *arg1;
    var_a2 = 0xA;
    if (temp_v0 != NULL) {
        var_a2 = 0;
        M2C_FIELD(temp_v0, void **, 0x1C) = (void *) *arg0;
        *arg0 = *arg1;
        *arg1 = NULL;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000895F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000897C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000898BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00089CAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00089E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008A064);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008A468);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008A658);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008A888);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008AC3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008AD54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008AE50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008B0F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008B214);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008B314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008B680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008B83C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008BA2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008BD88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008BF14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C0CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C140);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C2C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C538);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C60C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C6E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C88C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008C9CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008CBD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008CCF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008CD94);

void **func_0008CDE4(void **arg0) {
    void **var_a0;
    void *temp_v0;
    void *var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x1C);
            var_a0 = var_v1 + 0x1C;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

void *func_0008CE08(void *arg0) {
    void *temp_v0;
    void *var_a0;
    void *var_v1;

    var_a0 = arg0;
    var_v1 = M2C_FIELD(var_a0, void **, 0x1C);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x1C);
            var_a0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

s32 func_0008CE2C(s32 *arg0) {
    return *arg0 + 0x1C;
}

s32 func_0008CE38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008CE44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D164);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D240);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D2AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D5D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D6B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D72C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008D9E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008DDF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008DE7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E2A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E550);

s32 func_0008E584(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E590(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E59C(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5A8(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5B4(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5C0(s32 *arg0) {
    return *arg0 != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E5CC);

s32 func_0008E63C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E644);

s32 func_0008E6B4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0008E6BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void func_0008E6C4(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
    }
    if (arg4 != NULL) {
        *arg4 = M2C_FIELD(arg0, s32 *, 0x34);
    }
}

void func_0008E70C(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
    }
    if (arg4 != NULL) {
        *arg4 = M2C_FIELD(arg0, s32 *, 0x34);
    }
}

void func_0008E754(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x24);
    }
}

void func_0008E77C(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x24);
    }
}

void func_0008E7A4(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
}

void func_0008E7CC(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E7F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008E94C);

void func_0008E9E0(void *arg0) {
    if (arg0 != NULL) {
        func_0008EC84(arg0 + 8);
        func_0008ECF4(arg0 + 0x54);
        func_0008ED64(arg0 + 0xA8);
        func_0008EDC4(arg0 + 0xD8);
        func_0008EE24(arg0 + 0x108);
        func_0008EE8C(arg0 + 0x148);
        func_00080F50(M2C_FIELD(arg0, void **, 0x190));
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EA48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EAA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EAF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EB40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EB88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EBD8);

void func_0008EC28(void **arg0, void **arg1) {
    void *temp_s0;
    void *var_v0;

    var_v0 = *arg1;
    if (var_v0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 0x1C);
            func_000895C8(arg0, arg1);
            *arg1 = temp_s0;
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
        *arg1 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EC84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008ECF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008ED64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EDC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EE24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EE8C);

s32 func_0008EEFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EF04);

s32 func_0008EFA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008EFAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F054);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F0DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F248);

s32 func_0008F288(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    }
    return var_v1;
}

s32 func_0008F2A8(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v1;
}

s32 func_0008F2C8(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x24) == 0;
    }
    return var_v1;
}

s32 func_0008F2E4(void *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x190);
        var_v1 = 7;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 0x24);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F30C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F3DC);

void func_0008F424(void *arg0, s32 arg1, s32 arg2) {
    func_0008CCF8(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20), arg1, 0, arg2);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F454);

s32 func_0008F5B0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F5D4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F604);

s32 func_0008F648(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F66C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F690(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F6B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F7DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F87C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008F98C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008FB6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008FC28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0008FCA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009006C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000901B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000902F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090598);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090868);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000909EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090AC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00090CB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000910F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00091278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00091328);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00091434);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000914A0);

s32 func_000916AC(s32 *arg0, s32 *arg1) {
    *arg1 = *arg0;
    return 0;
}

s32 func_000916BC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

s32 func_000916CC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000916DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009175C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00091838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00091908);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009199C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00092008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00092258);

void func_0009238C(void) {
    func_000923A8();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000923A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00092898);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00092CC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00092D58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000930A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000931BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009352C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093604);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093650);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009368C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000936C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000936FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093740);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009377C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000937C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000937FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093840);

s32 func_000938F4(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_000A4BF4((s32) arg0, arg2);
        } else {
            var_v0 = func_000A38E8((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000939B4);

s32 func_00093A1C(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_000A4D38((s32) arg0, arg2);
        } else {
            var_v0 = func_000A38E8((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093A70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093ADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093B60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093B80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093CFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093ED4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00093FA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000940A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094148);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094228);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009456C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000948F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094A0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094C6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094CF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00094F5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095170);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000951F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000952C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000953F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009541C);

s32 func_00095448(void *arg0, s32 *arg1, s32 *arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) != 0) {
        *arg1 = 1;
        *arg2 = M2C_FIELD(arg0, s32 *, 0xF4);
    } else {
        *arg1 = 1;
        *arg2 = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000954E8);

s32 func_0009555C(void *arg0, u32 arg1, s32 arg2) {
    s32 var_a4;
    u32 temp_v1;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x114);
    var_a4 = 7;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u32 *, 4);
        var_a4 = 0x2002;
        if ((arg1 >= temp_v1) && (arg1 < (u32) (temp_v1 + M2C_FIELD(arg0, s32 *, 0xD0)))) {
            func_000938F4(arg0 + 0xC0, arg1 - temp_v1, arg2);
            var_a4 = 0;
        }
    }
    return var_a4;
}

s32 func_000955BC(void *arg0, u32 arg1, s32 arg2) {
    s32 var_a4;
    u32 *temp_v0;
    u32 temp_v1;

    temp_v0 = M2C_FIELD(arg0, u32 **, 0x114);
    var_a4 = 7;
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        var_a4 = 0x2002;
        if ((arg1 >= temp_v1) && (arg1 < (u32) (temp_v1 + M2C_FIELD(arg0, s32 *, 0xAC)))) {
            func_00093840((s32) (arg0 + 0x9C), arg1 - temp_v1, arg2);
            var_a4 = 0;
        }
    }
    return var_a4;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009561C);

s32 func_00095824(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095830);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000959D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095A7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095B00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095C9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095CD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095D14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00095E5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096004);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009614C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000964A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000969C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096A64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096BC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096DE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00096F30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097104);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097264);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000973E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000974E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097564);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000976A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097898);

void func_000979F4(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_00097A54(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097A54);

void func_00097B60(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x1C), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x1E), arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097C08);

void func_00097D18(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xC), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x10), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x12), arg1);
}

void func_00097DA8(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0xC), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_00097E20(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
}

void func_00097E84(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_00097EE4(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00097EE4);

void func_00097FBC(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    if (((M2C_FIELD(arg0, u8 *, 9) << 0x10) | (M2C_FIELD(arg0, u8 *, 0xA) << 8) | M2C_FIELD(arg0, u8 *, 0xB)) == 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0x75726C20) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_v1 != 0xC) {
                func_0007B414(M2C_FIELD(arg0, void **, 0xC), temp_v1 - 0xC, arg1);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098070);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000981AC);

void func_00098424(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v1 != 8) {
        func_0007B414(M2C_FIELD(arg0, void **, 8), temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098480);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098664);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000986E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000987CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098880);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098970);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098A4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098C08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098D00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00098E10);

s32 func_00098F90(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    return 0;
}

s32 func_0009900C(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    return 0;
}

s32 func_000990D0(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x2C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x30), arg1);
    return 0;
}

void func_000991AC(void *arg0, s32 arg1) {
    func_0007B374(M2C_FIELD(arg0, u16 *, 0), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 2), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x10), arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x12), arg1);
    func_0007B328(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B328(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x20), arg1);
    func_0007B414(arg0 + 0x22, 0x20, arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x42), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x44), arg1);
}

void func_00099280(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_0007B374(M2C_FIELD(arg0, u16 *, 0), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 2), arg2);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 8), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xA), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xC), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg2);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg2);
    if ((arg1 & 0xFFFF) != 1) {

    } else {
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg2);
    }
}

void func_0009935C(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 6, arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_000993B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000993C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000995EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000996D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00099750);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_000999F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_00099FCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A26C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A3C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B48F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4900);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4A08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4A10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4FB0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4FD8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4FF0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", D_000B4FFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A5C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A664);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A718);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A7C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009A9AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009AB90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009AC04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009ADBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009AE90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B028);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B088);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B17C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B304);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B41C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B534);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B6A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B8D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009B9BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BAEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BB68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BB80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BCDC);

s32 func_0009BD58(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x17) = arg1;
    return 0;
}

s32 func_0009BD64(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x34) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BD70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009BDF0);

void func_0009C17C(s32 arg0) {
    func_00092008(arg0 + 0x180, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009C19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009C25C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_07E53C", func_0009C404);

s32 func_0009C524(void *arg0, void *arg1) {
    s32 temp_a2;
    s32 var_a1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, void **, 0x2AC);
    temp_a2 = M2C_FIELD(temp_v0, s32 *, 0x88);
    var_a1 = 7;
    if (temp_a2 != 0) {
        var_a1 = 0x1012;
        if (M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x90), s32 *, 0x100) != 1) {
            temp_v0_2 = M2C_FIELD(arg1, void **, 0);
            var_a1 = 0x1017;
            if (temp_v0_2 != NULL) {
                var_a1 = func_0007F450(temp_a2, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(temp_v0_2, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0xC));
            }
        }
    }
    return var_a1;
}

