#include "common.h"
#include "paf_decls.h"

void func_000FEF54(void *arg0) {
    func_000D0574(M2C_FIELD(arg0, void **, 0x20));
}

void scePaf_8DEB3DB3(void *arg0) {
    sceKernelWaitSema(D_001A5C80, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    sceKernelSignalSema((s32) D_001A5C80, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", scePaf_BA09CF46);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0FEF54", D_0019BB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0FEF54", D_0019BC08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0FEF54", D_0019BC18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF148);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF3A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF474);

s32 func_000FF900(s32 arg0, s32 *arg1) {
    func_0000C8BC(arg0 + 0x44, *arg1);
    return 0;
}

s32 func_000FF924(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x44));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF94C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FF9E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFA7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFAA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFAA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFB44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFB88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFB90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFBF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFC8C);

void func_000FFCB0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    if (arg2 & 0xFF) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) | arg1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) & ~arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFCD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFD00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFD1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_000FFD38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_0010028C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100A50);

void func_00100A88(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00101C84(M2C_FIELD(arg0, s32 *, 0xB4));
            func_00102168(M2C_FIELD(arg0, s32 *, 0xB8));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00100918(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100AF4);

u8 func_00100C44(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else if ((!(arg1 & 0xF) || (var_v1 = 1, (M2C_FIELD(arg0, s32 *, 0xC0) == 0))) && ((var_v1 = 1, ((arg1 & 0xF0) == 0)) || (M2C_FIELD(arg0, s32 *, 0xB0) != 0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

void func_00100C90(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    }
}

void func_00100CA0(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0xB8));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100CC0);

s32 func_00100D2C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x138);
    }
    return var_v0;
}

s32 func_00100D40(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x13C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00100EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00101370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00101578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_00101718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_0010177C);

void func_001017B4(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00102168(M2C_FIELD(arg0, s32 *, 0x18));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00101718(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

u8 func_00101818(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else {
            var_v1 = 1;
            if (!(arg1 & 0xF0) || (M2C_FIELD(arg0, u8 *, 0x14) == 0)) {
                var_v1 = 0;
            }
        }
    }
    return var_v1;
}

void func_00101850(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        sceAtracSetLoopNum(M2C_FIELD(arg0, s32 *, 8), (arg1 == 0) ? 0 : -1);
    }
}

void func_0010187C(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0FEF54", func_0010189C);

