/* cflags: -O2 -frename-registers */
#include "common.h"
#include "i2c_decls.h"

#if FW_VERSION == 103 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/i2c", func_00000000);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/i2c", func_000002B8);

INCLUDE_ASM("nonmatchings/i2c", func_000007B4);

INCLUDE_ASM("nonmatchings/i2c", func_00000EB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceI2cSetClock(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x14) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceI2cSetClock(s32 arg0, s32 arg1) {
    D_00001730.unk14 = arg1;
    D_00001730.unk10 = arg0;
    return 0;
}
#endif

#if FW_VERSION != 103
INCLUDE_ASM("nonmatchings/i2c", sceI2cMasterTransmit);

INCLUDE_ASM("nonmatchings/i2c", sceI2cMasterReceive);

INCLUDE_ASM("nonmatchings/i2c", sceI2cMasterTransmitReceive);
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 150 && FW_VERSION < 201)
s32 module_start(void) {
    D_000015B0.eventFlag = 0;
    D_000015B0.sema = 0;
    D_000015B0.unk8 = 0;
#if FW_VERSION >= 150
    D_000015B0.unkC_150 = 0;
#endif
    D_000015B0.unkC = 0;
    D_000015B0.unk10 = 0;
    D_000015B0.unk14 = 0;
    sceSysregIicClkEnable();
    sceSysregIicIoEnable();
    D_000015B0.unkC = 9;
    D_000015B0.unk10 = 9;
    D_000015B0.sema = sceKernelCreateSema(D_000016E0, 1, 1, 1, NULL);
    D_000015B0.eventFlag = sceKernelCreateEventFlag(D_000016E0, 1, 0, NULL);
    sceKernelRegisterIntrHandler(12, 1, func_00001264, NULL, NULL);
    sceKernelRegisterSysEventHandler(&D_00001570);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/i2c", module_start);
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00001570);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteSema(M2C_VFIELD(&D_000015B0, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_000015B0, s32, 0));
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/i2c", func_00000FD0);
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 150 && FW_VERSION < 201)
s32 sceI2cInit(void) {
    D_000015B0.eventFlag = 0;
    D_000015B0.sema = 0;
    D_000015B0.unk8 = 0;
#if FW_VERSION >= 150
    D_000015B0.unkC_150 = 0;
#endif
    D_000015B0.unkC = 0;
    D_000015B0.unk10 = 0;
    D_000015B0.unk14 = 0;
    sceSysregIicClkEnable();
    sceSysregIicIoEnable();
    D_000015B0.unkC = 9;
    D_000015B0.unk10 = 9;
    D_000015B0.sema = sceKernelCreateSema(D_000016E0, 1, 1, 1, NULL);
    D_000015B0.eventFlag = sceKernelCreateEventFlag(D_000016E0, 1, 0, NULL);
    sceKernelRegisterIntrHandler(12, 1, func_00001264, NULL, NULL);
    sceKernelRegisterSysEventHandler(&D_00001570);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/i2c", sceI2cInit);
#endif

#if FW_VERSION < 282
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00001570);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteSema(M2C_VFIELD(&D_000015B0, s32, 4));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_000015B0, s32, 0));
    return 0;
}
#endif

#if FW_VERSION == 340
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v340);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 330
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v330);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 311
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v311);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 310
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v310);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v303);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 302
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v302);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 301
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v301);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 300
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v300);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_000016F0);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteSema(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/i2c", sceI2cInit);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/i2c", sceI2cEnd);
#endif

#if FW_VERSION == 340
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v340);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 330
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v330);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 311
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v311);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 310
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v310);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v303);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 302
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v302);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 301
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v301);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

#if FW_VERSION == 300
s32 sceI2cEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_000016E0_v300);
    sceKernelReleaseIntrHandler(0xC);
    sceKernelDeleteMutex(D_00001730.unk4);
    sceKernelDeleteEventFlag(D_00001730.unk0);
    return 0;
}
#endif

s32 sceI2cSuspend(void) {
    sceSysregIicIoDisable();
    sceSysregIicClkDisable();
    return 0;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/i2c", sceI2cResume);
#else
s32 sceI2cResume(void) {
    sceSysregIicClkEnable();
    sceSysregIicIoEnable();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceI2cSetDebugHandlers(s32 arg0) {
    D_000015B8 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/i2c", func_0000114C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceI2cSetPollingMode(s32 arg0) {
    D_00001718 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceI2cReset(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/i2c", func_00001198);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceI2cSetClock(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x14) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg0;
    return 0;
}
#endif

#if FW_VERSION < 103
s32 sceI2cSetClock(s32 arg0, s32 arg1) {
    M2C_VFIELD(&D_000015B0, s32, 0x10) = arg1;
    M2C_VFIELD(&D_000015B0, s32, 0xC) = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/i2c", func_000011B0);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/i2c", func_0000109C);
#endif

#if FW_VERSION >= 282
s32 sceI2cSetDebugHandlers(s32 arg0) {
    D_0000173C = arg0;
    return 0;
}

s32 sceI2cSetPollingMode(s32 arg0) {
    D_00001738 = arg0;
    return 0;
}

s32 sceI2cReset(void) {
    *(s32 *)0xBE200020 = 1;
    sceKernelDelayThread(0x64U);
    *(s32 *)0xBE200020 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/i2c", func_00001264);

INCLUDE_ASM("nonmatchings/i2c", func_000012BC);

INCLUDE_RODATA("nonmatchings/i2c", D_000016E0);
