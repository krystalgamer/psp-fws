#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FEF54);
#endif

#if FW_VERSION < 200
void func_000FEF54(struct Unk_func_000FEF54_0 *arg0) {
    func_000D0574(M2C_FIELD(arg0, struct Unk_func_000D0574_0 **, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_000FEF54(struct Unk_func_000FEF54_0 *arg0) {
    func_000D0574(arg0->unk20);
}
#endif

void scePaf_8DEB3DB3(void *arg0) {
    sceKernelWaitSema(D_001A5C80, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    sceKernelSignalSema((s32) D_001A5C80, 1);
}

INCLUDE_ASM("nonmatchings/paf_0FEF54", scePaf_BA09CF46);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF044);

INCLUDE_RODATA("nonmatchings/paf_0FEF54", D_0019BB70);

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0FEF54", D_001300B0);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0FEF54", D_00130148);
#endif

INCLUDE_RODATA("nonmatchings/paf_0FEF54", D_0019BC08);

INCLUDE_RODATA("nonmatchings/paf_0FEF54", D_0019BC18);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF070);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF148);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF220);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF2E4);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF3A8);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF474);

s32 func_000FF900(s32 arg0, s32 *arg1) {
    func_0000C8BC(arg0 + 0x44, *arg1);
    return 0;
}

s32 func_000FF924(struct Unk_func_000FF924_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk44);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF94C);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF9BC);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FF9E4);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFA54);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFA7C);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFAA0);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFAA8);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFB04);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFB44);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFB80);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFB88);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFB90);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFBEC);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFBF4);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFC50);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFC58);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFC8C);

void func_000FFCB0(struct Unk_func_000FFCB0_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    if (arg2 & 0xFF) {
        var_v0 = arg0->unk3C | arg1;
    } else {
        var_v0 = arg0->unk3C & ~arg1;
    }
    arg0->unk3C = var_v0;
}

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFCD8);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFCE4);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFD00);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFD1C);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000FFD38);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_0010028C);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100918);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100A50);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100A88);
#endif

#if FW_VERSION < 200
void func_00100A88(struct Unk_func_00100A88_0 *arg0) {
    if (arg0 != NULL) {
        if (arg0->unk0 != 0) {
            arg0->unk0 = 0;
            func_00101C84(M2C_FIELD(arg0, s32 *, 0x64));
            func_00102168(M2C_FIELD(arg0, s32 *, 0x68));
        }
        if (arg0->unk4 != 0) {

        } else {
            func_00100918(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}
#endif

#if FW_VERSION == 282
void func_00100A88(struct Unk_func_00100A88_0 *arg0) {
    if (arg0 != NULL) {
        if (arg0->unk0 != 0) {
            arg0->unk0 = 0U;
            func_00101C84(arg0->unkB4);
            func_00102168(arg0->unkB8);
        }
        if (arg0->unk4 != 0) {

        } else {
            func_00100918(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100AF4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100C44);
#endif

#if FW_VERSION < 200
u8 func_00100C44(struct Unk_func_00100C44_0 *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = arg0->unk0;
        } else if ((!(arg1 & 0xF) || (var_v1 = 1, (M2C_FIELD(arg0, s32 *, 0x70) == 0))) && ((var_v1 = 1, ((arg1 & 0xF0) == 0)) || (M2C_FIELD(arg0, s32 *, 0x60) != 0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
u8 func_00100C44(struct Unk_func_00100C44_0 *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = arg0->unk0;
        } else if ((!(arg1 & 0xF) || (var_v1 = 1, (arg0->unkC0 == 0))) && ((var_v1 = 1, ((arg1 & 0xF0) == 0)) || (arg0->unkB0 != 0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100C90);
#endif

#if FW_VERSION < 200
void func_00100C90(struct Unk_func_00100C90_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
    }
}
#endif

#if FW_VERSION == 282
void func_00100C90(struct Unk_func_00100C90_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unkF4 = arg1;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100CA0);
#endif

#if FW_VERSION < 200
void func_00100CA0(struct Unk_func_00100CA0_0 *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0x68));
    }
}
#endif

#if FW_VERSION == 282
void func_00100CA0(struct Unk_func_00100CA0_0 *arg0) {
    if (arg0 != NULL) {
        func_00102278(arg0->unkB8);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100CC0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100D2C);
#endif

#if FW_VERSION < 200
s32 func_00100D2C(struct Unk_func_00100D2C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xD8);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_00100D2C(struct Unk_func_00100D2C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk138;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100D40);
#endif

#if FW_VERSION < 200
s32 func_00100D40(struct Unk_func_00100D40_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_00100D40(struct Unk_func_00100D40_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk13C;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100D54);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000A4058);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_000A4180);
#else
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100DB0);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00100EE0);
#endif

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00101370);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00101578);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00101718);

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_0010177C);

void func_001017B4(struct Unk_func_001017B4_0 *arg0) {
    if (arg0 != NULL) {
        if (arg0->unk0 != 0) {
            arg0->unk0 = 0U;
            func_00102168(arg0->unk18);
        }
        if (arg0->unk4 != 0) {

        } else {
            func_00101718(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

u8 func_00101818(struct Unk_func_00101818_0 *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = arg0->unk0;
        } else {
            var_v1 = 1;
            if (!(arg1 & 0xF0) || (arg0->unk14 == 0)) {
                var_v1 = 0;
            }
        }
    }
    return var_v1;
}

#if FW_VERSION < 151 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0FEF54", func_00101850);
#else
void func_00101850(struct Unk_func_00101850_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        sceAtracSetLoopNum(arg0->unk8, (arg1 == 0) ? 0 : -1);
    }
}
#endif

void func_0010187C(struct Unk_func_0010187C_0 *arg0) {
    if (arg0 != NULL) {
        func_00102278(arg0->unk18);
    }
}

INCLUDE_ASM("nonmatchings/paf_0FEF54", func_0010189C);
