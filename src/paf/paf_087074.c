#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void std_huff_tables(s32 arg0) {
    add_huff_table(arg0, arg0 + 0x50, (s32) &D_00191098, (s32) &D_001910AC);
    add_huff_table(arg0, arg0 + 0x60, (s32) &D_001910D8, (s32) &D_001910EC);
    add_huff_table(arg0, arg0 + 0x54, (s32) &D_001910B8, (s32) &D_001910CC);
    add_huff_table(arg0, arg0 + 0x64, (s32) &D_00191190, (s32) &D_001911A4);
}

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_set_defaults);

INCLUDE_RODATA("nonmatchings/paf_087074", D_00190E98);

INCLUDE_RODATA("nonmatchings/paf_087074", D_00190F98);

INCLUDE_RODATA("nonmatchings/paf_087074", D_00191098);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001910AC);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001910B8);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001910CC);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001910D8);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001910EC);

INCLUDE_RODATA("nonmatchings/paf_087074", D_00191190);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001911A4);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_default_colorspace);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_set_colorspace);

s32 fill_a_scan(struct Unk_fill_a_scan_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk0 = 1;
    arg0->unk4 = arg1;
    arg0->unk14 = arg2;
    arg0->unk18 = arg3;
    arg0->unk1C = arg4;
    arg0->unk20 = arg5;
    return (u8 *)arg0 + 0x24;
}

void *fill_scans(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            M2C_FIELD(var_a0, s32 *, 4) = var_v1;
            var_v1 += 1;
            M2C_FIELD(var_a0, s32 *, 0) = 1;
            M2C_FIELD(var_a0, s32 *, 0x14) = arg2;
            M2C_FIELD(var_a0, s32 *, 0x18) = arg3;
            M2C_FIELD(var_a0, s32 *, 0x1C) = arg4;
            M2C_FIELD(var_a0, s32 *, 0x20) = arg5;
            var_a0 += 0x24;
        } while (var_v1 < arg1);
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_00087674);

INCLUDE_ASM("nonmatchings/paf_087074", start_pass_phuff);

INCLUDE_ASM("nonmatchings/paf_087074", jcphuff_dump_buffer);

void jcphuff_flush_bits(struct Unk_jcphuff_flush_bits_0 *arg0) {
    jcphuff_emit_bits(arg0, 0x7F, 7);
    arg0->unk18 = 0;
    arg0->unk1C = 0;
}

INCLUDE_ASM("nonmatchings/paf_087074", emit_buffered_bits);

INCLUDE_ASM("nonmatchings/paf_087074", emit_eobrun);

INCLUDE_ASM("nonmatchings/paf_087074", jcphuff_emit_restart);

INCLUDE_ASM("nonmatchings/paf_087074", encode_mcu_DC_first);

INCLUDE_ASM("nonmatchings/paf_087074", encode_mcu_AC_first);

INCLUDE_ASM("nonmatchings/paf_087074", encode_mcu_DC_refine);

INCLUDE_ASM("nonmatchings/paf_087074", encode_mcu_AC_refine);

INCLUDE_ASM("nonmatchings/paf_087074", finish_pass_phuff);

INCLUDE_ASM("nonmatchings/paf_087074", finish_pass_gather_phuff);

INCLUDE_ASM("nonmatchings/paf_087074", jinit_phuff_encoder);

INCLUDE_ASM("nonmatchings/paf_087074", jcphuff_emit_bits);

INCLUDE_ASM("nonmatchings/paf_087074", start_pass_prep);

INCLUDE_ASM("nonmatchings/paf_087074", expand_bottom_edge);

INCLUDE_ASM("nonmatchings/paf_087074", pre_process_data);

INCLUDE_ASM("nonmatchings/paf_087074", pre_process_context);

INCLUDE_ASM("nonmatchings/paf_087074", create_context_buffer);

INCLUDE_ASM("nonmatchings/paf_087074", jinit_c_prep_controller);

void start_pass_downsample(void) {
}

INCLUDE_ASM("nonmatchings/paf_087074", expand_right_edge);

INCLUDE_ASM("nonmatchings/paf_087074", sep_downsample);

INCLUDE_ASM("nonmatchings/paf_087074", int_downsample);

void fullsize_downsample(struct Unk_fullsize_downsample_0 *arg0, struct Unk_fullsize_downsample_1 *arg1, s32 arg2, s32 arg3) {
    func_00095A84(arg2, 0, arg3, 0, arg0->unkE4, arg0->unk1C);
    expand_right_edge(arg3, arg0->unkE4, arg0->unk1C, arg1->unk1C * 8);
}

INCLUDE_ASM("nonmatchings/paf_087074", h2v1_downsample);

INCLUDE_ASM("nonmatchings/paf_087074", h2v2_downsample);

INCLUDE_ASM("nonmatchings/paf_087074", h2v2_smooth_downsample);

INCLUDE_ASM("nonmatchings/paf_087074", fullsize_smooth_downsample);

INCLUDE_ASM("nonmatchings/paf_087074", jinit_downsampler);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_CreateDecompress);

void jpeg_destroy_decompress(s32 arg0) {
    jpeg_destroy(arg0);
}

void jpeg_abort_decompress(s32 arg0) {
    jpeg_abort(arg0);
}

INCLUDE_ASM("nonmatchings/paf_087074", default_decompress_parms);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_read_header);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_0008A3BC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_087074", D_001853D8);

INCLUDE_RODATA("nonmatchings/paf_087074", D_00185418);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_0008A588);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008A69C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008A7F4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_087074", func_00085D9C);

INCLUDE_ASM("nonmatchings/paf_087074", func_00085E94);

INCLUDE_ASM("nonmatchings/paf_087074", func_00085FC4);

INCLUDE_ASM("nonmatchings/paf_087074", func_00086060);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_087074", func_00044724);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_087074", func_0008A928);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008AA20);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008AB50);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008ABEC);
#endif

void func_0008ACDC(struct Unk_func_0008ACDC_0 *arg0) {
    arg0->unk18->unk24 = 1;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0008ACEC);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008ADB8);

void func_0008AE3C(void) {
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0008AE44);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_087074", func_00086380);

INCLUDE_ASM("nonmatchings/paf_087074", func_00050B8C);

INCLUDE_ASM("nonmatchings/paf_087074", func_00050F28);

INCLUDE_ASM("nonmatchings/paf_087074", func_000510C8);

INCLUDE_ASM("nonmatchings/paf_087074", func_00086BB4);

INCLUDE_ASM("nonmatchings/paf_087074", func_00086C5C);

INCLUDE_ASM("nonmatchings/paf_087074", func_000517D0);

INCLUDE_ASM("nonmatchings/paf_087074", func_000871D4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_087074", start_pass_huff_decoder);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_make_d_derived_tbl);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_fill_bit_buffer);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_huff_decode);

INCLUDE_ASM("nonmatchings/paf_087074", process_restart);

INCLUDE_ASM("nonmatchings/paf_087074", decode_mcu);

INCLUDE_ASM("nonmatchings/paf_087074", jinit_huff_decoder);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008BD60);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_0008BDA4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C024);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C224);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C324);

void func_0008C380(struct Unk_func_0008C380_0 *arg0) {
    *arg0->unk1B0 = &func_0008C394;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C394);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C4B8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C518);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C590);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008C658);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008CAB4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008CE6C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008D224);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008D580);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008D6F0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008D9D8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008DAF0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008DCB8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008DFE0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E0F4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E28C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E3A4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E66C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E728);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E8B4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E8D8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008E980);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008EAE0);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_087074", D_001912A8);

INCLUDE_RODATA("nonmatchings/paf_087074", D_001912E8);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_0008EBBC);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008EE8C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008EF3C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F1E8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F3D4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F4D0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F52C);

void func_0008F660(struct Unk_func_0008F660_0 *arg0) {
    struct Unk_func_0008F660_temp_v1 *temp_v1;

    temp_v1 = arg0->unk1C0;
    temp_v1->unk24 = 0;
    temp_v1->unk2C = (s32) arg0->unk70;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F674);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F790);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F7F4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008F9A8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008FC24);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008FCF4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0008FFFC);

INCLUDE_ASM("nonmatchings/paf_087074", func_000900A8);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090368);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090630);

INCLUDE_ASM("nonmatchings/paf_087074", func_0009077C);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090C70);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090D28);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090E48);

INCLUDE_ASM("nonmatchings/paf_087074", func_00090EF0);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091010);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091120);

void func_00091208(struct Unk_func_00091208_0 *arg0) {
    struct Unk_func_00091208_temp_a1 *temp_a1;

    temp_a1 = arg0->unk1C0;
    temp_a1->unk5C = (s32) arg0->unk134;
    temp_a1->unk60 = (s32) arg0->unk70;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_00091220);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091394);

INCLUDE_ASM("nonmatchings/paf_087074", func_0009139C);

INCLUDE_ASM("nonmatchings/paf_087074", func_000913A4);

INCLUDE_ASM("nonmatchings/paf_087074", func_000914A8);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091520);

INCLUDE_ASM("nonmatchings/paf_087074", func_000915E4);

INCLUDE_ASM("nonmatchings/paf_087074", func_000916D0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0009184C);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091B0C);

INCLUDE_ASM("nonmatchings/paf_087074", func_00091B40);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_087074", func_0004AAF8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004AB74);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_087074", func_0004AC84);
#endif

#if FW_VERSION == 270
void func_0004AC84(void **arg0) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_087074", func_0004AC94);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004AD04);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004AD38);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004AF0C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B01C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B140);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B274);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B338);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B3FC);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B674);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B788);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004B8A0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004BAC8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004BCF4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004BE90);
#else
INCLUDE_ASM("nonmatchings/paf_087074", emit_message);

INCLUDE_ASM("nonmatchings/paf_087074", format_message);

void reset_error_mgr(void **arg0) {
    struct Unk_reset_error_mgr_temp_v0 *temp_v0;

    temp_v0 = *arg0;
    temp_v0->unk6C = 0;
    temp_v0->unk14 = 0;
}

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_std_error);

INCLUDE_ASM("nonmatchings/paf_087074", out_of_memory);

INCLUDE_ASM("nonmatchings/paf_087074", alloc_small);

INCLUDE_ASM("nonmatchings/paf_087074", alloc_large);

INCLUDE_ASM("nonmatchings/paf_087074", alloc_sarray);

INCLUDE_ASM("nonmatchings/paf_087074", alloc_barray);

INCLUDE_ASM("nonmatchings/paf_087074", request_virt_sarray);

INCLUDE_ASM("nonmatchings/paf_087074", request_virt_barray);

INCLUDE_ASM("nonmatchings/paf_087074", realize_virt_arrays);

INCLUDE_ASM("nonmatchings/paf_087074", do_sarray_io);

INCLUDE_ASM("nonmatchings/paf_087074", do_barray_io);

INCLUDE_ASM("nonmatchings/paf_087074", access_virt_sarray);

INCLUDE_ASM("nonmatchings/paf_087074", access_virt_barray);

INCLUDE_ASM("nonmatchings/paf_087074", free_pool);

INCLUDE_ASM("nonmatchings/paf_087074", self_destruct);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_00092F40);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_087074", func_0004C02C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C048);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C064);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C080);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C09C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C0A4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C0D0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C0D8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C0E0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C250);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C280);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C2B0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C49C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C664);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C738);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C7E8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C88C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004C930);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CA7C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CBC4);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CDCC);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CE54);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CFC0);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CFC8);

INCLUDE_ASM("nonmatchings/paf_087074", func_0004CFF4);
#else
INCLUDE_ASM("nonmatchings/paf_087074", jpeg_get_small);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_free_small);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_get_large);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_free_large);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_mem_available);

INCLUDE_ASM("nonmatchings/paf_087074", jpeg_open_backing_store);

s32 jpeg_mem_init(void) {
    return 0;
}

void jpeg_mem_term(void) {
}

INCLUDE_ASM("nonmatchings/paf_087074", select_ncolors);

INCLUDE_ASM("nonmatchings/paf_087074", output_value);

INCLUDE_ASM("nonmatchings/paf_087074", largest_input_value);

INCLUDE_ASM("nonmatchings/paf_087074", create_colormap);

INCLUDE_ASM("nonmatchings/paf_087074", create_colorindex);

INCLUDE_ASM("nonmatchings/paf_087074", make_odither_array);

INCLUDE_ASM("nonmatchings/paf_087074", create_odither_tables);

INCLUDE_ASM("nonmatchings/paf_087074", color_quantize);

INCLUDE_ASM("nonmatchings/paf_087074", color_quantize3);

INCLUDE_ASM("nonmatchings/paf_087074", quantize_ord_dither);

INCLUDE_ASM("nonmatchings/paf_087074", quantize3_ord_dither);

INCLUDE_ASM("nonmatchings/paf_087074", quantize_fs_dither);

INCLUDE_ASM("nonmatchings/paf_087074", alloc_fs_workspace);

INCLUDE_ASM("nonmatchings/paf_087074", start_pass_1_quant);

void finish_pass_1_quant(void) {
}

INCLUDE_ASM("nonmatchings/paf_087074", new_color_map_1_quant);

INCLUDE_ASM("nonmatchings/paf_087074", jinit_1pass_quantizer);
#endif

INCLUDE_ASM("nonmatchings/paf_087074", func_00094168);

void *func_000941F8(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x1C);
            var_a1 -= 1;
            if ((var_a2 < temp_v1) && (M2C_FIELD(var_a0, s32 *, 0x18) > 0)) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

void *func_00094238(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x18);
            var_a1 -= 1;
            if (var_a2 < temp_v1) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0009426C);

INCLUDE_ASM("nonmatchings/paf_087074", func_0009470C);

INCLUDE_ASM("nonmatchings/paf_087074", func_000948E0);

INCLUDE_ASM("nonmatchings/paf_087074", func_00094AD4);

INCLUDE_ASM("nonmatchings/paf_087074", func_00094BC8);

INCLUDE_ASM("nonmatchings/paf_087074", func_00094E08);

INCLUDE_ASM("nonmatchings/paf_087074", func_00094F98);

INCLUDE_ASM("nonmatchings/paf_087074", func_000950C8);

INCLUDE_ASM("nonmatchings/paf_087074", func_000951F0);

INCLUDE_ASM("nonmatchings/paf_087074", func_00095578);

INCLUDE_ASM("nonmatchings/paf_087074", func_00095654);

void func_0009568C(void) {
}

INCLUDE_ASM("nonmatchings/paf_087074", func_00095694);

void func_0009584C(struct Unk_func_0009584C_0 *arg0) {
    arg0->unk1C8->unk1C = 1;
}

INCLUDE_ASM("nonmatchings/paf_087074", func_0009585C);
