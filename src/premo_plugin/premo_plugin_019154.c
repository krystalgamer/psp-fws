#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019154);
#else
void func_00019154(M2C_UNK **arg0) {
    *arg0 = &D_0002AFA0;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_0001917C(void) {
    return 0;
}

s32 func_00019184(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001918C);

void func_0001924C(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001925C);
#else
void func_0001925C(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_00019284(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

void func_000192A4(struct Unk_func_000192A4_0 *arg0) {
    arg0->unk30 = 1;
}

void func_000192B0(struct Unk_func_000192B0_0 *arg0) {
    arg0->unk30 = 0;
}

void func_000192B8(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000192C8);
#else
void func_000192C8(M2C_UNK **arg0) {
    *arg0 = &D_0002B000;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000192F0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001940C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019528);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000195BC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019650);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000196EC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019A64);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002ACF0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AD10);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AD80);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002ADB0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002ADE0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AE28);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AE78);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AE90);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AED8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AEF8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AF28);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AF40);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002AFA0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B000);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B010);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019B3C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019C08);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019D58);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019E3C);

s32 func_00019ED4(struct Unk_func_00019ED4_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk30, 0x38U, &sp0);
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00019EFC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A018);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A0CC);

#if FW_VERSION < 352
s32 func_0001A23C(struct Unk_func_0001A23C_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    return 0;
}
#else
s32 func_0001A23C(struct Unk_func_0001A23C_0 *arg0, s32 arg1) {
    arg0->unk84 = arg1;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A248);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A274);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A298);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A42C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A8D8);

#if FW_VERSION < 352
s32 func_0001AA34(struct Unk_func_0001AA34_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    func_00020F88(M2C_FIELD(arg0, s32 *, 0xB0), (s32) &arg0->pad0[0x8C]);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    }
    temp_a0_2 = arg0->unkA4;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unkA4 = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xA0);
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0xBC);
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    }
    temp_a0_5 = arg0->unkB4;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unkB4 = 0;
    }
    return 0;
}
#else
s32 func_0001AA34(struct Unk_func_0001AA34_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    func_00020F88(arg0->unkB4, (u8 *)arg0 + 0x90);
    temp_a0 = arg0->unkC8;
    if (temp_a0 != 0) {
        scePaf_CCFF20ED(temp_a0);
        arg0->unkC8 = 0;
    }
    temp_a0_2 = arg0->unkA8;
    if (temp_a0_2 != 0) {
        scePaf_CCFF20ED(temp_a0_2);
        arg0->unkA8 = 0;
    }
    temp_a0_3 = arg0->unkA4;
    if (temp_a0_3 != 0) {
        scePaf_CCFF20ED(temp_a0_3);
        arg0->unkA4 = 0;
    }
    temp_a0_4 = arg0->unkC0;
    if (temp_a0_4 != 0) {
        scePaf_CCFF20ED(temp_a0_4);
        arg0->unkC0 = 0;
    }
    temp_a0_5 = arg0->unkB8;
    if (temp_a0_5 != 0) {
        scePaf_CCFF20ED(temp_a0_5);
        arg0->unkB8 = 0;
    }
    return 0;
}
#endif

void func_0001AAF0(struct Unk_func_0001AAF0_0 *arg0) {
    func_0001A0CC(arg0->unk4);
}

void func_0001AB0C(struct Unk_func_0001AB0C_0 *arg0, s32 arg1) {
    func_0001A23C(arg0->unk4, arg1);
}

void func_0001AB28(s32 arg0) {
    func_000195BC(arg0 - 0x38);
}

void func_0001AB44(s32 arg0) {
    func_00019650(arg0 - 0x38);
}

void func_0001AB60(s32 arg0) {
    func_0001A298(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AB7C);

s32 func_0001AC44(struct Unk_func_0001AC44_0 *arg0) {
    return arg0->unk20;
}

s32 func_0001AC4C(struct Unk_func_0001AC4C_0 *arg0) {
    return arg0->unk4;
}

s32 func_0001AC54(struct Unk_func_0001AC54_0 *arg0) {
    return arg0->unk8;
}

s32 func_0001AC5C(struct Unk_func_0001AC5C_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

s32 func_0001AC68(struct Unk_func_0001AC68_0 *arg0) {
    return arg0->unkC;
}

s32 func_0001AC70(struct Unk_func_0001AC70_0 *arg0) {
    return arg0->unk10;
}

s32 func_0001AC78(struct Unk_func_0001AC78_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    return 0;
}

void func_0001AC84(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AC94);
#else
void func_0001AC94(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_0001ACBC(void) {
    return 0x80004001;
}

s32 func_0001ACC8(void) {
    return 0;
}

s32 func_0001ACD0(void) {
    return 0;
}

#if FW_VERSION < 352
s32 func_0001ACD8(struct Unk_func_0001ACD8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}
#else
s32 func_0001ACD8(struct Unk_func_0001ACD8_0 *arg0) {
    return arg0->unk80;
}
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B058);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B078);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B0E8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001ACE0);

void func_0001AD50(struct Unk_func_0001AD50_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk34;
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
        arg0->unk34 = 0;
    }
    temp_v0_2 = arg0->unk30;
    if (temp_v0_2 != 0) {
        sceKernelDeleteEventFlag(temp_v0_2);
        arg0->unk30 = 0;
    }
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001ADA4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AE44);

void func_0001AEB8(M2C_UNK **arg0) {
    *arg0 = &D_0002B158;
}

void func_0001AEC8(struct Unk_func_0001AEC8_0 *arg0) {
    arg0->unk0 = &D_0002B158;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AEDC);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AEF0);
#else
void func_0001AEF0(struct Unk_func_0001AEF0_0 *arg0) {
    arg0->unk0 = &D_0002B158;
    arg0->unk4 = 0;
    scePaf_6261C0A5((s32) arg0);
}
#endif

#if FW_VERSION < 352
s32 func_0001AF1C(struct Unk_func_0001AF1C_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk4 = arg1;
    arg0->unk8 = 0;
    temp_v0 = scePaf_F13EBB78(arg1 * 4);
    arg0->unkC = temp_v0;
    return (temp_v0 != 0) ? 0 : 0x8007000E;
}
#else
s32 func_0001AF1C(struct Unk_func_0001AF1C_0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk4 = arg1;
    arg0->unk8 = 0;
    temp_v0 = scePaf_4E8B4F27(arg1 * 4);
    arg0->unkC = temp_v0;
    return (temp_v0 != 0) ? 0 : 0x8007000E;
}
#endif

#if FW_VERSION < 352
s32 func_0001AF60(struct Unk_func_0001AF60_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {

    } else {
        scePaf_B3D2C3BB(temp_v0);
    }
    return 0;
}
#else
s32 func_0001AF60(struct Unk_func_0001AF60_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {

    } else {
        scePaf_CCFF20ED(temp_v0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001AF94);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B004);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B010);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B164);

s32 func_0001B1B0(struct Unk_func_0001B1B0_0 *arg0, s32 arg1) {
    arg0->unk14 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B1BC);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B158);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B1C4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B284);

#if FW_VERSION == 352
void func_0001B324(struct Unk_func_0001B324_0 *arg0, s32 arg1) {
    if (arg1 == 0) {
        arg0->unk10 = (s32) arg0->unk14;
    } else {
        arg0->unk10 = arg1;
    }
    sceKernelChangeThreadPriority(arg0->unkC, arg0->unk10);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B358);

void func_0001B38C(struct Unk_func_0001B38C_0 *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v0 = arg0;
    var_v1 = 2;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 8;
    } while (var_v1 >= 0);
    arg0->unk18 = 0;
}

void func_0001B3B0(struct Unk_func_0001B3B0_0 *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v0 = arg0;
    var_v1 = 2;
    do {
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 8;
    } while (var_v1 >= 0);
    arg0->unk18 = 0;
}

void func_0001B3D4(void) {
}

void func_0001B3DC(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B3E4);

s32 func_0001B428(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B430);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B714);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B844);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B8E0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B97C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BA20);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BC68);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B17C);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B188);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BD24);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BDF0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BEC0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001BF48);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C01C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C0E8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C10C);

#if FW_VERSION < 352
s32 func_0001C130(struct Unk_func_0001C130_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}
#else
s32 func_0001C130(struct Unk_func_0001C130_0 *arg0) {
    return arg0->unk5C;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C138);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C198);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C1D0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C2A8);

void func_0001C368(void) {
    func_0001C3A0();
}

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C384);
#endif

#if FW_VERSION == 352
void func_0001C384(void) {
    sceVshBridge_82314DEE();
}
#endif

#if FW_VERSION < 330
void func_0001C384(void) {
    sceVshBridge_07EC5661();
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C3A0);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C3D4);
#endif

#if FW_VERSION < 330
void func_0001C3D4(struct Unk_func_0001C3D4_0 *arg0) {
    sceVshBridge_3B3D9F5D(M2C_FIELD(arg0, s32 *, 0x8C));
}
#endif

#if FW_VERSION == 352
void func_0001C3D4(struct Unk_func_0001C3D4_0 *arg0) {
    sceVshBridge_4CA1F6DA(arg0->unk90);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C3F0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C448);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C4A0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001C4F8);

#if FW_VERSION < 352
s32 func_0001CAEC(struct Unk_func_0001CAEC_0 *arg0) {
    return M2C_FIELD(arg0->unk4, s32 *, 0x90);
}
#else
s32 func_0001CAEC(struct Unk_func_0001CAEC_0 *arg0) {
    return arg0->unk4->unk94;
}
#endif

s32 func_0001CAF8(struct Unk_func_0001CAF8_0 *arg0) {
    func_0001C138(arg0->unk4);
    return 0;
}

void func_0001CB18(s32 arg0) {
    func_0001B8E0(arg0 - 0x38);
}

void func_0001CB34(s32 arg0) {
    func_0001B97C(arg0 - 0x38);
}

void func_0001CB50(s32 arg0) {
    func_0001C4F8(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CB6C);

s32 func_0001CC34(struct Unk_func_0001CC34_0 *arg0) {
    return arg0->unk18;
}

s32 func_0001CC3C(struct Unk_func_0001CC3C_0 *arg0) {
    return arg0->unk4;
}

s32 func_0001CC44(struct Unk_func_0001CC44_0 *arg0) {
    return arg0->unk8;
}

s32 func_0001CC4C(struct Unk_func_0001CC4C_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

s32 func_0001CC58(struct Unk_func_0001CC58_0 *arg0) {
    return arg0->unkC;
}

s32 func_0001CC60(struct Unk_func_0001CC60_0 *arg0) {
    return arg0->unk10;
}

s32 func_0001CC68(struct Unk_func_0001CC68_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    return 0;
}

void func_0001CC74(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CC84);
#else
void func_0001CC84(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_0001CCAC(struct Unk_func_0001CCAC_0 *arg0) {
    return arg0->unk4;
}

s32 func_0001CCB4(struct Unk_func_0001CCB4_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CCBC);

s32 func_0001CCC8(struct Unk_func_0001CCC8_0 *arg0) {
    return arg0->unk18;
}

s32 func_0001CCD0(struct Unk_func_0001CCD0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    return 0;
}

s32 func_0001CCDC(struct Unk_func_0001CCDC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CCE8);

s32 func_0001CCF8(struct Unk_func_0001CCF8_0 *arg0, s32 arg1) {
    arg0->unk18 = arg1;
    return 0;
}

void func_0001CD04(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CD14);
#else
void func_0001CD14(M2C_UNK **arg0) {
    *arg0 = &D_0002AED8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_0001CD3C(void) {
    return 0x80004001;
}

s32 func_0001CD48(void) {
    return 0x80004001;
}

s32 func_0001CD54(void) {
    return 0;
}

s32 func_0001CD5C(void) {
    return 0;
}

s32 func_0001CD64(void) {
    return 0;
}

s32 func_0001CD6C(void) {
    return 0;
}

s32 func_0001CD74(void) {
    return 0;
}

#if FW_VERSION < 352
s32 func_0001CD7C(struct Unk_func_0001CD7C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}
#else
s32 func_0001CD7C(struct Unk_func_0001CD7C_0 *arg0) {
    return arg0->unk70;
}
#endif

void func_0001CD84(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CD94);
#else
void func_0001CD94(M2C_UNK **arg0) {
    *arg0 = &D_0002B4C8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CDBC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CE28);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CE94);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CED4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CF14);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001CF5C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D1D0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D320);

s32 func_0001D4C4(void) {
    return 0x80004001;
}

s32 func_0001D4D0(struct Unk_func_0001D4D0_0 *arg0) {
    return arg0->unk38;
}

s32 func_0001D4D8(void) {
    return 0x80004001;
}

s32 func_0001D4E4(void) {
    return 0x80004001;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D4F0);

s32 func_0001D52C(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

void func_0001D54C(struct Unk_func_0001D54C_0 *arg0) {
    arg0->unk30 = 1;
}

void func_0001D558(struct Unk_func_0001D558_0 *arg0) {
    arg0->unk30 = 0;
}

s32 func_0001D560(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D568);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D640);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D718);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D774);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D7D0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D834);

s32 func_0001D908(struct Unk_func_0001D908_0 *arg0) {
    struct Unk_vt_func_0001D908_temp_a0 **temp_a0;

    arg0->unk2C = 0;
    temp_a0 = arg0->unk38->unkC;
    (*temp_a0)->unkC(temp_a0);
    return 0;
}

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B1C8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B3D0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B3F0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B468);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B498);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B4C8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B4F8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B550);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D93C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001D9D4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DA9C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DB50);

void *func_0001DC44(struct Unk_func_0001DC44_0 *arg0) {
    void **temp_a0;
    void *temp_v0;
    void *var_v1;

    temp_a0 = arg0->unk38;
    temp_v0 = M2C_FIELD(*temp_a0, void *(**)(void **), 0x1C)(temp_a0);
    var_v1 = NULL;
    if (temp_v0 != NULL) {
        var_v1 = func_00026CAC(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DC88);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DEF4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DF18);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001DF3C);

s32 func_0001E0A8(struct Unk_func_0001E0A8_0 *arg0) {
    return arg0->unk18;
}

s32 func_0001E0B0(struct Unk_func_0001E0B0_0 *arg0) {
    return arg0->unk4;
}

s32 func_0001E0B8(struct Unk_func_0001E0B8_0 *arg0) {
    return arg0->unk8;
}

s32 func_0001E0C0(struct Unk_func_0001E0C0_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

s32 func_0001E0CC(struct Unk_func_0001E0CC_0 *arg0) {
    return arg0->unkC;
}

s32 func_0001E0D4(struct Unk_func_0001E0D4_0 *arg0) {
    return arg0->unk10;
}

s32 func_0001E0DC(struct Unk_func_0001E0DC_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    return 0;
}

s32 func_0001E0E8(void) {
    return 0x80004001;
}

s32 func_0001E0F4(void) {
    return 0x80004001;
}

s32 func_0001E100(void) {
    return 0x80004001;
}

s32 func_0001E10C(void) {
    return 0;
}

s32 func_0001E114(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E11C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E214);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E30C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E3C4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E47C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E53C);

s32 func_0001E59C(struct Unk_func_0001AD50_0 *arg0) {
    func_0001AD50(arg0);
    return 0;
}

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E5BC);
#endif

#if FW_VERSION < 330
s32 func_0001E5BC(struct Unk_func_0001E5BC_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x58) = arg2;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_0001E5BC(struct Unk_func_0001E5BC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkB8 = arg1;
    arg0->unk5C = arg2;
    return 0;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00016D40);
#endif

#if FW_VERSION < 330
s32 func_00016D40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = arg1;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E5CC);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B5F0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B650);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B678);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E60C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E788);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E81C);
#endif

#if FW_VERSION < 330
s32 func_0001E81C(struct Unk_func_0001E81C_0 *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 0x70), 0x33);
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0xB0), 1, 0);
    func_0001B284(arg0->pad64);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xB0), 1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_0001E81C(struct Unk_func_0001E81C_0 *arg0) {
    s32 temp_v1;

    arg0->unk60 = 0;
    sceKernelChangeThreadPriority(arg0->unk74, 0x33);
    sceKernelWaitSema(arg0->unkBC, 1, 0);
    func_0001B284((u8 *)arg0 + 0x68);
    sceKernelSignalSema(arg0->unkBC, 1);
    temp_v1 = arg0->unkBC;
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    arg0->unkBC = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E88C);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E918);
#else
s32 func_0001E918(struct Unk_func_0001E918_0 *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (arg0->unkB4 != 1) {
        sceKernelSetEventFlag(arg0->unk30, 0x10);
        var_a0 = func_0001AE44(arg0, 0x4C4B40);
    }
    return var_a0;
}
#endif

s32 func_0001E96C(struct Unk_func_0001E96C_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk30, 0x38U, &sp0);
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001E994);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001EAD4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001EB74);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001EB98);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001729C);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00018550);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001751C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001EBC4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001EE9C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F0CC);

#if FW_VERSION < 352
void func_0001F338(s32 arg0) {
    func_0001E3C4(arg0 - 0x7C);
}
#else
void func_0001F338(s32 arg0) {
    func_0001E3C4(arg0 - 0x84);
}
#endif

#if FW_VERSION < 352
void func_0001F354(s32 arg0) {
    func_0001E3C4(arg0 - 0x64);
}
#else
void func_0001F354(s32 arg0) {
    func_0001E3C4(arg0 - 0x68);
}
#endif

void func_0001F370(s32 arg0) {
    func_0001E3C4(arg0 - 0x38);
}

#if FW_VERSION < 352
void func_0001F38C(s32 arg0) {
    func_0001E47C(arg0 - 0x7C);
}
#else
void func_0001F38C(s32 arg0) {
    func_0001E47C(arg0 - 0x84);
}
#endif

#if FW_VERSION < 352
void func_0001F3A8(s32 arg0) {
    func_0001E47C(arg0 - 0x64);
}
#else
void func_0001F3A8(s32 arg0) {
    func_0001E47C(arg0 - 0x68);
}
#endif

void func_0001F3C4(s32 arg0) {
    func_0001E47C(arg0 - 0x38);
}

void func_0001F3E0(s32 arg0) {
    func_0001E5CC(arg0 - 0x38);
}

void func_0001F3FC(s32 arg0) {
    func_0001E994(arg0 - 0x38);
}

void func_0001F418(s32 arg0) {
    func_0001EAD4(arg0 - 0x38);
}

#if FW_VERSION < 352
void func_0001F434(s32 arg0) {
    func_0001729C(arg0 - 0x64);
}
#else
void func_0001F434(s32 arg0) {
    func_0001EBC4(arg0 - 0x68);
}
#endif

void func_0001F450(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F460);
#else
void func_0001F460(M2C_UNK **arg0) {
    *arg0 = &D_0002AE28;
    scePaf_6261C0A5((s32) arg0);
}
#endif

void func_0001F488(M2C_UNK **arg0) {
    *arg0 = &D_0002B7F0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F498);
#else
void func_0001F498(M2C_UNK **arg0) {
    *arg0 = &D_0002B7F0;
    scePaf_6261C0A5((s32) arg0);
}
#endif

s32 func_0001F4C0(void) {
    return 0;
}

s32 func_0001F4C8(void) {
    return 0;
}

void func_0001F4D0(struct Unk_vt_func_0001F4D0_arg0 **arg0) {
    (*arg0)->unk54();
}

void func_0001F4F4(struct Unk_vt_func_0001F4F4_arg0 **arg0) {
    (*arg0)->unk58();
}

s32 func_0001F518(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F520);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F640);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F760);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F834);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F908);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001F9E4);

s32 func_0001FA70(struct Unk_func_0001AD50_0 *arg0) {
    func_0001AD50(arg0);
    return 0;
}

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00018118);
#endif

#if FW_VERSION < 330
s32 func_00018118(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x58) = arg2;
    return 0;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FA90);
#endif

#if FW_VERSION < 330
s32 func_0001FA90(struct Unk_func_0001FA90_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkB8 = arg1;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_0001FA90(struct Unk_func_0001FA90_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkB8 = arg1;
    arg0->unk5C = arg2;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FAA0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B704);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B740);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B7F0);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00024BE0);
#else
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B800);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B858);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FAE0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FC10);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FCA4);
#endif

#if FW_VERSION < 330
s32 func_0001FCA4(struct Unk_func_0001FCA4_0 *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 0x70), 0x33);
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0xF8), 1, 0);
    func_0001B284(arg0->pad64);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xF8), 1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xF8);
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_0001FCA4(struct Unk_func_0001FCA4_0 *arg0) {
    s32 temp_v1;

    arg0->unk60 = 0;
    sceKernelChangeThreadPriority(arg0->unk74, 0x33);
    sceKernelWaitSema(arg0->unk104, 1, 0);
    func_0001B284((u8 *)arg0 + 0x68);
    sceKernelSignalSema(arg0->unk104, 1);
    temp_v1 = arg0->unk104;
    if (temp_v1 > 0) {
        sceKernelDeleteSema(temp_v1);
    }
    arg0->unk104 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FD14);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FDA0);
#else
s32 func_0001FDA0(struct Unk_func_0001FDA0_0 *arg0) {
    s32 var_a0;

    arg0->unkBC = 0;
    var_a0 = 0;
    if (arg0->unkB4 != 1) {
        sceKernelSetEventFlag(arg0->unk30, 0x10);
        var_a0 = func_0001AE44(arg0, 0x4C4B40);
    }
    return var_a0;
}
#endif

s32 func_0001FDF8(struct Unk_func_0001FDF8_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk30, 0x38U, &sp0);
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FE20);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FF30);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001FFD0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020020);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020044);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000186CC);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020070);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002034C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002061C);

#if FW_VERSION < 352
void func_00020994(s32 arg0) {
    func_0001F834(arg0 - 0x7C);
}
#else
void func_00020994(s32 arg0) {
    func_0001F834(arg0 - 0x84);
}
#endif

#if FW_VERSION < 352
void func_000209B0(s32 arg0) {
    func_0001F834(arg0 - 0x64);
}
#else
void func_000209B0(s32 arg0) {
    func_0001F834(arg0 - 0x68);
}
#endif

void func_000209CC(s32 arg0) {
    func_0001F834(arg0 - 0x38);
}

#if FW_VERSION < 352
void func_000209E8(s32 arg0) {
    func_0001F908(arg0 - 0x7C);
}
#else
void func_000209E8(s32 arg0) {
    func_0001F908(arg0 - 0x84);
}
#endif

#if FW_VERSION < 352
void func_00020A04(s32 arg0) {
    func_0001F908(arg0 - 0x64);
}
#else
void func_00020A04(s32 arg0) {
    func_0001F908(arg0 - 0x68);
}
#endif

void func_00020A20(s32 arg0) {
    func_0001F908(arg0 - 0x38);
}

void func_00020A3C(s32 arg0) {
    func_0001FAA0(arg0 - 0x38);
}

void func_00020A58(s32 arg0) {
    func_0001FE20(arg0 - 0x38);
}

void func_00020A74(s32 arg0) {
    func_0001FF30(arg0 - 0x38);
}

#if FW_VERSION < 352
void func_00020A90(s32 arg0) {
    func_000186CC(arg0 - 0x64);
}
#else
void func_00020A90(s32 arg0) {
    func_00020070(arg0 - 0x68);
}
#endif

s32 func_00020AAC(void) {
    return 0;
}

s32 func_00020AB4(void) {
    return 0;
}

void func_00020ABC(struct Unk_vt_func_00020ABC_arg0 **arg0) {
    (*arg0)->unk54();
}

void func_00020AE0(struct Unk_vt_func_00020AE0_arg0 **arg0) {
    (*arg0)->unk58();
}

#if FW_VERSION < 352
void func_00019118(s32 arg0) {
    sceMlnBridge_F9357984(arg0, 0);
}

void func_00019134(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceMlnBridge_DE730A46(arg0, arg1, arg2, arg3);
}

void func_00019150(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceMlnBridge_7770FC23(arg0, arg1, arg2, arg3);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020B04);

s32 func_00020BFC(void) {
    return 0x1C;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020C04);
#else
s8 func_00020C04(struct Unk_func_00020C04_0 *arg0) {
    s8 var_v1;

    var_v1 = 0;
    if (scePaf_9C0245AF(arg0, (s32) &D_0002C854, 3) == 0) {
        var_v1 = arg0->unk3;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020C44);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B8F0);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00024DA8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00024DB8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00024DC8);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B998);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B9C4);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002B9E8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BA00);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BA2C);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BA54);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020CDC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020F20);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020F88);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00020FF8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021098);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021110);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002122C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000212B0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021478);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000214D8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021600);

void func_00021724(struct Unk_func_00021724_0 *arg0) {
    arg0->unk24 = 0;
}

void func_0002172C(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021734);

s32 func_000217B8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000217C0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021850);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021894);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000218CC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021904);

void func_00021934(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002193C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021970);

void func_000219A4(void) {
}

void func_000219AC(void) {
}

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BB78);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000219B4);

void func_00021B08(struct Unk_func_00021B08_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;

    temp_a0 = arg0->unk18;
    if (temp_a0 > 0) {
        sceKernelDeleteEventFlag(temp_a0);
    }
    temp_a0_2 = arg0->unk14;
    arg0->unk18 = 0;
    if (temp_a0_2 > 0) {
        sceKernelDeleteEventFlag(temp_a0_2);
    }
    temp_a0_3 = arg0->unk10;
    arg0->unk14 = 0;
    if (temp_a0_3 > 0) {
        sceKernelDeleteSema(temp_a0_3);
    }
    temp_a0_4 = arg0->unkC;
    arg0->unk10 = 0;
    if (temp_a0_4 > 0) {
        sceKernelDeleteSema(temp_a0_4);
    }
    temp_a0_5 = arg0->unk8;
    arg0->unkC = 0;
    if (temp_a0_5 > 0) {
        sceKernelDeleteSema(temp_a0_5);
    }
    temp_a0_6 = arg0->unk4;
    arg0->unk8 = 0;
    if (temp_a0_6 > 0) {
        sceKernelDeleteSema(temp_a0_6);
    }
    temp_a0_7 = arg0->unk0;
    arg0->unk4 = 0;
    if (temp_a0_7 > 0) {
        sceKernelDeleteSema(temp_a0_7);
    }
    arg0->unk0 = 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021BB8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021CF0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021E28);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021EB8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00021F9C);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B874);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001A818);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000221B0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022244);
#else
s32 func_00022244(void) {
    return 0x80108C1A;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022250);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000222F4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022418);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000224FC);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002259C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002263C);

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000226E4);
#endif

#if FW_VERSION < 330
s32 func_000226E4(struct Unk_func_000226E4_0 *arg0, s32 arg1, s32 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x58) = arg2;
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_000226E4(struct Unk_func_000226E4_0 *arg0, s32 arg1, s32 arg2, s8 arg3) {
    arg0->unkFC = arg1;
    arg0->unk5C = arg2;
    arg0->unkF0 = arg3;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000226F8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BDD8);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BDF4);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022780);

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00023EB0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00023EB4);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_00023EBC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEA0);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEA4);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEAC);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEB8);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEC8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022B24);

INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BEF0);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022C50);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022E5C);
#else
s32 func_00022E5C(struct Unk_func_00022E5C_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0001B1C4((u8 *)arg0 + 0x68, arg1, 0x2C00, (s32) &D_0002BDD8);
    var_v1 = 0;
    if (temp_v0 != 0) {
        arg0->unk28 = temp_v0;
        var_v1 = 0x80108C10;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 352
s32 func_00022EA8(s32 arg0) {
    func_0001B284(arg0 + 0x64);
    return 0;
}
#else
s32 func_00022EA8(s32 arg0) {
    func_0001B284(arg0 + 0x68);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00022EC8);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000230C0);

#if FW_VERSION < 352
s32 func_00023230(struct Unk_func_00023230_0 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        scePaf_F95EA3F1((s32) &arg0->pad0[0xCC], (u8 *) arg2, 0xC);
        arg0->pad0[0xD8] = (u8) arg1;
    }
    return 0;
}
#else
s32 func_00023230(struct Unk_func_00023230_0 *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        scePaf_3308156F((u8 *)arg0 + 0xD8, arg2, 0x10);
        arg0->unkE8 = (s8) arg1;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00023284);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002334C);

s32 func_0002336C(void) {
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0001B77C);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00023374);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_000233B8);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_019154", D_0002BF2C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_0002346C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00023A8C);

INCLUDE_ASM("nonmatchings/premo_plugin_019154", func_00023C7C);

#if FW_VERSION < 352
s32 func_00023E58(s32 arg0) {
    return arg0 + 0x88;
}
#else
s32 func_00023E58(s32 arg0) {
    return arg0 + 0x90;
}
#endif

#if FW_VERSION < 352
s32 func_00023E60(s32 arg0) {
    return arg0 + 0xA8;
}
#else
s32 func_00023E60(s32 arg0) {
    return arg0 + 0xB0;
}
#endif
