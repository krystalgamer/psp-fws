/* cflags[152]: -Os -frename-registers */
/* cflags[150]: -Os -frename-registers */
/* cflags[100]: -Os -frename-registers */
#include "common.h"
#include "pspnet_adhoc_download_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadCreateServer);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStartServer);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_000038C4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_000038C8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_000038D8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_000038F0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003900);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_0000390C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_0000391C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003930);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003944);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003954);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003968);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003A70);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003A78);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003ACC);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003AD4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003AF8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003B14);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_download", D_00003B20);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadReplySession);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadSend);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadAbortSend);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000008C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000718);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A80);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A9C);
#endif

#if FW_VERSION == 152
s32 *func_00000A9C(void *arg0) {
    s32 *temp_a1;
    s32 *temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0xA8);
    if (temp_v1 != NULL) {
        temp_a1 = *temp_v1;
        M2C_FIELD(arg0, s32 **, 0xA8) = temp_a1;
        if (temp_a1 == NULL) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        }
        *temp_v1 = NULL;
    }
    return temp_v1;
}
#endif

#if FW_VERSION == 150
M2C_UNK *func_00000A9C(void *arg0) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 0xA8);
    if (temp_v1 != NULL) {
        temp_a1 = *temp_v1;
        M2C_FIELD(arg0, M2C_UNK **, 0xA8) = temp_a1;
        if (temp_a1 == NULL) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        }
        *temp_v1 = NULL;
    }
    return temp_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000AC4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000590);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00000A2C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadInitServer);
#else
s32 sceNetAdhocDownloadInitServer(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80410C02;
    if (D_00002390 == 0) {
        temp_v0 = func_000020D4(arg0);
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            D_00002390 = 1;
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStartServer);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadAbortReplySession);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadAbortSend);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStopServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadDeleteServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadTermServer);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadInitClient);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadCreateClient);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStartClient);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadGetServerList);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadRequestSession);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadRecv);

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStopClient);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001950);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001BD8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001918);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000158C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001BD4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001CC8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D24);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D68);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadInitClient);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStartClient);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadAbortRequestSession);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadAbortRecv);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadStopClient);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadDeleteClient);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownloadTermClient);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000200C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001B1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002008);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000020D4);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002118);
#else
void func_00002118(void) {
    if (D_00003D90 > 0) {
        sceKernelDeleteVpl(D_00003D90);
        D_00003D90 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002150);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000021C4);
#else
void func_000021C4(void *arg0) {
    sceKernelFreeVpl(D_00003D90, arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000021F0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002264);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002280);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022A8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002300);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeCreateServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeStartServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeStopServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeDeleteServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_48F87AB1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_0A531FBE);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002D64);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002F34);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002FDC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00003298);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00003310);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000020E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001CC8_v100);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D28);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001D60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001DD4);

u8 *func_00001E14(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001E48);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022E0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001E74);

void func_00001EB4(s32 arg0, s32 arg1) {
    func_00001D60(arg1, arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00001ED8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000021EC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002260);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000227C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022A4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_000022FC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeCreateServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeStartServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeStopServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeDeleteServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_48F87AB1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDownload_0A531FBE);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002D60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002F30);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00002FD8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_00003294);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", func_0000330C);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeInitServer);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_download", sceNetAdhocDistributeTermServer);
#endif
