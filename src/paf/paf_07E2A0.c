/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
u32 func_0007E2A0(struct Unk_func_0007E2A0_0 *arg0) {
    u32 temp_v0;
    u32 var_v1;

    var_v1 = arg0->unk15C->unk6A0();
    if (var_v1 < (u32) arg0->unk34) {
        temp_v0 = arg0->unkBA * 0x10;
        var_v1 = ((u32) ((var_v1 + temp_v0) - 1) / temp_v0) * temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007E30C);

void func_0007E3A8(struct Unk_func_0007E3A8_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    struct Unk_func_0007E3A8_temp_s0 *temp_s0;

    temp_s0 = arg0->unk15C;
    if (temp_s0 != NULL) {
        if (sce_paf_private_setjmp((u8 *)temp_s0 + 0x250) != 0) {

        } else {
            jpeg_destroy((s32) temp_s0);
        }
        if (temp_s0->unk6A8 != 0) {
            func_0006A618(temp_s0->unk6A8);
            temp_s0->unk6A8 = 0;
        }
        temp_a0 = temp_s0->unk6E0;
        if (temp_a0 != 0) {
            func_0006A618(temp_a0);
            temp_s0->unk6E0 = 0;
        }
        temp_a0_2 = temp_s0->unk6E8;
        if (temp_a0_2 != 0) {
            func_0006A618(temp_a0_2);
            temp_s0->unk6E8 = 0;
        }
        temp_a0_3 = temp_s0->unk6F0;
        if (temp_a0_3 != 0) {
            func_0006A618(temp_a0_3);
            temp_s0->unk6F0 = 0;
        }
        temp_a0_4 = temp_s0->unk700;
        if (temp_a0_4 != 0) {
            func_0006A618(temp_a0_4);
            temp_s0->unk700 = 0;
        }
        temp_a0_5 = temp_s0->unk6F8;
        if (temp_a0_5 != 0) {
            func_0006A618(temp_a0_5);
            temp_s0->unk6F8 = 0;
        }
        if ((arg0->unkC & 0x800) == 0) {
            temp_a0_6 = arg0->unk178;
            if (temp_a0_6 != 0) {
                func_0006A618(temp_a0_6);
                arg0->unk178 = 0;
                arg0->unk17C = 0;
            }
        }
        func_0006A618((s32) temp_s0);
        arg0->unk15C = NULL;
    }
}

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007E4DC);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007E7E8);

s32 func_0007E854(struct Unk_func_0007E854_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk15C;
    if (temp_v0 == 0) {

    } else {
        func_0006A618(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007E888);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007EB30);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007EBC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007ED68);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007EDB8);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007EFF4);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007F72C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007F968);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007FAE0);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007FCDC);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0007FEE0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190800);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B7F8);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B84C);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B854);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B85C);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B884);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B8AC);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B8C0);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B8F4);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B93C);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B968);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B9A4);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B9BC);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B9D0);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019B9F4);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000850D4);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000851D0);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008523C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000853B8);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00085420);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00086A48);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00086BBC);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00086C24);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00088520);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008861C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00088670);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00088790);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BB50);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BB54);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000889B0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190804);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190808);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019080C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190810);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190814);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190818);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019081C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00088A8C);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BB90);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089148);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BC48);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BC5C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089294);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089444);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000895A0);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008979C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000898F8);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089A20);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089C64);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089D0C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089DD0);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_00089FEC);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A120);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BCF8);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_0019BD18);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A358);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A3DC);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A49C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A568);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A61C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A65C);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A740);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008A7B0);

INCLUDE_RODATA("nonmatchings/paf_07E2A0", D_00190E50);

INCLUDE_ASM("nonmatchings/paf_07E2A0", func_0008AAE8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_07E2A0", func_000803B0);
#endif
