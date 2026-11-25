#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020444);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002053C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000205F4);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020634);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002074C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D22F0);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_38F12307);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_E6432407);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020B50);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_07216006);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000411D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 func_000411D4(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5E4);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000411E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000411E8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    }
    return var_v0;
}

s32 func_00042048(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x470);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000411FC_v100);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00041210);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00041210(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5FC);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00041224);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004123C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00041264);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 func_00041264(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5F5);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00041278);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00041278(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F8);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004128C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0004128C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x620);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000412A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000412A0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x624);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
u8 png_get_rgb_to_gray_status(struct Unk_png_get_rgb_to_gray_status_0 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk5E4;
    }
    return var_v0;
}

s32 png_get_user_chunk_ptr(struct Unk_png_get_user_chunk_ptr_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk5D4;
    }
    return var_v0;
}

s32 png_get_compression_buffer_size(struct Unk_png_get_compression_buffer_size_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk470;
    }
    return var_v0;
}

s32 png_get_asm_flags(struct Unk_png_get_asm_flags_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk5FC;
    }
    return var_v0;
}

s32 png_get_asm_flagmask(s32 arg0) {
    return !(arg0 & 1) ? 0 : 0xFC;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", png_get_mmx_flagmask);

u8 png_get_mmx_bitdepth_threshold(struct Unk_png_get_mmx_bitdepth_threshold_0 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk5F5;
    }
    return var_v0;
}

s32 png_get_mmx_rowbytes_threshold(struct Unk_png_get_mmx_rowbytes_threshold_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk5F8;
    }
    return var_v0;
}

s32 png_get_user_width_max(struct Unk_png_get_user_width_max_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk620;
    }
    return var_v0;
}

s32 png_get_user_height_max(struct Unk_png_get_user_height_max_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk624;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020D70);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020D90);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020E18);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020E38);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020E78);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020F10);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020F4C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00020F94);

void func_00020FCC(struct Unk_func_00020FCC_0 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unk42C;
    arg0->unk42C = (s32) (temp_s1 | 0x100000);
    func_00020E78();
    arg0->unk42C = temp_s1;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002100C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00021030);

void func_00021054(struct Unk_func_00021054_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk600 = arg1;
    arg0->unk604 = arg2;
    arg0->unk608 = arg3;
}

s32 func_00021064(struct Unk_func_00021064_0 *arg0) {
    return arg0->unk600;
}

void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00021090(arg0, arg1, arg2, arg3, 0, 0, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00021090);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D23D0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D23D8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D23EC);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2400);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2414);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00021354);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000213F0);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_E327C974);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_D4F9270D);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000FFE90);
#endif

void scePaf_DB1549DF(struct Unk_scePaf_DB1549DF_0 *arg0) {
    if (arg0->unk42C & 0x40) {

    } else {
        func_0002CD7C((s32) arg0);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00042134);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_FBC76D05);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00021BE8);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_DDD91620);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_B2290D1A);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_211A764A);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002289C);

void func_00022B5C(struct Unk_func_00022B5C_0 *arg0, s32 arg1) {
    arg0->unk558 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00022B64);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00022DF8);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_1BDFF258);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023060);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023070);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D27C4);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000CF524);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000ED8C0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000EBB00);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000ED880);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_001000B4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D27F4);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2838);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D285C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2884);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100154);
#else
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2894);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023084);

#if FW_VERSION == 282
void func_00023A7C(struct Unk_func_00023A7C_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}

void func_00023A94(struct Unk_func_00023A94_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00023AAC(struct Unk_func_00023AAC_0 *arg0) {
    arg0->unk430 |= 0x1000;
}
#endif

#if FW_VERSION == 282
void func_00023AAC(struct Unk_func_00023AAC_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02000000);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000442D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000442D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x1000);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023AC0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000442F8);
#else
void func_00023AD8(struct Unk_func_00023AD8_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023AF0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023B00);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023B4C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00023C7C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045258);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045A1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00045A1C(void *arg0, s32 arg1) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_a0_3;
    u32 temp_a2;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 9);
    if (temp_v1 < 8U) {
        temp_a2 = M2C_FIELD(arg0, u32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_a1 = arg1 + ((u32) (temp_a2 - 1) >> 3);
            var_a0 = (arg1 + temp_a2) - 1;
            var_v1 = ~(temp_a2 + 7) & 7;
            var_a3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0 = ((s32) *var_a1 >> var_v1) & 1;
                    if (var_v1 != 7) {
                        var_v1 += 1;
                    } else {
                        var_v1 = 0;
                        var_a1 -= 1;
                    }
                    var_a3 += 1;
                    var_a0 -= 1;
                } while (var_a3 < temp_a2);
            }
            break;
        case 4:
            var_a1_2 = arg1 + ((u32) (temp_a2 - 1) >> 1);
            var_a0_2 = (arg1 + temp_a2) - 1;
            var_v1_2 = (~(temp_a2 + 1) & 1) * 4;
            var_a3_2 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_2 = ((s32) *var_a1_2 >> var_v1_2) & 0xF;
                    if (var_v1_2 != 4) {
                        var_v1_2 = 4;
                    } else {
                        var_v1_2 = 0;
                        var_a1_2 -= 1;
                    }
                    var_a3_2 += 1;
                    var_a0_2 -= 1;
                } while (var_a3_2 < temp_a2);
            }
            break;
        case 2:
            var_a1_3 = arg1 + ((u32) (temp_a2 - 1) >> 2);
            var_a0_3 = (arg1 + temp_a2) - 1;
            var_v1_3 = (~(temp_a2 + 3) & 3) * 2;
            var_a3_3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_3 = ((s32) *var_a1_3 >> var_v1_3) & 3;
                    if (var_v1_3 != 6) {
                        var_v1_3 += 2;
                    } else {
                        var_v1_3 = 0;
                        var_a1_3 -= 1;
                    }
                    var_a3_3 += 1;
                    var_a0_3 -= 1;
                } while (var_a3_3 < temp_a2);
            }
            break;
        }
        M2C_FIELD(arg0, u8 *, 9) = 8U;
        M2C_FIELD(arg0, s8 *, 0xB) = (s8) (M2C_FIELD(arg0, u8 *, 0xA) * 8);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a2 * M2C_FIELD(arg0, u8 *, 0xA));
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045BBC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045E14);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00045E94);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004608C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000461D0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00046618);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", png_read_transform_info);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_read_transformations);

void png_do_unpack(struct Unk_png_do_unpack_0 *arg0, s32 arg1) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_a0_3;
    u32 temp_a2;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 temp_v1;

    temp_v1 = arg0->unk9;
    if (temp_v1 < 8U) {
        temp_a2 = arg0->unk0;
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_a1 = arg1 + ((u32) (temp_a2 - 1) >> 3);
            var_a0 = (arg1 + temp_a2) - 1;
            var_v1 = ~(temp_a2 + 7) & 7;
            var_a3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0 = ((s32) *var_a1 >> var_v1) & 1;
                    if (var_v1 != 7) {
                        var_v1 += 1;
                    } else {
                        var_v1 = 0;
                        var_a1 -= 1;
                    }
                    var_a3 += 1;
                    var_a0 -= 1;
                } while (var_a3 < temp_a2);
            }
            break;
        case 4:
            var_a1_2 = arg1 + ((u32) (temp_a2 - 1) >> 1);
            var_a0_2 = (arg1 + temp_a2) - 1;
            var_v1_2 = (~(temp_a2 + 1) & 1) * 4;
            var_a3_2 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_2 = ((s32) *var_a1_2 >> var_v1_2) & 0xF;
                    if (var_v1_2 != 4) {
                        var_v1_2 = 4;
                    } else {
                        var_v1_2 = 0;
                        var_a1_2 -= 1;
                    }
                    var_a3_2 += 1;
                    var_a0_2 -= 1;
                } while (var_a3_2 < temp_a2);
            }
            break;
        case 2:
            var_a1_3 = arg1 + ((u32) (temp_a2 - 1) >> 2);
            var_a0_3 = (arg1 + temp_a2) - 1;
            var_v1_3 = (~(temp_a2 + 3) & 3) * 2;
            var_a3_3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_3 = ((s32) *var_a1_3 >> var_v1_3) & 3;
                    if (var_v1_3 != 6) {
                        var_v1_3 += 2;
                    } else {
                        var_v1_3 = 0;
                        var_a1_3 -= 1;
                    }
                    var_a3_3 += 1;
                    var_a0_3 -= 1;
                } while (var_a3_3 < temp_a2);
            }
            break;
        }
        arg0->unk9 = 8U;
        arg0->unkB = (s8) (arg0->unkA * 8);
        arg0->unk4 = (s32) (temp_a2 * arg0->unkA);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_unshift);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_chop);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_read_swap_alpha);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_read_invert_alpha);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_read_filler);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_gray_to_rgb);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00026138);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000269DC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00027C94);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00048968);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00048CAC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00049214);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000493D8);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00049CCC);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_expand_palette);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_expand);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_dither);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_build_gamma_table);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_read_intrapixel);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002963C);

s32 func_00029694(struct Unk_func_00029694_0 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}

s32 func_000296C0(struct Unk_func_000296C0_0 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}

s32 func_000296EC(struct Unk_func_000296EC_0 *arg0) {
    return (arg0->unk1 + (arg0->unk0 << 8)) & 0xFFFF;
}

void func_00029704(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00022DF8();
    func_0001F4BC(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00029750);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002983C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000298C8);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00029C64);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00029DF4);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00029FFC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002A080);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2C14);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2C4C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002A210);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002A38C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2DB8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D2DF0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002A79C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002A9E0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002AC34);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002AEF4);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B0E8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100A34);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100A44);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100A50);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B2D4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100AA0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100AB4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100ABC);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100AD4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B434);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100B08);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100B14);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100B20);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_00100B3C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B538);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B63C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002B964);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002BAF4);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002BCEC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002BEAC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004C714);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002BF60);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002C2F0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002C7B0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002C9EC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002CD7C);

void func_0002D0C8(s32 arg0, struct Unk_func_0002D0C8_1 *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1((u8 *)arg1 + 0x52, arg2, 0xA);
        arg1->unk8 = (s32) (arg1->unk8 | 0x20);
    }
}

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D366C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3670);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3674);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D36A8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D36E8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3704);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3714);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3734);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3764);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3790);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D37B8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D37E0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D37FC);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D382C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3848);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3864);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3888);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D38AC);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D38E0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3900);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3920);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3954);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D397C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D39A0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D39C8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D39F0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3A08);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3A38);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3A64);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3A88);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3AA4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3AC4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3AEC);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D0800);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D124);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D328);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D4D4);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D5A0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D644);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002D744);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DB10);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DB44);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DD58);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DD8C);

void func_0002DE84(s32 arg0, struct Unk_func_0002DE84_1 *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1((u8 *)arg1 + 0x3C, arg2, 5);
        arg1->unk8 = (s32) (arg1->unk8 | 2);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004E660);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", png_set_sRGB);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DF0C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002DFFC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E194);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E3FC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E4E0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E658);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E820);

s32 func_0002E840(struct Unk_func_0002E840_0 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 & 5;
    var_v0 = 0;
    if (arg0 != NULL) {
        arg0->unk5EC = temp_a1;
        var_v0 = temp_a1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E85C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002E9BC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002EA28);

void func_0002EABC(void) {
}

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002EAC4);
#else
void func_0002EAC4(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x5F5) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5F8) = arg2;
}
#endif

void func_0002EADC(struct Unk_func_0002EADC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk620 = arg1;
    arg0->unk624 = arg2;
}

void func_0002EAE8(struct Unk_func_0002EAE8_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 1);
}

void func_0002EAF8(struct Unk_func_0002EAF8_0 *arg0) {
    if (arg0->unk4E7 == 0x10) {
        arg0->unk430 = (s32) (arg0->unk430 | 0x10);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_7333E75A);

void scePaf_C6624F24(struct Unk_scePaf_C6624F24_0 *arg0) {
    if ((u8) arg0->unk4E7 < 8U) {
        arg0->unk430 = (s32) (arg0->unk430 | 0x10000);
    }
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004E560);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F2C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002EB68);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002EB90);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0002EBB8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F394);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0004F394(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F3A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0004F3A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F3BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0004F3BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F3CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F488);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0004F488(void *arg0, void *arg1) {
    u32 temp_lo;
    u32 var_a2;
    u8 temp_v0;
    void *var_a1;

    var_a1 = arg1;
    if (M2C_FIELD(arg0, u8 *, 9) == 0x10) {
        temp_lo = M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, u8 *, 0xA);
        var_a2 = 0;
        if (temp_lo != 0) {
            do {
                temp_v0 = M2C_FIELD(var_a1, u8 *, 0);
                var_a2 += 1;
                M2C_FIELD(var_a1, u8 *, 0) = (u8) M2C_FIELD(var_a1, u8 *, 1);
                M2C_FIELD(var_a1, u8 *, 1) = temp_v0;
                var_a1 += 2;
            } while (var_a2 < temp_lo);
        }
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F4DC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F560);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F8A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F9D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0004F9D4(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 0x420) = arg1;
    M2C_FIELD(arg0, s8 *, 0x424) = arg2;
    M2C_FIELD(arg0, s8 *, 0x425) = arg3;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F9E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0004F9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F9EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0004F9EC(void) {
    return &D_000D3E64;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004F9F8);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004FA24);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0004FE18);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00050250);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000502A8);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000503C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000503E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000503E4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &D_000D5E64;
    M2C_FIELD(arg0, s32 *, 0x4C) = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &D_000D6664;
    M2C_FIELD(arg0, s32 *, 0x50) = 5;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00050410);
#else
void png_set_swap_alpha(struct Unk_png_set_swap_alpha_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x20000);
}

void png_set_invert_alpha(struct Unk_png_set_invert_alpha_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x80000);
}

void png_set_invert_mono(struct Unk_png_set_invert_mono_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x20);
}

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_invert);

void png_do_swap(struct Unk_png_do_swap_0 *arg0, void *arg1) {
    u32 temp_lo;
    u32 var_a2;
    u8 temp_v0;
    void *var_a1;

    var_a1 = arg1;
    if (arg0->unk9 == 0x10) {
        temp_lo = arg0->unk0 * arg0->unkA;
        var_a2 = 0;
        if (temp_lo != 0) {
            do {
                temp_v0 = M2C_FIELD(var_a1, u8 *, 0);
                var_a2 += 1;
                M2C_FIELD(var_a1, u8 *, 0) = (u8) M2C_FIELD(var_a1, u8 *, 1);
                M2C_FIELD(var_a1, u8 *, 1) = temp_v0;
                var_a1 += 2;
            } while (var_a2 < temp_lo);
        }
    }
}

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_packswap);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_strip_filler);

INCLUDE_ASM("nonmatchings/pafmini_020444", png_do_bgr);

void png_set_user_transform_info(struct Unk_png_set_user_transform_info_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk420 = arg1;
    arg0->unk424 = arg2;
    arg0->unk425 = arg3;
}

s32 png_get_user_transform_ptr(struct Unk_png_get_user_transform_ptr_0 *arg0) {
    return arg0->unk420;
}

M2C_UNK *get_crc_table(void) {
    return &D_000D3E64;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", crc32);

INCLUDE_ASM("nonmatchings/pafmini_020444", crc32_little);

INCLUDE_ASM("nonmatchings/pafmini_020444", crc32_big);

INCLUDE_ASM("nonmatchings/pafmini_020444", gf2_matrix_times);

INCLUDE_ASM("nonmatchings/pafmini_020444", gf2_matrix_square);

INCLUDE_ASM("nonmatchings/pafmini_020444", crc32_combine);

INCLUDE_ASM("nonmatchings/pafmini_020444", inflateReset);

INCLUDE_ASM("nonmatchings/pafmini_020444", inflatePrime);

INCLUDE_ASM("nonmatchings/pafmini_020444", inflateInit2_);

INCLUDE_ASM("nonmatchings/pafmini_020444", inflateInit_);

void fixedtables(struct Unk_fixedtables_0 *arg0) {
    arg0->unk4C = &D_000D5E64;
    arg0->unk54 = 9;
    arg0->unk50 = &D_000D6664;
    arg0->unk58 = 5;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", updatewindow);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3B64);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3C64);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3D64);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D3E64);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D5E64);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000F0D70);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000F0DE0);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000F0E00);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6664);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D66E4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00050574);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", inflate);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00031824);

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00051CFC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00051F14);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000319EC);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00031D6C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6944);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6974);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D69B4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D69F4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6A34);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000322E0);

s32 zlibCompileFlags(void) {
    return 0x55;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", zError);

INCLUDE_ASM("nonmatchings/pafmini_020444", zcalloc);

INCLUDE_ASM("nonmatchings/pafmini_020444", zcfree);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00032420);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6A7C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6A8C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6A98);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6A9C);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6AA8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6AB8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6AC4);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6AD8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6AE8);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6B00);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00030310);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_020444", func_000520DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052610);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00052610(void) {
    return 0x55;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052618);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052638);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052658);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052674);
#else
INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6B28);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0003285C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_FD3FF4AA);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00032E48);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_D6759EEF);
#else
INCLUDE_ASM("nonmatchings/pafmini_020444", func_00052E8C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_27760582);

s32 func_000330B8(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_000E15C8)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000330E0);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0003316C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_00033320);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6B88);

INCLUDE_RODATA("nonmatchings/pafmini_020444", D_000D6B8C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000333D8);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_0003350C);

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000335A0);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_A0ED77C4);

s32 func_000337A4(void) {
    return D_000E15C8;
}

INCLUDE_ASM("nonmatchings/pafmini_020444", func_000337B0);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_35F25BA1);

INCLUDE_ASM("nonmatchings/pafmini_020444", scePaf_79493F8F);

s32 scePaf_75062BCF(struct Unk_scePaf_75062BCF_0 *arg0) {
    return arg0->unk18 == 3;
}
