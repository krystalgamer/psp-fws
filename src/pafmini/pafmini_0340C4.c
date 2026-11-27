/* cflags[100]: -O2 */
/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0340C4", func_000340C4);
#endif

s32 func_00034114(void) {
    sceCtrlReadBufferPositive(&D_000E164C, 1);
    return D_000E164C.unk4;
}

INCLUDE_ASM("nonmatchings/pafmini_0340C4", func_00034148);

INCLUDE_ASM("nonmatchings/pafmini_0340C4", func_00034170);

INCLUDE_ASM("nonmatchings/pafmini_0340C4", func_000341CC);

s32 func_00034590(void) {
    return 1;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0340C4", scePaf_78F94D84);

INCLUDE_ASM("nonmatchings/pafmini_0340C4", scePaf_5822F12A);
#else
s32 scePaf_5822F12A(void) {
    s32 temp_v0;

    temp_v0 = sceCtrlSetSamplingMode(1U);
    if (temp_v0 >= 0) {
        D_0010F200 = 1;
    }
    if (D_0010F20C != 0) {

    } else {
        scePaf_E69C3B1B((s32) &func_00034148);
    }
    return temp_v0;
}
#endif

void scePaf_FD9DE7B9(s32 arg0) {
    D_000E072C = arg0 * arg0;
    scePaf_5822F12A();
}
