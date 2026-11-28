#include "common.h"
#include "rinit_decls.h"

s32 __sread(struct Unk_func_000088F0_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = _read_r(D_0000F138, (s32) arg0->unkE, arg1, arg2);
    if (temp_v0 >= 0) {
        arg0->unk50 = (s32) (arg0->unk50 + temp_v0);
    } else {
        arg0->unkC = (u16) (arg0->unkC & 0xEFFF);
    }
    return temp_v0;
}

void __swrite(struct Unk_func_00008958_0 *arg0, s32 arg1, s32 arg2) {
    u16 var_v1;

    var_v1 = arg0->unkC;
    if (var_v1 & 0x100) {
        _lseek_r(D_0000F138, (s32) arg0->unkE, 0, 2);
        var_v1 = arg0->unkC;
    }
    arg0->unkC = (u16) (var_v1 & 0xEFFF);
    _write_r(D_0000F138, (s32) arg0->unkE, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/rinit_0088F0", __sseek);

void __sclose(struct Unk_func_00008A4C_0 *arg0) {
    _close_r(D_0000F138, (s32) arg0->unkE);
}

