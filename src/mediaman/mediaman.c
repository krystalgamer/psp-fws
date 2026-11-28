/* cflags[201,250,260]: -O2 -frename-registers */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "mediaman_decls.h"

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/mediaman", func_00000000_v103);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/mediaman", func_00000000_v102);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000000);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/mediaman", D_000010B0);

INCLUDE_RODATA("nonmatchings/mediaman", D_000010B4);

INCLUDE_RODATA("nonmatchings/mediaman", D_000010D4);

INCLUDE_RODATA("nonmatchings/mediaman", D_000010EC);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001104);

INCLUDE_RODATA("nonmatchings/mediaman", D_0000111C);

INCLUDE_RODATA("nonmatchings/mediaman", D_0000112C);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001144);

INCLUDE_RODATA("nonmatchings/mediaman", D_0000114C);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001284);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001290);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mediaman", D_00001300_v352);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001308_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/mediaman", D_00001300_v351);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001308_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/mediaman", D_00001300_v350);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001308_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/mediaman", D_00001310);

INCLUDE_RODATA("nonmatchings/mediaman", D_00001314);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mediaman", D_00001328_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/mediaman", D_00001328_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/mediaman", D_00001328_v350);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000090);

INCLUDE_ASM("nonmatchings/mediaman", func_0000018C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", func_00000264);

INCLUDE_ASM("nonmatchings/mediaman", func_000002C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_659587F7);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetUserEventFlagId);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdGetUserEventFlagId(void) {
    return D_00000FDC;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStatus);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetAssignedFlag);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdGetAssignedFlag(void) {
    return D_00000FD0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetAssignedFlag);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdSetAssignedFlag(s32 arg0) {
    D_00000FD0 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdClearDriveStatus);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetDriveStatus);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdSetDriveStatus(u32 arg0) {
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    D_00000FD4 |= arg0;
    sceKernelSetEventFlag(D_00000FDC, arg0);
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetErrorStatus);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdSetErrorStatus(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00000FD8 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStatus);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000042C(void) {
    return D_00000FD8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00000000_v100);
#endif

#if FW_VERSION < 150
s32 module_start(void) {
    return func_00000138() != 0;
}

INCLUDE_ASM("nonmatchings/mediaman", func_00000138);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdCallBackInit);

INCLUDE_ASM("nonmatchings/mediaman", func_00000248);

INCLUDE_RODATA("nonmatchings/mediaman", D_000028C0);

INCLUDE_ASM("nonmatchings/mediaman", func_000002E0);

INCLUDE_ASM("nonmatchings/mediaman", func_000004AC);

INCLUDE_ASM("nonmatchings/mediaman", func_000007C4);

INCLUDE_ASM("nonmatchings/mediaman", func_000008B4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000A00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_0000098C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmdIsUMD);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterSuspendResumeUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterSuspendResumeUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterInsertEjectUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterInsertEjectUMDCallBack);

s32 sceUmdUnRegisterPowerOnOffUMDCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002980, s32, 0x9C) = 0;
    M2C_VFIELD(&D_00002980, s32, 0x8C) = 0;
    M2C_VFIELD(&D_00002980, s32, 0xFC) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000EF8);
#endif

#if FW_VERSION == 100
s32 sceUmdAssertLeptonWakeup(void) {
    sceGpioPortSet(0x02000000);
    s32 cmp_tmp = sceGpioPortRead() & 0x02000000;
    return cmp_tmp == 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmdNegateLeptonWakeup);

s32 sceUmdUnRegisterGetUMDInfoCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002980, s32, 0xF0) = 0;
    M2C_VFIELD(&D_00002980, s32, 0x88) = 0;
    M2C_VFIELD(&D_00002980, s32, 0x98) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}

s32 sceUmd_F8FD25E7(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002980, s32, 0xF8) = 0;
    M2C_VFIELD(&D_00002980, s32, 0x94) = 0;
    M2C_VFIELD(&D_00002980, s32, 0xA0) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}

void sceUmdUnRegisterActivateDVDCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002980, s32, 0xF4) = 0;
    M2C_VFIELD(&D_00002980, s32, 0x90) = 0;
    M2C_VFIELD(&D_00002980, s32, 0xA4) = 0;
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000000);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/mediaman", D_000028FC);

INCLUDE_ASM("nonmatchings/mediaman", func_00000F7C);

INCLUDE_ASM("nonmatchings/mediaman", func_000011DC);

void sceUmdClearDriveStatus(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00002AF0 &= ~arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void sceUmdSetDriveStatus(u32 arg0) {
    D_00002AF0 |= arg0;
    sceKernelSetEventFlag(D_00002B50, arg0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_000014C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStatus);

INCLUDE_ASM("nonmatchings/mediaman", func_00001378);
#endif

#if FW_VERSION < 150
void func_00001448(s32 arg0) {
    D_00002B40 = arg0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_000015CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00001454);
#endif

#if FW_VERSION < 150
void func_00001524(s32 arg0) {
    D_00002B30 = arg0;
}

s32 sceUmdGetAssignedFlag(void) {
    return D_000012F8;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_000016E0);

INCLUDE_ASM("nonmatchings/mediaman", func_00001758);

INCLUDE_ASM("nonmatchings/mediaman", func_00001980);

INCLUDE_ASM("nonmatchings/mediaman", func_0000198C);

INCLUDE_ASM("nonmatchings/mediaman", func_00001998);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetUMDPower);

INCLUDE_ASM("nonmatchings/mediaman", func_000015A0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetActivateData);

s32 sceUmdSetDeactivateData(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80010013;
    if (strcmp(arg1, &D_00002BC0) == 0) {
        D_00002B10 = arg0;
        var_v1 = 0;
    }
    return var_v1;
}

void func_000018DC(s32 arg0) {
    D_00002AE0 = arg0;
}

s32 func_000018E8(void) {
    return D_00002AE0;
}

void func_000018F4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00002B00 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_00001928(void) {
    return D_00002B00;
}

s32 func_00001934(void) {
    return D_00002B70;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00001B2C);
#endif

#if FW_VERSION < 150
s32 func_00001940(void) {
    return D_00002B90;
}

s32 sceUmdGetUserEventFlagId(void) {
    return D_00002B50;
}

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterPowerOnOffUMDCallBack);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00001BC0);

INCLUDE_ASM("nonmatchings/mediaman", func_00001C24);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/mediaman", func_000019AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00001A04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterGetUMDInfoCallBack);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterGetUMDInfoCallBack);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdUnRegisterGetUMDInfoCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00000FA0, s32, 0x20) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 8) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 0x18) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterMediaPresentCallBack);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterMediaPresentCallBack);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdUnRegisterMediaPresentCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00000FA0, s32, 0x1C) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 0xC) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 0x24) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterActivateCallBack);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterDeactivateCallBack);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdUnRegisterDeactivateCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00000FA0, s32, 0x2C) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 4) = 0;
    M2C_VFIELD(&D_00000FA0, s32, 0x14) = 0;
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterActivateCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterDeactivateCallBack);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mediaman", D_00000F5C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/mediaman", D_00000F7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", module_start);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterReplaceCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterReplaceCallBack);

INCLUDE_ASM("nonmatchings/mediaman", func_0000090C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdActivate);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatWithTimer);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatCB);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterUMDCallBack);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetDetectUMDCallBackId);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdSetDetectUMDCallBackId(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00001004 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterUMDCallBack);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdUnRegisterUMDCallBack(s32 arg0) {
    s32 var_a0;
    u32 temp_v1;

    var_a0 = arg0;
    temp_v1 = shiftK1();
    if (D_00001004 == var_a0) {
        D_00001004 = 0;
    } else {
        var_a0 = 0x80010016;
    }
    setK1(temp_v1);
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDiscInfo);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdGetDiscInfo(s32 *arg0) {
    s32 var_a1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_a1 = 0x80010016;
    if (*arg0 == 8) {
        var_a1 = func_00000000((s32) arg0);
    }
    setK1(temp_s0);
    return var_a1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDetectUMDCallBackId);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdGetDetectUMDCallBackId(void) {
    return D_00001004;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdCheckMedium);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStat);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdCancelWaitDriveStat);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_F6AC1DBA);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterActivateDVDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterGetUMDPowerOnOffCallBack);

s32 sceUmdUnRegisterGetUMDPowerOnOffCallBack(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002980, s32, 0x140) = 0;
    M2C_VFIELD(&D_00002980, s32, 0xA8) = 0;
    M2C_VFIELD(&D_00002980, s32, 0xAC) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStatus);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/mediaman", func_00001F2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00000000);
#endif

#if FW_VERSION < 103
void func_00001C60(void) {
    sceUmdDisableUMDDetectIntr();
    func_00001448(0x80000021);
    sceKernelSetEventFlag(D_00002B90, 0x100U);
}
#endif

#if FW_VERSION < 150
s32 func_00001C98(void) {
    return D_00002B40;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00001CA4);
#endif

#if FW_VERSION == 100
void func_00001CA4(void) {
    sceUmdDisableUMDDetectIntr();
    func_00001524(0x80000021);
    sceKernelSetEventFlag(D_00002B90, 0x200U);
}
#endif

#if FW_VERSION < 150
s32 func_00001CDC(void) {
    return D_00002B30;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", func_00000254);

INCLUDE_ASM("nonmatchings/mediaman", func_000002B0);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_659587F7);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetUserEventFlagId);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStatus);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetAssignedFlag);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetAssignedFlag);
#endif

#if FW_VERSION < 150
void sceUmdSetAssignedFlag(s32 arg0) {
    D_000012F8 = arg0;
}

s32 sceUmd_0F7E578A(void) {
    return D_00002B60;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00001E9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdClearDriveStatus);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetDriveStatus);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetErrorStatus);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStatus);

INCLUDE_ASM("nonmatchings/mediaman", func_00000514);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterGetUMDInfoCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterGetUMDInfoCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterMediaPresentCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterMediaPresentCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterActivateCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterDeactivateCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterActivateCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterDeactivateCallBack);

INCLUDE_RODATA("nonmatchings/mediaman", D_0000129C);

INCLUDE_ASM("nonmatchings/mediaman", module_start);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterReplaceCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterReplaceCallBack);

INCLUDE_ASM("nonmatchings/mediaman", func_0000090C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterUMDCallBack);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdActivate);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatWithTimer);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00002014);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatCB);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterUMDCallBack);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetDetectUMDCallBackId);
#endif

#if FW_VERSION < 150
void sceUmdSetDetectUMDCallBackId(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000132C = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterUMDCallBack);
#endif

#if FW_VERSION < 150
s32 sceUmdUnRegisterUMDCallBack(s32 arg0) {
    s32 var_a0;
    u32 temp_v1;

    var_a0 = arg0;
    temp_v1 = shiftK1();
    if (D_0000132C == var_a0) {
        D_0000132C = 0;
    } else {
        var_a0 = 0x80010016;
    }
    setK1(temp_v1);
    return var_a0;
}

INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDiscInfo);
#endif

#if FW_VERSION < 150
s32 sceUmdGetDiscInfo(s32 *arg0) {
    s32 var_a1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_a1 = 0x80010016;
    if (*arg0 == 8) {
        var_a1 = func_00000000((s32) arg0);
    }
    setK1(temp_s0);
    return var_a1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDetectUMDCallBackId);
#endif

#if FW_VERSION < 150
s32 sceUmdGetDetectUMDCallBackId(void) {
    return D_0000132C;
}
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdCheckMedium);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStat);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStat);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceUmdGetDriveStat(void) {
    sceUmdGetDriveStatus();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStat);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetSuspendResumeMode);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetSuspendResumeMode);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_0000221C);

INCLUDE_ASM("nonmatchings/mediaman", func_00002248);

s32 sceUmdEnableUMDDetectIntr(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelEnableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 sceUmdDisableUMDDetectIntr(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelDisableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mediaman", func_00002480);
#endif

#if FW_VERSION == 100
void sceUmdUseUMDDetectIntr(void) {
    if (sceGpioSetPortMode(0x1A, 1) >= 0) {
        sceGpioSetIntrMode(0x1A, 4);
    }
}
#endif

#if FW_VERSION < 150
void sceUmdUnuseUMDDetectIntr(void) {
    sceGpioSetPortMode(0x1A, 2);
}

INCLUDE_ASM("nonmatchings/mediaman", func_0000235C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdCancelWaitDriveStat);

void sceUmdGetDriveStat(void) {
    sceUmdGetDriveStatus();
}

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStat);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetSuspendResumeMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceUmdGetSuspendResumeMode(void) {
    return D_00001000;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mediaman", sceUmdSetSuspendResumeMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdSetSuspendResumeMode(s32 arg0) {
    D_00001000 = arg0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mediaman", sceUmdReplaceProhibit);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdReplacePermit);
#endif
