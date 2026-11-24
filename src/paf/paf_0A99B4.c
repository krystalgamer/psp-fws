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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000AC5E4);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", png_set_user_transform_info);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B2500);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8188);

void func_000B8194(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B81AC);

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

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198768);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198774);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019877C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_BAE16A39);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_41F702EA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_0000C480((s32) &D_001A5244, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_0000C480((s32) &D_001A5250, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_0000C480((s32) &D_001A525C, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B86EC);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B882C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8888);

s32 func_000B8C4C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_001A3CC0 = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_AD43F865);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_D5F3BAB1);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B8F94);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_001A5300 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B95A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B966C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9748);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9DEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9E4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198920);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019893C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198964);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_0019898C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_001989F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198ABC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198AF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198B98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198BC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0A99B4", D_00198BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000B9F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA8BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BA974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontClose);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BAF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BB4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBAAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBBF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BBF44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC0D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC1E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC2C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC3E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC538);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BC8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BCE0C);

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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BCFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BD24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BD504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0A99B4", func_000BD7C0);

