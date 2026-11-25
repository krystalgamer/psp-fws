#ifndef MESG_LED_DECLS_H
#define MESG_LED_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002714;
extern s32 D_00002718;
extern s32 D_00002994;
extern s32 D_00002998;
extern s32 D_00006F94;
extern s32 D_00006F98;

s32 module_start(void);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(s32);

#endif
