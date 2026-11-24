#include "common.h"

INCLUDE_ASM("nonmatchings/usbstorms", func_00000000);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374_v150);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000544);

INCLUDE_ASM("nonmatchings/usbstorms", func_000006BC);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003424);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000374);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003430);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/usbstorms", D_000029E8);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00002A14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000028FC);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/usbstorms", D_00003460);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000728);

INCLUDE_RODATA("nonmatchings/usbstorms", D_0000349C);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034A8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/usbstorms", D_000034D4);
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

INCLUDE_ASM("nonmatchings/usbstorms", module_stop);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000924);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000A9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000CA8);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001058);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001104);
#endif

#if FW_VERSION == 150
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

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/usbstorms", func_00001C9C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00000E9C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00000F40);

INCLUDE_ASM("nonmatchings/usbstorms", func_000010E4);

INCLUDE_ASM("nonmatchings/usbstorms", func_000012D4);

INCLUDE_ASM("nonmatchings/usbstorms", func_0000169C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001740);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001824);

INCLUDE_ASM("nonmatchings/usbstorms", func_000018AC);

INCLUDE_ASM("nonmatchings/usbstorms", func_00001944);

INCLUDE_RODATA("nonmatchings/usbstorms", D_00003890);
#endif

INCLUDE_RODATA("nonmatchings/usbstorms", D_000038C4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/usbstorms", func_00001B60);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002158);

INCLUDE_ASM("nonmatchings/usbstorms", func_000023E0);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002514);

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

INCLUDE_ASM("nonmatchings/usbstorms", func_00002B7C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002C4C);

INCLUDE_ASM("nonmatchings/usbstorms", func_00002CC4);
#endif
