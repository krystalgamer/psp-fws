#include "common.h"
#include "rinit_decls.h"

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000BF00);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000BF10);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000BFD8);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000BFF8);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000BFFC);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000C028);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000C02C);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000C030);

INCLUDE_RODATA("nonmatchings/rinit_0073B8", D_0000C034);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _Balloc);

void _Bfree(struct Unk_func_00007470_0 *arg0, struct Unk_func_00007470_1 *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (arg1->unk4 * 4) + arg0->unk4C;
        arg1->unk0 = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("nonmatchings/rinit_0073B8", _multadd);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _s2b);

s32 _hi0bits(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1;

    var_a0_2 = arg0;
    var_v1 = 0;
    if (!(var_a0_2 & 0xFFFF0000)) {
        var_v1 = 0x10;
        var_a0_2 <<= 0x10;
    }
    if (!(var_a0_2 & 0xFF000000)) {
        var_v1 += 8;
        var_a0_2 <<= 8;
    }
    if (!(var_a0_2 & 0xF0000000)) {
        var_v1 += 4;
        var_a0_2 *= 0x10;
    }
    if (!(var_a0_2 & 0xC0000000)) {
        var_v1 += 2;
        var_a0_2 *= 4;
    }
    if ((var_a0_2 < 0) || (var_v1 += 1, var_a0 = 0x20, ((var_a0_2 & 0x40000000) != 0))) {
        var_a0 = var_v1;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/rinit_0073B8", _lo0bits);

void _i2b(s32 arg0, s32 arg1) {
    struct Unk_func_00007804_temp_v0 *temp_v0;

    temp_v0 = _Balloc(arg0, 1);
    temp_v0->unk14 = arg1;
    temp_v0->unk10 = 1;
}

INCLUDE_ASM("nonmatchings/rinit_0073B8", _multiply);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _pow5mult);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _lshift);

INCLUDE_ASM("nonmatchings/rinit_0073B8", __mcmp);

INCLUDE_ASM("nonmatchings/rinit_0073B8", __mdiff);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _ulp);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _b2d);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _d2b);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _ratio);

INCLUDE_ASM("nonmatchings/rinit_0073B8", _mprec_log10);

