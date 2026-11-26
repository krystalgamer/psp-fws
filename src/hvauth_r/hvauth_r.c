#include "common.h"

INCLUDE_ASM("nonmatchings/hvauth_r", sceHVAuth_5E335DF6);

INCLUDE_ASM("nonmatchings/hvauth_r", sceHVAuth_816A5F92);

INCLUDE_ASM("nonmatchings/hvauth_r", func_000001B0);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/hvauth_r", D_00001278);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_0000127C);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_00001290);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_000012A0);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_000012AC);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_000012C4);
#endif

INCLUDE_RODATA("nonmatchings/hvauth_r", D_000012C8);

INCLUDE_RODATA("nonmatchings/hvauth_r", D_00001320);
