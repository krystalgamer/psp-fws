#include "common.h"
#include "paf_decls.h"

void func_000C52B8(struct Unk_func_000C52B8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1C = arg2;
    arg0->unk0 = &D_0016EE68;
    arg0->unk4 = (s32) ((arg1 & 0xFFFF) | 0x410000);
    arg0->unk8 = 0;
}

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C52E0);
#else
void func_000C52E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg7;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0016EE68;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg2 & 0xFFFF0000) | (arg1 & 0xFFFF));
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x14) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_E9BF6BEB);
#else
void scePaf_E9BF6BEB(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg7;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0016EE68;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg2 & 0xFFFF0000) | (arg1 & 0xFFFF));
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x14) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5350);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C53CC);

void func_000C5434(s32 arg0) {
    scePaf_3E203AEB(D_001A5B80, 0, arg0);
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C545C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5484);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199188);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C54AC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C54F4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5520);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5580);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D10C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
s32 func_0006D10C(s32 arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;

    D_00138868 = 1;
    D_00127134 = 1;
    D_00127148 = 0;
    temp_v0 = scePaf_3586BE05(0x10, arg0);
    D_001397B0 = temp_v0;
    if (temp_v0 != 0) {
        D_001A5B80 = scePaf_6D491648(0, arg0, temp_v0);
    }
    temp_v0_2 = func_00116678((s32) &D_001261D8, 0x47);
    D_001A5B78 = temp_v0_2;
    M2C_VFIELD(&D_001261E4, s32, 8) = func_000B8AE0(temp_v0_2);
    temp_v0_3 = func_000B94C8((s32) &D_001261E4, &sp0);
    D_001A5B34 = temp_v0_3;
    var_v1 = 1;
    if (temp_v0_3 == 0) {
        var_v1 = 0;
        D_00127148 |= 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_0006D10C(s32 arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    D_00138868 = 1;
    temp_v0_2 = scePaf_3586BE05(0x10, arg0);
    D_001397B0 = temp_v0_2;
    if (temp_v0_2 != 0) {
        D_001A5B80 = scePaf_6D491648(0, arg0, temp_v0_2);
    }
    temp_v0_3 = func_00116678((s32) &D_0013886C, 0x47);
    D_001A5B78 = temp_v0_3;
    M2C_VFIELD(&D_00138878, s32, 8) = func_000B8AE0(temp_v0_3);
    temp_v0 = func_000B94C8((s32) &D_00138878, &sp0);
    D_001A5B34 = temp_v0;
    return temp_v0 != 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D1B8);
#endif

#if FW_VERSION < 200
void func_0006D1B8(void) {
    func_000B97C0(D_001A5B34);
    D_001A5B34 = 0;
    if (D_001A5B78 != 0) {
        func_00116858(D_001A5B78);
        D_001A5B78 = 0;
    }
    if (D_001A5B80 != 0) {
        scePaf_8A861692(D_001A5B80);
        D_001A5B80 = 0;
    }
    if (D_001397B0 != 0) {
        scePaf_545FE2DA(D_001397B0);
        D_001397B0 = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_F8301DBC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BEEC8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BEF1C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BEF6C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D25C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D290);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D2C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C55B4);

void func_000C56EC(void) {
    if (D_001A5B44 != NULL) {
        func_000C6198(*D_001A5B44);
        scePaf_545FE2DA(D_001A5B44);
        D_001A5B44 = NULL;
    }
    sceFontDoneLib(D_001A5B34);
    D_001A5B34 = 0;
    if (D_001A5B78 != 0) {
        func_00116858(D_001A5B78);
        D_001A5B78 = 0;
    }
    if (D_001A5B80 != 0) {
        scePaf_8A861692(D_001A5B80);
        D_001A5B80 = 0;
    }
    if (D_001A5B74 != NULL) {
        scePaf_545FE2DA(D_001A5B74);
        D_001A5B74 = NULL;
    }
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_F8301DBC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C57FC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C585C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C58AC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001991D4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001991E0);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001991F0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00196C78);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C58FC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5950);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C59A4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5A2C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5AB4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5BB0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5D04);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BF4DC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5E28);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5E5C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5E7C);
#endif

#if FW_VERSION < 200
void func_000C5E7C(struct Unk_func_000C5E7C_0 *arg0, struct Unk_func_000C5E7C_1 *arg1) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) arg1->unk0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) arg1->unk4;
    arg0->unk10 = arg1->unk8;
    func_0006DAD8((s32) arg0);
}
#endif

#if FW_VERSION == 282
void func_000C5E7C(struct Unk_func_000C5E7C_0 *arg0, struct Unk_func_000C5E7C_1 *arg1) {
    arg0->unk10 = (s32) arg1->unk0;
    arg0->unk14 = (s32) arg1->unk4;
    arg0->unk18 = (s32) arg1->unk8;
    func_000C62E0();
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5EAC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006D800);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5D40);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5ED8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C600C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6198);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006DA1C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BF908);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BF9A4);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006DAD8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6210);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C62E0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C638C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6480);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C64A0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C64D0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6500);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6530);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_462E5873);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C59CC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C59EC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C5ACC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000BFB78);
#endif

#if FW_VERSION == 282
s32 func_000C656C(s32 arg0) {
    return func_000C658C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C658C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C666C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6754);

void func_000C6800(void) {
    func_000C6754(1, 0xFFFF);
}

void func_000C6820(void) {
    func_000C6754(0, 0xFFFF);
}

s32 *func_000C6840(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000C68EC(arg1, arg2);
    return arg0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006DE6C);
#else
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6878);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C68A8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C68EC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C327C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4888);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4AB4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4BEC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4C6C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4E34);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4E88);
#endif

#if FW_VERSION == 282
void func_000C68A8(s32 arg0, s32 arg1) {
    struct Unk_func_000C68A8_temp_v0 *temp_v0;

    temp_v0 = func_000C68EC(arg0, arg1);
    if (temp_v0->unk15 != 0) {

    } else {
        func_000C6AB4(arg0, temp_v0);
    }
}
#endif

#if FW_VERSION < 260 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C68EC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C327C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006DF68);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006DFAC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C3530);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E0FC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E268);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E2D8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E4BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E630);
#endif

#if FW_VERSION == 100
void func_0006E630(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 8);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E670);
#endif

#if FW_VERSION == 100
void func_0006E670(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 4);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 8);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_v1, M2C_UNK **, 8) = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6944);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6AB4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6CE0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6E18);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C6E98);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7060);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C70B4);
#endif

void func_000C7108(void) {
    func_000C7124();
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7124);

void func_000C717C(void) {
    func_000C7198();
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7198);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C4F98);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E710);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006E798);
#endif

#if FW_VERSION < 200
void *func_0006E798(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C71C4);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7280);

s32 func_000C7294(void) {
    return D_001A4624;
}

s32 func_000C72A0(void) {
    return D_001A4624;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C72AC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7358);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7404);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7470);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C74DC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C754C);
#endif

#if FW_VERSION < 200
void func_000C754C(struct Unk_vt_func_000C754C_arg0 **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}
#endif

#if FW_VERSION == 282
void func_000C754C(struct Unk_vt_func_000C754C_arg0 **arg0) {
    (*arg0)->unk18();
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_65920294);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_37DDBDD8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7708);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_A4F53FED);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C786C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_1AD33D73);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_DF887DED);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_92A46B32);
#else
s32 scePaf_92A46B32(s32 arg0, s32 arg1) {
    u32 temp_a0;

    scePaf_4E60E34C(arg0, 0x1000B, arg1);
    temp_a0 = M2C_FIELD(arg1, u32 *, 4);
    if ((temp_a0 >> 0x10) & 1) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((temp_a0 & 0xFFF0FFFF) | 0x40000);
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_905347E9);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_585B93BC);
#else
s32 scePaf_585B93BC(s32 arg0, s32 arg1) {
    u32 temp_a0;

    scePaf_4E60E34C(arg0, 0x2000E, arg1);
    temp_a0 = M2C_FIELD(arg1, u32 *, 4);
    if ((temp_a0 >> 0x10) & 1) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((temp_a0 & 0xFFF0FFFF) | 0x20000);
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_DC544921);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C7C50);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_39C55C03);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_F47CA1C2);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_4E60E34C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8140);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C83C0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C84B4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_DDA68BE8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_EAA5AFF6);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_3F81333A);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071190);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C87BC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199218);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071258);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_01CF521E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = arg0->unk10;
    var_a1 = 1;
    if (!(((u32) temp_v0 >> 0x10) & 1)) {
        arg0->unk10 = temp_v0 | 0x10000;
        var_a1 = 0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_3C68DCB7);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
s32 scePaf_3C68DCB7(void *arg0) {
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 1;
    if ((temp_v0 >> 0x10) & 1) {
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_v0 & 0xFFFEFFFF);
        var_a1 = 0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000713BC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007148C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071510);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_00071510(void) {
    func_0007148C(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071530);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_00071530(void) {
    func_0007148C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071550);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0006FCA0);

s32 func_0006FE18(void *arg0) {
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 1;
    if (!((temp_v0 >> 0x10) & 1)) {
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_v0 | 0x10000);
        var_a1 = 0;
    }
    return var_a1;
}

s32 func_0006FE44(void *arg0) {
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 1;
    if ((temp_v0 >> 0x10) & 1) {
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_v0 & 0xFFFEFFFF);
        var_a1 = 0;
    }
    return var_a1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8894);

s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = arg0->unk10;
    var_a1 = 1;
    if (__builtin_allegrex_ext(temp_v0, 0x10, 1) == 0) {
        arg0->unk10 = (s32) (temp_v0 | 0x10000);
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_3C68DCB7);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C89F0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8AB8);

void func_000C8B50(void) {
    func_000C8AB8(1, 0xFFFF);
}

void func_000C8B70(void) {
    func_000C8AB8(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8B90);
#endif

void func_000C8C10(struct Unk_func_000C8C10_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8C20);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8C60);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8C9C);

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000716C4);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8D04);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8D98);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8EA0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8F80);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C8FF4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071B1C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071BC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void ***func_00071BC8(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071C30);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071C6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C90D0);

void ***func_000C917C(void ***arg0, struct Unk_func_000C917C_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_000C917C_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C91E4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9220);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199230);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001930B0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199278);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9278);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199290);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992A0);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992B0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CC48);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992C0);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992C4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00193108);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CC58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B1BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012D864);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992D0);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992F8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001992FC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199304);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199308);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019930C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9540);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9788);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9810);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9898);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C98D8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C990C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C99E0);
#endif

#if FW_VERSION < 200
void func_000C99E0(struct Unk_func_000C99E0_0 *arg0) {
    void **temp_a0;

    temp_a0 = arg0->unk8C;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, u8 *), 0x94)(temp_a0, 0x12, &arg0->pad0[0x60]);
}
#endif

#if FW_VERSION == 282
void func_000C99E0(struct Unk_func_000C99E0_0 *arg0) {
    struct Unk_vt_func_000C99E0_temp_a0 **temp_a0;

    temp_a0 = arg0->unk8C;
    (*temp_a0)->unk98(temp_a0, 0x12, (u8 *)arg0 + 0x60);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9A10);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9A34);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9B0C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9C60);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C36DC);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00071160);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA1D0);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA494);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA50C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA53C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA544);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA670);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA760);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA850);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000732C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CA980);
#endif

void func_000CAAD4(void) {
}

void func_000CAADC(void) {
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAAE4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAB8C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAC40);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAC78);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00073668);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00073688);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAD2C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAD4C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAD94);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CAF88);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB0D4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB1C8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB2F0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB458);

void func_000CB824(s32 arg0) {
    func_000CC8B0(arg0 + 0xAC);
    func_000C9B0C(arg0);
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_6741C662);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_26DF747F);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB92C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_09AC6844);

void func_000CB988(struct Unk_func_000CB988_0 *arg0, s32 arg1) {
    arg0->unkE4 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB990);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CBAD0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_41BCFB59);

void func_000CBC30(struct Unk_func_000CBC30_0 *arg0, s32 arg1) {
    arg0->unkD8 = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000CBC88(arg0, arg1, arg2, 0, arg3, (s32) &D_001A4628, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_000CBC88(arg0, arg1, arg2, arg3, arg4, (s32) &D_001A4628, arg5);
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CBC88);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_6840D208);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CBF80);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_F1546D14);

void scePaf_607713A6(s32 arg0) {
    D_001A4694 = arg0;
}

void func_000CC2B4(s32 arg0) {
    D_001A5BA0 = arg0;
}

void scePaf_5EFC5387(s32 arg0) {
    D_001A5BA4 = arg0;
}

void scePaf_DFC8650C(s32 arg0) {
    D_001A5BA8 = arg0;
}

void func_000CC2D8(struct Unk_func_000CC2D8_0 *arg0, M2C_UNK *arg1) {
    if (arg1 != NULL) {
        arg0->unkEC = arg1;
        return;
    }
    arg0->unkEC = &D_001A4628;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_5DE0445F);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_FE575092);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_6C3BBB68);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_FA05BF7B);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC600);

void func_000CC680(void) {
    func_000CC600(1, 0xFFFF);
}

void func_000CC6A0(void) {
    func_000CC600(0, 0xFFFF);
}

void func_000CC6C0(struct Unk_func_000CC6C0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC6D0);

void func_000CC710(struct Unk_func_000CC710_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC720);

void ***func_000CC760(void ***arg0, struct Unk_func_000CC760_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_000CC760_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC7C8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC83C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC8B0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC94C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC9CC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCA8C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCB4C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCB88);

void func_000CCBE0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_000CCC00(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199360);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199364);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCC1C);

void func_000CCE8C(void) {
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCE94);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCEEC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCF10);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CCF44);

void func_000CD02C(void) {
    func_000D5CE4();
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD048);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD0E4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_A69BABE3);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00075908);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD164);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD1A8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD1F8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD248);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD2B0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD388);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD3B8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00075BD0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD42C);
#endif

void func_000CD528(struct Unk_func_000CD528_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000CD538(struct Unk_func_000CD538_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_000CD96C((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD56C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD6C0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD8B8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD96C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDA98);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDB14);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDB84);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDBF8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199370);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199374);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00196E08);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00196E88);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00196F10);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CE40);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00196FC4);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00197044);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001970CC);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019928C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001980D4_v271);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00197104);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CD00);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CD80);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CE08);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CE40);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CEBC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CF3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CFC4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001934B4);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019199C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018D90C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0018CFFC);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012D900);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B2DC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DA00);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DA34);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DAAC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B488);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B50C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011BEC0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001196C0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B540);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012D97C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DA00);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DA34);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DAAC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DB28);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DBAC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DBE0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199380);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199400);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199488);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001994C0);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019953C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001995BC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199644);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019967C);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001996F8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00076450);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000765C0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00076730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000746CC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00074818);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDC94);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDE04);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDF74);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CDFD8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE03C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE0A8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000768C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00074AF8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE108);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE480);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE4E4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE548);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE5EC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE728);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE7E4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE8C4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CE9D0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CEC8C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CECE4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CED9C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CEE18);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C82C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CEEAC);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CEF14);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CF368);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFA94);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFB7C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", scePaf_14CE7F6F);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFC48);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFCB0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFD10);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFD84);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFDFC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFE84);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFFC0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
void func_000CFFC0(struct Unk_func_000CFFC0_0 *arg0, s32 arg1) {
    func_000CFFE0((s32) arg0, arg0->unk15C, arg1);
}
#endif

#if FW_VERSION == 100
void func_000CFFC0(struct Unk_func_000CFFC0_0 *arg0, s32 arg1) {
    func_000CFFE0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x158), arg1);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CFFE0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D00DC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0130);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0244);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00076C80);
#else
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0390);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0574);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
s32 func_000D0574(struct Unk_func_000D0574_0 *arg0) {
    return arg0->unk188 == 0;
}
#endif

#if FW_VERSION == 100
s32 func_000D0574(struct Unk_func_000D0574_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x184) == 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000C9954);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0648);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078D18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00076EC4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0580);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0648);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0724);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D07D8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0888);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0A50);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0C18);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0CD4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0D3C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000775A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007949C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0E20);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0E94);
#endif

void func_000D0EE0(struct Unk_func_000D0EE0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0EF0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0FC4);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1098);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1390);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D14B0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D14EC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1544);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D15A0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00077FB8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00077DC8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D16A0);
#endif

void ***func_000D1798(void ***arg0, struct Unk_func_000D1798_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_000D1798_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1800);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1880);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1910);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D196C);

#if FW_VERSION == 100
s32 func_00078110(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0 & 0xFFFF;
    switch (var_a0) {                               /* irregular */
    case 0:
        var_a0 = 0x25C1;
        break;
    case 10:
        var_a0 = 0x21E9;
        break;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078130);
#endif

#if FW_VERSION < 200
void func_00078130(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078140);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078150);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000781BC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078228);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CB060);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A28C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000783CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D19EC);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1AA4);

void func_000D1AF4(struct Unk_func_000D1AF4_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000D1B04(struct Unk_func_000D1B04_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1B14);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1C10);

void func_000D1D28(void) {
    func_000D1D44();
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1D44);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A65C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078764);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1DBC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001997D8);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DD48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0011B738);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDD8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDDC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE74);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D1F58);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000789B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007AA64);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007AF84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00078B4C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079054);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2030);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D21C0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D273C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D28C8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2918);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D0788);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079210);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B2B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079314);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2968);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2A84);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2BB0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2C4C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CC374);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B554);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000795C0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2D20);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D2F70);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079954);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007BA70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079B10);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D30EC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3288);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D32DC);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3388);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007BC14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_00079CAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A028);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007C294);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A2F8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3434);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3898);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3B54);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3CB4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3D14);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
s32 func_000D3D14(struct Unk_func_000D3D14_0 *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = arg0->unk10;
    if ((var_v1 < arg2) && (arg1 < (u32) arg0->unk14)) {
        func_000D49D0(arg0, 3);
        var_v1 = arg0->unk10;
    }
    return var_v1 < arg1;
}
#endif

#if FW_VERSION == 100
s32 func_000D3D14(struct Unk_func_000D3D14_0 *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((var_v1 < arg2) && (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x20))) {
        func_000D49D0(arg0, 3);
        var_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    }
    return var_v1 < arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007C4B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A48C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3D70);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3E2C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A654);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000CD5F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007C764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007A73C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D3F3C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D402C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4204);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4488);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4664);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_000D4664(struct Unk_func_000D4664_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg0->unk8 == 0) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_00079954(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

#if FW_VERSION == 100
void func_000D4664(struct Unk_func_000D4664_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

    } else {
        func_0011C16C(arg2);
        sceGuDisable(9);
        func_00079954(M2C_FIELD(arg0, s32 *, 0x14), arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

#if FW_VERSION == 282
void func_000D4664(struct Unk_func_000D4664_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((arg0->unk8 == 0) || (arg0->unk44 == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_000D30EC(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D470C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D47C8);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199450);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199454);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDDC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001994F0);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00199570);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00198298);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019829C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDDC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00198338);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001983B8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001972C8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001972CC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDDC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00197368);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001973E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00193678);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0019367C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DDDC);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_0012DE3C);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_001998D8);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00193718);

INCLUDE_RODATA("nonmatchings/paf_0C52B8", D_00193798);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4884);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_000D4884(struct Unk_func_000D4884_0 *arg0, struct Unk_func_000D4884_1 *arg1) {
    arg0->unk30 = arg1->unk0;
    arg0->unk34 = arg1->unk4;
    arg0->unk38 = arg1->unk8;
    arg0->unk3C = arg1->unkC;
}
#endif

#if FW_VERSION == 100
void func_000D4884(struct Unk_func_000D4884_0 *arg0, struct Unk_func_000D4884_1 *arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) arg1->unk0;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) arg1->unk4;
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) arg1->unk8;
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) arg1->unkC;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007CF9C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007D018);
#endif

#if FW_VERSION == 282
void func_000D4884(struct Unk_func_000D4884_0 *arg0, struct Unk_func_000D4884_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007AF74);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B020);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D48A8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4924);
#endif

s32 func_000D49D0(struct Unk_func_000D3D14_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = arg0->unk4;
    if (arg1 < var_v1) {
        arg0->unk4 = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B0E4);
#endif

#if FW_VERSION < 200
void func_0007B0E4(void) {
    s32 temp_v0;

    if (D_00139804 == NULL) {
        temp_v0 = scePaf_B7E6052B(0xC);
        func_00078140(temp_v0);
        D_00139804 = (void *) temp_v0;
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B134);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B184);
#endif

#if FW_VERSION < 200
void func_0007B184(void) {
    if (D_00139804 != NULL) {
        M2C_FIELD(D_00139804, s32 *, 8) = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D49F0);

void func_000D4B20(void) {
    func_000D49F0(1, 0xFFFF);
}

void func_000D4B40(void) {
    func_000D49F0(0, 0xFFFF);
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4B60);

void func_000D4B9C(void **arg0) {
    void *temp_s0;
    struct Unk_func_000D4B9C_var_a0 *var_a0;
    struct Unk_func_000D4B9C_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_545FE2DA(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_545FE2DA(var_a0);
}

void func_000D4BF4(struct Unk_func_000D4BF4_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_000D4BF4_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_545FE2DA(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4C50);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4CDC);
#else
void func_000D4CDC(struct Unk_func_000D4CDC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4CEC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B35C);
#else
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4D2C);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4E20);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B43C);
#endif

#if FW_VERSION < 200
void func_0007B43C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B44C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007D448);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B48C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B4E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B5D8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4304);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B64C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007B6E8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4EA4);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D4F84);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D50E0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5170);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_0007D970);
#endif

#if FW_VERSION == 100
s32 func_0007B9F8(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x24), 1, NULL);
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    func_000BF280(arg0 + 0x28);
    sceKernelSignalSema((s32) M2C_FIELD(arg0, u32 *, 0x24), 1);
    func_000BF4C8(arg0);
    return 1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D51C4);
#endif

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D527C);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D53C8);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5494);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5528);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5608);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5644);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D56A0);

INCLUDE_ASM("nonmatchings/paf_0C52B8", func_000D5720);

void ***func_000D57AC(void ***arg0, struct Unk_func_000D57AC_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_000D57AC_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
