#ifndef USBCAM_DECLS_H
#define USBCAM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_0000A658;
extern s32 D_0000B454;
extern M2C_UNK D_0000BA80;
extern M2C_UNK D_0000BC08;
extern s32 D_0000BC1C;
extern s32 D_0000BDB8;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, s32);
void func_000039E8(void);
void func_000039F0(void *arg0);
s32 func_00008E1C(void);
s32 sceKernelSignalSema(s32, s32);
s32 sceUsbBus_driver_C1E2A540(M2C_UNK *);
s32 sceUsbCamGetAutoImageReverseState(void);
s32 sceUsbCamGetBrightness(void *arg0);
s32 sceUsbCamGetContrast(void *arg0);
s32 sceUsbCamGetEvLevel(void *arg0);
s32 sceUsbCamGetImageEffectMode(void *arg0);
s32 sceUsbCamGetReverseMode(void *arg0);
s32 sceUsbCamGetZoom(void *arg0);
s32 sceUsbCam_driver_1E958148(s32, s32);
s32 sceUsbCam_driver_95F8901E(void);

#endif
