#ifndef LIBATRAC3PLUS_DECLS_H
#define LIBATRAC3PLUS_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00001288(void *arg0);
s32 func_00002014(void *arg0);
void func_00002320(u8 *arg0, u8 *arg1, s32 arg2);
u32 func_00002D4C(void *arg0);
s32 func_00003168(s32 arg0, u32 arg1, s32 arg2, u32 arg3);
u32 func_000032F0(u32 arg0, u32 arg1, u32 arg2);
void func_00003320(void *arg0, u32 arg1);
s32 sceAtracSetAA3DataAndGetID(void *arg0, u32 arg1, u32 arg2, void *arg3);
s32 sceAtracSetAA3HalfwayBufferAndGetID(void *, u32, u32, u32, void *);
s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2);
s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1);
s32 sceAtracSetHalfwayBuffer(s32, void *, u32, u32);
s32 sceAtracSetHalfwayBufferAndGetID(void *, u32, u32);

#endif
