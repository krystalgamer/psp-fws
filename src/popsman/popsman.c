#include "common.h"
#include "popsman_decls.h"

INCLUDE_RODATA("nonmatchings/popsman", D_000011A0);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_29B3FB24);

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

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_632F80A0);
#endif

s32 func_0000032C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/popsman", func_00000334);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_2E18E4E9);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_6768B22F);

INCLUDE_ASM("nonmatchings/popsman", func_00000588);

INCLUDE_ASM("nonmatchings/popsman", func_000005DC);

INCLUDE_ASM("nonmatchings/popsman", func_000005E8);

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/popsman", func_000006FC);
#else
INCLUDE_ASM("nonmatchings/popsman", scePopsMan_driver_92E9E38D);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_56EEB969);

INCLUDE_ASM("nonmatchings/popsman", func_00000724);

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/popsman", func_00000830);
#endif

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_EF8F686E);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_53F9ABD2);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_FC56480E);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_875F4C05);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_03971322);

INCLUDE_ASM("nonmatchings/popsman", func_00000A44);

INCLUDE_RODATA("nonmatchings/popsman", D_000011D4);

INCLUDE_ASM("nonmatchings/popsman", func_00000B04);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_EC94C50C);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_065C7F0B);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_B262B44F);

INCLUDE_ASM("nonmatchings/popsman", scePopsMan_BF224726);

#if FW_VERSION == 310
void scePopsMan_4F7628CC(void) {
    sceGe_driver_5BAA5439(0x400000);
    sceGeEdramGetSize();
}

INCLUDE_ASM("nonmatchings/popsman", func_00000E34);

void sceMeAudio_5EDA8D33(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_05115756(void) {
    sceSysreg_driver_8BE2D520();
}

INCLUDE_ASM("nonmatchings/popsman", func_00000F1C);

INCLUDE_ASM("nonmatchings/popsman", func_00000F94);

INCLUDE_ASM("nonmatchings/popsman", func_0000111C);

INCLUDE_ASM("nonmatchings/popsman", func_000011CC);

INCLUDE_ASM("nonmatchings/popsman", func_000013A0);

INCLUDE_ASM("nonmatchings/popsman", func_00001698);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_148E487D);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_29798EF3);

INCLUDE_ASM("nonmatchings/popsman", sceMeAudio_DDB5FA7A);

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

INCLUDE_RODATA("nonmatchings/popsman", D_00002284);
#endif
