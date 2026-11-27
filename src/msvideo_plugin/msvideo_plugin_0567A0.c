/* lang: c++ */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000567A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000568F8);

void func_0005698C(struct Unk_func_0005698C_0 *arg0) {
    if (arg0 != NULL) {
        func_00056C30((u8 *)arg0 + 8);
        func_00056CA0((u8 *)arg0 + 0x4C);
        func_00056D10((u8 *)arg0 + 0x90);
        func_00056D70((u8 *)arg0 + 0xBC);
        func_00056DD0((u8 *)arg0 + 0xE8);
        func_00056E38((u8 *)arg0 + 0x124);
        func_00041C08(arg0->unk160);
        func_00041C08(arg0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000569F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056A4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056AA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056AEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056B34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056B84);

void func_00056BD4(void **arg0, void **arg1) {
    void *temp_s0;
    struct Unk_func_00056BD4_var_v0 *var_v0;

    var_v0 = *arg1;
    if (var_v0 != NULL) {
        do {
            temp_s0 = var_v0->unk1C;
            func_000515F4(arg0, arg1);
            *arg1 = temp_s0;
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
        *arg1 = NULL;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056C30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056CA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056D10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056D70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056DD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056E38);

s32 func_00056EA8(struct Unk_func_00056EA8_0 *arg0) {
    return arg0->unk38;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056EB0);

s32 func_00056F4C(struct Unk_func_00056F4C_0 *arg0, s32 arg1) {
    arg0->unk2C = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00056F58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057000);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057088);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000571F4);

s32 func_00057234(struct Unk_func_00057234_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk0 != 0) && (arg0->unk18 != 0)) {
        var_v1 = arg0->unk40;
    }
    return var_v1;
}

s32 func_00057254(struct Unk_func_00057254_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk0 != 0) && (arg0->unk18 != 0)) {
        var_v1 = arg0->unk38;
    }
    return var_v1;
}

s32 func_00057274(struct Unk_func_00057274_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk14 != 0) {
        var_v1 = arg0->unk24 == 0;
    }
    return var_v1;
}

s32 func_00057290(struct Unk_func_00057290_0 *arg0, s32 *arg1) {
    s32 var_v1;
    struct Unk_func_00057290_temp_a0 *temp_a0;

    var_v1 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk160;
        var_v1 = 7;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = temp_a0->unk20;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000572B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057388);

void func_000573D0(struct Unk_func_000573D0_0 *arg0, s32 arg1, s32 arg2) {
    func_00054CF0(arg0->unk18, arg0->unk20, arg1, 0, arg2);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057400);

s32 func_0005751C(struct Unk_func_0005751C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 8) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_00057540(struct Unk_func_00057540_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 0xC) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057570);

s32 func_000575B4(struct Unk_func_000575B4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 4) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_000575D8(struct Unk_func_000575D8_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 4) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_000575FC(struct Unk_func_000575FC_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = arg0->unk0;
    if (var_v1 != 0) {
        var_v1 = (arg0->unk10 * 8) + 0x10;
        arg0->unk0 = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057620);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057748);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000577E8);

s32 func_000578C4(struct Unk_func_000578C4_0 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    struct Unk_func_000578C4_temp_a0 *temp_a0;

    var_a3 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk160;
        var_a3 = 7;
        if (temp_a0 != NULL) {
            var_a3 = 0;
            *arg1 = temp_a0->unk0;
            *arg2 = temp_a0->unk4;
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000578F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057AD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057B50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00057F18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005804C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00058178);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000582C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000583F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000586C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005878C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00058848);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005891C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00058B10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00058F50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000590D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059120);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059170);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000591C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005926C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059318);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059364);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000593B0);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059400);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059450);

#if FW_VERSION < 201
void func_00050F1C(struct Unk_func_00050F1C_0 *arg0) {
    arg0->unk8 = 1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040A5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040AE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040B74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040C6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049058);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049100);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000594B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059540);

s32 func_000595A4(struct Unk_func_000595A4_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000595B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059650);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000596EC);

s32 func_000599E0(struct Unk_func_000599E0_0 *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = arg0->unk10;
    if (arg1 < (u32) ((u32) (temp_v1 + 1) >> 1)) {
        var_a0 = arg0->unk14;
        var_s0 = arg1 - 1;
        if (arg1 != 0) {
            do {
                var_s0 -= 1;
                var_a0 = func_00059C9C(var_a0);
            } while (var_s0 != -1);
        }
    } else {
        var_s0_2 = (temp_v1 - arg1) - 2;
        var_a0 = arg0->unk18;
        if (var_s0_2 != -1) {
            do {
                var_s0_2 -= 1;
                var_a0 = func_00059C8C(var_a0);
            } while (var_s0_2 != -1);
        }
    }
    return var_a0;
}

s32 func_00059A6C(struct Unk_func_00059A6C_0 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00059BB4(arg0->unk0 * arg0->unkC, &sp0);
    var_a1 = temp_v0;
    if (temp_v0 == 0) {
        if (arg0->unk10 == 0) {
            arg0->unk14 = sp0;
            arg0->unk18 = sp0;
        } else {
            func_00059CA4(arg0->unk18, (s32) sp0);
            func_00059C94(sp0, (s32) arg0->unk18);
            arg0->unk18 = sp0;
        }
        arg0->unk10 = (s32) (arg0->unk10 + 1);
        var_a1 = 0;
        arg0->unk8 = (s32) (arg0->unk8 + arg0->unkC);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059B08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059BB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059C40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059C8C);

void func_00059C94(struct Unk_func_00059C94_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059C9C);

void func_00059CA4(struct Unk_func_00059CA4_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
}

s32 func_00059CAC(struct Unk_func_00059CAC_0 *arg0, u32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0xC;
    if (arg1 < (u32) arg0->unk0) {
        var_v1 = 0;
        *arg2 = arg0->unk4 + arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059CD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059D28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059D7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059DF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059E48);

s32 func_00059E88(void *arg0) {
    func_00041C08(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059EA8);

s32 func_00059EE4(struct Unk_func_00059EE4_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    if (temp_a1 != -1) {
        arg0->unk0 = temp_a1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00059F00);

s32 func_00059F24(struct Unk_func_00059F24_0 *arg0) {
    return arg0->unk4 == 2;
}

s32 func_00059F34(s32 *arg0) {
    return *arg0 == 2;
}

s32 func_00059F44(s32 *arg0) {
    return *arg0 == 7;
}

void func_00059F54(struct Unk_func_00059F54_0 *arg0) {
    s32 temp_v0;

    arg0->unk0 = &D_000657F8;
    arg0->unk790 = -1;
    arg0->unk780 = 0;
    arg0->unk784 = 0;
    arg0->unk788 = 0;
    arg0->unk78C = 0;
    sce_paf_private_memset((u8 *)arg0 + 4, 0, 0x74);
    sce_paf_private_memset((u8 *)arg0 + 0x78, 0, 0x708);
    temp_v0 = _Znaj(0xD000);
    arg0->unk780 = temp_v0;
    arg0->unk784 = 0x400;
}

void func_00059FCC(struct Unk_func_00059FCC_0 *arg0) {
    s32 temp_v0;

    arg0->unk0 = &D_000657F8;
    arg0->unk790 = -1;
    arg0->unk780 = 0;
    arg0->unk784 = 0;
    arg0->unk788 = 0;
    arg0->unk78C = 0;
    sce_paf_private_memset((u8 *)arg0 + 4, 0, 0x74);
    sce_paf_private_memset((u8 *)arg0 + 0x78, 0, 0x708);
    temp_v0 = _Znaj(0xD000);
    arg0->unk780 = temp_v0;
    arg0->unk784 = 0x400;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A044);

void func_0005A084(struct Unk_func_0005A084_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk780;
    arg0->unk0 = &D_000657F8;
    if (temp_a1 == 0) {

    } else {
        _ZdaPv(temp_a1);
    }
}

void func_0005A0C4(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x780);
    M2C_FIELD(arg0, s32 **, 0) = &D_000657F8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
    }
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00065454);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_0006546C);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_0004918C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049194);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00065478);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000657B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000657D8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000491AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000491CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000491E8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000491F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049200);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_0004920C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_0004922C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049234);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049244);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049250);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_00049280);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040D1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040D6C);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A114);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A1D0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00040F20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0004105C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00044988);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00044A74);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000412E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000413A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000414B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000414F8);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A348);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A40C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A48C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A4D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A548);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_000415B4);

void func_00041618(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xAC0)) {
        temp_v0 = (arg1 << 5) + M2C_FIELD(arg0, s32 *, 0xAB8);
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) (((((arg2 * 0x3C) + arg3) * 0x3C) + arg4) * 0x15F90);
        M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x1C) | 2);
    }
}

void func_00041678(void *arg0, u32 arg1, s32 arg2) {
    void *temp_v1;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xAC0)) {
        temp_v1 = (arg1 << 5) + M2C_FIELD(arg0, s32 *, 0xAB8);
        M2C_FIELD(temp_v1, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_v1, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x1C) | 2);
    }
}

void func_000416AC(void *arg0, u32 arg1, s32 arg2) {
    void *temp_v1;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xAC0)) {
        temp_v1 = (arg1 << 5) + M2C_FIELD(arg0, s32 *, 0xAB8);
        M2C_FIELD(temp_v1, s32 *, 8) = arg2;
        M2C_FIELD(temp_v1, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x1C) | 1);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000416E0(void *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    void *temp_v1;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xAC0)) {
        temp_v1 = (arg1 << 5) + M2C_FIELD(arg0, s32 *, 0xAB8);
        if (M2C_FIELD(temp_v1, s32 *, 0x1C) & 4) {
            if (arg2 != NULL) {
                *arg2 = (s32) M2C_FIELD(temp_v1, u16 *, 0x14);
            }
            if (arg3 != NULL) {
                *arg3 = (s32) M2C_FIELD(temp_v1, u8 *, 0x16);
            }
            if (arg4 != NULL) {
                *arg4 = (s32) M2C_FIELD(temp_v1, u8 *, 0x17);
            }
            if (arg5 != NULL) {
                *arg5 = (s32) M2C_FIELD(temp_v1, u8 *, 0x18);
            }
            if (arg6 != NULL) {
                *arg6 = (s32) M2C_FIELD(temp_v1, u8 *, 0x19);
            }
            if (arg7 != NULL) {
                *arg7 = (s32) M2C_FIELD(temp_v1, u8 *, 0x1A);
            }
            return 1;
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_000416E0(void *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    void *temp_v1;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xAC0)) {
        temp_v1 = (arg1 << 5) + M2C_FIELD(arg0, s32 *, 0xAB8);
        if (M2C_FIELD(temp_v1, s32 *, 0x1C) & 4) {
            if (arg2 != NULL) {
                *arg2 = (s32) M2C_FIELD(temp_v1, u16 *, 0x14);
            }
            if (arg3 != NULL) {
                *arg3 = (s32) M2C_FIELD(temp_v1, u8 *, 0x16);
            }
            if (arg4 != NULL) {
                *arg4 = (s32) M2C_FIELD(temp_v1, u8 *, 0x17);
            }
            if (arg5 != NULL) {
                *arg5 = (s32) M2C_FIELD(temp_v1, u8 *, 0x18);
            }
            if (arg6 != NULL) {
                *arg6 = (s32) M2C_FIELD(temp_v1, u8 *, 0x19);
            }
            return 1;
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A5A0);

void func_0005A618(struct Unk_func_0005A618_0 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct Unk_func_0005A618_temp_v0 *temp_v0;

    if (arg1 < (u32) arg0->unk788) {
        temp_v0 = (arg1 * 0x34) + arg0->unk780;
        temp_v0->unkC = (s32) (((((arg2 * 0x3C) + arg3) * 0x3C) + arg4) * 0x15F90);
        temp_v0->unk30 = (s32) (temp_v0->unk30 | 2);
    }
}

void func_0005A684(struct Unk_func_0005A684_0 *arg0, u32 arg1, s32 arg2) {
    struct Unk_func_0005A684_temp_v0 *temp_v0;

    if (arg1 < (u32) arg0->unk788) {
        temp_v0 = (arg1 * 0x34) + arg0->unk780;
        temp_v0->unkC = arg2;
        temp_v0->unk30 = (s32) (temp_v0->unk30 | 2);
    }
}

void func_0005A6BC(struct Unk_func_0005A6BC_0 *arg0, u32 arg1, s32 arg2) {
    struct Unk_func_0005A6BC_temp_v0 *temp_v0;

    if (arg1 < (u32) arg0->unk788) {
        temp_v0 = (arg1 * 0x34) + arg0->unk780;
        temp_v0->unk8 = arg2;
        temp_v0->unk30 = (s32) (temp_v0->unk30 | 1);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A6F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A748);

void func_0005A79C(struct Unk_func_0005A79C_0 *arg0, u32 arg1, s32 arg2) {
    struct Unk_func_0005A79C_temp_v0 *temp_v0;

    if (arg1 < (u32) arg0->unk788) {
        temp_v0 = (arg1 * 0x34) + arg0->unk780;
        temp_v0->unk2C = arg2;
        temp_v0->unk30 = (s32) (temp_v0->unk30 | 0x40);
    }
}

s32 func_0005A7D4(struct Unk_func_0005A7D4_0 *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    struct Unk_func_0005A7D4_temp_a0 *temp_a0;

    if (arg1 < (u32) arg0->unk788) {
        temp_a0 = (arg1 * 0x34) + arg0->unk780;
        if (temp_a0->unk30 & 4) {
            if (arg2 != NULL) {
                *arg2 = (s32) temp_a0->unk14;
            }
            if (arg3 != NULL) {
                *arg3 = (s32) temp_a0->unk16;
            }
            if (arg4 != NULL) {
                *arg4 = (s32) temp_a0->unk17;
            }
            if (arg5 != NULL) {
                *arg5 = (s32) temp_a0->unk18;
            }
            if (arg6 != NULL) {
                *arg6 = (s32) temp_a0->unk19;
            }
            if (arg7 != NULL) {
                *arg7 = (s32) temp_a0->unk1A;
            }
            return 1;
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A878);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00041828);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00044FDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_00045054);

void func_000450A8(void) {
    func_00045054(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150
void func_000450C8(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00065A58;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 152
void func_000450C8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150
void func_0004188C(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00065A58;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004188C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 201
void func_000418A4(void *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 ***, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_000418FC(void *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 ***, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A944);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A998);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005A9F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AA50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AAA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AB28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AC14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005ACE8);

void func_0005AD3C(void) {
    func_0005ACE8(1, 0xFFFF);
}

void func_0005AD5C(M2C_UNK **arg0) {
    func_00059F54((Unk_func_00059F54_0*) arg0);
    *arg0 = &D_000658B0;
}

void func_0005AD8C(M2C_UNK **arg0) {
    func_00059F54((Unk_func_00059F54_0*) arg0);
    *arg0 = &D_000658B0;
}

void func_0005ADBC(M2C_UNK **arg0) {
    *arg0 = &D_000658B0;
    func_0005A044((s32) arg0);
}

void func_0005ADE4(M2C_UNK **arg0) {
    *arg0 = &D_000658B0;
    func_0005A044((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AE0C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_0567A0", D_000657F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_0567A0", func_0005AE44);
#endif
