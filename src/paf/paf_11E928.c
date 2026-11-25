#include "common.h"
#include "paf_decls.h"

void func_0011E928(M2C_UNK **arg0) {
    *arg0 = &D_0019D390;
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C516C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5184);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C52C8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C535C);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C53D8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C543C);

INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_952CE8AF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5508);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5524);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5548);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C55CC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5890);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5B34);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5BE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000CA158);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5C00);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_11E928", D_001956D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_11E928", D_0011F2D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_11E928", D_00131924);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_11E928", D_0019D3A4);

INCLUDE_RODATA("nonmatchings/paf_11E928", D_00131948);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D14);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D34);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D54);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5DA8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5DFC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5E18);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FECC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5EC0);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C6034);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C6134);

s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C61B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_11E928", func_000CA77C);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5508);
#endif

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011E950);

INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_93538664);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011ED98);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011EE50);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000CAD6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011EEFC);
#endif

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011EF90);

void func_0011F03C(void) {
    func_0011EF90(1, 0xFFFF);
}

void func_0011F05C(void) {
    func_0011EF90(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F07C);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F0FC);

void ***func_0011F188(void ***arg0, struct Unk_func_0011F188_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_0011F188_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F1F0);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F22C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_2F3C4ED2);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F29C);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F3DC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F470);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F4EC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F54C);

INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_952CE8AF);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F614);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F634);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F6A4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F970);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FC4C);

s32 func_0011FCF0(struct Unk_func_0011FCF0_0 *arg0) {
    return arg0->unk38 * (3 - arg0->unk1C);
}

void func_0011FD0C(void) {
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FD14);

void func_0011FD94(void) {
    func_0011FD14(1, 0xFFFF);
}

void func_0011FDB4(void) {
    func_0011FD14(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FDD4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FE34);

void func_0011FE94(struct Unk_func_0011FE94_0 *arg0) {
    sceKernelDeleteSema(arg0->unk24);
}

void func_0011FEB0(struct Unk_func_0011FEB0_0 *arg0) {
    sceKernelDeleteSema(arg0->unk24);
}

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FECC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FF68);

INCLUDE_ASM("nonmatchings/paf_11E928", func_001200E8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_001202CC);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

s32 func_0012037C(u32 arg0) {
    s32 cmp_tmp = arg0 > 0xFFFFU;
    return cmp_tmp == 0;
}
#endif
