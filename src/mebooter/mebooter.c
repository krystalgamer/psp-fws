#include "common.h"

INCLUDE_ASM("nonmatchings/mebooter", sceMeBooter_driver_3BCB751E);

INCLUDE_ASM("nonmatchings/mebooter", func_0000014C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mebooter", D_00000370);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mebooter", D_0001E760);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mebooter", D_0001E770);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/mebooter", D_000003E0);

INCLUDE_RODATA("nonmatchings/mebooter", D_0001DF60);
#endif
