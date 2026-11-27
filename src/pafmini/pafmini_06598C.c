/* cflags: -O1 */
#include "common.h"
#include "pafmini_decls.h"

void func_0006598C(struct Unk_func_0006598C_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_0006599C);

void func_000659DC(struct Unk_func_000659DC_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_000659EC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06598C", func_0007ECC4);

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_0007EDAC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_06598C", func_0007D810);

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_0007D900);
#endif

#if FW_VERSION == 282
void func_00065A2C(struct Unk_func_00065A2C_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065A3C);

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065B24);

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065C14);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065D04);

INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065DC8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00080CD4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00080CD4(void) {
    func_00068F38();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06598C", func_00065E88);

void func_00065F48(void) {
    func_00068F38();
}

void func_00065F64(void) {
    func_00068FD4();
}
#endif
