#include "common.h"
#include "mediasync_decls.h"

INCLUDE_ASM("nonmatchings/mediasync", module_start);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediasync", func_00000124);
#else
INCLUDE_ASM("nonmatchings/mediasync", func_0000014C);

INCLUDE_ASM("nonmatchings/mediasync", func_000001E4);

INCLUDE_ASM("nonmatchings/mediasync", func_00000380);

INCLUDE_ASM("nonmatchings/mediasync", func_000005BC);

INCLUDE_ASM("nonmatchings/mediasync", func_000005F0);

INCLUDE_ASM("nonmatchings/mediasync", func_000006E4);

INCLUDE_ASM("nonmatchings/mediasync", func_00000770);

INCLUDE_ASM("nonmatchings/mediasync", func_0000079C);

INCLUDE_ASM("nonmatchings/mediasync", func_000007E0);

INCLUDE_ASM("nonmatchings/mediasync", func_00000C68);

INCLUDE_ASM("nonmatchings/mediasync", func_00000E48);

INCLUDE_ASM("nonmatchings/mediasync", func_00000EF4);

INCLUDE_ASM("nonmatchings/mediasync", func_000010A8);

INCLUDE_ASM("nonmatchings/mediasync", func_00001230);

INCLUDE_ASM("nonmatchings/mediasync", func_000013A0);

INCLUDE_ASM("nonmatchings/mediasync", func_0000161C);

INCLUDE_ASM("nonmatchings/mediasync", func_00001E10);

INCLUDE_ASM("nonmatchings/mediasync", func_00002490);

INCLUDE_ASM("nonmatchings/mediasync", func_00002770);

INCLUDE_ASM("nonmatchings/mediasync", func_000028DC);

INCLUDE_ASM("nonmatchings/mediasync", func_00002C20);

INCLUDE_ASM("nonmatchings/mediasync", func_00002EB8);

INCLUDE_ASM("nonmatchings/mediasync", func_0000335C);

INCLUDE_ASM("nonmatchings/mediasync", func_00003464);

INCLUDE_ASM("nonmatchings/mediasync", func_000037D4);

INCLUDE_ASM("nonmatchings/mediasync", func_000038C0);

INCLUDE_ASM("nonmatchings/mediasync", func_00003A40);

INCLUDE_ASM("nonmatchings/mediasync", func_00003AD8);

INCLUDE_ASM("nonmatchings/mediasync", func_00003CA0);

INCLUDE_ASM("nonmatchings/mediasync", func_00003CF8);

INCLUDE_ASM("nonmatchings/mediasync", func_00003D70);

INCLUDE_ASM("nonmatchings/mediasync", func_00003DE0);

INCLUDE_ASM("nonmatchings/mediasync", func_00003E6C);

INCLUDE_ASM("nonmatchings/mediasync", func_00003FF4);

INCLUDE_ASM("nonmatchings/mediasync", func_00004188);

INCLUDE_ASM("nonmatchings/mediasync", func_00004308);

INCLUDE_ASM("nonmatchings/mediasync", func_00004500);

INCLUDE_ASM("nonmatchings/mediasync", func_00004618);

INCLUDE_ASM("nonmatchings/mediasync", func_0000472C);

INCLUDE_ASM("nonmatchings/mediasync", func_00004BF0);

INCLUDE_ASM("nonmatchings/mediasync", func_00004FB4);

INCLUDE_ASM("nonmatchings/mediasync", func_00005088);

INCLUDE_ASM("nonmatchings/mediasync", func_0000542C);

INCLUDE_ASM("nonmatchings/mediasync", func_000054F4);

INCLUDE_ASM("nonmatchings/mediasync", func_0000564C);

INCLUDE_ASM("nonmatchings/mediasync", func_00005750);

INCLUDE_RODATA("nonmatchings/mediasync", D_00006DF0);
#endif

INCLUDE_RODATA("nonmatchings/mediasync", D_00006E10);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediasync", func_00005918);

INCLUDE_ASM("nonmatchings/mediasync", func_00005BD0);

INCLUDE_ASM("nonmatchings/mediasync", func_00005CA0);

INCLUDE_ASM("nonmatchings/mediasync", func_00005D7C);

INCLUDE_ASM("nonmatchings/mediasync", func_00005F84);

INCLUDE_ASM("nonmatchings/mediasync", func_00005FF8);

INCLUDE_ASM("nonmatchings/mediasync", func_0000604C);

INCLUDE_ASM("nonmatchings/mediasync", func_00006088);

INCLUDE_ASM("nonmatchings/mediasync", func_00006144);

INCLUDE_ASM("nonmatchings/mediasync", func_000061D8);

INCLUDE_ASM("nonmatchings/mediasync", func_00006268);

INCLUDE_ASM("nonmatchings/mediasync", func_000062E0);

INCLUDE_ASM("nonmatchings/mediasync", func_000063B0);

INCLUDE_ASM("nonmatchings/mediasync", func_0000641C);

INCLUDE_ASM("nonmatchings/mediasync", func_0000647C);

INCLUDE_ASM("nonmatchings/mediasync", func_00006518);

INCLUDE_ASM("nonmatchings/mediasync", func_00006608);

INCLUDE_ASM("nonmatchings/mediasync", func_0000670C);

INCLUDE_ASM("nonmatchings/mediasync", func_0000687C);
#endif

INCLUDE_RODATA("nonmatchings/mediasync", D_00006E38);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mediasync", D_00000858);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/mediasync", D_000009B4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mediasync", D_00000864);

INCLUDE_RODATA("nonmatchings/mediasync", D_00000894);

INCLUDE_RODATA("nonmatchings/mediasync", D_000008D4);

INCLUDE_ASM("nonmatchings/mediasync", func_00000298);

INCLUDE_ASM("nonmatchings/mediasync", func_00000454);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/mediasync", func_0000050C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediasync", func_000004CC);
#endif

#if FW_VERSION < 282
void sceLFatFs_driver_933F6E29(void) {

}

void sceLFatFs_driver_8F0560E0(void) {

}
#endif
