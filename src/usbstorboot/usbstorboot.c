#include "common.h"

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000000);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000005C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000000B4);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000108);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000180);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000530);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000005B8);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00001B60);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00001B70);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00001B90);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00001BB4);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00001BD8);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000007B0);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_E58818A8);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_594BBF95);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_6D865ECD);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_A1119F0D);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_1F080078);

INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_A55C9E16);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_8A4F36E5);
#endif

INCLUDE_ASM("nonmatchings/usbstorboot", module_start);

INCLUDE_ASM("nonmatchings/usbstorboot", module_stop);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/usbstorboot", func_00000CE8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/usbstorboot", func_00000CC8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usbstorboot", func_00000CF0);
#endif

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001068);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001128);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001234);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000012B4);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000137C);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/usbstorboot", func_00001434);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000150C);
#else
INCLUDE_ASM("nonmatchings/usbstorboot", func_000013F0);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000014CC);
#endif

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001754);
