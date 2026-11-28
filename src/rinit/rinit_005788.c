#include "common.h"
#include "rinit_decls.h"

INCLUDE_ASM("nonmatchings/rinit_005788", std);

INCLUDE_ASM("nonmatchings/rinit_005788", __sfmoreglue);

INCLUDE_ASM("nonmatchings/rinit_005788", __sfp);

void _cleanup_r(s32 arg0) {
    _fwalk(arg0, (s32) &fflush);
}

void _cleanup(void) {
    _cleanup_r(D_0000F138);
}

INCLUDE_ASM("nonmatchings/rinit_005788", __sinit);

