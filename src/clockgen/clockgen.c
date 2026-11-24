#include "common.h"
#include "clockgen_decls.h"

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_176833E1);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_C9AF3102);

INCLUDE_ASM("nonmatchings/clockgen", module_start);

INCLUDE_ASM("nonmatchings/clockgen", module_reboot_before);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_29160F5D);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_36F9B49D);

INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_C6D4C843);

s32 func_00000414(void) {
    return 0;
}

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

INCLUDE_ASM("nonmatchings/clockgen", func_00000578);

INCLUDE_ASM("nonmatchings/clockgen", func_00000614);

INCLUDE_ASM("nonmatchings/clockgen", func_000006C0);

INCLUDE_RODATA("nonmatchings/clockgen", D_0000090C);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000918);
