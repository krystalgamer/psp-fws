#include "common.h"
#include "npdrm_decls.h"

INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmGetIDps);

INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmVerifyAct);

INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmVerifyRif);

INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmGetContentKey);

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmGetVersionKey);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/npdrm", sceNpDrmDecActivation);

INCLUDE_RODATA("nonmatchings/npdrm", D_000022D8);

INCLUDE_RODATA("nonmatchings/npdrm", D_000022E8);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002310);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002320);

INCLUDE_ASM("nonmatchings/npdrm", scePspNpDrmVideoKey_driver_77743584);

INCLUDE_ASM("nonmatchings/npdrm", func_0000053C);
#endif

INCLUDE_ASM("nonmatchings/npdrm", func_00000360);

INCLUDE_ASM("nonmatchings/npdrm", func_000003C0);

INCLUDE_ASM("nonmatchings/npdrm", func_00000438);

s32 module_start(void) {
    return 0;
}

#if FW_VERSION != 340
INCLUDE_ASM("nonmatchings/npdrm", module_stop);
#else
s32 module_stop(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/npdrm", func_000004C0);

INCLUDE_ASM("nonmatchings/npdrm", func_00000538);

INCLUDE_ASM("nonmatchings/npdrm", func_00000690);

INCLUDE_ASM("nonmatchings/npdrm", func_00000940);

INCLUDE_ASM("nonmatchings/npdrm", func_00000DB0);

INCLUDE_ASM("nonmatchings/npdrm", func_00000DF8);

INCLUDE_ASM("nonmatchings/npdrm", func_00000E4C);

INCLUDE_ASM("nonmatchings/npdrm", func_00000E9C);

INCLUDE_ASM("nonmatchings/npdrm", func_00000EF8);

INCLUDE_ASM("nonmatchings/npdrm", func_00001600);

INCLUDE_ASM("nonmatchings/npdrm", func_00001D08);

INCLUDE_ASM("nonmatchings/npdrm", func_00001D54);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/npdrm", D_00001EBC);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/npdrm", D_00001ECC);

INCLUDE_RODATA("nonmatchings/npdrm", D_00001EF4);
#endif

INCLUDE_RODATA("nonmatchings/npdrm", D_00001F04);

INCLUDE_RODATA("nonmatchings/npdrm", D_00001F14);

INCLUDE_RODATA("nonmatchings/npdrm", D_00001F40);

INCLUDE_RODATA("nonmatchings/npdrm", D_00001F60);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002360);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002760);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002860);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002960);

INCLUDE_RODATA("nonmatchings/npdrm", D_00002A60);
