#include "common.h"
#include "paf_decls.h"

void func_000D6370(M2C_UNK **arg0) {
    *arg0 = &D_00199AF8;
    scePaf_4E67BB08(arg0);
}

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

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199AF8);

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B08);

INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B14);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0018DDB0);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0018D4A0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0011C360);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00119B60);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0011B9E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_0012E070);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0D6370", D_00199B20);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_87516C3B);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_84485F54);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_715E8DAB);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D6B20);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D6C0C);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_D35B454A);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_4DB0D5D4);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_8AB03D91);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_A89157EE);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_5045C01F);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_BDC894D8);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_72514A05);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D71B8);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_50FFFCD2);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D6370", func_0007DD34);
#else
INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_A88CBB4C);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D76C8);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_47E35A50);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_41A7BDD2);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D78D4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0D6370", func_000800B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D7964);
#endif

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_D587826C);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_61B105C0);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_B6841F37);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D7C20);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_3A4934E3);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1) {
    arg0->unk230 = (s32) arg1->unk0;
    arg0->unk234 = (s32) arg1->unk4;
    arg0->unk238 = (s32) arg1->unk8;
    arg0->unk23C = (s32) arg1->unkC;
    func_000D89B0((s32) arg0, 1);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_0C66B594);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_206C1F70);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8138);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_9563887D);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D82A0);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_21B885B8);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8738);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D89B0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D8A74);

s32 scePaf_360956CC(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1) {
    u8 temp_a2;

    func_000C7708();
    temp_a2 = arg1->unk8;
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (arg0->unk1D4 == 0) {

        } else {
            func_000D90A4(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_39F89900);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_1F0B8678);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_5DB527D4);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_25391E36);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D90A4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D913C);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D91D4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9270);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D930C);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9368);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9404);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9498);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D94E0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000D9580);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_927854C5);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_D02C0D2E);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_222526B6);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_33096E46);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_EF52945B);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_3F52824F);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_672036FE);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_1C286704);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_2E6CA751);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_01A35C15);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_B42D784E);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_470ABD60);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_08A02EFF);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_29DC646F);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_4FCA0DE9);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_2A6499A5);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_D07AF3FA);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_BAFF6806);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_FCF42D6D);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_AA978F61);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_E796C85B);

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_CFF2B69C);

s32 scePaf_4EA868E6(struct Unk_scePaf_4EA868E6_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_4EA868E6_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk74(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_DB230BE1);

s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_C2E4423A_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk7C(temp_v1);
    }
    return var_v0;
}

void scePaf_86B41BA3(struct Unk_scePaf_86B41BA3_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1D0;
    if (temp_v0 == 0) {

    } else {
        func_000EF13C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA0BC);

s32 func_000DA1CC(struct Unk_func_000DA1CC_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA1D4);

s32 func_000DA228(struct Unk_func_000DA228_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

void func_000DA234(struct Unk_func_000DA234_0 *arg0) {
    arg0->unk0 = &D_00199C78;
    arg0->unk8 = &D_0016EE58;
}

void func_000DA250(struct Unk_func_000DA250_0 *arg0) {
    arg0->unk0 = &D_00199C78;
    arg0->unk8 = &D_0016EE58;
    scePaf_4E67BB08(arg0);
}

void func_000DA284(struct Unk_func_000DA284_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA28C);

void func_000DA2AC(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA2C8);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA2E4);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA300);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA344);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA384);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA3C0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA400);

void func_000DA424(struct Unk_vt_func_000DA424_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_000DA448(struct Unk_vt_func_000DA448_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_000DA46C(struct Unk_vt_func_000DA46C_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA490);

void func_000DA4B4(struct Unk_vt_func_000DA4B4_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_000DA4D8(struct Unk_vt_func_000DA4D8_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_000DA4FC(struct Unk_vt_func_000DA4FC_arg0 **arg0) {
    (*arg0)->unk28();
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA520);

void func_000DA53C(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA558);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA574);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA590);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA5D0);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA610);

INCLUDE_ASM("nonmatchings/paf_0D6370", func_000DA650);

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

INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_CDC81771);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0D6370", scePaf_F1649F5B);
#else
INCLUDE_ASM("nonmatchings/paf_0D6370", func_00080E7C);
#endif
