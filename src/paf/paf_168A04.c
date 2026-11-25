/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 func_00168A04(struct Unk_func_00168A04_0 *arg0) {
    s32 var_a1;

    var_a1 = 0x80615001;
    if ((arg0->unk0 & 0xF) == 0xF) {
        var_a1 = arg0->unk18;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168A28);
#endif

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168A88);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168B34);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168BAC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FAC8);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FB60);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FBF8);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_168A04", func_001674A4);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00167524);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FD10);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FD64);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FE3C);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FEE0);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0015FF98);

INCLUDE_ASM("nonmatchings/paf_168A04", func_001600B0);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_168A04", func_00167B78);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_168A04", func_001215BC);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00121674);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0012172C);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0012176C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_168A04", func_00168BFC);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168C94);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168D30);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168E44);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00168EC4);

INCLUDE_ASM("nonmatchings/paf_168A04", func_0016904C);

INCLUDE_ASM("nonmatchings/paf_168A04", func_001690BC);

INCLUDE_ASM("nonmatchings/paf_168A04", func_001690E8);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00169128);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00169194);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00169238);

INCLUDE_ASM("nonmatchings/paf_168A04", func_001692F0);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00169408);

INCLUDE_ASM("nonmatchings/paf_168A04", func_00169518);
#endif
