/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

s32 func_00042054(s32 arg0) {
    if (arg0 != 0) {
        scePaf_545FE2DA();
    }
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_042054", func_00036A40);
#else
INCLUDE_ASM("nonmatchings/paf_042054", func_00042078);
#endif

INCLUDE_ASM("nonmatchings/paf_042054", func_00042208);

INCLUDE_ASM("nonmatchings/paf_042054", func_0004222C);

INCLUDE_ASM("nonmatchings/paf_042054", func_000422EC);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042360);

INCLUDE_ASM("nonmatchings/paf_042054", func_000423DC);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042458);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_21A183A7);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_8FE88010);

void scePaf_94136997(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00048064(temp_v0, arg0, arg1);
    func_00042800((s32) temp_v0, arg2, arg3);
}

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_042054", scePaf_1BD0E905);
#endif

#if FW_VERSION == 282
void scePaf_1BD0E905(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x24);
    func_0004738C(temp_v0, arg0, arg3, arg4);
    func_00042800((s32) temp_v0, arg1, arg2);
}
#else
INCLUDE_ASM("nonmatchings/paf_042054", scePaf_50B0C0A1);
#endif

#if FW_VERSION == 282
void scePaf_50B0C0A1(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_00048404(temp_v0, arg0, arg1);
    func_00042800((s32) temp_v0, 0, 6);
}
#endif

INCLUDE_ASM("nonmatchings/paf_042054", func_00042800);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_F247A0BD);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_3D451DE8);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_ABEBF18D);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042C04);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042C70);

s32 scePaf_537D04C6(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0004A228(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_042054", func_00042D64);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042DF4);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042E48);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042EE4);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_910A6B7B);

INCLUDE_ASM("nonmatchings/paf_042054", func_00042F74);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_12C50A9D);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_1F43B8A2);

s32 func_0004303C(struct Unk_func_0004303C_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        arg0->unk74 = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00043080(struct Unk_func_00043080_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        arg0->unk76 = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_7E304DCF);

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_14D80C40);

s32 scePaf_9F60CB01(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(8);
    func_0004AED4(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_042054", scePaf_91E82C1B);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_042054", func_00037C84);
#endif

#if FW_VERSION == 282
s32 scePaf_91E82C1B(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_B7E6052B(0x14);
    func_00044714(temp_v0, arg1, arg2);
    var_v0 = 0;
    if (temp_v0 != 0) {
        var_v0 = func_00042C70(arg0, temp_v0);
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_042054", scePaf_A25BDAA2);

#if FW_VERSION == 200
s32 func_000407E4(s32 arg0) {
    D_001A34E4 = arg0;
    return 1;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_042054", func_00037D88);
#endif

#if FW_VERSION == 282
s32 func_00043458(s32 arg0) {
    D_001A34E4 = arg0;
    return 1;
}
#endif
