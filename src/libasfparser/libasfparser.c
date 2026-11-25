/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libasfparser_decls.h"

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_91B11F3A);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_6B3AE857);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_C6D98C54);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_685E0DA7);
#endif

#if FW_VERSION == 260
s32 func_00000214(s32 arg0, s32 arg1, void **arg2) {
    s32 var_v1;
    void *temp_v0;

    *arg2 = NULL;
    var_v1 = 0x86400001;
    if (arg0 != 0) {
        var_v1 = 0x86400402;
        if ((u32) (arg1 - 1) < 0x7FU) {
            temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x3014);
            var_v1 = 0x86400403;
            *arg2 = temp_v0;
            if (temp_v0 != NULL) {
                var_v1 = ((M2C_FIELD(temp_v0, s32 *, 8) ^ 3) == 0) ? 0 : 0x86400401;
            }
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_49E09367);
#endif

#if FW_VERSION == 282
s32 func_00000214(s32 arg0, s32 arg1, void **arg2) {
    s32 var_v1;
    struct Unk_func_00000214_temp_v0 *temp_v0;

    *arg2 = NULL;
    var_v1 = 0x86400001;
    if (arg0 != 0) {
        var_v1 = 0x86400402;
        if ((u32) (arg1 - 1) < 0x7FU) {
            temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x3014);
            var_v1 = 0x86400403;
            *arg2 = temp_v0;
            if (temp_v0 != NULL) {
                var_v1 = ((temp_v0->unk8 ^ 3) == 0) ? 0 : 0x86400401;
            }
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00000270);

#if FW_VERSION == 250
s32 func_000001E0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_a0;
    s32 var_v1;

    *arg2 = 0;
    var_v1 = 0x86400001;
    if (arg0 != 0) {
        var_v1 = 0x86400402;
        if ((u32) (arg1 - 1) < 0x7FU) {
            temp_a0 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x84);
            *arg2 = temp_a0;
            var_v1 = (temp_a0 != 0) ? 0 : 0x86400403;
        }
    }
    return var_v1;
}
#endif

s32 sceAsfParser_B9E4BD9E(void) {
    return 0;
}

s32 sceAsfParser_8B08301F(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_95AD7B34);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_2CB147F7);
#else
void sceAsfParser_2CB147F7(s32 arg0, s32 arg1, s32 arg2) {
    void *sp0;
    if (func_000001E0(arg0, arg1, &sp0) >= 0) {
        func_00002124(arg0, sp0, arg2);
    }
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_41322F4A);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_24DB62B1);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_320202AB);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_6DA63281);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_3CAAC462);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000058C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00000698_v260);

INCLUDE_ASM("nonmatchings/libasfparser", func_000006D8_v260);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000708);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000730);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000780);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_F4502CB5);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_002052FF);

void sceAsfParser_385E1320(s32 arg0, s32 arg1, s32 arg2) {
    void *sp0;
    if (func_000001E0(arg0, arg1, &sp0) >= 0) {
        func_000033E4(sp0, arg2);
    }
}

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_EFC704C3);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_D2DD1778);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_F5F356F6);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_AA881A7B);

INCLUDE_ASM("nonmatchings/libasfparser", sceAsfParser_5EC678CB);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000474);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00000698);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libasfparser", func_0000080C);
#else
INCLUDE_ASM("nonmatchings/libasfparser", func_000006D8);
#endif

#if FW_VERSION < 282
void func_000006D8(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 8)(temp_a1, temp_a1);
}
#endif

#if FW_VERSION == 250
void func_00000548(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    temp_v1 = arg0 + 0x29C;
    M2C_FIELD(arg0, s32 *, 0x29C) = arg1;
    M2C_FIELD(temp_v1, s32 *, 4) = arg2;
    M2C_FIELD(temp_v1, s32 *, 8) = arg3;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_0000055C);
#endif

#if FW_VERSION != 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00000708);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000730);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000780);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_00000658);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000750);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_000007E8);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000080C);

void func_0000083C(struct Unk_func_0000083C_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk0;
    arg0->unk8(temp_a1, temp_a1);
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00000860);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_000008F4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000980);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000A64);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00000ACC);
#else
INCLUDE_ASM("nonmatchings/libasfparser", func_000009E0);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00000DF4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00000E5C);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00000F0C);
#else
INCLUDE_ASM("nonmatchings/libasfparser", func_00000E14);
#endif

#if FW_VERSION == 260
s32 func_00000FB8(struct Unk_func_00000FB8_0 *arg0) {
    s32 var_v1;
    u32 temp_a4;
    u32 temp_v0;

    var_v1 = 0;
    temp_a4 = arg0->unk20;
    temp_v0 = arg0->unk8;
    if (temp_a4 < temp_v0) {
        var_v1 = func_000016F4((s32) arg0, temp_v0 - temp_a4);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 250
s32 func_00000FB8(struct Unk_func_00000FB8_0 *arg0) {
    s32 var_v1;
    u32 temp_a4;
    u32 temp_v0;

    var_v1 = 0;
    temp_a4 = M2C_FIELD(arg0, u32 *, 0x30);
    temp_v0 = M2C_FIELD(arg0, u32 *, 0x14);
    if (temp_a4 < temp_v0) {
        var_v1 = func_000016F4((s32) arg0, temp_v0 - temp_a4);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_00000FB8(struct Unk_func_00000FB8_0 *arg0) {
    s32 temp_v0;
    s32 var_a3;
    u32 temp_t0;
    u32 temp_t1;
    u32 var_a2;

    var_a3 = 0;
    var_a2 = arg0->unk20;
    temp_t0 = arg0->unk8;
    if (var_a2 < temp_t0) {
        temp_v0 = func_000016F4((s32) arg0, temp_t0 - var_a2);
        var_a2 = arg0->unk20;
        var_a3 = temp_v0;
    }
    temp_t1 = arg0->unk38->unk40;
    if (var_a2 < temp_t1) {
        var_a3 = func_000016F4((s32) arg0, temp_t1 - var_a2);
    }
    return var_a3;
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00001030);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000113C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000011C8);

void func_00001288(s32 arg0, s32 arg1) {
    if (func_00001868(arg0) != 0) {
        func_00001300(arg0, arg1);
    } else {
        func_000012DC(arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000012DC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001300);

INCLUDE_ASM("nonmatchings/libasfparser", func_000013C0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001578);

INCLUDE_ASM("nonmatchings/libasfparser", func_000015C0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001658);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000168C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000016C0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000016F4);

#if FW_VERSION == 260
s32 func_00001728(struct Unk_func_00001728_0 *arg0) {
    return (u32) (arg0->unk20 + arg0->unkC) >= (u32) arg0->unk8;
}
#endif

#if FW_VERSION == 250
s32 func_00001728(struct Unk_func_00001728_0 *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s32 *, 0x1C)) >= (u32) M2C_FIELD(arg0, u32 *, 0x14);
}
#endif

#if FW_VERSION == 282
s32 func_00001728(struct Unk_func_00001728_0 *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x20) + arg0->unkC) >= (u32) arg0->unk8;
}
#endif

#if FW_VERSION >= 260
s32 func_00001744(struct Unk_func_00001728_0 *arg0) {
    return (u32) arg0->unk20 >= (u32) arg0->unk28;
}
#else
s32 func_00001744(struct Unk_func_00001728_0 *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x30) >= (u32) M2C_FIELD(arg0, u32 *, 0x38);
}
#endif

#if FW_VERSION >= 260
s32 func_00001758(struct Unk_func_00001758_0 *arg0) {
    return (u32) arg0->unk20 >= (u32) arg0->unk24;
}
#else
s32 func_00001758(struct Unk_func_00001758_0 *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x30) >= (u32) M2C_FIELD(arg0, u32 *, 0x34);
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_0000176C);

s32 func_0000178C(struct Unk_func_00001728_0 *arg0) {
    s32 var_v0;

    if (arg0->unk1 & 1) {
        var_v0 = func_00001744(arg0);
    } else {
        var_v0 = func_00001728(arg0);
    }
    return var_v0 == 0;
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00001794);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_000016D8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_000017CC);
#endif

s32 func_00001810(u8 *arg0, s32 arg1) {
    return arg1 == *arg0;
}

s32 func_00001820(struct Unk_func_00001820_0 *arg0) {
    return arg0->unk2 & 0x80;
}

s32 func_0000182C(struct Unk_func_0000182C_0 *arg0) {
    return arg0->unk2 & 0x60;
}

s32 func_00001838(struct Unk_func_00001838_0 *arg0) {
    return arg0->unk2 & 0xF;
}

#if FW_VERSION == 260
s32 func_0000174C(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 3) & 0x60) >> 5;
}
#endif

#if FW_VERSION == 250
s32 func_0000174C(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 0x12) & 0x60) >> 5;
}
#endif

#if FW_VERSION == 260
s32 func_0000175C(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 3) & 6) >> 1;
}
#endif

#if FW_VERSION == 250
s32 func_0000175C(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 0x12) & 6) >> 1;
}
#endif

#if FW_VERSION == 260
s32 func_0000182C_v260(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 3) & 0x18) >> 3;
}
#endif

#if FW_VERSION == 250
s32 func_0000176C_v250(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 0x12) & 0x18) >> 3;
}
#endif

#if FW_VERSION == 282
s32 func_00001844(struct Unk_func_00001844_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk3, 5, 2);
}

s32 func_00001850(struct Unk_func_00001850_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk3, 1, 2);
}

s32 func_0000185C(struct Unk_func_0000185C_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk3, 3, 2);
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00001868);

#if FW_VERSION == 260
s32 func_00001788(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 4) & 0x30) >> 4;
}
#endif

#if FW_VERSION == 250
s32 func_00001788(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 0x13) & 0x30) >> 4;
}
#endif

#if FW_VERSION == 260
s32 func_00001798(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 4) & 0xC) >> 2;
}
#endif

#if FW_VERSION == 250
s32 func_00001798(void *arg0) {
    return (s32) (M2C_FIELD(arg0, u8 *, 0x13) & 0xC) >> 2;
}
#endif

#if FW_VERSION == 282
s32 func_00001874(struct Unk_func_00001874_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk4, 4, 2);
}

s32 func_00001880(struct Unk_func_00001880_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk4, 2, 2);
}
#endif

#if FW_VERSION >= 260
s32 func_0000188C(struct Unk_func_0000188C_0 *arg0) {
    return arg0->unk4 & 3;
}
#else
s32 func_0000188C(struct Unk_func_0000188C_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x13) & 3;
}
#endif

#if FW_VERSION >= 260
s32 func_00001898(struct Unk_func_00001898_0 *arg0) {
    return arg0->unk17 & 0x3F;
}
#else
s32 func_00001898(struct Unk_func_00001898_0 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x27) & 0x3F;
}
#endif

#if FW_VERSION >= 260
u32 func_000018A4(struct Unk_func_000018A4_0 *arg0) {
    return (u8) arg0->unk17 >> 6;
}
#else
u32 func_000018A4(struct Unk_func_000018A4_0 *arg0) {
    return (u8) M2C_FIELD(arg0, u8 *, 0x27) >> 6;
}
#endif

void func_000018B0(s32 arg0, s32 arg1) {
    func_000016F4(arg0, arg1);
}

#if FW_VERSION >= 260
s32 func_000018CC(struct Unk_func_000018CC_0 *arg0) {
    return arg0->unk10;
}
#else
s32 func_000018CC(struct Unk_func_000018CC_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000017F0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000018A0);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_000018D4);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00001910);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001A18);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001BD8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001C88);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001D58);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_000018F8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001A2C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001B50);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001C40);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001D68);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001E94);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001FA4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002000);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_00001934);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001A3C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001BFC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001CAC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001D7C);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00001E24);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001E50);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00001E54);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_00001E78);
#endif

s32 func_00001E98(s32 arg0) {
    return arg0 & 0x7F;
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00001E7C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001EF4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001FAC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002064);

INCLUDE_ASM("nonmatchings/libasfparser", func_000020C4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002200);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002250);

INCLUDE_ASM("nonmatchings/libasfparser", func_000022B0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_000020A4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002124);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002208);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002304);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002368);

s32 func_0000245C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00002464);

s32 func_0000251C(void) {
    return 0x86400401;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00002528);

s32 func_000025DC(void) {
    return 0x86400401;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_00001EA0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001F18);

INCLUDE_ASM("nonmatchings/libasfparser", func_00001FD0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002088);

INCLUDE_ASM("nonmatchings/libasfparser", func_000020E8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002224);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002274);

INCLUDE_ASM("nonmatchings/libasfparser", func_000022D4);
#endif

void func_00002334(s32 *arg0) {
    *arg0 = 0;
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00002318);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002344);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002378);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002440);

INCLUDE_ASM("nonmatchings/libasfparser", func_000024A0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000025E8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002640);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_000025F0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002664);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002710);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000277C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000028E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000029E8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002A48);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_0000233C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002368);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000239C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002464);

INCLUDE_ASM("nonmatchings/libasfparser", func_000024C4);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000260C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002664);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_000026F0);
#endif

#if FW_VERSION == 260
void func_000026F0(s32 arg0) {
    func_000026F8(arg0);
    func_0000279C(arg0);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000026F8);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000279C);

void func_00002808(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (func_00001C88(arg0, arg1, arg2, arg3, &sp0) >= 0) {
        func_00002860(sp0);
    }
}

void func_00002834(s32 arg0, s32 arg1) {
    void *sp0;
    if (func_00001BD8(arg0, arg1, &sp0) >= 0) {
        func_00002860(sp0);
    }
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00002860);
#endif

#if FW_VERSION == 282
void func_000026F0(s32 arg0) {
    func_0000271C(arg0);
    func_000027C0(arg0);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_0000271C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000027C0);

void func_0000282C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    if (func_00001CAC(arg0, arg1, arg2, arg3, &sp0) >= 0) {
        func_00002884(sp0);
    }
}

void func_00002858(s32 arg0, s32 arg1) {
    void *sp0;
    if (func_00001BFC(arg0, arg1, &sp0) >= 0) {
        func_00002884(sp0);
    }
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00002884);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_000028A8);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_000028F0);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_00002954);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002998);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002B34);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002CAC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002E08);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002F64);

INCLUDE_ASM("nonmatchings/libasfparser", func_000030B0);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000312C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000031FC);

INCLUDE_ASM("nonmatchings/libasfparser", func_000032E0);
#endif

#if FW_VERSION == 250
void func_00002C24(s32 arg0, s32 arg1) {
    func_00002000(arg0, arg1, 0x10);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00002C40);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002E4C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002E84);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002F70);

INCLUDE_ASM("nonmatchings/libasfparser", func_000031B4);

INCLUDE_ASM("nonmatchings/libasfparser", func_000033E4);

s32 func_000034E0_v250(s32 arg0, void *arg1) {
    s32 var_s1;
    void *temp_v1;

    var_s1 = 0;
    temp_v1 = (func_00001E98((s32) M2C_FIELD(arg1, u16 *, 0x30)) * 4) + arg0 + 0x7C;
    if (M2C_FIELD(temp_v1, void **, 8) == NULL) {
        M2C_FIELD(temp_v1, void **, 8) = arg1;
    } else {
        var_s1 = 0x86400174;
    }
    return var_s1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_00002978);

INCLUDE_ASM("nonmatchings/libasfparser", func_000029BC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002B58);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002CD0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002E28);

INCLUDE_ASM("nonmatchings/libasfparser", func_00002F84);

INCLUDE_ASM("nonmatchings/libasfparser", func_000030D0);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000314C);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000321C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003300);
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_000034E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000035C4);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libasfparser", func_0000368C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000036E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003768);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003784);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003874);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003974);

INCLUDE_ASM("nonmatchings/libasfparser", func_000039C8);

s32 func_00003B24(s32 arg0, s32 *arg1) {
    s32 var_a2;
    void *temp_v0;

    temp_v0 = (*arg1 * 4) + arg0 + 0x300C;
    var_a2 = 0;
    if (M2C_FIELD(temp_v0, s32 **, 8) == NULL) {
        M2C_FIELD(temp_v0, s32 **, 8) = arg1;
    } else {
        var_a2 = 0x86400174;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00003B58);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003C44);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003CAC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003D10);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003D94);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003E50);

INCLUDE_ASM("nonmatchings/libasfparser", func_000040B8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004284);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004388);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004418);

INCLUDE_ASM("nonmatchings/libasfparser", func_000044C4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004548);

INCLUDE_ASM("nonmatchings/libasfparser", func_000046E0);
#endif

#if FW_VERSION == 250
s32 func_00003718(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) << 8) | M2C_FIELD(arg0, u8 *, 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_000036AC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003700);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003788);

INCLUDE_ASM("nonmatchings/libasfparser", func_000037A4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003894);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003994);

INCLUDE_ASM("nonmatchings/libasfparser", func_000039E8);

s32 func_00003B44(s32 arg0, s32 *arg1) {
    s32 var_a2;
    struct Unk_func_00003B44_temp_v0 *temp_v0;

    temp_v0 = (*arg1 * 4) + arg0 + 0x300C;
    var_a2 = 0;
    if (temp_v0->unk8 == NULL) {
        temp_v0->unk8 = arg1;
    } else {
        var_a2 = 0x86400174;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00003B78);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003C64);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003CCC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003D30);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003DB4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003E70);

INCLUDE_ASM("nonmatchings/libasfparser", func_000040D8);

INCLUDE_ASM("nonmatchings/libasfparser", func_000042A4);

INCLUDE_ASM("nonmatchings/libasfparser", func_000043A8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004438);

INCLUDE_ASM("nonmatchings/libasfparser", func_000044E4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004568);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004700);
#else
INCLUDE_ASM("nonmatchings/libasfparser", func_0000478C);
#endif

#if FW_VERSION == 260
void func_000047A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000047A8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004860);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004884);

void func_000048A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000048B4);

INCLUDE_ASM("nonmatchings/libasfparser", func_000048C0);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000495C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000049BC);

void func_000049EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = 9;
    M2C_FIELD(arg0, s32 *, 0x288) = 0;
    func_00004A98((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00004A14);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004A98);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004AF0);
#endif

#if FW_VERSION == 282
void func_0000478C(struct Unk_func_0000478C_0 *arg0, s32 arg1) {
    func_000047C0(arg0);
    arg0->unk2CC = arg1;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_00003770);

INCLUDE_ASM("nonmatchings/libasfparser", func_000038C8);

INCLUDE_ASM("nonmatchings/libasfparser", func_000039AC);

INCLUDE_ASM("nonmatchings/libasfparser", func_000039E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003C8C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003CC8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003E20);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003E60);

INCLUDE_ASM("nonmatchings/libasfparser", func_00003F78);

INCLUDE_ASM("nonmatchings/libasfparser", func_000040C0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004150);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000432C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000043D4);
#endif

#if FW_VERSION == 282
void func_000047C0(struct Unk_func_0000478C_0 *arg0) {
    arg0->unk2AC = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000047C8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004880);

INCLUDE_ASM("nonmatchings/libasfparser", func_000048A4);

void func_000048C4(struct Unk_func_000048C4_0 *arg0) {
    arg0->unk2D4 = 0;
    arg0->unk2D8 = 0;
    arg0->unk2DC = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000048D4);

INCLUDE_ASM("nonmatchings/libasfparser", func_000048E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000497C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000049DC);

void func_00004A0C(struct Unk_func_00004A0C_0 *arg0, s32 arg1) {
    arg0->unkA = 9;
    arg0->unk288 = 0;
    func_00004AB8((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00004A34);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004AB8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004B10);
#endif

#if FW_VERSION != 260
INCLUDE_RODATA("nonmatchings/libasfparser", D_00006FC8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007878);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_00006FD8);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007898);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007A68);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007BC8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007BE0);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007C10);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_00006FE8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00006FF8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007048);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007058);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007068);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007078);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007088);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007098);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070A8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070B8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070C8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070D8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070E8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000070F8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007108);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007118);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007128);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007118_v260);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007138);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007148);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007158);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007168);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007178);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007188);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007198);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071A8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071B8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071C8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071D8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071E8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000071F8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007208);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007FA0);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008150);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008164);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008178);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000081A8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000081C8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000081E8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000821C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008230);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000824C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007218);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007228);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007238);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007248);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007258);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libasfparser", D_0000827C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008294);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000082C4);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000082F8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008328);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000835C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008374);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008390);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007268);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007218);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007228);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007238);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007248);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007258_v260);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000073A8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libasfparser", D_000083B8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000083D8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000083FC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007278);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000073C8);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_000073E0);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libasfparser", func_00004460);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004544);

INCLUDE_ASM("nonmatchings/libasfparser", func_000045C4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004648);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004704);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000496C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004B38);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004C3C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004CCC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004D78);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004DFC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004F94);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005020);

void func_00005054(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_0000505C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005114);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005138);

void func_00005158(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00005168);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005174);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005210);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005270);

void func_000052A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = 9;
    M2C_FIELD(arg0, s32 *, 0x288) = 0;
    func_0000534C((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000052C8);

INCLUDE_ASM("nonmatchings/libasfparser", func_0000534C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000053A4);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_000074A0);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libasfparser", D_00007488);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libasfparser", D_000074A4);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000074AC);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000074E0);
#endif

INCLUDE_RODATA("nonmatchings/libasfparser", D_000075E0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004B34);

INCLUDE_ASM("nonmatchings/libasfparser", func_00004DDC);

INCLUDE_ASM("nonmatchings/libasfparser", func_000053EC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005564);

INCLUDE_ASM("nonmatchings/libasfparser", func_000056AC);

s32 func_000056E8(u32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 >= 2U) {
        do {
            var_v1 += 1;
        } while ((u32) (arg0 >> var_v1) >= 2U);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_00005710);

INCLUDE_ASM("nonmatchings/libasfparser", func_000057AC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005818);

INCLUDE_ASM("nonmatchings/libasfparser", func_000059FC);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005AB0);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005B1C);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005BC8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005D08);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005E08);

INCLUDE_ASM("nonmatchings/libasfparser", func_00005FF0);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000766C);

INCLUDE_ASM("nonmatchings/libasfparser", func_000060DC);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libasfparser", func_00006128);
#else
s32 func_00006128(void) {
    return 4;
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_00006130);

INCLUDE_ASM("nonmatchings/libasfparser", func_000061BC);

INCLUDE_ASM("nonmatchings/libasfparser", func_000062C8);

INCLUDE_ASM("nonmatchings/libasfparser", func_00006474);

INCLUDE_ASM("nonmatchings/libasfparser", func_00006560);

void func_00006638(struct Unk_func_00006638_0 *arg0) {
    u16 temp_v1;

    temp_v1 = arg0->unk28;
    arg0->unk2AC = 0;
    arg0->unk2A2 = temp_v1;
    arg0->unk2A4 = temp_v1;
}

void func_0000664C(struct Unk_func_0000664C_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk14;
    if (temp_v1 != 0) {
        arg0->unk2A8 = 0;
    }
    arg0->unk2AC = 1;
    if (temp_v1 != 0) {
        arg0->unk2AA = (u16) (arg0->unk2AA - 1);
    }
}

#if FW_VERSION >= 260
u32 func_00006678(struct Unk_func_00006678_0 *arg0) {
    u32 temp_a0;
    u32 var_v0;

    temp_a0 = arg0->unk10;
    var_v0 = 0x86401012;
    if (temp_a0 != 0) {
        var_v0 = (u32) (arg0->unk28 * 0x3E8) / temp_a0;
    }
    return var_v0;
}
#else
u32 func_00006678(struct Unk_func_00006678_0 *arg0) {
    u32 temp_a0;
    u32 var_v0;

    temp_a0 = arg0->unk10;
    var_v0 = 0x86401013;
    if (temp_a0 != 0) {
        var_v0 = (u32) (arg0->unk28 * 0x3E8) / temp_a0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/libasfparser", func_000066B4);

INCLUDE_ASM("nonmatchings/libasfparser", func_000066CC);

void func_000066EC(struct Unk_func_000066EC_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;
    u32 temp_v0;

    temp_a3 = arg0->unk4;
    temp_v0 = arg0->unk0;
    temp_a0 = temp_a3 & 7;
    arg0->unk10 = arg1;
    arg0->unk8 = temp_a0;
    if (temp_v0 >= (u32) (arg2 + temp_a3)) {
        arg0->unkC = (s32) (arg2 + temp_a0);
        return;
    }
    arg0->unkC = (s32) ((temp_v0 - temp_a3) + temp_a0);
}

void func_0000672C(struct Unk_func_0000672C_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk4 = (s32) arg0->unk0;
}

s32 func_0000673C(struct Unk_func_0000673C_0 *arg0) {
    s32 cmp_tmp = (u32) ((((u32) arg0->unk4 >> 3) * 8) + arg0->unk8) < (u32) arg0->unk0;
    return cmp_tmp == 0;
}

s32 func_00006760(struct Unk_func_00006760_0 *arg0) {
    return arg0->unk8 - (arg0->unk4 & 7);
}

u32 func_00006774(struct Unk_func_00006774_0 *arg0) {
    return (u32) arg0->unk8 >> 3;
}

void func_00006780(struct Unk_func_00006780_0 *arg0) {
    u32 temp_a3;
    u32 temp_a4;

    temp_a4 = arg0->unk0;
    temp_a3 = (((u32) arg0->unk4 >> 3) * 8) + arg0->unk8;
    arg0->unk4 = (u32) ((temp_a4 < temp_a3) ? temp_a4 : temp_a3);
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/libasfparser", func_000067B0);

INCLUDE_ASM("nonmatchings/libasfparser", func_000067F4);

INCLUDE_ASM("nonmatchings/libasfparser", func_00006828);

INCLUDE_ASM("nonmatchings/libasfparser", func_000068C0);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000076BC);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000076D8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007A4C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00007C8C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_000084A4);

INCLUDE_RODATA("nonmatchings/libasfparser", D_00008C5C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000A14C);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000B1B8);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000BC98);

INCLUDE_RODATA("nonmatchings/libasfparser", D_0000C620);
