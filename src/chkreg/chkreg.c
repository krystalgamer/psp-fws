#include "common.h"
#include "chkreg_decls.h"

INCLUDE_ASM("nonmatchings/chkreg", func_00000000);

INCLUDE_ASM("nonmatchings/chkreg", func_00000128);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/chkreg", func_00000190);

INCLUDE_ASM("nonmatchings/chkreg", func_0000020C);
#endif

s32 module_start(SceSize args, void *argp) {
    u32 i;

    for (i = 0; i < 0xA00; i++) {
        g_pIdStorageUMDConfig[i] = 0;
    }
#if FW_VERSION >= 152
    for (i = 0; i < 0xB8; i++) {
        g_ConsoleIdCertificate[i] = 0;
    }
#endif
    g_numUMDRegionCodeInfoEntries = 0;
    g_isUMDRegionCodesObtained = 0;
#if FW_VERSION >= 152
    g_isConsoleIdCertificateObtained = 0;
#endif
    g_semaId = sceKernelCreateSema("SceChkreg", 0, 1, 1, NULL);
    return g_semaId < 1;
}

INCLUDE_ASM("nonmatchings/chkreg", module_stop);

INCLUDE_ASM("nonmatchings/chkreg", sceChkregCheckRegion);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/chkreg", sceChkregGetPsCode);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/chkreg", sceChkreg_driver_9C6E1D34);

const u8 D_0000083C[0x14] = {
    0x5F, 0x7C, 0x9B, 0x91,
    0x60, 0xFF, 0xB3, 0xCE,
    0x41, 0x9E, 0xBD, 0x2A,
    0x4E, 0x4B, 0x1B, 0x15,
    0x2C, 0x2A, 0xDF, 0xA0,
};
#endif
