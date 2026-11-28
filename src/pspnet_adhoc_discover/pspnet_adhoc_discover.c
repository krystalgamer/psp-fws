/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
#include "common.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverInitStart);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000EEC);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000EF0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F00);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F18);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F28);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F3C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F54);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F68);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F78);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000F8C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000FBC);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000FC4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000FDC);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000FF0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00000FF8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_discover", D_00001004);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverUpdate);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverGetStatus);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverStop);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverTerm);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverRequestSuspend);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_000007F8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000938);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000A30);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000AF4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000CBC);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000BDC);
#endif
