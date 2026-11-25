/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_00169B1C(struct Unk_func_00169B1C_0 *arg0, s32 arg1, s32 arg2) {
    func_00169C20(arg0->unk24, arg2, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169B44);

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016068C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169B90);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169C20);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169CFC);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169DC4);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169E80);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169EC8);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_00169F00);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A180);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A19C);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A218);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A258);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A2B4);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A2B8);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A3C4);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A4C0);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016A9B4);
#endif

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016AD78);

INCLUDE_ASM("nonmatchings/paf_169B1C", func_0016AE0C);
