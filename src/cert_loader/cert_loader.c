#include "common.h"
#include "cert_loader_decls.h"

INCLUDE_ASM("nonmatchings/cert_loader", sceCertLoader_DD629A24);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/cert_loader", func_00000364);

INCLUDE_ASM("nonmatchings/cert_loader", func_000005AC);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000954);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000B10);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000CF8);
#else
INCLUDE_ASM("nonmatchings/cert_loader", func_00000598);

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

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000063C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000A04);
#endif

INCLUDE_ASM("nonmatchings/cert_loader", func_00000D8C);
