/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "usbstorboot_decls.h"

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000000);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000005C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000000B4);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00000108);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003380);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003384);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_0000339C);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000033BC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000033D4);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000033EC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003400);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003418);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_0000342C);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003444);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003454);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003464);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003484);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003494);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000034CC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000034D4);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000034EC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000034F0);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_000034FC);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_0000352C);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003534);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003540);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_0000354C);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003560);
#endif

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

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/usbstorboot", module_start);

INCLUDE_ASM("nonmatchings/usbstorboot", module_stop);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usbstorboot", sceUsbstorBoot_8A4F36E5);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/usbstorboot", module_start);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    s32 var_v1;

    memset(&D_00001F20, 0, 0x104);
    var_v1 = 0;
    if (sceUsbstor_internal_489E6BF1(&D_00001F00) < 0) {
        KDebugForKernel_84F370BC("%serror - cannot register handler\n", &D_00001B60);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/usbstorboot", module_stop);
#endif

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

#if FW_VERSION >= 302
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
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/usbstorboot", func_00002458);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000024C8);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000258C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000025F8);

INCLUDE_ASM("nonmatchings/usbstorboot", func_0000266C);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003A90);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000026E0);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000027D4);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003AE0);

INCLUDE_RODATA("nonmatchings/usbstorboot", D_00003AEC);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000028AC);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002914);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002964);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002B50);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002C5C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002D3C);

INCLUDE_ASM("nonmatchings/usbstorboot", func_00002EC0);
#endif

#if FW_VERSION >= 302
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

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/usbstorboot", func_00003008);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000030B4);

INCLUDE_ASM("nonmatchings/usbstorboot", func_000030DC);
#endif
