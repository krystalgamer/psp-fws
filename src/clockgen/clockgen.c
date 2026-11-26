/* cflags[100]: -O2 -frename-registers */
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

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/clockgen", module_reboot_before);
#else
s32 module_reboot_before(void) {
    if (D_00000930 >= 0) {
        sceKernelDeleteSema(D_00000930);
        D_00000930 = -1;
    }
    sceSysEventForKernel_D7D3FDCD(&D_0000093C);
    return 0;
}
#endif

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

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/clockgen", func_0000041C);
#else
s32 func_0000041C(void) {
    func_000006C0(1, M2C_VFIELD(&D_00000930, u8, 5) & 0xFF);
    func_000006C0(2, M2C_VFIELD(&D_00000930, u8, 6) & 0xFF);
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/clockgen", sceClockgen_driver_32C8CA86);
#else
s32 sceClockgen_driver_32C8CA86(void) {
    return M2C_VFIELD(&D_00000930, u8, 4) & 0xFF;
}
#endif

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
s32 func_00000468(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x400:
        break;
    case 0x100000:
        func_000006C0(1, M2C_VFIELD(&D_00000930, u8, 5) & 0xFF);
        func_000006C0(2, M2C_VFIELD(&D_00000930, u8, 6) & 0xFF);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/clockgen", func_00000578);
#endif

INCLUDE_ASM("nonmatchings/clockgen", func_00000614);

INCLUDE_ASM("nonmatchings/clockgen", func_000006C0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/clockgen", D_00000820);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000824);

INCLUDE_RODATA("nonmatchings/clockgen", D_0000083C);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000858);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000868);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000888);

INCLUDE_RODATA("nonmatchings/clockgen", D_0000089C);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 282) || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/clockgen", D_000008FC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/clockgen", D_00000910);

INCLUDE_RODATA("nonmatchings/clockgen", D_0000091C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/clockgen", D_00000908);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/clockgen", D_0000090C);

INCLUDE_RODATA("nonmatchings/clockgen", D_00000918);
#endif
