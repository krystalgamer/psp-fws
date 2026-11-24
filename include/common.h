#ifndef COMMON_H
#define COMMON_H

#include "include_asm.h"

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;

typedef unsigned int SceSize;
typedef int SceUID;

#define NULL ((void *)0)

/* m2c context only: $k1 (caller privilege bits in kernel exports) is shown to
   m2c as a global. A global register variable for it would change register
   save order elsewhere in a file, so C using it is not accepted yet. */
#ifdef M2CTX
extern u32 k1;
#endif

#endif
