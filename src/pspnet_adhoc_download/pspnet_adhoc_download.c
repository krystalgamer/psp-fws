#include "common.h"
#include "pspnet_adhoc_download_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_13DAB550);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_2B6FB0DA);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_F8FC359E);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_D0189004);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000718);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A80);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A9C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000AC4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000590);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_A70FDFBE);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A2C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_A21FEF45);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_2B6FB0DA);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_C421875C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_A70FDFBE);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_F76147B1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_7A483F9E);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_117CA01A);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_3082F4E2);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_57A51DD0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_314ED31E);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_22C2BCC6);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_4E6029F1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_8846D2B0);

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_469F6B83);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001950);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000158C);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001BD4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001CC8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D24);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D68);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_3082F4E2);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_314ED31E);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_8A5500E0);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_1AD5CC88);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_469F6B83);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_378D4311);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_BF1433F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001B1C);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002008);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000020D4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002118);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002150);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000021C4);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000020E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001CC8_v100);
#endif

#if FW_VERSION < 282
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D28);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001DD4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001E14);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001E48);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001E74);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001EB4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001ED8);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000021EC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002260);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000227C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022A4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022FC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_3B6A7B35);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_8A987F07);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_4C542FD1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_A45230D9);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_48F87AB1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_0A531FBE);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002D60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002F30);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002FD8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00003294);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000330C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_48252AF0);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_827157E2);
#endif
