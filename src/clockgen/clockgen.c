#include "common.h"
#include "clockgen_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_176833E1);
#else
INCLUDE_RODATA("nonmatchings/clockgen", D_000007A8);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_29160F5D);
#endif

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_C9AF3102);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/clockgen", module_start);
#else
s32 module_start(void) {
    sceClockgen_driver_29160F5D();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/clockgen", module_reboot_before);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_29160F5D);
#endif

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_36F9B49D);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_C6D4C843);
#endif

#if FW_VERSION < 282
s32 func_00000318(void) {
    return 0;
}
#else
s32 func_00000414(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/clockgen", func_0000041C);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_32C8CA86);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_B9716D48);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_4EB657D5);

void sceClockgen_driver_5F8328FD(void) {
    func_00000614(0x10, 1);
}

void sceClockgen_driver_B9FE99D1(void) {
    func_00000614(0x10, 0);
}

void sceClockgen_driver_7FF82F6F(void) {
    func_00000614(8, 1);
}

void sceClockgen_driver_DBE5F283(void) {
    func_00000614(8, 0);
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/clockgen", func_0000047C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/clockgen", func_00000468);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/clockgen", func_00000578);
#endif

INCLUDE_ASM("nonmatchings/clockgen", func_00000614);

INCLUDE_ASM("nonmatchings/clockgen", func_000006C0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/clockgen", D_000008FC);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000908);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/clockgen", D_0000090C);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000918);
#endif
