#include "common.h"
#include "usbstorboot_decls.h"

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

#if FW_VERSION >= 282
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

#if FW_VERSION >= 282
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

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/usbstorboot", func_00001834);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000018A8);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00002D5C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000191C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001A54);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001AB0);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00002DCC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00002DDC);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001B84);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001BD4);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001C24);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001D88);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001E5C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00001F14);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000020A0);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002230);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000231C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002424);

void func_00002474(void) {
    sceSemawm_77C42467();
}

s32 func_00002490(void) {
    sceSemawm_51E51869();
    return 0;
}

INCLUDE_ASM("nonmatchings/usbstorboot", func_000024B0);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000024DC);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002508);
#endif
