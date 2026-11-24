/* cflags: -Os */
#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION == 282
void func_00015C1C(struct Unk_func_0000B3C4_0 *arg0, s32 arg1, s32 arg2) {
    func_00013360(arg0, arg1);
    arg0->unk0 = &D_00025300;
    func_0000AC4C((u8 *)arg0 + 0x20, 0);
    arg0->unk24 = arg2;
    arg0->unk1C = 0;
    func_00015E9C(arg0);
}

void func_00015C74(struct Unk_func_00015C74_0 *arg0, s32 arg1, s32 arg2) {
    func_00013360(arg0, arg1);
    arg0->unk0 = &D_00025300;
    func_0000AC4C((u8 *)arg0 + 0x20, 0);
    arg0->unk24 = arg2;
    arg0->unk1C = 0;
    func_00015E9C(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015CCC);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015D64);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015DFC);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_00025288);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252A0);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252A8);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00010360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E72C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E794);

void func_0000E818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E820);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015700);

void func_0000E898(s32 arg0, s32 arg1, s32 arg2) {
    func_00013360(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FC80;
    func_0000553C(arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00015E9C(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E8F0);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E97C);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000EA08);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252B8);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015E9C);

#if FW_VERSION < 282
void func_0000EB30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#else
void func_00015F1C(struct Unk_func_00015F1C_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015F24);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015FD0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016138);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000EBF4);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000ECD0);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000EDB8);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000161D4);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016390);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000163E0);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0001644C);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000164B8);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016548);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000165D8);

#if FW_VERSION < 282
void func_0000F298(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00017068(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}
#else
void func_00016678(struct Unk_func_00016678_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk18 = arg1;
    arg0->unk1C = arg2;
    arg0->unk8 = 0;
    func_00017068((u8 *)arg0 + 0xC);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000166A4);

#if FW_VERSION < 282
void func_0000F38C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#else
void func_0001672C(struct Unk_func_0001672C_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016734);

#if FW_VERSION < 282
s32 func_0000F480(void) {
    return 1;
}
#else
s32 func_00016828(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016830);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_0001FBF8);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_0001FC18);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_0001FC30);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000169EC);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016A44);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016A78);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000F7E8);
#else
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016BBC);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016C7C);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016CE0);

#if FW_VERSION < 282
s32 func_0000F968(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000F970);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016D5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000FA70);
#endif

#if FW_VERSION == 282
s32 func_00016D54(struct Unk_func_00016D54_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016D5C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016E94);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016EC0);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000117A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016F4C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016FD4);

#if FW_VERSION < 282
void func_0000FBB4(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}
#else
void func_00017010(void **arg0) {
    void *temp_s0;
    struct Unk_func_00017010_var_a0 *var_a0;
    struct Unk_func_00017010_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}
#endif
