/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_0016990C);
#else
u32 func_0016990C(struct Unk_func_0016990C_0 *arg0) {
    return (u8) arg0->unk30->unk2 >> 5;
}
#endif

INCLUDE_ASM("nonmatchings/paf_16990C", func_0016991C);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169950);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_00121AD8);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00121B48);
#endif

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169970);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_001699AC);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169A40);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169AAC);
#endif
