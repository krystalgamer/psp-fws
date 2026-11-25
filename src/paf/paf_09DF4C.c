#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009DF4C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E044);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E0FC);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E13C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E254);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00192F38);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_38F12307);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_E6432407);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E658);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_07216006);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00055210);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00055224);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00055238);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005524C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00055260);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00055278);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000552A0);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000552B4);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000552C8);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000552DC);
#else
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

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_get_mmx_flagmask);

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

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E878);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E898);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E920);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E940);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009E980);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EA18);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EA54);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EA9C);

void func_0009EAD4(struct Unk_func_0009EAD4_0 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unk42C;
    arg0->unk42C = (s32) (temp_s1 | 0x100000);
    func_0009E980();
    arg0->unk42C = temp_s1;
}

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EB14);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EB38);

void func_0009EB5C(struct Unk_func_0009EB5C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk600 = arg1;
    arg0->unk604 = arg2;
    arg0->unk608 = arg3;
}

s32 func_0009EB6C(struct Unk_func_0009EB6C_0 *arg0) {
    return arg0->unk600;
}

void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0009EB98(arg0, arg1, arg2, arg3, 0, 0, 0);
}

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EB98);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00193018);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00193020);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00193034);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00193048);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0019305C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EE5C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009EEF8);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_E327C974);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_D4F9270D);

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00129154);
#endif

void scePaf_DB1549DF(struct Unk_scePaf_DB1549DF_0 *arg0) {
    if (arg0->unk42C & 0x40) {

    } else {
        func_000AA884((s32) arg0);
    }
}

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00056170);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_FBC76D05);
#endif

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0009F6F0);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_DDD91620);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_B2290D1A);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_211A764A);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A03A4);

void func_000A0664(struct Unk_func_000A0664_0 *arg0, s32 arg1) {
    arg0->unk558 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A066C);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A0900);

INCLUDE_ASM("nonmatchings/paf_09DF4C", scePaf_1BDFF258);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A0B68);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A0B78);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0019340C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_001921AC_v271);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_001911D8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0018D9D8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0018BED8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00187E78);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0018756C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00117650);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00114E50);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00116CD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00129378);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_0019343C);
#endif

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00193480);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_001934A4);

INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_001934CC);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00191278);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_00129418);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_09DF4C", D_001934DC);
#endif

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A0B8C);

#if FW_VERSION == 282
void func_000A1584(struct Unk_func_000A1584_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}

void func_000A159C(struct Unk_func_000A159C_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}
#else
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A15B4);
#endif

#if FW_VERSION == 282
void func_000A15B4(struct Unk_func_000A15B4_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02000000);
}
#else
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00058314);
#endif

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A15C8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00058334);
#else
void func_000A15E0(struct Unk_func_000A15E0_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x02001000);
}
#endif

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A15F8);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A1608);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A1654);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A1784);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00059294);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000595A4);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00059A58);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00059BF8);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00059E50);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_00059ED0);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005A0C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A12AC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005A20C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005A654);
#else
INCLUDE_ASM("nonmatchings/paf_09DF4C", png_read_transform_info);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_read_transformations);

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

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_unshift);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_chop);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_read_swap_alpha);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_read_invert_alpha);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_read_filler);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_gray_to_rgb);
#endif

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A3C40);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A44E4);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_000A579C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005C9A4);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005CCE8);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005D250);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005D414);

INCLUDE_ASM("nonmatchings/paf_09DF4C", func_0005DD08);
#else
INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_expand_palette);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_expand);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_dither);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_build_gamma_table);

INCLUDE_ASM("nonmatchings/paf_09DF4C", png_do_read_intrapixel);
#endif
