#ifndef CHNNLSV_DECLS_H
#define CHNNLSV_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 mode;
    u32 unk4;
    u8 data[16];
} SceSdCtx1;
typedef struct {
    u32 mode;
    u8 data[16];
    u8 key[16];
    u32 size;
} SceSdCtx2;

extern s32 D_00002AD4;
extern s32 D_00002AD8;

s32 module_start(void);
s32 sceSdCleanList(SceSdCtx1 *ctx);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);
s32 sceSdSetIndex(SceSdCtx2 *ctx, s32 mode);

#endif
