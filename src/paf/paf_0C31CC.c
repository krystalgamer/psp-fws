#include "common.h"
#include "paf_decls.h"

void func_000C31CC(M2C_UNK **arg0) {
    *arg0 = &D_00199150;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C31F4);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3250);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_7C2C2742);
#endif

#if FW_VERSION == 270
void scePaf_7C2C2742(void) {
    sceGuStart(0, D_00198EE4, D_00198EE8);
}
#endif

#if FW_VERSION == 282
void scePaf_7C2C2742(void) {
    sceGuStart(0, D_001A5420, D_001A5424);
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_D0AD10FF);
#else
void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3338);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_B0C3E598);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006B024);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_2A7CDE78);
#endif

#if FW_VERSION == 270
void scePaf_2A7CDE78(s32 arg0) {
    D_001980C4 = arg0;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006B030);
#endif

#if FW_VERSION == 282
M2C_UNK *scePaf_B0C3E598(void) {
    return &D_001A542C;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_001A45D8 = arg0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C33A0);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C34F0);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_81773E1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006C4B8);
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C36A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006C5BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006B2E4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C36F0);
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3778);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006C964);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3A88);
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3B04);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3B54);

s32 func_000C3B84(void) {
    return D_001A53E0;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3B90);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3C00);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3C88);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3CB0);

s32 func_000C3D20(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5400;
    D_001A5400 = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3D30);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_0006B960);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_2AD8DE45);
#endif

#if FW_VERSION == 270
s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001980C8;
    D_001980C8 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3D70);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A45DC;
    D_001A45DC = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3E50);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C3E80);

void func_000C4000(void) {
    func_000C3E80(1, 0xFFFF);
}

void func_000C4020(void) {
    func_000C3E80(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4040);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4094);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4258);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4344);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C43B8);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C44C8);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4588);

void func_000C45F4(struct Unk_func_000C45F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4604);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4644);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C466C);

s32 func_000C46A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A45E0 != arg1) {
        var_v0 = func_000C7280(arg0, arg1);
    }
    return var_v0;
}

s32 func_000C46D4(void) {
    return D_001A45E0;
}

s32 func_000C46E0(void) {
    return D_001A45E0;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C46EC);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4738);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4784);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C47E4);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4844);

INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_2FF0A287);

INCLUDE_RODATA("nonmatchings/paf_0C31CC", D_00199150);

INCLUDE_RODATA("nonmatchings/paf_0C31CC", D_00199160);

INCLUDE_RODATA("nonmatchings/paf_0C31CC", D_00199168);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4988);

INCLUDE_ASM("nonmatchings/paf_0C31CC", scePaf_FF74C932);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4AD8);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4C10);

s32 func_000C4E70(struct Unk_func_000C4E70_0 *arg0) {
    return arg0->unk1B8;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4E78);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4F04);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4FA8);

void func_000C4FCC(struct Unk_func_000C4FCC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C4FDC);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C501C);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C5108);

INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000C517C);

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C31CC", func_000BE958);
#endif

#if FW_VERSION == 270
void func_000BE958(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}
#endif

#if FW_VERSION == 282
void func_000C523C(struct Unk_func_000C523C_0 *arg0) {
    arg0->unk18 = 1;
}
#endif

s32 func_000C5248(void) {
    return 0;
}

void func_000C5250(struct Unk_func_000C5250_0 *arg0) {
    arg0->unk0 = &D_0016EE68;
    arg0->unk4 = 0x110000;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}

void scePaf_2313DDCA(struct Unk_scePaf_2313DDCA_0 *arg0) {
    arg0->unk0 = &D_0016EE68;
    arg0->unk4 = 0x110000;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}
