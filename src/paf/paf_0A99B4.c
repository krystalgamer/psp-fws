#include "common.h"
#include "paf_decls.h"

void func_000A99B4(s32 arg0, void *arg1) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;

    temp_v1 = M2C_FIELD(arg1, u8 *, 0);
    if (((((u32) (temp_v1 - 0x41) >= 0x3AU) | ((u32) (temp_v1 - 0x5B) < 6U)) != 0) || (temp_v1_2 = M2C_FIELD(arg1, u8 *, 1), ((((u32) (temp_v1_2 - 0x41) >= 0x3AU) | ((u32) (temp_v1_2 - 0x5B) < 6U)) != 0)) || (temp_v1_3 = M2C_FIELD(arg1, u8 *, 2), ((((u32) (temp_v1_3 - 0x41) >= 0x3AU) | ((u32) (temp_v1_3 - 0x5B) < 6U)) != 0)) || (temp_v1_4 = M2C_FIELD(arg1, u8 *, 3), ((((u32) (temp_v1_4 - 0x41) >= 0x3AU) | ((u32) (temp_v1_4 - 0x5B) < 6U)) != 0))) {
        func_0009DA4C(arg0, (s32) "invalid chunk type");
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000A9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000A9DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AA2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AA4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AA884);

void func_000AABD0(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x52, arg2, 0xA);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x20);
    }
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001942B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001942B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001942BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001942F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194330);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019434C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019435C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019437C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001943AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001943D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194400);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194428);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001944AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001944D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001944F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019459C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001945C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001945E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001946AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001946D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001946EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019470C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AAC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AAE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AAFDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB14C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB64C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AB894);

void func_000AB98C(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x3C, arg2, 5);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 2);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_set_sRGB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ABA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ABB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ABC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ABF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ABFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC160);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC328);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC4C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC530);

void func_000AC5C4(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC5CC);

void func_000AC5E4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x620) = arg1;
    M2C_FIELD(arg0, s32 *, 0x624) = arg2;
}

void func_000AC5F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 1);
}

void func_000AC600(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4E7) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_7333E75A);

void scePaf_C6624F24(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4E7) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC6C0);

void png_set_swap_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}

void png_set_invert_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}

void png_set_invert_mono(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_do_invert);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_do_packswap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_do_strip_filler);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_do_bgr);

void png_set_user_transform_info(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 0x420) = arg1;
    M2C_FIELD(arg0, s8 *, 0x424) = arg2;
    M2C_FIELD(arg0, s8 *, 0x425) = arg3;
}

s32 png_get_user_transform_ptr(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001947AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001948AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001949AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ACE0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ACE88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ACFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD320);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AD96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ADA5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ADB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ADC1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ADD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000ADDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE678);

void func_000AE724(void *arg0) {
    if (arg0 != NULL) {
        scePaf_545FE2DA(M2C_FIELD(arg0, void **, 8));
        scePaf_545FE2DA(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AE758);

void func_000AEA7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AEA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AEB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AEC08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AEE10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AEF00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", crc32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", crc32_little);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", crc32_big);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", gf2_matrix_times);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", gf2_matrix_square);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", crc32_combine);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflateInit_);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AFA70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AFEE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflatePrime);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B0034);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflateBound);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", putShortMSB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", flush_pending);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B02CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B0DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", read_buf);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", lm_init);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", longest_match);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", longest_match_fast);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", fill_window);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflate_stored);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflate_fast);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", deflate_slow);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", inflateReset);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", inflatePrime);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", inflateInit2_);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", inflateInit_);

void func_000B2500(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &D_00196FCC;
    M2C_FIELD(arg0, s32 *, 0x54) = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = &D_001977CC;
    M2C_FIELD(arg0, s32 *, 0x58) = 5;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B252C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00194F14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00196F4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00196FCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001977CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019784C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B2688);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B3E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", syncsearch);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B4064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B4368);

void tr_static_init(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", _tr_init);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", init_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", pqdownheap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", gen_bitlen);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", gen_codes);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", build_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scan_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", send_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", build_bl_tree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", send_all_trees);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", _tr_stored_block);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B5B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B5E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B61C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", set_data_type);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", bi_reverse);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", bi_flush);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", bi_windup);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", copy_block);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197ADC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197B5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197B9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197BDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197CC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00197D28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001981A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198420);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198520);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B6900);

s32 zlibCompileFlags(void) {
    return 0x55;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", zError);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", zcalloc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", zcfree);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B6A40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019865C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198670);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198698);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001986A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001986B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001986B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001986C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B6E7C);

s32 func_000B6F50(u32 arg0) {
    return arg0 + (arg0 >> 0xC) + (arg0 >> 0xE) + 0xB;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B6F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_FD3FF4AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_D6759EEF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_27760582);

s32 func_000B77C4(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_001A5240)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B77EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7878);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198728);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019872C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7CAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_A0ED77C4);

s32 func_000B7EB0(void) {
    return D_001A5240;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B7EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_35F25BA1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_79493F8F);

s32 scePaf_75062BCF(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 3;
}

