#include "common.h"
#include "cert_loader_decls.h"

INCLUDE_ASM("nonmatchings/cert_loader", sceCertLoader_DD629A24);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/cert_loader", func_0000050C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000544);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000578);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000580);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000588);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000590);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/cert_loader", func_00000598);
#else
INCLUDE_ASM("nonmatchings/cert_loader", func_00000364);

INCLUDE_ASM("nonmatchings/cert_loader", func_000005AC);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000954);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000B10);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000CF8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_000005D0);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000604);

INCLUDE_ASM("nonmatchings/cert_loader", func_0000060C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000614);

INCLUDE_ASM("nonmatchings/cert_loader", func_0000061C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000624);
#endif

s32 sceCertLoader_driver_11391041(void) {
    return 0;
}

s32 sceCertLoader_driver_E86A7DC1(void) {
    return 0;
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/cert_loader", func_000005B0);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000968);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000063C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000A04);
#endif

INCLUDE_ASM("nonmatchings/cert_loader", func_00000D8C);
