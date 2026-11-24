#include "common.h"
#include "exceptionman_decls.h"

INCLUDE_ASM("nonmatchings/exceptionman", syslib_D3744BE0);

#if FW_VERSION == 100
s32 func_000000F4(void) {
    func_00000AAC(func_00000A80());
    return 0;
}
#endif

#if FW_VERSION == 100
void func_0000011C(void) {
    func_000000F4();
    syslib_D3744BE0();
}
#endif

#if FW_VERSION == 100
void ExceptionManagerForKernel_3FB264FC(s32 arg0, s32 arg1) {
    ExceptionManagerForKernel_5A837AD4(arg0, 2, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_5A837AD4);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_565C0B0E);

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_1AA6CFFA);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_DF83875E);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_291FF031);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000470);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", func_000003D8);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_000004AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000570);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", func_000004D0);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_000004E8);

#if FW_VERSION != 100
s32 func_0000051C(void) {
    func_00000AAC(func_00000A80());
    return 0;
}
#endif

#if FW_VERSION != 100
void func_00000544(void) {
    func_00000AAC(func_00000A80());
    syslib_D3744BE0();
}
#endif

#if FW_VERSION != 100
void ExceptionManagerForKernel_3FB264FC(s32 arg0, s32 arg1) {
    ExceptionManagerForKernel_5A837AD4(arg0, 2, arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", ExceptionManagerForKernel_DF83875E);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_000005C0);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000600);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000690);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006B8);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006C8);

INCLUDE_ASM("nonmatchings/exceptionman", func_000006D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/exceptionman", func_000006F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", func_000006F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/exceptionman", func_00000A54);
#endif

INCLUDE_ASM("nonmatchings/exceptionman", func_00000A80);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000AAC);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000AD4);

#if FW_VERSION == 100
s32 func_00000744(s32 arg0) {
    return arg0 == 0;
}
#endif

#if FW_VERSION != 100
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
