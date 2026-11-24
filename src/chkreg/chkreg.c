#include "common.h"

INCLUDE_ASM("nonmatchings/chkreg", func_00000000);

INCLUDE_ASM("nonmatchings/chkreg", func_00000128);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/chkreg", func_00000190);

INCLUDE_ASM("nonmatchings/chkreg", func_0000020C);
#endif

INCLUDE_ASM("nonmatchings/chkreg", module_start);

INCLUDE_ASM("nonmatchings/chkreg", module_stop);

INCLUDE_ASM("nonmatchings/chkreg", sceChkreg_driver_54495B19);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/chkreg", sceChkreg_driver_59F8491D);

INCLUDE_ASM("nonmatchings/chkreg", sceChkreg_driver_9C6E1D34);

INCLUDE_RODATA("nonmatchings/chkreg", D_0000083C);
#endif
