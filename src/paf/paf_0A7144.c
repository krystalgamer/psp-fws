#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7144);
#endif

#if FW_VERSION == 260
s32 func_000A7144(s32 arg0, struct Unk_func_000A7144_1 *arg1) {
    s32 temp_v0;

    temp_v0 = func_000A719C(arg1);
    if (temp_v0 >= 0) {

    } else {
        scePaf_7894B61F(arg0, (s32) "PNG unsigned integer out of range.\n");
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 282
s32 func_000A7144(s32 arg0, struct Unk_func_000A7144_1 *arg1) {
    s32 temp_v0;

    temp_v0 = func_000A719C(arg1);
    if (temp_v0 >= 0) {

    } else {
        scePaf_7894B61F(arg0, (s32) "PNG unsigned integer out of range.");
    }
    return temp_v0;
}
#endif

s32 func_000A719C(struct Unk_func_000A7144_1 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}

s32 func_000A71C8(struct Unk_func_000A71C8_0 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}

s32 func_000A71F4(struct Unk_func_000A71F4_0 *arg0) {
    return (arg0->unk1 + (arg0->unk0 << 8)) & 0xFFFF;
}

void func_000A720C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000A0900();
    func_0009CFC4(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7258);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7344);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A73D0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A776C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A78FC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7B04);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7B88);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_0019385C);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193894);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7D18);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7E94);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193A00);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193A38);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A82A4);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A84E8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A873C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A89FC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8BF0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8DDC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8F3C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A9040);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A9144);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A946C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A95FC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A97F4);
