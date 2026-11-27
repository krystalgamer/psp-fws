/* cflags[150]: -Os -frename-registers */
/* cflags[100]: -Os */
/* cflags[152]: -O2 -frename-registers */
#include "common.h"
#include "exceptionman_decls.h"

INCLUDE_ASM("nonmatchings/exceptionman", module_bootstart);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/exceptionman", sceKernelRegisterPriorityExceptionHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelRegisterDefaultExceptionHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelReleaseExceptionHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelReleaseDefaultExceptionHandler);

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
    module_bootstart();
}
#endif

#if FW_VERSION == 100
void func_0000011C(void) {
    func_000000F4();
    module_bootstart();
}
#endif

#if FW_VERSION < 282
void sceKernelRegisterExceptionHandler(s32 arg0, s32 arg1) {
    sceKernelRegisterPriorityExceptionHandler(arg0, 2, arg1);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", sceKernelRegisterPriorityExceptionHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelRegisterDefaultExceptionHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelReleaseExceptionHandler);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/exceptionman", sceKernelGetActiveDefaultExceptionHandler);
#endif

#if FW_VERSION == 152
s32 sceKernelGetActiveDefaultExceptionHandler(void) {
    return ((D_00002400 ^ (s32) &func_00000A28) == 0) ? 0 : D_00002400;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/exceptionman", sceKernelReleaseDefaultExceptionHandler);
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
    module_bootstart();
}
#endif

#if FW_VERSION >= 282
void sceKernelRegisterExceptionHandler(s32 arg0, s32 arg1) {
    sceKernelRegisterPriorityExceptionHandler(arg0, 2, arg1);
}

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelGetActiveDefaultExceptionHandler);
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

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelRegisterNmiHandler);

INCLUDE_ASM("nonmatchings/exceptionman", sceKernelReleaseNmiHandler);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000C80);

INCLUDE_ASM("nonmatchings/exceptionman", func_00000CB0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/exceptionman", D_00000DD4);

INCLUDE_RODATA("nonmatchings/exceptionman", D_00000DEC);

INCLUDE_RODATA("nonmatchings/exceptionman", D_00000E08);
#endif
