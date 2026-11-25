#include "common.h"
#include "usbstorms_decls.h"

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v310);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v300);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v282);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00000000_v280);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", func_00000000);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v151);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v150);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000544);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/usbstorms", func_0000082C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", func_000006BC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003A50);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003424);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003430);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000029E8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00002A14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000028FC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003460);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000894);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00000728);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_0000349C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034A8);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034D4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003B2C);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003500);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003530);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000355C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003588);

INCLUDE_RODATA("nonmatchings/usbstorms", D_000035B8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_00002A48);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_000035E8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000360C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000700);
#else
INCLUDE_ASM("nonmatchings/usbstorms", func_00000A9C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003764);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", module_start);

#if FW_VERSION >= 271 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_16173D42);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_CF2AF7B3);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_9569F268);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_2241C828);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", module_stop);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000924);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000A9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000CA8);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001058);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001104);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001238);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_000011F0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001264);

INCLUDE_ASM("nonmatchings/usbstorms", func_000014E0);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001914);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001A84);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001B54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001C9C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000E9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000F40);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/usbstorms", func_000010E4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_000012D4);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000169C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001C1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/usbstorms", func_00001740);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001824);

INCLUDE_ASM("nonmatchings/usbstorms", func_000018AC);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001944);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003890);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_000038C4);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001B60);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002158);

INCLUDE_ASM("nonmatchings/usbstorms", func_000023E0);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002514);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usbstorms", func_000029BC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_000025E4);
#endif

INCLUDE_ASM("nonmatchings/usbstorms", func_000026A8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001E38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_00002030);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002084);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/usbstorms", func_00002138);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002220);
#else
INCLUDE_ASM("nonmatchings/usbstorms", func_000028E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00003170);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002B7C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002C4C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbstorms", func_0000332C);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/usbstorms", func_00003248);

INCLUDE_ASM("nonmatchings/usbstorms", func_000033BC);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003438);

INCLUDE_ASM("nonmatchings/usbstorms", func_000034B4);

INCLUDE_ASM("nonmatchings/usbstorms", func_000035BC);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000377C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000505C);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000506C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003860);

s32 func_00003944(s32 arg0, s32 arg1) {
    sceReg_driver_0CAE832B(arg1);
    sceReg_driver_FA8A5739(arg0);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/usbstorms", func_00003980);

INCLUDE_ASM("nonmatchings/usbstorms", func_00003A24);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_16173D42);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_CF2AF7B3);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_9569F268);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_2241C828);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_4B10A7F5);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_FF0C3873);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_ABE9F2C7);

INCLUDE_ASM("nonmatchings/usbstorms", sceUSB_Stor_Ms_driver_762F7FDF);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000432C);

s32 func_00004380(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/usbstorms", func_00004388);

INCLUDE_ASM("nonmatchings/usbstorms", func_000043C4);

INCLUDE_ASM("nonmatchings/usbstorms", func_00004400);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbstorms", func_00002CA4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00002CC4);
#endif
