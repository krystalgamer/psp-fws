/* lang: c++ */
#include "common.h"
#include "savedata_utility_decls.h"
#include "paf.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00010FEC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00010FEC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011014);

s32 func_00011044(struct Unk_func_00011044_0 *arg0) {
    return arg0->unk1C;
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001104C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011068);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011100);

void func_00011150(s32 arg0) {
    func_00019318(arg0 + 8, arg0 + 0x14, arg0 + 0xC, arg0 + 0x10);
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001117C);

void func_000112D4(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113AC((s32) arg0);
}

void func_000112FC(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113AC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000250E0D2Ev);

void _ZN14Class_000250E0D1Ev(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113C4((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000250E0D0Ev);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void _ZN14Class_000250E0D0Ev(M2C_UNK **arg0) {
    *arg0 = &D_000250E0;
    func_000113C4((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000113AC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000113C4);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011424);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000114AC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000114EC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011584);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000116E0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011738);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011794);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000117E0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011898);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000118C8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011904);

void func_00011968(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011978);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00011978(M2C_UNK **arg0) {
    *arg0 = &D_00025100;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000119A0C2Eii);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011A1C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000119A0D2Ev);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011AD4);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011B10);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011B60);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011B78);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000250E0);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000250F0);

#if FW_VERSION < 282
__asm__(".globl _ZTV14Class_000250F0\n_ZTV14Class_000250F0 = D_000250F0 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025100);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011BDC);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025158);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025138);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025148);

__asm__(".globl _ZTV14Class_00025148\n_ZTV14Class_00025148 = D_00025148 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025160);

__asm__(".globl _ZTV14Class_00025160\n_ZTV14Class_00025160 = D_00025160 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000251B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001F9F8);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025138);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025148);

__asm__(".globl _ZTV14Class_00025148\n_ZTV14Class_00025148 = D_00025148 - 8\n");
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025160);

__asm__(".globl _ZTV14Class_00025160\n_ZTV14Class_00025160 = D_00025160 - 8\n");
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00009FF4);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011C58);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011CB0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011DD4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BE0C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011E4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
void func_0000BE88(void) {

}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A190);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A1BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011DE0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011E5C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011EDC);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000129FC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A0C);
#endif

#if FW_VERSION < 282
void func_0000A2E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#else
void func_00011F5C(struct Unk_func_00011F5C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011F6C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00011FAC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012000);

#if FW_VERSION < 282
void func_0000A428(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000120E8((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A46C);
#endif

#if FW_VERSION >= 282
void func_000120A4(struct Unk_func_000120A4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000120E8((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000120E8);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000121D0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000121D8);
#endif

#if FW_VERSION >= 282
void func_000121E0(void) {
}

void func_000121E8(void) {
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000121F0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012268);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000122E0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012350);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000123C0);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A8E8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012434);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A918);

void func_0000A930(void) {

}

void func_0000A938(void) {

}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000B554);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_0000C620(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001244C);

#if FW_VERSION < 282
void func_0000A990(s32 arg0) {
    func_00012CF0(arg0 + 8);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000A9AC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C698);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 func_0000C698(void) {
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012AC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C6A0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000AB4C);
#endif

#if FW_VERSION < 250
s32 func_0000ABD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) != 0;
}
#endif

#if FW_VERSION >= 282
void func_0001249C(s32 arg0) {
    func_00012CF0(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000124B8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001250C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000126C0);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000AC34);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012714);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012E04);

void func_00012ED4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = Job_Start(0, (s32 *) func_0000C698, arg0, -1, -1, &func_00012AC8);
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000ADC4);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001F9F8);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025138);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000AEF0);

void func_0000AF7C(void) {
    func_0000AEF0(1, 0xFFFF);
}

void func_0000AF9C(void) {
    func_0000AEF0(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012970);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012848);

void func_00012928(struct Unk_func_00012928_0 *arg0) {
    arg0->unk38 = Job_Start(0, &func_000124B8, arg0, -1, -1, &func_0001250C);
}

void func_00012970(struct Unk_func_00012970_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012980);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000129FC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A0C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A4C);
#else
void func_000129FC(struct Unk_func_000129FC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A0C);

void func_00012A4C(struct Unk_func_00012A4C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A5C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012A9C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012AF0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012B78);

#if FW_VERSION < 282 || FW_VERSION >= 350
void func_00012BB4(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#else
void func_00012BB4(void **arg0) {
    void *temp_s0;
    struct Unk_func_00012BB4_var_a0 *var_a0;
    struct Unk_func_00012BB4_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION < 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012C0C);
#else
void func_00012C0C(struct Unk_func_00012C0C_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_00012C0C_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012C68);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012CF0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000134BC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000132C0);
#endif

#if FW_VERSION == 100
void ***func_0000B360(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION < 250
void func_0000B3C8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000B734((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012D64);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012E6C);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BEFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void ***func_0000CFF0(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 350
void ***func_00012F10(void ***arg0, struct Unk_func_00012F10_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 -= 1;
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void ***func_00012F10(void ***arg0, struct Unk_func_00012F10_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_00012F10_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00012F78);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001300C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001311C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001396C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000B734);
#endif

#if FW_VERSION < 282
void func_0000B818(void) {
    sce_paf_private_malloc();
}

void func_0000B834(void) {
    sce_paf_private_memalign();
}

void func_0000B850(void) {
    sce_paf_private_free();
}

void func_0000B86C(void) {
    sce_paf_private_qsort();
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_00025160C2Ei);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C390);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013214);

void func_000132F0(void) {
    sce_paf_private_malloc();
}

void func_0001330C(void) {
    sce_paf_private_memalign();
}

void func_00013328(void) {
    sce_paf_private_free();
}

void func_00013344(void) {
    sce_paf_private_qsort();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
Class_00025160::Class_00025160(s32 owner) {
    Reset();
    this->owner = owner;
    unk10 = -1;
    unk14 = -1;
}
#endif

Class_00025160::~Class_00025160() {
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000251605ResetEv);

#if FW_VERSION < 282
void func_0000B978(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013458);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013A28);
#endif

#if FW_VERSION >= 282
void func_00013450(struct Unk_func_00013450_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013458);
#endif

#if FW_VERSION == 271
s32 func_0000BA00(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 4, 1);
}
#endif

#if FW_VERSION < 271
s32 func_0000BA00(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 8) >> 4) & 1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0000BA10(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0xD8) != 0;
}
#endif

#if FW_VERSION < 250
s32 func_0000BA10(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x18) != 0;
}
#endif

#if FW_VERSION < 282
s32 func_0000BA20(void *arg0, s32 arg1) {
    if (!(M2C_FIELD(arg0, u8 *, 8) & 1) && arg1 == M2C_FIELD(arg0, s32 *, 0x10)) {
        return 1;
    }
    return 0;
}
#endif

#if FW_VERSION < 250
s32 func_0000BA4C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x19) == 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000BA5C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        Job_Cancel(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION < 250
void func_0000BA5C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        Job_Cancel(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C560);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_00025148C1Ei);

Class_00025148::~Class_00025148() {
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C658);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000134B8);

s32 func_0001354C(struct Unk_func_0001354C_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk8, 4, 1);
}

s32 func_00013558(struct Unk_func_00013558_0 *arg0) {
    return (arg0->unk8 & 0xD8) != 0;
}

s32 func_00013568(struct Unk_func_00013568_0 *arg0, s32 arg1) {
    if (!(arg0->unk8 & 1) && arg1 == arg0->unk10) {
        return 1;
    }
    return 0;
}

void func_00013594(struct Unk_func_00013594_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        Job_Cancel(0, temp_v0);
        arg0->unkC = 0;
    }
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
Class_00025148::Class_00025148(s32 owner) : Class_00025160(owner) {
    Init();
}

Class_00025148::~Class_00025148() {
}

void Class_00025148::Init() {
    unk18 = 0;
    unk1C = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000136D8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013C78);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BBD4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BCA8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013D48);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013DFC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BD50);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BDD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013704);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013724);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000137B8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001384C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013960);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013FFC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BF98);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000BFFC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013A4C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013B28);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013B68);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013BA4);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013BE0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013C30);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013CDC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013D18);

#if FW_VERSION < 282
void func_0000C258(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00025288;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_00013DB8((s32) arg0);
}
#else
void func_00013D44(struct Unk_func_00013D44_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_00025288;
    arg0->unk4 = arg1;
    func_00013DB8((s32) arg0);
}
#endif

Class_00025288::~Class_00025288() {
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013DB8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013DD0);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00013F4C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014034);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001474C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000C69C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_000015CC(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_000015CC(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionEv());
    func_000015CC(&sp0);
}
#endif

#if FW_VERSION < 260
void func_0000C69C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterE6Locale(-1));
    func_000015CC(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_000015CC(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionE6Locale(-1));
    func_000015CC(&sp0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000141B8);

void func_0001425C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00006934(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00006934(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionEv());
    func_00006934(&sp0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000142C4);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000C784(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000C824(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void func_0000C784(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000C824(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C784);
#endif

#if FW_VERSION < 103
void func_0000C784(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000C824(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C824);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000C860(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C860);
#endif

#if FW_VERSION < 103
void func_0000C860(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_0000E42C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg4;
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
    func_0000C784((s32) arg0, arg1, arg2, arg3, (s32) &func_0000E458, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000C868);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025148);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
__asm__(".globl _ZTV14Class_00025148\n_ZTV14Class_00025148 = D_00025148 - 8\n");
#endif

#if FW_VERSION < 250
__asm__(".globl _ZTV14Class_00025148\n_ZTV14Class_00025148 = D_00025148 - 8\n");
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025160);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
__asm__(".globl _ZTV14Class_00025160\n_ZTV14Class_00025160 = D_00025160 - 8\n");
#endif

#if FW_VERSION < 260
__asm__(".globl _ZTV14Class_00025160\n_ZTV14Class_00025160 = D_00025160 - 8\n");
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E458);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00021BDC);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00021BE0);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00021BE4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014A68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E4D8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E578);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000CC04);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D154);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F00C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001535C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F090);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F1C0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FA84);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00027770);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025174);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0002091C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00021C28);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F1C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FAA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0002679C);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FAAC);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FABC);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FAD0);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FAE4);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FAF8);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB0C);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB20);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB28);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB30);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB44);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB5C);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0001FB7C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D154);
#endif

#if FW_VERSION >= 282
void func_00014344(struct Unk_func_00014344_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_000143E4(arg0);
    arg0->unkC = arg3;
    arg0->unk10 = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_000143E4(struct Unk_func_00014344_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        _ZN3vsh13MessageDialog10HideDeleteEv(temp_v0);
        arg0->unk10 = 0;
    }
}

void func_00014420(struct Unk_func_00014420_0 *arg0) {
    arg0->unk10 = 0;
}
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014428);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D338);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000DF40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D48C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D674);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000D674(paf::View *view, paf::PhWidget *widget, s32 idx) {
    widget->SetTexture(paf::SurfaceRCPtr<paf::Surface>(0), (idx << 16) | 1);
    widget->SetTexture(view->GetTexture("tex_broken_data"), idx << 16);
    widget->SetTexture(view->GetTexture("tex_broken_data_f"), (idx << 16) | 7);
    widget->SetTexture(view->GetTexture("tex_broken_data_s"), (idx << 16) | 0xE);
}
#endif

#if FW_VERSION == 100
void func_0000D674(paf::View *view, paf::PhWidget *widget, s32 idx) {
    widget->SetTexture(paf::SurfaceRCPtr<paf::Surface>(0), (idx << 16) | 1);
    widget->SetStyle(idx << 16, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FAAC), idx << 16);
    widget->SetStyle((idx << 16) | 7, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FABC), (idx << 16) | 7);
    widget->SetStyle((idx << 16) | 0xE, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FAD0), (idx << 16) | 0xE);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F564);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F718);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000F95C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000D88C);
#endif

#if FW_VERSION == 100
void func_0000D88C(paf::View *view, paf::PhWidget *widget, s32 idx) {
    widget->SetTexture(paf::SurfaceRCPtr<paf::Surface>(0), (idx << 16) | 1);
    widget->SetStyle(idx << 16, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FAE4), idx << 16);
    widget->SetStyle((idx << 16) | 7, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FAF8), (idx << 16) | 7);
    widget->SetStyle((idx << 16) | 0xE, 0x19, 3);
    widget->SetTexture(view->GetTexture(D_0001FB0C), (idx << 16) | 0xE);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000DAA4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E8C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000144AC);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025118);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025138);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025148);

__asm__(".globl _ZTV14Class_00025148\n_ZTV14Class_00025148 = D_00025148 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025160);

__asm__(".globl _ZTV14Class_00025160\n_ZTV14Class_00025160 = D_00025160 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025170);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025174);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000145D4);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025194);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_0002519C);

void func_00014824(paf::View *view, paf::PhWidget *widget, s32 idx) {
    widget->SetTexture(paf::SurfaceRCPtr<paf::Surface>(0), (idx << 16) | 1);
    widget->SetTexture(view->GetTexture("tex_broken_data"), idx << 16);
    widget->SetTexture(view->GetTexture("tex_broken_data_f"), (idx << 16) | 7);
    widget->SetTexture(view->GetTexture("tex_broken_data_s"), (idx << 16) | 0xE);
}

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000149D8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014B8C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014DD0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014E34);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000DDA0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00025288);

__asm__(".globl _ZTV14Class_00025288\n_ZTV14Class_00025288 = D_00025288 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000252A0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000252E8);

INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_000252B8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_010FEC", D_00027890);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015E74);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015310);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014EEC);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00014FA8);

void func_00015310(struct Unk_func_00015310_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015320);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015388);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015404);

#if FW_VERSION < 282
void func_0000E000(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000156E0();
}
#else
void func_0001549C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000156E0();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000154BC);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015534);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E098);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000155C8);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000156E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E29C);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015700);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015738);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000252B8D2Ev);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000252B8D1Ev);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", _ZN14Class_000252B8D0Ev);

#if FW_VERSION >= 271
void func_000157FC(s32 arg0) {
    sce_paf_private_memset(arg0 + 0xA20, 0, 0x10);
    func_00015834(arg0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000157FC);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
void func_000157FC(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0xA34) = 0;
    sce_paf_private_memset(arg0 + 0xA20, 0, 0x10);
    func_00015834(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015834);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015874);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015924);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001598C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E454);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
void func_0000E454(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA34);
    if (temp_v0 != 0) {
        func_00019DE0(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA34) = 0;
    }
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000EE2C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E490);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E520);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015884);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015934);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0001599C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_000159B8);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E618);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
void func_0000E618(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA20);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA20) = 0;
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
        M2C_FIELD(arg0, s32 *, 0xA28) = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015A68);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00015A68(struct Unk_func_00015A68_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkA20;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unkA20 = 0;
        arg0->unkA24 = 0;
        arg0->unkA28 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015AAC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015B6C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00010360);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_0000E794);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015B7C);

INCLUDE_ASM("nonmatchings/savedata_utility_010FEC", func_00015BEC);

void func_00015C14(struct Unk_func_00015C14_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
}
#endif
