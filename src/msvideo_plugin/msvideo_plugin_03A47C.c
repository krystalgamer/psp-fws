#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A47C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A540);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A5D8);

s32 func_0003A674(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_0004CFA0(arg0 + 0x174);
    if (temp_v0 == 0) {
        if (*arg2 != 0) {
            *arg1 += 1;
        }
    }
    return ((temp_v0 ^ 7) != 0) ? temp_v0 : 0x2003;
}

s32 func_0003A6D4(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004A140(arg0 + 0x174);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A720);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A7B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AC0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AD1C);

s32 func_0003AE38(void **arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    void *temp_a0;

    temp_a0 = *arg0;
    var_a3 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xD4) != 0) {
        var_a3 = 0;
        *arg1 = M2C_FIELD(temp_a0, s32 *, 0xDC);
        *arg2 = M2C_FIELD(temp_a0, s32 *, 0xE0);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AE64);

s32 func_0003AEC0(void **arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, s32 *, 0x20);
    }
    return var_v1;
}

s32 func_0003AEE4(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00043A14(*arg0, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

s32 func_0003AF34(void **arg0, u16 *arg1) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, u16 *, 8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AF58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AFC4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B020);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B094);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B13C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B180);

s32 func_0003B214(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((M2C_FIELD(arg0, s32 *, 0x7C) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0)) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x90);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B240);

s32 func_0003B314(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xB4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B334);

s32 func_0003B3C8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xD8);
    }
    return var_v1;
}

s32 func_0003B3E8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004D028(arg0 + 0x174, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B438);

s32 func_0003B4AC(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0x188) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x194);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B4CC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B51C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B5BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B618);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B68C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B6DC);

s32 func_0003B708(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a3;
    u32 temp_a2;
    void *temp_v1;

    var_a3 = 0x2003;
    temp_v1 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_v1 != NULL) {
        temp_a2 = M2C_FIELD(temp_v1, u32 *, 0);
        if (temp_a2 >= 0xCU) {
            temp_v0 = M2C_FIELD(temp_v1, s32 *, 0xC);
            if (temp_v0 != 0) {
                func_0003A288(arg1, temp_v0, temp_a2 - 0xC);
                var_a3 = 0;
            }
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B760);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B7D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B864);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B8F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003B9A4);

s32 func_0003BA50(void *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = scePaf_CA79D58B(temp_v0) + 1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BA98);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BAD0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BBF8);

s32 func_0003BCD8(void *arg0, s32 arg1) {
    s32 var_a2;
    u16 temp_v1;

    var_a2 = 0x2003;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    if (temp_v1 >= 0xAU) {
        if (temp_v1 != 0xA) {
            func_0003A288(arg1, M2C_FIELD(arg0, s32 *, 0xC), temp_v1 - 0xA);
        }
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BD20);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BD84);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BE3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003BF60);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C088);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C118);

s32 func_0003C1B8(void **arg0, s32 *arg1) {
    s32 var_a2;
    void *temp_a0;

    temp_a0 = *arg0;
    var_a2 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xA0) != 0) {
        var_a2 = 0x2002;
        if (M2C_FIELD(temp_a0, s32 *, 0xBC) != 0) {
            var_a2 = 0;
            *arg1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0xC8), s32 *, 0xC);
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C1EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C284);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C2FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C53C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003C704);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003CB00);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003CE2C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003D150);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003D464);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003DAF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003DC3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003DD8C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003E0FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003E30C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003E728);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003EA58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003EC54);

void func_0003F1A8(void *arg0, M2C_UNK arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
}

void func_0003F1F0(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F238);

void func_0003F2F8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_00059318(temp_v0, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_00059450(arg0 + 8, 1, arg1);
        func_00059450(arg0 + 9, 3, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F378);

void func_0003F4DC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_00059318(temp_v0, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_00059450(arg0 + 8, 1, arg1);
        func_00059450(arg0 + 9, 3, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F55C);

void func_0003F614(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 == 0) {

    } else {
        func_00059318(temp_a0, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_00059450(arg0 + 8, 1, arg1);
        func_00059450(arg0 + 9, 3, arg1);
        func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
            func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg1);
            func_00059318(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        }
        if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
            func_00059318(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        }
        if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
            func_00059318(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
        }
        if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
            func_00059318(M2C_FIELD(arg0, s32 *, 0x20), arg1);
        }
        if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
            func_00059318(M2C_FIELD(arg0, s32 *, 0x24), arg1);
        }
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F74C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F8E8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003F960);

void func_0003F9E8(void *arg0) {
    if (arg0 != NULL) {
        func_0003FA1C(M2C_FIELD(arg0, s32 *, 0x38));
        func_00041C08(arg0);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FA1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FB3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FBA8);

void func_0003FC30(void *arg0) {
    u32 var_s1;

    M2C_FIELD(arg0, s32 *, 0) = 8;
    var_s1 = 0;
    func_0003FCE8(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, u32 *, 0x34) == 0) {

    } else {
        do {
            if (func_00040020(arg0, var_s1) != NULL) {
                func_0003FDAC(func_00040020(arg0, var_s1));
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + *func_00040020(arg0, var_s1));
            }
            var_s1 += 1;
        } while (var_s1 < (u32) M2C_FIELD(arg0, u32 *, 0x34));
    }
}

void func_0003FCE8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x10;
    if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 8);
    }
    if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_00043614(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FDAC);

s32 func_0003FE84(void *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x500F;
    if (((arg0 == NULL) | (arg1 == 0)) == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        if (var_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        } else {
            M2C_FIELD(func_00040020(arg0, var_v0 - 1), s32 *, 0x20) = arg1;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (var_v0 + 1);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FEF8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003FF80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040020);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040068);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000400FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040144);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004026C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000403A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040418);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000404B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004056C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000407D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040864);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040898);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040B3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040B88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040BF0);

s32 func_00040CD8(void *arg0, u32 arg1, s32 *arg2) {
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

s32 func_00040D10(void *arg0, u32 arg1, s32 *arg2) {
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

s32 func_00040D48(void *arg0, u32 arg1, s32 *arg2) {
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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040D80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040DD0);

s32 func_00040E30(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != 0) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x1C);
    }
    return var_v1;
}

s32 func_00040E54(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    return var_v1;
}

s32 func_00040E70(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x220);
    }
    return var_v1;
}

s32 func_00040E8C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040EA8);

s32 func_00040EF4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x21C);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00040F10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000415FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041648);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041760);

void func_00041908(s32 arg0) {
    scePaf_CE699963(1, arg0);
}

void func_00041928(s32 arg0) {
    scePaf_5FAC9869(arg0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041944);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000419C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041C08);

s32 func_00041C34(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 0x20) = 0;
    temp_v0 = func_0004461C();
    if (temp_v0 != 0x5001) {
        func_0004392C(arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041C80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041CE8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041D30);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041D5C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041DD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00041F88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042044);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042278);

s32 func_000422B8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000422D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042330);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042410);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042460);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042650);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004298C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000429D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042AF8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042C0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042CD8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042D58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042DF8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042F74);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042F94);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00042FEC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004351C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043614);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004362C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043658);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043850);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004392C);

void func_0004396C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0xD4) - 1) < 0xFU) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x10;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA0) == 0) {

    } else {
        func_0005EBB0(arg0 + 0xA0);
    }
}

s32 func_000439BC(void *arg0, s32 *arg1, s32 arg2) {
    s32 var_a3;
    void *temp_v0;

    var_a3 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x298);
        if ((temp_v0 != NULL) && (var_a3 = 0, (M2C_FIELD(temp_v0, s32 *, 0x84) == 0))) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0xB8);
        } else {
            var_a3 = func_0004D0F4((s32) (arg0 + 0x174), (s32) arg1, arg2);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043A14);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043D74);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00043E10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004405C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000440BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000440F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000441A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00044230);

s32 func_00044274(u32 *arg0, u32 arg1) {
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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000442A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00044358);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000444B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004461C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000446CC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00044CFC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00045164);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000454B8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000458A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00045AF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00045D44);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046090);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046510);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046694);

void func_00046A68(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_000590D0(arg1);
}

void func_00046ABC(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_000590D0(arg1);
}

void func_00046B58(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x30) = func_000590D0(arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046C0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046C88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00046FB4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000471C4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000474EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00047A1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00047B54);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00047EC4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00048394);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000484CC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004878C);

void func_00048BB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = func_00059170(arg1);
    M2C_FIELD(arg0, s16 *, 2) = func_00059170(arg1);
    M2C_FIELD(arg0, s32 *, 4) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 8) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_000591C0(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_00059120(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_00059120(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_000590D0(arg1);
    M2C_FIELD(arg0, s16 *, 0x20) = func_00059170(arg1);
    func_00059210((s32) (arg0 + 0x22), 0x20, arg1);
    M2C_FIELD(arg0, s16 *, 0x42) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0x44) = func_00059170(arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00048C88);

void func_00048D54(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_000591C0(arg1);
}

void func_00048DC0(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_000591C0(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_00059170(arg1);
}

void func_00048E14(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_000590D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_000590D0(arg1);
    M2C_FIELD(arg0, s16 *, 0x1C) = func_00059170(arg1);
    M2C_FIELD(arg0, s16 *, 0x1E) = func_00059170(arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00048E98);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00048FD0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004912C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049140);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000491EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049294);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049388);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000493F4);

s32 func_000495C8(s32 *arg0, s32 *arg1) {
    *arg1 = *arg0;
    return 0;
}

s32 func_000495D8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

s32 func_000495E8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000495F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049670);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049814);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000498A4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00049F08);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004A140);

void func_0004A274(void) {
    func_0004A290();
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004A290);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004A75C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004AB74);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004AC04);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004AF50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004AFE0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B068);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B3D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B4B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B4FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B538);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B570);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B5A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B5EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B628);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B670);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B6A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B6EC);

s32 func_0004B7A0(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_0005E090((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B7F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B860);

s32 func_0004B8C8(void *arg0, u32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
            var_v0 = func_0005E1D4((s32) arg0, arg2);
        } else {
            var_v0 = func_0005CF38((s32) (arg0 + 0x14), (s32) arg1, 1, 0, arg2);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B91C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004B988);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BA0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BA2C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BB24);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BBA8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BC84);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BD80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BE54);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BF54);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004BFF4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004C088);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004C3B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004C728);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004C83C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004CA9C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004CB20);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004CD8C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004CFA0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D028);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D0F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D1B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D224);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D24C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D278);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D2A4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D318);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D38C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D44C);

s32 func_0004D60C(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D618);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D784);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D830);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004D8B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DA50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DA80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DAC0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DC04);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DDA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004DEEC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E0C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E244);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E524);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E6B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E760);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E804);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004E960);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004EB84);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004ECE0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004EEB4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004EFEC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F16C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F268);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F32C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F3E4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F4F8);

void func_0004F654(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_0004F6B4(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F6B4);

void func_0004F7C0(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x1C), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x1E), arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004F868);

void func_0004F978(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xC), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xE), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x10), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x12), arg1);
}

void func_0004FA08(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_00059400(M2C_FIELD(arg0, s16 *, 0xC), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_0004FA80(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_0004FAE0(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004FAE0);

void func_0004FBB8(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    if (((M2C_FIELD(arg0, u8 *, 9) << 0x10) | (M2C_FIELD(arg0, u8 *, 0xA) << 8) | M2C_FIELD(arg0, u8 *, 0xB)) == 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0x75726C20) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_v1 != 0xC) {
                func_00059450(M2C_FIELD(arg0, void **, 0xC), temp_v1 - 0xC, arg1);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004FC6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004FDA0);

void func_0004FF88(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v1 != 8) {
        func_00059450(M2C_FIELD(arg0, void **, 8), temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0004FFE4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000501C8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005024C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050330);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000503E4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000504D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000505B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050678);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005076C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050864);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050974);

s32 func_00050AF4(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    return 0;
}

s32 func_00050B70(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    return 0;
}

s32 func_00050C34(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 1, arg1);
    func_00059450(arg0 + 9, 3, arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x2C), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x30), arg1);
    return 0;
}

void func_00050D10(void *arg0, s32 arg1) {
    func_000593B0(M2C_FIELD(arg0, u16 *, 0), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 2), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_00059400(M2C_FIELD(arg0, s16 *, 0x10), arg1);
    func_00059400(M2C_FIELD(arg0, s16 *, 0x12), arg1);
    func_00059364(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_00059364(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x20), arg1);
    func_00059450(arg0 + 0x22, 0x20, arg1);
    func_00059400(M2C_FIELD(arg0, s16 *, 0x42), arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0x44), arg1);
}

void func_00050DE4(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_000593B0(M2C_FIELD(arg0, u16 *, 0), arg2);
    func_000593B0(M2C_FIELD(arg0, u16 *, 2), arg2);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg2);
    func_000593B0(M2C_FIELD(arg0, u16 *, 8), arg2);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xA), arg2);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xC), arg2);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xE), arg2);
    func_00059318(M2C_FIELD(arg0, s32 *, 0x10), arg2);
    if ((arg1 & 0xFFFF) != 1) {

    } else {
        func_00059318(M2C_FIELD(arg0, s32 *, 0x14), arg2);
        func_00059318(M2C_FIELD(arg0, s32 *, 0x18), arg2);
        func_00059318(M2C_FIELD(arg0, s32 *, 0x1C), arg2);
        func_00059318(M2C_FIELD(arg0, s32 *, 0x20), arg2);
    }
}

void func_00050EC0(void *arg0, s32 arg1) {
    func_00059318(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_00059318(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_00059450(arg0 + 8, 6, arg1);
    func_000593B0(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_00050F1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050F28);

s32 func_00050FD4(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x15C) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00050FEC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00051418);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00051544);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000515B0);

s32 func_000515F4(void **arg0, void **arg1) {
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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00051620);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000517F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000518F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00051CE8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00051EA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000520A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000524A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00052698);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000528C8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00052C7C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00052D94);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00052E90);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053134);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053254);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053354);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000536C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005387C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053A6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053DC8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00053F54);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005410C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054188);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000542FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005454C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005461C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000546EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054890);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000549C4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054BCC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054CF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054D8C);

void **func_00054DDC(void **arg0) {
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

void *func_00054E00(void *arg0) {
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

s32 func_00054E24(s32 *arg0) {
    return *arg0 + 0x1C;
}

s32 func_00054E30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00054E3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00055060);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005513C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005520C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00055278);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000555A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005567C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_000556F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0005599C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00055DA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00055E30);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_00056258);

