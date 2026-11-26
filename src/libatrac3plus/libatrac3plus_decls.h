#ifndef LIBATRAC3PLUS_DECLS_H
#define LIBATRAC3PLUS_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00001054(u8 *arg0);
u8 *func_00001140(u8 *arg0, u32 arg1, u32 arg2, s32 arg3);
s32 func_00001288(void *arg0);
s32 func_00002014(void *arg0);
s32 func_00002044(s32, s32);
s32 func_000020B4(s32, s32);
u32 func_000021E4(void *arg0);
s32 func_000022A4(s32 *arg0);
s32 func_000022C4(s32 *arg0);
u32 func_000022E4(u32 arg0, u32 arg1);
void func_00002320(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00002348(void *arg0);
s32 func_000028A8(s32, s32, s32);
u32 func_000028B4(s32 arg0, u32 arg1, u32 arg2);
void func_000029CC(void *arg0);
u32 func_00002D4C(void *arg0);
s32 func_00002E3C(s32);
u32 func_00002FBC(u32 arg0, s32 arg1, u32 arg2, u32 arg3);
s32 func_000030A8(void *arg0);
s32 func_00003168(s32 arg0, u32 arg1, s32 arg2, u32 arg3);
s32 func_00003214(u32 arg0, u32 arg1, u32 arg2, u32 arg3);
u32 func_000032F0(u32 arg0, u32 arg1, u32 arg2);
void func_00003320(void *arg0, u32 arg1);
s32 sceAtracSetAA3DataAndGetID(void *arg0, u32 arg1, u32 arg2, void *arg3);
s32 sceAtracSetAA3HalfwayBufferAndGetID(void *, u32, u32, u32, void *);
s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2);
s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1);
s32 sceAtracSetHalfwayBuffer(s32, void *, u32, u32);
s32 sceAtracSetHalfwayBufferAndGetID(void *, u32, u32);

#endif
