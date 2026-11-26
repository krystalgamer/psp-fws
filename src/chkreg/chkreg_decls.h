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

s32 _sceChkregCheckRegion(u32, u32);
s32 _sceChkregLookupConsoleIdCertificate(void);
s32 _sceChkregLookupUMDRegionCodeInfo(void);
s32 _sceChkregVerifyConsoleIdCertificate(void);
s32 module_start(SceSize args, void *argp);
s32 module_stop(SceSize args, void *argp);
s32 sceChkregCheckRegion(u32 umdMediaType, u32 regionId);
s32 sceChkregGetPsCode(u8 *pPsCode);
s32 sceIdStorageLookup(u16, u32, void *, u32);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, u32 *);
s32 sceUtilsBufferCopyWithRange(void *, s32, void *, s32, s32);

#endif
