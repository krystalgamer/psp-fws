#include "common.h"
#include "paf_decls.h"

u32 func_00080480(u32 arg0, s32 arg1) {
    u32 var_v1;

    var_v1 = arg0 * arg1;
    if (arg0 != 0) {
        var_v1 = (((var_v1 / arg0) ^ arg1) != 0) ? 0U : var_v1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000804AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000805F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190898);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_001908A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_001908A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00080624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190980);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190994);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_001909BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_001909F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190A18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008098C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00080AC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00080AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008192C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00081BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00081E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082078);

void func_00082140(s32 arg0) {
    struct Unk_func_00082140_temp_a0 *temp_a0;

    temp_a0 = arg0 + 0x20;
    temp_a0->unk2C = 8;
    temp_a0->unk2E = 1;
}

void func_00082158(struct Unk_func_00082158_0 *arg0) {
    s32 temp_a0;
    struct Unk_func_00082158_temp_s0 *temp_s0;

    temp_s0 = arg0->unk15C;
    func_00083940();
    temp_a0 = temp_s0->unk90;
    arg0->unk1B4 = (s32) temp_s0->unk7C;
    arg0->unk1B0 = (s32) temp_s0->unk80;
    if (temp_a0 == 0) {

    } else {
        func_0006A618(temp_a0);
    }
    if (temp_s0->unk94 == 0) {

    } else {
        func_0006A618(temp_s0->unk94);
    }
    if (temp_s0->unk98 == 0) {

    } else {
        func_0006A618(temp_s0->unk98);
    }
    if (temp_s0->unk84 == 0) {

    } else {
        func_0006A618(temp_s0->unk84);
    }
    if (temp_s0->unk88 == 0) {

    } else {
        func_0006A618(temp_s0->unk88);
    }
    if (temp_s0->unk8C == 0) {

    } else {
        func_0006A618(temp_s0->unk8C);
    }
    if (temp_s0->unk70 & 1) {
        if (arg0->unk8 != 1) {
            func_000B0DCC((u8 *)temp_s0 + 0x30);
        } else {
            func_000B3E20((u8 *)temp_s0 + 0x30);
        }
    }
    if (temp_s0->unk68 != 0) {
        func_0006A618(temp_s0->unk68);
    }
    func_0006A618((s32) temp_s0);
    arg0->unk15C = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000822A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000824B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008257C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000826D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000827F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082A80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00082E74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000830D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000837F4);

void func_00083888(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083940);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190CC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190CD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083C54);

s32 func_00083CC0(struct Unk_func_00083CC0_0 *arg0) {
    arg0->unk130 = &func_00083C54;
    arg0->unk138 = &func_00083C54;
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083D58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190D70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190D78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083D8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190DB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190DC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00083F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000840EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084268);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190E50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_080480", D_00190E54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084430);

void func_00084554(s32 arg0) {
    jpeg_destroy(arg0);
}

void func_00084570(s32 arg0) {
    jpeg_abort(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008458C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000845E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008485C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000848EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000849A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084A70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084BA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084E5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00084F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_byte);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_marker);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_2bytes);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_dqt);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_dht);

void emit_dac(void) {
}

void emit_dri(struct Unk_emit_dri_0 *arg0) {
    emit_marker(arg0, 0xDD);
    emit_2bytes(arg0, 4);
    emit_2bytes(arg0, arg0->unkC0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_sof);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_sos);

void emit_jfif_app0(struct Unk_emit_jfif_app0_0 *arg0) {
    emit_marker(arg0, 0xE0);
    emit_2bytes(arg0, 0x10);
    emit_byte(arg0, 0x4AU);
    emit_byte(arg0, 0x46U);
    emit_byte(arg0, 0x49U);
    emit_byte(arg0, 0x46U);
    emit_byte(arg0, 0U);
    emit_byte(arg0, arg0->unkCC);
    emit_byte(arg0, arg0->unkCD);
    emit_byte(arg0, arg0->unkCE);
    emit_2bytes(arg0, (s32) arg0->unkD0);
    emit_2bytes(arg0, (s32) arg0->unkD2);
    emit_byte(arg0, 0U);
    emit_byte(arg0, 0U);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", emit_adobe_app14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", write_marker_header);

void write_marker_byte(void) {
    emit_byte();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", write_file_header);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", write_frame_header);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", write_scan_header);

void write_file_trailer(s32 arg0) {
    emit_marker(arg0, 0xD9);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", write_tables_only);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jinit_marker_writer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00085CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00085F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_000864E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_0008660C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00086824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00086A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00086AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", func_00086B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jpeg_abort);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jpeg_destroy);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jpeg_alloc_quant_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jpeg_alloc_huff_table);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_080480", jpeg_add_quant_table);

