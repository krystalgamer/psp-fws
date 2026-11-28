#include "common.h"
#include "rinit_decls.h"

s32 _sbrk_r(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_0000F5E8 = 0;
    temp_v0 = _sbrk(arg1);
    if (temp_v0 != -1) {

    } else if (D_0000F5E8 != 0) {
        *arg0 = D_0000F5E8;
    }
    return temp_v0;
}

