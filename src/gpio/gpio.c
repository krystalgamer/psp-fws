/* cflags: -O2 -frename-registers */
#include "common.h"
#include "gpio_decls.h"

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_317D9D2C);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_CA8BE2EA);

INCLUDE_RODATA("nonmatchings/gpio", D_00000DE4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/gpio", D_00000DEC);

INCLUDE_RODATA("nonmatchings/gpio", D_00000E18);
#endif

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_37C8DADC);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_F856CE46);

INCLUDE_ASM("nonmatchings/gpio", module_start);

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000CB0);
    InterruptManagerForKernel_F987B1F0(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_EABDB328);

s32 sceGpio_driver_4A992B24(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000CB0);
    InterruptManagerForKernel_F987B1F0(4);
    return 0;
}
#else
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000E40);
    InterruptManagerForKernel_F987B1F0(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_EABDB328);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_4A992B24);
#endif

s32 sceGpio_driver_17DAA8C2(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_64CD4536);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_4250D44A);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_310F0CCF);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_103C3EB2);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_95135905);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_785206CD);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_95D7F3B8);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_31F34AE6);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_BE77D1D0);

#if FW_VERSION < 282
s32 sceGpio_driver_C6928224(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 < 4U) {
        var_v0 = ((u32) D_00000D44 >> (arg0 * 8)) & 0x1F;
    }
    return var_v0;
}
#else
s32 sceGpio_driver_C6928224(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80000102;
    if (arg0 < 4U) {
        var_v0 = ((u32) D_00000E94 >> (arg0 * 8)) & 0x1F;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_6B38B826);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_5691CEFA);

INCLUDE_ASM("nonmatchings/gpio", sceGpio_driver_2CDC8EDC);
#endif

INCLUDE_ASM("nonmatchings/gpio", func_00000978);

INCLUDE_ASM("nonmatchings/gpio", func_000009F8);

INCLUDE_ASM("nonmatchings/gpio", func_00000A7C);

INCLUDE_ASM("nonmatchings/gpio", func_00000AAC);

INCLUDE_ASM("nonmatchings/gpio", func_00000AE0);

INCLUDE_ASM("nonmatchings/gpio", func_00000B28);

INCLUDE_ASM("nonmatchings/gpio", func_00000B54);
