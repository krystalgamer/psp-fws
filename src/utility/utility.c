/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "utility_decls.h"

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", module_start);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_00006C98);

INCLUDE_ASM("nonmatchings/utility", sceUtility_driver_F062AEA6);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000000B4);

INCLUDE_ASM("nonmatchings/utility", func_000004D4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4ABA7FF9);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_A5168A5D);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_970F9C89);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_00000780);

s32 module_start(void) {
    sceUtility_driver_F062AEA6();
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_driver_20C68C34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_driver_20C68C34(void) {
    func_000015AC();
    sceSysEventForKernel_D7D3FDCD(&D_00006980);
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

s32 sceUtility_private_680C0EA8(s32 arg0) {
    D_00006C34 = arg0;
    return 0;
}

s32 sceUtility_private_B222E887(void) {
    return D_00006C2C;
}

s32 sceUtility_private_4F2206BC(void) {
    return D_00006C3C;
}

s32 sceUtility_private_EF5BC2D1(void) {
    return D_00006C40;
}

s32 sceUtility_private_E01FE32A(void) {
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
s32 sceUtility_private_6F923BD3(s32 arg0) {
    D_00006C20 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_7635200E);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_3CEAE1DF);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_56BEDCA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E921B59E);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_06AE20E5);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000001B8);
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

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_00948E27);
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

INCLUDE_ASM("nonmatchings/utility", func_00000988);

INCLUDE_ASM("nonmatchings/utility", func_00000A78);

INCLUDE_ASM("nonmatchings/utility", func_00000C08);

INCLUDE_ASM("nonmatchings/utility", func_00000D08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_17CB4D96);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_EE7AC503);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_5FF96ED3);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_9C9DD5BC);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4405BA38);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_1DFA62EF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_71269BEF);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_B96C67EC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_680C0EA8);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_B222E887);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4F2206BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_EF5BC2D1);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E01FE32A);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_19461966);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_6F923BD3);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_7635200E);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_000000C4);

INCLUDE_ASM("nonmatchings/utility", func_00000550);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4ABA7FF9);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_A5168A5D);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_3CEAE1DF);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_56BEDCA4);

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
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_97F922A3);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_97F922A3(s32 arg0) {
    D_00006C70 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_463EA95E);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_463EA95E(void) {
    return D_00006C6C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_AB46A24F);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_AB46A24F(void) {
    return D_00006C74;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4B677BA1);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_4B677BA1(void) {
    return D_00006C78;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_75FF798C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_75FF798C(void) {
    return D_00006C7C;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_9BAE7DCE);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceUtility_private_9BAE7DCE(s32 arg0) {
    D_00006C64 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_00948E27);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_4ACD6532);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_private_4ACD6532(void) {
    func_0000197C();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_976F7805);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E542E9D8);
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
        KDebugForKernel_84F370BC("block size:%x\n", var_s0, (s32) var_a2, var_a3);
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
INCLUDE_ASM("nonmatchings/utility", sceUtility_1579A159);

INCLUDE_ASM("nonmatchings/utility", sceUtility_64D50C56);

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

s32 sceUtility_0D5BC6D2(s32 arg0) {
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

s32 sceUtility_F64910F0(s32 arg0) {
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

INCLUDE_ASM("nonmatchings/utility", sceUtility_C629AF26);

INCLUDE_ASM("nonmatchings/utility", sceUtility_F7D8D092);

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

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_private_970F9C89);

INCLUDE_ASM("nonmatchings/utility", func_0000094C);

s32 module_start(void) {
    sceUtility_driver_F062AEA6();
    return 0;
}

s32 sceUtility_driver_20C68C34(void) {
    func_00001994();
    sceSysEventForKernel_D7D3FDCD(&D_00007BF0);
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_00000A4C);

INCLUDE_ASM("nonmatchings/utility", func_00000AC4);

INCLUDE_ASM("nonmatchings/utility", func_00000B0C);

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

s32 sceUtility_private_680C0EA8(s32 arg0) {
    D_00007EA4 = arg0;
    return 0;
}

s32 sceUtility_private_B222E887(void) {
    return D_00007E9C;
}

s32 sceUtility_private_4F2206BC(void) {
    return D_00007EAC;
}

s32 sceUtility_private_EF5BC2D1(void) {
    return D_00007EB0;
}

s32 sceUtility_private_E01FE32A(void) {
    return D_00007EB4;
}

s32 sceUtility_private_5BA71568(void) {
    return D_00007EA8;
}

s32 sceUtility_private_6F923BD3(s32 arg0) {
    D_00007E90 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_7635200E);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_3CEAE1DF);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_56BEDCA4);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E921B59E);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_06AE20E5);

INCLUDE_RODATA("nonmatchings/utility", D_00007020);

INCLUDE_RODATA("nonmatchings/utility", D_0000704C);

INCLUDE_ASM("nonmatchings/utility", func_00000E74);

INCLUDE_ASM("nonmatchings/utility", func_0000132C);

INCLUDE_ASM("nonmatchings/utility", func_00001484);

INCLUDE_ASM("nonmatchings/utility", func_000014FC);

INCLUDE_ASM("nonmatchings/utility", func_0000171C);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_00948E27);

INCLUDE_ASM("nonmatchings/utility", func_00001930);

s32 func_00001994(void) {
    if (D_00007EEC > 0) {
        sceKernelDeleteEventFlag(D_00007EEC);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_000019C4);

INCLUDE_ASM("nonmatchings/utility", func_00001A3C);

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

s32 sceUtility_private_97F922A3(s32 arg0) {
    D_00007EF4 = arg0;
    return 0;
}

s32 sceUtility_private_463EA95E(void) {
    return D_00007EF0;
}

s32 sceUtility_private_AB46A24F(void) {
    return D_00007EF8;
}

s32 sceUtility_private_4B677BA1(void) {
    return D_00007EFC;
}

s32 sceUtility_private_75FF798C(void) {
    return D_00007F00;
}

s32 sceUtility_private_9BAE7DCE(s32 arg0) {
    D_00007EE8 = arg0;
    return 0;
}

void sceUtility_private_4ACD6532(void) {
    func_00001DC8();
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_976F7805);

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_E542E9D8);

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
        KDebugForKernel_84F370BC("block size:%x\n", var_s0, (s32) var_a2, var_a3);
        var_a1 = var_s0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/utility", func_00001D1C);

INCLUDE_ASM("nonmatchings/utility", func_00001DC8);

INCLUDE_ASM("nonmatchings/utility", func_00001E4C);

INCLUDE_ASM("nonmatchings/utility", func_00001EB4);

INCLUDE_ASM("nonmatchings/utility", func_00001F5C);

INCLUDE_ASM("nonmatchings/utility", func_00002004);

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

INCLUDE_ASM("nonmatchings/utility", sceUtility_1579A159);

INCLUDE_ASM("nonmatchings/utility", sceUtility_64D50C56);

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

s32 sceUtility_0D5BC6D2(s32 arg0) {
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

s32 sceUtility_F64910F0(s32 arg0) {
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

INCLUDE_ASM("nonmatchings/utility", func_000035F0);

INCLUDE_RODATA("nonmatchings/utility", D_000076A4);

INCLUDE_RODATA("nonmatchings/utility", D_000076BC);

INCLUDE_RODATA("nonmatchings/utility", D_000076D4);

INCLUDE_RODATA("nonmatchings/utility", D_000076EC);

INCLUDE_RODATA("nonmatchings/utility", D_00007704);

INCLUDE_RODATA("nonmatchings/utility", D_0000771C);

INCLUDE_ASM("nonmatchings/utility", func_000036F8);

INCLUDE_ASM("nonmatchings/utility", func_000037F0);

INCLUDE_ASM("nonmatchings/utility", func_00003890);

s32 func_000039B0(void) {
    memset(&D_00008014, 0xFF, 0x34);
    D_00008014 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_C629AF26);

INCLUDE_ASM("nonmatchings/utility", sceUtility_F7D8D092);

INCLUDE_ASM("nonmatchings/utility", func_00003A78);

INCLUDE_ASM("nonmatchings/utility", func_00003B3C);

INCLUDE_RODATA("nonmatchings/utility", D_00007790);

INCLUDE_RODATA("nonmatchings/utility", D_000077A8);

INCLUDE_RODATA("nonmatchings/utility", D_000077C4);

INCLUDE_RODATA("nonmatchings/utility", D_000077E4);

INCLUDE_RODATA("nonmatchings/utility", D_000077F8);

INCLUDE_ASM("nonmatchings/utility", func_00003C38);

INCLUDE_ASM("nonmatchings/utility", func_00003D0C);

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
INCLUDE_ASM("nonmatchings/utility", sceUtility_3AD50AE7);

INCLUDE_ASM("nonmatchings/utility", sceUtility_BC6B6296);

INCLUDE_ASM("nonmatchings/utility", sceUtility_417BED54);

INCLUDE_ASM("nonmatchings/utility", sceUtility_B6CEE597);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 282
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

#if FW_VERSION == 282
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
INCLUDE_ASM("nonmatchings/utility", sceUtility_2995D020);

INCLUDE_ASM("nonmatchings/utility", sceUtility_B62A4061);

INCLUDE_ASM("nonmatchings/utility", sceUtility_ED0FAD38);

INCLUDE_ASM("nonmatchings/utility", sceUtility_88BC7406);

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

#if FW_VERSION == 282
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

#if FW_VERSION == 282
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
INCLUDE_ASM("nonmatchings/utility", sceUtility_DDE5389D);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_DDE5389D(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000B4(7, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_149A7895);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_149A7895(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000004D4(7);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_4A833BA4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_A50E5B30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_A50E5B30(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000008F8(7);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_943CBA46);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_943CBA46(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000B4(8, arg0);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_0F3EEAAC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_0F3EEAAC(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000004D4(8);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", sceUtility_147F7C85);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", sceUtility_16A1A8D8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_16A1A8D8(void) {
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

void sceUtility_3AD50AE7(void) {

}

void sceUtility_BC6B6296(void) {

}

void sceUtility_417BED54(void) {

}

void sceUtility_B6CEE597(void) {

}

void sceUtility_2995D020(void) {

}

void sceUtility_B62A4061(void) {

}

void sceUtility_ED0FAD38(void) {

}

void sceUtility_88BC7406(void) {

}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00001AD0);

INCLUDE_ASM("nonmatchings/utility", func_00001AFC);
#endif

#if FW_VERSION == 282
s32 sceUtilityOskGetStatus(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AC4(6);
    setK1(temp_s0);
    return temp_v0;
}

void sceUtility_DDE5389D(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(7, arg0);
    setK1(temp_s0);
}

void sceUtility_149A7895(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(7);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_4A833BA4);

void sceUtility_A50E5B30(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(7);
    setK1(temp_s0);
}

void sceUtility_943CBA46(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(8, arg0);
    setK1(temp_s0);
}

void sceUtility_0F3EEAAC(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(8);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_147F7C85);

void sceUtility_16A1A8D8(void) {
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

void sceUtility_private_04B24901(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_000000C4(0xA, arg0);
    setK1(temp_s0);
}

void sceUtility_private_1B698F54(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000550(0xA);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtility_private_FD99AF0A);

void sceUtility_private_8FCABAB9(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00000AC4(0xA);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", sceUtilityHtmlViewerInitStart);

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

void sceUtility_3AD50AE7(void) {
}

void sceUtility_BC6B6296(void) {
}

void sceUtility_417BED54(void) {
}

void sceUtility_B6CEE597(void) {
}

void sceUtility_2995D020(void) {
}

void sceUtility_B62A4061(void) {
}

void sceUtility_ED0FAD38(void) {
}

void sceUtility_88BC7406(void) {
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

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_0000782C);

INCLUDE_RODATA("nonmatchings/utility", D_00007848);
#endif

#if FW_VERSION == 282
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

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/utility", func_00004764);

INCLUDE_ASM("nonmatchings/utility", func_00004900);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/utility", sceUtilitySetSystemParamString);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/utility", func_00002584);

INCLUDE_ASM("nonmatchings/utility", func_0000277C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002870);
#endif

#if FW_VERSION == 282
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

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_000029D8);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_072DEBF2);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002B08);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_9CE50172);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002C38);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_FB0C4840);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00002E28);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtilityGetNetParam);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/utility", func_00003004);
#endif

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_FC4516F3);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/utility", func_00004BF8);

INCLUDE_ASM("nonmatchings/utility", func_00004D40);

INCLUDE_ASM("nonmatchings/utility", sceUtility_netparam_internal_8E8E3AA3);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void sceUtility_netparam_internal_8E8E3AA3(s32 arg0) {
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

#if FW_VERSION == 282
void sceUtility_netparam_internal_8E8E3AA3(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00005260((s32) &D_00007980, (s32) &D_000079A0, arg0);
    setK1(temp_s0);
}

void sceUtilityGetNetParamLatestID(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_0000535C((s32) &D_00007980, (s32) &D_000079A0, arg0);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/utility", func_00004F98);

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

INCLUDE_ASM("nonmatchings/utility", func_000054C8);

INCLUDE_ASM("nonmatchings/utility", func_0000553C);

INCLUDE_ASM("nonmatchings/utility", func_00005590);

INCLUDE_ASM("nonmatchings/utility", func_00005620);

INCLUDE_ASM("nonmatchings/utility", func_00005760);

void func_000057AC(void) {
    func_00006190();
}

INCLUDE_ASM("nonmatchings/utility", func_000057C8);

INCLUDE_ASM("nonmatchings/utility", func_0000580C);

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

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_00007AAC);

INCLUDE_RODATA("nonmatchings/utility", D_00007ABC);

INCLUDE_RODATA("nonmatchings/utility", D_00007AD4);

INCLUDE_RODATA("nonmatchings/utility", D_00007AE8);

INCLUDE_RODATA("nonmatchings/utility", D_00007AF8);

INCLUDE_RODATA("nonmatchings/utility", D_00007B00);
#endif

INCLUDE_RODATA("nonmatchings/utility", D_00007B10);

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
        sceReg_driver_39461B4D(D_00006D70);
        sceReg_driver_FA8A5739(D_00006D70);
        D_00007DAC -= 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000052B0(void) {
    if (D_00006D6C > 0) {
        sceReg_driver_39461B4D(D_00006D70);
        sceReg_driver_FA8A5739(D_00006D70);
        D_00006D6C = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/utility", func_000052FC);

s32 func_0000532C(void) {
    sceReg_driver_39461B4D(D_00006D70);
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

INCLUDE_ASM("nonmatchings/utility", func_00004158);

INCLUDE_ASM("nonmatchings/utility", func_000041B0);

INCLUDE_ASM("nonmatchings/utility", func_000041EC);

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

INCLUDE_ASM("nonmatchings/utility", sceUtility_1579A159);

INCLUDE_ASM("nonmatchings/utility", sceUtility_64D50C56);

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
    sceReg_driver_4CA16893(D_00006D70, arg0, 0);
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

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/utility", D_00007B14);

INCLUDE_RODATA("nonmatchings/utility", D_00007B34);

INCLUDE_ASM("nonmatchings/utility", func_00005888);

INCLUDE_ASM("nonmatchings/utility", func_00005998);

INCLUDE_ASM("nonmatchings/utility", func_00005DA4);

INCLUDE_ASM("nonmatchings/utility", func_00005E1C);

INCLUDE_ASM("nonmatchings/utility", func_00005E60);

INCLUDE_ASM("nonmatchings/utility", func_00005F28);

INCLUDE_ASM("nonmatchings/utility", func_00006044);

INCLUDE_ASM("nonmatchings/utility", func_000060B4);

s32 func_0000613C(void) {
    if (D_0000804C > 0) {
        sceReg_driver_39461B4D(D_00008050);
        sceReg_driver_FA8A5739(D_00008050);
        D_0000804C -= 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_00006190);

s32 func_000061C0(void) {
    sceReg_driver_39461B4D(D_00008050);
    return 0;
}

INCLUDE_ASM("nonmatchings/utility", func_000061E8);

INCLUDE_ASM("nonmatchings/utility", func_0000620C);

void func_00006270(s32 arg0) {
    sceReg_driver_4CA16893(D_00008050, arg0, 0);
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
