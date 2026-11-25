#include "common.h"
#include "pafmini_decls.h"

s32 *func_0000DD54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000DE70(arg1, arg2);
    return arg0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F204_v100);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DD8C);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DDF4);
#endif

#if FW_VERSION == 282
void func_0000DDF4(s32 arg0, s32 arg1) {
    struct Unk_func_0000DDF4_temp_v0 *temp_v0;

    temp_v0 = func_0000DE70(arg0, arg1);
    if (temp_v0->unk1D != 0) {

    } else {
        func_0000E138(arg0, temp_v0);
    }
}
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DE70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F3AC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F3F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F548);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F740);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F7B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F994);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FB08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000FB08(M2C_UNK **arg0, M2C_UNK *arg1) {
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FB48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000FB48(M2C_UNK **arg0, M2C_UNK *arg1) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FB88);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FBA4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FBB0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FBCC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FBE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FC80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void *func_0000FC80(void **arg0) {
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FCB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000FCB8(void *arg0) {
    M2C_FIELD(&D_0010F1A4, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_0010F1A4, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_0010F1A4, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_0010F1A4, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_0010F1A4, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_0010F1A4, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_0010F1A4, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FCF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0000FCF0(void) {
    return &D_0010F1A4;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_C01BF169);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_910BCFE1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FD3C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FD7C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D188831A);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_AD1721B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_849ED670);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_75DBA857);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FFCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000105C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001071C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010874);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010074);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010194);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000102B4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000103DC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000104F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010664);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001075C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010838);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000108FC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010998);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010A38);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010A6C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010AA0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010AE0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010B1C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010B74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011264);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010C00);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010C8C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010E64);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010FE0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010FF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011028);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00011028(void) {
    return &D_000FDB38;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011034);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000110C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011118);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000111E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011258);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001126C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000112A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_000112A0(void) {
    return &D_000FDB4C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000112AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000113E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000113E8(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000113F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000113F0(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000113F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011464);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000114D0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000114E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011518);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00011518(void) {
    return &D_000FDB68;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011524);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011598);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001160C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011620);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011654);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00011654(void) {
    return &D_000FDB78;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011660);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001179C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001179C(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000117A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000117A4(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7DDE0658);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000117E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000118A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011914);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011928);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001195C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0001195C(void) {
    return &D_000FDB8C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011968);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011A14);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011A4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_1A468B86);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011AC8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBBC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB2CC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB2E8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDB38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDB4C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDB68);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDB78);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDB8C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000121C8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB3BC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB3C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB3D4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBFC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB408);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC2C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB438);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB444);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E95FC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9608);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9614);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBFC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9648);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC2C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9678);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9684);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB37C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB388);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB394);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBFC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB3C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC2C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB3F8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB404);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB418);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB450);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB488);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB4C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB4F8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB530);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDDA0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB5A0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE10);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE40);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000122FC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000123B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBD4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDBFC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC08);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC2C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC50);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDC88);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDCC0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDCF8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDD30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDD68);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDDA0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDDD8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE10);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE40);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011BE8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011C90);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011D10);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011DE4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011E58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011E6C_v100);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011EA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00011EA0(void) {
    return &D_000FDBE8;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011EAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011FD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00011FD0(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011FD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00011FD8(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011FE0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012050);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000120C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000120D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012108);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00012108(void) {
    return &D_000FDBFC;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012114);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001228C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012300);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012314);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012348);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00012348(void) {
    return &D_000FDC14;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012354);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012478);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00012478(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012480);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00012480(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012488);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000124F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012568);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001257C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000125B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_000125B0(void) {
    return &D_000FDC2C;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012CF0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000125BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001263C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012700);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000127CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001281C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012874);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012904);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001299C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000129EC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012A44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012A94_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012AEC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012B3C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012B94);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012BE4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012C3C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012C8C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012CE4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012D34);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012D8C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012DA8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012DC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012E8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void *func_00012E8C(void **arg0) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012EC4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012F30);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012F9C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012FB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012FE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00012FE4(void) {
    return &D_000FDE40;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012FF0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001312C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013208);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013318);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013FC4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001420C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000142E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000143C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000143D8);

M2C_UNK *func_0001440C(void) {
    return &D_000FDE78;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014418);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014470);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000144D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014510);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000145A8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013E54);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013EB8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014704);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014780);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014808);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014890);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000148A4);

M2C_UNK *func_000148D8(void) {
    return &D_000FDF38;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000148E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014D48);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014EEC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014FBC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014FEC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015170);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000151FC);

s32 func_00015210(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_000FDF48) {
        var_a2 = func_000148A4(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00015244(void) {
    return &D_000FDF48;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015250);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000152B4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015450);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015538);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015584);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000155D0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000156C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015810);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015860);

s32 func_00015874(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_000FDF54) {
        var_a2 = func_000148A4(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000158A8(void) {
    return &D_000FDF54;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000158B4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015904);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015954);

s32 func_00015968(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_000FDF60) {
        var_a2 = func_000148A4(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0001599C(void) {
    return &D_000FDF60;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000159A8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015B50);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015CFC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015F3C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016088);

s32 func_0001609C(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_000FDF6C) {
        var_a2 = func_000148A4(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000160D0(void) {
    return &D_000FDF6C;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000160DC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016314);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000168F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016C00);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016C4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016C7C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016CAC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016CDC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016D0C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016D3C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016D6C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016E64);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016F5C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017054);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001714C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017244);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001733C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE78);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDE90);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDEA8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDED0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF08);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF48);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF54);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF60);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF6C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF7C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF8C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDF9C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDFAC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDFC0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDFD4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDFE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FDFF8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE00C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE01C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE02C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE03C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE050);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE064);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE078);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE088);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE098);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE0AC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE0C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE0D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000137E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013A2C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013B04);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013BE4_v100);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013BF8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013C2C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013C38);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013C90);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013CF4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013D30);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013DC8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013E54);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013EB8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013F24);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013FA0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014028);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000140B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000140C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000140F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014104);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014560);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014700);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000147C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000147F4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014978);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014A04);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014A18);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014A4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014A58);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014ABC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014C50);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014D28);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014D74);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014DC0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014EB8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015000);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015050);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015064);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015098);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000150A4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000150F4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015144);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015158);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001518C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015198);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001533C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000154E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015714);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015860);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015874);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000158A8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000158B4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015AE8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000160BC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000163A4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000163F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016420);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016450);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016480);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000164B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000164E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016510);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016608);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016700);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000167F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000168F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000169E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016AE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016BD8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016D04);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016E40);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00016F70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017098);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000171E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017314);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017440);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000174E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000175F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017790);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017908);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017A80);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017C1C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017DC0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00017F50);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000180A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000181F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001835C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000184AC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE128);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE160);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EB960);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE1D0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE208);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA00);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA24);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA34);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA4C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA5C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA68);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBA7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE198);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE1D0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE208);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE238);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE24C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE25C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE26C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE284);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE294);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE2A0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE2B4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018618);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018690);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018710);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000187CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018890);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018908);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018988);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018A28);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018AD0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00018C28);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00019468);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001A17C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001A7B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001A7E4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AA40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AAF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001AAF0(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AAF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001AAF8(s32 **arg0, s32 **arg1) {
    s32 *temp_a1;

    temp_a1 = *arg1;
    *arg0 = temp_a1;
    if (temp_a1 != NULL) {
        *temp_a1 += 1;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AB18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001AB18(s32 **arg0, s32 **arg1) {
    s32 *temp_a1;

    temp_a1 = *arg1;
    *arg0 = temp_a1;
    if (temp_a1 != NULL) {
        *temp_a1 += 1;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AB38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AC14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001AC14(s32 **arg0) {
    s32 *temp_s0;
    s32 temp_v0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = *temp_s0 - 1;
        *temp_s0 = temp_v0;
        if (temp_v0 > 0) {

        } else {
            func_0001A17C((s32) temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001AC68);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_296ED0EF);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001ADF8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_DBD69B7B);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D8739C4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D7E925A1);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_21A0C6E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_81FD71A9);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_17308FC9);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B190);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_F3967AF5);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBB04);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000E9D44);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBAC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE2FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B4D0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_BBBF145C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_B52E43FB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B6B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0001B6B4(void) {
    return &D_000FEAF0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B6C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0001B6C0(void) {
    return &D_000FE9B8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B6CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0001B6CC(void) {
    return &D_000FEFE0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_39B36025);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_34C973B6);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_4C8C2E25);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B6FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0001B6FC(void) {
    return &D_000FE970;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B708);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001B804);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001ECFC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001ED4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001ED90);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_10C1DB70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_01C2FC36);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F20C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0001F20C(void) {
    sceKernelSignalSema(*D_0010F1B8, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F234);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0001F234(void) {
    return 1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F23C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0001F23C(void) {
    return 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F244);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F304);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F3D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001F67C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE574);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE590);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE59C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE5B0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE5C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE5E8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE600);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE614);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001FA58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE708);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE70C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE710);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE714);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE718);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE71C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE738);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE768);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE774);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020CB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020D28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020D28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020DAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020DAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020DBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020E30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020E30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020E40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020EB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020EB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020EC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00020EC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020ED4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020F14);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020F30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00021804(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_0002159C((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020F4C_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00020F80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000218C4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000216B4((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002100C_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000210CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000210CC(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000217CC((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021194);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00021194(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000218DC((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000211C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021250);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000212DC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000214B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000214B0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000219F4((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000214F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021570);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00021570(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021580);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002159C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000216B4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000217CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000218DC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000219F4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021AB8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021C38);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021D20);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021D34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021D68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00021D68(void) {
    return &D_000FEE80;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021D74);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021E04);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021E98);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021EFC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00021F70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002200C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022064);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022110);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000221C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022240);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022324);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022380);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022394);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000223C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_000223C8(void) {
    return &D_000FE768;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000223D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002243C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000224AC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000224E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002255C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000225F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022650);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000228CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022940);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022A68);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022B64_v100);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE7C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE7D4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE7F4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE804);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE810);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE824);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE834);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE840);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE71C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE738);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE768);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE774);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000231F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00023320);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002341C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE84C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE858);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE868);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE880);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8B0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022C60);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00022F18);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00023408);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00023648);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000238EC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00023BD4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00023F24);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000242CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00024994);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025118);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025444);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000254A8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025570);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000255CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025688);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002569C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000256D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_000256D0(void) {
    return &D_000FE8B0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000256DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025788);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025884);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE914);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBF9C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBFBC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE928);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBFD8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBFE0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBFEC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EBFFC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC008);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC014);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC020);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC030);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE880);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8B0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE8CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026040);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002613C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC11C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC130);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA35C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA370);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC0DC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC0F0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE940);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE970);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE988);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE9B8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE9C4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE9D8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE9EC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FE9F4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEA18);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025980);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000259D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025A58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00025A58(M2C_UNK **arg0) {
    scePaf_56F4D69F();
    *arg0 = &D_000FE988;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025A88);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025A9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025AD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00025AD0(void) {
    return &D_000FE970;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025ADC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025B78);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025C14);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025CB0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025D4C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025DE8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025E84);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025F20);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00025F70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026034);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000260A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000261C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000261DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026210);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_00026210(void) {
    return &D_000FE9B8;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002621C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026464);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026748);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026844);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026940);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026990);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026A44);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027358);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027400);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027414);

M2C_UNK *func_00027448(void) {
    return &D_000FEAF0;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027454);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000276C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEA74);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEA88);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEAA8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEAC0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEAF0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEAF8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEB0C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEB20);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEB28);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEB4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027990);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027B54);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC3AC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC3C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC3E0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA5EC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA600);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA620);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC36C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC380);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC3A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC3B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027C50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026940);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026990);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026A44);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026AA0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026B48);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026B5C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026B90);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026B9C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00026E08);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000270D8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002729C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEBA4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEBB8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEBD8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEBF0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027398);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000273E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000274CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7BBD70F0);

void scePaf_DFFE9ED6(void) {
    s32 temp_v0;

    temp_v0 = D_000FC9B4 - 1;
    D_000FC9B4 = temp_v0;
    if (temp_v0 == 0) {
        if (D_0010F1C8 == 0) {
            scePaf_9948CDB3(D_0010F1C4, 0, D_000FC9CC);
        }
        scePaf_8A861692(D_0010F1C4);
        if (D_000FC9C0 != 0) {
            scePaf_545FE2DA(D_0010F1C0);
            D_000FC9C0 = 0;
        }
        D_0010F1C0 = 0;
        D_0010DDEC = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000275D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027650);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 func_00027650(void) {
    return D_0010F1C8;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002765C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_9DED6118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002767C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_997D2809);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002772C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002772C(s32 arg0, s32 arg1) {
    func_000BD488(D_0010F1C4, arg0, arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00028610);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC24);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC44);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC54);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC5C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC6C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC78);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC80);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC8C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEC98);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECA4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECB0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECBC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECC4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECCC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECD8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECE0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECE8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECF0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FECF8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED08);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED14);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED1C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED28);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED34);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED3C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED40);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED44);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED48);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FED4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027BD0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027D24);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027E84);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00027FDC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002812C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000285E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002878C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000288C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00028A20);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00028BC4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00028D38);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00028EC8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029058);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A07C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002963C_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029688);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEDB4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEDB8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029844);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029970);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029ABC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029BE8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029C60);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029D48);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_BE5B0791);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029E58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029E58(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = *arg1;
    func_0002A0C0(arg0, temp_s0 + 0x64, arg2, func_0002F038(arg2));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029EB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029EB0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002A0C0(arg0, arg1, arg2, func_0002F038(arg2));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029F04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029F04(s32 arg0, s32 arg1, s32 arg2) {
    func_0002A0C0(arg0, arg1, arg2, func_0002F038(arg2));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029F58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029F58(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002A0C0(arg0, *arg1 + 0x64, arg2, arg3);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_2D08CA09);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029F98);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029FB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029FD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029FD0(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00029FEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00029FEC(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A008);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A008(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A024);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A024(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A040(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A05C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A05C(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A078);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A078(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A094);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002A094(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A0B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A0B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A0C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DE38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 *func_0000DE38(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0002A298(arg1, arg2);
    return arg0;
}
#endif

#if FW_VERSION == 282
s32 *func_0000DE38(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0000B6B8(arg1, arg2);
    return arg0;
}
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A1F4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A224);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A298);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A35C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A394);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A3D8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A488);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A644);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A7C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A834);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A8E0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A8F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A928);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0002A928(void) {
    return &D_000FEDB8;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A934);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A99C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002A9D8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002AA14);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002ABC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE2C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE50);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE80);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE90);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002AF0C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002AF5C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_56F4D69F);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B024);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B094);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_F2E5FDEB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B0BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0002B0BC(void) {
    return &D_000FEE80;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_6E3E2085);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEEA8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEEBC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEEDC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEEEC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF0C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE50);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEE80);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC658);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_6E3E2085);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC6B0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EA8F0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC670);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF60);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_6676FAA6);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_AD7A45F9);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_95C97571);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7D9A4824);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_67C7567E);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_F273FE50);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B5E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002B5E0(s32 arg0) {
    func_00012DC4(arg0 + 8);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B5FC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B6D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B774);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002B814);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BB3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_79E57CAF);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_79E57CAF(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_548AA4E7);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_548AA4E7(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BC40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002BC40(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BC5C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002BC5C(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DE70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000DF48);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E138);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E36C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E4A4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E524);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E6EC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E740);
#endif

void func_0000E794(void) {
    func_0000E7B0();
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BC94);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BCCC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BD94);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E7B0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BDD8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BE30);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BE68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C8EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002BEAC_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C034);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C208);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C278);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C45C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C5D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002C5D0(M2C_UNK **arg0, M2C_UNK *arg1) {
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C610);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002C610(M2C_UNK **arg0, M2C_UNK *arg1) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C650);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C6A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C774);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C7F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C838);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0002C838(void) {
    return &D_000FEF60;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C844);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C8AC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C8E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002C924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CA68);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC6A4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC6B4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC6D4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEF60);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D4A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEFB0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEFE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CD2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D7BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CD7C_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CE44);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CEB4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CEC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CEFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_0002CEFC(void) {
    return &D_000FEFE0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CF08);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CF54);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002CFCC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D008);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D19C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D298);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF028);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF03C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF04C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF05C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF074);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEFB0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FEFE0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002DBDC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002DCD8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC830);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC844);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC854);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC864);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC87C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC88C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC89C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8B4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8D0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8DC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8F0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC908);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC92C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC944);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAA70);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAA84);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAA94);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAAA4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAABC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAACC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAADC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAAF4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB10);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB1C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB48);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB6C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAB84);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC7F0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC804);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC814);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC824);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC83C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC84C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC85C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC874);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC890);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC89C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8B0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC8EC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC904);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF084);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF094);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF0AC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF0C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF0D4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF0E8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF100);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF124);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF13C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF168);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF198);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D394);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D548);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D6C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002D8B4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002DB0C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002DD84);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002DEC0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E130);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E390);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E4D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E618);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E75C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E8A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002E9AC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EA24);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EB18);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EBBC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_FCD816FA);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_9B8CBC5F);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EE30);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EED4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EF48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EF48(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EF64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EF64(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EF80);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EF80(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EF9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EF9C(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EFB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EFB8(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EFD4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EFD4(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002EFF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002EFF0(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F00C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0002F00C(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F028);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F030);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F038);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F05C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F084);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F0CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F130);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F194);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002FC04);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F22C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF1A0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF1A4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF1A8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF1AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F1C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F22C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F294);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002F2D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_E1242646);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_E1242646(void) {
    scePaf_9DED6118();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_0F3527DD);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_0F3527DD(void) {
    scePaf_997D2809();
}
#endif

#if FW_VERSION == 282
void func_0000E808(void) {
    func_0000E824();
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E824);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_CC3CFABF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002FC50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0002FC50(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_0003032C(temp_v0 + 8);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_79293604);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_3342C5F5);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_AECF91A9);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_EF346632);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D2C94856);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0002FEB4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF1DC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000ECA0C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000ECA34);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000ECA5C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAC4C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAC74);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EAC9C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC9CC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000EC9F4);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000ECA1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030A84);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_48B5C1C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030C78);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003032C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030DF0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030F10);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D6F088EF);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_A9CE8FBB);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF204);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF22C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF254);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF27C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF280);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF294);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2A0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2B0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2C0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2DC);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF2F0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF300);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF310);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF338);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF344);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF350);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF378);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF3A0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF3C8);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF3F0);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000FF418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030044);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_48B5C1C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030238);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003032C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000303B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000304D0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D6F088EF);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_A9CE8FBB);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000305F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030C18);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00030E88);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_6BAC756B);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_3A844B7B);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031300);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_2AA80564);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031524);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000315A0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031610);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_8E757709);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_34C7D69A);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031854);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003185C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 151 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031884);
#endif

#if FW_VERSION == 150
s32 func_00031884(void) {
    return 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003188C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031A50);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031BC4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031D44);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_DFD3E855);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031DD0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_CDB85442);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_55C7628A);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00031F28);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032030);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032668);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003281C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_5148EFE2);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032D50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00032D50(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032D6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00032D6C(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032D88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00032D88(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032DA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00032DA4(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7D83FB20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_7D83FB20(void) {
    scePaf_E1242646();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D36F3AAA);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_D36F3AAA(void) {
    scePaf_0F3527DD();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032DF8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032E00);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E850);

void scePaf_9DED6118(void) {
    scePaf_5FAC9869();
}

void scePaf_997D2809(void) {
    scePaf_545FE2DA();
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000E950);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_D3F5956D);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_FE4D4112);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032FD8);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000EAD0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_69CA1A2D);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_BEF9FF15);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_86237EB3);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00032FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003330C);
#endif

#if FW_VERSION == 150
s32 func_0003330C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0x13) << 0x18) | ((M2C_FIELD(arg0, u8 *, 0x12) << 0x10) | ((M2C_FIELD(arg0, u8 *, 0x11) << 8) | M2C_FIELD(arg0, u8 *, 0x10)));
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000ED00);
#endif

s32 scePaf_D6CD39AF(struct Unk_scePaf_D6CD39AF_0 *arg0) {
    return (arg0->unk1 << 8) | arg0->unk0;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_DAA609BB);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_E32B3558);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000ED54);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000333F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033440);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00033EEC(s32 arg0, s32 arg1, s32 *arg2) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00035DCC(arg0, arg1, func_000334B8(arg0), &sp0, 0x800);
    var_v1 = 0;
    if (temp_v0 == 0) {
        *arg2 = sp0;
    } else {
        *arg2 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000330D4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000334B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000330FC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033488);
#endif

#if FW_VERSION == 150
s32 func_00033488(void *arg0) {
    return ((M2C_FIELD(arg0, u8 *, 0xF) << 0x18) | ((M2C_FIELD(arg0, u8 *, 0xE) << 0x10) | ((M2C_FIELD(arg0, u8 *, 0xD) << 8) | M2C_FIELD(arg0, u8 *, 0xC)))) != 0;
}
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000334B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033500);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033554);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000335A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003366C);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000ED5C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000ED88);

s32 scePaf_14FF46A6(s32 arg0, s32 arg1, s32 *arg2) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000106C8(arg0, arg1, func_0000EE38(arg0), &sp0, 0x800);
    var_v1 = 0;
    if (temp_v0 == 0) {
        *arg2 = sp0;
    } else {
        *arg2 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000EE28);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000EE38);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_E3020CA3);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_1FD7E9D5);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_77277BAB);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000EF70);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_6A14BB04);

void func_0000F1E0(s32 arg0, s32 arg1, s32 arg2) {
    func_0000FF30(arg0, arg1, 0x400, arg2, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F204);

void func_0000F2D0(s32 arg0, s32 arg1, s32 arg2) {
    func_0000FF30(arg0, arg1, 0x500, arg2, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F2F4);

void func_0000F458(s32 arg0, s32 arg1, s32 arg2) {
    func_0000FF30(arg0, arg1, 0x600, arg2, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F47C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033D54);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F548);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F610);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F69C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F728);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_602EB0CE);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003419C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034270);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_3763DC72);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000F918);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_95960A88);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_58C69BDA);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00033F80);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034888);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003495C);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FD40);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FDD4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0000FF30);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010084);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003436C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034E18);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001012C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000102D0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010540);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034580);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035060);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035DCC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034898_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00034898_v151);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003602C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035268);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035448);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035640);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035708);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035768);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000357D4);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000105B0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000106C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000108C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_E12B5BFD);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_BD46719F);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_5F434810);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7C1B7904);
#endif

s32 func_00010E38(struct Unk_func_00010E38_0 *arg0) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = -0x78;
    if (arg0->unk0 == 1) {
        temp_v0 = arg0->unk4;
        if (temp_v0 != -1) {
            sceIoClose(temp_v0);
        }
        arg0->unk4 = -1;
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1AC0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035858);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00010E98);
#endif

s32 func_00011374(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001137C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011418);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035E38);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00035524);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00036F04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00036144);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011668);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000118D4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011A68);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0003635C);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011A8C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011C1C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011C40);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011D00);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011D74);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011DF0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00011E6C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_21A183A7);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_8FE88010);

void scePaf_94136997(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00017A78(temp_v0, arg0, arg1);
    func_00012214((s32) temp_v0, arg2, arg3);
}

#if FW_VERSION == 282
void scePaf_1BD0E905(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x24);
    func_00016DA0(temp_v0, arg0, arg3, arg4);
    func_00012214((s32) temp_v0, arg1, arg2);
}
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_50B0C0A1);
#endif

#if FW_VERSION == 282
void scePaf_50B0C0A1(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00017E18(temp_v0, arg0, arg1);
    func_00012214((s32) temp_v0, 0, 6);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012214);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_F247A0BD);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_3D451DE8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_ABEBF18D);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012618);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012684);

s32 scePaf_537D04C6(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_000196A0(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00012684(arg0, (s32) temp_v0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012778);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012808);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001285C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000128F8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_910A6B7B);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012988);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_12C50A9D);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_1F43B8A2);

s32 func_00012A50(struct Unk_func_00012A50_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00012988(arg0, arg1) != 0) {
        arg0->unk74 = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00012A94(struct Unk_func_00012A94_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00012988(arg0, arg1) != 0) {
        arg0->unk76 = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_7E304DCF);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_14D80C40);

s32 scePaf_9F60CB01(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0001A34C(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00012684(arg0, (s32) temp_v0);
    }
    return var_v0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000375A0);
#else
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_91E82C1B);
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_A25BDAA2);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000376A4);
#else
s32 func_00012E6C(s32 arg0) {
    D_000E067C = arg0;
    return 1;
}
#endif

s32 scePaf_D3AB4076(void) {
    return D_000E067C;
}

s32 scePaf_87E5F9C7(struct Unk_scePaf_87E5F9C7_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkA0 = arg1;
    arg0->unkA4 = arg2;
    return 1;
}

#if FW_VERSION == 282
s32 scePaf_D726DDD3(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0001A9F8(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00012684(arg0, (s32) temp_v0);
    }
    return var_v0;
}

s32 scePaf_8A8FE0A1(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_00013410(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00012684(arg0, (s32) temp_v0);
    }
    return var_v0;
}

s32 func_00012F40(struct Unk_func_00012F40_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk15 != 0) && (arg0->unk29 != 0)) {
        var_v1 = arg0->unk0 != 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012F68);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00012FDC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001301C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001310C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000131F8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_00DD54", scePaf_891B7F7F);

void func_00013410(M2C_UNK **arg0) {
    func_00013B68(arg0);
    *arg0 = &D_000D1B28;
}

void func_00013440(M2C_UNK **arg0) {
    *arg0 = &D_000D1B28;
    func_00013B90((s32) arg0);
}

void func_00013468(M2C_UNK **arg0) {
    *arg0 = &D_000D1B28;
    func_00013B90((s32) arg0);
}

void func_00013490(M2C_UNK **arg0) {
    *arg0 = &D_000D1B28;
    func_00013B90((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000134C8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013644);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000136E8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001386C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000139F0);

s32 func_00013B60(void) {
    return 0;
}

void func_00013B68(struct Unk_func_00013B68_0 *arg0) {
    arg0->unk0 = &D_000D1B4C;
    arg0->unk4 = 0;
}

void func_00013B7C(struct Unk_func_00013B7C_0 *arg0) {
    arg0->unk0 = &D_000D1B4C;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013B90);

void func_00013BA4(struct Unk_func_00013BA4_0 *arg0) {
    arg0->unk0 = &D_000D1B70;
    arg0->unk4 = 0;
}

void func_00013BB8(struct Unk_func_00013BB8_0 *arg0) {
    arg0->unk0 = &D_000D1B70;
    arg0->unk4 = 0;
    scePaf_4E67BB08(arg0);
}

s32 func_00013BE4(struct Unk_func_00013BE4_0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00012F40(arg1) != 0) {
        arg0->unk4 = arg1;
        var_v1 = arg0->unk0->unk18(arg0, arg1 + 0x2C, arg1 + 4, arg1 + 0x18, arg4, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013C80);

void func_00013DA8(struct Unk_func_00013DA8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 == 0) {

    } else {
        func_0001285C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013DD8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00013E84);

void func_0001408C(void) {
}

void func_00014094(M2C_UNK **arg0) {
    *arg0 = &D_000D1B70;
}

void func_000140A4(M2C_UNK **arg0) {
    *arg0 = &D_000D1B70;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000140CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014128);

void func_00014184(M2C_UNK **arg0) {
    *arg0 = &D_000D1CA0;
    func_00013B90((s32) arg0);
}

void func_000141AC(M2C_UNK **arg0) {
    *arg0 = &D_000D1CA0;
    func_00013B90((s32) arg0);
}

void func_000141D4(M2C_UNK **arg0) {
    *arg0 = &D_000D1CA0;
    func_00013B90((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001420C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1B28);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1B4C);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1B70);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014388);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000145C4);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014610);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014654);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014688);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000146F0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014778);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000147CC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_0001483C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000148FC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014C48);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014E94);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00014F0C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000150C0);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015700);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1C30);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1C34);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1C38);

INCLUDE_RODATA("nonmatchings/pafmini_00DD54", D_000D1C3C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000157B8);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_000158EC);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015B8C);

INCLUDE_ASM("nonmatchings/pafmini_00DD54", func_00015E2C);
#endif
