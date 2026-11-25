#include "common.h"
#include "exceptionman_decls.h"

INCLUDE_ASM("nonmatchings/exceptionman", syslib_D3744BE0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_5A837AD4);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_565C0B0E);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_1AA6CFFA);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_291FF031);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000414);

INCLUDE_ASM("nonmatchings/exceptionman", func_000004F0);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000514);

INCLUDE_ASM("nonmatchings/exceptionman", func_0000052C);
#endif

#if FW_VERSION < 282
s32 func_000000F4(void) {
    func_00000AAC(func_00000A80());
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000011C(void) {
    func_00000AAC(func_00000A80());
    syslib_D3744BE0();
}
#endif

#if FW_VERSION == 100
void func_0000011C(void) {
    func_000000F4();
    syslib_D3744BE0();
}
#endif

#if FW_VERSION < 282
void ExceptionManagerForKernel_3FB264FC(s32 arg0, s32 arg1) {
    ExceptionManagerForKernel_5A837AD4(arg0, 2, arg1);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_5A837AD4);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_565C0B0E);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_1AA6CFFA);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_DF83875E);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_291FF031);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000470);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", func_000003D8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", func_000004AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000570);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", func_000004D0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", func_000004E8);
#endif

#if FW_VERSION == 282
s32 func_0000051C(void) {
    func_00000AAC(func_00000A80());
    return 0;
}

void func_00000544(void) {
    func_00000AAC(func_00000A80());
    syslib_D3744BE0();
}
#endif

#if FW_VERSION >= 282
void ExceptionManagerForKernel_3FB264FC(s32 arg0, s32 arg1) {
    ExceptionManagerForKernel_5A837AD4(arg0, 2, arg1);
}

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_DF83875E);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_000005C0);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000600);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000690);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006B8);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006C8);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006D8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_FC26C354);
#else
INCLUDE_ASM("nonmatchings/exceptionman", func_000006F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A28);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A54);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_00000A80);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000AAC);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000AD4);

#if FW_VERSION < 282
s32 func_00000744(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_00000B0C(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_00000B14);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000B20);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_15ADC862);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_B15357C9);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000C80);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000CB0);
