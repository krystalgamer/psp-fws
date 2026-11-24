#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", scePaf_B2ED6CAA);

s32 scePaf_1232B7A3(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *temp_v0;

    var_a3 = -1;
    temp_v0 = M2C_FIELD(arg0, void **, 0x1E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x334) = 1;
        var_a3 = func_00106CC8(temp_v0, arg1, arg2);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", func_000F2484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", scePaf_37DD37B8);

s32 scePaf_B9BE69FD(void *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_v0;

    var_a2 = -1;
    temp_v0 = M2C_FIELD(arg0, void **, 0x1E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x334) = 1;
        var_a2 = func_00106D64(temp_v0, arg1);
    }
    return var_a2;
}

s32 scePaf_8D7FC7DB(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a4;
    void *temp_v0;

    var_a4 = -1;
    temp_v0 = M2C_FIELD(arg0, void **, 0x1E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x334) = 1;
        var_a4 = func_00106D98(temp_v0, arg1, arg2, arg3);
    }
    return var_a4;
}

void scePaf_905CF2A7(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106DCC(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106DE4(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106E1C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", scePaf_B711DC69);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", scePaf_ECE59E24);

void scePaf_A574DB92(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106ED4(temp_v0);
    }
}

void scePaf_F639E5E1(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106F04(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", scePaf_7F2442DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", func_000F2828);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0F23EC", func_000F2978);

