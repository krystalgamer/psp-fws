#include "common.h"
#include "mediaman_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mediaman", func_00000000);

INCLUDE_ASM("nonmatchings/mediaman", func_00000090);

INCLUDE_ASM("nonmatchings/mediaman", func_0000018C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", func_00000264);

INCLUDE_ASM("nonmatchings/mediaman", func_000002C0);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3D0DECD5);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D45D1FE6);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D01B2DC6);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3925CBD8);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_AE53DC2D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_230666E3);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_9B22AED7);

INCLUDE_ASM("nonmatchings/mediaman", func_0000042C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00000000_v100);

s32 module_start(void) {
    return func_00000138() != 0;
}

INCLUDE_ASM("nonmatchings/mediaman", func_00000138);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_B8479844);

INCLUDE_ASM("nonmatchings/mediaman", func_00000248);

INCLUDE_RODATA("nonmatchings/mediaman", D_000028C0);

INCLUDE_ASM("nonmatchings/mediaman", func_000002E0);

INCLUDE_ASM("nonmatchings/mediaman", func_000004AC);

INCLUDE_ASM("nonmatchings/mediaman", func_000007C4);

INCLUDE_ASM("nonmatchings/mediaman", func_000008B4);

INCLUDE_ASM("nonmatchings/mediaman", func_0000098C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3342000C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_28355079);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_E71270FA);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_BE17B77C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_8EF268AC);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_04D1AAD9);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_08709F2D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_AD18C797);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_27A764A1);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_F8FD25E7);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_7AA26C9A);

INCLUDE_RODATA("nonmatchings/mediaman", D_000028FC);

INCLUDE_ASM("nonmatchings/mediaman", func_00000F7C);

INCLUDE_ASM("nonmatchings/mediaman", func_000011DC);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_AE53DC2D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_230666E3);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D45D1FE6);

INCLUDE_ASM("nonmatchings/mediaman", func_00001378);

INCLUDE_ASM("nonmatchings/mediaman", func_00001448);

INCLUDE_ASM("nonmatchings/mediaman", func_00001454);

INCLUDE_ASM("nonmatchings/mediaman", func_00001524);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D01B2DC6);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_003E3396);

INCLUDE_ASM("nonmatchings/mediaman", func_000015A0);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_9CADBF19);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_7F38693E);

INCLUDE_ASM("nonmatchings/mediaman", func_000018DC);

INCLUDE_ASM("nonmatchings/mediaman", func_000018E8);

INCLUDE_ASM("nonmatchings/mediaman", func_000018F4);

INCLUDE_ASM("nonmatchings/mediaman", func_00001928);

INCLUDE_ASM("nonmatchings/mediaman", func_00001934);

INCLUDE_ASM("nonmatchings/mediaman", func_00001940);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3D0DECD5);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_84231FCF);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", func_000019AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_00001A04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_7850F057);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_27A764A1);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_F8352373);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_5469DC37);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_319ED97C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_BBB5F05C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_086DDC0D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_2D81508D);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/mediaman", D_00000F5C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/mediaman", D_00000F7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", module_start);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdActivate);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatWithTimer);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatCB);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_075F1E0B);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDiscInfo);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_EB56097E);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdCheckMedium);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStat);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdCancelWaitDriveStat);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_F6AC1DBA);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_1FB77367);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_18624052);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_A140DEC2);

INCLUDE_ASM("nonmatchings/mediaman", func_00000000);

INCLUDE_ASM("nonmatchings/mediaman", func_00001C60);

INCLUDE_ASM("nonmatchings/mediaman", func_00001C98);

INCLUDE_ASM("nonmatchings/mediaman", func_00001CA4);

INCLUDE_ASM("nonmatchings/mediaman", func_00001CDC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", func_00000254);

INCLUDE_ASM("nonmatchings/mediaman", func_000002B0);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_659587F7);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3D0DECD5);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D45D1FE6);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_D01B2DC6);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_3925CBD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_0F7E578A);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_AE53DC2D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_230666E3);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_9B22AED7);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_71F81482);

INCLUDE_ASM("nonmatchings/mediaman", func_00000514);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_7850F057);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_27A764A1);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_F8352373);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_5469DC37);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_319ED97C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_BBB5F05C);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_086DDC0D);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_2D81508D);

INCLUDE_RODATA("nonmatchings/mediaman", D_0000129C);

INCLUDE_ASM("nonmatchings/mediaman", module_start);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_4832ABF3);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_4BA25F4A);

INCLUDE_ASM("nonmatchings/mediaman", func_0000090C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdActivate);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatWithTimer);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStatCB);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdRegisterUMDCallBack);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_075F1E0B);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdUnRegisterUMDCallBack);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmdDeactivate);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDiscInfo);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_EB56097E);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdCheckMedium);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdWaitDriveStat);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetDriveStat);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceUmdGetDriveStat(void) {
    sceUmd_D45D1FE6();
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStat);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mediaman", func_0000221C);

INCLUDE_ASM("nonmatchings/mediaman", func_00002248);

s32 sceUmd_725DFB14(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelEnableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 sceUmd_7F40CC41(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelDisableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

void sceUmd_1A2485D2(void) {
    if (sceGpio_driver_317D9D2C(0x1A, 1) >= 0) {
        sceGpio_driver_37C8DADC(0x1A, 4);
    }
}

void sceUmd_3BA4EC53(void) {
    sceGpio_driver_317D9D2C(0x1A, 2);
}

INCLUDE_ASM("nonmatchings/mediaman", func_0000235C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdCancelWaitDriveStat);

void sceUmdGetDriveStat(void) {
    sceUmd_D45D1FE6();
}

INCLUDE_ASM("nonmatchings/mediaman", sceUmdGetErrorStat);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mediaman", sceUmd_6A41ED25);

INCLUDE_ASM("nonmatchings/mediaman", sceUmd_4C952ACF);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mediaman", sceUmdReplaceProhibit);

INCLUDE_ASM("nonmatchings/mediaman", sceUmdReplacePermit);
#endif
