#include "common.h"
#include "chkreg_decls.h"

INCLUDE_ASM("nonmatchings/chkreg", func_00000000);

INCLUDE_ASM("nonmatchings/chkreg", func_00000128);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/chkreg", func_00000190);

INCLUDE_ASM("nonmatchings/chkreg", func_0000020C);
#else
s32 module_start(SceSize args, void *argp) {
    u32 i;

    for (i = 0; i < 0xA00; i++) {
        D_00000850[i] = 0;
    }
    D_00000880 = 0;
    D_00000884 = 0;
    D_00000EC0 = sceKernelCreateSema("SceChkreg", 0, 1, 1, NULL);
    return D_00000EC0 < 1;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/chkreg", module_start);
#endif

INCLUDE_ASM("nonmatchings/chkreg", module_stop);

INCLUDE_ASM("nonmatchings/chkreg", sceChkregCheckRegion);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/chkreg", sceChkregGetPsCode);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/chkreg", sceChkreg_driver_9C6E1D34);

INCLUDE_RODATA("nonmatchings/chkreg", D_0000083C);
#endif
