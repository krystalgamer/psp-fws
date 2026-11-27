/* cflags: -O2 -frename-registers */
#include "common.h"
#include "dmacplus_decls.h"

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusQuerySuspend);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusEnableIntr);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusDisableIntr);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusQueryIntr);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAcquireIntr);

INCLUDE_ASM("nonmatchings/dmacplus", func_00000288);

#if (FW_VERSION >= 201 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dmacplus", module_start);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    sceSysregDmacplusBusClockEnable();
    D_00002F00 = 0;
    sceKernelRegisterIntrHandler(0x15, 1, &func_00000288, 0, &D_00002EEC);
    sceKernelEnableIntr(0x15);
    sceDmacplusLcdcInit();
    sceDmacplusAvcInit();
    sceDmacplusSc2MeInit();
    sceDmacplusMe2ScInit();
    sceDmacplusSc128Init();
    sceKernelRegisterSysEventHandler(&D_00002E80);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00002E80);
    sceDmacplusSc128End();
    sceDmacplusMe2ScEnd();
    sceDmacplusSc2MeEnd();
    sceDmacplusAvcEnd();
    sceDmacplusLcdcEnd();
    sceKernelReleaseIntrHandler(0x15);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusInit);
#endif

#if FW_VERSION < 201
s32 sceDmacplusInit(void) {
    sceSysregDmacplusBusClockEnable();
    D_00002F00 = 0;
    sceKernelRegisterIntrHandler(0x15, 1, &func_00000288, 0, &D_00002EEC);
    sceKernelEnableIntr(0x15);
    sceDmacplusLcdcInit();
    sceDmacplusAvcInit();
    sceDmacplusSc2MeInit();
    sceDmacplusMe2ScInit();
    sceDmacplusSc128Init();
    sceKernelRegisterSysEventHandler(&D_00002E80);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceDmacplusEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00002E80);
    sceDmacplusSc128End();
    sceDmacplusMe2ScEnd();
    sceDmacplusSc2MeEnd();
    sceDmacplusAvcEnd();
    sceDmacplusLcdcEnd();
    sceKernelReleaseIntrHandler(0x15);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 module_start(void) {
    sceSysregDmacplusBusClockEnable();
    D_0000404C.unk0 = 0;
    sceKernelRegisterIntrHandler(0x15, 1, &func_00000288, 0, &D_00002EC8);
    sceKernelEnableIntr(0x15);
    sceDmacplusLcdcInit();
    sceDmacplusAvcInit();
    sceDmacplusSc2MeInit();
    sceDmacplusMe2ScInit();
    sceDmacplusSc128Init();
    sceKernelRegisterSysEventHandler(&D_00002F40);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00002F40);
    sceDmacplusSc128End();
    sceDmacplusMe2ScEnd();
    sceDmacplusSc2MeEnd();
    sceDmacplusAvcEnd();
    sceDmacplusLcdcEnd();
    sceKernelReleaseIntrHandler(0x15);
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusInit);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusEnd);
#endif

s32 sceDmacplusSuspend(void) {
    sceDmacplusLcdcSuspend();
    sceDmacplusAvcSuspend();
    sceDmacplusSc2MeSuspend();
    sceDmacplusMe2ScSuspend();
    sceDmacplusSc128Suspend();
    sceSysregDmacplusBusClockDisable();
    return 0;
}

s32 sceDmacplusResume(void) {
    sceSysregDmacplusBusClockEnable();
    sceDmacplusLcdcResume();
    sceDmacplusAvcResume();
    sceDmacplusSc2MeResume();
    sceDmacplusMe2ScResume();
    sceDmacplusSc128Resume();
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", func_000005D0);

INCLUDE_ASM("nonmatchings/dmacplus", func_00000694);

INCLUDE_ASM("nonmatchings/dmacplus", func_000006B4);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcInit);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcResume);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcSetBaseAddr);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcSetFormat);

#if FW_VERSION < 282
s32 sceDmacplusLcdcGetFormat(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = D_00002F50;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002F54;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002F58;
    }
    return 0;
}
#else
s32 sceDmacplusLcdcGetFormat(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != NULL) {
        *arg0 = D_00002F8C;
    }
    if (arg1 != NULL) {
        *arg1 = D_00002F90;
    }
    if (arg2 != NULL) {
        *arg2 = D_00002F94;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcEnable);

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcEnd);
#else
s32 sceDmacplusLcdcEnd(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    *(s32 *)0xBC800110 &= ~2;
    sceKernelReleaseSubIntrHandler(0x15, 1);
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}
#endif

s32 sceDmacplusLcdcQuerySuspend(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcSuspend);

#if FW_VERSION < 282
s32 sceDmacplusLcdcGetBaseAddr(void) {
    return D_00002F4C;
}
#else
s32 sceDmacplusLcdcGetBaseAddr(void) {
    return D_00002F88;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusLcdcDisable);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/dmacplus", func_00000D14);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/dmacplus", func_00000D1C);
#endif

#if FW_VERSION < 260
s32 func_00000D18(void) {
    *(s32 *)0xBC800110 &= ~1;
    M2C_VFIELD(&D_00002F40, s32, 0xC) = 0;
    M2C_VFIELD(&D_00002F40, s32, 4) = 1;
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcDoAVCdec);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcDoVME);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcSync);

#if FW_VERSION < 260
s32 func_00001328(void) {
    return D_00003F84;
}

s32 func_00001334(s32 arg0) {
    D_00003F84 = arg0;
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E90);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E38);

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002EEC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dmacplus", D_00002E9C);

INCLUDE_RODATA("nonmatchings/dmacplus", D_00002EC8);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcInit);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcEnd);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcQuerySuspend);
#endif

#if FW_VERSION == 150
s32 sceDmacplusAvcQuerySuspend(void) {
    return (D_00003F84 == 0) - 1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceDmacplusAvcQuerySuspend(void) {
    return !(D_0000400E & 2) ? 0 : -1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
s32 sceDmacplusAvcQuerySuspend(void) {
    return (D_00003F84 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 282
s32 sceDmacplusAvcQuerySuspend(void) {
    return !(D_0000404E & 2) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcSuspend);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcResume);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusAvcSetDestConf);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001678);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001780);
#endif

#if FW_VERSION < 260
s32 func_0000177C(void) {
    sceKernelSetEventFlag(M2C_FIELD(&D_00003FC0, s32 *, 0), 1U);
    M2C_FIELD(&D_00003FC0, s32 *, 4) = 0;
    return -1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001698);

s32 func_00001798(void) {
    sceKernelSetEventFlag(D_00003FC0, 1U);
    D_0000404C.unk2 = (u16) (D_0000404C.unk2 & 0x7FFD);
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeNormal16);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeLLI);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeSync);

#if FW_VERSION < 260
s32 func_00001A64(void) {
    return D_00003FD4;
}

s32 func_00001A70(s32 arg0) {
    D_00003FD4 = arg0;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeInit);
#endif

#if FW_VERSION < 260
s32 sceDmacplusSc2MeInit(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_0000400C, s32, 4) = 0;
    M2C_VFIELD(&D_0000400C, s32, 0) = sceKernelCreateEventFlag("SceDmacplusSc2Me", 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 5, &func_00001BCC, 0);
    sceKernelRegisterSubIntrHandler(0x15, 4, &func_00001C50, 0);
    sceKernelEnableSubIntr(0x15, 5);
    sceKernelEnableSubIntr(0x15, 4);
    sceKernelCpuResumeIntrWithSync(temp_v0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeEnd);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeQuerySuspend);
#endif

#if FW_VERSION == 150
s32 sceDmacplusSc2MeQuerySuspend(void) {
    return (D_00003FD4 == 0) - 1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceDmacplusSc2MeQuerySuspend(void) {
    return !(D_0000400E & 4) ? 0 : -1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
s32 sceDmacplusSc2MeQuerySuspend(void) {
    return (D_00003FD4 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION < 282
s32 sceDmacplusSc2MeSuspend(void) {
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc2MeResume);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceDmacplusSc2MeResume(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDmacplusSc2MeResume(void) {
    D_00003FD4 = 0;
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001BCC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00001C40);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/dmacplus", func_00001C50);
#endif

#if FW_VERSION >= 282
s32 sceDmacplusSc2MeQuerySuspend(void) {
    return !(D_0000404E & 4) ? 0 : -1;
}

s32 sceDmacplusSc2MeSuspend(void) {
    return 0;
}

s32 sceDmacplusSc2MeResume(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacplus", func_00001BD4);

INCLUDE_ASM("nonmatchings/dmacplus", func_00001C54);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScNormal16);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScSync);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScInit);
#else
s32 sceDmacplusMe2ScInit(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00004020, s32, 4) = 0;
    M2C_VFIELD(&D_00004020, s32, 0) = sceKernelCreateEventFlag("SceDmacplusMe2Sc", 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 7, &func_000020C4, 0);
    sceKernelRegisterSubIntrHandler(0x15, 6, &func_00002148, 0);
    sceKernelEnableSubIntr(0x15, 7);
    sceKernelEnableSubIntr(0x15, 6);
    sceKernelCpuResumeIntrWithSync(temp_v0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScEnd);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScQuerySuspend);
#endif

#if FW_VERSION == 150
s32 sceDmacplusMe2ScQuerySuspend(void) {
    return (D_00003FEC == 0) - 1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceDmacplusMe2ScQuerySuspend(void) {
    return !(D_0000400E & 8) ? 0 : -1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
s32 sceDmacplusMe2ScQuerySuspend(void) {
    return (D_00003FEC == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 100
s32 sceDmacplusMe2ScQuerySuspend(void) {
    s32 var_v0;

    var_v0 = -1;
    if (M2C_VFIELD(&D_00004020, s32, 4) == 0) {
        M2C_VFIELD(&D_00004020, s32, 4) = -1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
s32 sceDmacplusMe2ScSuspend(void) {
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScResume);
#endif

#if FW_VERSION == 100
s32 sceDmacplusMe2ScResume(void) {
    D_00003FEC = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceDmacplusMe2ScQuerySuspend(void) {
    return !(D_0000404E & 8) ? 0 : -1;
}

s32 sceDmacplusMe2ScSuspend(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150
s32 sceDmacplusMe2ScResume(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusMe2ScLLI);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_000020C4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_000020CC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/dmacplus", func_00002148);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacplus", func_0000205C);

INCLUDE_ASM("nonmatchings/dmacplus", func_000020DC);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128Suspend);

INCLUDE_ASM("nonmatchings/dmacplus", func_00002198);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", func_00002250);
#else
INCLUDE_ASM("nonmatchings/dmacplus", func_000021EC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128Memcpy);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128TryMemcpy);
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128LLI);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128Init);
#endif

#if FW_VERSION < 201
s32 sceDmacplusSc128Init(void) {
    M2C_UNK *temp_v0;
    s32 temp_s2;

    temp_s2 = sceKernelCpuSuspendIntr();
    temp_v0 = "SceDmacplusSc128";
    D_00004034.unk0 = sceKernelCreateSema(temp_v0, 1U, 1, 1, NULL);
    D_00004034.unk4 = sceKernelCreateEventFlag(temp_v0, 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 8, &func_00002198, 0);
    sceKernelRegisterSubIntrHandler(0x15, 9, &func_00002250, 0);
    sceKernelEnableSubIntr(0x15, 8);
    sceKernelEnableSubIntr(0x15, 9);
    sceKernelCpuResumeIntr(temp_s2);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceDmacplusSc128Init(void) {
    M2C_UNK *temp_v0;
    s32 temp_s2;

    temp_s2 = sceKernelCpuSuspendIntr();
    temp_v0 = "SceDmacplusSc128";
    D_00004034.unk0 = sceKernelCreateSema(temp_v0, 1U, 1, 1, NULL);
    D_00004034.unk4 = sceKernelCreateEventFlag(temp_v0, 0x201U, 0U, NULL);
    sceKernelRegisterSubIntrHandler(0x15, 8, &func_00002198, 0);
    sceKernelRegisterSubIntrHandler(0x15, 9, &func_000021EC, 0);
    sceKernelEnableSubIntr(0x15, 8);
    sceKernelEnableSubIntr(0x15, 9);
    sceKernelCpuResumeIntr(temp_s2);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128End);

s32 sceDmacplusSc128QuerySuspend(void) {
    return 0;
}

s32 sceDmacplusSc128Resume(void) {
    return 0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128Memcpy);

INCLUDE_ASM("nonmatchings/dmacplus", sceDmacplusSc128TryMemcpy);

INCLUDE_ASM("nonmatchings/dmacplus", func_00002528);
#endif
