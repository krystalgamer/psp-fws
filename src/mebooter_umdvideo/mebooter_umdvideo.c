#include "common.h"

INCLUDE_ASM("nonmatchings/mebooter_umdvideo", sceMeBooter_driver_3BCB751E);

INCLUDE_ASM("nonmatchings/mebooter_umdvideo", func_0000014C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mebooter_umdvideo", D_00000370);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/mebooter_umdvideo", D_0000AD10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mebooter_umdvideo", D_0000AD20);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/mebooter_umdvideo", D_000003E0);

INCLUDE_RODATA("nonmatchings/mebooter_umdvideo", D_00018D70);
#endif
