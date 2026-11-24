#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009DF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E044);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00192F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_38F12307);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E6432407);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_07216006);

u8 png_get_rgb_to_gray_status(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5E4);
    }
    return var_v0;
}

s32 png_get_user_chunk_ptr(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    }
    return var_v0;
}

s32 png_get_compression_buffer_size(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x470);
    }
    return var_v0;
}

s32 png_get_asm_flags(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5FC);
    }
    return var_v0;
}

s32 png_get_asm_flagmask(s32 arg0) {
    return !(arg0 & 1) ? 0 : 0xFC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_get_mmx_flagmask);

u8 png_get_mmx_bitdepth_threshold(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5F5);
    }
    return var_v0;
}

s32 png_get_mmx_rowbytes_threshold(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F8);
    }
    return var_v0;
}

s32 png_get_user_width_max(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x620);
    }
    return var_v0;
}

s32 png_get_user_height_max(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x624);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E878);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009E980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EA18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EA9C);

void func_0009EAD4(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, s32 *, 0x42C) = (s32) (temp_s1 | 0x100000);
    func_0009E980();
    M2C_FIELD(arg0, s32 *, 0x42C) = temp_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EB5C);

s32 func_0009EB6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0009EB98(arg0, arg1, arg2, arg3, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EB98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193018);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193048);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019305C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EE5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009EEF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E327C974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D4F9270D);

void scePaf_DB1549DF(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x42C) & 0x40) {

    } else {
        func_000AA884((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0009F6F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DDD91620);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B2290D1A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_211A764A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A03A4);

void func_000A0664(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x558) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A066C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A0900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1BDFF258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A0B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A0B78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019340C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019343C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193480);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001934A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001934CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001934DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A0B8C);

void func_000A1584(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_000A159C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_000A15B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02000000);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A15C8);

void func_000A15E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A15F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A1608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A1654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A1784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_read_transform_info);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_read_transformations);

void png_do_unpack(void *arg0, s32 arg1) {
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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_unshift);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_chop);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_read_swap_alpha);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_read_invert_alpha);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_read_filler);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_gray_to_rgb);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A3C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A44E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A579C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_expand_palette);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_expand);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_dither);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_build_gamma_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_read_intrapixel);

