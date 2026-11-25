/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ctrl_decls.h"

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_3E65A0EA);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_E03956E9);

INCLUDE_ASM("nonmatchings/ctrl", func_000001C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00000294);

INCLUDE_ASM("nonmatchings/ctrl", func_00000334);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00000428);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ctrl", func_000003D4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/ctrl", func_000002F0);

INCLUDE_ASM("nonmatchings/ctrl", func_000003B0);

INCLUDE_ASM("nonmatchings/ctrl", func_00000470);
#endif

INCLUDE_ASM("nonmatchings/ctrl", func_00000804);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSamplingMode);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingMode);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSamplingCycle);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlPeekLatch);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlReadLatch);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceCtrl_driver_B7CEAED4(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_00002618;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000261C;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002620;
    }
    if (arg3 != NULL) {
        *arg3 = D_00002624;
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceCtrl_driver_B7CEAED4(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_000027A4;
    }
    if (arg1 != NULL) {
        *arg1 = D_000027A8;
    }
    if (arg2 != NULL) {
        *arg2 = D_000027AC;
    }
    if (arg3 != NULL) {
        *arg3 = D_000027B0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetIdleCancelThreshold);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetIdleCancelThreshold);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_7CA723DC);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_5E77BC8A);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetRapidFire);

s32 module_start(void) {
    sceCtrl_driver_3E65A0EA();
    return 0;
}

s32 module_reboot_before(void) {
    sceCtrl_driver_E03956E9();
    return 0;
}

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_C3F607F3);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_C245B57B);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", sceCtrlSetSamplingMode);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingMode);
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlGetSamplingCycle);

#if FW_VERSION < 282
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 0);
}

s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 1);
}

s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 2);
}

s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1) {
    return func_00001298((s32) arg0, arg1, 3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceCtrl_driver_A88E8D22(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_VFIELD(&D_00001D70, s32, 0xA44) = arg3;
    D_00001D70.unkA38 = arg0;
    D_00001D70.unkA3C = arg1;
    D_00001D70.unkA40 = arg2;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceCtrl_driver_A88E8D22(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_00001D70.unkA38 = arg1;
    D_00001D70.unkA34 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceCtrl_driver_348D99D4(u32 arg0) {
    s32 var_v1;

    var_v1 = 0x800001FE;
    if (arg0 < 0x12DU) {
        D_00001BFC = arg0;
        var_v1 = 0;
    }
    return var_v1;
}

s32 sceCtrl_driver_AF5960F3(void) {
    return (s32) D_00001BFC;
}
#endif

#if FW_VERSION == 100
s32 sceCtrl_driver_B7CEAED4(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_00002354;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002358;
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 0);
}

s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 1);
}

s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 2);
}

s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1) {
    return func_0000161C((s32) arg0, arg1, 3);
}

s32 sceCtrl_driver_A88E8D22(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_00001D70.unkA40 = arg3;
    D_00001D70.unkA34 = arg0;
    D_00001D70.unkA38 = arg1;
    D_00001D70.unkA3C = arg2;
    return 0;
}

s32 sceCtrl_driver_252D3A8D(s8 arg0) {
    D_00001D7F = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_348D99D4);

s32 sceCtrl_driver_AF5960F3(void) {
    return D_00001D88;
}
#endif

INCLUDE_ASM("nonmatchings/ctrl", sceCtrl_driver_5C56C779);

INCLUDE_ASM("nonmatchings/ctrl", sceCtrlClearRapidFire);

#if FW_VERSION < 282
s32 func_000011E4(void) {
    return 0x80000003;
}

s32 func_000011F0(void) {
    return 0x80000003;
}

s32 func_000011FC(void) {
    return 0x80000003;
}

s32 func_00001208(void) {
    return 0x80000003;
}

s32 func_00001214(void) {
    return 0x80000003;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001220(void) {
    func_00000804(M2C_VFIELD(&D_00001D70, s32, 0xA20) & 0xFFFF0C06, (s32) D_00001D70.pad0[0xA2C], (s32) D_00001D70.pad0[0xA2D]);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00001D70, s32, 4), 1U);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00001220(void) {
    func_00000804(M2C_VFIELD(&D_00001D70, s32, 0xA1C) & 0xFFFF0C06, (s32) D_00001D70.pad0[0xA28], (s32) D_00001D70.pad0[0xA29]);
    sceKernelSetEventFlag(M2C_VFIELD(&D_00001D70, s32, 4), 1U);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ctrl", func_00001270);

INCLUDE_ASM("nonmatchings/ctrl", func_00001298);
#else
s32 func_00001548(void) {
    return 0x80000003;
}

s32 func_00001554(void) {
    return 0x80000003;
}

s32 func_00001560(void) {
    return 0x80000003;
}

s32 func_0000156C(void) {
    return 0x80000003;
}

s32 func_00001578(void) {
    return 0x80000003;
}

INCLUDE_ASM("nonmatchings/ctrl", func_00001584);

INCLUDE_ASM("nonmatchings/ctrl", func_00001600);

INCLUDE_ASM("nonmatchings/ctrl", func_0000161C);
#endif

INCLUDE_RODATA("nonmatchings/ctrl", D_00001D20);
