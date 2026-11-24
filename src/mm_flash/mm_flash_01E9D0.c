#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001E9D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001EA80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001EB30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001EC2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001ED04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001EE0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001EF04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F058);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F10C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F168);

s32 func_0001F1E8(s32 *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v1;

    temp_a0 = *arg0;
    var_v1 = 0;
    if (temp_a0 != 0) {
        temp_v0 = *arg1;
        if (temp_v0 != 0) {
            var_v1 = func_0001FC2C(temp_a0, temp_v0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F228);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F304);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F360);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F468);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F65C);

s32 func_0001F7A0(s32 **arg0) {
    s32 *temp_a0;
    s32 var_v0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = *temp_a0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F7B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F854);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F8B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001F990);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FA38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FAF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FC2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FCCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FDB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FEC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FEEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0001FFFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020038);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020074);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000200CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020228);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002034C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020388);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000203A4);

void func_000203BC(struct Unk_func_000203BC_0 *arg0) {
    arg0->unk8 = 0xFFC00000;
    arg0->unk0 = 0xFFC00000;
    arg0->unkC = 0x3FFFFF;
    arg0->unk4 = 0x3FFFFF;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000203DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020438);

void func_0002047C(s32 arg0, struct Unk_func_0002047C_1 *arg1) {
    s32 temp_v1;

    temp_v1 = arg1->unk0;
    if (temp_v1 != 0x80000000) {
        arg1->unk0 = (s32) (temp_v1 + arg0);
        arg1->unk4 = (s32) (arg1->unk4 - arg0);
        arg1->unk8 = (s32) (arg1->unk8 + arg0);
        arg1->unkC = (s32) (arg1->unkC - arg0);
        func_00020534((s32) arg1);
    }
}

void func_000204D8(s32 arg0, struct Unk_func_000204D8_1 *arg1) {
    s32 temp_v1;

    temp_v1 = arg1->unk0;
    if (temp_v1 != 0x80000000) {
        arg1->unk0 = (s32) (temp_v1 - arg0);
        arg1->unk4 = (s32) (arg1->unk4 + arg0);
        arg1->unk8 = (s32) (arg1->unk8 - arg0);
        arg1->unkC = (s32) (arg1->unkC + arg0);
        func_00020534((s32) arg1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020534);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B5A74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6274);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B62A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B62D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B62D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B634C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6354);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6454);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6558);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B655C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020578);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020638);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000206D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020764);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000207E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020894);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020960);

void func_0002099C(struct Unk_func_0002099C_0 *arg0, struct Unk_func_0002099C_1 *arg1) {
    arg1->unk0 = (s32) (arg0->unk4 - arg0->unk0);
    arg1->unk4 = (s32) (arg0->unkC - arg0->unk8);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000209C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020A40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020C38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020E4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020F1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00020FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000215F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021A40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021B20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021B40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021BA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021BC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021BE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021D6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021DB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021E0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021E54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021F3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00021FC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022068);

void func_000220E8(struct Unk_func_000220E8_0 *arg0) {
    void *temp_s0;
    void *var_v1;

    var_v1 = arg0->unk14;
    if (var_v1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v1, void **, 8);
            if (M2C_FIELD(var_v1, u16 *, 0x14) == 0) {
                func_00021F3C(arg0, var_v1);
            }
            var_v1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022144);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000221CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000222A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000222FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022370);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022410);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000224B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022588);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000226F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000227BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000228C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022A60);

void func_00022AA4(struct Unk_func_00022AA4_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0001DEA4(arg1, arg2, arg0->unk14 & 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022AD0);

void func_00022B1C(struct Unk_func_00022B1C_0 *arg0) {
    arg0->unk8 = 1;
}

void func_00022B28(struct Unk_func_00022B28_0 *arg0) {
    if (arg0->unk38 == 0) {

    } else {
        func_0006CF30((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022B58);

void func_00022BC8(M2C_UNK **arg0) {
    *arg0 = &D_000B6698;
    func_00022C60();
    func_00022CA4((s32) arg0);
    func_00022254((s32) arg0);
}

void func_00022C08(M2C_UNK **arg0) {
    *arg0 = &D_000B6698;
    func_00022C60();
    func_00022CA4((s32) arg0);
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022DC4);

void func_00022DD0(void) {
}

void func_00022DD8(M2C_UNK **arg0) {
    *arg0 = &D_000B66B8;
    func_000224B8();
    func_00022254((s32) arg0);
}

void func_00022E10(M2C_UNK **arg0) {
    *arg0 = &D_000B66B8;
    func_000224B8();
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00022E60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023284);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000234CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002358C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023734);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023778);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002383C);

void func_00023874(M2C_UNK **arg0) {
    *arg0 = &D_000B6768;
    func_000224B8();
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000238C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023904);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023950);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023998);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000239F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023A44);

void func_00023A98(s32 arg0) {
    func_00023EB8();
    func_0002383C(arg0 + 4);
}

void func_00023AC8(s32 arg0) {
    func_00023EB8();
    func_0002383C(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023CEC);

void func_00023DDC(void) {
    func_0002358C();
}

void func_00023DF8(void) {
    func_00023778();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023E50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023E90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023EB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023ED4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023EFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6584);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6698);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B66B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B66D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B66F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B66FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6708);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6714);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6728);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6738);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6744);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6748);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B674C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6750);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6754);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6758);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B675C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B678C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00023F24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024130);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024174);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000241B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6954);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002471C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024A00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024B70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024C40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024DFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6B98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BCC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BD4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6BF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024ED4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00024FDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002504C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000250B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000250DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025100);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000251A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025208);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000253A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025494);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025548);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002562C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000256B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00025D40);

void func_0002629C(struct Unk_func_0002629C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0->unkC, s32 *, 0x1014);
    if (temp_v0 == 0) {

    } else {
        func_000253A8(temp_v0, arg0);
    }
}

s32 func_000262D4(void) {
    return 0;
}

s32 func_000262DC(void) {
    return 0;
}

s32 func_000262E4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000262EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026484);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002671C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002677C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026824);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026854);

void func_0002692C(s32 arg0) {
    func_00026854(arg0, func_0002695C());
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002695C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026A60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026B1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026C04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026CC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026CFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00026E58);

void func_00026FB4(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_s0;
    M2C_UNK *var_v1;

    var_s0 = arg0;
    func_0002736C(arg1);
    var_v1 = *var_s0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = *var_v1;
            var_s0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    *var_s0 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027008);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000271C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027254);

s32 func_00027314(struct Unk_func_00027314_0 *arg0) {
    return arg0->unk1AC ^ 1;
}

s32 func_00027320(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00090F90(arg0 + 0x160) == 0) {
        var_v1 = func_00090F90(arg0 + 0x180) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002736C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6C98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6CA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6CC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6CCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000273B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002756C);

void func_000275D4(void) {
    func_000275F0();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000275F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000276AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027924);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000279A4);

void func_000279F4(s32 arg0) {
    func_00091F70(arg0 + 8);
}

void func_00027A10(s32 arg0) {
    func_00091F68(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027A2C);

s32 func_00027CD4(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x31BC);
    temp_s0 = __builtin_allegrex_min(arg2, M2C_FIELD(arg0, s32 *, 0x31C8) - temp_v1);
    sceHVNetfront_Module_1A02495A((s32) (arg0 + temp_v1 + 0x11BC), arg1, temp_s0, arg3);
    M2C_FIELD(arg0, s32 *, 0x31BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x31BC) + temp_s0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027D2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027DB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6D9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00027E5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000282A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028348);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002854C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028A4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028EEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00028FAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029080);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000290E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029154);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6DFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029244);

void func_00029584(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002958C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029660);

void func_000297B8(struct Unk_func_000297B8_0 *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;
    void *temp_v0_2;

    if (arg0->unk0 != 3) {

    } else {
        temp_s1 = arg0->unk8;
        if (temp_s1 != 0) {
            temp_v0 = func_0001F7B8(arg1);
            if (temp_v0 != 0) {
                temp_v0_2 = func_000608F4(temp_s1, temp_v0);
                if (temp_v0_2 != NULL) {
                    func_000628A8(arg0, (s32) temp_v0_2, 1);
                }
                func_00090730(*func_0009F1C0(), temp_v0, 0);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029858);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00029CD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002AA84);

void func_0002AAEC(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;

    var_v0 = *arg1;
    if (var_v0 < 0) {
        *arg1 = 0;
        var_v0 = 0;
    }
    if (var_v0 >= arg2) {
        *arg1 = arg2;
    }
    var_v1 = *arg0;
    if (var_v1 < 0) {
        *arg0 = 0;
        var_v1 = 0;
    }
    if (var_v1 >= arg2) {
        *arg1 = 0;
        var_v1 = 0;
        *arg0 = 0;
    }
    temp_a2 = *arg1;
    if (temp_a2 < var_v1) {
        *arg0 = temp_a2;
        *arg1 = var_v1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002AB58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002ABA8);

void func_0002BB10(struct Unk_func_0002BB10_0 *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = arg0->unk8;
    if ((temp_a0 != NULL) & (arg1 != 0)) {
        M2C_FIELD(temp_a0, s32 *, 0x6C) = arg1;
        M2C_FIELD(temp_a0, s32 *, 0x7C) = 0xB;
    }
}

void func_0002BB38(struct Unk_func_0002BB38_0 *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = arg0->unk8;
    if ((temp_a0 != NULL) & (arg1 != 0)) {
        M2C_FIELD(temp_a0, s32 *, 0x6C) = arg1;
        M2C_FIELD(temp_a0, s32 *, 0x7C) = 0xA;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BB60);

s32 func_0002BBA8(struct Unk_func_0002BBA8_0 *arg0) {
    s32 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (arg0->unk0 == 3) {
        temp_a0 = arg0->unk8;
        if (temp_a0 != NULL) {
            if (M2C_FIELD(temp_a0, s32 *, 0x7C) == 0xA) {
                var_a1 = M2C_FIELD(temp_a0, s32 *, 0x6C);
            }
        }
    }
    return var_a1;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6F10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6F14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6F18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6F1C);

void func_0002BBE4(s32 arg0) {
    func_00061B38(arg0, (s32) "contentType\0docTypeDecl\0ignoreWhite\0loaded\0status\0xmlDecl", (s32) &func_0002FA78, 0);
}

void func_0002BC10(s32 arg0) {
    func_00061B38(arg0, (s32) &D_000B6F5C, (s32) &func_0002E318, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BC3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6F5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6FCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BCAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BE0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BE34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BF54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002BFB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C090);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C1B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C2E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C43C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C478);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C4B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C4F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C54C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C68C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C908);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002C9AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002CB28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002CBB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002CCC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002CE88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002CF38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002D310);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002D4C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002D5AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002D674);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002D898);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DA14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DBEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DD4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DDC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DEC4);

s32 func_0002DF4C(struct Unk_func_0002DF4C_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk44 != 0) {
        var_v1 = arg0->unk40 != 0;
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B6FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002DF68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E054);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E184);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E318);

void func_0002E590(struct Unk_func_0002E590_0 *arg0) {
    arg0->unk3C = (s32) (arg0->unk3C + 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E5A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E5E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E7BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E874);

s32 func_0002E92C(struct Unk_func_0002E92C_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk2C;
    if (temp_v0 != 0) {
        func_0001D094(arg1, temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}

void func_0002E968(struct Unk_func_0002E968_0 *arg0) {
    func_0007AE5C(arg0->unk24);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002E9A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002EA70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002EC04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002F070);

void func_0002F0F0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002F070(arg0, 1, arg1, arg2);
}

void func_0002F114(s32 arg0, s32 arg1, s32 arg2) {
    func_0002F070(arg0, 3, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002F138);

void func_0002F800(struct Unk_func_0002F800_0 *arg0, s32 arg1) {
    arg0->unk48 = (s32) ((arg1 & 0xFF) == 0);
}

void func_0002F810(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_0001D094((s32) (arg0 + 0x50), arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002F830);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002F8D8);

void func_0002F9F0(struct Unk_func_0002F9F0_0 *arg0, M2C_UNK arg1) {
    void *temp_v1;

    temp_v1 = arg0->unk5C;
    if ((temp_v1 == NULL) || (M2C_FIELD(temp_v1, s32 *, 4) == 0)) {

    } else {
        func_0001D0C4(arg1, temp_v1);
    }
    if (arg0->unk60 != NULL) {
        if (M2C_FIELD(arg0->unk60, s32 *, 4) == 0) {

        } else {
            func_0001D0C4(arg1, arg0->unk60);
        }
    }
    func_0002E184(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002FA78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0002FD9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000303FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000304BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003057C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003063C);

void func_000306CC(struct Unk_func_000306CC_0 *arg0) {
    arg0->unk4 = 0x2000;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk0 = func_00090648(*func_0009F1C0(), 0x2000, 0);
}

void func_00030714(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_0003075C(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000307A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000308AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030950);

s32 func_000309CC(struct Unk_func_000309CC_0 *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a2;

    temp_a1 = arg0->unk8;
    temp_v1 = arg0->unkC;
    var_a2 = temp_v1 - temp_a1;
    if (temp_v1 < temp_a1) {
        var_a2 = (temp_v1 + arg0->unk4) - temp_a1;
    }
    return var_a2;
}

s32 func_000309F4(struct Unk_func_000309CC_0 *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = 0;
    if (func_000309CC(arg0) >= arg1) {
        var_a1 = 1;
        arg0->unk8 = (s32) ((s32) (arg0->unk8 + arg1) % (s32) arg0->unk4);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030A58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030AA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7118);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B711C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7128);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7138);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7148);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7158);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7160);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B716C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7178);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7184);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7190);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7198);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B71A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B71B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030C08);

void func_00030CF8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

    } else {
        func_000308AC(arg0 + 0x18, arg1 & 0xFF);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030D30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030E08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030ECC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030F08);

s32 func_00030F5C(void) {
    return 0;
}

s32 func_00030F64(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00030F6C);

void func_00030FDC(struct Unk_func_00030FDC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_00030FE8(struct Unk_func_00030FE8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_00030FF4(struct Unk_func_00030FF4_0 *arg0) {
    if (arg0->unk4 != 0) {
        func_000670B8(arg0->unk0, 0x7EFFFFFF);
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031034);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B71C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B71F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7204);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7210);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000310B4);

s32 func_00031204(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000310B4(arg1);
    func_00031798(arg0, arg1, 0, arg2);
    return arg0;
}

void func_0003125C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000314D8(arg0);
    func_000318CC(arg0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000312BC);

s32 func_00031404(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000312BC(arg1, arg2);
    func_00031798(arg0, arg1, arg2, arg3);
    return arg0;
}

void func_0003146C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000314D8(arg0);
    func_000318CC(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000314D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000316C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7250);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7260);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7270);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7278);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7280);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7288);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000318CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031A34);

void func_00031B7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_00030FE8(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031BC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031D5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031DB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00031F7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7334);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032670);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032A04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032ACC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032B58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032B8C);

void func_00032C48(s32 arg0, s32 arg1, s32 arg2) {
    func_0003125C(arg0 + 4, arg1, arg2, 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032C68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032D00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00032E38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000330E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003320C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000332A4);

void func_00033408(struct Unk_func_00033408_0 *arg0, s32 arg1) {
    void *sp0;
    func_000437AC(&sp0, arg0->unk0);
    arg0->unkC = arg1;
    func_0004388C(&sp0);
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7388);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003344C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B739C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B73A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B73B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033A74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033A9C);

void func_00033BF0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_t2;
    u32 temp_lo;
    void *var_t0;
    void *var_t1;

    var_t1 = arg0;
    var_t0 = arg1;
    var_t2 = arg2 - 1;
    if (arg2 > 0) {
        do {
            temp_a0 = 0x100 - M2C_FIELD(var_t1, u16 *, 6);
            temp_lo = M2C_FIELD(var_t0, s32 *, 0) * temp_a0;
            temp_v0 = M2C_FIELD(var_t1, s32 *, 0);
            temp_a1 = M2C_FIELD(var_t1, s32 *, 4);
            temp_a3 = var_t2;
            var_t1 += 8;
            M2C_FIELD(var_t0, s32 *, 0) = (s32) ((temp_v0 + (temp_lo >> 8)) & 0xFF00FF);
            M2C_FIELD(var_t0, s32 *, 4) = (s32) ((temp_a1 + ((u32) (M2C_FIELD(var_t0, s32 *, 4) * temp_a0) >> 8)) & 0xFF00FF);
            var_t2 -= 1;
            var_t0 += 8;
        } while (temp_a3 > 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033C70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033CEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033D64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033D8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B73C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000B7448);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD0E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD2F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00033E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034038);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034084);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034194);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000342EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034D3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034D60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034DF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00034F54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000351BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035298);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035750);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000358EC);

void func_00035988(s32 arg0) {
    func_000220E8(arg0 + 0x88);
    func_000220E8(arg0 + 0xA8);
    func_000220E8(arg0 + 0xC8);
}

s32 func_000359C4(struct Unk_func_000359C4_0 *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = arg0->unk1C;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x40) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000359E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035B3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035D14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035E5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00035ED0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036060);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000361CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003626C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003630C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003637C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003640C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000364A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036508);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003656C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000365CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000367E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000369E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036A78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036AC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036B4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00036CA8);

void func_00037594(void *arg0) {
    M2C_UNK *temp_s0_2;
    M2C_UNK *var_a1;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x130) = (M2C_UNK *) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x114) * 4) + M2C_FIELD(arg0, void **, 0x4C)), M2C_UNK **, 0x368);
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0x130) = &func_0003656C;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x7C) = temp_v0;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0) - 1;
    if (temp_v0 >= M2C_FIELD(arg0, s32 *, 0x30)) {
        var_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
    } else {
        do {
            func_00035ED0((s32) arg0);
            func_00036060((s32) arg0);
            func_00036B4C((s32) arg0);
            if ((temp_s0 != 0) && ((M2C_FIELD(arg0, s32 *, 0x7C) & temp_s0) == temp_s0)) {
                func_00036CA8((s32) arg0);
            }
            if (!(M2C_FIELD(arg0, s32 *, 0x7C) & 0x1F)) {
                func_0004B56C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 8));
            }
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x7C) + 1;
            M2C_FIELD(arg0, s32 *, 0x7C) = temp_v1;
        } while (temp_v1 < M2C_FIELD(arg0, s32 *, 0x30));
        var_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
    }
    if (var_a1 != NULL) {
        do {
            temp_s0_2 = *var_a1;
            func_00022068((s32) (arg0 + 0x88), var_a1);
            var_a1 = temp_s0_2;
        } while (temp_s0_2 != NULL);
    }
    temp_s0_3 = M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = NULL;
    if (temp_s0_3 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_3, 0);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000376D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037714);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003779C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037800);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000378C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037B80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037D7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037E44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037F0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00037F38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038070);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000381A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038208);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038274);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000382E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038520);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038688);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000387F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003893C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038B64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038DAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00038F40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039270);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000394C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039750);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039A14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039C34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00039EF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003A220);

void func_0003A4C0(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003A4C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003A5FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003A778);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003A894);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003AD4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B0E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B220);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B244);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B28C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B46C);

void func_0003B604(struct Unk_func_0003B604_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk30 != 0x12) {
        func_0003B378((s32) arg0, arg1, arg2);
    } else {
        func_0003B46C((s32) arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B640);

void func_0003B704(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    func_00033C70(arg0 + 0x20, arg3, arg2 - arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B77C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B8C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B92C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003B99C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BA0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BA7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BB64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BC08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BCCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BDBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BE14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BE34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003BF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C018);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C0A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C1E0);

s32 func_0003C264(struct Unk_func_0003C264_0 *arg0, struct Unk_func_0003C264_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg0->unk0 == arg1->unk0) {
        if ((arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8) && (arg0->unkC == arg1->unkC)) {
            var_a2 = arg0->unk10 == arg1->unk10;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C2C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C4DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C670);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003C8AC);

void func_0003C908(s32 *arg0, struct Unk_func_0003C908_1 *arg1) {
    arg1->unk0 = (s32) (arg1->unk0 * *arg0);
    arg1->unk4 = (s32) (arg1->unk4 * *arg0);
    arg1->unk8 = (s32) (arg1->unk8 * *arg0);
    arg1->unkC = (s32) (arg1->unkC * *arg0);
}

void func_0003C95C(s32 *arg0, struct Unk_func_0003C95C_1 *arg1) {
    arg1->unk0 = (s32) ((s32) arg1->unk0 / (s32) *arg0);
    arg1->unk4 = (s32) ((s32) arg1->unk4 / (s32) *arg0);
    arg1->unk8 = (s32) ((s32) arg1->unk8 / (s32) *arg0);
    arg1->unkC = (s32) ((s32) arg1->unkC / (s32) *arg0);
}

void func_0003C9B8(s32 *arg0, struct Unk_func_0003C9B8_1 *arg1) {
    arg1->unk0 = (s32) (arg1->unk0 * *arg0);
    arg1->unk4 = (s32) (arg1->unk4 * *arg0);
}

void func_0003C9E4(s32 *arg0, struct Unk_func_0003C9E4_1 *arg1) {
    arg1->unk0 = (s32) ((s32) arg1->unk0 / (s32) *arg0);
    arg1->unk4 = (s32) ((s32) arg1->unk4 / (s32) *arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CA18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CAE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD348);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD388);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD398);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD3D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD41C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD460);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD484);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD494);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD4BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD4D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD4E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD508);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD514);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CB6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CC50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CCC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003CEA0);

void func_0003D55C(struct Unk_func_0003D55C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C + 1;
    arg0->unk1C = temp_v0;
    if (temp_v0 != 1) {
        return;
    }
    arg0->unk4 = (s32) arg0->unk0;
}

void func_0003D584(struct Unk_func_0003D584_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C - 1;
    arg0->unk1C = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003D5A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003D5C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003D60C);

void func_0003D734(struct Unk_func_0003D734_0 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = arg0->unk8;
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
        arg0->unk8 = 0;
    }
    temp_s0_2 = arg0->unk0;
    if (temp_s0_2 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_2, 0);
        arg0->unk0 = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003D7B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003D86C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003DA50);

void func_0003DC34(void *arg0) {
    void *temp_v0;
    void *var_v1;

    func_00050610(arg0 + 0x30);
    var_v1 = M2C_FIELD(arg0, void **, 0x2C8);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x3C);
            M2C_FIELD(var_v1, s32 *, 0x70) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x2C8) = temp_v0;
        } while (temp_v0 != NULL);
    }
    func_00041450(arg0 + 0x58C);
    func_00041450(arg0 + 0x580);
    func_00041450(arg0 + 0x574);
    func_00041450(arg0 + 0x568);
    func_00021E0C(arg0 + 0x548);
    func_00021E0C(arg0 + 0x528);
    func_00021E0C(arg0 + 0x508);
    func_000358EC(arg0 + 0x188);
}

void func_0003DCBC(void *arg0) {
    void *temp_v0;
    void *var_v1;

    func_00050610(arg0 + 0x30);
    var_v1 = M2C_FIELD(arg0, void **, 0x2C8);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x3C);
            M2C_FIELD(var_v1, s32 *, 0x70) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x2C8) = temp_v0;
        } while (temp_v0 != NULL);
    }
    func_00041450(arg0 + 0x58C);
    func_00041450(arg0 + 0x580);
    func_00041450(arg0 + 0x574);
    func_00041450(arg0 + 0x568);
    func_00021E0C(arg0 + 0x548);
    func_00021E0C(arg0 + 0x528);
    func_00021E0C(arg0 + 0x508);
    func_000358EC(arg0 + 0x188);
}

void func_0003DD44(struct Unk_func_0003DD44_0 *arg0, struct Unk_func_0003DD44_1 *arg1) {
    arg1->unk3C = (void *) arg0->unk2C8;
    arg0->unk2C8 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003DD54);

s32 func_0003DE84(struct Unk_func_0003DE84_0 *arg0) {
    return (arg0->unk4 - arg0->unk0) * (arg0->unkC - arg0->unk8);
}

s32 func_0003DEA8(struct Unk_func_0003DEA8_0 *arg0, struct Unk_func_0003DEA8_1 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg0->unk0 < arg1->unk4) && (arg1->unk0 < arg0->unk4) && (arg0->unk8 < arg1->unkC)) {
        var_a2 = arg1->unk8 < arg0->unkC;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003DEF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003E0EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003E2CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003E3B4);

void func_0003E4A4(struct Unk_func_0003E4A4_0 *arg0) {
    void *var_s0;

    func_0004E740();
    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            func_0003E4A4(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 8);
        } while (var_s0 != NULL);
    }
}

void func_0003E4E4(s32 arg0) {
    func_0003E4A4(arg0 + 0x30);
    func_000220E8(arg0 + 0x508);
    func_000220E8(arg0 + 0x548);
    func_000220E8(arg0 + 0x528);
    func_00035988(arg0 + 0x188);
}

void func_0003E530(s32 arg0, void **arg1) {
    void *temp_s0;
    void *var_s1;

    var_s1 = *arg1;
    *arg1 = NULL;
    if (var_s1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_s1, void **, 8);
            M2C_FIELD(var_s1, void **, 8) = NULL;
            func_00033D8C(var_s1);
            func_00022068(arg0 + 0x528, var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

void func_0003E590(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE8) = arg1;
    func_0003EA70();
    func_0003E3B4(arg0, arg0 + 0x104);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003E5C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003EA70);

void func_0003EACC(void *arg0) {
    func_0003EA70();
    func_0003E3B4(arg0, arg0 + 0x104);
    func_000506B0(arg0 + 0x30);
}

void func_0003EB08(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) < arg2) {
        if (M2C_FIELD(arg0, s32 *, 0xE0) != arg1) {
            func_0003E3B4(arg0, arg0 + 0x104);
            M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
        }
        M2C_FIELD(arg0, s32 *, 0xE4) = arg2;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003EB68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003EBC0);

void func_0003F104(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x100) != 0) {
        func_00050704(arg0 + 0x30, arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x100) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003F148);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003F21C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD5DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD65C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD6DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003F398);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0003FEB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040024);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0004009C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000400E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040238);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040298);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040434);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040454);

void func_00040830(s32 arg0, struct Unk_func_00040830_1 *arg1) {
    void *temp_v0;
    void *var_a1;
    void *var_s0;

    if (arg1 != NULL) {
        temp_v0 = arg1->unk10;
        if ((temp_v0 == NULL) || (M2C_FIELD(temp_v0, u8 *, 0xB) != 9)) {
            var_s0 = arg1->unkC;
        } else {
            func_00019A98(arg1->unkA0);
            var_s0 = arg1->unkC;
        }
        if (var_s0 != NULL) {
            var_a1 = var_s0;
            do {
                func_00040830(arg0, var_a1);
                var_s0 = M2C_FIELD(var_s0, void **, 8);
                var_a1 = var_s0;
            } while (var_s0 != NULL);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000408B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD768);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00040B90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", D_000BD7B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00041030);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_00041150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_000412EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_01E9D0", func_0004134C);

