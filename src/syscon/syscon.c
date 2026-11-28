/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "syscon_decls.h"

INCLUDE_ASM("nonmatchings/syscon", sceSysconInit);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/syscon", func_00000204);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/syscon", func_00000218);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/syscon", sceSysconResume);

INCLUDE_ASM("nonmatchings/syscon", func_000004C4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/syscon", D_00003E7C);

INCLUDE_RODATA("nonmatchings/syscon", D_00003E80);

INCLUDE_RODATA("nonmatchings/syscon", D_00003E9C);

INCLUDE_RODATA("nonmatchings/syscon", D_00003EB0);

INCLUDE_RODATA("nonmatchings/syscon", D_00003ED0);

INCLUDE_RODATA("nonmatchings/syscon", D_00003EE8);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F00);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F14);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F2C);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F3C);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F5C);

INCLUDE_RODATA("nonmatchings/syscon", D_00003F70);

INCLUDE_RODATA("nonmatchings/syscon", D_00004448);

INCLUDE_RODATA("nonmatchings/syscon", D_00004464);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/syscon", D_0000446C_v352);

INCLUDE_RODATA("nonmatchings/syscon", D_00004474_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/syscon", D_0000446C_v351);

INCLUDE_RODATA("nonmatchings/syscon", D_00004474_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/syscon", D_0000446C_v350);

INCLUDE_RODATA("nonmatchings/syscon", D_00004474_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/syscon", D_0000448C);

INCLUDE_RODATA("nonmatchings/syscon", D_00004494);

INCLUDE_RODATA("nonmatchings/syscon", D_000044B0);

INCLUDE_RODATA("nonmatchings/syscon", D_000044B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/syscon", func_00000360);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdExec);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdExecAsync);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdCancel);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/syscon", func_00000350);
#endif

INCLUDE_RODATA("nonmatchings/syscon", D_0000453C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/syscon", func_00000580);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/syscon", func_00000544);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00000584);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/syscon", func_0000050C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdExec);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdExecAsync);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdCancel);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconCmdSync);

INCLUDE_ASM("nonmatchings/syscon", func_00001444);

s32 module_start(void) {
    sceSysconInit();
    return 0;
}

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/syscon", func_00000FF4);
#else
INCLUDE_ASM("nonmatchings/syscon", module_reboot_before);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconEnd);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/syscon", func_00001120);

INCLUDE_ASM("nonmatchings/syscon", func_00001144);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/syscon", func_000016C0);
#endif

#if FW_VERSION >= 150
s32 sceSysconSuspend(void) {
    sceKernelDisableSubIntr(4, 4);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceSysconSuspend(void) {
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 300)
INCLUDE_ASM("nonmatchings/syscon", sceSysconResume);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconSetDebugHandlers);
#else
s32 sceSysconSetDebugHandlers(s32 arg0) {
    D_00004600.unk24 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 103 || FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconSetPollingMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceSysconSetPollingMode(s32 arg0) {
    M2C_VFIELD(&D_00004600, s32, 0x128) = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceSysconSetAffirmativeRertyMode(s32 arg0) {
    M2C_VFIELD(&D_00004600, s32, 0x12C) = arg0;
    return 0;
}
#endif

#if FW_VERSION < 271
s32 _sceSysconGetBaryonVersion(void) {
    return M2C_VFIELD(&D_00004600, s32, 0x108);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceSysconSetPollingMode(s32 arg0) {
    D_00004600.unk134 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconSetAffirmativeRertyMode);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceSysconSetAffirmativeRertyMode(s32 arg0) {
    D_00004600.unk138 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", _sceSysconGetBaryonVersion);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 _sceSysconGetBaryonVersion(void) {
    return M2C_VFIELD(&D_00004600, s32, 0x110);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 300
s32 _sceSysconGetBaryonVersion(void) {
    return D_00004600.unk10C;
}
#endif

INCLUDE_ASM("nonmatchings/syscon", _sceSysconGetBaryonTimeStamp);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", func_000017C0);

INCLUDE_ASM("nonmatchings/syscon", _sceSysconGetUsbPowerType);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_000017C0(void) {
    return D_00004600.unk130;
}
#endif

#if FW_VERSION >= 282
void sceSysconSetGSensorCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xA);
}
#endif

void sceSysconSetLowBatteryCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0);
}

void sceSysconSetPowerSwitchCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 1);
}

void sceSysconSetAlarmCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 2);
}

void sceSysconSetAcSupplyCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 3);
}

void sceSysconSetHPConnectCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 4);
}

void sceSysconSetHRPowerCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 8);
}

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconSetHRWakeupCallback);
#endif

void sceSysconSetWlanSwitchCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 5);
}

void sceSysconSetWlanPowerCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 9);
}

#if FW_VERSION >= 282
void sceSysconSetHddPowerCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xB);
}
#endif

#if FW_VERSION >= 300
void sceSysconSetBtSwitchCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xD);
}
#endif

#if FW_VERSION >= 282
void sceSysconSetBtPowerCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xC);
}
#endif

void sceSysconSetHoldSwitchCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 6);
}

void sceSysconSetUmdSwitchCallback(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 7);
}

INCLUDE_ASM("nonmatchings/syscon", func_0000193C);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetBaryonStatus);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 sceSysconGetBaryonStatus(void) {
    return D_00004600.unk4A & 0xFF;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetBaryonStatus2);
#endif

#if FW_VERSION == 271
s32 sceSysconGetBaryonStatus(void) {
    return D_00004600.unk46 & 0xFF;
}
#endif

#if FW_VERSION < 271
s32 sceSysconGetBaryonStatus(void) {
    return D_00004600.unk45 & 0xFF;
}
#endif

#if FW_VERSION == 282
s32 sceSysconGetBaryonStatus(void) {
    return D_00004600.unk48 & 0xFF;
}

s32 sceSysconGetBaryonStatus2(void) {
    return D_00004600.unk4A & 0xFF;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconIsFalling);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconIsLowBattery);

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetPowerSwitch);

INCLUDE_ASM("nonmatchings/syscon", sceSysconIsAlarmed);

#if FW_VERSION == 271
s32 sceSysconIsAcSupplied(void) {
    return D_00004600.unk46 & 1;
}
#endif

#if FW_VERSION < 271
s32 sceSysconIsAcSupplied(void) {
    return D_00004600.unk45 & 1;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconIsAcSupplied);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 sceSysconIsAcSupplied(void) {
    return D_00004600.unk4A & 1;
}
#endif

#if FW_VERSION == 282
s32 sceSysconIsAcSupplied(void) {
    return D_00004600.unk48 & 1;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHPConnect);
#else
s8 sceSysconGetHPConnect(void) {
    return (s8) D_00004600.unk38;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetWlanSwitch);
#else
s8 sceSysconGetWlanSwitch(void) {
    return (s8) D_00004600.unk39;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetBtSwitch);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetBtSwitch(void) {
    return (s8) D_00004600.unk3A;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHoldSwitch);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetHoldSwitch(void) {
    return (s8) D_00004600.unk3B;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetUmdSwitch);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetUmdSwitch(void) {
    return (s8) D_00004600.unk3C;
}
#endif

#if FW_VERSION < 300
s8 sceSysconGetHoldSwitch(void) {
    return (s8) D_00004600.unk3A;
}

s8 sceSysconGetUmdSwitch(void) {
    return (s8) D_00004600.unk3B;
}
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHRPowerStatus);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHRWakeupStatus);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetWlanPowerStatus);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHddPowerStatus);
#endif

#if FW_VERSION == 282
s32 sceSysconGetHddPowerStatus(void) {
    return D_00004600.unk4A & 1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetBtPowerStatus);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/syscon", func_00001AC0);

s8 sceSysconGetLeptonPowerCtrl(void) {
    return (s8) D_00004600.unk3C;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001AE8);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetLeptonPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetLeptonPowerCtrl(void) {
    return (s8) D_00004600.unk3D;
}
#endif

#if FW_VERSION < 300
s8 sceSysconGetMsPowerCtrl(void) {
    return (s8) D_00004600.unk3D;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001B10);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetMsPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetMsPowerCtrl(void) {
    return (s8) D_00004600.unk3E;
}
#endif

#if FW_VERSION < 300
s8 sceSysconGetWlanPowerCtrl(void) {
    return (s8) D_00004600.unk3E;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001B38);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetWlanPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetWlanPowerCtrl(void) {
    return (s8) D_00004600.unk3F;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetNandPowerCtrl(void) {
    return (s8) D_00004600.unk3F;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetTachyonVmePowerCtrl(void) {
    return (s8) D_00004600.unk3F;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetHddPowerCtrl(void) {
    return (s8) D_00004600.unk3F;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001B60);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHddPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetHddPowerCtrl(void) {
    return (s8) D_00004600.unk40;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetTachyonVmePowerCtrl(void) {
    return (s8) D_00004600.unk40;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetTachyonAwPowerCtrl(void) {
    return (s8) D_00004600.unk40;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetDvePowerCtrl(void) {
    return (s8) D_00004600.unk40;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001B88);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetDvePowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetDvePowerCtrl(void) {
    return (s8) D_00004600.unk41;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetTachyonAwPowerCtrl(void) {
    return (s8) D_00004600.unk41;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetTachyonAvcPowerCtrl(void) {
    return (s8) D_00004600.unk41;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetBtPowerCtrl(void) {
    return (s8) D_00004600.unk41;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001BB0);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetBtPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetBtPowerCtrl(void) {
    return (s8) D_00004600.unk42;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetTachyonAvcPowerCtrl(void) {
    return (s8) D_00004600.unk42;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetLcdPowerCtrl(void) {
    return (s8) D_00004600.unk42;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetTachyonVmePowerCtrl(void) {
    return (s8) D_00004600.unk42;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001BD8);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetUsbPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetUsbPowerCtrl(void) {
    return (s8) D_00004600.unk43;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetLcdPowerCtrl(void) {
    return (s8) D_00004600.unk43;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetHRPowerCtrl(void) {
    return (s8) D_00004600.unk43;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetTachyonAwPowerCtrl(void) {
    return (s8) D_00004600.unk43;
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001C00);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetTachyonVmePowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetTachyonVmePowerCtrl(void) {
    return (s8) D_00004600.unk44;
}
#endif

#if FW_VERSION == 271
s8 sceSysconGetHRPowerCtrl(void) {
    return (s8) D_00004600.unk44;
}

INCLUDE_ASM("nonmatchings/syscon", func_000018C0);

s8 sceSysconGetWlanLedCtrl(void) {
    return (s8) D_00004600.unk45;
}
#endif

#if FW_VERSION < 271
s8 sceSysconGetWlanLedCtrl(void) {
    return (s8) D_00004600.unk44;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetTachyonAvcPowerCtrl(void) {
    return (s8) D_00004600.unk44;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001C28);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetTachyonAwPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetTachyonAwPowerCtrl(void) {
    return (s8) D_00004600.unk45;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetLcdPowerCtrl(void) {
    return (s8) D_00004600.unk45;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001C50);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetTachyonAvcPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetTachyonAvcPowerCtrl(void) {
    return (s8) D_00004600.unk46;
}
#endif

#if FW_VERSION == 282
s8 sceSysconGetHRPowerCtrl(void) {
    return (s8) D_00004600.unk46;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", func_00001C78);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetLcdPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetLcdPowerCtrl(void) {
    return (s8) D_00004600.unk47;
}

INCLUDE_ASM("nonmatchings/syscon", func_00001C5C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetHRPowerCtrl);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s8 sceSysconGetHRPowerCtrl(void) {
    return (s8) D_00004600.unk48;
}

INCLUDE_ASM("nonmatchings/syscon", func_00001C84);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetWlanLedCtrl);
#endif

#if FW_VERSION == 282
s8 sceSysconGetWlanLedCtrl(void) {
    return (s8) D_00004600.unk47;
}
#endif

INCLUDE_ASM("nonmatchings/syscon", func_00001CA0);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", func_00001B18);
#else
INCLUDE_ASM("nonmatchings/syscon", func_00001D14);
#endif

INCLUDE_ASM("nonmatchings/syscon", func_00001E60);

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetTimeStamp);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetGValue);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconWriteScratchPad);

INCLUDE_ASM("nonmatchings/syscon", sceSysconReadScratchPad);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconSendSetParam);

INCLUDE_ASM("nonmatchings/syscon", sceSysconReceiveSetParam);
#endif

#if FW_VERSION >= 151
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonWDT);
#else
s32 sceSysconCtrlTachyonWDT(u32 arg0) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x800001FE;
    if (arg0 < 0x80U) {
        var_v0 = 0;
        if (arg0 != 0) {
            var_v0 = arg0 | 0x80;
        }
        var_v1 = func_0000193C(var_v0, 0x31, 3);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/syscon", func_00001C40);

INCLUDE_ASM("nonmatchings/syscon", func_00001CF8);
#else
INCLUDE_ASM("nonmatchings/syscon", sceSysconResetDevice);

INCLUDE_ASM("nonmatchings/syscon", sceSysconPowerSuspend);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconNop);

void sceSysconGetBaryonVersion(s32 arg0) {
    func_00001444(arg0, 1);
}

#if FW_VERSION < 282
void sceSysconGetTachyonTemp(s32 arg0) {
    func_00001444(arg0, 5);
}
#endif

void sceSysconGetPowerSupplyStatus(s32 arg0) {
    func_00001444(arg0, 0xB);
}

#if FW_VERSION < 282
void sceSysconGetWakeUpFactor(s32 arg0) {
    func_00001444(arg0, 0xE);
}

void sceSysconGetWakeUpReq(s32 arg0) {
    func_00001444(arg0, 0xF);
}

void sceSysconReadClock(s32 arg0) {
    func_00001444(arg0, 9);
}

void sceSysconWriteClock(s32 arg0) {
    func_0000193C(arg0, 0x20, 6);
}

void sceSysconReadAlarm(s32 arg0) {
    func_00001444(arg0, 0xA);
}

void sceSysconWriteAlarm(s32 arg0) {
    func_0000193C(arg0, 0x22, 6);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconSendSetParam);

INCLUDE_ASM("nonmatchings/syscon", sceSysconReceiveSetParam);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetFallingDetectTime);

void sceSysconGetWakeUpFactor(s32 arg0) {
    func_00001444(arg0, 0xE);
}

void sceSysconGetWakeUpReq(s32 arg0) {
    func_00001444(arg0, 0xF);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetVideoCable);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void sceSysconGetVideoCable(s32 arg0) {
    func_00001444(arg0, 0x12);
}
#endif

#if FW_VERSION >= 282
void sceSysconReadClock(s32 arg0) {
    func_00001444(arg0, 9);
}

void sceSysconWriteClock(s32 arg0) {
    func_0000193C(arg0, 0x20, 6);
}

void sceSysconReadAlarm(s32 arg0) {
    func_00001444(arg0, 0xA);
}

void sceSysconWriteAlarm(s32 arg0) {
    func_0000193C(arg0, 0x22, 6);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconSetUSBStatus);
#endif

void sceSysconGetTachyonWDTStatus(s32 arg0) {
    func_00001444(arg0, 0xC);
}

void sceSysconCtrlAnalogXYPolling(s32 arg0) {
    func_0000193C(arg0, 0x33, 3);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlHRPower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconPowerStandby);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlPower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlLED);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlNandPower);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlDvePower);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlCharge);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonAvcPower);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", func_000029B8);

INCLUDE_ASM("nonmatchings/syscon", func_00002A40);
#endif

void sceSysconGetPommelVersion(s32 arg0) {
    func_00001444(arg0, 0x40);
}

void sceSysconGetPolestarVersion(s32 arg0) {
    func_00001444(arg0, 0x41);
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlVoltage);
#else
void sceSysconCtrlVoltage(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x42, 5);
}
#endif

#if FW_VERSION >= 282
void sceSysconGetGSensorVersion(s32 arg0) {
    func_00001444(arg0, 0x43);
}
#endif

#if FW_VERSION >= 300
void sceSysconCtrlGSensor(s32 arg0, s32 arg1, s32 arg2) {
    func_0000193C(((arg1 & 0xFF) << 8) | (arg0 & 0xFF), 0x44, 4);
}
#endif

#if FW_VERSION == 282
void sceSysconCtrlGSensor(s32 arg0, s32 arg1, s32 arg2) {
    func_0000193C(((arg2 & 0xFF) << 0x10) | ((arg1 & 0xFF) << 8) | (arg0 & 0xFF), 0x44, 4);
}
#endif

void sceSysconGetPowerStatus(s32 arg0) {
    func_00001444(arg0, 0x46);
}

void sceSysconWritePommelReg(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x48, 5);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconReadPommelReg);

#if FW_VERSION < 282
s32 sceSysconGetPowerError(s32 *arg0) {
    return func_00001444((s32) arg0, 0x4A);
}
#else
s32 sceSysconGetPowerError(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlLeptonPower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlMsPower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlWlanPower);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlHddPower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlBtPower);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlUsbPower);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconPermitChargeBattery);

INCLUDE_ASM("nonmatchings/syscon", sceSysconForbidChargeBattery);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonVmePower);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonAwPower);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonAvcPower);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlLcdPower);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", sceSysconGetGSensorCarib);

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetScvCode);
#endif

void sceSysconWritePolestarReg(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x4E, 5);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconReadPolestarReg);

#if FW_VERSION >= 282
void sceSysconWriteGSensorReg(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x50, 5);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconReadGSensorReg);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/syscon", sceSysconPermitChargeBattery);

INCLUDE_ASM("nonmatchings/syscon", sceSysconForbidChargeBattery);
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryGetStatusCap);

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryGetInfo);

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryWriteNVM);

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryReadNVM);

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryAuth);

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryNop);

void sceSysconBatteryGetTemp(s32 arg0) {
    func_000038C4(0x62, arg0);
}

void sceSysconBatteryGetVolt(s32 arg0) {
    func_000038C4(0x63, arg0);
}

void sceSysconBatteryGetElec(s32 arg0) {
    func_000038C4(0x64, arg0);
}

void sceSysconBatteryGetRCap(s32 arg0) {
    func_000038C4(0x65, arg0);
}

void sceSysconBatteryGetCap(s32 arg0) {
    func_000038C4(0x66, arg0);
}

void sceSysconBatteryGetFullCap(s32 arg0) {
    func_000038C4(0x67, arg0);
}

void sceSysconBatteryGetIFC(s32 arg0) {
    func_000038C4(0x68, arg0);
}

void sceSysconBatteryGetLimitTime(s32 arg0) {
    func_000038C4(0x69, arg0);
}

INCLUDE_ASM("nonmatchings/syscon", sceSysconBatteryGetStatus);

void sceSysconBatteryGetCycle(s32 arg0) {
    func_000038C4(0x6B, arg0);
}

void sceSysconBatteryGetSerial(s32 arg0) {
    func_000038C4(0x6C, arg0);
}

void sceSysconBatteryGetTempAD(s32 arg0) {
    func_000038C4(0x6E, arg0);
}

void sceSysconBatteryGetVoltAD(s32 arg0) {
    func_000038C4(0x6F, arg0);
}

void sceSysconBatteryGetElecAD(s32 arg0) {
    func_000038C4(0x70, arg0);
}

void sceSysconBatteryGetTotalElec(s32 arg0) {
    func_000038C4(0x71, arg0);
}

void sceSysconBatteryGetChargeTime(s32 arg0) {
    func_000038C4(0x72, arg0);
}

INCLUDE_ASM("nonmatchings/syscon", func_000038C4);

INCLUDE_ASM("nonmatchings/syscon", sceSysconCtrlTachyonVoltage);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/syscon", func_00002CF4);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/syscon", sceSyscon_driver_9C4E3CA9);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/syscon", func_00002CE4);
#endif

#if FW_VERSION == 271
s32 func_00003424(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 1) || (__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 0x11)) {
        var_s0 = 1;
    }
    return var_s0;
}
#endif

#if FW_VERSION < 201
s32 func_00002CE4(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 1) || (__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 0x11)) {
        var_s0 = 1;
    }
    return var_s0;
}

s32 func_00002D34(void) {
    return __builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) != 1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/syscon", func_00003AB0);
#endif

#if FW_VERSION == 282
s32 func_00003B1C(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 1) || (__builtin_allegrex_ext(_sceSysconGetBaryonVersion(), 8, 8) == 0x11)) {
        var_s0 = 1;
    }
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/syscon", sceSysconGetDigitalKey);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/syscon", func_00003968);

INCLUDE_ASM("nonmatchings/syscon", func_00003A78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/syscon", sceSysconMsOn);

INCLUDE_ASM("nonmatchings/syscon", sceSysconMsOff);

INCLUDE_ASM("nonmatchings/syscon", sceSysconWlanOn);

INCLUDE_ASM("nonmatchings/syscon", sceSysconWlanOff);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/syscon", func_00003BC4);
#endif

INCLUDE_ASM("nonmatchings/syscon", func_00003D18);
