#include "common.h"
#include "rinit_decls.h"

s32 __sprint(s32 arg0, struct Unk_func_00001AF8_1 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg1->unk8 == 0) {
        arg1->unk4 = 0;
    } else {
        temp_v0 = __sfvwrite(arg0, (s32) arg1);
        var_v1 = temp_v0;
        arg1->unk8 = 0;
        arg1->unk4 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/rinit_001AF8", __sbprintf);

INCLUDE_ASM("nonmatchings/rinit_001AF8", vfprintf);

INCLUDE_RODATA("nonmatchings/rinit_001AF8", D_0000BC30);

INCLUDE_RODATA("nonmatchings/rinit_001AF8", D_0000BC40);

INCLUDE_ASM("nonmatchings/rinit_001AF8", _vfprintf_r);

INCLUDE_ASM("nonmatchings/rinit_001AF8", cvt);

INCLUDE_ASM("nonmatchings/rinit_001AF8", exponent);

