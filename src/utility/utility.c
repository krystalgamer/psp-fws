/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags[152]: -O0 */
/* cflags[150]: -O0 */
/* cflags[100,102,103]: -O0 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/utility", D_00006400);

INCLUDE_RODATA("nonmatchings/utility", D_00006404);

INCLUDE_RODATA("nonmatchings/utility", D_00006418);

INCLUDE_RODATA("nonmatchings/utility", D_0000642C);

INCLUDE_RODATA("nonmatchings/utility", D_00006440);

INCLUDE_RODATA("nonmatchings/utility", D_00006458);

INCLUDE_RODATA("nonmatchings/utility", D_00006470);

INCLUDE_RODATA("nonmatchings/utility", D_00006488);

INCLUDE_RODATA("nonmatchings/utility", D_000064A0);

INCLUDE_RODATA("nonmatchings/utility", D_000064BC);

INCLUDE_RODATA("nonmatchings/utility", D_000064D4);

INCLUDE_RODATA("nonmatchings/utility", D_000064E8);

INCLUDE_RODATA("nonmatchings/utility", D_000064FC);

INCLUDE_RODATA("nonmatchings/utility", D_0000650C);

INCLUDE_RODATA("nonmatchings/utility", D_00006524);

INCLUDE_RODATA("nonmatchings/utility", D_00006538);

INCLUDE_RODATA("nonmatchings/utility", D_00006548);

INCLUDE_RODATA("nonmatchings/utility", D_00006554);

INCLUDE_RODATA("nonmatchings/utility", D_000067D4);

INCLUDE_RODATA("nonmatchings/utility", D_000067E8);

INCLUDE_RODATA("nonmatchings/utility", D_00006950);

INCLUDE_RODATA("nonmatchings/utility", D_00006970);

INCLUDE_RODATA("nonmatchings/utility", D_000069D4);

INCLUDE_RODATA("nonmatchings/utility", D_000069D8);

INCLUDE_RODATA("nonmatchings/utility", D_000069DC);

INCLUDE_RODATA("nonmatchings/utility", D_000069E0);

INCLUDE_RODATA("nonmatchings/utility", D_000069F4);

INCLUDE_RODATA("nonmatchings/utility", D_00006A00);

INCLUDE_RODATA("nonmatchings/utility", D_00006A14);

INCLUDE_RODATA("nonmatchings/utility", D_00006A4C);

INCLUDE_RODATA("nonmatchings/utility", D_00006A58);

INCLUDE_RODATA("nonmatchings/utility", D_00006A60);

INCLUDE_RODATA("nonmatchings/utility", D_00006A94);

INCLUDE_RODATA("nonmatchings/utility", D_00006AA4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", module_start);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_00006C98);

INCLUDE_ASM("nonmatchings/utility", sceUtilityInit);

#if (FW_VERSION >= 102 && FW_VERSION < 150) || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityEnd);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000000B4);

INCLUDE_ASM("nonmatchings/utility", func_000004D4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4ABA7FF9);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogLoadModule);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlPeekBufferPositive);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00000780);

s32 module_start(void) {
    sceUtilityInit();
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtilityEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00004FC0_v152);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtilityEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00004FC0_v150);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceUtilityEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00004F80);
    sceKernelDeleteSema(D_000050F0);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityEnd(void) {
    func_000015AC();
    sceKernelUnregisterSysEventHandler(&D_00006980);
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_00000880);

INCLUDE_ASM("nonmatchings/utility", func_000008F8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00000A74);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_17CB4D96(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C28, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_EE7AC503(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C28, 2U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_5FF96ED3(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C28, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_9C9DD5BC(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C28, 8U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_4405BA38(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C28, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_1DFA62EF(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C28, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtilityDialogSetStatus(s32 arg0) {
    D_00006C34 = arg0;
    return 0;
}

s32 sceUtilityDialogGetType(void) {
    return D_00006C2C;
}

s32 sceUtilityDialogGetParam(void) {
    return D_00006C3C;
}

s32 sceUtilityDialogGetStructVersion(void) {
    return D_00006C40;
}

s32 sceUtilityDialogGetSpeed(void) {
    return D_00006C44;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceUtility_private_5BA71568(void) {
    return D_00007008;
}
#endif

#if FW_VERSION == 250
s32 sceUtility_private_19461966(void) {
    return D_00006C38;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityDialogSetThreadId(s32 arg0) {
    D_00006C20 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetGameInfo);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerLock);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerUnlock);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlSetSamplingMode);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlGetSamplingMode);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000001B8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/utility", func_000001E0);

INCLUDE_ASM("nonmatchings/utility", func_0000027C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000001E4);

INCLUDE_ASM("nonmatchings/utility", func_00000280);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000002AC);

INCLUDE_ASM("nonmatchings/utility", func_00000364);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_00008F2C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/utility", D_00006DD0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/utility", D_0000638C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/utility", D_00005FDC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00000BD4);

INCLUDE_ASM("nonmatchings/utility", func_00001004);

INCLUDE_ASM("nonmatchings/utility", func_0000114C);

INCLUDE_ASM("nonmatchings/utility", func_000011C4);

INCLUDE_ASM("nonmatchings/utility", func_0000135C);

INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletLoadModule);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/utility", D_00006574);

INCLUDE_RODATA("nonmatchings/utility", D_00006594);

INCLUDE_RODATA("nonmatchings/utility", D_0000659C);

INCLUDE_RODATA("nonmatchings/utility", D_000065BC);

INCLUDE_RODATA("nonmatchings/utility", D_000065C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00001548);

s32 func_000015AC(void) {
    if (D_00006C68 > 0) {
        sceKernelDeleteEventFlag(D_00006C68);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_000015DC);

INCLUDE_ASM("nonmatchings/utility", func_00001654);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/utility", D_00008F58);

INCLUDE_RODATA("nonmatchings/utility", D_00008F7C);

INCLUDE_RODATA("nonmatchings/utility", D_00008F9C);

INCLUDE_RODATA("nonmatchings/utility", D_00008FC0);

INCLUDE_RODATA("nonmatchings/utility", D_00008FE4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00000458);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00000988);
#endif

#if FW_VERSION == 100
s32 func_00000988(s32 arg0, s32 arg1) {
    sceKernelSignalSema(D_000050F4, 1);
    sceKernelWaitSema(D_000050F8, 1, NULL);
    sceKernelWaitThreadEnd(D_000050FC, NULL);
    func_000002AC(D_00005128);
    func_000002AC(D_00005120);
    func_000002AC(D_0000511C);
    func_000002AC(D_00005124);
    func_000002AC(D_00005118);
    func_000002AC(D_00005114);
    sceKernelWaitSema(D_000050F0, 1, NULL);
    D_0000510C = 0;
    D_00005104 = 0;
    D_00005108 = 0;
    sceKernelSignalSema(D_000050F0, 1);
    sceKernelExitDeleteThread(0);
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00000A78);

INCLUDE_ASM("nonmatchings/utility", func_00000C08);

INCLUDE_ASM("nonmatchings/utility", func_00000D08);
#endif

#if (FW_VERSION >= 102 && FW_VERSION < 150) || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_17CB4D96);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_EE7AC503);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_5FF96ED3);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_9C9DD5BC);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4405BA38);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_1DFA62EF);
#endif

#if FW_VERSION == 152
s32 sceUtility_private_17CB4D96(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v152, 1U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_17CB4D96(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v150, 1U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtility_private_EE7AC503(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v152, 2U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_EE7AC503(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v150, 2U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtility_private_5FF96ED3(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v152, 4U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_5FF96ED3(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v150, 4U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtility_private_9C9DD5BC(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v152, 8U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_9C9DD5BC(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v150, 8U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtility_private_4405BA38(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v152, 0x10U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_4405BA38(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitEventFlag(D_00005138_v150, 0x10U, 0x20, NULL, NULL);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 sceUtility_private_1DFA62EF(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v152, 0x20U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 150
s32 sceUtility_private_1DFA62EF(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSetEventFlag(D_00005138_v150, 0x20U);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceUtility_private_71269BEF(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelWaitSema(D_000050F4, 1, NULL);
    func_00001200(sp0);
    return 0;
}

s32 sceUtility_private_B96C67EC(void) {
    s32 sp0;

    sp0 = func_000011D4();
    sceKernelSignalSema(D_000050F8, 1);
    func_00001200(sp0);
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogSetStatus);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetType);
#endif

#if FW_VERSION < 201
s32 sceUtilityDialogGetType(void) {
    return D_00005100;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetParam);
#endif

#if FW_VERSION < 201
s32 sceUtilityDialogGetParam(void) {
    return D_0000510C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetStructVersion);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUtilityDialogGetStructVersion(void) {
    return D_0000514C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetSpeed);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUtilityDialogGetSpeed(void) {
    return D_00005150;
}
#endif

#if FW_VERSION < 150
s32 sceUtilityDialogGetSpeed(void) {
    return D_00005110;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_19461966);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUtility_private_19461966(void) {
    return D_00005144;
}
#endif

#if FW_VERSION < 150
s32 sceUtility_private_19461966(void) {
    return D_00005108;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogSetThreadId);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogLoadModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerLock);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerUnlock);

INCLUDE_ASM("nonmatchings/utility", func_000011E4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetGameInfo);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_000000C4);

INCLUDE_ASM("nonmatchings/utility", func_00000550);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_6D9C3C45);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_C5570074);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_B840FE8A);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4ABA7FF9);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250) || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogLoadModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerLock);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerUnlock);

INCLUDE_ASM("nonmatchings/utility", func_000013BC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_000011D4);

INCLUDE_ASM("nonmatchings/utility", func_00001200);

INCLUDE_ASM("nonmatchings/utility", func_00001A48);

INCLUDE_ASM("nonmatchings/utility", func_00001AB8);

INCLUDE_ASM("nonmatchings/utility", func_00001AE4);

INCLUDE_ASM("nonmatchings/utility", func_00001B10);

INCLUDE_ASM("nonmatchings/utility", func_00001BA4);

INCLUDE_ASM("nonmatchings/utility", func_00001BE8);

INCLUDE_ASM("nonmatchings/utility", func_00001D20);

INCLUDE_ASM("nonmatchings/utility", func_00001DC0);

INCLUDE_ASM("nonmatchings/utility", func_00001E7C);

INCLUDE_ASM("nonmatchings/utility", func_00001F5C);

INCLUDE_ASM("nonmatchings/utility", func_0000201C);

INCLUDE_ASM("nonmatchings/utility", func_000020E8);

INCLUDE_ASM("nonmatchings/utility", func_00002304);

INCLUDE_ASM("nonmatchings/utility", func_000023D8);

INCLUDE_ASM("nonmatchings/utility", func_00002514);

INCLUDE_ASM("nonmatchings/utility", func_000025D8);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_DC17A878);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_DC17A878(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C68, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_2FBA0921);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_2FBA0921(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C68, 2U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_CD3C8C18);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_CD3C8C18(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C68, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_B20562D4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_B20562D4(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C68, 8U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_88682129);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_88682129(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00006C68, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_2FE219D7);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_2FE219D7(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00006C68, 0x20U);
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletSetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletSetStatus(s32 arg0) {
    D_00006C70 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletGetType);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletGetType(void) {
    return D_00006C6C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletGetParam);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletGetParam(void) {
    return D_00006C74;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletGetStructVersion);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletGetStructVersion(void) {
    return D_00006C78;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletGetSpeed);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletGetSpeed(void) {
    return D_00006C7C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletSetThreadId);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityAppletSetThreadId(s32 arg0) {
    D_00006C64 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletLoadModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletUnloadModule);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityAppletUnloadModule(void) {
    func_0000197C();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletRegisterPowerCallback);

INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletUnregisterPowerCallback);
#endif

#if FW_VERSION == 271
s32 func_00001C48(s32 arg0, s32 arg1, void *arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    void *var_a2;

    var_a2 = arg2;
    var_a3 = arg1 < 0x10E;
    var_a1 = 0;
    if (arg0 == 1) {
        var_s0 = 0x380000;
        if (var_a3 == 0) {
            var_a3 = M2C_FIELD(var_a2, s32 *, 0x4C);
            var_a2 = (void *) (var_a3 & 0x400);
            var_s0 = (var_a2 != NULL) ? 0x480000 : 0x380000;
        }
        Kprintf("block size:%x\n", var_s0, (s32) var_a2, var_a3);
        var_a1 = var_s0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000018D0);

INCLUDE_ASM("nonmatchings/utility", func_0000197C);

INCLUDE_ASM("nonmatchings/utility", func_00001A00);

INCLUDE_ASM("nonmatchings/utility", func_00001A94);

INCLUDE_ASM("nonmatchings/utility", func_00001B3C);

INCLUDE_ASM("nonmatchings/utility", func_00001BE4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00001C5C(void) {
    M2C_VFIELD(&D_00006CC4, s32, 0) = 0;
    M2C_VFIELD(&D_00006CC4, s32, 4) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 8) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xC) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x10) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x14) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x18) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x1C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x20) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x24) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x28) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x2C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x30) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x34) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x38) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x3C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x48) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x4C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x50) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x54) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x58) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x5C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x60) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x64) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x68) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x6C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x70) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x74) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x78) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x7C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x80) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x84) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x88) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x8C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xA8) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x90) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x94) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x98) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x9C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xA0) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xA4) = -1;
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_00001C5C(void) {
    M2C_VFIELD(&D_00006CC4, s32, 0) = 0;
    M2C_VFIELD(&D_00006CC4, s32, 4) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 8) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xC) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x10) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x14) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x18) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x1C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x20) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x24) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x28) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x2C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x30) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x34) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x38) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x3C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x40) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x44) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x48) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x4C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x50) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x54) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x58) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x5C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x60) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x64) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x68) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x6C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x70) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x74) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x78) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x7C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x80) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x84) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0xA0) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x88) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x8C) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x90) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x94) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x98) = -1;
    M2C_VFIELD(&D_00006CC4, s32, 0x9C) = -1;
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadNetModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadNetModule);

INCLUDE_ASM("nonmatchings/utility", func_00001E9C);

INCLUDE_ASM("nonmatchings/utility", func_00001FAC);

INCLUDE_ASM("nonmatchings/utility", func_00002088);

INCLUDE_ASM("nonmatchings/utility", func_000022DC);

INCLUDE_ASM("nonmatchings/utility", func_00002474);

INCLUDE_ASM("nonmatchings/utility", func_000026C8);

INCLUDE_ASM("nonmatchings/utility", func_00002864);

INCLUDE_ASM("nonmatchings/utility", func_00002938);

INCLUDE_ASM("nonmatchings/utility", func_000029EC);

INCLUDE_ASM("nonmatchings/utility", func_00002AC0);

INCLUDE_ASM("nonmatchings/utility", func_00002B74);

INCLUDE_ASM("nonmatchings/utility", func_00002C84);

INCLUDE_ASM("nonmatchings/utility", func_00002D60);

INCLUDE_ASM("nonmatchings/utility", func_00002E70);

INCLUDE_ASM("nonmatchings/utility", func_00002F4C);

INCLUDE_ASM("nonmatchings/utility", func_00002FEC);
#endif

#if FW_VERSION == 271
s32 func_000034B0(void) {
    M2C_VFIELD(&D_00007D68, s32, 0x18) = -1;
    M2C_VFIELD(&D_00007D68, s32, 0) = 0;
    M2C_VFIELD(&D_00007D68, s32, 4) = -1;
    M2C_VFIELD(&D_00007D68, s32, 8) = -1;
    M2C_VFIELD(&D_00007D68, s32, 0xC) = -1;
    M2C_VFIELD(&D_00007D68, s32, 0x10) = -1;
    M2C_VFIELD(&D_00007D68, s32, 0x14) = -1;
    return 0;
}

s32 sceUtilityLoadUsbModule(s32 arg0) {
    s32 var_v1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v1 = 0x80110E01;
    if ((u32) (arg0 - 1) < 5U) {
        var_v1 = func_00003658(arg0);
    }
    setK1(temp_s0);
    return var_v1;
}

s32 sceUtilityUnloadUsbModule(s32 arg0) {
    s32 var_v1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v1 = 0x80110E01;
    if ((u32) (arg0 - 1) < 5U) {
        var_v1 = func_00003580(arg0);
    }
    setK1(temp_s0);
    return var_v1;
}

INCLUDE_ASM("nonmatchings/utility", func_00003580);

INCLUDE_RODATA("nonmatchings/utility", D_00007428);

INCLUDE_RODATA("nonmatchings/utility", D_00007440);

INCLUDE_RODATA("nonmatchings/utility", D_00007458);

INCLUDE_RODATA("nonmatchings/utility", D_00007470);

INCLUDE_RODATA("nonmatchings/utility", D_00007488);

INCLUDE_RODATA("nonmatchings/utility", D_000074A0);

INCLUDE_ASM("nonmatchings/utility", func_00003658);

INCLUDE_ASM("nonmatchings/utility", func_0000381C);

s32 func_000038BC(void) {
    memset(&D_00007D84, 0xFF, 0x24);
    D_00007D84 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadAvModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadAvModule);

INCLUDE_ASM("nonmatchings/utility", func_00003984);

INCLUDE_ASM("nonmatchings/utility", func_00003A4C);

INCLUDE_ASM("nonmatchings/utility", func_00003B44);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00002B60);

INCLUDE_ASM("nonmatchings/utility", func_00002B8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utility", func_0000111C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/utility", func_000011D4);

INCLUDE_ASM("nonmatchings/utility", func_00001200);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00001228);

INCLUDE_ASM("nonmatchings/utility", func_00001298);

INCLUDE_ASM("nonmatchings/utility", func_000012C4);

INCLUDE_ASM("nonmatchings/utility", sceUtilityGameSharingInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityGameSharingInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000B4(3, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityGameSharingShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityGameSharingShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000004D4(3);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlPeekBufferPositive);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_0000094C);

s32 module_start(void) {
    sceUtilityInit();
    return 0;
}

s32 sceUtilityEnd(void) {
    func_00001994();
    sceKernelUnregisterSysEventHandler(&D_00007BF0);
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_00000A4C);

INCLUDE_ASM("nonmatchings/utility", func_00000AC4);

INCLUDE_ASM("nonmatchings/utility", func_00000B0C);
#endif

#if FW_VERSION >= 350
s32 sceUtility_private_A26593CA(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00008098, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_63AC185C(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00008098, 2U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_62654471(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00008098, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_213DE03C(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00008098, 8U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_3E4EF652(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00008098, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_C6207959(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00008098, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_89556534(s32 arg0) {
    D_000080A4 = arg0;
    return 0;
}

s32 sceUtility_private_FB67A5F8(void) {
    return D_0000809C;
}

s32 sceUtility_private_514541CA(void) {
    return D_00007EAC;
}

s32 sceUtility_private_5BE976DE(void) {
    return D_000080B0;
}

s32 sceUtility_private_971ADBF8(void) {
    return D_000080B4;
}

s32 sceUtility_private_C36E3C16(void) {
    return D_000080A8;
}

s32 sceUtility_private_412A1B40(s32 arg0) {
    D_00007E90 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E4EC6727);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_0C804C87);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_3187AC5B);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_F80A06D9);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_072E01AA);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceUtility_private_17CB4D96(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007E98, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_EE7AC503(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007E98, 2U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_5FF96ED3(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007E98, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_9C9DD5BC(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007E98, 8U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_4405BA38(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007E98, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_1DFA62EF(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007E98, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtilityDialogSetStatus(s32 arg0) {
    D_00007EA4 = arg0;
    return 0;
}

s32 sceUtilityDialogGetType(void) {
    return D_00007E9C;
}

s32 sceUtilityDialogGetParam(void) {
    return D_00007EAC;
}

s32 sceUtilityDialogGetStructVersion(void) {
    return D_00007EB0;
}

s32 sceUtilityDialogGetSpeed(void) {
    return D_00007EB4;
}

s32 sceUtility_private_5BA71568(void) {
    return D_00007EA8;
}

s32 sceUtilityDialogSetThreadId(s32 arg0) {
    D_00007E90 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogGetGameInfo);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerLock);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogPowerUnlock);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlSetSamplingMode);

INCLUDE_ASM("nonmatchings/utility", sceUtilityDialogCtrlGetSamplingMode);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_00007020);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/utility", D_00006E8C);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/utility", D_0000695C);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/utility", D_000068F0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/utility", D_000067F0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/utility", D_000067E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_0000704C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00000E74);

INCLUDE_ASM("nonmatchings/utility", func_0000132C);

INCLUDE_ASM("nonmatchings/utility", func_00001484);

INCLUDE_ASM("nonmatchings/utility", func_000014FC);

INCLUDE_ASM("nonmatchings/utility", func_0000171C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_6324267B);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletLoadModule);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00001930);

s32 func_00001994(void) {
    if (D_00007EEC > 0) {
        sceKernelDeleteEventFlag(D_00007EEC);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_000019C4);

INCLUDE_ASM("nonmatchings/utility", func_00001A3C);
#endif

#if FW_VERSION >= 350
s32 sceUtility_private_FA7677DA(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_2B9FA97C(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 2U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_80543CA4(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_6DE4FFA7(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 8U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_DEB64A03(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_BB8002F5(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_63015035(s32 arg0) {
    D_000080F4 = arg0;
    return 0;
}

s32 sceUtility_private_A33569F5(void) {
    return D_000080F0;
}

s32 sceUtility_private_56DD7BFE(void) {
    return D_00007EF8;
}

s32 sceUtility_private_167260AF(void) {
    return D_000080FC;
}

s32 sceUtility_private_6F86F49E(void) {
    return D_00008100;
}

s32 sceUtility_private_A95C751D(s32 arg0) {
    D_00007EE8 = arg0;
    return 0;
}

void sceUtility_private_F7B30D67(void) {
    func_00001DC8();
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_57D704CB);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_0D7BB1A3);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceUtility_private_DC17A878(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 1U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_2FBA0921(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 2U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_CD3C8C18(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 4U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_B20562D4(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 8U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_88682129(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelWaitEventFlag(D_00007EEC, 0x10U, 0x20, NULL, NULL);
    setK1(temp_s0);
    return 0;
}

s32 sceUtility_private_2FE219D7(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceKernelSetEventFlag(D_00007EEC, 0x20U);
    setK1(temp_s0);
    return 0;
}

s32 sceUtilityAppletSetStatus(s32 arg0) {
    D_00007EF4 = arg0;
    return 0;
}

s32 sceUtilityAppletGetType(void) {
    return D_00007EF0;
}

s32 sceUtilityAppletGetParam(void) {
    return D_00007EF8;
}

s32 sceUtilityAppletGetStructVersion(void) {
    return D_00007EFC;
}

s32 sceUtilityAppletGetSpeed(void) {
    return D_00007F00;
}

s32 sceUtilityAppletSetThreadId(s32 arg0) {
    D_00007EE8 = arg0;
    return 0;
}

void sceUtilityAppletUnloadModule(void) {
    func_00001DC8();
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletRegisterPowerCallback);

INCLUDE_ASM("nonmatchings/utility", sceUtilityAppletUnregisterPowerCallback);
#endif

#if FW_VERSION >= 300
s32 func_00001D3C(s32 arg0, s32 arg1, void *arg2) {
    s32 var_a0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == 1) {
        var_a0 = 0x380000;
        if (arg1 >= 0x10E) {
            var_a0 = (M2C_FIELD(arg2, s32 *, 0x4C) & 0x400) ? 0x480000 : 0x380000;
        }
        var_v1 = var_a0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_00001CB8(s32 arg0, s32 arg1, void *arg2) {
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    struct Unk_func_00001CB8_var_a2 *var_a2;

    var_a2 = arg2;
    var_a3 = arg1 < 0x10E;
    var_a1 = 0;
    if (arg0 == 1) {
        var_s0 = 0x380000;
        if (var_a3 == 0) {
            var_a3 = var_a2->unk4C;
            var_a2 = (void *) (var_a3 & 0x400);
            var_s0 = (var_a2 != NULL) ? 0x480000 : 0x380000;
        }
        Kprintf("block size:%x\n", var_s0, (s32) var_a2, var_a3);
        var_a1 = var_s0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00001D1C);

INCLUDE_ASM("nonmatchings/utility", func_00001DC8);

INCLUDE_ASM("nonmatchings/utility", func_00001E4C);

INCLUDE_ASM("nonmatchings/utility", func_00001EB4);

INCLUDE_ASM("nonmatchings/utility", func_00001F5C);

INCLUDE_ASM("nonmatchings/utility", func_00002004);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_000020D4);

INCLUDE_ASM("nonmatchings/utility", func_00002120);

INCLUDE_ASM("nonmatchings/utility", func_00002170);
#endif

#if FW_VERSION == 282
s32 func_0000207C(void) {
    D_00007F4C.unk0 = 0;
    D_00007F4C.unk4 = -1;
    D_00007F4C.unk8 = -1;
    D_00007F4C.unkC = -1;
    D_00007F4C.unk10 = -1;
    D_00007F4C.unk14 = -1;
    D_00007F4C.unk18 = -1;
    D_00007F4C.unk1C = -1;
    D_00007F4C.unk20 = -1;
    D_00007F4C.unk24 = -1;
    D_00007F4C.unk28 = -1;
    D_00007F4C.unk2C = -1;
    D_00007F4C.unk30 = -1;
    D_00007F4C.unk34 = -1;
    D_00007F4C.unk38 = -1;
    D_00007F4C.unk3C = -1;
    D_00007F4C.unk48 = -1;
    D_00007F4C.unk4C = -1;
    D_00007F4C.unk50 = -1;
    D_00007F4C.unk54 = -1;
    D_00007F4C.unk58 = -1;
    D_00007F4C.unk5C = -1;
    D_00007F4C.unk60 = -1;
    D_00007F4C.unk64 = -1;
    D_00007F4C.unk68 = -1;
    D_00007F4C.unk6C = -1;
    D_00007F4C.unk70 = -1;
    D_00007F4C.unk74 = -1;
    D_00007F4C.unk78 = -1;
    D_00007F4C.unk7C = -1;
    D_00007F4C.unk80 = -1;
    D_00007F4C.unk84 = -1;
    D_00007F4C.unk88 = -1;
    D_00007F4C.unk8C = -1;
    D_00007F4C.unkA8 = -1;
    D_00007F4C.unk90 = -1;
    D_00007F4C.unk94 = -1;
    D_00007F4C.unk98 = -1;
    D_00007F4C.unk9C = -1;
    D_00007F4C.unkA0 = -1;
    D_00007F4C.unkA4 = -1;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadNetModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadNetModule);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00002258);

INCLUDE_ASM("nonmatchings/utility", func_00002298);

INCLUDE_ASM("nonmatchings/utility", func_000023B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_000022BC);

INCLUDE_ASM("nonmatchings/utility", func_000023C8);

INCLUDE_ASM("nonmatchings/utility", func_000024A4);

INCLUDE_ASM("nonmatchings/utility", func_00002748);

INCLUDE_ASM("nonmatchings/utility", func_00002910);

INCLUDE_ASM("nonmatchings/utility", func_00002B60);

INCLUDE_ASM("nonmatchings/utility", func_00002CFC);

INCLUDE_ASM("nonmatchings/utility", func_00002DCC);

INCLUDE_ASM("nonmatchings/utility", func_00002E80);

INCLUDE_ASM("nonmatchings/utility", func_00002F50);

INCLUDE_ASM("nonmatchings/utility", func_00003004);

INCLUDE_ASM("nonmatchings/utility", func_00003110);

INCLUDE_ASM("nonmatchings/utility", func_000031EC);

INCLUDE_ASM("nonmatchings/utility", func_000032F8);

INCLUDE_ASM("nonmatchings/utility", func_000033D4);

INCLUDE_ASM("nonmatchings/utility", func_00003474);

s32 func_00003520(void) {
    D_00007FF8.unk18 = -1;
    D_00007FF8.unk0 = 0;
    D_00007FF8.unk4 = -1;
    D_00007FF8.unk8 = -1;
    D_00007FF8.unkC = -1;
    D_00007FF8.unk10 = -1;
    D_00007FF8.unk14 = -1;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadUsbModule);
#endif

#if FW_VERSION == 282
s32 sceUtilityLoadUsbModule(s32 arg0) {
    s32 var_v1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v1 = 0x80110E01;
    if ((u32) (arg0 - 1) < 5U) {
        var_v1 = func_000036F8(arg0);
    }
    setK1(temp_s0);
    return var_v1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadUsbModule);
#endif

#if FW_VERSION == 282
s32 sceUtilityUnloadUsbModule(s32 arg0) {
    s32 var_v1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v1 = 0x80110E01;
    if ((u32) (arg0 - 1) < 5U) {
        var_v1 = func_000035F0(arg0);
    }
    setK1(temp_s0);
    return var_v1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_0000258C);

INCLUDE_RODATA("nonmatchings/utility", D_00006B1C);

INCLUDE_RODATA("nonmatchings/utility", D_00006B34);

INCLUDE_RODATA("nonmatchings/utility", D_00006B4C);

INCLUDE_RODATA("nonmatchings/utility", D_00006B64);

INCLUDE_RODATA("nonmatchings/utility", D_00006B88);

INCLUDE_RODATA("nonmatchings/utility", D_00006BA4);

INCLUDE_RODATA("nonmatchings/utility", D_00006BC4);

INCLUDE_RODATA("nonmatchings/utility", D_00006BEC);

INCLUDE_RODATA("nonmatchings/utility", D_00006C14);

INCLUDE_RODATA("nonmatchings/utility", D_00006C3C);

INCLUDE_RODATA("nonmatchings/utility", D_00006C54);

INCLUDE_RODATA("nonmatchings/utility", D_00006C70);

INCLUDE_RODATA("nonmatchings/utility", D_00006C8C);

INCLUDE_RODATA("nonmatchings/utility", D_00006CA8);

INCLUDE_RODATA("nonmatchings/utility", D_00006CC8);

INCLUDE_RODATA("nonmatchings/utility", D_00006CE0);

INCLUDE_RODATA("nonmatchings/utility", D_00006CFC);

INCLUDE_RODATA("nonmatchings/utility", D_00006D1C);

INCLUDE_RODATA("nonmatchings/utility", D_00006D38);

INCLUDE_RODATA("nonmatchings/utility", D_00006D50);

INCLUDE_RODATA("nonmatchings/utility", D_00006D6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_000035F0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_000076A4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_000076BC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_000076D4);

INCLUDE_RODATA("nonmatchings/utility", D_000076EC);

INCLUDE_RODATA("nonmatchings/utility", D_00007704);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/utility", D_00006DE4);

INCLUDE_RODATA("nonmatchings/utility", D_00006DFC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_0000771C);

INCLUDE_ASM("nonmatchings/utility", func_000036F8);

INCLUDE_ASM("nonmatchings/utility", func_000037F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00003890);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00002708);

INCLUDE_ASM("nonmatchings/utility", func_000027B4);

INCLUDE_ASM("nonmatchings/utility", func_00002810);

INCLUDE_ASM("nonmatchings/utility", func_0000285C);

INCLUDE_ASM("nonmatchings/utility", func_000028D8);
#endif

#if FW_VERSION == 282
s32 func_000039B0(void) {
    memset(&D_00008014, 0xFF, 0x34);
    D_00008014 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadAvModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadAvModule);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00003A78);

INCLUDE_ASM("nonmatchings/utility", func_00003B3C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_00007790);

INCLUDE_RODATA("nonmatchings/utility", D_000077A8);

INCLUDE_RODATA("nonmatchings/utility", D_000077C4);

INCLUDE_RODATA("nonmatchings/utility", D_000077E4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_000029E4);

INCLUDE_ASM("nonmatchings/utility", func_00002B84);

INCLUDE_ASM("nonmatchings/utility", func_00002C48);

INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadModule);

INCLUDE_ASM("nonmatchings/utility", func_00002DAC);

s32 func_00002E88(void *arg0) {
    void *sp0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v1 >= 0) {
        sceKernelStopModule(temp_v1, 0U, NULL, &sp0, NULL);
        sceKernelUnloadModule(M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 8) = -1;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_00002EE0);

s32 func_00002FA0(void *arg0) {
    void *sp0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v1 >= 0) {
        sceKernelStopModule(temp_v1, 0U, NULL, &sp0, NULL);
        sceKernelUnloadModule(M2C_FIELD(arg0, s32 *, 8));
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v1_2 >= 0) {
        sceKernelFreePartitionMemory(temp_v1_2);
    }
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_000077F8);

INCLUDE_ASM("nonmatchings/utility", func_00003C38);

INCLUDE_ASM("nonmatchings/utility", func_00003D0C);
#endif

#if FW_VERSION >= 282
s32 sceUtilityGameSharingInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000C4(3, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityGameSharingShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000550(3);
    setK1(temp_s0);
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityGameSharingUpdate);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityGameSharingGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityGameSharingGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000008F8(3);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceNetplayDialogInitStart);

INCLUDE_ASM("nonmatchings/utility", sceNetplayDialogShutdownStart);

INCLUDE_ASM("nonmatchings/utility", sceNetplayDialogUpdate);

INCLUDE_ASM("nonmatchings/utility", sceNetplayDialogGetStatus);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/utility", func_00001410);

INCLUDE_ASM("nonmatchings/utility", func_0000145C);

INCLUDE_ASM("nonmatchings/utility", func_000014A0);

INCLUDE_ASM("nonmatchings/utility", func_000014EC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityNetconfInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityNetconfInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000B4(4, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityNetconfShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityNetconfShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000004D4(4);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceUtilityGameSharingGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(3);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityNetconfInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000C4(4, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityNetconfShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000550(4);
    setK1(temp_s0);
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityNetconfUpdate);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityNetconfGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityNetconfGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000008F8(4);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilitySavedataInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000B4(1, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilitySavedataShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000004D4(1);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceUtilityNetconfGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(4);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilitySavedataInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000C4(1, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilitySavedataShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000550(1);
    setK1(temp_s0);
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataUpdate);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilitySavedataGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000008F8(1);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataErrInitStart);

INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataErrShutdownStart);

INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataErrUpdate);

INCLUDE_ASM("nonmatchings/utility", sceUtilitySavedataErrGetStatus);

INCLUDE_ASM("nonmatchings/utility", sceUtilityMsgDialogInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityMsgDialogInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000B4(5, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityMsgDialogShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityMsgDialogShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000004D4(5);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceUtilitySavedataGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(1);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityMsgDialogInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000C4(5, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityMsgDialogShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000550(5);
    setK1(temp_s0);
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityMsgDialogUpdate);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityMsgDialogGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityMsgDialogGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000008F8(5);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceUtilityMsgDialogAbort(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000A74(5);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityOskInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityOskInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000B4(6, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityOskShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityOskShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000004D4(6);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceUtilityMsgDialogGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(5);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityMsgDialogAbort(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000B0C(5);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityOskInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000000C4(6, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityOskShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000550(6);
    setK1(temp_s0);
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityOskUpdate);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityOskGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityOskGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000008F8(6);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDNASInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityDNASInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000B4(7, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDNASShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityDNASShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000004D4(7);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityDNASUpdate);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityDNASGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityDNASGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000008F8(7);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAuthDialogInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityAuthDialogInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000B4(8, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAuthDialogShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityAuthDialogShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000004D4(8);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityAuthDialogUpdate);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityAuthDialogGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityAuthDialogGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000008F8(8);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 271
void sceUtilityInstallInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000B4(9, arg0);
    setK1(temp_s0);
}

void sceUtilityInstallShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000004D4(9);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityInstallUpdate);

void sceUtilityInstallGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000008F8(9);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerInitStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityHtmlViewerInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000011C4(1, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerShutdownStart);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityHtmlViewerShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_0000135C(1);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerUpdate);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerGetStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityHtmlViewerGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00001654(1);
    setK1(temp_s0);
    return temp_v0;
}

void sceNetplayDialogInitStart(void) {

}

void sceNetplayDialogShutdownStart(void) {

}

void sceNetplayDialogUpdate(void) {

}

void sceNetplayDialogGetStatus(void) {

}

void sceUtilitySavedataErrInitStart(void) {

}

void sceUtilitySavedataErrShutdownStart(void) {

}

void sceUtilitySavedataErrUpdate(void) {

}

void sceUtilitySavedataErrGetStatus(void) {

}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00001AD0);

INCLUDE_ASM("nonmatchings/utility", func_00001AFC);
#endif

#if FW_VERSION >= 282
s32 sceUtilityOskGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(6);
    setK1(temp_s0);
    return temp_v0;
}

void sceUtilityDNASInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(7, arg0);
    setK1(temp_s0);
}

void sceUtilityDNASShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(7);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityDNASUpdate);

void sceUtilityDNASGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(7);
    setK1(temp_s0);
}

void sceUtilityAuthDialogInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(8, arg0);
    setK1(temp_s0);
}

void sceUtilityAuthDialogShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(8);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityAuthDialogUpdate);

void sceUtilityAuthDialogGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(8);
    setK1(temp_s0);
}

void sceUtilityInstallInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(9, arg0);
    setK1(temp_s0);
}

void sceUtilityInstallShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(9);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityInstallUpdate);

void sceUtilityInstallGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(9);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 350
void sceUtility_private_07D9E317(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(0xA, arg0);
    setK1(temp_s0);
}

void sceUtility_private_4F79BFF8(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(0xA);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_830ECEE0);

void sceUtility_private_6C606BFA(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(0xA);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void sceUtilityDdHelperInitStart(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(0xA, arg0);
    setK1(temp_s0);
}

void sceUtilityDdHelperShutdownStart(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(0xA);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityDdHelperUpdate);

void sceUtilityDdHelperGetStatus(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(0xA);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 282
s32 sceUtilityHtmlViewerInitStart(void *arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_000014FC(1, (s32) arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUtilityHtmlViewerShutdownStart(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_0000171C(1);
    setK1(temp_s0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerUpdate);

s32 sceUtilityHtmlViewerGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00001A3C(1);
    setK1(temp_s0);
    return temp_v0;
}

void sceNetplayDialogInitStart(void) {
}

void sceNetplayDialogShutdownStart(void) {
}

void sceNetplayDialogUpdate(void) {
}

void sceNetplayDialogGetStatus(void) {
}

void sceUtilitySavedataErrInitStart(void) {
}

void sceUtilitySavedataErrShutdownStart(void) {
}

void sceUtilitySavedataErrUpdate(void) {
}

void sceUtilitySavedataErrGetStatus(void) {
}
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilitySetSystemParamInt);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/utility", D_00007514);

INCLUDE_RODATA("nonmatchings/utility", D_0000752C);

INCLUDE_RODATA("nonmatchings/utility", D_00007548);

INCLUDE_RODATA("nonmatchings/utility", D_00007568);

INCLUDE_RODATA("nonmatchings/utility", D_0000757C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_000065B0);

INCLUDE_RODATA("nonmatchings/utility", D_000065CC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySetSystemParamString);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_00004C74);

INCLUDE_RODATA("nonmatchings/utility", D_00004C8C);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_0000782C);

INCLUDE_RODATA("nonmatchings/utility", D_00007848);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_00007854);

INCLUDE_RODATA("nonmatchings/utility", D_0000786C);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityGetSystemParamInt);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000038DC);

INCLUDE_ASM("nonmatchings/utility", func_00003A78);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtilityGetSystemParamString);

INCLUDE_ASM("nonmatchings/utility", func_00001EA4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00004764);

INCLUDE_ASM("nonmatchings/utility", func_00004900);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySetSystemParamString);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/utility", D_00006F74);

INCLUDE_RODATA("nonmatchings/utility", D_00006F88);

INCLUDE_RODATA("nonmatchings/utility", D_00006F94);

INCLUDE_RODATA("nonmatchings/utility", D_00006FA4);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_00007914);

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtilityGetSystemParamString(s32 arg0, void *arg1, u32 arg2) {
    s32 var_a4;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_a4 = 0x80110103;
    if (arg0 == 1) {
        var_a4 = func_00003BF8((s32) "/CONFIG/SYSTEM", (s32) "owner_name", (s32) arg1, (s32) arg2);
    }
    setK1(temp_s0);
    return var_a4;
}

INCLUDE_ASM("nonmatchings/utility", func_00003BF8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000020C0);

INCLUDE_ASM("nonmatchings/utility", func_00002320);

INCLUDE_ASM("nonmatchings/utility", func_00002468);

INCLUDE_ASM("nonmatchings/utility", func_00002494);

INCLUDE_ASM("nonmatchings/utility", func_000024BC);

INCLUDE_ASM("nonmatchings/utility", func_0000252C);

INCLUDE_ASM("nonmatchings/utility", func_00002558);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/utility", func_00002584);

INCLUDE_ASM("nonmatchings/utility", func_0000277C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002870);
#endif

#if FW_VERSION >= 282
s32 sceUtilityGetSystemParamString(s32 arg0, void *arg1, u32 arg2) {
    s32 var_a4;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_a4 = 0x80110103;
    if (arg0 == 1) {
        var_a4 = func_00004A80((s32) "/CONFIG/SYSTEM", (s32) "owner_name", (s32) arg1, (s32) arg2);
    }
    setK1(temp_s0);
    return var_a4;
}

INCLUDE_ASM("nonmatchings/utility", func_00004A80);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityCheckNetParam);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_636A8F8F);

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_854ACDD6);

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_D6F3CC68);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000029D8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityCreateNetParam);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002B08);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityDeleteNetParam);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002C38);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityCopyNetParam);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002E28);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityGetNetParam);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_D7BB6FFA);

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_3073F954);

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_FF13EE50);

INCLUDE_ASM("nonmatchings/utility", sceUtility_ECE1D3E5);

INCLUDE_ASM("nonmatchings/utility", sceUtility_28D35634);

INCLUDE_ASM("nonmatchings/utility", sceUtility_70267ADF);

INCLUDE_ASM("nonmatchings/utility", sceUtility_EF3582B2);

void sceUtility_netparam_internal_77859541(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00005260((s32) &D_00007980, (s32) &D_000079A0, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilityGetNetParamInt);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00003004);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilitySetNetParam);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/utility", sceUtilitySetNetParamInt);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00004BF8);

INCLUDE_ASM("nonmatchings/utility", func_00004D40);

INCLUDE_ASM("nonmatchings/utility", sceUtilitySetNetParamLatestID);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilitySetNetParamLatestID(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000043D8((s32) &D_000095B8, (s32) &D_000095D8, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtilityGetNetParamLatestID);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtilityGetNetParamLatestID(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000044D4((s32) &D_000095B8, (s32) &D_000095D8, arg0);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", func_00004110);

INCLUDE_ASM("nonmatchings/utility", func_00004174);

s32 func_000041CC(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = func_00005230();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        var_s0 = func_000046B8(M2C_FIELD(arg0, s32 *, 0));
    }
    func_0000532C();
    func_000052B0();
    M2C_FIELD(arg0, s32 *, 4) = var_s0;
    return var_s0;
}

INCLUDE_ASM("nonmatchings/utility", func_00004224);

INCLUDE_ASM("nonmatchings/utility", func_000042D8);

INCLUDE_ASM("nonmatchings/utility", func_00004354);

INCLUDE_ASM("nonmatchings/utility", func_000043D8);

INCLUDE_ASM("nonmatchings/utility", func_000044D4);

INCLUDE_ASM("nonmatchings/utility", func_00004644);

INCLUDE_ASM("nonmatchings/utility", func_000046B8);

INCLUDE_ASM("nonmatchings/utility", func_0000470C);

INCLUDE_ASM("nonmatchings/utility", func_0000479C);

INCLUDE_ASM("nonmatchings/utility", func_000048DC);

void func_00004928(void) {
    func_000052FC();
}

INCLUDE_ASM("nonmatchings/utility", func_00004944);

INCLUDE_ASM("nonmatchings/utility", func_00004988);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000031B8);

INCLUDE_ASM("nonmatchings/utility", func_000031E4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00005068);

INCLUDE_ASM("nonmatchings/utility", func_000050D8);

INCLUDE_ASM("nonmatchings/utility", func_00005104);

INCLUDE_RODATA("nonmatchings/utility", D_00009598);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_000095B8);

INCLUDE_RODATA("nonmatchings/utility", D_000095D8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_00006730);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void sceUtilitySetNetParamLatestID(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00005260((s32) &D_00007980, (s32) &D_000079A0, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 282
void sceUtilityGetNetParamLatestID(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_0000535C((s32) &D_00007980, (s32) &D_000079A0, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00004F98);
#endif

#if FW_VERSION >= 300
s32 func_00004F98(void *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    temp_v0 = func_000060B4();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_000048D4(M2C_FIELD(arg0, s32 *, 0), &sp0, 0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_00004C00(&sp0);
        }
    }
    func_0000613C();
    M2C_FIELD(arg0, s32 *, 4) = var_s0;
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00004FFC);

s32 func_00005054(struct Unk_func_00005054_0 *arg0) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = func_000060B4();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        var_s0 = func_0000553C(arg0->unk0);
    }
    func_000061C0();
    func_0000613C();
    arg0->unk4 = var_s0;
    return var_s0;
}

INCLUDE_ASM("nonmatchings/utility", func_000050AC);

INCLUDE_ASM("nonmatchings/utility", func_00005160);

INCLUDE_ASM("nonmatchings/utility", func_000051DC);

INCLUDE_ASM("nonmatchings/utility", func_00005260);

INCLUDE_ASM("nonmatchings/utility", func_0000535C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/utility", func_00004BD0);

INCLUDE_RODATA("nonmatchings/utility", D_000076C4);

INCLUDE_RODATA("nonmatchings/utility", D_000076E4);

INCLUDE_RODATA("nonmatchings/utility", D_000076F0);

INCLUDE_RODATA("nonmatchings/utility", D_00007980);

INCLUDE_RODATA("nonmatchings/utility", D_000079A0);

INCLUDE_RODATA("nonmatchings/utility", D_000079AC);

INCLUDE_ASM("nonmatchings/utility", func_00004CE0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_000048D4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_000054C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_0000553C);

INCLUDE_ASM("nonmatchings/utility", func_00005590);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00004B24);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00005620);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00005760);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00004C00);

INCLUDE_ASM("nonmatchings/utility", func_00004C30);
#endif

#if FW_VERSION >= 282
void func_000057AC(void) {
    func_00006190();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00006190);

INCLUDE_ASM("nonmatchings/utility", func_00004D3C);

INCLUDE_ASM("nonmatchings/utility", func_000051F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_000057C8);

INCLUDE_ASM("nonmatchings/utility", func_0000580C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/utility", D_00007980);

INCLUDE_RODATA("nonmatchings/utility", D_000079A0);

INCLUDE_RODATA("nonmatchings/utility", D_000079AC);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_000079CC);

INCLUDE_RODATA("nonmatchings/utility", D_000079D8);

INCLUDE_RODATA("nonmatchings/utility", D_000079E0);

INCLUDE_RODATA("nonmatchings/utility", D_000079EC);

INCLUDE_RODATA("nonmatchings/utility", D_000079F4);

INCLUDE_RODATA("nonmatchings/utility", D_00007A04);

INCLUDE_RODATA("nonmatchings/utility", D_00007A10);

INCLUDE_RODATA("nonmatchings/utility", D_00007A18);

INCLUDE_RODATA("nonmatchings/utility", D_00007A28);

INCLUDE_RODATA("nonmatchings/utility", D_00007A34);

INCLUDE_RODATA("nonmatchings/utility", D_00007A40);

INCLUDE_RODATA("nonmatchings/utility", D_00007A50);

INCLUDE_RODATA("nonmatchings/utility", D_00007A5C);

INCLUDE_RODATA("nonmatchings/utility", D_00007A68);

INCLUDE_RODATA("nonmatchings/utility", D_00007A78);

INCLUDE_RODATA("nonmatchings/utility", D_00007A8C);

INCLUDE_RODATA("nonmatchings/utility", D_00007A9C);

INCLUDE_RODATA("nonmatchings/utility", D_00007AA4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_000096C4);

INCLUDE_RODATA("nonmatchings/utility", D_000096D4);

INCLUDE_RODATA("nonmatchings/utility", D_000096EC);

INCLUDE_RODATA("nonmatchings/utility", D_00009700);

INCLUDE_RODATA("nonmatchings/utility", D_00009710);

INCLUDE_RODATA("nonmatchings/utility", D_00009718);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_00007AAC);

INCLUDE_RODATA("nonmatchings/utility", D_00007ABC);

INCLUDE_RODATA("nonmatchings/utility", D_00007AD4);

INCLUDE_RODATA("nonmatchings/utility", D_00007AE8);

INCLUDE_RODATA("nonmatchings/utility", D_00007AF8);

INCLUDE_RODATA("nonmatchings/utility", D_00007B00);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_00007B10);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/utility", D_000071C8);

INCLUDE_RODATA("nonmatchings/utility", D_000071DC);

INCLUDE_RODATA("nonmatchings/utility", D_000071F0);

INCLUDE_RODATA("nonmatchings/utility", D_00007200);

INCLUDE_RODATA("nonmatchings/utility", D_00007350);

INCLUDE_RODATA("nonmatchings/utility", D_000073A4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_00006898);

INCLUDE_RODATA("nonmatchings/utility", D_000068B8);

INCLUDE_ASM("nonmatchings/utility", func_00004A04);

INCLUDE_ASM("nonmatchings/utility", func_00004B14);

INCLUDE_ASM("nonmatchings/utility", func_00004F20);

INCLUDE_ASM("nonmatchings/utility", func_00004F98);

INCLUDE_ASM("nonmatchings/utility", func_00004FDC);

INCLUDE_ASM("nonmatchings/utility", func_000050A4);

INCLUDE_ASM("nonmatchings/utility", func_000051C0);

INCLUDE_ASM("nonmatchings/utility", func_00005230);
#endif

#if FW_VERSION == 271
s32 func_000052B0(void) {
    if (D_00007DAC > 0) {
        sceRegFlushRegistry(D_00006D70);
        sceRegCloseRegistry(D_00006D70);
        D_00007DAC -= 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000052B0(void) {
    if (D_00006D6C > 0) {
        sceRegFlushRegistry(D_00006D70);
        sceRegCloseRegistry(D_00006D70);
        D_00006D6C = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000052FC);

s32 func_0000532C(void) {
    sceRegFlushRegistry(D_00006D70);
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_0000320C);

INCLUDE_ASM("nonmatchings/utility", func_00003288);

INCLUDE_ASM("nonmatchings/utility", func_00003320);

INCLUDE_ASM("nonmatchings/utility", func_0000335C);

INCLUDE_ASM("nonmatchings/utility", func_0000355C);

INCLUDE_ASM("nonmatchings/utility", func_0000360C);

INCLUDE_ASM("nonmatchings/utility", func_000036CC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00005720);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_0000370C);

INCLUDE_ASM("nonmatchings/utility", func_00003794);

INCLUDE_ASM("nonmatchings/utility", func_00003D1C);

INCLUDE_ASM("nonmatchings/utility", func_00003E14);

INCLUDE_ASM("nonmatchings/utility", func_00003ED0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00006338);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00003F88);

INCLUDE_ASM("nonmatchings/utility", func_00004034);

INCLUDE_ASM("nonmatchings/utility", func_00004088);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00004158);
#endif

#if FW_VERSION < 201
s32 func_00004158(void) {
    if (D_00005134 > 0) {
        sceRegFlushRegistry(D_00005138);
        sceRegCloseRegistry(D_00005138);
        D_00005134 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000041B0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_000041EC);
#endif

#if FW_VERSION < 201
s32 func_000041EC(void) {
    sceRegFlushRegistry(D_00005138);
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00004220);

INCLUDE_ASM("nonmatchings/utility", func_00004318);

INCLUDE_ASM("nonmatchings/utility", func_0000436C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_0000682C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000043F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00006938);

INCLUDE_ASM("nonmatchings/utility", func_00006A44);

INCLUDE_ASM("nonmatchings/utility", func_00006B60);

INCLUDE_ASM("nonmatchings/utility", func_00006BCC);

INCLUDE_ASM("nonmatchings/utility", func_00006CDC);

INCLUDE_ASM("nonmatchings/utility", func_00006E38);

INCLUDE_ASM("nonmatchings/utility", func_00007060);

INCLUDE_ASM("nonmatchings/utility", func_0000730C);

INCLUDE_ASM("nonmatchings/utility", func_00007534);

INCLUDE_ASM("nonmatchings/utility", func_000077E4);

INCLUDE_ASM("nonmatchings/utility", func_000078CC);

INCLUDE_ASM("nonmatchings/utility", func_000079F0);

INCLUDE_ASM("nonmatchings/utility", func_00007AD8);

INCLUDE_ASM("nonmatchings/utility", func_00007BFC);

INCLUDE_ASM("nonmatchings/utility", func_00007D0C);

INCLUDE_ASM("nonmatchings/utility", func_00007E68);

INCLUDE_ASM("nonmatchings/utility", func_00007F78);

INCLUDE_ASM("nonmatchings/utility", func_000080D4);

INCLUDE_ASM("nonmatchings/utility", sceUtilityLoadNetModule);

INCLUDE_ASM("nonmatchings/utility", sceUtilityUnloadNetModule);

INCLUDE_ASM("nonmatchings/utility", func_000084B4);

INCLUDE_ASM("nonmatchings/utility", func_000084E0);

INCLUDE_ASM("nonmatchings/utility", func_00008508);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_0000864C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00005378);

void func_000053DC(s32 arg0) {
    sceRegRemoveCategory(D_00006D70, arg0, 0);
}

INCLUDE_ASM("nonmatchings/utility", func_00005404);

void func_000054B0(void) {
    D_00006D74 = 0;
}

s32 func_000054BC(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00006D74 != 0) {
        var_v0 = M2C_FIELD(D_00006D74, s32 *, 0xC);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/utility", func_000054D8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00008670);

INCLUDE_ASM("nonmatchings/utility", func_000086B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/utility", D_00009B08);

INCLUDE_RODATA("nonmatchings/utility", D_00009B14);

INCLUDE_RODATA("nonmatchings/utility", D_00009B20);

INCLUDE_RODATA("nonmatchings/utility", D_00009B2C);

INCLUDE_RODATA("nonmatchings/utility", D_00009B38);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/utility", D_00007B14);

INCLUDE_RODATA("nonmatchings/utility", D_00007B34);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/utility", D_00007438);

INCLUDE_RODATA("nonmatchings/utility", D_00007440);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00005888);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_00005454);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00005998);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/utility", func_00005DA4);

INCLUDE_ASM("nonmatchings/utility", func_00005E1C);

INCLUDE_ASM("nonmatchings/utility", func_00005E60);

INCLUDE_ASM("nonmatchings/utility", func_00005F28);

INCLUDE_ASM("nonmatchings/utility", func_00006044);

INCLUDE_ASM("nonmatchings/utility", func_000060B4);

s32 func_0000613C(void) {
    if (D_0000804C > 0) {
        sceRegFlushRegistry(D_00008050);
        sceRegCloseRegistry(D_00008050);
        D_0000804C -= 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/utility", func_000058DC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00006190);
#endif

#if FW_VERSION >= 282
s32 func_000061C0(void) {
    sceRegFlushRegistry(D_00008050);
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_000061E8);

INCLUDE_ASM("nonmatchings/utility", func_0000620C);

void func_00006270(s32 arg0) {
    sceRegRemoveCategory(D_00008050, arg0, 0);
}

INCLUDE_ASM("nonmatchings/utility", func_00006298);

void func_00006344(void) {
    D_00008054 = 0;
}

s32 func_00006350(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00008054 != 0) {
        var_v0 = D_00008054->unkC;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/utility", func_0000636C);

INCLUDE_RODATA("nonmatchings/utility", D_00007BB4);

INCLUDE_RODATA("nonmatchings/utility", D_00007BC0);

INCLUDE_RODATA("nonmatchings/utility", D_00007BCC);

INCLUDE_RODATA("nonmatchings/utility", D_00007BD8);

INCLUDE_RODATA("nonmatchings/utility", D_00007BE4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/utility", D_00007510);
#endif
