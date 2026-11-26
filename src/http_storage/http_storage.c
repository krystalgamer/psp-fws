#include "common.h"

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageOpen);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageClose);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageRead);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageWrite);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageLseek);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageGetstat);

INCLUDE_ASM("nonmatchings/http_storage", sceHttpStorageEnd);

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

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/http_storage", D_00000600_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/http_storage", D_00000600_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/http_storage", D_00000600_v350);
#endif

INCLUDE_RODATA("nonmatchings/http_storage", D_00000600);

INCLUDE_RODATA("nonmatchings/http_storage", D_0000061C);
