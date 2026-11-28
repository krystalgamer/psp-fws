#include "common.h"
#include "rinit_decls.h"

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB0);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB4);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB8);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEBC);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEEC);

INCLUDE_ASM("nonmatchings/rinit_0062C8", _setlocale_r);

M2C_UNK *_localeconv_r(void) {
    return &D_0000BEBC;
}

void setlocale(s32 arg0, s32 arg1) {
    _setlocale_r(D_0000F138, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/rinit_0062C8", localeconv);

