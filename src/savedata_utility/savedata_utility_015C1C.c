/* lang: c++ */
/* cflags[100,150,152,250,260]: -Os */
/* cflags: -O2 */
#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION >= 282
Class_0001FC80::Class_0001FC80(s32 owner, s32 arg2) : Class_00025160(owner), tex(0) {
    unk28 = arg2;
    unk1C = 0;
    LoadTexture();
}

Class_0001FC80::~Class_0001FC80() {
    Clear();
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_00025288);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252A0);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00010360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E72C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E794);
#endif

#if FW_VERSION < 282
void func_0000E818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000E820);
#endif


/* 1.00-2.60: the class is built -O2 but this splat TU is -Os (the real TU starts at the
   C2 ctor), so it stays asm/m2c there */
#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", _ZN14Class_0001FC80C2Eii);

void _ZN14Class_0001FC80C1Eii(void *arg0, s32 arg1, s32 arg2) {
    _ZN14Class_00025160C2Ei(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FC80;
    _ZN3paf12SurfaceRCPtrINS_7SurfaceEEC1EPS1_((u8 *)arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    _ZN14Class_0001FC8011LoadTextureEv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", _ZN14Class_0001FC80D2Ev);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", _ZN14Class_0001FC80D1Ev);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", _ZN14Class_0001FC80D0Ev);
#elif FW_VERSION == 271
Class_0001FC80::Class_0001FC80(s32 owner, s32 arg2) : Class_00025160(owner), tex(0) {
    unk28 = arg2;
    unk1C = 0;
    LoadTexture();
}

Class_0001FC80::~Class_0001FC80() {
    Clear();
}
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_000252B8);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", _ZN14Class_0001FC8011LoadTextureEv);

#if FW_VERSION < 282
void func_0000EB30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016E38);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000ECD0);
#endif

#if FW_VERSION >= 282
void func_00015F1C(struct Unk_func_00015F1C_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015F24);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00015FD0);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016138);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000170F0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000EBF4);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000ECD0);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0000EDB8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000161D4);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016390);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000163E0);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_0001644C);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000164B8);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016548);

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000165D8);

#if FW_VERSION == 271
void func_0000F298(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00017068(arg0 + 0xC);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0000F298(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00017068(arg0 + 0xC);
}
#endif

#if FW_VERSION < 250
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
#endif

#if FW_VERSION >= 282
void func_00016678(struct Unk_func_00016678_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk18 = arg1;
    arg0->unk1C = arg2;
    arg0->unk8 = 0;
    func_00017068((u8 *)arg0 + 0xC);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000166A4);

#if FW_VERSION == 271
void func_0000F38C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#endif

#if FW_VERSION < 271
void func_0000F38C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 282
s32 func_00016D54(struct Unk_func_00016D54_0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016D5C);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016E94);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_00025320);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_00025340);
__asm__(".globl _ZTV14Class_0001FC80\n_ZTV14Class_0001FC80 = D_00025340 - 8\n");
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_00025348);

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_0001FC80);
__asm__(".globl _ZTV14Class_0001FC80\n_ZTV14Class_0001FC80 = D_0001FC80 - 8\n");

INCLUDE_RODATA("nonmatchings/savedata_utility_015C1C", D_0001FC98);
#endif

INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_00016EC0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_utility_015C1C", func_000117A8);
#endif

#if FW_VERSION >= 282
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
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION >= 350
void func_00017010(void **arg0) {
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
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00017010(void **arg0) {
    void *temp_s0;
    struct Unk_func_00017010_var_a0 *var_a0;
    struct Unk_func_00017010_var_v0 *var_v0;

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
