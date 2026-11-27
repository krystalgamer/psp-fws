/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "me_wrapper_decls.h"

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000000);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000124);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000001D8);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000378);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000004A8);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000548);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000006A8);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_B655AD4E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_06F0236A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_176BBE07);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_DE2E7E89);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_E67F4E0A);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/me_wrapper", D_000025C8);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000025CC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000025E4);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000025F8);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002610);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_0000262C);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002644);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002658);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002678);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002690);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000026A4);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000026BC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000026CC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000026EC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002700);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000027E8);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000027FC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_0000282C);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002840);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002868);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_0000287C);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002894);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000028A8);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000028D8);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000028EC);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002914);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002924);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002934);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002948);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002950);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002974);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002984);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002988);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002990);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002994);

INCLUDE_RODATA("nonmatchings/me_wrapper", D_000029C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_1C6A60E1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_C00D873B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_B655AD4E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_06F0236A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_176BBE07);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_DE2E7E89);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_E67F4E0A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_1C6A60E1);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_C00D873B);
#endif

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00001F8C);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_000007D4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000009D4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000B40);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_1C6A60E1);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_C00D873B);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_FEE0A97D);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_3D6CC0D9);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_BAC7C2BE);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_39F06790);

void sceMeMemory_driver_A177798D(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x180, arg0);
}

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeMemory_driver_C86500E3);

void sceMeMemory_driver_5AD660FA(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x181, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/me_wrapper", func_0000106C);

INCLUDE_ASM("nonmatchings/me_wrapper", func_0000109C);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000010C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000CF0);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D1C);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_FEE0A97D);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_BAC7C2BE);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_39F06790);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_A177798D);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_C86500E3);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_5AD660FA);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000CE4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D10);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D38);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000E08);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000E24);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000F08);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000F48);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000F80);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000FB8);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D28);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D58);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000EFC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeEnableFunctions);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMePowerControlAvcPower);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePowerControlDmacplusClock);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePowerSetCpuClockGear);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePowerSetBusClockGear);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/me_wrapper", sceMePowerSelectAvcClock);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION >= 300
void sceMePowerSelectAvcClock(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceMeCore_driver_3D5F109C(8, arg0);
    setK1(temp_s0);
}
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001070);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_000010AC);

INCLUDE_ASM("nonmatchings/me_wrapper", func_0000111C);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_0000129C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001528);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000010B0);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001120);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_D1EA3DFD);

void sceMeCore_driver_04AFF68E(void) {
    sceKernelWaitSema(D_00001F60, 1, NULL);
}

void sceMeCore_driver_B97B15D7(void) {
    sceKernelSignalSema(D_00001F60, 1);
}

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000EE4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_D1EA3DFD);

void sceMeWrapper_driver_04AFF68E(void) {
    sceKernelWaitSema(D_00001A30, 1, NULL);
}

void sceMeWrapper_driver_B97B15D7(void) {
    sceKernelSignalSema(D_00001A30, 1);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001200);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001114);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001174);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_04AFF68E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_B97B15D7);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000012A4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000012D4);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_D1EA3DFD);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000014E4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001588);
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001624);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001560);
#endif

#if FW_VERSION >= 280
INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002A64);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapperInit);
#endif

#if FW_VERSION == 100
s32 sceMeWrapperInit(void) {
    func_00001070();
    sceKernelRegisterSysEventHandler(&D_000019F0);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapperEnd);
#else
s32 sceMeWrapperEnd(void) {
    sceSysregVmeResetEnable();
    sceSysregAvcResetEnable();
    sceSysregMeResetEnable();
    sceSysregMeBusClockDisable();
    sceKernelUnregisterSysEventHandler(&D_000019F0);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/me_wrapper", func_000015EC);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018B4_v250);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_000019C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000015B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_000012D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001368);

INCLUDE_ASM("nonmatchings/me_wrapper", func_0000145C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000016D4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000017B0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018B4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001A44);
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001918);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001B58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001C90);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001B84);
#endif

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002048);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeBootStart);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/me_wrapper", func_0000210C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeEnableFunctions);
#endif

#if FW_VERSION >= 271
void sceMeEnableFunctions(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x185, arg0);
}
#endif
