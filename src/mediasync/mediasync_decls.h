#ifndef MEDIASYNC_DECLS_H
#define MEDIASYNC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000988;

s32 func_000004CC(void);
s32 sceKernelSetEventFlag(s32, u32);
void sceLfatfsStop(void);
void sceLfatfsWaitReady(void);

#endif
