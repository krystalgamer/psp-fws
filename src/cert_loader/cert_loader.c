#include "common.h"
#include "cert_loader_decls.h"

INCLUDE_ASM("nonmatchings/cert_loader", sceCertLoader_DD629A24);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000050C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000544);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/cert_loader", func_00000578);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000580);
#endif

#if FW_VERSION == 271
s32 func_00000580(void) {
    return 0x1FFF;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/cert_loader", func_00000588);
#endif

#if FW_VERSION == 271
s32 func_00000588(void) {
    return 7;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/cert_loader", func_00000590);
#endif

#if FW_VERSION == 271
s32 func_00000590(void) {
    return 1;
}
#endif

#if (FW_VERSION >= 250 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/cert_loader", func_00000598);
#endif

#if FW_VERSION == 271
s32 func_00000598(void) {
    return 0xF;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/cert_loader", func_00000364);

INCLUDE_ASM("nonmatchings/cert_loader", func_000005AC);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000954);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000B10);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000CF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/cert_loader", func_000005D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_00000604);
#endif

#if FW_VERSION >= 300
s32 func_00000604(void) {
    return 0x1FFF;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000060C);
#endif

#if FW_VERSION >= 300
s32 func_0000060C(void) {
    return 7;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_00000614);
#endif

#if FW_VERSION >= 300
s32 func_00000614(void) {
    return 1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000061C);
#endif

#if FW_VERSION >= 300
s32 func_0000061C(void) {
    return 0xF;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/cert_loader", func_00000624);
#endif

#if FW_VERSION >= 300
s32 func_00000624(void) {
    return 3;
}
#endif

s32 sceCertLoader_driver_11391041(void) {
    return 0;
}

s32 sceCertLoader_driver_E86A7DC1(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/cert_loader", func_00000620);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/cert_loader", func_000005B0);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000968);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/cert_loader", func_0000063C);

INCLUDE_ASM("nonmatchings/cert_loader", func_00000A04);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/cert_loader", func_00000D8C);
#endif
