#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B4CC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B51C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B5BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B618);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B68C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B6DC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002E820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002E878);
#else
s32 func_0003B708(struct Unk_func_00039854_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a3;
    u32 temp_a2;
    struct Unk_func_0003B708_temp_v1 *temp_v1;

    var_a3 = 0x2003;
    temp_v1 = arg0->unk28;
    if (temp_v1 != NULL) {
        temp_a2 = temp_v1->unk0;
        if (temp_a2 >= 0xCU) {
            temp_v0 = temp_v1->unkC;
            if (temp_v0 != 0) {
                func_0003A288(arg1, temp_v0, temp_a2 - 0xC);
                var_a3 = 0;
            }
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B760);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B7D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B8F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003B9A4);

s32 func_0003BA50(struct Unk_func_0003996C_0 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = scePaf_CA79D58B(temp_v0) + 1;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BA98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BAD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BBF8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002EAE4);
#else
s32 func_0003BCD8(struct Unk_func_00039A48_0 *arg0, s32 arg1) {
    s32 var_a2;
    u16 temp_v1;

    var_a2 = 0x2003;
    temp_v1 = arg0->unk0;
    if (temp_v1 >= 0xAU) {
        if (temp_v1 != 0xA) {
            func_0003A288(arg1, arg0->unkC, temp_v1 - 0xA);
        }
        var_a2 = 0;
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BD20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BD84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BE3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003BF60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C088);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C118);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002EF90);
#else
s32 func_0003C1B8(void **arg0, s32 *arg1) {
    s32 var_a2;
    struct Unk_func_0003C1B8_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_a2 = 0x2003;
    if (temp_a0->unkA0 != 0) {
        var_a2 = 0x2002;
        if (temp_a0->unkBC != 0) {
            var_a2 = 0;
            *arg1 = temp_a0->unkC8->unkC;
        }
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C1EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C284);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002F0D4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00032838);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0002F36C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C2FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C53C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003C704);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003CB00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003CE2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003D150);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003D464);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003DAF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003DC3C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00030BF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00030C38);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003DD8C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003E0FC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000311A4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003E30C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003E728);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003EA58);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003EC54);

#if FW_VERSION == 201
void func_0003F1A8(struct Unk_func_0003F1A8_0 *arg0, M2C_UNK arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
}

void func_0003F1F0(struct Unk_func_0003F1F0_0 *arg0, s32 arg1) {
    func_00059210((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_000590D0(arg1);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F238);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F2F8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003F2F8(struct Unk_func_0003F2F8_0 *arg0, s32 arg1) {
    if (arg0->unk0 == 0) {

    } else {
        func_0003F09C((s32) &D_00049194, (s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 201
void func_0003F2F8(struct Unk_func_0003F2F8_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 == 0) {

    } else {
        func_00059318(temp_v0, arg1);
        func_00059318(arg0->unk4, arg1);
        func_00059450((u8 *)arg0 + 8, 1, arg1);
        func_00059450((u8 *)arg0 + 9, 3, arg1);
        func_00059318(arg0->unkC, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F378);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00031F70);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00031F70(s32 *arg0, s32 arg1) {
    if (*arg0 == 0) {

    } else {
        func_0003F09C((s32) &D_00049194, (s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 201
void func_0003F4DC(struct Unk_func_0003F4DC_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 == 0) {

    } else {
        func_00059318(temp_v0, arg1);
        func_00059318(arg0->unk4, arg1);
        func_00059450((u8 *)arg0 + 8, 1, arg1);
        func_00059450((u8 *)arg0 + 9, 3, arg1);
        func_00059318(arg0->unkC, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F55C);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F614);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003F614(struct Unk_func_0003F614_0 *arg0, s32 arg1) {
    if (arg0->unk0 == 0) {

    } else {
        func_0003F09C((s32) &D_00049194, (s32) arg0, arg1);
        if (func_00043614(arg0->unkB, 0) != 0) {
            func_00059318(arg0->unk10, arg1);
            func_00059318(arg0->unk14, arg1);
        }
        if (func_00043614(arg0->unkB, 1) != 0) {
            func_00059318(arg0->unk18, arg1);
        }
        if (func_00043614(arg0->unkB, 3) != 0) {
            func_00059318(arg0->unk1C, arg1);
        }
        if (func_00043614(arg0->unkB, 4) != 0) {
            func_00059318(arg0->unk20, arg1);
        }
        if (func_00043614(arg0->unkB, 5) != 0) {
            func_00059318(arg0->unk24, arg1);
        }
    }
}
#endif

#if FW_VERSION == 201
void func_0003F614(struct Unk_func_0003F614_0 *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unk0;
    if (temp_a0 == 0) {

    } else {
        func_00059318(temp_a0, arg1);
        func_00059318(arg0->unk4, arg1);
        func_00059450((u8 *)arg0 + 8, 1, arg1);
        func_00059450((u8 *)arg0 + 9, 3, arg1);
        func_00059318(arg0->unkC, arg1);
        if (func_00043614(arg0->unkB, 0) != 0) {
            func_00059318(arg0->unk10, arg1);
            func_00059318(arg0->unk14, arg1);
        }
        if (func_00043614(arg0->unkB, 1) != 0) {
            func_00059318(arg0->unk18, arg1);
        }
        if (func_00043614(arg0->unkB, 3) != 0) {
            func_00059318(arg0->unk1C, arg1);
        }
        if (func_00043614(arg0->unkB, 4) != 0) {
            func_00059318(arg0->unk20, arg1);
        }
        if (func_00043614(arg0->unkB, 5) != 0) {
            func_00059318(arg0->unk24, arg1);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F74C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F8E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F960);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003F9E8);
#else
void func_0003F9E8(struct Unk_func_0003F9E8_0 *arg0) {
    if (arg0 != NULL) {
        func_0003FA1C(arg0->unk38);
        func_00041C08(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FA1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FB3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FBA8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FC30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000326E4);
#else
void func_0003FC30(struct Unk_func_0003FC30_0 *arg0) {
    u32 var_s1;

    arg0->unk0 = 8;
    var_s1 = 0;
    func_0003FCE8(&arg0->unk8);
    arg0->unk0 = (s32) (arg0->unk0 + arg0->unk8);
    if (arg0->unk34 == 0) {

    } else {
        do {
            if (func_00040020(arg0, var_s1) != NULL) {
                func_0003FDAC(func_00040020(arg0, var_s1));
                arg0->unk0 = (s32) (arg0->unk0 + *func_00040020(arg0, var_s1));
            }
            var_s1 += 1;
        } while (var_s1 < (u32) arg0->unk34);
    }
}

void func_0003FCE8(struct Unk_func_0003FCE8_0 *arg0) {
    arg0->unk0 = 0x10;
    if (func_00043614(arg0->unkB, 0) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 8);
    }
    if (func_00043614(arg0->unkB, 1) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_00043614(arg0->unkB, 3) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_00043614(arg0->unkB, 4) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
    if (func_00043614(arg0->unkB, 5) != 0) {
        arg0->unk0 = (s32) (arg0->unk0 + 4);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FDAC);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000328C4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000328C4(void *arg0, s32 arg1) {
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
#endif

#if FW_VERSION == 201
s32 func_0003FE84(struct Unk_func_0003FE84_0 *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x500F;
    if (((arg0 == NULL) | (arg1 == 0)) == 0) {
        var_v0 = arg0->unk34;
        if (var_v0 == 0) {
            arg0->unk38 = arg1;
        } else {
            M2C_FIELD(func_00040020(arg0, var_v0 - 1), s32 *, 0x20) = arg1;
            var_v0 = arg0->unk34;
        }
        arg0->unk34 = (s32) (var_v0 + 1);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FEF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0003FF80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040020);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040068);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000400FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040144);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0004026C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000403A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040418);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000404B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_0004056C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000407D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040898);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040B3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040B88);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033634);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000336C0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000336C0(void *arg0, u32 arg1, s32 *arg2) {
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
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000336F8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000336F8(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x44);
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033730);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00033730(void *arg0, u32 arg1, s32 *arg2) {
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
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033768);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00033768(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040BF0);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040D80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040DD0);

s32 func_00040E30(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != 0) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x1C);
    }
    return var_v1;
}

s32 func_00040E54(struct Unk_func_00040E54_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk18;
    }
    return var_v1;
}

s32 func_00040E70(struct Unk_func_00040E70_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk220;
    }
    return var_v1;
}

s32 func_00040E8C(struct Unk_func_00040E8C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk14;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040EA8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000337D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000337D0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x21C);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000337EC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033CE8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00033CE8(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x500F;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041908);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041928);
#endif

#if FW_VERSION == 201
s32 func_00040EF4(struct Unk_func_00040EF4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk21C;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00040F10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000415FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041648);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041760);
#endif

#if FW_VERSION != 150
void func_00041908(s32 arg0) {
    scePaf_CE699963(1, arg0);
}

void func_00041928(s32 arg0) {
    scePaf_5FAC9869(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041944);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033DBC);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000419C0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041C08);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00033FFC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00033FFC(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    temp_v0 = func_0004461C();
    if (temp_v0 != 0x5001) {
        func_00035B14(arg0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 201
s32 func_00041C34(s32 arg0, struct Unk_func_00041C34_1 *arg1) {
    s32 temp_v0;

    arg1->unk20 = 0;
    temp_v0 = func_0004461C();
    if (temp_v0 != 0x5001) {
        func_0004392C(arg0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00041C80);
#else
s32 func_00041C80(s32 arg0, s32 arg1, void *arg2) {
    s32 var_s2;

    M2C_FIELD(arg2, s32 *, 0x10) = 0;
    var_s2 = func_0004878C(arg0, arg1, (s32) arg2);
    if (M2C_FIELD(arg2, s32 *, 4) & 0xE0000000) {
        var_s2 = 0x5001;
    }
    if (var_s2 != 0x5001) {
        func_00035B14(arg0);
    }
    return var_s2;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_000340B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03B4CC", func_00034184);
#endif
