/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", func_000340C4);

s32 func_00034114(void) {
    sceCtrlReadBufferPositive(&D_000E164C, 1);
    return M2C_FIELD(&D_000E164C, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", func_00034148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", func_00034170);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", func_000341CC);

s32 func_00034590(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0340C4", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_000E072C = arg0 * arg0;
    scePaf_5822F12A();
}

