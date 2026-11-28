/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_000ED8E8(struct Unk_func_000ED8E8_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000ED8F8);

void func_000ED938(struct Unk_func_000ED938_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000ED948);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_0008A1C8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_00093294);

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_0009337C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000ED1EC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_00091CB4);

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_00091DA4);
#endif

#if FW_VERSION == 282
void func_000ED988(struct Unk_func_000ED988_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000ED998);

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDA80);

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDB70);
#endif

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDC60);

INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDD24);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000ED460);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDBD8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_00095320);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_00095320(void) {
    func_000F0E94();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0ED8E8", func_000EDDE4);

void func_000EDEA4(void) {
    func_000F0E94();
}

void func_000EDEC0(void) {
    func_000F0F30();
}
#endif
