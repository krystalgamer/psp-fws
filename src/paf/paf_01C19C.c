/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_21A0C6E0);
#endif

#if FW_VERSION < 152
void scePaf_21A0C6E0(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 0xAC) = arg2;
        M2C_FIELD(temp_a0, s32 *, 0xA8) = arg1;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_C1579C1D);

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_ED2DF238);
#endif

#if FW_VERSION == 282
void scePaf_21A0C6E0(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_21A0C6E0_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkB4 = arg2;
        temp_a0->unkB0 = arg1;
    }
}

void scePaf_C1579C1D(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_C1579C1D_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkBC = arg2;
        temp_a0->unkB8 = arg1;
    }
}

void scePaf_ED2DF238(void **arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_ED2DF238_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkC4 = arg2;
        temp_a0->unkC0 = arg1;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_EB5BDCE1);
#endif

#if FW_VERSION == 282
void scePaf_EB5BDCE1(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_scePaf_EB5BDCE1_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unkCC = arg3;
        temp_a0->unkD0 = arg1;
        temp_a0->unkC8 = arg2;
    }
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_D9D3EEBA);
#endif

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_81FD71A9);

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_17308FC9);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F5D8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F610);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F648);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F680);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6B8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6E8);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F6FC);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F70C);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F71C);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F734);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F744);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F750);

INCLUDE_RODATA("nonmatchings/paf_01C19C", D_0016F764);

INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001C3F8);

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_F3967AF5);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_E6134C53);
#else
INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001BBB4);
#endif

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_BBBF145C);

INCLUDE_ASM("nonmatchings/paf_01C19C", scePaf_B52E43FB);

M2C_UNK *func_0001C91C(void) {
    return &D_0016FE80;
}

M2C_UNK *func_0001C928(void) {
    return &D_0016FD08;
}

M2C_UNK *func_0001C934(void) {
    return &D_001705A0;
}

M2C_UNK *scePaf_39B36025(void) {
    return &D_00170F78;
}

M2C_UNK *scePaf_34C973B6(void) {
    return &D_001702B8;
}

M2C_UNK *scePaf_4C8C2E25(void) {
    return &D_001704F0;
}

M2C_UNK *func_0001C964(void) {
    return &D_0016FC7C;
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C19C", func_0001C0A0);
#endif

#if FW_VERSION == 282
M2C_UNK *func_0001C970(void) {
    return &D_00170D48;
}
#endif
