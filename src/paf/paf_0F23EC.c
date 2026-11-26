#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_B2ED6CAA);

s32 scePaf_1232B7A3(struct Unk_scePaf_1232B7A3_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *temp_v0;

    var_a3 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a3 = func_00106CC8(temp_v0, arg1, arg2);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/paf_0F23EC", func_000F2484);

INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_37DD37B8);

s32 scePaf_B9BE69FD(struct Unk_scePaf_B9BE69FD_0 *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_v0;

    var_a2 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a2 = func_00106D64(temp_v0, arg1);
    }
    return var_a2;
}

s32 scePaf_8D7FC7DB(struct Unk_scePaf_8D7FC7DB_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a4;
    void *temp_v0;

    var_a4 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a4 = func_00106D98(temp_v0, arg1, arg2, arg3);
    }
    return var_a4;
}

void scePaf_905CF2A7(struct Unk_scePaf_905CF2A7_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00106DCC(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(struct Unk_scePaf_55CC4749_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106DE4(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(struct Unk_scePaf_AEEF2A7C_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106E1C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_B711DC69);

INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_ECE59E24);

void scePaf_A574DB92(struct Unk_scePaf_A574DB92_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00106ED4(temp_v0);
    }
}

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_F639E5E1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void scePaf_F639E5E1(struct Unk_scePaf_F639E5E1_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_000AD534(temp_v0);
    }
}
#endif

#if FW_VERSION == 282
void scePaf_F639E5E1(struct Unk_scePaf_F639E5E1_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00106F04(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_0F23EC", scePaf_7F2442DC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0F23EC", func_000F0848);

INCLUDE_ASM("nonmatchings/paf_0F23EC", func_000F0998);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0F23EC", func_000F2828);

INCLUDE_ASM("nonmatchings/paf_0F23EC", func_000F2978);
#endif
