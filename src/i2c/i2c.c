/* cflags: -O2 -frename-registers */
#include "common.h"
#include "i2c_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/i2c", func_00000000);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceI2c_driver_D6E9836A(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x14) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceI2c_driver_D6E9836A(s32 arg0, s32 arg1) {
    D_00001730.unk14 = arg1;
    D_00001730.unk10 = arg0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_E9463B99);

INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_F87D1ED6);

INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_6536B1B6);

INCLUDE_ASM("nonmatchings/i2c", module_start);

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00001570);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteSema(M2C_VFIELD(&D_000015B0, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_000015B0, s32, 0));
    return 0;
}

INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_20ADF12A);

s32 sceI2c_driver_4809D85F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00001570);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteSema(M2C_VFIELD(&D_000015B0, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_000015B0, s32, 0));
    return 0;
}
#endif

#if FW_VERSION == 303
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v303);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 302
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v302);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 301
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v301);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 300
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v300);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016F0);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteSema(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_20ADF12A);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_4809D85F);
#endif

#if FW_VERSION == 303
s32 sceI2c_driver_4809D85F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v303);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 302
s32 sceI2c_driver_4809D85F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v302);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 301
s32 sceI2c_driver_4809D85F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v301);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 300
s32 sceI2c_driver_4809D85F(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000016E0_v300);
    InterruptManagerForKernel_F987B1F0(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

s32 sceI2c_driver_21A8282C(void) {
    sceSysreg_driver_58F47EFD();
    sceSysreg_driver_94B0323C();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/i2c", sceI2c_driver_B952BA65);
#else
s32 sceI2c_driver_B952BA65(void) {
    sceSysreg_driver_DC68A93F();
    sceSysreg_driver_0436B60F();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceI2c_driver_DB6C4F9B(s32 arg0) {
    D_000015B8 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceI2c_driver_0397408B(s32 arg0) {
    D_00001718 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceI2c_driver_17B0DA59(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceI2c_driver_D6E9836A(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x14) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceI2c_driver_D6E9836A(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0xC) = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/i2c", func_000011B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/i2c", func_0000109C);
#endif

#if FW_VERSION >= 282
s32 sceI2c_driver_DB6C4F9B(s32 arg0) {
    D_0000173C = arg0;
    return 0;
}

s32 sceI2c_driver_0397408B(s32 arg0) {
    D_00001738 = arg0;
    return 0;
}

s32 sceI2c_driver_17B0DA59(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/i2c", func_00001264);

INCLUDE_ASM("nonmatchings/i2c", func_000012BC);

INCLUDE_RODATA("nonmatchings/i2c", D_000016E0);
