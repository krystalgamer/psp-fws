#ifndef MCCTRL_DECLS_H
#define MCCTRL_DECLS_H

#include "common.h"
#include "m2c_macros.h"


int func_00000BC8(u8 *src, u8 *dst, u32 size);
int func_00000C48(u8 *src, u8 *dst, u32 size);
int func_00000D3C(u8 *buf, u32 size, u8 *mac);
int module_start(SceSize args, void *argp);
int module_stop(SceSize args, void *argp);
int sceMcctrl_1EDFD6BB(u8 *arg0, u8 *arg1);
int sceMcctrl_3EF531DB(void);
int sceMcctrl_61550814(u8 *arg0, u8 *arg1, int size, u8 *out, u32 outSize);
int sceMcctrl_7CAC25B2(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, u8 *arg5);
int sceMcctrl_877CD3A5(void);
int sceMcctrl_9618EE57(u8 *arg0, u8 *arg1, u32 arg2);

#endif
