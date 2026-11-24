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

/* $k1 holds the caller's privilege bits in kernel exports (saved, shifted
   and restored around calls); GCC never allocates it. */
#ifdef M2CTX
extern u32 k1;
#else
register u32 k1 __asm__("$27");
#endif

#endif
