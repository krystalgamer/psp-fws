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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7144);

s32 func_000A719C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000A71C8(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000A71F4(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

void func_000A720C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000A0900();
    func_0009CFC4(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A73D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A776C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A78FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7B88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019385C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193894);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7D18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A7E94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193A00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00193A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A82A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A84E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A873C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A89FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A8BF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A8DDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A8F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A9040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A9144);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A946C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A95FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A97F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A99B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000A9DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AA2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AA4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AA884);

void func_000AABD0(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x52, arg2, 0xA);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x20);
    }
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001942B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001942B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001942BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001942F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194330);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019434C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019435C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019437C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001943AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001943D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194400);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194428);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001944AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001944D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001944F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019459C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001945C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001945E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001946AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001946D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001946EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019470C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AAC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AAE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AAFDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB14C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB64C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AB894);

void func_000AB98C(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x3C, arg2, 5);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 2);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_set_sRGB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ABA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ABB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ABC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ABF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ABFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC160);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC328);

s32 func_000AC348(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 & 5;
    var_v0 = 0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x5EC) = temp_a1;
        var_v0 = temp_a1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC4C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC530);

void func_000AC5C4(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC5CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC5E4);

void func_000AC5F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 1);
}

void func_000AC600(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4E7) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7333E75A);

void scePaf_C6624F24(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4E7) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AC6C0);

void png_set_swap_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}

void png_set_invert_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}

void png_set_invert_mono(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_invert);

void png_do_swap(void *arg0, void *arg1) {
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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_packswap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_strip_filler);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_do_bgr);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", png_set_user_transform_info);

s32 png_get_user_transform_ptr(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001947AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001948AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001949AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ACE0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ACE88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ACFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD320);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AD96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ADA5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ADB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ADC1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ADD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ADDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE678);

void func_000AE724(void *arg0) {
    if (arg0 != NULL) {
        scePaf_545FE2DA(M2C_FIELD(arg0, void **, 8));
        scePaf_545FE2DA(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AE758);

void func_000AEA7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AEA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AEB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AEC08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AEE10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AEF00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", crc32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", crc32_little);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", crc32_big);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", gf2_matrix_times);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", gf2_matrix_square);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", crc32_combine);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflateInit_);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AFA70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000AFEE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflatePrime);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B0034);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflateBound);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", putShortMSB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", flush_pending);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B02CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B0DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", read_buf);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", lm_init);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", longest_match);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", longest_match_fast);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", fill_window);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflate_stored);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflate_fast);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", deflate_slow);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", inflateReset);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", inflatePrime);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", inflateInit2_);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", inflateInit_);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B2500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B252C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00194F14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00196F4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00196FCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001977CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019784C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B2688);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B3E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", syncsearch);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B4064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B4368);

void tr_static_init(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", _tr_init);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", init_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", pqdownheap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", gen_bitlen);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", gen_codes);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", build_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scan_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", send_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", build_bl_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", send_all_trees);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", _tr_stored_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B5B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B5E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B61C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", set_data_type);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", bi_reverse);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", bi_flush);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", bi_windup);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", copy_block);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197ADC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197B5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197B9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197BDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197CC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00197D28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001981A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198420);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198520);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B6900);

s32 zlibCompileFlags(void) {
    return 0x55;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", zError);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", zcalloc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", zcfree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B6A40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019865C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198670);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198698);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001986A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001986B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001986B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001986C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B6E7C);

s32 func_000B6F50(u32 arg0) {
    return arg0 + (arg0 >> 0xC) + (arg0 >> 0xE) + 0xB;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B6F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FD3FF4AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D6759EEF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_27760582);

s32 func_000B77C4(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_001A5240)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B77EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7878);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198728);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019872C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7CAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A0ED77C4);

s32 func_000B7EB0(void) {
    return D_001A5240;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B7EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_35F25BA1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_79493F8F);

s32 scePaf_75062BCF(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8188);

void func_000B8194(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B81AC);

void func_000B81CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 func_000B81D4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v0;
}

M2C_UNK *func_000B81E8(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a0 = *arg0;
    var_a2 = 0;
    if ((arg1 > 0) & (var_a0 != NULL)) {
        do {
            var_a0 = *var_a0;
            var_a2 += 1;
        } while ((var_a2 < arg1) & (var_a0 != NULL));
    }
    return var_a0;
}

s32 *func_000B8224(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_000B81E8(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_000B81E8(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}

void scePaf_C4BAD564(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198768);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198774);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019877C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BAE16A39);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_41F702EA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_0000C480((s32) &D_001A5244, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_0000C480((s32) &D_001A5250, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_0000C480((s32) &D_001A525C, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B86EC);

void func_000B8790(void) {
    func_000B86EC(1, 0xFFFF);
}

void func_000B87B0(void) {
    func_000B86EC(0, 0xFFFF);
}

s32 func_000B87D0(void) {
    sceCtrlReadBufferPositive(&D_001A52C4, 1);
    return M2C_FIELD(&D_001A52C4, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B882C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8888);

s32 func_000B8C4C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_001A3CC0 = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_001A52C0;
}

void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D5F3BAB1);

void scePaf_AAD0EE78(s32 arg0) {
    D_001A5270 = arg0;
}

void scePaf_E69C3B1B(s32 arg0) {
    D_001A5274 = arg0;
}

void scePaf_17BC4F41(s32 arg0) {
    D_001A5278 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_001A527C = arg0;
}

s32 scePaf_872F948B(void) {
    return D_001A5280;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B8F94);

s32 func_000B9280(void) {
    return 1;
}

void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_D726F4A2(s32 arg0) {
    D_001A52D4 = arg0;
}

s32 scePaf_132148FD(void) {
    return D_001A52DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_001A5300 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B95A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B966C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9748);

void func_000B97D0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    void *temp_v1;

    var_a2 = M2C_FIELD(arg0, s32 *, 4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 < (var_a2 + 1)) {
        func_000B9864((s32) arg0, temp_v0 + 0xA);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) + (var_a2 * 0xC);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, M2C_UNK **, 0) = &D_001ABCF0;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        func_00002AE4((s32) temp_v1, arg1);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_a2 + 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9DEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9E4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198920);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019893C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198964);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019898C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001989F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198ABC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198AF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198B98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198BC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000B9F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA8BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BA974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontClose);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BAF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BB4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBAAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBBF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BBF44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC0D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC1E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC2C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC3E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC538);

s32 func_000BC724(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1, s32 *, 0), temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}

s32 func_000BC7A0(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            sceFontClose(M2C_FIELD(arg0, s32 *, 0x2C) + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BC8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BCE0C);

s32 func_000BCF98(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u16 *, 8) = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BCFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BD24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BD504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BD7C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BDD08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BDD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BDDA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BDF28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BE470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BE9A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BECDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BEF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF3F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BF9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000BFE40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C018C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0574);

s32 func_000C07DC(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C07FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0BB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0C48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0D80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0E70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C0F98);

s32 func_000C0FF8(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_001A53C0 == 0) {
        D_001A53C4 = (s32) *arg0;
        var_a1 = 0;
        D_001A53C0 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C1028);

s32 func_000C1090(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_001A53C0 != 0) {
        D_001A53C0 = 0;
        D_001A53C4 = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C10BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C115C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C1208);

M2C_UNK *scePaf_962FA087(void) {
    return &D_001A53C8;
}

s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A3ED0;
    D_001A3ED0 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7952AE83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_ED83B18F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D6C1FF36);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00198C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D6232F26);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E418D7E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2CB6FBBE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_442F1731);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_71EDAD83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C182C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0E8A3B52);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C1A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D96449B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FDB98CAC);

void func_000C1CA0(void *arg0, s32 *arg1, s32 arg2) {
    func_0000C8BC(arg0 + 0x64, *arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BA1F20EE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_20F5234E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6F74F263);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C24C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C25D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2C80);

void func_000C2CEC(void) {
    func_000C2C80(1, 0xFFFF);
}

void func_000C2D0C(void) {
    func_000C2C80(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2E0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2E78);

void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}

void func_000C2F08(void) {
    scePaf_D6C1FF36();
}

void func_000C2F24(void) {
    scePaf_D6232F26();
}

void func_000C2F40(void) {
    scePaf_2CB6FBBE();
}

void func_000C2F5C(void) {
    scePaf_442F1731();
}

void func_000C2F78(void) {
    scePaf_71EDAD83();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C2FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C30D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3118);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001990A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001990E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001990E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C315C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C31AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C31BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C31CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C31F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3250);

void scePaf_7C2C2742(void) {
    sceGuStart(0, D_001A5420, D_001A5424);
}

void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3338);

M2C_UNK *scePaf_B0C3E598(void) {
    return &D_001A542C;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_001A45D8 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C33A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C34F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_81773E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C36A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C36F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3B54);

s32 func_000C3B84(void) {
    return D_001A53E0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3C88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3CB0);

s32 func_000C3D20(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5400;
    D_001A5400 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3D70);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A45DC;
    D_001A45DC = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3E50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C3E80);

void func_000C4000(void) {
    func_000C3E80(1, 0xFFFF);
}

void func_000C4020(void) {
    func_000C3E80(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C43B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C44C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C45F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C466C);

s32 func_000C46A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A45E0 != arg1) {
        var_v0 = func_000C7280(arg0, arg1);
    }
    return var_v0;
}

s32 func_000C46D4(void) {
    return D_001A45E0;
}

s32 func_000C46E0(void) {
    return D_001A45E0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C46EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C47E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2FF0A287);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199150);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199168);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FF74C932);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4AD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4C10);

s32 func_000C4E70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1B8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4E78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C4FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C501C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C517C);

void func_000C523C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}

s32 func_000C5248(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2313DDCA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C52B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C52E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E9BF6BEB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C53CC);

void func_000C5434(s32 arg0) {
    scePaf_3E203AEB(D_001A5B80, 0, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C545C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C54AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C54F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C55B4);

void func_000C56EC(void) {
    if (D_001A5B44 != NULL) {
        func_000C6198(*D_001A5B44);
        scePaf_545FE2DA(D_001A5B44);
        D_001A5B44 = NULL;
    }
    sceFontDoneLib(D_001A5B34);
    D_001A5B34 = 0;
    if (D_001A5B78 != 0) {
        func_00116858(D_001A5B78);
        D_001A5B78 = 0;
    }
    if (D_001A5B80 != 0) {
        scePaf_8A861692(D_001A5B80);
        D_001A5B80 = 0;
    }
    if (D_001A5B74 != NULL) {
        scePaf_545FE2DA(D_001A5B74);
        D_001A5B74 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F8301DBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C57FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C585C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C58AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001991D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001991E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001991F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C58FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C59A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5E5C);

void func_000C5E7C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
    func_000C62E0();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5EAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C5ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C600C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C62E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C638C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C64A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C64D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_462E5873);

s32 func_000C656C(s32 arg0) {
    return func_000C658C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C658C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C666C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6754);

void func_000C6800(void) {
    func_000C6754(1, 0xFFFF);
}

void func_000C6820(void) {
    func_000C6754(0, 0xFFFF);
}

s32 *func_000C6840(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000C68EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6878);

void func_000C68A8(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000C68EC(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_000C6AB4(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C68EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C6E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7060);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C70B4);

void func_000C7108(void) {
    func_000C7124();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7124);

void func_000C717C(void) {
    func_000C7198();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C71C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7280);

s32 func_000C7294(void) {
    return D_001A4624;
}

s32 func_000C72A0(void) {
    return D_001A4624;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C72AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C74DC);

void func_000C754C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_65920294);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_37DDBDD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A4F53FED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C786C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1AD33D73);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DF887DED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_92A46B32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_905347E9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_585B93BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DC544921);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C7C50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_39C55C03);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F47CA1C2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4E60E34C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8140);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C83C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C84B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DDA68BE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EAA5AFF6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3F81333A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C87BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8894);

s32 scePaf_01CF521E(void *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    var_a1 = 1;
    if (__builtin_allegrex_ext(temp_v0, 0x10, 1) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_v0 | 0x10000);
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3C68DCB7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C89F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8AB8);

void func_000C8B50(void) {
    func_000C8AB8(1, 0xFFFF);
}

void func_000C8B70(void) {
    func_000C8AB8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8C10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8C9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8EA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8F80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C8FF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C90D0);

void ***func_000C917C(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C91E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9278);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199290);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001992FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199304);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199308);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019930C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9540);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C98D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C990C);

void func_000C99E0(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x8C);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x98)(temp_a0, 0x12, arg0 + 0x60);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9A10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9A34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000C9C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA1D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA50C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA53C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CA980);

void func_000CAAD4(void) {
}

void func_000CAADC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAB8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAC40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAC78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAD2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAD4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CAF88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB0D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB1C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB458);

void func_000CB824(s32 arg0) {
    func_000CC8B0(arg0 + 0xAC);
    func_000C9B0C(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6741C662);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_26DF747F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB92C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_09AC6844);

void func_000CB988(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CB990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CBAD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_41BCFB59);

void func_000CBC30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD8) = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000CBC88(arg0, arg1, arg2, 0, arg3, (s32) &D_001A4628, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_000CBC88(arg0, arg1, arg2, arg3, arg4, (s32) &D_001A4628, arg5);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CBC88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6840D208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CBF80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F1546D14);

void scePaf_607713A6(s32 arg0) {
    D_001A4694 = arg0;
}

void func_000CC2B4(s32 arg0) {
    D_001A5BA0 = arg0;
}

void scePaf_5EFC5387(s32 arg0) {
    D_001A5BA4 = arg0;
}

void scePaf_DFC8650C(s32 arg0) {
    D_001A5BA8 = arg0;
}

void func_000CC2D8(void *arg0, M2C_UNK *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xEC) = arg1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xEC) = &D_001A4628;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5DE0445F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FE575092);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6C3BBB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC600);

void func_000CC680(void) {
    func_000CC600(1, 0xFFFF);
}

void func_000CC6A0(void) {
    func_000CC600(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC6C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC6D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC710);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC720);

void ***func_000CC760(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC8B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC94C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CC9CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCA8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCB4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCB88);

void func_000CCBE0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_000CCC00(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCC1C);

void func_000CCE8C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCEEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCF10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CCF44);

void func_000CD02C(void) {
    func_000D5CE4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A69BABE3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD1A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD1F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD2B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD3B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD42C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD528);

void func_000CD538(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000CD96C((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD56C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD6C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD8B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CD96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDB84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDBF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199370);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199374);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199400);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001994C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019953C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001995BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019967C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001996F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDC94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDE04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CDFD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE03C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE4E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE5EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE7E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CE9D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CEC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CECE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CED9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CEE18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CEEAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CEF14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CF368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_14CE7F6F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFC48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFCB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFD10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFD84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFDFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFE84);

void func_000CFFC0(void *arg0, s32 arg1) {
    func_000CFFE0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x15C), arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000CFFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D00DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0244);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0390);

s32 func_000D0574(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x188) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D07D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0888);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0A50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0CD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D0FC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1098);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D14B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D14EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D15A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D16A0);

void ***func_000D1798(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D196C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D19EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1AF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1C10);

void func_000D1D28(void) {
    func_000D1D44();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1DBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001997D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D1F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2030);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D21C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D273C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D28C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2C4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D2F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D30EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D32DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3B54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3CB4);

s32 func_000D3D14(void *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    if ((var_v1 < arg2) && (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x14))) {
        func_000D49D0(arg0, 3);
        var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    }
    return var_v1 < arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3D70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3E2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D3F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D402C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4204);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4488);

void func_000D4664(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) || (M2C_FIELD(arg0, u8 *, 0x44) == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_000D30EC(M2C_FIELD(arg0, s32 *, 8), arg3, arg1, arg4, arg5, arg6);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D470C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D47C8);

void func_000D4884(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D48A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4924);

s32 func_000D49D0(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (arg1 < var_v1) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D49F0);

void func_000D4B20(void) {
    func_000D49F0(1, 0xFFFF);
}

void func_000D4B40(void) {
    func_000D49F0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4B60);

void func_000D4B9C(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_545FE2DA(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_545FE2DA(var_a0);
}

void func_000D4BF4(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_545FE2DA(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4C50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D4F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D50E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D51C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D527C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D53C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D56A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5720);

void ***func_000D57AC(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D58C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199840);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199844);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001998A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001998D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001998E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199960);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001999F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001999FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D591C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D59E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5AF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5CE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5D08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5D14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5F18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199AA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D5FD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D61B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D61E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D62D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6370);

void func_000D6398(void) {
}

s32 scePaf_5CA7F421(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B0 != arg1) {
        var_v0 = func_000C46A8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000D63CC(void) {
    return D_001A47B0;
}

s32 scePaf_BAA88CDA(void) {
    return D_001A47B0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199AF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199B08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199B14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_87516C3B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_84485F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_715E8DAB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D6C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D35B454A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4DB0D5D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8AB03D91);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A89157EE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5045C01F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BDC894D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_72514A05);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D71B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_50FFFCD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A88CBB4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D76C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_47E35A50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_41A7BDD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D78D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D7964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D587826C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_61B105C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B6841F37);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D7C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3A4934E3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x234) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x238) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x23C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    func_000D89B0((s32) arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0C66B594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_206C1F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D8138);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9563887D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D82A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_21B885B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D8738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D89B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D8A74);

s32 scePaf_360956CC(void *arg0, void *arg1) {
    u8 temp_a2;

    func_000C7708();
    temp_a2 = M2C_FIELD(arg1, u8 *, 8);
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {

        } else {
            func_000D90A4(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_39F89900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1F0B8678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5DB527D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_25391E36);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D90A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D913C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D91D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D9270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D930C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D9368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D9404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D9498);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D94E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000D9580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_927854C5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D02C0D2E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_222526B6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_33096E46);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EF52945B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3F52824F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_672036FE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1C286704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2E6CA751);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_01A35C15);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B42D784E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_470ABD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_08A02EFF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_29DC646F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4FCA0DE9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2A6499A5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D07AF3FA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BAFF6806);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FCF42D6D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_AA978F61);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E796C85B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CFF2B69C);

s32 scePaf_4EA868E6(void *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x74)(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DB230BE1);

s32 scePaf_C2E4423A(void *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x7C)(temp_v1);
    }
    return var_v0;
}

void scePaf_86B41BA3(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1D0);
    if (temp_v0 == 0) {

    } else {
        func_000EF13C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA0BC);

s32 func_000DA1CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA1D4);

s32 func_000DA228(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA250);

void func_000DA284(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA28C);

void func_000DA2AC(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA2C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA400);

void func_000DA424(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_000DA448(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_000DA46C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA490);

void func_000DA4B4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_000DA4D8(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_000DA4FC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA520);

void func_000DA53C(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA574);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA5D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA650);

void func_000DA690(void) {
}

s32 func_000DA698(void) {
    return -1;
}

s32 func_000DA6A0(void) {
    return -1;
}

s32 func_000DA6A8(void) {
    return -1;
}

s32 func_000DA6B0(void) {
    return -1;
}

s32 func_000DA6B8(void) {
    return 0;
}

s32 func_000DA6C0(void) {
    return 0;
}

s32 func_000DA6C8(void) {
    return 1;
}

void func_000DA6D0(void) {
}

s32 scePaf_EB553D60(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DA704(void) {
    return D_001A47B4;
}

s32 scePaf_65C19AC0(void) {
    return D_001A47B4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CDC81771);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F1649F5B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_C1FAF826);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA89C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DA8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8BA04801);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_93A60B78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_AEE1CBAD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_19A779E2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DABFC);

s32 func_000DAC28(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B8 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DAC54(void) {
    return D_001A47B8;
}

s32 func_000DAC60(void) {
    return D_001A47B8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DAC6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DAD00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DAD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DADE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199BA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199C78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199D08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199D28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199DF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199E04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DAEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB3C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4FF65BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB45C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB7F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DB934);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBA64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBAA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBB08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBB18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBB58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBCCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBDF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBF58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DBFF0);

s32 func_000DC0B8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47BC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DC0E4(void) {
    return D_001A47BC;
}

s32 scePaf_A0A25707(void) {
    return D_001A47BC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DC0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7B099943);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DC284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DC32C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DC3D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199E4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199E60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199E70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_16033F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DCD28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DCDD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CB7CCB28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0A189A1A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DCF7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DD0D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DD220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199F84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199F90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E5BAC873);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_38876947);

void func_000DD9C8(void *arg0) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(arg0, void ***, 0x3CC);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xBC)(temp_v0, 0, 0);
    } else {
        func_000DDFC8((s32) arg0, 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDA68);

void func_000DDAF0(s32 arg0) {
    func_000DDB1C();
    scePaf_47E35A50(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDB1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDC3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDEDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DDFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE1C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE2B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE2D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE2FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE3B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE3F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE418);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE4E8);

s32 func_000DE514(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C0 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DE540(void) {
    return D_001A47C0;
}

s32 scePaf_CAE6374A(void) {
    return D_001A47C0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_00199FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E6C072E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE6F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE73C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE7CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE91C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DE978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DED08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DED5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DEDC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DEE1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DEE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DEEB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DEEF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DF0E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DF2E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DF4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DF6CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DF8B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DFB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_66B35152);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D2463C79);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000DFEEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_58CAE908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9DD9CA07);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E019C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E0308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E0650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E077C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E09B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E0B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E0D9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E0E78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E10F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E11EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E12EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1458);

void func_000E14F0(void) {
    func_000E1458(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E15D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E16BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1730);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E17F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1880);

void func_000E18EC(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000E1930((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1930);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1A18);

s32 func_000E1B08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E1B34(void) {
    return D_001A47C4;
}

s32 scePaf_9C9B6732(void) {
    return D_001A47C4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1D8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A170);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A240);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E1E30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DF9138A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_78054045);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_95DA7A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E26B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2878);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A260);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A268);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A26C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A270);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A274);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A278);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A27C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A280);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A284);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A288);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A28C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2940);

s32 func_000E2B10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x330) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2E80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2F5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2F88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E2FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E30F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3164);

s32 func_000E3190(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C8 != arg1) {
        var_v0 = func_000EFBA8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E31BC(void) {
    return D_001A47C8;
}

s32 scePaf_ED3E4EB1(void) {
    return D_001A47C8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E31D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E320C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3244);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E326C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3294);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A2A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A2B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E32CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3794);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E38BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E39E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E3E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E40D0);

void func_000E414C(s32 arg0, s32 arg1, s32 arg2) {
    func_000F0E3C(arg0, arg1, arg2 & 0xFF);
}

s32 func_000E4168(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47CC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4194(void) {
    return D_001A47CC;
}

s32 func_000E41A0(void) {
    return D_001A47CC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E41AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D2E0D705);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E42DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4304);

void func_000E433C(void *arg0) {
    func_000FEDBC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

s32 func_000E4358(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x148);
}

void func_000E4368(void *arg0) {
    func_000CEE18(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_6E1B5B50(void *arg0) {
    func_000D0648(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void func_000E43A8(void *arg0) {
    func_000D0580(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E43C8);

void scePaf_BFFAEE83(void *arg0) {
    scePaf_14CE7F6F(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9AFD4AD4);

void func_000E4408(void *arg0) {
    func_000D0E94(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_7116224C(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x194) = arg1;
}

void func_000E4438(void *arg0, s32 arg1, s32 arg2) {
    func_000CEEAC(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20), arg1, arg2 & 0xFF);
}

s32 func_000E445C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D0 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4488(void) {
    return D_001A47D0;
}

s32 func_000E4494(void) {
    return D_001A47D0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A4A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A59C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A5BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A5DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A5FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A61C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E44A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E49B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4CA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4E20);

s32 func_000E4F0C(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 2U) || (M2C_FIELD(arg0, u8 *, 0x331) != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, u8 *, 0x331) = 0U;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E4F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5014);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E50D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E54F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E55A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E55E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E58B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5B88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E5E5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E6130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E67A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A76B9604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5075C799);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E6D80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E6E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E700C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A72594EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7B6F0E32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E7374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F88ABAE1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_522A877E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BEF0151C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E7C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E1C76B22);

void scePaf_44EB8C62(void *arg0) {
    s32 temp_a1;
    s32 var_s0;

    var_s0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (M2C_FIELD(arg0, s32 *, 0x34C) < var_s0) {

    } else {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0xD0)(arg0, temp_a1);
        } while (M2C_FIELD(arg0, s32 *, 0x34C) >= var_s0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E7ECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E807C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8C68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8E64);

void func_000E8EDC(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000C517C((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E8F20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9010);

s32 func_000E90A0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E90CC(void) {
    return D_001A47D4;
}

s32 func_000E90D8(void) {
    return D_001A47D4;
}

void scePaf_6DD28F44(void) {
    func_000FF044();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4ADAEF94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9248);

void scePaf_95708BC0(void *arg0) {
    func_000FF94C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DEF9EBE7(void *arg0) {
    func_000FF9BC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_C85155C9(void *arg0) {
    func_000FF9E4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_F23F3226(void *arg0) {
    func_000FFA54(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_D153385E(void *arg0) {
    func_000FFA7C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_86A5AE7D(void *arg0) {
    func_000FFAA0(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_5A8D4BDB(void *arg0) {
    func_000FFAA8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_2120282A(void *arg0) {
    func_000FFB04(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_8159EB28(void *arg0) {
    func_000FFB44(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_5CE11C03(void *arg0) {
    func_000FFB80(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_05073826(void *arg0) {
    func_000FFB88(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_A4B48F00(void *arg0) {
    func_000FFB90(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_224C33F0(void *arg0) {
    func_000FFBEC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_3DBE861F(void *arg0) {
    func_000FFBF4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_FA78AF39(void *arg0) {
    func_000FFC50(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_A3761F27(void *arg0) {
    func_000FFC58(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DE75C2BA(void *arg0) {
    func_000FFC8C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_4129A915(void *arg0, s32 arg1, s32 arg2) {
    func_000FFCB0(M2C_FIELD(arg0, void **, 0x1E8), arg1, arg2 & 0xFF);
}

void scePaf_8A51BA1E(void *arg0) {
    func_000FFCD8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_0FFA3ECE(void *arg0) {
    func_000FFCE4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_89582FD0(void *arg0) {
    func_000FFD00(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_84913A3A(void *arg0) {
    func_000FFD1C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E94EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E960C);

s32 func_000E9634(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D8 != arg1) {
        var_v0 = func_000E445C(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E9660(void) {
    return D_001A47D8;
}

s32 scePaf_7C31F453(void) {
    return D_001A47D8;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A6AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A798);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A7A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A7A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A7B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A89C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019A8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F60816FE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000E9FFC);

s32 func_000EA2D8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_000E5428(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_000EB590(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA314);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA3B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA44C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA488);

void func_000EA4DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E58B4(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}

void func_000EA528(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5B88(arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}

void func_000EA570(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5E5C(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA64C);

s32 scePaf_6141934B(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_000E6D80(arg0, arg1);
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x700);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EA800);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EAAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D5F5E68F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EAE3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EB7D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EBA00);

void func_000EBB58(void) {
    func_000E5558();
}

s32 func_000EBB74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47DC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBBA0(void) {
    return D_001A47DC;
}

s32 scePaf_C6F44EF9(void) {
    return D_001A47DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EBBB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D180ACBA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EBCE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EBD10);

void scePaf_22B0D7D8(void *arg0) {
    func_00102B50(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_FCABD0E7(void *arg0) {
    func_00102CFC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_CA8CDF32(void *arg0) {
    func_00102D38(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_EE10AEF1(void *arg0) {
    func_00102FCC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_E15A64EA(void *arg0) {
    func_00103008(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBDD4(void *arg0) {
    func_0010308C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_4C5F6657(void *arg0) {
    func_00103094(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6A772BF7(void *arg0) {
    func_001030B0(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_8CDEDC6F(void *arg0) {
    func_00103104(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_CFAF88AB(void *arg0) {
    func_00103120(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DFB912CB(void *arg0) {
    func_0010313C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_D34D0B82(void *arg0) {
    func_00103158(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBE98(void *arg0) {
    func_00103174(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_BAA76FDE(void *arg0) {
    func_00103190(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBED0(void *arg0) {
    func_001031AC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6CF44237(void *arg0) {
    func_001031C8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBF08(void *arg0) {
    func_001031E4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBF24(void *arg0) {
    func_00103200(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6B678D44(void *arg0) {
    func_00103208(M2C_FIELD(arg0, s32 *, 0x1E8));
}

s32 func_000EBF5C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4808 != arg1) {
        var_v0 = func_000EFBA8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBF88(void) {
    return D_001A4808;
}

s32 scePaf_9A8E343E(void) {
    return D_001A4808;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EBFA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D1159069);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EC168);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EC220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EC2D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AA10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AA20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AB08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019ABFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AC00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AC04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EC398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECA00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECAD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECB18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECC98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECD7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ECE64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_AE02F241);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_95040C08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_07BA4C80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_252F37A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED8E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED8F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED948);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000ED998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDA80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDD24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDDE4);

void func_000EDEA4(void) {
    func_000F0E94();
}

void func_000EDEC0(void) {
    func_000F0F30();
}

s32 func_000EDEDC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A480C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EDF08(void) {
    return D_001A480C;
}

s32 scePaf_CEAC29F3(void) {
    return D_001A480C;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EDF20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_275BCDC6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE0D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE100);

s32 func_000EE138(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4810 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE164(void) {
    return D_001A4810;
}

s32 scePaf_503FA456(void) {
    return D_001A4810;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AC58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AD28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AD38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AE0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AE18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE17C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE3AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE3F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B104EC1B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4E62343D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3CEDE012);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_85696453);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6E94BA7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_18D51B42);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_03064559);

void scePaf_2A5DDF04(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x3F8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE8DC);

s32 func_000EE950(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4814 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE97C(void) {
    return D_001A4814;
}

s32 scePaf_256218C2(void) {
    return D_001A4814;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AE34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AE48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AF18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AF20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AF2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EE994);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_C8FD64AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EED10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EED6C);

void func_000EEDD0(void **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0x60)(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EEE10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_79C3CBF7);

s32 func_000EEFFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x554);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF004);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF18C);

s32 func_000EF208(s32 arg0, M2C_UNK arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80005, arg1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF2A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF38C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF400);

s32 func_000EF4C0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4818 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EF4EC(void) {
    return D_001A4818;
}

s32 scePaf_F7FB133E(void) {
    return D_001A4818;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AF48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019AF58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_57AF63CE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2D94D547);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_752AB253);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_12D445E1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EF9C0);

void scePaf_C07B7162(void *arg0) {
    func_00106250(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EFA00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EFB48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EFBA8);

s32 func_000EFBD4(void) {
    return D_001A481C;
}

s32 scePaf_5A818E41(void) {
    return D_001A481C;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B058);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B128);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B1A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B1C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B1E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B200);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EFBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000EFF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F022C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F039C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F050C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0684);

s32 func_000F0920(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 4U) || (M2C_FIELD(arg0, u8 *, 0x331) == 0) || (M2C_FIELD(arg0, s32 *, 0x1EC) != 5)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, s8 *, 0x334) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0AC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0C3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0D20);

s32 func_000F0DB8(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F(arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x5B0, 0xD, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0E3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F0F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F129C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F13B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F14FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F15A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8DB4B066);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_C2C25056);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_06EA7CDE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A9970EF5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F18C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F18E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1BF4);

void func_000F1C54(void) {
    func_000F1BF4(1, 0xFFFF);
}

s32 func_000F1C74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4820 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F1CA0(void) {
    return D_001A4820;
}

s32 scePaf_96C46364(void) {
    return D_001A4820;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1CB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2A2EB136);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F1DD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B2A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BB457D6F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0ED80B09);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_777635B9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_70BECA15);

void func_000F202C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_3F52824F((s32) arg0, arg1, arg2 & 0xFF);
}

void func_000F2050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_672036FE();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F209C);

void func_000F20C4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_DB230BE1();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D1EE972C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E732CF74);

void scePaf_FA758B05(void *arg0) {
    func_00106ABC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_608F02C6);

s32 scePaf_DC8B0309(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B1C(temp_v0);
    }
    return var_v1;
}

s32 scePaf_FA87D725(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B34(temp_v0);
    }
    return var_v1;
}

s32 scePaf_409E25A3(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B4C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_64775957);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FC37FABD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_79F4AE65);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B6F52424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BA6B8B02);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4D810FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_ABCBC1C5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B2ED6CAA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1232B7A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_37DD37B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B9BE69FD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8D7FC7DB);

void scePaf_905CF2A7(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106DCC(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106DE4(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106E1C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B711DC69);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_ECE59E24);

void scePaf_A574DB92(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106ED4(temp_v0);
    }
}

void scePaf_F639E5E1(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106F04(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7F2442DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2828);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F29B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F29E0);

s32 func_000F2A18(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4824 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F2A44(void) {
    return D_001A4824;
}

s32 scePaf_73712598(void) {
    return D_001A4824;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B384);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B468);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2B94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2D08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F2D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D99BEC81);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_81667058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F32B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B1F587EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F339C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8C1ED07B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4D4805AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_50F72192);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A8711520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FCDD55E3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2EABF548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_28F8DE83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_75A553A2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3F24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3F90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F3FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8B439A23);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BECD1827);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_149CDEB9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_62081F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9D496842);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2750CF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CC103AD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_566BC690);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_68569AAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D16E5935);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_97B9C21E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_30F5E7DF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_76491EEA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7771BC86);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_7435C5D5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_06BB62B7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_04EF78CD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F4404EAF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D63D4561);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4A98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4C9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4D70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4EA4);

s32 func_000F4EDC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4828 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F4F08(void) {
    return D_001A4828;
}

s32 scePaf_3291BDDD(void) {
    return D_001A4828;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F4F20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_15EF8E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5144);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5218);

s32 func_000F52F4(void) {
    scePaf_1AD33D73();
    return 1;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B534);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_293A01D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F535C);

void func_000F53A4(void) {
}

void func_000F53AC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CFB1A402);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5D7F1F27);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_AD007AB6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_73D49419);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F54B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F55E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3987B5C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_369E597A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F58C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_695BCD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_45386654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F59E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CB65103E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_515EE222);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F89ECA28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4AF8E417);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_76D5A950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5E7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F5FF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F6050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F60AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F60FC);

s32 func_000F614C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_0010FAFC(temp_v0);
    }
    return var_v1;
}

s32 func_000F6184(void *arg0, s32 arg1) {
    s32 var_v0;
    void **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x84)(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

void scePaf_F89014B3(s32 arg0, s32 arg1) {
    s32 temp_v1;

    scePaf_EAA5AFF6(arg0, 0x01000016);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v1 == 0) {

    } else {
        func_0010B438(temp_v1, arg1 & 0xFF);
    }
}

void func_000F6234(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_0010FB50(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F6264);

void func_000F62C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_0010D4A8(temp_v0);
    }
}

s32 func_000F62F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A482C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F631C(void) {
    return D_001A482C;
}

s32 scePaf_DAD477C1(void) {
    return D_001A482C;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B68C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B6A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B770);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B77C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B788);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B7FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B804);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B828);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F6334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F64EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F67B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F68CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F69E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F6BBC);

s32 scePaf_4FC2470C(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x330) = arg1;
        scePaf_DA3A6D88((s32) arg0, 0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F6C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CB7B666E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_ADC146F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D5A254F9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A18DB948);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F7408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0FB7D433);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F554C7C7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5ACFC2EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_42F43213);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5D242D11);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8A70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8BE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F8FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_84A71447);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F93C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F95DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F976C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9C94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000F9F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_DA3A6D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9D92765E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D7074BD1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FDB39519);

void func_000FA414(s32 arg0) {
    scePaf_47E35A50(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0C6EEA21);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5458E412);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D91B2651);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_1943B875);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FE84212F);

void scePaf_43374E9E(void) {
    scePaf_0C6EEA21();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FA800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_199896A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FA970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FA9A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A02E66FA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_70B92642);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_05EEE8A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F49F3C59);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FABDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_32B27ADD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_A7818BCE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2D79697E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EDF1C662);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_C4D819AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FB000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_63EA1815);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_447974D1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FB22C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FB278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_11361F12);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_51FF9D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B77039E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9430557B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6797988C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_449C8821);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_470470A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BC0E5C5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8E751FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F32223AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_98A6C193);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BD49CAEF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6C4976AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_85112756);

s32 scePaf_C933B3C5(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x35C);
    M2C_FIELD(arg0, s32 *, 0x35C) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FB8C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EFAC3E9F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2D0E2A03);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBBB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBC30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBD10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBE1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FBF00);

void func_000FC010(void) {
}

s32 func_000FC018(void *arg0, s32 arg1) {
    s32 var_v0;
    void **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x84)(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC06C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC214);

void ***func_000FC294(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

void ***func_000FC2FC(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC3E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B960);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019B970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC474);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F6F3E99E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC69C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC870);

void func_000FC918(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x30, 0x12, arg1);
    scePaf_D6232F26(arg0 + 0xF0, 0x12, arg1);
    func_000FDE34(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FC970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCA50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCB74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCBFC);

void func_000FCC8C(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x24);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x28)(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCCB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCCEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCDE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCEE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FCFFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD138);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD24C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BA68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD4C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD57C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD6A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD720);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FD920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDA0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDA60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDCD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDD50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDE34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FDEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE20C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE5F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FE974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FECAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FED10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEE04);

void func_000FEE24(void *arg0) {
    func_000CE7E4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE40(void *arg0) {
    func_000CE8C4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE5C(void *arg0) {
    func_000CE9D0(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE78(void *arg0) {
    func_000CE480(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE94(void *arg0) {
    func_000CE4E4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEEB0(void *arg0) {
    func_000CE548(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEECC(void *arg0) {
    func_000CE5EC(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEEE8(void *arg0) {
    func_000CECE4(M2C_FIELD(arg0, s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FEF54);

void scePaf_8DEB3DB3(void *arg0) {
    sceKernelWaitSema(D_001A5C80, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    sceKernelSignalSema((s32) D_001A5C80, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BA09CF46);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BC08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BC18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF148);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF3A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF474);

s32 func_000FF900(s32 arg0, s32 *arg1) {
    func_0000C8BC(arg0 + 0x44, *arg1);
    return 0;
}

s32 func_000FF924(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x44));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF94C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FF9E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFA7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFAA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFAA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFB44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFB88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFB90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFBF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFC8C);

void func_000FFCB0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    if (arg2 & 0xFF) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) | arg1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) & ~arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFCD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFD00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFD1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_000FFD38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010028C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100A50);

void func_00100A88(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00101C84(M2C_FIELD(arg0, s32 *, 0xB4));
            func_00102168(M2C_FIELD(arg0, s32 *, 0xB8));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00100918(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100AF4);

u8 func_00100C44(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else if ((!(arg1 & 0xF) || (var_v1 = 1, (M2C_FIELD(arg0, s32 *, 0xC0) == 0))) && ((var_v1 = 1, ((arg1 & 0xF0) == 0)) || (M2C_FIELD(arg0, s32 *, 0xB0) != 0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

void func_00100C90(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    }
}

void func_00100CA0(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0xB8));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100CC0);

s32 func_00100D2C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x138);
    }
    return var_v0;
}

s32 func_00100D40(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x13C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00100EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010177C);

void func_001017B4(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00102168(M2C_FIELD(arg0, s32 *, 0x18));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00101718(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

u8 func_00101818(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else {
            var_v1 = 1;
            if (!(arg1 & 0xF0) || (M2C_FIELD(arg0, u8 *, 0x14) == 0)) {
                var_v1 = 0;
            }
        }
    }
    return var_v1;
}

void func_00101850(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        sceAtracSetLoopNum(M2C_FIELD(arg0, s32 *, 8), (arg1 == 0) ? 0 : -1);
    }
}

void func_0010187C(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010189C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101AC0);

void func_00101B74(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00101BC4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101C14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101C84);

u8 func_00101CB8(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_00101CCC(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101CE8);

void func_00101D50(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 8), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101D94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00101F40);

void func_00102094(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x14));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001020E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102168);

u8 func_0010219C(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_001021B0(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001021CC);

void func_00102234(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102298);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BCEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BCFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BD0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BD1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BD2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BD3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001023A8);

void func_00102434(void) {
    func_001023A8(1, 0xFFFF);
}

void func_00102454(void) {
    func_001023A8(0, 0xFFFF);
}

void func_00102474(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010256C();
}

void func_00102494(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010259C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001024B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010256C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010259C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001026B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010279C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001028B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001029C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102AE0);

void func_00102B34(s32 arg0) {
    func_00102CFC(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102B50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102CFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102D38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00102FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010308C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001030B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010313C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001031AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001031C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001031E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103200);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BE48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103774);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001037A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001037EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001038BC);

void func_00103960(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001039D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103AA0);

s32 func_00103AE4(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103C44);

void func_00103CE8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103D0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103D5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103DA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BEE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019BF88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00103FE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001041A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001042C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001043F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104560);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001047A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001048B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001049D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104AE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104D9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C0E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00104E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001050C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001052FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010553C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010577C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001059C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C108);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C10C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C110);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C114);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C118);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C11C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105B10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105C2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105E3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00105F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001064E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010656C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001065B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001066D0);

s32 func_00106744(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE7E4(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x10)(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_001067B8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE9D0(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x18)(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010682C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001068D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001069B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001069EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106A54);

void func_00106A8C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFB7C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106ABC);

void func_00106AD4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        scePaf_14CE7F6F(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106BCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106C34);

void func_00106C68(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFE84(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106E1C);

void func_00106E54(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000D0C18(temp_v0);
    }
}

s32 func_00106E84(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000C5EAC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106F18);

void scePaf_D4C6CC7A(void *arg0) {
    M2C_FIELD(&D_001A7CC0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_001A7CC0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_001A7CC0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_001A7CC0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C1F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00106F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010770C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010832C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001087BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00108C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00108D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00108EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00109150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00109420);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001096C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00109B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00109DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00109E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010A1B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010A3C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010A514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010A95C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C53C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C540);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C544);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C550);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C554);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C560);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C578);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C58C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C594);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C598);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C59C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C5FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C604);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C60C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C61C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C620);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C628);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C62C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C63C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C64C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C658);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C65C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C660);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C690);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019C6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010B33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010B438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010B918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010B9D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010BB2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010BD78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010BED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010C5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010C5F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010C750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010C8B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010CA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010CB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010CCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010D4A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010D568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010E448);

void func_0010FA74(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x14F0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14F4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14F8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14FC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FAFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0010FFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00110650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00110CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00110D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00110DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00110EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001110AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011126C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011129C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011140C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011145C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001114FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001116D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00111B94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00111BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00111DD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00111FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011206C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011210C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001121AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011224C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001126DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00112AE8);

void func_00112B40(void) {
    func_00112AE8(1, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00112B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001130D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001139F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CC9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113D7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00113F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00114008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001140B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00114158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011448C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011453C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001145E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011468C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00114738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011519C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001155CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115BF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115DC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115E64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00115FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011610C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001161AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001162F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011643C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001164E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116678);

s32 func_001167F4(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001167FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011689C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001169D8);

void func_00116A60(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_00116AA0((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116AA0);

s32 func_00116B6C(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
        if ((M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_00116BB8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00116BD8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116BF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116CE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00116FB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011717C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001171F8);

s32 func_00117274(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4930 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_001172A0(void) {
    return D_001A4930;
}

s32 func_001172AC(void) {
    return D_001A4930;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001172B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001173E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117408);

void func_00117440(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

s32 func_0011744C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4934 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00117478(void) {
    return D_001A4934;
}

s32 func_00117484(void) {
    return D_001A4934;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001175B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001175E0);

void func_00117618(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117624);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001176E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011781C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001178C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011792C);

void func_0011794C(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_00117968(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117984(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_001179A0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_001179BC(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_001179D8(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_001179F4(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117A10);

s32 func_00117A44(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_00117A6C(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117B50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117BEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117C88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117D98);

void func_00117DB8(s32 arg0) {
    func_000C2580(arg0 + 0x20);
}

void func_00117DD4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117DF0(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00117E0C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00117E28(s32 arg0) {
    func_000C25D8(arg0 + 0x20);
}

void func_00117E44(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00117E60(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117E7C);

s32 func_00117EB0(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_00117ED8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00117EFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_6147E3D5);

void func_00117F74(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void scePaf_1B043852(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_0B0959FC);

void scePaf_CA5EF446(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 4), 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011802C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B884B031);

void func_001180D8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_C1F72218(void *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (M2C_FIELD(arg0, u32 *, 4) != temp_v0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
        sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 3U, 0x20, NULL, NULL);
        M2C_FIELD(arg0, u32 *, 4) = temp_v0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

void scePaf_539F2583(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011820C);

void func_00118288(void) {
    func_0011820C(1, 0xFFFF);
}

void func_001182A8(void) {
    func_0011820C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001182C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118308);

void func_00118348(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118364(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118380(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(M2C_FIELD(arg0, u32 *, 0), -2U);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_001183EC(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_00118454(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00118498(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001184B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118500);

void func_00118548(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118564(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118580(void *arg0) {
    if (sceKernelPollEventFlag(M2C_FIELD(arg0, s32 *, 0), 1, 0x20, 0) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 (**)(s32), 4) = NULL;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0), 2);
    }
}

s32 scePaf_EB346F51(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 4U, 0x20, NULL, NULL);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0xC);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 4);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118674);

void func_001186F0(void) {
    func_00118674(1, 0xFFFF);
}

void func_00118710(void) {
    func_00118674(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CE48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CEE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CEF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CFCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019CFE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D0C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D1F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_96857E81);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_E977B833);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001188A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001188C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_80E521C5);

void func_00118930(void) {
    sceKernelExitThread(0);
}

void scePaf_5775283A(void *arg0) {
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011896C);

s32 func_00118998(void *arg0) {
    M2C_FIELD(&D_001A7CEC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_001A7CEC, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_001A7CEC, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_001A7CEC, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    return 0;
}

M2C_UNK *func_001189E8(void) {
    return &D_001A7CEC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_36CB5601);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5B202AED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_669DE9B1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_50DC7446);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_BA32D6E6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118BEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118C34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EAB7BD23);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118DDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00118FD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011905C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_CAF82B9B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011926C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001192E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119354);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119450);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011954C);

s32 func_00119634(s32 arg0) {
    func_00119DA4();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011965C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011975C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011985C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001199AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001199DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119A94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119B00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119B58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119D78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00119F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A00C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A498);

M2C_UNK *func_0011A570(void) {
    return &D_001A7D10;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A57C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A5B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A79C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A8E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011A988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AA18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AAA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011ABD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AC6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AD08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AD3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AD9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011AF8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B0F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B350);

s32 func_0011B410(s32 arg0) {
    func_0011905C();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B4E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B8A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011B9B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BAC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BB28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BDF0);

void func_0011BE84(void) {
    func_0011BDF0(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BF54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011BFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C02C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C3C8);

void func_0011C40C(void *arg0) {
    s32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x50);
    if ((temp_a4 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) < 4U)) {
        if (D_001A7D60 == 0) {
            sceGuDispBuffer((s32) M2C_FIELD(arg0, s16 *, 0x18), (s32) M2C_FIELD(arg0, s16 *, 0x1A), temp_a4 + (M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x42)) + 0xFC000000, (s32) (M2C_FIELD(arg0, s32 *, 0x3C) * 8) >> M2C_FIELD(arg0, s32 *, 0xC));
            D_001A7D60 = 1;
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C594);

s32 scePaf_08DD2D50(void *arg0, s32 arg1) {
    return (s32) ((arg1 << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C614);

void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0011C6A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

void func_0011C6C4(s32 arg0, s32 arg1) {
    func_0011FECC((s32) &D_001A7DA8, arg0, arg1);
    D_001A7D88 = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C6FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011C7C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_35F003C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_FB3A9617);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011CCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011CE28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011CF6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D0B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D310);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D1FC);

s16 scePaf_0598FFD6(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        return M2C_FIELD(arg0, s16 *, 0x42);
    }
    return M2C_FIELD(arg0, s16 *, 0x44);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D2A8);

s32 func_0011D398(void) {
    return 0x67;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D3A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5C4BF618);

void func_0011D4E8(s32 arg0) {
    func_0000C934(arg0 + 0x60, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011D5AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_5EE76FC5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_3684D457);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_846E1F0A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_21DBFF5B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011DE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011DE74);

s32 func_0011DEA8(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (var_v0 == 0) {
        var_v0 = func_0011FF68((s32) &D_001A7DA8, 1 << M2C_FIELD(arg0, s16 *, 0x54), M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x50) = var_v0;
    }
    return var_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011DF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011DF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011DFF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_EBDC149C);

void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0011E2A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_4AB0D3F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_9122393C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E6FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D350);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E784);

void func_0011E8A0(void) {
    func_0011E784(1, 0xFFFF);
}

void func_0011E8C0(void) {
    func_0011E784(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E8E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011E950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_93538664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011ED98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011EE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011EEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011EF90);

void func_0011F03C(void) {
    func_0011EF90(1, 0xFFFF);
}

void func_0011F05C(void) {
    func_0011EF90(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F0FC);

void ***func_0011F188(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F22C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_2F3C4ED2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F29C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F3DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F4EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F54C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_952CE8AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011F970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FC4C);

s32 func_0011FCF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) * (3 - M2C_FIELD(arg0, s32 *, 0x1C));
}

void func_0011FD0C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FD14);

void func_0011FD94(void) {
    func_0011FD14(1, 0xFFFF);
}

void func_0011FDB4(void) {
    func_0011FD14(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FE34);

void func_0011FE94(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

void func_0011FEB0(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0011FF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001200E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001202CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccStrlenUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012037C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012038C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001203A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccDecodeUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccEncodeUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccDecodeUTF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00120544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccUTF8toUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccUTF16toUTF8);

s32 func_001207C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7DD8;
    D_001A7DD8 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_001A7DDC = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_001A7DE0 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D4DAB044);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_15939BB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_8D736C8F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccStrlenSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012091C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001209AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00120A1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccJIStoUCS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00120B44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00120C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccSJIStoUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccUTF16toSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00120EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", sceCccDecodeSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001211B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001212D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_B9383A25);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_F93D4E1F);

s32 func_00121740(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012177C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001217B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001217E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012196C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001219A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001219D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121A40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121A74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121AA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121ADC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121BD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121C08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121C38);

s32 func_00121C68(void *arg0) {
    func_0012446C(M2C_FIELD(arg0, s32 *, 0x7C));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121C88);

s32 func_00121CB0(void) {
    return 1;
}

s32 func_00121CB8(void) {
    return 0;
}

s32 func_00121CC0(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121CEC);

s32 func_00121D20(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}

s32 func_00121D4C(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD98)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_60CBB63F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_D6CDB3BB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00121E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012203C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001220F8);

s32 func_00122158(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00122168(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122188);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D3A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", scePaf_54AB18DD);

void func_00122458(void) {
    sceCccSetTable();
}

void func_00122474(void) {
    scePaf_D4DAB044();
}

void func_00122490(s32 arg0) {
    func_0012038C(arg0);
}

void func_001224AC(s32 arg0) {
    func_001209AC(arg0 & 0xFFFF);
}

void func_001224C8(s32 arg0) {
    func_001225DC(arg0 & 0xFFFF);
}

void func_001224E4(s32 arg0) {
    func_001234E8(arg0 & 0xFFFF);
}

void func_00122500(s32 arg0) {
    func_00122D3C(arg0 & 0xFFFF);
}

void func_0012251C(s32 arg0) {
    func_00120EB0(arg0 & 0xFFFF);
}

void func_00122538(s32 arg0) {
    func_00122A2C(arg0 & 0xFFFF);
}

void func_00122554(s32 arg0) {
    func_0012398C(arg0 & 0xFFFF);
}

void func_00122570(s32 arg0) {
    func_001231C8(arg0 & 0xFFFF);
}

void func_0012258C(s32 arg0, s32 arg1) {
    D_001A7E0C = arg0;
    D_001A7E08 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001225A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001225DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001226C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012273C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001227F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001228D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122A3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122BE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122CC4);

void func_00122CEC(s32 arg0, s32 arg1) {
    D_001A7E18 = arg0;
    D_001A7E14 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00122F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012306C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012310C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001231C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001231D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123254);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001232C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001233B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123460);

void func_00123498(s32 arg0, s32 arg1) {
    D_001A7E24 = arg0;
    D_001A7E20 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001234AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001234E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012360C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012369C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001238D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012398C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012399C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123A9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123B84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123C34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123C6C);

void func_00123C90(s32 arg0, M2C_UNK arg1) {
    func_00123C6C(0xD, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123CB4);

void func_00123CC8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123E60(0xD, arg0, arg1, arg2);
}

void func_00123CF4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123F14(0xD, arg0, arg1, arg2);
}

void func_00123D20(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123FF8(0xD, arg0, arg1, arg2);
}

void func_00123D4C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001240AC(0xD, arg0, arg1, arg2);
}

void func_00123D78(s32 arg0, s32 arg1) {
    func_00123C6C(0xE, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123D9C);

void func_00123DB0(s32 arg0, s32 arg1, s32 arg2) {
    func_00123E60(0xE, arg0, arg1, arg2);
}

void func_00123DDC(s32 arg0, s32 arg1, s32 arg2) {
    func_00123F14(0xE, arg0, arg1, arg2);
}

void func_00123E08(s32 arg0, s32 arg1, s32 arg2) {
    func_00123FF8(0xE, arg0, arg1, arg2);
}

void func_00123E34(s32 arg0, s32 arg1, s32 arg2) {
    func_001240AC(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123F14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00123FF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001240AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001242A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001242D4);

s32 func_0012441C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_001245FC(temp_v0);
    }
    M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, void *), 8)(0, arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012446C);

s32 func_0012448C(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xF8)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001244B4);

s32 func_001244E0(void) {
    return 0;
}

s32 func_001244E8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001244F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001245FC);

s32 func_00124648(void) {
    return 0;
}

s32 func_00124650(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124658);

s32 func_001247E4(s32 arg0) {
    func_00124830(arg0 + 0x100);
    return 0;
}

s32 func_00124804(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012480C);

s32 func_00124828(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001248A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124A94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124B74);

s32 func_00124BD8(void) {
    return 0;
}

s32 func_00124BE0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xDBC);
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_0012592C((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_0012592C((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_00124CA4(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124CD8(void) {
    return 0;
}

s32 func_00124CE0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 7;
}

s32 func_00124D28(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 1;
}

s32 func_00124D70(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124DA0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00124EB8);

s32 func_00124F0C(void) {
    return 0;
}

s32 func_00124F14(void) {
    return 0;
}

s32 func_00124F1C(void) {
    return 0;
}

s32 func_00124F24(void) {
    return 0;
}

s32 func_00124F2C(void) {
    return 0;
}

s32 func_00124F34(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F64(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F94(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FC4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FF4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00125024(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001250F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001252D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012549C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D43C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012552C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001257F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012592C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012597C);

s32 func_001259CC(s32 arg0) {
    return (M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xE0)(D_001A7EE0, arg0) == 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125A04);

s32 func_00125A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0);
    M2C_FIELD(D_001A7EE0, M2C_UNK (**)(void *, s32, s32, s32, M2C_UNK), 0xE4)(D_001A7EE0, arg0, arg1, arg2, 1);
    return M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0) - temp_s4;
}

s32 func_00125B30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

s32 func_00125BD0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= arg2) ? 0 : -1;
}

s16 func_00125C48(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_00125C70(s32 arg0, s32 arg1) {
    func_00125C8C(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125C8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125D10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125D58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125D78);

void func_00125DF4(s32 arg0, M2C_UNK arg1) {
    func_00125D78(4, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00125FC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126028);

void func_00126264(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_00126028(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012629C);

void func_001263EC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_0012629C((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001264DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001266D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012698C);

s32 func_001269B8(void) {
    func_00127218();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001269D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126C5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00126CA4);

void func_001271C8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001271D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012729C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127430);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001275D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127880);

s32 func_001278D0(void) {
    return ~func_00127880();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001278F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001279F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00127B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001286B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001288DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128DD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D4BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D4CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D4EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00128F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012946C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001294C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001295FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129794);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012980C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012989C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001299B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129B3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129F5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00129F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A3FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A474);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A4D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A5E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A710);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A7F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012A814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AA04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012ABCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012ACC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AD20);

s32 func_0012AD7C(void) {
    s32 temp_v0;

    temp_v0 = func_00127568((s32) &D_001E0ECC, (s32) &D_001E8ED8, M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_001E0ECC, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012ADE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012AFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B73C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012B8EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BBB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BD08);

s32 func_0012BD78(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0012BC60() != -1) {
        var_s0 = 0;
        func_0012B4FC(0, (s32) &D_001E504A);
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BE70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012BFA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C1CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C45C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012C87C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012CC84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012CE20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012CF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012CFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D0DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D18C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D25C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D3C4);

void func_0012D424(s32 arg0) {
    func_00125D58(arg0, 0x24);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D5DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012D93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DB64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DD80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012DFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012E16C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012E36C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012E3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012E84C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012EF90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012F228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012F398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012FC64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012FCAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012FE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0012FFA8);

void func_0012FFFC(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 3;
    func_001300B8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_00130038(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 7;
    func_001300B8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00130074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001300B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001302E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013047C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00130580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00130900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00130CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00131008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001310BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00131434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00131668);

void func_001317F0(s32 arg0) {
    func_0013180C(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013180C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001318A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00131FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013232C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001324F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001327F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013288C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132A74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132B68);

s32 func_00132C74(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00132CBC(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132CE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00132DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133088);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013319C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001333D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001338A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00133DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013403C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001344DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013450C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001345FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013463C);

void func_00134730(void) {
    func_00125D58((s32) &D_001E208C, 0x14);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134794);

s32 func_001347E0(void) {
    s32 temp_v0;

    func_00134A14();
    temp_v0 = func_00134818();
    func_00134B04(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134A14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134C28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134D40);

void func_00134E94(s16 arg0) {
    func_00134754();
    if (arg0 == 0) {
        func_00134ED8();
    } else {
        func_00134FFC();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00134FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013510C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013517C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001351F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00135330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00135BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00136484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00136564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013696C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00136CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00136D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013711C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001372CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001373FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001375B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DAF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DB2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DB64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DBA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DBD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DBE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DBEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DC00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DC10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DC1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DC24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DC44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019DE38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019E02C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019E328);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019E398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019E3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019E414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019EE58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_0019F3B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0B78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001375FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001376E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013791C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137D1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00137F9C);

void func_001380A8(void) {
    M2C_FIELD(D_001E2988, u16 *, 8) = (u16) M2C_FIELD(D_001E2988, u16 *, 4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001380BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001381A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013821C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138250);

void func_00138298(void) {
    D_001E7C64 = 0;
}

void func_001382A4(void) {
    func_0013D5FC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001382C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001382F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013846C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001384C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001385A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001386A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001387EC);

s32 func_0013882C(void) {
    return ((D_001E50B0 ^ 2) == 0) ? 0 : -1;
}

void func_00138844(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013884C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013893C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001389BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138A8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138AE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138BD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138C84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138D60);

void func_00138E10(void) {
    func_00138F54();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138E2C);

void func_00138EC8(void) {
    if (D_001E279A != -1) {
        if (D_001E279A != -2) {
            func_001391B8();
        } else {
            func_00138FA8();
        }
    } else {
        func_0013918C();
    }
}

void func_00138F20(void) {
    if (func_00139170() != 0) {

    } else {
        func_00138F54();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00138FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139170);

void func_0013918C(void) {
    func_0013934C();
    func_00139438();
    func_001393F4();
}

void func_001391B8(void) {
    func_0013934C();
    func_00138FCC();
    func_001393F4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001391E4);

void func_00139280(s16 arg0) {
    D_001E50C0 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013928C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001392D0);

void func_00139328(void) {
    func_00139A60();
    func_00139B10();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013934C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001393F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013948C);

void func_00139518(void) {
    func_00139B6C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139534);

void func_001395D8(void) {
    func_00139534(0);
}

void func_001395F4(void) {
    func_00139534(1);
}

void func_00139610(s16 arg0) {
    func_0013B6E8(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013967C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001396B4);

void func_001396EC(void) {
    func_0013B844(0);
}

void func_00139708(void) {
    func_0013B844(1);
}

void func_00139724(void) {
    void *temp_s0;

    temp_s0 = D_001E2988;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_00139758(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001399A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139B10);

void func_00139B5C(s16 arg0) {
    M2C_FIELD(D_001E2988, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139B6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139D90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139E6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00139F50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A01C);

void func_0013A0E8(s16 arg0) {
    func_0013A10C(arg0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A10C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A430);

void func_0013A494(void) {
    if (func_0013A430((s32) M2C_FIELD(D_001E2988, s16 *, 4)) != -1) {
        func_0013EDA4();
        func_00143E94();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A62C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013A904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AAB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AAF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AD74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013AF9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B448);

void func_0013B558(void) {
    func_0013B448(0);
}

void func_0013B574(void) {
    func_0013B448(1);
}

void func_0013B590(void) {
    func_0013FBEC(0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B5B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B6E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013B9F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BB8C);

void func_0013BBCC(void) {
    func_00139A60();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BBE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BC44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013BE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C1E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C53C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013C768);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013CB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013CB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013CE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013CF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013CFB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013D028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013D08C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013D4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013D5FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013D6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013DB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013DDEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013DE7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013DEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013DF7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E4AC);

void func_0013E4D4(void) {
}

void func_0013E4DC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E4E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E5C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013E744);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013EDA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013F364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013F77C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013FA50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013FA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013FBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013FE9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0013FF34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014057C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001406C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001407C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001407E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014094C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140B58);

s16 func_00140B8C(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140C0C);

s32 func_00140C88(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_00140CC8(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140CC8);

s32 func_00140CD8(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00140E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014107C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141094);

void func_00141234(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014123C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001413A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141528);

void func_001415A8(s32 arg0, s16 arg1, s32 arg2) {
    func_00141454(arg0, (s32) arg1, arg2);
}

s32 func_001415C4(s32 arg0, s16 arg1, s32 arg2) {
    return func_001416CC(arg0, (s32) arg1, (s32) &D_001E7BE8, arg2) == 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001415F4);

void func_00141630(s32 arg0, s16 arg1, s32 arg2) {
    func_001415C4(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014164C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001416CC);

void func_00141D14(void) {
    func_001433F0();
}

void func_00141D30(void) {
    func_00143490();
}

void func_00141D4C(void) {
    func_001435A0();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00141F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00142114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001422AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001424A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001424C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00142580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001425C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00142DC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00142F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001430C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014321C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001433F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001435A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001438F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143E38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00143E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014412C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001443A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014440C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144540);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001445D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001446A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001447FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144864);

void func_001448F8(s32 arg0) {
    func_00144924();
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144924);

void func_001449CC(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    func_001494FC(M2C_FIELD(temp_s0, s32 *, 0x3A74));
    M2C_FIELD(temp_s0, s32 *, 0x3A74) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001449F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00144ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00145178);

void func_001454B4(void) {
    func_00147650();
}

void func_001454D0(s32 arg0) {
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001454EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001455E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00145668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001457B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001458D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00145FAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001461FC);

void func_0014632C(s32 arg0, s32 arg1, s32 arg2) {
    func_0014634C(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014634C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001465D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001466C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00146874);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00146A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00146B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014758C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001475DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014766C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001476F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147810);

void func_001478D0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_00148634(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
        func_0014792C((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014792C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147AC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0DAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0DE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0DEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0E20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0E34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0F64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A0FE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A100C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A1014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A1020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_09DF4C", D_001A102C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00147FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001480FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014810C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014811C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001481F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148564);

s32 func_0014861C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) & 0xF) + M2C_FIELD(arg0, u8 *, 6) + 9;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_0014869C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001486CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00148C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00149008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001491F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00149350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_001494FC);

u16 func_00149554(void *arg0) {
    u16 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != -1) {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x1CB8);
    } else {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            var_a1 = M2C_FIELD(temp_a0, u16 *, 0xE);
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00149584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00149638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09DF4C", func_00149674);

