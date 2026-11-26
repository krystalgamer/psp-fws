#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7144);
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

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A719C);
#else
s32 func_000A719C(struct Unk_func_000A7144_1 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000AFF14);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A71C8);
#else
s32 func_000A71C8(struct Unk_func_000A71C8_0 *arg0) {
    return (arg0->unk0 << 0x18) + (arg0->unk1 << 0x10) + (arg0->unk2 << 8) + arg0->unk3;
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B0008);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B005C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B00F0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B01BC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B02D8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B06EC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B08C0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B0B3C);
#else
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
#endif

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7B88);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_0019385C);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B0DE8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B0FC0);
#else
INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193894);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7D18);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A7E94);
#endif

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193A00);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B1468);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B1700);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B19B0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B1D08);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B1F58);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B21C4);
#else
INCLUDE_RODATA("nonmatchings/paf_0A7144", D_00193A38);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A82A4);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A84E8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A873C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A89FC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8BF0);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8DDC);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A8F3C);
#endif

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A9040);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B2504);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B2674);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B2A98);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B2CC4);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B2F14);
#else
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A9144);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A946C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A95FC);
#endif

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000A97F4);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B3204);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B3624);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B3AE8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B3DA8);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B4198);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_0019F270);

INCLUDE_RODATA("nonmatchings/paf_0A7144", D_0019F28C);

INCLUDE_ASM("nonmatchings/paf_0A7144", func_000B45A4);
#endif
