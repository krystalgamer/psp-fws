#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B4CC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B51C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B5BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B618);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B68C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B6DC);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B760);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B7D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B864);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B8F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003B9A4);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BA98);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BAD0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BBF8);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BD20);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BD84);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BE3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003BF60);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C088);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C118);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C1EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C284);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C2FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C53C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003C704);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003CB00);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003CE2C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003D150);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003D464);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003DAF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003DC3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003DD8C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003E0FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003E30C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003E728);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003EA58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003EC54);

void func_0003F1A8(void *arg0, M2C_UNK arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
}

void func_0003F1F0(void *arg0, s32 arg1) {
    func_00059210(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_000590D0(arg1);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F238);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F378);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F55C);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F74C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F8E8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003F960);

void func_0003F9E8(void *arg0) {
    if (arg0 != NULL) {
        func_0003FA1C(M2C_FIELD(arg0, s32 *, 0x38));
        func_00041C08(arg0);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FA1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FB3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FBA8);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FDAC);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FEF8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0003FF80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040020);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040068);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000400FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040144);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0004026C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000403A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040418);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000404B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_0004056C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000407D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040864);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040898);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040B3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040B88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040BF0);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040D80);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040DD0);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040EA8);

s32 func_00040EF4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x21C);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00040F10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000415FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00041648);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00041760);

void func_00041908(s32 arg0) {
    scePaf_CE699963(1, arg0);
}

void func_00041928(s32 arg0) {
    scePaf_5FAC9869(arg0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00041944);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_000419C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00041C08);

s32 func_00041C34(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 0x20) = 0;
    temp_v0 = func_0004461C();
    if (temp_v0 != 0x5001) {
        func_0004392C(arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03B4CC", func_00041C80);

