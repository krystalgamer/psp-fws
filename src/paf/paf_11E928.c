#include "common.h"
#include "paf_decls.h"

void func_0011E928(M2C_UNK **arg0) {
    *arg0 = &D_0019D390;
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DA28);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D2A8_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_93538664);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D6F0);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D7A8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D854);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D8E8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D994);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D9B4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011D9D4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DA54);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DAE0);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DB48);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DB84);

INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_2F3C4ED2);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C516C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5184);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C52C8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C535C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C53D8);
#endif

#if FW_VERSION == 100
void func_000C53D8(void *arg0, s32 arg1) {
    s32 temp_a0;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0xD;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC) + 3;
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (((arg1 + (1 << temp_a0)) - 1) & (-1 << temp_a0));
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((arg1 + 0xF) & ~0xF);
        M2C_FIELD(arg0, s32 *, 0x64) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = 6;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011DEA4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C543C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_952CE8AF);
#endif

#if FW_VERSION == 100
s32 scePaf_952CE8AF(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 var_s2;

    var_s2 = arg1;
    temp_s0 = (((s32) ((arg0 << func_000C6134(arg2)) + 7) >> 3) + 0xF) & ~0xF;
    if (arg3 == 2) {
        var_s2 = (var_s2 + 7) & ~7;
    }
    return temp_s0 * var_s2;
}

void func_000C5508(void) {
    sceKernelDcacheWritebackAll();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5524);
#endif

#if FW_VERSION == 100
s32 func_000C5524(void *arg0) {
    return (((s32) ((M2C_FIELD(arg0, s32 *, 0x18) << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3) + 0x1F) & ~0x1F;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5548);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C55CC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011E2C8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011E5A4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5890);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5BE4);
#endif

#if FW_VERSION == 100
s32 func_000C5BE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40) * (3 - M2C_FIELD(arg0, s32 *, 0x20));
}
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D14);
#endif

#if FW_VERSION == 100
void func_000C5D14(void) {
    func_000C5C00(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D34);
#endif

#if FW_VERSION == 100
void func_000C5D34(void) {
    func_000C5C00(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5D54);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5DA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5DFC);
#endif

#if FW_VERSION == 100
void func_000C5DFC(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x18));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5E18);
#endif

#if FW_VERSION == 100
void func_000C5E18(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x18));
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011FECC);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5EC0);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C6034);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C6134);

s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_000C61B4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_11E928", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccStrlenUTF8);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccIsValidUCS4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011ECD4);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011A060);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011ED00);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C6F80);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccUTF8toUTF16);

INCLUDE_ASM("nonmatchings/paf_11E928", sceCccUTF16toUTF8);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011F118);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_11E928", func_000CA77C);

INCLUDE_ASM("nonmatchings/paf_11E928", func_000C5508);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011E950);

INCLUDE_ASM("nonmatchings/paf_11E928", scePaf_93538664);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011ED98);

INCLUDE_ASM("nonmatchings/paf_11E928", func_0011EE50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_11E928", func_000CAD6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_11E928", func_0011EEFC);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
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
#endif

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
