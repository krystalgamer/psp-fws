#ifndef SYSCLIB_DECLS_H
#define SYSCLIB_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void bcmp(s32 arg0, s32 arg1, s32 arg2);
void bcopy(s32 arg0, s32 arg1);
s32 func_00001B7C(void);
s32 memcmp(s32, s32, s32);
s32 memmove(s32, s32);
s32 module_start(void);
u8 *strcpy(u8 *arg0, u8 *arg1);

#endif
