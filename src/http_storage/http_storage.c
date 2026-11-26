#include "common.h"

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_700AAD44);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_CDA3D8F6);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_CDDF1103);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_24AA94F4);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_B33389CE);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_2D8DAE58);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorage_driver_C59AC98A);

INCLUDE_ASM("nonmatchings/http_storage", module_reboot_before);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/http_storage", D_00000538);

INCLUDE_RODATA("nonmatchings/http_storage", D_0000053C);

INCLUDE_RODATA("nonmatchings/http_storage", D_00000550);

INCLUDE_RODATA("nonmatchings/http_storage", D_00000570);

INCLUDE_RODATA("nonmatchings/http_storage", D_00000588);

INCLUDE_RODATA("nonmatchings/http_storage", D_000005C0);

INCLUDE_RODATA("nonmatchings/http_storage", D_000005D0);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/http_storage", D_00000600_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/http_storage", D_00000600_v350);
#endif

INCLUDE_RODATA("nonmatchings/http_storage", D_00000600);

INCLUDE_RODATA("nonmatchings/http_storage", D_0000061C);
