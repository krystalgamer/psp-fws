#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000567A0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000568F8);

void func_0005698C(void *arg0) {
    if (arg0 != NULL) {
        func_00056C30(arg0 + 8);
        func_00056CA0(arg0 + 0x4C);
        func_00056D10(arg0 + 0x90);
        func_00056D70(arg0 + 0xBC);
        func_00056DD0(arg0 + 0xE8);
        func_00056E38(arg0 + 0x124);
        func_00041C08(M2C_FIELD(arg0, void **, 0x160));
        func_00041C08(arg0);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000569F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056A4C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056AA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056AEC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056B34);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056B84);

void func_00056BD4(void **arg0, void **arg1) {
    void *temp_s0;
    void *var_v0;

    var_v0 = *arg1;
    if (var_v0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 0x1C);
            func_000515F4(arg0, arg1);
            *arg1 = temp_s0;
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
        *arg1 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056C30);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056CA0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056D10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056D70);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056DD0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056E38);

s32 func_00056EA8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056EB0);

s32 func_00056F4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00056F58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057000);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057088);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000571F4);

s32 func_00057234(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    }
    return var_v1;
}

s32 func_00057254(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v1;
}

s32 func_00057274(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x24) == 0;
    }
    return var_v1;
}

s32 func_00057290(void *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x160);
        var_v1 = 7;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 0x20);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000572B8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057388);

void func_000573D0(void *arg0, s32 arg1, s32 arg2) {
    func_00054CF0(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20), arg1, 0, arg2);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057400);

s32 func_0005751C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_00057540(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057570);

s32 func_000575B4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_000575D8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_000575FC(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057620);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057748);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000577E8);

s32 func_000578C4(void *arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    void *temp_a0;

    var_a3 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x160);
        var_a3 = 7;
        if (temp_a0 != NULL) {
            var_a3 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 0);
            *arg2 = M2C_FIELD(temp_a0, s32 *, 4);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000578F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057AD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057B50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00057F18);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005804C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00058178);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000582C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000583F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000586C4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005878C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00058848);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005891C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00058B10);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00058F50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000590D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059120);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059170);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000591C0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059210);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005926C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059318);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059364);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000593B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059400);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059450);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000594B8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059540);

s32 func_000595A4(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000595B4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059650);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_000596EC);

s32 func_000599E0(void *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (arg1 < (u32) ((u32) (temp_v1 + 1) >> 1)) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x14);
        var_s0 = arg1 - 1;
        if (arg1 != 0) {
            do {
                var_s0 -= 1;
                var_a0 = func_00059C9C(var_a0);
            } while (var_s0 != -1);
        }
    } else {
        var_s0_2 = (temp_v1 - arg1) - 2;
        var_a0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (var_s0_2 != -1) {
            do {
                var_s0_2 -= 1;
                var_a0 = func_00059C8C(var_a0);
            } while (var_s0_2 != -1);
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059A6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059B08);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059BB4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059C40);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059C8C);

void func_00059C94(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059C9C);

void func_00059CA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 func_00059CAC(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0xC;
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0)) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(arg0, s32 *, 4) + arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059CD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059D28);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059D7C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059DF0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059E48);

s32 func_00059E88(void *arg0) {
    func_00041C08(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059EA8);

s32 func_00059EE4(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a1 != -1) {
        M2C_FIELD(arg0, s32 *, 0) = temp_a1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059F00);

s32 func_00059F24(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 2;
}

s32 func_00059F34(s32 *arg0) {
    return *arg0 == 2;
}

s32 func_00059F44(s32 *arg0) {
    return *arg0 == 7;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059F54);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_00059FCC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A044);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A084);

void func_0005A0C4(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x780);
    M2C_FIELD(arg0, s32 **, 0) = &D_000657F8;
    if (temp_v1 != 0) {
        scePaf_B3D2C3BB(temp_v1);
    }
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065454);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_0006546C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065478);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_000657B8);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_000657D8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A114);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A1D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A348);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A40C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A48C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A4D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A548);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A5A0);

void func_0005A618(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x788)) {
        temp_v0 = (arg1 * 0x34) + M2C_FIELD(arg0, s32 *, 0x780);
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) (((((arg2 * 0x3C) + arg3) * 0x3C) + arg4) * 0x15F90);
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x30) | 2);
    }
}

void func_0005A684(void *arg0, u32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x788)) {
        temp_v0 = (arg1 * 0x34) + M2C_FIELD(arg0, s32 *, 0x780);
        M2C_FIELD(temp_v0, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x30) | 2);
    }
}

void func_0005A6BC(void *arg0, u32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x788)) {
        temp_v0 = (arg1 * 0x34) + M2C_FIELD(arg0, s32 *, 0x780);
        M2C_FIELD(temp_v0, s32 *, 8) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x30) | 1);
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A6F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A748);

void func_0005A79C(void *arg0, u32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x788)) {
        temp_v0 = (arg1 * 0x34) + M2C_FIELD(arg0, s32 *, 0x780);
        M2C_FIELD(temp_v0, s32 *, 0x2C) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x30) | 0x40);
    }
}

s32 func_0005A7D4(void *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    void *temp_a0;

    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x788)) {
        temp_a0 = (arg1 * 0x34) + M2C_FIELD(arg0, s32 *, 0x780);
        if (M2C_FIELD(temp_a0, s32 *, 0x30) & 4) {
            if (arg2 != NULL) {
                *arg2 = (s32) M2C_FIELD(temp_a0, u16 *, 0x14);
            }
            if (arg3 != NULL) {
                *arg3 = (s32) M2C_FIELD(temp_a0, u8 *, 0x16);
            }
            if (arg4 != NULL) {
                *arg4 = (s32) M2C_FIELD(temp_a0, u8 *, 0x17);
            }
            if (arg5 != NULL) {
                *arg5 = (s32) M2C_FIELD(temp_a0, u8 *, 0x18);
            }
            if (arg6 != NULL) {
                *arg6 = (s32) M2C_FIELD(temp_a0, u8 *, 0x19);
            }
            if (arg7 != NULL) {
                *arg7 = (s32) M2C_FIELD(temp_a0, u8 *, 0x1A);
            }
            return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A878);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A944);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A998);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005A9F4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AA50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AAA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AB28);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AC14);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005ACE8);

void func_0005AD3C(void) {
    func_0005ACE8(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AD5C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AD8C);

void func_0005ADBC(M2C_UNK **arg0) {
    *arg0 = &D_000658B0;
    func_0005A044((s32) arg0);
}

void func_0005ADE4(M2C_UNK **arg0) {
    *arg0 = &D_000658B0;
    func_0005A044((s32) arg0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AE0C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_000657F8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AE44);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AE90);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005AECC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005B424);

void func_0005B454(M2C_UNK **arg0) {
    *arg0 = &D_00065968;
    func_0005A044((s32) arg0);
}

void func_0005B47C(M2C_UNK **arg0) {
    *arg0 = &D_00065968;
    func_0005A044((s32) arg0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005B4A4);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065890);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_000658B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005B4DC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005B528);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005B564);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BAA4);

void func_0005BABC(void *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 ***, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    scePaf_4E67BB08(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

void func_0005BB14(void *arg0) {
    s32 **temp_s0;
    s32 **var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065A58;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 ***, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, s32 ***, 8);
                if (var_v0 != NULL) {
                    scePaf_4E67BB08(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BB6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BBD8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BC68);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065948);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065968);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BCB0);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_000659B8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BDC8);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BFD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005BFF8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C07C);

s32 func_0005C148(void) {
    return -9;
}

void func_0005C150(void) {
}

void func_0005C158(void) {
}

s32 func_0005C160(void) {
    return -9;
}

s32 func_0005C168(void) {
    return -9;
}

void func_0005C170(void) {
}

s32 func_0005C178(void *arg0) {
    func_0005C1B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u8 *, 0));
    func_00041C08(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C1B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C228);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C4FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C67C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005C6FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CA10);

s32 func_0005CAA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CAB0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CB34);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CC0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CCA4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CD48);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CF38);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005CFDC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D064);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D0EC);

s32 func_0005D148(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D164);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D3DC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D490);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D500);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D5C4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D648);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D68C);

void func_0005D6FC(s32 arg0) {
    func_0005D718(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D718);

void func_0005D748(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        func_0005D78C(temp_v0);
    }
    func_00041C08(arg0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D78C);

void func_0005D7D0(s32 arg0) {
    func_0005D7EC(arg0 + 0x94);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D7EC);

void func_0005D86C(s32 arg0) {
    func_0005D888(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D888);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D8C0);

void func_0005D904(s32 arg0) {
    func_00049388();
    func_0005DB50(arg0 + 0x14);
    func_0005D9EC(arg0 + 0x2C);
    func_0005DA1C(arg0 + 0x50);
    func_0005DA4C(arg0 + 0x74);
    func_0005DA7C(arg0 + 0x98);
    func_0005DAAC(arg0 + 0xBC);
    func_0005D9BC(arg0 + 0xE0);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D964);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D9BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005D9EC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DA1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DA4C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DA7C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DAAC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DADC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DB50);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DB88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DC4C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DC90);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DCD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DE98);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DF48);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005DFFC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E090);

s32 func_0005E0E4(void *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48(arg0 + 0x14, 3, arg1, 0x2710) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

s32 func_0005E134(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48(arg0 + 0x14, 2, arg1, 0x2710) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

s32 func_0005E184(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48(arg0 + 0x14, 2, arg1, 0x2710) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E1D4);

s32 func_0005E228(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_0005CD48(arg0 + 0x10, 3, arg1, 0x2710) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E278);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E398);

void func_0005E480(void *arg0) {
    s32 temp_v1;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, s32 *, 0) = 8;
    if (temp_a1 != NULL) {
        temp_v1 = (M2C_FIELD(temp_a1, u16 *, 8) * 4) + 8;
        M2C_FIELD(temp_a1, s32 *, 0) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_v1);
    }
}

void func_0005E4B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0005E504(arg0 + 8);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_0005E504(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) * 0xC) + 0x10);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E520);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E5BC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E698);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E6E4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E854);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E964);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005E9DC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EA1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EA5C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EAAC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EB40);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EBB0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EC60);

s32 func_0005ECC4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10C), void **, 0x298), void **, 0x8C), void **, 0xFC), void **, 4), s32 *, 0x28);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005ECE0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005ED38);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005EDBC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F104);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F16C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F1E0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F558);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F77C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F804);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F88C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005F968);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005FA3C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005FCDC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", func_0005FDF8);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A68);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A6C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A70);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A74);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A78);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A7C);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_0567A0", D_00065A80);
