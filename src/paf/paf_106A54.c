/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_106A54", func_00106A54);

void func_00106A8C(struct Unk_func_00106A8C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 == 0) {

    } else {
        func_000CFB7C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_106A54", func_00106ABC);

void func_00106AD4(struct Unk_func_00106AD4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf7PhSText15SetColumnOffsetEf(temp_v0);
    }
}

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106A54", func_001047C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_106A54", func_00106B04);
#endif

INCLUDE_ASM("nonmatchings/paf_106A54", func_00106B1C);

INCLUDE_ASM("nonmatchings/paf_106A54", func_00106B34);

INCLUDE_ASM("nonmatchings/paf_106A54", func_00106B4C);
