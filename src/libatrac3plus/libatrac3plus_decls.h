#ifndef LIBATRAC3PLUS_DECLS_H
#define LIBATRAC3PLUS_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2);
s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1);
s32 sceAtracSetHalfwayBuffer(s32, void *, u32, u32);
s32 sceAtracSetHalfwayBufferAndGetID(void *, u32, u32);

#endif
