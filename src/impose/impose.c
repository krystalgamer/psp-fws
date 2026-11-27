/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "impose_decls.h"

#if FW_VERSION < 282
void func_00000000(u32 arg0) {
    sceKernelSetEventFlag(*D_00018648, arg0);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 151 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/impose", func_00000028);
#endif

#if FW_VERSION == 150
s32 func_00000028(s32 arg0) {
    s32 var_a1;

    var_a1 = 3;
    if ((u32) (arg0 - 0x49) >= 0x1CU) {
        var_a1 = 2;
        if ((u32) (arg0 - 0x29) >= 0x20U) {
            var_a1 = 1;
            if ((u32) (arg0 - 0x19) >= 0x10U) {
                var_a1 = (((u32) (arg0 - 1) < 0x18U) == 0) * 4;
            }
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00000070);

INCLUDE_ASM("nonmatchings/impose", func_000000C8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00000124);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_00000120);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_0000029C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/impose", func_00000298_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000001B8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_00000298);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_00000594);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/impose", func_00000590);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000444);
#endif

#if FW_VERSION < 270
s32 func_000004C4(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeSetStatus);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetParam);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetParam);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", sceImposeSetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetBatteryIconStatus);

INCLUDE_ASM("nonmatchings/impose", func_00000DFC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/impose", D_00006310);

INCLUDE_RODATA("nonmatchings/impose", D_00006A80);

INCLUDE_RODATA("nonmatchings/impose", D_000071F0);

INCLUDE_RODATA("nonmatchings/impose", D_00007544);

INCLUDE_RODATA("nonmatchings/impose", D_00007744);

INCLUDE_RODATA("nonmatchings/impose", D_00007944);

INCLUDE_RODATA("nonmatchings/impose", D_00007B84);

INCLUDE_RODATA("nonmatchings/impose", D_00007DC4);

INCLUDE_RODATA("nonmatchings/impose", D_00007FE4);

INCLUDE_RODATA("nonmatchings/impose", D_00008204);

INCLUDE_RODATA("nonmatchings/impose", D_00009914);

INCLUDE_RODATA("nonmatchings/impose", D_0000ABD4);

INCLUDE_RODATA("nonmatchings/impose", D_0000BE94);

INCLUDE_RODATA("nonmatchings/impose", D_0000BFFC);

INCLUDE_RODATA("nonmatchings/impose", D_0000C164);

INCLUDE_RODATA("nonmatchings/impose", D_0000C2CC);

INCLUDE_RODATA("nonmatchings/impose", D_0000C434);

INCLUDE_RODATA("nonmatchings/impose", D_0000C834);

INCLUDE_RODATA("nonmatchings/impose", D_0000CC34);

INCLUDE_RODATA("nonmatchings/impose", D_0000D034);

INCLUDE_RODATA("nonmatchings/impose", D_0000D434);

INCLUDE_RODATA("nonmatchings/impose", D_0000DB34);

INCLUDE_RODATA("nonmatchings/impose", D_0000E234);

INCLUDE_RODATA("nonmatchings/impose", D_0000E3B4);

INCLUDE_RODATA("nonmatchings/impose", D_0000E534);
#endif

#if FW_VERSION >= 282
void func_00000000(u32 arg0) {
    sceKernelSetEventFlag(*D_0000F510, arg0);
}

INCLUDE_ASM("nonmatchings/impose", func_00000028);

INCLUDE_ASM("nonmatchings/impose", func_00000074);

INCLUDE_ASM("nonmatchings/impose", func_000000CC);

INCLUDE_ASM("nonmatchings/impose", func_00000124);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose", D_0000769C);

INCLUDE_RODATA("nonmatchings/impose", D_000076A0);

INCLUDE_RODATA("nonmatchings/impose", D_000076BC);

INCLUDE_RODATA("nonmatchings/impose", D_000076D0);

INCLUDE_RODATA("nonmatchings/impose", D_000076E4);

INCLUDE_RODATA("nonmatchings/impose", D_00007704);

INCLUDE_RODATA("nonmatchings/impose", D_0000771C);

INCLUDE_RODATA("nonmatchings/impose", D_00007734);

INCLUDE_RODATA("nonmatchings/impose", D_00007748);

INCLUDE_RODATA("nonmatchings/impose", D_00007760);

INCLUDE_RODATA("nonmatchings/impose", D_00007778);

INCLUDE_RODATA("nonmatchings/impose", D_0000778C);

INCLUDE_RODATA("nonmatchings/impose", D_000077A0);

INCLUDE_RODATA("nonmatchings/impose", D_000077B8);

INCLUDE_RODATA("nonmatchings/impose", D_000077CC);

INCLUDE_RODATA("nonmatchings/impose", D_000077E0);

INCLUDE_RODATA("nonmatchings/impose", D_000077F4);

INCLUDE_RODATA("nonmatchings/impose", D_00007808);

INCLUDE_RODATA("nonmatchings/impose", D_0000781C);

INCLUDE_RODATA("nonmatchings/impose", D_00007834);

INCLUDE_RODATA("nonmatchings/impose", D_0000784C);

INCLUDE_RODATA("nonmatchings/impose", D_0000785C);

INCLUDE_RODATA("nonmatchings/impose", D_0000787C);

INCLUDE_RODATA("nonmatchings/impose", D_00007888);

INCLUDE_RODATA("nonmatchings/impose", D_00007900);

INCLUDE_RODATA("nonmatchings/impose", D_00007914);

INCLUDE_RODATA("nonmatchings/impose", D_000079EC);

INCLUDE_RODATA("nonmatchings/impose", D_000079FC);

INCLUDE_RODATA("nonmatchings/impose", D_00007A1C);

INCLUDE_RODATA("nonmatchings/impose", D_00007A34);

INCLUDE_RODATA("nonmatchings/impose", D_00007A54);

INCLUDE_RODATA("nonmatchings/impose", D_00007A64);

INCLUDE_RODATA("nonmatchings/impose", D_00007A7C);

INCLUDE_RODATA("nonmatchings/impose", D_00007A8C);

INCLUDE_RODATA("nonmatchings/impose", D_00007A90);

INCLUDE_RODATA("nonmatchings/impose", D_00007A98);

INCLUDE_RODATA("nonmatchings/impose", D_00007AA0);

INCLUDE_RODATA("nonmatchings/impose", D_00007AA4);

INCLUDE_RODATA("nonmatchings/impose", D_00007AE0);

INCLUDE_RODATA("nonmatchings/impose", D_00007AE4);

INCLUDE_RODATA("nonmatchings/impose", D_00007AF0);

INCLUDE_RODATA("nonmatchings/impose", D_00007B00);

INCLUDE_RODATA("nonmatchings/impose", D_00007B20);

INCLUDE_RODATA("nonmatchings/impose", D_00007B2C);

INCLUDE_RODATA("nonmatchings/impose", D_00007B40);

INCLUDE_RODATA("nonmatchings/impose", D_00007B64);

INCLUDE_RODATA("nonmatchings/impose", D_00007B88);

INCLUDE_RODATA("nonmatchings/impose", D_00007B90);

INCLUDE_RODATA("nonmatchings/impose", D_00007B98);

INCLUDE_RODATA("nonmatchings/impose", D_00007B9C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_000064C4);

INCLUDE_RODATA("nonmatchings/impose", D_00006C34);

INCLUDE_RODATA("nonmatchings/impose", D_000073A4);

INCLUDE_RODATA("nonmatchings/impose", D_0000791C);

INCLUDE_RODATA("nonmatchings/impose", D_00007B1C);

INCLUDE_RODATA("nonmatchings/impose", D_00007D1C);

INCLUDE_RODATA("nonmatchings/impose", D_00007F5C);

INCLUDE_RODATA("nonmatchings/impose", D_0000819C);

INCLUDE_RODATA("nonmatchings/impose", D_000083BC);

INCLUDE_RODATA("nonmatchings/impose", D_000085DC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose", D_0000B3C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_00009CEC);

INCLUDE_RODATA("nonmatchings/impose", D_0000AFAC);

INCLUDE_RODATA("nonmatchings/impose", D_0000C26C);

INCLUDE_RODATA("nonmatchings/impose", D_0000C3D4);

INCLUDE_RODATA("nonmatchings/impose", D_0000C53C);

INCLUDE_RODATA("nonmatchings/impose", D_0000C6A4);

INCLUDE_RODATA("nonmatchings/impose", D_0000C80C);

INCLUDE_RODATA("nonmatchings/impose", D_0000CC0C);

INCLUDE_RODATA("nonmatchings/impose", D_0000D00C);

INCLUDE_RODATA("nonmatchings/impose", D_0000D40C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/impose", D_0000D80C);

INCLUDE_RODATA("nonmatchings/impose", D_0000DF0C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_0000E60C);

INCLUDE_RODATA("nonmatchings/impose", D_0000E78C);

INCLUDE_RODATA("nonmatchings/impose", D_0000E90C);
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F2CC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/impose", D_0000F15C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_0000F2D8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/impose", D_0000FFE0);
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F2E4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/impose", D_00006024);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_0000017C);

INCLUDE_ASM("nonmatchings/impose", func_000001FC);

INCLUDE_ASM("nonmatchings/impose", func_00000374);

INCLUDE_ASM("nonmatchings/impose", func_00000508);

INCLUDE_ASM("nonmatchings/impose", func_0000068C);

s32 func_0000070C(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeSetStatus);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetParam);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetParam);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetBatteryIconStatus);

INCLUDE_ASM("nonmatchings/impose", func_00000DFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose", D_00004D00);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_0000F2F8);

INCLUDE_ASM("nonmatchings/impose", func_0000017C);

INCLUDE_ASM("nonmatchings/impose", func_000001FC);

INCLUDE_ASM("nonmatchings/impose", func_00000374);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/impose", func_00000510);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_00000758);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_00000508);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_0000068C);
#endif

#if FW_VERSION >= 350
s32 func_0000070C(void) {
    func_00002E3C(7);
    func_00002E3C(6);
    func_00002E3C(3);
    func_00002E3C(4);
    if (M2C_FIELD(D_0000F510, s32 *, 0xF4) != 1) {

    } else {
        func_00002E3C(0x10);
        func_00002E3C(0x11);
    }
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_0000070C(void) {
    func_00002E3C(7);
    func_00002E3C(6);
    func_00002E3C(3);
    func_00002E3C(4);
    if (M2C_FIELD(D_0000F510, s32 *, 0xEC) != 1) {

    } else {
        func_00002E3C(0x10);
        func_00002E3C(0x11);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0000070C(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", sceImposeSetStatus);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetParam);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetParam);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetLanguageMode);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetBatteryIconStatus);

INCLUDE_ASM("nonmatchings/impose", func_00000EEC);
#endif

#if FW_VERSION >= 350
s32 func_000012B8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(D_0000F510, s32 *, 0x94) & 4) {
        var_a0 = M2C_FIELD(D_0000F510, s32 *, 0xF8) != 0x400;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_000012B8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(D_0000F510, s32 *, 0x8C) & 4) {
        var_a0 = M2C_FIELD(D_0000F510, s32 *, 0xF0) != 0x400;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 350
void func_000012E4(void) {
    sceDisplaySetMode(M2C_FIELD(D_0000F510, s32 *, 0x264), M2C_FIELD(D_0000F510, s32 *, 0x268), M2C_FIELD(D_0000F510, s32 *, 0x26C));
    sceCodecSelectVolumeTable(M2C_FIELD(D_0000F510, s32 *, 0x270));
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000012E4(void) {
    sceDisplaySetMode(M2C_FIELD(D_0000F510, s32 *, 0x250), M2C_FIELD(D_0000F510, s32 *, 0x254), M2C_FIELD(D_0000F510, s32 *, 0x258));
    sceCodecSelectVolumeTable(M2C_FIELD(D_0000F510, s32 *, 0x25C));
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_00001324);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_00001504);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", sceImposeCheckVideoOut);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", sceImpose_A9884B00);
#endif

INCLUDE_ASM("nonmatchings/impose", sceImposeInit);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", sceImposeEnd);
#endif

#if FW_VERSION >= 350
s32 sceImposeEnd(void) {
    if (M2C_FIELD(D_0000F510, s32 *, 0x94) >= 0) {
        M2C_FIELD(D_0000F510, s32 *, 0xD0) = 1;
        func_00000000(8U);
        do {
            sceKernelDelayThread(0x186A0U);
        } while (M2C_FIELD(D_0000F510, s32 *, 0xD0) != 0);
    }
    sceKernelUnregisterSysEventHandler(&D_00012884);
    sceKernelSetEventFlag(M2C_FIELD(D_0000F510, u32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(D_0000F510, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(D_0000F510, s32 *, 4));
    sceKernelDeleteEventFlag((s32) M2C_FIELD(D_0000F510, u32 *, 0));
    sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 sceImposeEnd(void) {
    if (M2C_FIELD(D_0000F510, s32 *, 0x8C) >= 0) {
        M2C_FIELD(D_0000F510, s32 *, 0xC8) = 1;
        func_00000000(8U);
        do {
            sceKernelDelayThread(0x186A0U);
        } while (M2C_FIELD(D_0000F510, s32 *, 0xC8) != 0);
    }
    sceKernelUnregisterSysEventHandler(&D_000102A4);
    sceKernelSetEventFlag(M2C_FIELD(D_0000F510, u32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(D_0000F510, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(D_0000F510, s32 *, 4));
    sceKernelDeleteEventFlag((s32) M2C_FIELD(D_0000F510, u32 *, 0));
    sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", sceImposeSuspend);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00001614);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/impose", func_000015CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00001820);

INCLUDE_ASM("nonmatchings/impose", func_00001BB0);

INCLUDE_ASM("nonmatchings/impose", func_00001C30);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00001CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/impose", func_00001CD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00001DAC);

INCLUDE_ASM("nonmatchings/impose", func_00001E30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000FD8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x78);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x6C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x68);
}
#endif

#if FW_VERSION == 100
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x58);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_00018648, s32 *, 0x90);
    M2C_FIELD(D_00018648, s32 *, 0x90) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_00018648, s32 *, 0x84);
    M2C_FIELD(D_00018648, s32 *, 0x84) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_00018648, s32 *, 0x80);
    M2C_FIELD(D_00018648, s32 *, 0x80) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION == 100
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_00018648, s32 *, 0x70);
    M2C_FIELD(D_00018648, s32 *, 0x70) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceImposeSetHomePopup(s32 arg0) {
    func_000043F8(arg0 ^ 1, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeGetHomePopup);

s32 sceImposeSetUMDPopup(s32 arg0) {
    func_000043F8(arg0 ^ 1, 2);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeGetUMDPopup);

INCLUDE_ASM("nonmatchings/impose", sceImposeHomeButton);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceImposeEnd(void) {
    func_0000070C();
    sceKernelUnregisterSysEventHandler(&D_0000F334);
    sceKernelSetEventFlag(M2C_FIELD(D_00018648, u32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(D_00018648, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(D_00018648, s32 *, 4));
    sceKernelDeleteEventFlag((s32) M2C_FIELD(D_00018648, u32 *, 0));
    sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    return 0;
}

s32 module_reboot_phase(s32 arg0) {
    if (arg0 != 2) {

    } else {
        if (M2C_FIELD(D_00018648, s32 *, 0x78) < 0) {
            sceDisplaySetHoldMode(arg0);
        }
        func_0000070C();
        sceKernelUnregisterSysEventHandler(&D_0000F334);
        sceKernelSetEventFlag(M2C_FIELD(D_00018648, u32 *, 0), 0x80000000U);
        sceKernelWaitThreadEnd(M2C_FIELD(D_00018648, s32 *, 4), NULL);
        sceKernelDeleteThread(M2C_FIELD(D_00018648, s32 *, 4));
        sceKernelDeleteEventFlag((s32) M2C_FIELD(D_00018648, u32 *, 0));
        sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 module_reboot_phase(s32 arg0) {
    if (arg0 != 2) {

    } else {
        if (M2C_FIELD(D_00018648, s32 *, 0x6C) < 0) {
            sceDisplaySetHoldMode(1);
        }
        sceImposeEnd();
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_reboot_before(void) {
    if (M2C_FIELD(D_00018648, s32 *, 0x68) < 0) {
        sceDisplaySetHoldMode(1);
    }
    sceImposeEnd();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    sceImposeEnd();
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 sceImposeEnd(void) {
    if (M2C_FIELD(D_0000F510, s32 *, 0x80) >= 0) {
        M2C_FIELD(D_0000F510, s32 *, 0xBC) = 1;
        func_00000000(8U);
        do {
            sceKernelDelayThread(0x186A0U);
        } while (M2C_FIELD(D_0000F510, s32 *, 0xBC) != 0);
    }
    sceKernelUnregisterSysEventHandler(&D_0000F514);
    sceKernelSetEventFlag(M2C_FIELD(D_0000F510, u32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(D_0000F510, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(D_0000F510, s32 *, 4));
    sceKernelDeleteEventFlag((s32) M2C_FIELD(D_0000F510, u32 *, 0));
    sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 module_reboot_phase(s32 arg0) {
    s32 temp_a2;

    if (arg0 != 2) {

    } else {
        temp_a2 = M2C_FIELD(D_0000F510, s32 *, 0x94);
        if (temp_a2 >= 0) {
            if (temp_a2 & 2) {
                sceImposeSetStatus(1);
            }
        } else {
            sceDisplaySetHoldMode(arg0);
        }
        sceImposeEnd();
    }
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 module_reboot_phase(s32 arg0) {
    s32 temp_a2;

    if (arg0 != 2) {

    } else {
        temp_a2 = M2C_FIELD(D_0000F510, s32 *, 0x8C);
        if (temp_a2 >= 0) {
            if (temp_a2 & 2) {
                sceImposeSetStatus(1);
            }
        } else {
            sceDisplaySetHoldMode(arg0);
        }
        sceImposeEnd();
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
s32 module_reboot_phase(s32 arg0) {
    s32 temp_a2;

    if (arg0 != 2) {

    } else {
        temp_a2 = M2C_FIELD(D_0000F510, s32 *, 0x80);
        if (temp_a2 >= 0) {
            if (temp_a2 & 2) {
                sceImposeSetStatus(1);
            }
        } else {
            sceDisplaySetHoldMode(arg0);
        }
        sceImposeEnd();
    }
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", sceImposeSuspend);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_00002108);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_00001E48);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_00001764);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/impose", func_00001AE0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_00001998);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", func_00001CFC);

INCLUDE_ASM("nonmatchings/impose", func_00001D7C);

INCLUDE_ASM("nonmatchings/impose", func_00001E24);

INCLUDE_ASM("nonmatchings/impose", func_00001F2C);

INCLUDE_ASM("nonmatchings/impose", func_00001FB0);
#endif

#if FW_VERSION >= 350
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x94);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x8C);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 sceImposeGetStatus(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x80);
}
#endif

#if FW_VERSION >= 350
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_0000F510, s32 *, 0xAC);
    M2C_FIELD(D_0000F510, s32 *, 0xAC) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_0000F510, s32 *, 0xA4);
    M2C_FIELD(D_0000F510, s32 *, 0xA4) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 sceImposeChanges(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_0000F510, s32 *, 0x98);
    M2C_FIELD(D_0000F510, s32 *, 0x98) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 sceImposeSetHomePopup(s32 arg0) {
    func_000047EC(arg0 ^ 1, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeGetHomePopup);

s32 sceImposeSetUMDPopup(s32 arg0) {
    func_000047EC(arg0 ^ 1, 2);
    return 0;
}

INCLUDE_ASM("nonmatchings/impose", sceImposeGetUMDPopup);

INCLUDE_ASM("nonmatchings/impose", sceImposeHomeButton);

INCLUDE_ASM("nonmatchings/impose", sceImposeSetSpecialButtonMode);
#endif

#if FW_VERSION >= 350
s32 sceImposeGetSpecialButtonMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x7C);
}

s32 sceImposeReadSpecialButton(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x80);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceImposeGetSpecialButtonMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x78);
}

s32 sceImposeReadSpecialButton(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x7C);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/impose", sceImposeSetBacklightOffTime);

INCLUDE_ASM("nonmatchings/impose", sceImposeGetBacklightOffTime);
#endif

#if FW_VERSION >= 330
void sceImposeSetVideoOutMode(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    func_00001324(1, arg0, arg1, arg2);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", sceImpose_BB3F5DEC);

INCLUDE_ASM("nonmatchings/impose", sceImpose_FF1A2F07);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", module_start);
#endif

#if FW_VERSION == 282
s32 module_reboot_phase(s32 arg0) {
    if (arg0 != 2) {

    } else {
        if (M2C_FIELD(D_0000F510, s32 *, 0x80) < 0) {
            sceDisplaySetHoldMode(arg0);
        }
        sceImposeEnd();
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/impose", sceImposeResume);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAudioRoutingSetMode(s32 arg0) {
    return func_000044B8(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceAudioRoutingGetMode(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x4C);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceAudioRoutingSetVolumeMode(s32 arg0) {
    return func_0000478C(arg0);
}

s32 sceAudioRoutingGetVolumeMode(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x6C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceAudioRoutingGetMode(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x48);
}
#endif

#if FW_VERSION >= 282
s32 sceAudioRoutingSetMode(s32 arg0) {
    return func_000048AC(arg0);
}

s32 sceAudioRoutingGetMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x4C);
}

s32 sceAudioRoutingSetVolumeMode(s32 arg0) {
    return func_00004954(arg0);
}
#endif

#if FW_VERSION >= 350
s32 sceAudioRoutingGetVolumeMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x70);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceAudioRoutingGetVolumeMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x6C);
}
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F36C);

INCLUDE_ASM("nonmatchings/impose", func_00002378);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_000025F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_0000255C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00001650);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_000027AC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_00002D08);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_00002B0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00002A08);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00002D30(s32 arg0) {
    if ((M2C_FIELD(D_00018648, s32 *, 0x78) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_00018648, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_00018648, s32 *, 0x98) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x98) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_00018648, s32 *, 0xA0) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x98) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x98) | 0x200000);
        }
        M2C_FIELD(D_00018648, s32 *, 0xE8) = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_00002B54(s32 arg0) {
    if ((M2C_FIELD(D_00018648, s32 *, 0x6C) != 0) && !(arg0 & 0x20000)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_00018648, s32 *, 0x8C) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x8C) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_00018648, s32 *, 0x94) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x8C) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x8C) | 0x200000);
        }
        M2C_FIELD(D_00018648, s32 *, 0xDC) = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002B54(s32 arg0) {
    if ((M2C_FIELD(D_00018648, s32 *, 0x68) != 0) && !(arg0 & 0x20000)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_00018648, s32 *, 0x88) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x88) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_00018648, s32 *, 0x90) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x88) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x88) | 0x200000);
        }
        M2C_FIELD(D_00018648, s32 *, 0xD8) = 0;
    }
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00002BB4(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_00018648, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_00018648, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_00018648, s32 *, 0x94) != 0) {

    } else {
        func_00000000(0x20U);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_00002BB4(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_00018648, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_00018648, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_00018648, s32 *, 0x88) != 0) {

    } else {
        func_00000000(0x20U);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002BB4(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_00018648, s32 *, 0x44) = 1;
    } else {
        M2C_FIELD(D_00018648, s32 *, 0x44) = 0;
    }
    if (M2C_FIELD(D_00018648, s32 *, 0x84) != 0) {

    } else {
        func_00000000(0x20U);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00002C10);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00002F3C);

INCLUDE_ASM("nonmatchings/impose", func_0000341C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_00002D54);

INCLUDE_ASM("nonmatchings/impose", func_00003224);
#endif

#if FW_VERSION == 100
void func_00001D04(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    if ((arg0 & 0xC10000) && (temp_v1 = M2C_FIELD(D_00018648, s32 *, 0x58), (temp_v1 != 0)) && !(arg0 & 0x20000)) {
        if ((arg0 & 0x10000) && !(temp_v1 & 4)) {
            if (!(M2C_FIELD(D_00018648, s32 *, 0x60) & 0x10000)) {
                var_a0 = 1;
                if (!(temp_v1 & 0x10)) {
                    var_a0 = 0xA012;
                }
                sceImposeSetStatus(var_a0);
            }
        }
        if ((arg0 & 0x400000) && !(M2C_FIELD(D_00018648, s32 *, 0x60) & 0x400000)) {
            M2C_FIELD(D_00018648, s32 *, 0xB8) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x400000);
        }
        if (arg0 & 0x800000) {
            if (!(M2C_FIELD(D_00018648, s32 *, 0x60) & 0x800000)) {
                M2C_FIELD(D_00018648, s32 *, 0xBC) = 0;
                M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x800000);
            }
        }
    }
}

void func_00001E08(s32 arg0) {
    if ((arg0 & 0x300000) && (M2C_FIELD(D_00018648, s32 *, 0x58) != 0) && !(arg0 & 0x20000)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_00018648, s32 *, 0x7C) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x200000);
        }
        M2C_FIELD(D_00018648, s32 *, 0xB4) = 0;
    }
}

void func_00001E78(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_00018648, s32 *, 0x40) = 1;
    } else {
        M2C_FIELD(D_00018648, s32 *, 0x40) = 0;
    }
    func_00000000(0x20U);
}

INCLUDE_ASM("nonmatchings/impose", func_00001EC0);

INCLUDE_ASM("nonmatchings/impose", func_00002008);

INCLUDE_ASM("nonmatchings/impose", func_000024F8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_00002C5C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void func_00002DC0(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x80) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA8) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0xF4) = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00002DC0(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x80) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA8) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0xF0) = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00002E2C(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_0000F510, s32 *, 0x9C) != 0) {

    } else {
        func_00000000(0x20U);
    }
}

INCLUDE_ASM("nonmatchings/impose", func_00002E88);

INCLUDE_ASM("nonmatchings/impose", func_00002FCC);

INCLUDE_ASM("nonmatchings/impose", func_00003500);

INCLUDE_ASM("nonmatchings/impose", func_0000358C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_00003C44);

INCLUDE_ASM("nonmatchings/impose", func_00003CE4);

INCLUDE_ASM("nonmatchings/impose", func_00003DA4);

INCLUDE_ASM("nonmatchings/impose", func_00004280);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_00003A90);

INCLUDE_ASM("nonmatchings/impose", func_00003B40);

INCLUDE_ASM("nonmatchings/impose", func_00003BE8);

INCLUDE_ASM("nonmatchings/impose", func_000040DC);
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F394);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3AC);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3B8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3C0);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3C8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3D8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3E8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F400);

INCLUDE_RODATA("nonmatchings/impose", D_0000F410);

INCLUDE_RODATA("nonmatchings/impose", D_0000F41C);

INCLUDE_RODATA("nonmatchings/impose", D_0000F428);

INCLUDE_RODATA("nonmatchings/impose", D_0000F434);

INCLUDE_RODATA("nonmatchings/impose", D_0000F448);

INCLUDE_RODATA("nonmatchings/impose", D_0000F464);

INCLUDE_RODATA("nonmatchings/impose", D_0000F478);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/impose", D_000061A8);

INCLUDE_RODATA("nonmatchings/impose", D_000061B8);

INCLUDE_RODATA("nonmatchings/impose", D_000061C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/impose", D_0000F2E0);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/impose", D_0000F2D0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/impose", D_0000F0D0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/impose", D_000061B4);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/impose", D_00006174);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/impose", D_000061D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose", D_00004E4C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/impose", D_0000F490);

INCLUDE_RODATA("nonmatchings/impose", D_0000F4A0);

INCLUDE_RODATA("nonmatchings/impose", D_0000F4AC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/impose", D_000101D0);

INCLUDE_RODATA("nonmatchings/impose", D_000101E0);

INCLUDE_RODATA("nonmatchings/impose", D_000101F0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/impose", D_000112C4);

INCLUDE_RODATA("nonmatchings/impose", D_000112DC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/impose", D_000101FC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_00002E3C);

INCLUDE_ASM("nonmatchings/impose", func_00003030);

INCLUDE_ASM("nonmatchings/impose", func_00003390);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_00003818);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_00003488);
#endif

#if FW_VERSION >= 350
void func_000035EC(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x94) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x70) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xB4) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xB4) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xBC) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xB4) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xB4) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0x114) = 0;
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000035EC(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x8C) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xAC) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xAC) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xB4) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xAC) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xAC) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0x104) = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_000039F4);

INCLUDE_ASM("nonmatchings/impose", func_00003A80);

INCLUDE_ASM("nonmatchings/impose", func_00003B1C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00003658(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_0000F510, s32 *, 0xA8) != 0) {

    } else {
        func_00000000(0x20U);
    }
}

INCLUDE_ASM("nonmatchings/impose", func_000036B4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_000037F8);

INCLUDE_ASM("nonmatchings/impose", func_00003D34);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_0000429C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_00003DC0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_00004378);

INCLUDE_ASM("nonmatchings/impose", func_00004418);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_00004B40);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_000044D8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/impose", func_000049B4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/impose", D_0000F848);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/impose", func_000044B0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_0000588C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_000050E0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/impose", D_0000F68C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/impose", D_0000F4BC);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_000042F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_000043F8);

INCLUDE_ASM("nonmatchings/impose", func_0000447C);

INCLUDE_ASM("nonmatchings/impose", func_000044B8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_0000478C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", func_000047EC);

INCLUDE_ASM("nonmatchings/impose", func_00004870);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_000059F0);

INCLUDE_ASM("nonmatchings/impose", func_00005AA4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_0000524C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", func_000048AC);

INCLUDE_ASM("nonmatchings/impose", func_00004954);
#endif

INCLUDE_ASM("nonmatchings/impose", func_00004A08);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_00004590);

INCLUDE_ASM("nonmatchings/impose", func_00004604);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_0000498C);

INCLUDE_ASM("nonmatchings/impose", func_00004F38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_000046A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_0000367C);

INCLUDE_ASM("nonmatchings/impose", func_000036A8);

INCLUDE_ASM("nonmatchings/impose", func_000036E8);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/impose", func_00003C58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/impose", func_000055FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/impose", func_0000553C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000044CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", func_00004A40);

INCLUDE_ASM("nonmatchings/impose", func_00004AB4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose", func_00005E74);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/impose", func_00005590);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/impose", func_00004B58);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/impose", func_00005104);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/impose", func_00005C20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/impose", func_00005998);
#endif
