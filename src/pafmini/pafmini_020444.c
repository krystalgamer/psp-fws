#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020444);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002053C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000205F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020634);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002074C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D22F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_38F12307);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E6432407);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020B50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_07216006);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_get_mmx_flagmask);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020D70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020D90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020E18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020E38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020E78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020F10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020F4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00020F94);

void func_00020FCC(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, s32 *, 0x42C) = (s32) (temp_s1 | 0x100000);
    func_00020E78();
    M2C_FIELD(arg0, s32 *, 0x42C) = temp_s1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002100C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00021030);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00021054);

s32 func_00021064(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00021090(arg0, arg1, arg2, arg3, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00021090);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D23D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D23D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D23EC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2400);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2414);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00021354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000213F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E327C974);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D4F9270D);

void scePaf_DB1549DF(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x42C) & 0x40) {

    } else {
        func_0002CD7C((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00021BE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DDD91620);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B2290D1A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_211A764A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002289C);

void func_00022B5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x558) = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00022B64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00022DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1BDFF258);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023060);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023070);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D27C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D27F4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2838);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D285C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2884);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2894);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023084);

void func_00023A7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_00023A94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_00023AAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02000000);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023AC0);

void func_00023AD8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023AF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023B00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023B4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00023C7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_read_transform_info);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_read_transformations);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_unshift);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_chop);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_read_swap_alpha);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_read_invert_alpha);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_read_filler);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_gray_to_rgb);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00026138);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000269DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00027C94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_expand_palette);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_expand);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_dither);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_build_gamma_table);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_read_intrapixel);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002963C);

s32 func_00029694(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000296C0(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000296EC(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

void func_00029704(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00022DF8();
    func_0001F4BC(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00029750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002983C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000298C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00029C64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00029DF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00029FFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002A080);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2C14);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2C4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002A210);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002A38C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2DB8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D2DF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002A79C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002A9E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002AC34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002AEF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B0E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B2D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B434);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B538);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B63C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002B964);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002BAF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002BCEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002BEAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002BF60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002C2F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002C7B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002C9EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002CD7C);

void func_0002D0C8(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x52, arg2, 0xA);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x20);
    }
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D366C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3670);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3674);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D36A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D36E8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3704);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3714);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3734);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3764);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3790);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D37B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D37E0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D37FC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D382C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3848);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3864);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3888);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D38AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D38E0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3900);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3920);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3954);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D397C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D39A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D39C8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D39F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3A08);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3A38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3A64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3A88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3AA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3AC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3AEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D124);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D328);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D4D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D5A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D644);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002D744);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DB10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DB44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DD58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DD8C);

void func_0002DE84(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x3C, arg2, 5);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 2);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_set_sRGB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DF0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002DFFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E194);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E3FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E4E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E658);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E820);

s32 func_0002E840(void *arg0, s32 arg1) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E85C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002E9BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EA28);

void func_0002EABC(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EAC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EADC);

void func_0002EAE8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 1);
}

void func_0002EAF8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4E7) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_7333E75A);

void scePaf_C6624F24(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4E7) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EB68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EB90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0002EBB8);

void png_set_swap_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}

void png_set_invert_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}

void png_set_invert_mono(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_invert);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_packswap);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_strip_filler);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_do_bgr);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", png_set_user_transform_info);

s32 png_get_user_transform_ptr(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}

M2C_UNK *get_crc_table(void) {
    return &D_000D3E64;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", crc32);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", crc32_little);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", crc32_big);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", gf2_matrix_times);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", gf2_matrix_square);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", crc32_combine);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", inflateReset);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", inflatePrime);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", inflateInit2_);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", inflateInit_);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", fixedtables);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", updatewindow);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3B64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3C64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3D64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D3E64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D5E64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6664);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D66E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", inflate);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00031824);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000319EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00031D6C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6944);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6974);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D69B4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D69F4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6A34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000322E0);

s32 zlibCompileFlags(void) {
    return 0x55;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", zError);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", zcalloc);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", zcfree);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00032420);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6A7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6A8C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6A98);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6A9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6AA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6AB8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6AC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6AD8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6AE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6B00);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6B28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003285C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FD3FF4AA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00032E48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D6759EEF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_27760582);

s32 func_000330B8(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_000E15C8)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000330E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003316C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00033320);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6B88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6B8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000333D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003350C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000335A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A0ED77C4);

s32 func_000337A4(void) {
    return D_000E15C8;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000337B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_35F25BA1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_79493F8F);

s32 scePaf_75062BCF(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 3;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00033A7C);

void func_00033A88(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00033AA0);

void func_00033AC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 func_00033AC8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v0;
}

M2C_UNK *func_00033ADC(M2C_UNK **arg0, s32 arg1) {
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

s32 *func_00033B18(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_00033ADC(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_00033ADC(arg0, arg1 - 1);
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

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6BC0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6BC8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6BD4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6BDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BAE16A39);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_41F702EA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_000340C4((s32) &D_000E15CC, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_000340C4((s32) &D_000E15D8, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_000340C4((s32) &D_000E15E4, arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00033FE0);

void func_00034084(void) {
    func_00033FE0(1, 0xFFFF);
}

void func_000340A4(void) {
    func_00033FE0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000340C4);

s32 func_00034114(void) {
    sceCtrlReadBufferPositive(&D_000E164C, 1);
    return M2C_FIELD(&D_000E164C, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00034148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00034170);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000341CC);

s32 func_00034590(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_000E072C = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_000E1648;
}

void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D5F3BAB1);

void scePaf_AAD0EE78(s32 arg0) {
    D_000E15F8 = arg0;
}

void scePaf_E69C3B1B(s32 arg0) {
    D_000E15FC = arg0;
}

void scePaf_17BC4F41(s32 arg0) {
    D_000E1600 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_000E1604 = arg0;
}

s32 scePaf_872F948B(void) {
    return D_000E1608;
}

s32 func_00034834(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003483C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00034898);

s32 func_00034B84(void) {
    return 1;
}

void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_D726F4A2(s32 arg0) {
    D_000E165C = arg0;
}

s32 scePaf_132148FD(void) {
    return D_000E1664;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_000E1688 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00034EA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00034F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003504C);

void func_000350D4(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    void *temp_v1;

    var_a2 = M2C_FIELD(arg0, s32 *, 4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 < (var_a2 + 1)) {
        func_00035168((s32) arg0, temp_v0 + 0xA);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) + (var_a2 * 0xC);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, M2C_UNK **, 0) = &D_000E6030;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        func_00002F1C((s32) temp_v1, arg1);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_a2 + 1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00035168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000356F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00035750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003582C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6D80);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6D9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6DB0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6DC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6DD8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6DEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E00);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E14);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E28);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6E90);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EB0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EBC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6ED4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6EFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F0C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F24);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F30);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F44);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F60);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F70);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6F9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6FA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6FC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6FD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6FE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D6FF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D700C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7020);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7034);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003584C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00035BFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00035FE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00036154);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000361C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00036210);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00036278);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontClose);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00036878);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00036DB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000373B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003743C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000374C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000374FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037530);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037580);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037848);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000379D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037AE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037BC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037CE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00037E3C);

s32 func_00038028(void *arg0) {
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

s32 func_000380A4(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00038108);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003815C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000381E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00038710);

s32 func_0003889C(void *arg0, void *arg1) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000388EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00038B50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00038E08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000390C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003960C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003965C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000396AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003982C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00039D74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003A2AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003A5E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003A810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003AA74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003AC40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003ACFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003AFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003B1B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003B2C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003B744);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003B94C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003BA44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003BA90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003BB74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003BE04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003BE78);

s32 func_0003C0E0(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C100);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C23C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C284);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C4B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C684);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C738);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C774);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C89C);

s32 func_0003C8FC(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_000E1748 == 0) {
        D_000E174C = (s32) *arg0;
        var_a1 = 0;
        D_000E1748 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C92C);

s32 func_0003C994(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_000E1748 != 0) {
        D_000E1748 = 0;
        D_000E174C = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003C9C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003CA60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003CB0C);

M2C_UNK *scePaf_962FA087(void) {
    return &D_000E1750;
}

s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E093C;
    D_000E093C = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_7952AE83);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_ED83B18F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D6C1FF36);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7064);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D6232F26);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E418D7E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2CB6FBBE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_442F1731);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_71EDAD83);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003D130);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0E8A3B52);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003D330);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D96449B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FDB98CAC);

void func_0003D5A4(void *arg0, s32 *arg1, s32 arg2) {
    func_0000AC60(arg0 + 0x64, *arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BA1F20EE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_20F5234E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6F74F263);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003DD14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003DDCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003DE84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003DEDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003DF18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E468);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E584);

void func_0003E5F0(void) {
    func_0003E584(1, 0xFFFF);
}

void func_0003E610(void) {
    func_0003E584(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E69C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E710);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E77C);

void func_0003E7F0(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}

void func_0003E80C(void) {
    scePaf_D6C1FF36();
}

void func_0003E828(void) {
    scePaf_D6232F26();
}

void func_0003E844(void) {
    scePaf_2CB6FBBE();
}

void func_0003E860(void) {
    scePaf_442F1731();
}

void func_0003E87C(void) {
    scePaf_71EDAD83();
}

void func_0003E898(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
}

void func_0003E8A8(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E8D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E954);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003E9D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EA1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7508);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7540);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7548);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7588);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EA60);

void func_0003EAB0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
}

void func_0003EAC0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
}

void func_0003EAD0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EAF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EB54);

void scePaf_7C2C2742(void) {
    sceGuStart(0, D_000E17A8, D_000E17AC);
}

void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EC3C);

M2C_UNK *scePaf_B0C3E598(void) {
    return &D_000E17B4;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_000E1044 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003ECA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EDF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_81773E1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EFA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003EFF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F07C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F38C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F408);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F458);

s32 func_0003F488(void) {
    return D_000E1768;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F494);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F504);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F58C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F5B4);

s32 func_0003F624(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1788;
    D_000E1788 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F634);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F674);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1048;
    D_000E1048 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F784);

void func_0003F904(void) {
    func_0003F784(1, 0xFFFF);
}

void func_0003F924(void) {
    func_0003F784(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F944);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003F998);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FB5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FC48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FCBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FDCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FE8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FEF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FF08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FF48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FF70);

s32 func_0003FFAC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E104C != arg1) {
        var_v0 = func_00042B80(arg0, arg1);
    }
    return var_v0;
}

s32 func_0003FFD8(void) {
    return D_000E104C;
}

s32 func_0003FFE4(void) {
    return D_000E104C;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0003FFF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004003C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000400E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2FF0A287);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D75B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D75C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D75C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004028C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FF74C932);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000403DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040514);

s32 func_00040774(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1B8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004077C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040808);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000408AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000408D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000408E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040920);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040A0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040A80);

void func_00040B40(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}

s32 func_00040B4C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040B54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2313DDCA);

void func_00040B94(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D1940;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg1 & 0xFFFF) | 0x410000);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00040BBC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D1940;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg1 & 0xFFFF) | 0x410000);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E9BF6BEB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040C54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040CD0);

void func_00040D38(s32 arg0) {
    scePaf_3E203AEB(D_000E1F08, 0, arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040D60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040D88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D75E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040DB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040E24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040E84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00040EB8);

void func_00040FEC(void) {
    if (D_000E1ECC != NULL) {
        func_00041A98(*D_000E1ECC);
        scePaf_545FE2DA(D_000E1ECC);
        D_000E1ECC = NULL;
    }
    sceFontDoneLib(D_000E1EBC);
    D_000E1EBC = 0;
    if (D_000E1F00 != 0) {
        func_000881D4(D_000E1F00);
        D_000E1F00 = 0;
    }
    if (D_000E1F08 != 0) {
        scePaf_8A861692(D_000E1F08);
        D_000E1F08 = 0;
    }
    if (D_000E1EFC != NULL) {
        scePaf_545FE2DA(D_000E1EFC);
        D_000E1EFC = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F8301DBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000410FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004115C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000411AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7634);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7640);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7650);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000411FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041250);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000412A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004132C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000413B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000414B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041728);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004175C);

void func_0004177C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
    func_00041BE0();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000417AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000417D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004190C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041B10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041BE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041C8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041D80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041DA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041DD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041E00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041E30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_462E5873);

s32 func_00041E6C(s32 arg0) {
    return func_00041E8C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041E8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00041F6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042054);

void func_00042100(void) {
    func_00042054(1, 0xFFFF);
}

void func_00042120(void) {
    func_00042054(0, 0xFFFF);
}

s32 *func_00042140(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000421EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042178);

void func_000421A8(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000421EC(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_000423B4(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000421EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042244);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000423B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000425E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042718);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042798);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042960);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000429B4);

void func_00042A08(void) {
    func_00042A24();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042A24);

void func_00042A7C(void) {
    func_00042A98();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042AC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042B80);

s32 func_00042B94(void) {
    return D_000E1090;
}

s32 func_00042BA0(void) {
    return D_000E1090;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042BAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042C58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042D04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042D70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00042DDC);

void func_00042E4C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_65920294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_37DDBDD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00043008);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A4F53FED);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004316C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1AD33D73);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DF887DED);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_92A46B32);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_905347E9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_585B93BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DC544921);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00043550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_39C55C03);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F47CA1C2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4E60E34C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00043A40);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00043CC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00043DB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DDA68BE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EAA5AFF6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3F81333A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000440BC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044194);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3C68DCB7);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000442F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000443B8);

void func_00044450(void) {
    func_000443B8(1, 0xFFFF);
}

void func_00044470(void) {
    func_000443B8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044490);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044510);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044520);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004459C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044698);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000447A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000448F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000449D0);

void ***func_00044A7C(void ***arg0, void *arg1, void **arg2) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044AE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044B20);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7690);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D76D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044B78);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D76F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7700);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7710);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7720);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7724);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7730);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7758);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D775C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7764);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7768);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D776C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00044E40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045110);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045198);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000451D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004520C);

void func_000452E0(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x8C);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x98)(temp_a0, 0x12, arg0 + 0x60);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045310);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045334);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004540C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045AD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045D94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045E3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045E44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00045F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046060);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046150);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046280);

void func_000463D4(void) {
}

void func_000463DC(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000463E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004648C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046540);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046578);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004662C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004664C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046694);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046888);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000469D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046AC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046BF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00046D58);

void func_00047124(s32 arg0) {
    func_000481B0(arg0 + 0xAC);
    func_0004540C(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6741C662);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_26DF747F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004722C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_09AC6844);

void func_00047288(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047290);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000473D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_41BCFB59);

void func_00047530(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD8) = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00047588(arg0, arg1, arg2, 0, arg3, (s32) &D_000E1094, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00047588(arg0, arg1, arg2, arg3, arg4, (s32) &D_000E1094, arg5);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047588);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6840D208);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F1546D14);

void scePaf_607713A6(s32 arg0) {
    D_000E1100 = arg0;
}

void func_00047BB4(s32 arg0) {
    D_000E1F28 = arg0;
}

void scePaf_5EFC5387(s32 arg0) {
    D_000E1F2C = arg0;
}

void scePaf_DFC8650C(s32 arg0) {
    D_000E1F30 = arg0;
}

void func_00047BD8(void *arg0, M2C_UNK *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xEC) = arg1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xEC) = &D_000E1094;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5DE0445F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FE575092);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6C3BBB68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047F00);

void func_00047F80(void) {
    func_00047F00(1, 0xFFFF);
}

void func_00047FA0(void) {
    func_00047F00(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047FC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00047FD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048010);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048020);

void ***func_00048060(void ***arg0, void *arg1, void **arg2) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000480C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004813C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000481B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004824C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000482CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004838C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004844C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048488);

void func_000484E0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_00048500(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D77C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D77C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004851C);

void func_0004874C(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000487AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000487D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048804);

void func_000488EC(void) {
    func_000515A4();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000489A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A69BABE3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048A24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048AB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048B08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048B70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048C48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048C78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048CEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048DE8);

void func_00048DF8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_0004922C((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048E2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00048F80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049178);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004922C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049358);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000493D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049444);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000494B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D77D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D77D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D77E0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7860);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D78E8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7920);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D799C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7A1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7AA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7ADC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7B58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049554);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000496C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049834);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049898);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000498FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049968);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000499C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049D40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049DA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049E08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049EAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00049FE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A0A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A184);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A290);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A5A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A65C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A6D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A76C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004A7D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004AC28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B43C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_14CE7F6F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B508);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B5D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B644);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B6BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B744);

void func_0004B880(void *arg0, s32 arg1) {
    func_0004B8A0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x15C), arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B8A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B99C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004B9F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004BB04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004BC50);

s32 func_0004BE34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x188) == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004BE40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004BF08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004BFE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C098);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C310);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C4D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C594);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C5FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C6E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C7A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C7B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C884);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004C958);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CC50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CD70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CDAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CE04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CE60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004CF60);

void ***func_0004D058(void ***arg0, void *arg1, void **arg2) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D0C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D140);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D1D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D22C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D2AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D364);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D3B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D3C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D3D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D4D0);

void func_0004D5E8(void) {
    func_0004D604();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D67C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7C38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004D8F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004DA80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004DFFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E188);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E1D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E228);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E344);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E470);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E50C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E5E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E830);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004E9AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004EB48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004EB9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004EC48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004ECF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F158);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F414);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F574);

s32 func_0004F5D4(void *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    if ((var_v1 < arg2) && (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x14))) {
        func_00050290(arg0, 3);
        var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    }
    return var_v1 < arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F6EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F7FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004F8EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004FAC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004FD48);

void func_0004FF24(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) || (M2C_FIELD(arg0, u8 *, 0x44) == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_0004E9AC(M2C_FIELD(arg0, s32 *, 8), arg3, arg1, arg4, arg5, arg6);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0004FFCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050088);

void func_00050144(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000501E4);

s32 func_00050290(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (arg1 < var_v1) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000502B0);

void func_000503E0(void) {
    func_000502B0(1, 0xFFFF);
}

void func_00050400(void) {
    func_000502B0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050420);

void func_0005045C(void **arg0) {
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

void func_000504B4(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050510);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005059C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000505AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000505EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000506E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050844);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000509A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050A30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050A84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050B3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050C88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050D54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050DE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050EC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050F04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050F60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00050FE0);

void ***func_0005106C(void ***arg0, void *arg1, void **arg2) {
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

void func_000510D4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D7E70;
    scePaf_1B043852(arg0 + 0x28);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
    func_00051184((s32) (arg0 + 0x14));
    func_00051184((s32) (arg0 + 8));
    scePaf_E977B833((s32) arg0);
}

void func_00051128(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D7E70;
    scePaf_1B043852(arg0 + 0x28);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
    func_00051184((s32) (arg0 + 0x14));
    func_00051184((s32) (arg0 + 8));
    scePaf_E977B833((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051184);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7CA0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7CA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7CA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7D08);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7D38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7D40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7DC0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7E50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7E5C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7E70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000511DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000512A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000513B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000515A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000515B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000515BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000515C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000515D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051794);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000517D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EF0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7EFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7F00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000517FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051894);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051A70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051AA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051AE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051B20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051B94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00051BF8);

void func_00051C20(M2C_UNK **arg0) {
    *arg0 = &D_000D7F58;
}

void func_00051C30(M2C_UNK **arg0) {
    *arg0 = &D_000D7F58;
    scePaf_4E67BB08(arg0);
}

void func_00051C58(void) {
}

s32 scePaf_5CA7F421(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1220 != arg1) {
        var_v0 = func_0003FFAC(arg0, arg1);
    }
    return var_v0;
}

s32 func_00051C8C(void) {
    return D_000E1220;
}

s32 scePaf_BAA88CDA(void) {
    return D_000E1220;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7F58);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7F68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7F74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D7F80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_87516C3B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_84485F54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_715E8DAB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000523E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000524CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D35B454A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4DB0D5D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8AB03D91);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A89157EE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5045C01F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BDC894D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_72514A05);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00052A78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_50FFFCD2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A88CBB4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00052F88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_47E35A50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_41A7BDD2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00053194);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00053224);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D587826C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_61B105C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B6841F37);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000534E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3A4934E3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x234) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x238) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x23C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    func_00054270((s32) arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0C66B594);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_206C1F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000539F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9563887D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00053B60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_21B885B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00053FF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054270);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054334);

s32 scePaf_360956CC(void *arg0, void *arg1) {
    u8 temp_a2;

    func_00043008();
    temp_a2 = M2C_FIELD(arg1, u8 *, 8);
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {

        } else {
            func_00054964(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_39F89900);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1F0B8678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5DB527D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_25391E36);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054964);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000549FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054A94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054B30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054BCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054C28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054CC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054D58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054DA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00054E40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_927854C5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D02C0D2E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_222526B6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_33096E46);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EF52945B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3F52824F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_672036FE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1C286704);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2E6CA751);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_01A35C15);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B42D784E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_470ABD60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_08A02EFF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_29DC646F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4FCA0DE9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2A6499A5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D07AF3FA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BAFF6806);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FCF42D6D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_AA978F61);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E796C85B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CFF2B69C);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DB230BE1);

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
        func_000671E0(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005597C);

s32 func_00055A8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055A94);

s32 func_00055AE8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055AF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055B10);

void func_00055B44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055B4C);

void func_00055B6C(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055B88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055BA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055BC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055C04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055C44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055C80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055CC0);

void func_00055CE4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_00055D08(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_00055D2C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055D50);

void func_00055D74(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_00055D98(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_00055DBC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055DE0);

void func_00055DFC(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055E18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055E34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055E50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055E90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055ED0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00055F10);

void func_00055F50(void) {
}

s32 func_00055F58(void) {
    return -1;
}

s32 func_00055F60(void) {
    return -1;
}

s32 func_00055F68(void) {
    return -1;
}

s32 func_00055F70(void) {
    return -1;
}

s32 func_00055F78(void) {
    return 0;
}

s32 func_00055F80(void) {
    return 0;
}

s32 func_00055F88(void) {
    return 1;
}

void func_00055F90(void) {
}

s32 scePaf_EB553D60(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1224 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00055FC4(void) {
    return D_000E1224;
}

s32 scePaf_65C19AC0(void) {
    return D_000E1224;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CDC81771);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F1649F5B);

void scePaf_C1FAF826(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
}

void func_0005615C(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
}

void func_00056184(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8BA04801);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_93A60B78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_AEE1CBAD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_19A779E2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000564BC);

s32 func_000564E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1228 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00056514(void) {
    return D_000E1228;
}

s32 func_00056520(void) {
    return D_000E1228;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005652C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000565C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056654);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000566A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8000);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D80D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8168);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8174);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8188);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8258);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8264);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056A48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056BD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056C30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056C88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4FF65BDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056D1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056D38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056EE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00056FC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057048);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000570B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000571F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057324);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057360);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000573C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000573D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057418);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057484);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057510);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005758C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057618);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000576B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000578B0);

s32 func_00057978(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E122C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000579A4(void) {
    return D_000E122C;
}

s32 scePaf_CAE6374A(void) {
    return D_000E122C;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D82AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D82C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D82D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D83C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000579BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E6C072E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057B5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057BA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057C30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057D80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00057DDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005816C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000581C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058228);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058280);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000582CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058318);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005854C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058744);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058938);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058B30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058D14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00058FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_66B35152);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D2463C79);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059350);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_58CAE908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9DD9CA07);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059600);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005976C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059AB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059BE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059E1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00059FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A200);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A2DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A55C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A5EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A650);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A8BC);

void func_0005A954(void) {
    func_0005A8BC(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A974);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A984);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A9E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005A9F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AA38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AA8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AB20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AB94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005ABD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AC54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005ACE4);

void func_0005AD50(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0005AD94((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AD94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AE7C);

s32 func_0005AF6C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1230 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005AF98(void) {
    return D_000E1230;
}

s32 scePaf_9C9B6732(void) {
    return D_000E1230;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005AFB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005B034);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005B0B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005B154);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005B1F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8450);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8520);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D852C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005B294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DF9138A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_78054045);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_95DA7A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BB18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BBEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BC9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BCDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8540);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8548);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D854C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8550);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8554);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8558);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D855C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8560);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8564);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8568);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D856C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BDA4);

s32 func_0005BF74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x330) == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005BF80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C1A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C234);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C260);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C28C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C2E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C33C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C368);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C394);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C3C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C3EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C460);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C4D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C55C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C5C8);

s32 func_0005C5F4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1234 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005C620(void) {
    return D_000E1234;
}

s32 func_0005C62C(void) {
    return D_000E1234;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C638);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D2E0D705);

void func_0005C768(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
}

void func_0005C790(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_0005C7C8(void *arg0) {
    func_0007499C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

s32 func_0005C7E4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x148);
}

void func_0005C7F4(void *arg0) {
    func_0004A6D8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_6E1B5B50(void *arg0) {
    func_0004BF08(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void func_0005C834(void *arg0) {
    func_0004BE40(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C854);

void scePaf_BFFAEE83(void *arg0) {
    scePaf_14CE7F6F(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9AFD4AD4);

void func_0005C894(void *arg0) {
    func_0004C754(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_7116224C(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x194) = arg1;
}

void func_0005C8C4(void *arg0, s32 arg1, s32 arg2) {
    func_0004A76C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20), arg1, arg2 & 0xFF);
}

s32 func_0005C8E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1238 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005C914(void) {
    return D_000E1238;
}

s32 func_0005C920(void) {
    return D_000E1238;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8580);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8590);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8660);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8678);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D874C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8754);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8774);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8794);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D87B4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D87D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D87F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005C92C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005CBB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005CE3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005CFB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D12C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D2AC);

s32 func_0005D398(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 2U) || (M2C_FIELD(arg0, u8 *, 0x331) != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, u8 *, 0x331) = 0U;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D3E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D4A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D5BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D81C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D8B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D980);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005D9E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005DA30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005DA6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005DD40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005E014);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005E2E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005E5BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005EC2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A76B9604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5075C799);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005F20C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005F2A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005F498);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A72594EF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_7B6F0E32);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0005F800);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F88ABAE1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_522A877E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BEF0151C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000600A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E1C76B22);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00060358);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00060508);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000607D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006089C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000609D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00060BA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00060D24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00060FD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000610A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000610F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00061104);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00061168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006129C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000612F0);

void func_00061368(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00040A80((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000613AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006149C);

s32 func_0006152C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E123C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00061558(void) {
    return D_000E123C;
}

s32 func_00061564(void) {
    return D_000E123C;
}

void scePaf_6DD28F44(void) {
    func_00074B60();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006158C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4ADAEF94);

void func_000616AC(M2C_UNK **arg0) {
    *arg0 = &D_000D8990;
    scePaf_715E8DAB((s32) arg0);
}

void func_000616D4(M2C_UNK **arg0) {
    *arg0 = &D_000D8990;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void scePaf_95708BC0(void *arg0) {
    func_00074E7C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DEF9EBE7(void *arg0) {
    func_00074E84(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_C85155C9(void *arg0) {
    func_00074E8C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_F23F3226(void *arg0) {
    func_00074E94(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D153385E);

void scePaf_86A5AE7D(void *arg0) {
    func_00074EA4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_5A8D4BDB(void *arg0) {
    func_00074ED8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2120282A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8159EB28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5CE11C03);

void scePaf_05073826(void *arg0) {
    func_00074EF8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A4B48F00);

void scePaf_224C33F0(void *arg0) {
    func_00074F08(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3DBE861F);

void scePaf_FA78AF39(void *arg0) {
    func_00074F18(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A3761F27);

void scePaf_DE75C2BA(void *arg0) {
    func_00074F2C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4129A915);

void scePaf_8A51BA1E(void *arg0) {
    func_00074F3C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_0FFA3ECE(void *arg0) {
    func_00074F44(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_89582FD0(void *arg0) {
    func_00074F4C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_84913A3A(void *arg0) {
    func_00074F54(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00061978);

void func_00061A98(M2C_UNK **arg0) {
    *arg0 = &D_000D8A68;
    scePaf_4E67BB08(arg0);
}

s32 func_00061AC0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1240 != arg1) {
        var_v0 = func_0005C8E8(arg0, arg1);
    }
    return var_v0;
}

s32 func_00061AEC(void) {
    return D_000E1240;
}

s32 scePaf_7C31F453(void) {
    return D_000E1240;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8884);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8898);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8970);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8978);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8980);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8990);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8A68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8A74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8A80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00061B04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F60816FE);

void func_00061EF4(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}

void func_00061F1C(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}

void func_00061F44(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00061F7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062134);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062364);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062488);

s32 func_00062764(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_0005D8B4(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_00063A1C(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000627A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062840);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000628D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062914);

void func_00062968(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005DD40(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}

void func_000629B4(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E014(arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}

void func_000629FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E2E8(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062A48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062A90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062AD8);

s32 scePaf_6141934B(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_0005F20C(arg0, arg1);
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x700);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062BD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062C8C);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00062F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D5F5E68F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000632C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000636C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063850);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063994);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063A1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063C64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00063E8C);

void func_00063FE4(void) {
    func_0005D9E4();
}

s32 func_00064000(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E126C != arg1) {
        var_v0 = func_00067C4C(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006402C(void) {
    return D_000E126C;
}

s32 scePaf_9A8E343E(void) {
    return D_000E126C;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064044);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D1159069);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006420C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000642C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006437C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8BE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8BF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CD4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CD8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CF0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8CF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006443C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064AA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064B74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064BBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064CF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064D3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064E20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00064F08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000650BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000651A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_AE02F241);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_95040C08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_07BA4C80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_252F37A3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006598C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006599C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000659DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000659EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065A2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065A3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065B24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065C14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065D04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065DC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065E88);

void func_00065F48(void) {
    func_00068F38();
}

void func_00065F64(void) {
    func_00068FD4();
}

s32 func_00065F80(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1270 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00065FAC(void) {
    return D_000E1270;
}

s32 scePaf_CEAC29F3(void) {
    return D_000E1270;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00065FC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_275BCDC6);

void func_0006617C(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    scePaf_715E8DAB((s32) arg0);
}

void func_000661A4(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_000661DC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1274 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066208(void) {
    return D_000E1274;
}

s32 scePaf_503FA456(void) {
    return D_000E1274;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8D50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8E20);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8E30);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8F04);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8F10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066220);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000662FC);

void func_00066414(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D8F40;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x370));
    scePaf_715E8DAB((s32) arg0);
}

void func_00066450(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D8F40;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x370));
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066494);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B104EC1B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4E62343D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3CEDE012);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_85696453);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6E94BA7B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_18D51B42);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_03064559);

void scePaf_2A5DDF04(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x3F8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066980);

s32 func_000669F4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1278 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066A20(void) {
    return D_000E1278;
}

s32 scePaf_256218C2(void) {
    return D_000E1278;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8F2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D8F40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9010);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9018);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9024);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066A38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_C8FD64AA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066DB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066E10);

void func_00066E74(void **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0x60)(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00066EB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_79C3CBF7);

s32 func_000670A0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x554);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000670A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067120);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000671BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000671E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067230);

s32 func_000672AC(s32 arg0, M2C_UNK arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80005, arg1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000672F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067304);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067344);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067430);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000674A4);

s32 func_00067564(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E127C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00067590(void) {
    return D_000E127C;
}

s32 scePaf_F7FB133E(void) {
    return D_000E127C;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9040);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9050);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9120);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000675A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_57AF63CE);

void func_00067728(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    scePaf_715E8DAB((s32) arg0);
}

void func_00067750(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2D94D547);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_752AB253);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_12D445E1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000679A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067A64);

void scePaf_C07B7162(void *arg0) {
    func_00077BCC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067AA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067BEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067C4C);

s32 func_00067C78(void) {
    return D_000E1280;
}

s32 scePaf_5A818E41(void) {
    return D_000E1280;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D913C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9150);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9220);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9228);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9298);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D92B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D92D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D92F8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9318);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067C90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00067FB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000682D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068440);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000685B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068728);

s32 func_000689C4(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 4U) || (M2C_FIELD(arg0, u8 *, 0x331) == 0) || (M2C_FIELD(arg0, s32 *, 0x1EC) != 5)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, s8 *, 0x334) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068A1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068B64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068CE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068DC4);

s32 func_00068E5C(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F(arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x5B0, 0xD, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068EE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068F38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068F88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00068FD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069010);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069124);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069238);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069340);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069454);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000695A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000695E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069648);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8DB4B066);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_C2C25056);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_06EA7CDE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A9970EF5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000698E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006996C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006998C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069BB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069C98);

void func_00069CF8(void) {
    func_00069C98(1, 0xFFFF);
}

s32 func_00069D18(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1284 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00069D44(void) {
    return D_000E1284;
}

s32 scePaf_96C46364(void) {
    return D_000E1284;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069D5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2A2EB136);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00069E74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D93A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9470);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BB457D6F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0ED80B09);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_777635B9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_70BECA15);

void func_0006A0D0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_3F52824F((s32) arg0, arg1, arg2 & 0xFF);
}

void func_0006A0F4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_672036FE();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006A118);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006A140);

void func_0006A168(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_DB230BE1();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D1EE972C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E732CF74);

void scePaf_FA758B05(void *arg0) {
    func_00078438(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_608F02C6);

s32 scePaf_DC8B0309(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00078498(temp_v0);
    }
    return var_v1;
}

s32 scePaf_FA87D725(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_000784B0(temp_v0);
    }
    return var_v1;
}

s32 scePaf_409E25A3(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_000784C8(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_64775957);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FC37FABD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_79F4AE65);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B6F52424);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BA6B8B02);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4D810FDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_ABCBC1C5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B2ED6CAA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1232B7A3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006A528);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_37DD37B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B9BE69FD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8D7FC7DB);

void scePaf_905CF2A7(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00078748(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00078760(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00078798(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B711DC69);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_ECE59E24);

void scePaf_A574DB92(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00078850(temp_v0);
    }
}

void scePaf_F639E5E1(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00078880(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_7F2442DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006A8CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006AA1C);

void func_0006AA5C(M2C_UNK **arg0) {
    *arg0 = &D_000D9490;
    scePaf_715E8DAB((s32) arg0);
}

void func_0006AA84(M2C_UNK **arg0) {
    *arg0 = &D_000D9490;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0006AABC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1288 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006AAE8(void) {
    return D_000E1288;
}

s32 scePaf_3291BDDD(void) {
    return D_000E1288;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006AB00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_15EF8E18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006AD24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006ADF8);

s32 func_0006AED4(void) {
    scePaf_1AD33D73();
    return 1;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D947C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9490);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_293A01D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006AF3C);

void func_0006AF84(void) {
}

void func_0006AF8C(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CFB1A402);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5D7F1F27);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_AD007AB6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_73D49419);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B090);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B1C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3987B5C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_369E597A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B418);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B448);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B478);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B4A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_695BCD34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_45386654);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B578);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B5C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006B610);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CB65103E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_515EE222);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F89ECA28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4AF8E417);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_76D5A950);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BA5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BBD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BC30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BC8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BCDC);

s32 func_0006BD2C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00081478(temp_v0);
    }
    return var_v1;
}

s32 func_0006BD64(void *arg0, s32 arg1) {
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
        func_0007CDB4(temp_v1, arg1 & 0xFF);
    }
}

void func_0006BE14(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_000814CC(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BE44);

void func_0006BEA0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_0007EE24(temp_v0);
    }
}

s32 func_0006BED0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E128C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006BEFC(void) {
    return D_000E128C;
}

s32 scePaf_DAD477C1(void) {
    return D_000E128C;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D95D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D95E8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D96B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D96C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D96D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9744);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D974C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9770);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9788);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006BF14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C0CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C398);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C4AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C5C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C79C);

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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006C834);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CB7B666E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_ADC146F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D5A254F9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A18DB948);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006CFE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0FB7D433);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F554C7C7);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5ACFC2EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_42F43213);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5D242D11);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E3F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E520);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E650);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E7C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E8BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006E9B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006EB84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_84A71447);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006ED54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006EE30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006EFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F1BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F34C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F710);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F874);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006F9F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0006FB54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_DA3A6D88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9D92765E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D7074BD1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FDB39519);

void func_0006FFF4(void) {
    scePaf_47E35A50();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0C6EEA21);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5458E412);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D91B2651);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_1943B875);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FE84212F);

void scePaf_43374E9E(void) {
    scePaf_0C6EEA21();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000703E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_199896A3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00070550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00070580);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A02E66FA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_70B92642);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_05EEE8A6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F49F3C59);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000707BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_32B27ADD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_A7818BCE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2D79697E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EDF1C662);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_C4D819AA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00070BE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_63EA1815);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_447974D1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00070E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00070E58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_11361F12);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_51FF9D24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B77039E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9430557B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6797988C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_449C8821);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_470470A6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BC0E5C5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8E751FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F32223AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_98A6C193);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BD49CAEF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6C4976AF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_85112756);

s32 scePaf_C933B3C5(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x35C);
    M2C_FIELD(arg0, s32 *, 0x35C) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000714A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EFAC3E9F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2D0E2A03);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071718);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071794);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000718F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000719FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071AE0);

void func_00071BF0(void) {
}

s32 func_00071BF8(void *arg0, s32 arg1) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071C4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071C88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071CE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071D1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071D74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071DF4);

void ***func_00071E74(void ***arg0, void *arg1, void **arg2) {
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

void ***func_00071EDC(void ***arg0, void *arg1, void **arg2) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071F44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00071FC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D98A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D98B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072054);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F6F3E99E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007227C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072338);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072388);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072450);

void func_000724F8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x30, 0x12, arg1);
    scePaf_D6232F26(arg0 + 0xF0, 0x12, arg1);
    func_00073A14(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000726C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000727DC);

void func_0007286C(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x24);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x28)(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072894);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000728CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000729C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072AC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072BDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072D18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072E2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D99B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072F40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00072FF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000730A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007315C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073210);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073288);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073300);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000733A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073450);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073500);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000735EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073640);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073714);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000738B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073930);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073A14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073AA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073CF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073DEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00073F1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074018);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074110);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000741D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000742A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074360);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007441C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000744B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074554);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000745F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074730);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074830);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007488C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000748F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007499C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000749E4);

void func_00074A04(void *arg0) {
    func_0004A0A4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074A20(void *arg0) {
    func_0004A184(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074A3C(void *arg0) {
    func_0004A290(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074A58(void *arg0) {
    func_00049D40(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074A74(void *arg0) {
    func_00049DA4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074A90(void *arg0) {
    func_00049E08(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074AAC(void *arg0) {
    func_00049EAC(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_00074AC8(void *arg0) {
    func_0004A5A4(M2C_FIELD(arg0, s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074AE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074B10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074B34);

void scePaf_8DEB3DB3(void) {
}

void scePaf_BA09CF46(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074B60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074B68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074BEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074C70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074D14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074DB8);

void func_00074E64(void) {
}

s32 func_00074E6C(void) {
    return 0;
}

s32 func_00074E74(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074E7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074E84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074E8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074E94);

void func_00074E9C(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074EA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074ED8);

void func_00074EE0(void) {
}

void func_00074EE8(void) {
}

void func_00074EF0(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074EF8);

void func_00074F00(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F08);

void func_00074F10(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F18);

void func_00074F24(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F2C);

void func_00074F34(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074F54);

void func_00074F60(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00074FA0();
}

void func_00074F80(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00074FC8();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074FA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074FC8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9AB8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9B50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9B60);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9BF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00074FF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000750F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075124);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007519C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075238);

void func_000752DC(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075300);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075350);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075394);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000753D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007541C);

s32 func_00075460(void *arg0, s32 arg1) {
    func_0000AC60(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075488);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000754F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075524);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000755C0);

void func_00075664(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075688);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000756D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007571C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9C98);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9D38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075760);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075960);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075B1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075C44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075D6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075E9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075EDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00075FFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007611C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076234);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076464);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076514);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000765D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000765F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076718);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9E00);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9E90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076800);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076A3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076C78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00076EB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000770F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077340);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EB0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EB4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EB8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EBC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EC0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9EC8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9ECC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9ED0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077380);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007748C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000775A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000776AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000777B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077914);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077ABC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077B8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077BAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077BCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077BDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077CFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077DD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077E5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077EE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077F34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077F80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00077FD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007804C);

s32 func_000780C0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_0004A0A4(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x10)(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00078134(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_0004A290(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x18)(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000781A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000781DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078254);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000782CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078300);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078334);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078368);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007839C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000783D0);

void func_00078408(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_0004B43C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078438);

void func_00078450(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        scePaf_14CE7F6F(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078480);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078498);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000784B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000784C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000784E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078514);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078548);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007857C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000785B0);

void func_000785E4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_0004B744(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078614);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007862C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078644);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000786AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000786E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078714);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078748);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078760);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078798);

void func_000787D0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_0004C4D8(temp_v0);
    }
}

s32 func_00078800(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000417AC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078838);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078850);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00078894);

void scePaf_D4C6CC7A(void *arg0) {
    M2C_FIELD(&D_000E2000, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_000E2000, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_000E2000, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_000E2000, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000D9FA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000788F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00079088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00079CA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007A138);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007A5D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007A714);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007A86C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007AACC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007AD9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007B040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007B4FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007B728);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007B818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007BB34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007BD44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007BE90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007C2D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA2EC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA2F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA2F4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA2F8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA2FC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA300);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA304);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA308);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA30C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA310);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA314);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA318);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA31C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA320);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA324);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA328);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA32C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA330);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA334);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA338);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA33C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA340);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA344);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA348);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA34C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA350);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA354);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA358);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA35C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA360);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA364);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA368);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA36C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA370);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA374);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA378);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA37C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA380);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA384);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA388);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA38C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA390);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA394);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA398);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA39C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3A4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3B4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3BC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3C8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3CC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3DC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3E0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3E4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3E8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3EC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3F4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3F8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA3FC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA400);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA404);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA408);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA40C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA410);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA414);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA440);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA45C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007CCB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007CDB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007D294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007D350);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007D4A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007D6F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007D84C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007DF20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007DF74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007E0CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007E234);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007E38C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007E4E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007E638);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007EE24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007EEE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0007FDC4);

void func_000813F0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x14F0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14F4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14F8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14FC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00081414);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00081478);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000814CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000815B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00081810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00081944);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00081FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082654);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000826B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008275C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082874);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082A28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082BE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082C18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082D88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082DD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00082E78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008304C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083510);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083948);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000839E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083A88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083B28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00083BC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00084058);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00084464);

void func_000844BC(void) {
    func_00084464(1, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DA930);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000844DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00084A54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008519C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008536C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA3C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA44);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA48);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA4C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA58);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA5C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA60);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA64);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA6C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA70);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA78);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA80);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA84);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA8C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA90);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAA94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085544);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008567C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000856F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085760);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000857A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000858D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085984);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085A30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085AD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085E08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085EB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00085F64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00086008);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000860B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00086B18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00086F48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008737C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087494);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087574);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087740);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000877E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087920);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087A88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087B28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087BCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087C70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087D14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087DB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087E5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087F00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00087FF4);

s32 func_00088170(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088178);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000881D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088218);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088280);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000882DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088354);

void func_000883DC(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_0008841C((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008841C);

s32 func_000884E8(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
        if ((M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_00088534(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00088554(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088664);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000886C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088790);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088860);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088930);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088A00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088A7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088AF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088B74);

s32 func_00088BF0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1290 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00088C1C(void) {
    return D_000E1290;
}

s32 func_00088C28(void) {
    return D_000E1290;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088C34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088CB4);

void func_00088D5C(M2C_UNK **arg0) {
    *arg0 = &D_000DACA8;
    scePaf_715E8DAB((s32) arg0);
}

void func_00088D84(M2C_UNK **arg0) {
    *arg0 = &D_000DACA8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00088DBC(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

s32 func_00088DC8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1294 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00088DF4(void) {
    return D_000E1294;
}

s32 func_00088E00(void) {
    return D_000E1294;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088E8C);

void func_00088F34(M2C_UNK **arg0) {
    *arg0 = &D_000DAD98;
    scePaf_715E8DAB((s32) arg0);
}

void func_00088F5C(M2C_UNK **arg0) {
    *arg0 = &D_000DAD98;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00088F94(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00088FA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089000);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089060);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000890FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089198);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008923C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000892A8);

void func_000892C8(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_000892E4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00089300(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_0008931C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00089338(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_00089354(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00089370(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008938C);

s32 func_000893C0(void *arg0, s32 arg1) {
    func_0000AC60(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_000893E8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008940C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008946C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000894CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089568);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000896A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089714);

void func_00089734(s32 arg0) {
    func_0003DE84(arg0 + 0x20);
}

void func_00089750(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_0008976C(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00089788(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_000897A4(s32 arg0) {
    func_0003DEDC(arg0 + 0x20);
}

void func_000897C0(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_000897DC(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000897F8);

s32 func_0008982C(void *arg0, s32 arg1) {
    func_0000AC60(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_00089854(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089878);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_6147E3D5);

void func_000898F0(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void scePaf_1B043852(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_0B0959FC);

void scePaf_CA5EF446(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 4), 1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000899A8);

void func_000899CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFA0, 0x200U, 3U, NULL);
}

void scePaf_B884B031(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFA0, 0x200U, 3U, NULL);
}

void func_00089A54(s32 *arg0) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089B88);

void func_00089C04(void) {
    func_00089B88(1, 0xFFFF);
}

void func_00089C24(void) {
    func_00089B88(0, 0xFFFF);
}

void func_00089C44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFB4, 0x200U, 3U, NULL);
}

void func_00089C84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFB4, 0x200U, 3U, NULL);
}

void func_00089CC4(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089CE0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089CFC(void *arg0) {
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

void func_00089D68(void *arg0) {
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

void func_00089DD0(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00089E14(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

void func_00089E34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFC0, 0x200U, 4U, NULL);
}

void func_00089E7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000DAFC0, 0x200U, 4U, NULL);
}

void func_00089EC4(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089EE0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089EFC(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00089FF0);

void func_0008A06C(void) {
    func_00089FF0(1, 0xFFFF);
}

void func_0008A08C(void) {
    func_00089FF0(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DABF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAC90);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DACA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAD7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAD98);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAE78);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAF10);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAFA0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAFB4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAFC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_96857E81);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_E977B833);

void func_0008A21C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000DAFE8;
    sceKernelDeleteThread(M2C_FIELD(arg0, u32 *, 4));
}

void func_0008A244(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000DAFE8;
    sceKernelDeleteThread(M2C_FIELD(arg0, u32 *, 4));
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_80E521C5);

void func_0008A2AC(void) {
    sceKernelExitThread(0);
}

void scePaf_5775283A(void *arg0) {
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A2E8);

s32 func_0008A314(void *arg0) {
    M2C_FIELD(&D_000E202C, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_000E202C, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_000E202C, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_000E202C, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_000E202C, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_000E202C, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_000E202C, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(&D_000E202C, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    return 0;
}

M2C_UNK *func_0008A364(void) {
    return &D_000E202C;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_36CB5601);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5B202AED);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A400);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_669DE9B1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_50DC7446);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A4B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DAFE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_BA32D6E6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A568);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A5B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A5F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EAB7BD23);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A6D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A700);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A758);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A790);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A854);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A8AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A954);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A994);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008A9D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008AAAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_CAF82B9B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008ABE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008AC5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008ACD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008ADCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008AEC8);

s32 func_0008AFB0(s32 arg0) {
    func_0008B720();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008AFD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B0D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B1D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B328);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B358);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B3B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B410);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B47C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B4D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B65C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B6F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B720);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B8F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008B988);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008BC6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008BE14);

M2C_UNK *func_0008BEEC(void) {
    return &D_000E2050;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008BEF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008BF2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008BF8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C0D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C118);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C1BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C260);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C304);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C394);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C424);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C4B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C5E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C684);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C6B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C718);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C7A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008C9C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CA74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CC24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CC94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CCCC);

s32 func_0008CD8C(s32 arg0) {
    func_0008A9D8();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CDB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CE5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008CFF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D21C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D330);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D440);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D4A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D608);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D76C);

void func_0008D800(void) {
    func_0008D76C(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D820);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D878);

void func_0008D8D0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000DB0D8;
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {

    } else {
        func_000CAF7C(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x68));
    }
    func_0008E7A4((s32) arg0);
}

void func_0008D93C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000DB0D8;
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {

    } else {
        func_000CAF7C(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x68));
    }
    func_0008E7A4((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008D9A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DBB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DD44);

void func_0008DD88(void *arg0) {
    s32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x50);
    if ((temp_a4 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) < 4U)) {
        if (D_000E20A0 == 0) {
            sceGuDispBuffer((s32) M2C_FIELD(arg0, s16 *, 0x18), (s32) M2C_FIELD(arg0, s16 *, 0x1A), temp_a4 + (M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x42)) + 0xFC000000, (s32) (M2C_FIELD(arg0, s32 *, 0x3C) * 8) >> M2C_FIELD(arg0, s32 *, 0xC));
            D_000E20A0 = 1;
        }
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DE0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DEA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DF10);

s32 scePaf_08DD2D50(void *arg0, s32 arg1) {
    return (s32) ((arg1 << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008DF90);

void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0008E024(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

void func_0008E040(s32 arg0, s32 arg1) {
    func_00091848((s32) &D_000E20E8, arg0, arg1);
    D_000E20C8 = 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008E078);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008E13C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_35F003C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_FB3A9617);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008E634);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008E7A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008E8E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008EA2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB0C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB0D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008EB78);

s16 scePaf_0598FFD6(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        return M2C_FIELD(arg0, s16 *, 0x42);
    }
    return M2C_FIELD(arg0, s16 *, 0x44);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008EC24);

s32 func_0008ED14(void) {
    return 0x67;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008ED1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008ED90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5C4BF618);

void func_0008EE64(s32 arg0) {
    func_0000ACD8(arg0 + 0x60, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008EE84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008EF28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_5EE76FC5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_3684D457);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_846E1F0A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_21DBFF5B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008F7AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008F7F0);

s32 func_0008F824(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (var_v0 == 0) {
        var_v0 = func_000918E4((s32) &D_000E20E8, 1 << M2C_FIELD(arg0, s16 *, 0x54), M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x50) = var_v0;
    }
    return var_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008F880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008F8DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008F974);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_EBDC149C);

void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0008FC24(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008FC40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_4AB0D3F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0008FE28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_9122393C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090078);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB100);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB110);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB130);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB140);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090100);

void func_0009021C(void) {
    func_00090100(1, 0xFFFF);
}

void func_0009023C(void) {
    func_00090100(0, 0xFFFF);
}

void func_0009025C(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
    scePaf_4E67BB08(arg0);
}

void func_00090284(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
}

void func_00090294(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
}

void func_000902A4(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000902CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_93538664);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090714);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000907CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090878);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009090C);

void func_000909B8(void) {
    func_0009090C(1, 0xFFFF);
}

void func_000909D8(void) {
    func_0009090C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000909F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090A78);

void ***func_00090B04(void ***arg0, void *arg1, void **arg2) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090B6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090BA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_2F3C4ED2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090C18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090D58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090DEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090E68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090EC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_952CE8AF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090F90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00090FB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091020);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000912EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000915C8);

s32 func_0009166C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) * (3 - M2C_FIELD(arg0, s32 *, 0x1C));
}

void func_00091688(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091690);

void func_00091710(void) {
    func_00091690(1, 0xFFFF);
}

void func_00091730(void) {
    func_00091690(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000917B0);

void func_00091810(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

void func_0009182C(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091848);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000918E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091A64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091C48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccStrlenUTF16);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091CF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091D08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091D24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccDecodeUTF16);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccEncodeUTF16);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccDecodeUTF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00091EC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccUTF8toUTF16);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccUTF16toUTF8);

s32 func_0009213C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E2118;
    D_000E2118 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_000E211C = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_000E2120 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D4DAB044);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_15939BB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_8D736C8F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccStrlenSJIS);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092298);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092328);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092398);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccJIStoUCS);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000924C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092598);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccSJIStoUTF16);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccUTF16toSJIS);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009282C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", sceCccDecodeSJIS);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092B34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092C04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00092C4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_B9383A25);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_F93D4E1F);

s32 func_000930BC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000930C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000930F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009312C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093164);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009319C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000931D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093280);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000932B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000932E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009331C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093350);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093388);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000933BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000933F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093424);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093458);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093488);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000934BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000934F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093524);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093554);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093584);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000935B4);

s32 func_000935E4(void *arg0) {
    func_00095DE8(M2C_FIELD(arg0, s32 *, 0x7C));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093604);

s32 func_0009362C(void) {
    return 1;
}

s32 func_00093634(void) {
    return 0;
}

s32 func_0009363C(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093668);

s32 func_0009369C(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}

s32 func_000936C8(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD98)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_60CBB63F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_D6CDB3BB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000939B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093A74);

s32 func_00093AD4(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00093AE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093B04);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB154);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB168);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB170);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", scePaf_54AB18DD);

void func_00093DD4(void) {
    sceCccSetTable();
}

void func_00093DF0(void) {
    scePaf_D4DAB044();
}

void func_00093E0C(s32 arg0) {
    func_00091D08(arg0);
}

void func_00093E28(s32 arg0) {
    func_00092328(arg0 & 0xFFFF);
}

void func_00093E44(s32 arg0) {
    func_00093F58(arg0 & 0xFFFF);
}

void func_00093E60(s32 arg0) {
    func_00094E64(arg0 & 0xFFFF);
}

void func_00093E7C(s32 arg0) {
    func_000946B8(arg0 & 0xFFFF);
}

void func_00093E98(s32 arg0) {
    func_0009282C(arg0 & 0xFFFF);
}

void func_00093EB4(s32 arg0) {
    func_000943A8(arg0 & 0xFFFF);
}

void func_00093ED0(s32 arg0) {
    func_00095308(arg0 & 0xFFFF);
}

void func_00093EEC(s32 arg0) {
    func_00094B44(arg0 & 0xFFFF);
}

void func_00093F08(s32 arg0, s32 arg1) {
    D_000E214C = arg0;
    D_000E2148 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093F1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093F58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00093FC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000940B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094174);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009424C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000942EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000943A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000943B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094434);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000944AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009455C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094594);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094640);

void func_00094668(s32 arg0, s32 arg1) {
    D_000E2158 = arg0;
    D_000E2154 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009467C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000946B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094720);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000947C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094854);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094910);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000949E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094A88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094B44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094B54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094BD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094C44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094CF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094D2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094DDC);

void func_00094E14(s32 arg0, s32 arg1) {
    D_000E2164 = arg0;
    D_000E2160 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094E28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094E64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094EE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00094F88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095018);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000950D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000951AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009524C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095308);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095318);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095394);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095418);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000954C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095500);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000955B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000955E8);

void func_0009560C(s32 arg0, M2C_UNK arg1) {
    func_000955E8(0xD, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095630);

void func_00095644(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000957DC(0xD, arg0, arg1, arg2);
}

void func_00095670(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095890(0xD, arg0, arg1, arg2);
}

void func_0009569C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095974(0xD, arg0, arg1, arg2);
}

void func_000956C8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095A28(0xD, arg0, arg1, arg2);
}

void func_000956F4(s32 arg0, s32 arg1) {
    func_000955E8(0xE, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095718);

void func_0009572C(s32 arg0, s32 arg1, s32 arg2) {
    func_000957DC(0xE, arg0, arg1, arg2);
}

void func_00095758(s32 arg0, s32 arg1, s32 arg2) {
    func_00095890(0xE, arg0, arg1, arg2);
}

void func_00095784(s32 arg0, s32 arg1, s32 arg2) {
    func_00095974(0xE, arg0, arg1, arg2);
}

void func_000957B0(s32 arg0, s32 arg1, s32 arg2) {
    func_00095A28(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000957DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095890);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095974);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095A28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095B14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095BCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095C1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095C50);

s32 func_00095D98(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_00095F78(temp_v0);
    }
    M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, void *), 8)(0, arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095DE8);

s32 func_00095E08(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xF8)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095E30);

s32 func_00095E5C(void) {
    return 0;
}

s32 func_00095E64(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095E6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095F78);

s32 func_00095FC4(void) {
    return 0;
}

s32 func_00095FCC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00095FD4);

s32 func_00096160(s32 arg0) {
    func_000961AC(arg0 + 0x100);
    return 0;
}

s32 func_00096180(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096188);

s32 func_000961A4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000961AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009621C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009628C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096410);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000964F0);

s32 func_00096554(void) {
    return 0;
}

s32 func_0009655C(void *arg0) {
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
    func_000972A8((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_000972A8((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_00096620(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00096654(void) {
    return 0;
}

s32 func_0009665C(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 7;
}

s32 func_000966A4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 1;
}

s32 func_000966EC(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_0009671C(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009674C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096834);

s32 func_00096888(void) {
    return 0;
}

s32 func_00096890(void) {
    return 0;
}

s32 func_00096898(void) {
    return 0;
}

s32 func_000968A0(void) {
    return 0;
}

s32 func_000968A8(void) {
    return 0;
}

s32 func_000968B0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_000968E0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00096910(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00096940(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00096970(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_000969A0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000969D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096A74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096C04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096C4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096E18);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB1EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00096EA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009716C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000972A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB234);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000972F8);

s32 func_00097348(s32 arg0) {
    return (M2C_FIELD(D_000E2220, s32 (**)(void *, s32), 0xE0)(D_000E2220, arg0) == 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097380);

s32 func_00097418(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = M2C_FIELD(D_000E2220, s32 (**)(void *, s32), 0xEC)(D_000E2220, arg0);
    M2C_FIELD(D_000E2220, M2C_UNK (**)(void *, s32, s32, s32, M2C_UNK), 0xE4)(D_000E2220, arg0, arg1, arg2, 1);
    return M2C_FIELD(D_000E2220, s32 (**)(void *, s32), 0xEC)(D_000E2220, arg0) - temp_s4;
}

s32 func_000974AC(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < (s32) arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

s32 func_0009754C(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= (s32) arg2) ? 0 : -1;
}

s16 func_000975C4(u8 *arg0) {
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

void func_000975EC(s32 arg0, s32 arg1) {
    func_00097608(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097608);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097644);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009768C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000976D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000976F4);

void func_00097770(s32 arg0, M2C_UNK arg1) {
    func_000976F4(4, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097794);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009785C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097940);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000979A4);

void func_00097BE0(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_000979A4(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097C18);

void func_00097D68(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_00097C18((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097D90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097E00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097E58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00097EAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098054);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000980C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000980F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000982C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098308);

s32 func_00098334(void) {
    func_00098B94();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098448);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098480);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098598);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000985D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098620);

void func_00098B44(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098B4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098B94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098C18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098DAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098E9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098EE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00098F54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000991FC);

s32 func_0009924C(void) {
    return ~func_000991FC();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009926C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00099374);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00099478);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_00099498);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A034);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A1AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A258);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A3A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A49C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A658);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A6C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A754);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB26C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB27C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB29C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3A4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB3C8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB408);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009A8E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009ACD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009ACEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009AD90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009ADE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009AE3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009AF78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009AFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009AFCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B090);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B110);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B188);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B218);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B32C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B3A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B3DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B4B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B774);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B844);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B8D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009B910);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009BCF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009BD78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009BDF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009BE54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009BF64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C08C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C0EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C174);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C190);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C380);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C490);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C4EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C548);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C5E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C640);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C69C);

s32 func_0009C6F8(void) {
    s32 temp_v0;

    temp_v0 = func_00098EE4((s32) &D_00106F70, (s32) &D_0010EF7C, M2C_FIELD(M2C_FIELD(&D_00106F70, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_00106F70, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_00106F70, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_00106F70, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C75C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C7A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009C93C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CBC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CC34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CE2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CE78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CF38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009CF94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D000);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D0B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D268);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D52C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D5DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D684);

s32 func_0009D6F4(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0009D5DC() != -1) {
        var_s0 = 0;
        func_0009CE78(0, (s32) &D_0010B0EE);
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D738);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D7EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009D920);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DA9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DAF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DB48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DBFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DC6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DDD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009DFFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E124);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E1F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E600);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E79C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E8F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009E970);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EA58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EB08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EBD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EC74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009ED40);

void func_0009EDA0(s32 arg0) {
    func_000976D4(arg0, 0x24);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EDBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EEA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EF58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009EFD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F0A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F2B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F480);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F4E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F5B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F6FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F808);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009F944);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009FAE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009FCE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_0009FD40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A01C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A090C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A0BA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A0D14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A15E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1628);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A17A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1924);

void func_000A1978(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 3;
    func_000A1A34(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000A19B4(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 7;
    func_000A1A34(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A19F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1A34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1C60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A1EFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A227C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A2624);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A2984);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A2A38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A2DB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A2FE4);

void func_000A316C(s32 arg0) {
    func_000A3188(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3188);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3224);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A393C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3AE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3BB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3CA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A3E6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A416C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4208);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A42D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A43F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A44E4);

s32 func_000A45F0(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_000A4638(u8 *arg0, s32 arg1) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4660);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4770);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4A04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4B18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4BD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4CEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4D50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A4FE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A521C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A52A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5674);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5730);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A59B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5AFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5C7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5CEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5E58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5E88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5F78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A5FB8);

void func_000A60AC(void) {
    func_000976D4((s32) &D_00108130, 0x14);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A60D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6110);

s32 func_000A615C(void) {
    s32 temp_v0;

    func_000A6390();
    temp_v0 = func_000A6194();
    func_000A6480(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6194);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6390);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6480);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A64E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A65A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A66BC);

void func_000A6810(s16 arg0) {
    func_000A60D0();
    if (arg0 == 0) {
        func_000A6854();
    } else {
        func_000A6978();
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6854);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6978);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6A88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6AF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6B70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A6CAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A7558);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A7E00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A7EE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A82E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A865C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A86E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8AD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8B0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8C48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8D78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8EF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8F2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB8A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB8A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB8DC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB914);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB920);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB958);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB964);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB988);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB994);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB99C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB9B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB9C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB9CC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB9D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DB9F4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DBBE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DBDDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DC1C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DD160);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE3C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8C8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8E4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE8EC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DE928);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A8F78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A905C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A90A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A910C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A917C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A91EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9298);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A93DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A94A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A94FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9698);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9704);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9918);

void func_000A9A24(void) {
    M2C_FIELD(D_00108A2C, u16 *, 8) = (u16) M2C_FIELD(D_00108A2C, u16 *, 4);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9A38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9A90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9B20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9B98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9BCC);

void func_000A9C14(void) {
    D_0010DD08 = 0;
}

void func_000A9C20(void) {
    func_000AEF78();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9C3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9C74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9CF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9DE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9E3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9EA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9EE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9F24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000A9F8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA024);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA094);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA104);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA168);

s32 func_000AA1A8(void) {
    return ((D_0010B154 ^ 2) == 0) ? 0 : -1;
}

void func_000AA1C0(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA1C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA284);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA2B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA338);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA408);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA45C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA49C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA554);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA600);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA6A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA6DC);

void func_000AA78C(void) {
    func_000AA8D0();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA7A8);

void func_000AA844(void) {
    if (D_0010883E != -1) {
        if (D_0010883E != -2) {
            func_000AAB34();
        } else {
            func_000AA924();
        }
    } else {
        func_000AAB08();
    }
}

void func_000AA89C(void) {
    if (func_000AAAEC() != 0) {

    } else {
        func_000AA8D0();
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA8D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA924);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AA948);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAAEC);

void func_000AAB08(void) {
    func_000AACC8();
    func_000AADB4();
    func_000AAD70();
}

void func_000AAB34(void) {
    func_000AACC8();
    func_000AA948();
    func_000AAD70();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAB60);

void func_000AABFC(s16 arg0) {
    D_0010B164 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAC08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAC4C);

void func_000AACA4(void) {
    func_000AB3DC();
    func_000AB48C();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AACC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAD70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AADB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAE08);

void func_000AAE94(void) {
    func_000AB4E8();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAEB0);

void func_000AAF54(void) {
    func_000AAEB0(0);
}

void func_000AAF70(void) {
    func_000AAEB0(1);
}

void func_000AAF8C(s16 arg0) {
    func_000AD064(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AAFF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB030);

void func_000AB068(void) {
    func_000AD1C0(0);
}

void func_000AB084(void) {
    func_000AD1C0(1);
}

void func_000AB0A0(void) {
    void *temp_s0;

    temp_s0 = D_00108A2C;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_000AB0D4(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB0D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB324);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB388);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB3DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB48C);

void func_000AB4D8(s16 arg0) {
    M2C_FIELD(D_00108A2C, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB4E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB70C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB7E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB8CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AB998);

void func_000ABA64(s16 arg0) {
    func_000ABA88(arg0);
    func_000B5810();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABA88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABB84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABCE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABDAC);

void func_000ABE10(void) {
    if (func_000ABDAC((s32) M2C_FIELD(D_00108A2C, s16 *, 4)) != -1) {
        func_000B0720();
        func_000B5810();
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABE50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABE78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ABFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC0B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC224);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC280);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC42C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC470);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC4B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC5DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC6F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AC918);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ACCA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ACDC4);

void func_000ACED4(void) {
    func_000ACDC4(0);
}

void func_000ACEF0(void) {
    func_000ACDC4(1);
}

void func_000ACF0C(void) {
    func_000B1568(0);
    func_000B5810();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ACF30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD064);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD1C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD2A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD370);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD4AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD508);

void func_000AD548(void) {
    func_000AB3DC();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD564);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD5C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD5E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD608);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD790);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AD97C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ADB60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ADBE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ADE2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000ADEB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE0E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE4B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE4F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE790);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE8C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE92C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AE9A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AEA08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AEE70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AEF78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF028);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF4E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF768);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF7F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF878);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AF8F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFBFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFCCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFE28);

void func_000AFE50(void) {
}

void func_000AFE58(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFE60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFE7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFED4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000AFF40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B00C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B0720);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B0C84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B0CE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B10F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B13CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1400);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1568);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B18B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B19A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1C0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1C94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1DC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B1EF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B20FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2144);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B215C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B22C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B249C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B24D4);

s16 func_000B2508(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B252C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2588);

s32 func_000B2604(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_000B2644(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2644);

s32 func_000B2654(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2674);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B26E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2728);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2798);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B29F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2A10);

void func_000B2BB0(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2BB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2D20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2DD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2EA4);

void func_000B2F24(s32 arg0, s16 arg1, s32 arg2) {
    func_000B2DD0(arg0, (s32) arg1, arg2);
}

s32 func_000B2F40(s32 arg0, s16 arg1, s32 arg2) {
    return func_000B3048(arg0, (s32) arg1, (s32) &D_0010DC8C, arg2) == 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2F70);

void func_000B2FAC(s32 arg0, s16 arg1, s32 arg2) {
    func_000B2F40(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2FC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B2FE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3048);

void func_000B3690(void) {
    func_000B4D6C();
}

void func_000B36AC(void) {
    func_000B4E0C();
}

void func_000B36C8(void) {
    func_000B4F1C();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B36E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3874);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B38D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3900);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3A90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3C28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3E1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3E40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3EFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B3F44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B473C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B48EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4A40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4ABC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4B98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4CEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4D6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B4F1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5184);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5274);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5798);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B57B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5AA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5D20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5D88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5E10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5EBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B5F50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B601C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B60F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6178);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B61E0);

void func_000B6274(s32 arg0) {
    func_000B62A0();
    func_000B8EC4(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B62A0);

void func_000B6348(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    func_000BAE78(M2C_FIELD(temp_s0, s32 *, 0x3A74));
    M2C_FIELD(temp_s0, s32 *, 0x3A74) = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6374);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6448);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6AF4);

void func_000B6E30(void) {
    func_000B8FCC();
}

void func_000B6E4C(s32 arg0) {
    func_000B8EC4(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6E68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6F5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B6FE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7130);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7250);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7928);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7B78);

void func_000B7CA8(s32 arg0, s32 arg1, s32 arg2) {
    func_000B7CC8(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7CC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B7F54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B81F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B839C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B84BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8EC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8F08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8F58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B8FE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9070);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B910C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B918C);

void func_000B924C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_000B9FB0(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
        func_000B92A8((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B92A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B93E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B943C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEB5C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEB90);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEB9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEBD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEBE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DECDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DED14);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DED28);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DED98);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEDBC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEDC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEDD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", D_000DEDDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B996C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9B6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9E84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9EE0);

s32 func_000B9F98(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) & 0xF) + M2C_FIELD(arg0, u8 *, 6) + 9;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000B9FB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BA018);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BA048);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BA388);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BA5DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BA984);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BAB6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BACCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BAE78);

u16 func_000BAED0(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BAF00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BAFB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_020444", func_000BAFF0);

