#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A99B4);
#else
void func_000A99B4(s32 arg0, struct Unk_func_000A99B4_1 *arg1) {
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;

    temp_v1 = arg1->unk0;
    if (((((u32) (temp_v1 - 0x41) >= 0x3AU) | ((u32) (temp_v1 - 0x5B) < 6U)) != 0) || (temp_v1_2 = arg1->unk1, ((((u32) (temp_v1_2 - 0x41) >= 0x3AU) | ((u32) (temp_v1_2 - 0x5B) < 6U)) != 0)) || (temp_v1_3 = arg1->unk2, ((((u32) (temp_v1_3 - 0x41) >= 0x3AU) | ((u32) (temp_v1_3 - 0x5B) < 6U)) != 0)) || (temp_v1_4 = arg1->unk3, ((((u32) (temp_v1_4 - 0x41) >= 0x3AU) | ((u32) (temp_v1_4 - 0x5B) < 6U)) != 0))) {
        func_0009DA4C(arg0, (s32) "invalid chunk type");
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00060750);
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9A68);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9DF8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA2B8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA4F4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA884);

void func_000AABD0(s32 arg0, struct Unk_func_000AABD0_1 *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1((u8 *)arg1 + 0x52, arg2, 0xA);
        arg1->unk8 = (s32) (arg1->unk8 | 0x20);
    }
}

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001942B4);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001942B8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001942BC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001942F0);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194330);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019434C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019435C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019437C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001943AC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001943D8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194400);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194428);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194444);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194474);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194490);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001944AC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001944D0);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001944F4);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194528);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194548);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194568);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019459C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001945C4);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001945E8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194610);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194248);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194638);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194650);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194680);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001946AC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001946D0);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001946EC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019470C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194734);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AAC2C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AAE30);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AAFDC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB0A8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB14C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB24C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB618);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB64C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB860);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB894);

void func_000AB98C(s32 arg0, struct Unk_func_000AB98C_1 *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1((u8 *)arg1 + 0x3C, arg2, 5);
        arg1->unk8 = (s32) (arg1->unk8 | 2);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_0006269C);
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", png_set_sRGB);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABA14);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00137D98);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00137E98);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00137F98);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABB04);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABC9C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABF04);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABFE8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC160);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC328);

s32 func_000AC348(struct Unk_func_000AC348_0 *arg0, s32 arg1) {
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

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC364);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC4C4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC530);

void func_000AC5C4(void) {
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC5CC);
#else
void func_000AC5CC(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x5F5) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5F8) = arg2;
}
#endif

void func_000AC5E4(struct Unk_func_000AC5E4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk620 = arg1;
    arg0->unk624 = arg2;
}

void func_000AC5F0(struct Unk_func_000AC5F0_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 1);
}

void func_000AC600(struct Unk_func_000AC600_0 *arg0) {
    if (arg0->unk4E7 == 0x10) {
        arg0->unk430 = (s32) (arg0->unk430 | 0x10);
    }
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_7333E75A);

void scePaf_C6624F24(struct Unk_scePaf_C6624F24_0 *arg0) {
    if ((u8) arg0->unk4E7 < 8U) {
        arg0->unk430 = (s32) (arg0->unk430 | 0x10000);
    }
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000626C4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063300);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC670);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC698);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC6C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000633D0);
#endif

#if FW_VERSION == 100
void func_000633D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000633E4);
#endif

#if FW_VERSION == 100
void func_000633E4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000633F8);
#endif

#if FW_VERSION == 100
void func_000633F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063408);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000634C4);
#endif

#if FW_VERSION == 100
void func_000634C4(void *arg0, void *arg1) {
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
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063518);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA614);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_0006359C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000638E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063A10);
#endif

#if FW_VERSION == 100
void func_00063A10(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 0x420) = arg1;
    M2C_FIELD(arg0, s8 *, 0x424) = arg2;
    M2C_FIELD(arg0, s8 *, 0x425) = arg3;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063A20);
#endif

#if FW_VERSION == 100
s32 func_00063A20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC2C0);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00192530);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC33C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFCB4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AC5DC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFFFC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B00E0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B03F0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0578);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0638);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0728);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACFEC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD0D0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD1CC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD288);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD5CC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD608);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD6DC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD814);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADAFC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADB2C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADBD8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADC0C);
#endif

#if FW_VERSION == 282
void png_set_swap_alpha(struct Unk_png_set_swap_alpha_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x20000);
}

void png_set_invert_alpha(struct Unk_png_set_invert_alpha_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x80000);
}

void png_set_invert_mono(struct Unk_png_set_invert_mono_0 *arg0) {
    arg0->unk430 = (s32) (arg0->unk430 | 0x20);
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", png_do_invert);

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

INCLUDE_ASM("nonmatchings/paf_0A99B4", png_do_packswap);

INCLUDE_ASM("nonmatchings/paf_0A99B4", png_do_strip_filler);

INCLUDE_ASM("nonmatchings/paf_0A99B4", png_do_bgr);

void png_set_user_transform_info(struct Unk_png_set_user_transform_info_0 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk420 = arg1;
    arg0->unk424 = arg2;
    arg0->unk425 = arg3;
}

s32 png_get_user_transform_ptr(struct Unk_png_get_user_transform_ptr_0 *arg0) {
    return arg0->unk420;
}

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001947AC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001948AC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001949AC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACE0C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACE88);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACFC8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD128);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD320);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD404);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD724);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD8AC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD96C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADA5C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADB38);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADC1C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADD18);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADDD4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE118);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE154);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE228);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE360);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE648);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE678);

void func_000AE724(struct Unk_func_000AE724_0 *arg0) {
    if (arg0 != NULL) {
        scePaf_545FE2DA(arg0->unk8);
        scePaf_545FE2DA(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE758);
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEA7C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADF38);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE020);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE0BC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE2C4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE3B4);
#endif

#if FW_VERSION == 282
void func_000AEA7C(struct Unk_func_000AEA7C_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063A34);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063A60);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00063E54);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB35C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB388);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AB3F0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A8CA0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A8CD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A909C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABAB4);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9144_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A925C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABC3C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A93F4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9424);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ABD80);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A94C4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9A0C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9D60);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9E28);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000A9ED0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA0C8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA1E8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA380);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA548);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AA9CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_0006428C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADE24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000642E4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000643FC);
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEA84);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEB6C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEC08);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEE10);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194AB0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEF00);

INCLUDE_ASM("nonmatchings/paf_0A99B4", crc32);

INCLUDE_ASM("nonmatchings/paf_0A99B4", crc32_little);

INCLUDE_ASM("nonmatchings/paf_0A99B4", crc32_big);

INCLUDE_ASM("nonmatchings/paf_0A99B4", gf2_matrix_times);

INCLUDE_ASM("nonmatchings/paf_0A99B4", gf2_matrix_square);

INCLUDE_ASM("nonmatchings/paf_0A99B4", crc32_combine);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflateInit_);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFA70);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFEE8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflatePrime);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0034);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflateBound);

INCLUDE_ASM("nonmatchings/paf_0A99B4", putShortMSB);

INCLUDE_ASM("nonmatchings/paf_0A99B4", flush_pending);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B02CC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0DCC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", read_buf);

INCLUDE_ASM("nonmatchings/paf_0A99B4", lm_init);

INCLUDE_ASM("nonmatchings/paf_0A99B4", longest_match);

INCLUDE_ASM("nonmatchings/paf_0A99B4", longest_match_fast);

INCLUDE_ASM("nonmatchings/paf_0A99B4", fill_window);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflate_stored);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflate_fast);

INCLUDE_ASM("nonmatchings/paf_0A99B4", deflate_slow);

INCLUDE_ASM("nonmatchings/paf_0A99B4", inflateReset);

INCLUDE_ASM("nonmatchings/paf_0A99B4", inflatePrime);

INCLUDE_ASM("nonmatchings/paf_0A99B4", inflateInit2_);

INCLUDE_ASM("nonmatchings/paf_0A99B4", inflateInit_);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B2500);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_0006444C);
#else
void func_000B2500(struct Unk_func_000B2500_0 *arg0) {
    arg0->unk4C = &D_00196FCC;
    arg0->unk54 = 9;
    arg0->unk50 = &D_001977CC;
    arg0->unk58 = 5;
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B252C);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00194F14);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018A8C8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00196F4C);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00196FCC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001977CC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019784C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B2688);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B3E20);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACA04);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00065D38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00065F50);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFE2C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ACDD4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD2EC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD2F4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD36C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD3D0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD4E4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD764);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AD808);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADAC8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000ADBCC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE144);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE1E0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE4AC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE56C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AE820);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AEBA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B2144);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF068);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF0EC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF110);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF1A8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF220);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", syncsearch);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B4064);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B4368);

void tr_static_init(void) {
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", _tr_init);

INCLUDE_ASM("nonmatchings/paf_0A99B4", init_block);

INCLUDE_ASM("nonmatchings/paf_0A99B4", pqdownheap);

INCLUDE_ASM("nonmatchings/paf_0A99B4", gen_bitlen);

INCLUDE_ASM("nonmatchings/paf_0A99B4", gen_codes);

INCLUDE_ASM("nonmatchings/paf_0A99B4", build_tree);

INCLUDE_ASM("nonmatchings/paf_0A99B4", scan_tree);

INCLUDE_ASM("nonmatchings/paf_0A99B4", send_tree);

INCLUDE_ASM("nonmatchings/paf_0A99B4", build_bl_tree);

INCLUDE_ASM("nonmatchings/paf_0A99B4", send_all_trees);

INCLUDE_ASM("nonmatchings/paf_0A99B4", _tr_stored_block);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B5B64);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B5E18);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B61C0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", set_data_type);

INCLUDE_ASM("nonmatchings/paf_0A99B4", bi_reverse);

INCLUDE_ASM("nonmatchings/paf_0A99B4", bi_flush);

INCLUDE_ASM("nonmatchings/paf_0A99B4", bi_windup);

INCLUDE_ASM("nonmatchings/paf_0A99B4", copy_block);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197AAC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197ADC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197B1C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197B5C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197B9C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018B558);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018B5CC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018B644);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018B690);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018B6A4);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018BB24);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018BB9C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018BD9C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018BE9C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018BF10);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B34C8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B35A4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B35AC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066674);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066694);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000666B0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197BDC);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197C50);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197CC8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197D14);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00197D28);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001981A8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198220);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198420);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198520);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198594);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B6900);

s32 zlibCompileFlags(void) {
    return 0x55;
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", zError);

INCLUDE_ASM("nonmatchings/paf_0A99B4", zcalloc);

INCLUDE_ASM("nonmatchings/paf_0A99B4", zcfree);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B6A40);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198614);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198624);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198630);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198634);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198640);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198650);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019865C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198670);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198680);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198698);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018C01C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018C024);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018C028);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001924D8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF2FC);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066118);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_0006664C);
#endif

#if FW_VERSION == 100
s32 func_0006664C(void) {
    return 0x55;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066654);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066674);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066694);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000666B0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF4F0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AF5C4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001986A8);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001986B0);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001986B4);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_001986C0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B6E7C);

s32 func_000B6F50(u32 arg0) {
    return arg0 + (arg0 >> 0xC) + (arg0 >> 0xE) + 0xB;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B6F68);

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0018C09C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFB74);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFCB4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFE14);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000AFFFC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B00E0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B03F0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0578);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0638);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0728);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0804);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B08E8);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B09E4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0AA0);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0DE4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0E20);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B0EF4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1000);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B12EC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1430);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1460);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B150C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1540);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1860);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1868);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1950);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B19EC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B1BF4);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_FD3FF4AA);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7554);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_D6759EEF);
#else
INCLUDE_ASM("nonmatchings/paf_0A99B4", func_00066EC8);
#endif

INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_27760582);

s32 func_000B77C4(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_001A5240)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B77EC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7878);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7A2C);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_00198728);

INCLUDE_RODATA("nonmatchings/paf_0A99B4", D_0019872C);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7AE4);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7C18);

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7CAC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_A0ED77C4);

s32 func_000B7EB0(void) {
    return D_001A5240;
}

INCLUDE_ASM("nonmatchings/paf_0A99B4", func_000B7EBC);

INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_35F25BA1);

INCLUDE_ASM("nonmatchings/paf_0A99B4", scePaf_79493F8F);

s32 scePaf_75062BCF(struct Unk_scePaf_75062BCF_0 *arg0) {
    return arg0->unk18 == 3;
}
