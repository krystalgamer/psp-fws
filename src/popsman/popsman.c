#include "common.h"
#include "popsman_decls.h"

#if FW_VERSION == 351
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

INCLUDE_RODATA("nonmatchings/popsman", D_000031A4);

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

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_29B3FB24);

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/popsman", D_000033D8_v351);

INCLUDE_RODATA("nonmatchings/popsman", D_00003418);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_0090B2C8);

INCLUDE_ASM("nonmatchings/popsman", module_start);

INCLUDE_ASM("nonmatchings/popsman", module_reboot_before);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_driver_F03F1227);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_driver_04B14718);

s32 scePopsMan_driver_8666B52F(void) {
    return 0;
}

s32 scePopsMan_driver_F74199F8(void) {
    return 0;
}

#if FW_VERSION >= 330
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

INCLUDE_ASM("nonmatchings/popsman", func_00000334);

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_2E18E4E9);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_6768B22F);

INCLUDE_ASM("nonmatchings/popsman", func_00000588);

INCLUDE_ASM("nonmatchings/popsman", func_000005DC);

INCLUDE_ASM("nonmatchings/popsman", func_000005E8);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_000006FC);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_00000808);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_2E18E4E9);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_driver_92E9E38D);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_56EEB969);

INCLUDE_ASM("nonmatchings/popsman", func_00000724);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_00000830);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_EF8F686E);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_53F9ABD2);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_FC56480E);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_875F4C05);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_03971322);

INCLUDE_ASM("nonmatchings/popsman", func_00000A44);

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_00000EF4);

INCLUDE_ASM("nonmatchings/popsman", func_000013D4);
#endif

INCLUDE_RODATA("nonmatchings/popsman", D_000011D4);

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/popsman", D_00003390);

INCLUDE_ASM("nonmatchings/popsman", func_00001460);

INCLUDE_ASM("nonmatchings/popsman", func_000016A4);
#else
INCLUDE_ASM("nonmatchings/popsman", func_00000B04);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_EC94C50C);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_065C7F0B);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_B262B44F);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_BF224726);
#endif

#if FW_VERSION >= 310
void scePopsMan_4F7628CC(void) {
    sceGe_driver_5BAA5439(0x400000);
    sceGeEdramGetSize();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/popsman", func_00000F74);

INCLUDE_ASM("nonmatchings/popsman", func_00001008);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_00000E34);
#endif

#if FW_VERSION == 351
void sceMeAudio_A345F290(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_7EFCF769(void) {
    sceSysreg_driver_8BE2D520();
}
#endif

#if FW_VERSION == 340
void sceMeAudio_94DCC979(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_5B571930(void) {
    sceSysreg_driver_8BE2D520();
}
#endif

#if FW_VERSION == 330
void sceMeAudio_EDD2B615(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_1AF750F2(void) {
    sceSysreg_driver_8BE2D520();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void sceMeAudio_5EDA8D33(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_05115756(void) {
    sceSysreg_driver_8BE2D520();
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_00000F1C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", func_00000F94);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_0000111C);

INCLUDE_ASM("nonmatchings/popsman", func_000011CC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/popsman", func_00001548);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", func_000013A0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/popsman", func_00001698);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_A002ED78);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_C044E289);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_43D9752F);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_B745BA7C);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_448F65DD);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_83E07D86);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_A54D5B20);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_745FB863);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_6DCDC5BA);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_148E487D);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_29798EF3);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_DDB5FA7A);
#endif

#if FW_VERSION >= 310
void sceAudioOutput(void) {

}

void sceAudioOutputBlocking(void) {
    sceKernelDelayThread(0x2710U);
}

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

void sceAudio_38553111(void) {

}

void sceAudio_5C37C0AE(void) {

}

void sceAudio_E0727056(void) {

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

void sceAudio_E9D97901(void) {

}

void sceAudio_41EFADE7(void) {

}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/popsman", func_000023A8);

INCLUDE_ASM("nonmatchings/popsman", func_000024B0);

INCLUDE_ASM("nonmatchings/popsman", func_000025BC);

INCLUDE_ASM("nonmatchings/popsman", func_000025DC);

INCLUDE_ASM("nonmatchings/popsman", func_00002668);

INCLUDE_ASM("nonmatchings/popsman", func_000026E0);

INCLUDE_ASM("nonmatchings/popsman", func_00002780);

INCLUDE_ASM("nonmatchings/popsman", func_00002820);

INCLUDE_ASM("nonmatchings/popsman", func_0000287C);

INCLUDE_ASM("nonmatchings/popsman", func_000028BC);

INCLUDE_ASM("nonmatchings/popsman", func_00002908);

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
