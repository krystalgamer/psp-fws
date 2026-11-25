#include "common.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverInitStart);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverUpdate);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverGetStatus);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverStop);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverTerm);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", sceNetAdhocDiscoverRequestSuspend);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_000007F8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000938);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000A30);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000AF4);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000BDC);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_discover", func_00000CBC);
#endif
