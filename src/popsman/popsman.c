#include "common.h"
#include "k1.h"
#include "popsman_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManInit);

s32 scePopsManEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00003A84);
    return 0;
}

s32 scePopsManSuspend(void) {
    return 0;
}

s32 scePopsManResume(void) {
    return 0;
}
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/popsman", D_00002EDC);

INCLUDE_RODATA("nonmatchings/popsman", D_00002EE0);

INCLUDE_RODATA("nonmatchings/popsman", D_00002EFC);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F10);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F30);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F48);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F60);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F74);

INCLUDE_RODATA("nonmatchings/popsman", D_00002F88);

INCLUDE_RODATA("nonmatchings/popsman", D_00002FA0);

INCLUDE_RODATA("nonmatchings/popsman", D_00002FB8);

INCLUDE_RODATA("nonmatchings/popsman", D_00002FD0);

INCLUDE_RODATA("nonmatchings/popsman", D_00002FE8);

INCLUDE_RODATA("nonmatchings/popsman", D_00003000);

INCLUDE_RODATA("nonmatchings/popsman", D_00003018);

INCLUDE_RODATA("nonmatchings/popsman", D_00003030);

INCLUDE_RODATA("nonmatchings/popsman", D_00003044);

INCLUDE_RODATA("nonmatchings/popsman", D_0000305C);

INCLUDE_RODATA("nonmatchings/popsman", D_00003074);

INCLUDE_RODATA("nonmatchings/popsman", D_00003088);

INCLUDE_RODATA("nonmatchings/popsman", D_00003098);

INCLUDE_RODATA("nonmatchings/popsman", D_000030B8);

INCLUDE_RODATA("nonmatchings/popsman", D_000030C4);

INCLUDE_RODATA("nonmatchings/popsman", D_00003164);

INCLUDE_RODATA("nonmatchings/popsman", D_00003178);

INCLUDE_RODATA("nonmatchings/popsman", D_00003198);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/popsman", D_000032EC);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/popsman", D_000031A4);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/popsman", D_000031CC);

INCLUDE_RODATA("nonmatchings/popsman", D_000031D8);

INCLUDE_RODATA("nonmatchings/popsman", D_000032D0);

INCLUDE_RODATA("nonmatchings/popsman", D_000032D4);

INCLUDE_RODATA("nonmatchings/popsman", D_000032DC);

INCLUDE_RODATA("nonmatchings/popsman", D_000032F0);

INCLUDE_RODATA("nonmatchings/popsman", D_000032F4);

INCLUDE_RODATA("nonmatchings/popsman", D_000032FC);

INCLUDE_RODATA("nonmatchings/popsman", D_0000330C);

INCLUDE_RODATA("nonmatchings/popsman", D_0000331C);

INCLUDE_RODATA("nonmatchings/popsman", D_00003330);

INCLUDE_RODATA("nonmatchings/popsman", D_00003334);

INCLUDE_RODATA("nonmatchings/popsman", D_00003340);

INCLUDE_RODATA("nonmatchings/popsman", D_00003344);

INCLUDE_RODATA("nonmatchings/popsman", D_00003348);

INCLUDE_RODATA("nonmatchings/popsman", D_0000334C);

INCLUDE_RODATA("nonmatchings/popsman", D_00003354);

INCLUDE_RODATA("nonmatchings/popsman", D_00003358);

INCLUDE_RODATA("nonmatchings/popsman", D_00003364);

INCLUDE_RODATA("nonmatchings/popsman", D_0000336C);

INCLUDE_RODATA("nonmatchings/popsman", D_00003370);
#endif

INCLUDE_RODATA("nonmatchings/popsman", D_000011A0);

#if FW_VERSION >= 330 && FW_VERSION < 351
INCLUDE_RODATA("nonmatchings/popsman", D_00002354);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManLoadModule);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/popsman", D_000033D8_v351);

INCLUDE_RODATA("nonmatchings/popsman", D_00003418);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsManExitVSHKernel);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManLoadModule);

INCLUDE_ASM("nonmatchings/popsman", func_00000424);
#else
INCLUDE_ASM("nonmatchings/popsman", module_start);
#endif

INCLUDE_ASM("nonmatchings/popsman", module_reboot_before);

#if FW_VERSION == 352
s32 module_start(void) {
    func_0000061C();
    memset(&D_00003B18, 0, 0x40);
    D_00003A80 = &D_00003B18;
    sceKernelRegisterSysEventHandler(&D_00003A84);
    func_00001D70();
    return 0;
}

INCLUDE_ASM("nonmatchings/popsman", func_000004B0);
#else
INCLUDE_ASM("nonmatchings/popsman", scePopsManInit);

INCLUDE_ASM("nonmatchings/popsman", scePopsManEnd);

s32 scePopsManSuspend(void) {
    return 0;
}

s32 scePopsManResume(void) {
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
void func_000003E8(void) {
    func_00001008();
}
#endif

#if FW_VERSION >= 303 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_632F80A0);
#endif

#if FW_VERSION < 330
s32 func_0000032C(void) {
    return 0;
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00000334);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/popsman", scePopsManCheckData);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManIsoHeaderRead);

INCLUDE_ASM("nonmatchings/popsman", func_00000588);

INCLUDE_ASM("nonmatchings/popsman", func_000005DC);
#else
M2C_UNK *func_000005DC(void) {
    return &D_00003BEC;
}

INCLUDE_ASM("nonmatchings/popsman", func_000004FC);

INCLUDE_ASM("nonmatchings/popsman", func_000005D0);

INCLUDE_ASM("nonmatchings/popsman", func_0000061C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_000005E8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_000006FC);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_00000808);
#endif

#if FW_VERSION >= 340 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManCheckData);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_driver_92E9E38D);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsManIsoOpen);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_F1D672CE);

INCLUDE_ASM("nonmatchings/popsman", scePopsManCheckData);

INCLUDE_ASM("nonmatchings/popsman", scePopsManIsoHeaderRead);

s32 scePopsManDocClose(void) {
    s32 var_v1;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v1 = -1;
    if (D_00003AC4 >= 0) {
        var_v1 = sceIoClose(D_00003AC4);
    }
    D_00003AC4 = -1;
    setK1(temp_s0);
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/popsman", func_00000724);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00000830);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsManDocSetImage);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManDocOpen);

INCLUDE_ASM("nonmatchings/popsman", scePopsManDocRead);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsManDocLseek);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/popsman", D_00003540);

INCLUDE_RODATA("nonmatchings/popsman", D_00003580_v352);
#else
INCLUDE_ASM("nonmatchings/popsman", scePopsManDocClose);

INCLUDE_ASM("nonmatchings/popsman", func_00000A44);
#endif

#if FW_VERSION >= 340 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00000EF4);

INCLUDE_ASM("nonmatchings/popsman", func_000013D4);
#endif

INCLUDE_RODATA("nonmatchings/popsman", D_000011D4);

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/popsman", D_00003390);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/popsman", D_000035A8);

INCLUDE_ASM("nonmatchings/popsman", scePopsManDocOpen);

INCLUDE_ASM("nonmatchings/popsman", scePopsManDocRead);

INCLUDE_ASM("nonmatchings/popsman", scePopsManGetEdramSize);
#endif

#if FW_VERSION >= 340 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00001460);

INCLUDE_ASM("nonmatchings/popsman", func_000016A4);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/popsman", func_00000B04);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManImposeGetBatteryIconStatus);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsManImposeGetParam);

INCLUDE_ASM("nonmatchings/popsman", scePopsManImposeChanges);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", scePopsManImposeGetBatteryIconStatus);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_BF224726);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void scePopsManGetEdramSize(void) {
    sceGeEdramSetSize(0x400000);
    sceGeEdramGetSize();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00000F74);

INCLUDE_ASM("nonmatchings/popsman", func_00001008);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_00000E34);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", func_00001D70);

void sceMeAudioScLockv352(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioScUnlockv352);

INCLUDE_ASM("nonmatchings/popsman", func_00001DF8);
#endif

#if FW_VERSION == 351
void sceMeAudioScLockv35(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

void sceMeAudioScUnlockv35(void) {
    sceSysregSemaUnlock();
}
#endif

#if FW_VERSION == 340
void sceMeAudioScLockv34(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

void sceMeAudioScUnlockv34(void) {
    sceSysregSemaUnlock();
}
#endif

#if FW_VERSION == 330
void sceMeAudioScLockv33(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

void sceMeAudioScUnlockv33(void) {
    sceSysregSemaUnlock();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void sceMeAudioScLock(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

void sceMeAudioScUnlock(void) {
    sceSysregSemaUnlock();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00000F1C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", func_00000F94);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_0000111C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", func_00002048);

INCLUDE_ASM("nonmatchings/popsman", func_00002378);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetPausev352);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetVolumev352);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioRegisterTickCallbackv352);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_000011CC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00001548);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", func_000013A0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_00001698);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/popsman", sceMeAudioRegisterTickCallbackv35);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetPausev35);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetVolumev35);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/popsman", sceMeAudioRegisterTickCallbackv34);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetPausev34);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetVolumev34);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/popsman", sceMeAudioRegisterTickCallbackv33);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetPausev33);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetVolumev33);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", sceMeAudioRegisterTickCallback);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetPause);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudioSetVolume);
#endif

#if FW_VERSION >= 310
void sceAudioOutput(void) {

}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", sceAudioOutputBlocking);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 352
void sceAudioOutputBlocking(void) {
    sceKernelDelayThread(0x2710U);
}
#endif

#if FW_VERSION >= 310
void sceAudioOutputPanned(void) {

}

void sceAudioOutputPannedBlocking(void) {

}

void sceAudioChReserve(void) {

}

void sceAudioChRelease(void) {

}

void sceAudioGetChannelRestLength(void) {

}

void sceAudioSetChannelDataLen(void) {

}

void sceAudioChangeChannelConfig(void) {

}

void sceAudioChangeChannelVolume(void) {

}

void sceAudioOutput2Reserve(void) {

}

INCLUDE_ASM("nonmatchings/popsman", sceAudioOutput2Release);

void sceAudioOutput2OutputBlocking(void) {

}

void sceAudioOutput2ChangeLength(void) {

}

INCLUDE_ASM("nonmatchings/popsman", sceAudioOutput2GetRestSample);

void sceAudioSRCChReserve(void) {

}

void sceAudioSRCChRelease(void) {

}

void sceAudioSRCOutputBlocking(void) {

}

void sceAudioInputBlocking(void) {

}

void sceAudioInput(void) {

}

INCLUDE_ASM("nonmatchings/popsman", sceAudioGetInputLength);

INCLUDE_ASM("nonmatchings/popsman", sceAudioWaitInputEnd);

void sceAudioInputInit(void) {

}

void sceAudioInputInitEx(void) {

}

INCLUDE_ASM("nonmatchings/popsman", sceAudioPollInputEnd);

void sceAudioGetChannelRestLen(void) {

}

void sceAudioOneshotOutput(void) {

}
#endif

#if FW_VERSION >= 340 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_000023A8);

INCLUDE_ASM("nonmatchings/popsman", func_000024B0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_000025BC);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/popsman", func_000025E8);

INCLUDE_ASM("nonmatchings/popsman", func_00002630);

INCLUDE_ASM("nonmatchings/popsman", func_00002678);
#endif

#if FW_VERSION >= 340 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/popsman", func_000025DC);

INCLUDE_ASM("nonmatchings/popsman", func_00002668);

INCLUDE_ASM("nonmatchings/popsman", func_000026E0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_00002780);

INCLUDE_ASM("nonmatchings/popsman", func_00002820);

INCLUDE_ASM("nonmatchings/popsman", func_0000287C);

INCLUDE_ASM("nonmatchings/popsman", func_000028BC);

INCLUDE_ASM("nonmatchings/popsman", func_00002908);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/popsman", D_000035CC);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/popsman", D_000033D8);

INCLUDE_RODATA("nonmatchings/popsman", D_00003458);

INCLUDE_RODATA("nonmatchings/popsman", D_00003580);

INCLUDE_RODATA("nonmatchings/popsman", D_00003600);

INCLUDE_RODATA("nonmatchings/popsman", D_00003800);

INCLUDE_RODATA("nonmatchings/popsman", D_00003840);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/popsman", D_00002284);
#endif
