#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B0B0);

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B108);

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B450);

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B4B8);

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B52C);
#endif

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B8A4);

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016B92C);
#endif

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016BB94);

INCLUDE_ASM("nonmatchings/paf_16B0B0", func_0016BCA8);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_16B0B0", D_001A2C40);
#endif

INCLUDE_RODATA("nonmatchings/paf_16B0B0", D_001A2D00);

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/paf_16B0B0", D_001A2D90);
#endif
