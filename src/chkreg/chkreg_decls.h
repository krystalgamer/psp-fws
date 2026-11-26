#ifndef CHKREG_DECLS_H
#define CHKREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern u8 g_ConsoleIdCertificate[0xB8];
extern s32 g_isConsoleIdCertificateObtained;
extern s32 g_isUMDRegionCodesObtained;
extern s32 g_numUMDRegionCodeInfoEntries;
extern u8 *g_pIdStorageUMDConfig;
extern s32 g_semaId;

s32 sceKernelCreateSema(void *, u32, s32, s32, void *);

#endif
