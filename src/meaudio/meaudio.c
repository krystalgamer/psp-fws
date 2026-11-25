#include "common.h"
#include "meaudio_decls.h"

INCLUDE_ASM("nonmatchings/meaudio", func_00000000);

INCLUDE_ASM("nonmatchings/meaudio", func_000000B0);

INCLUDE_ASM("nonmatchings/meaudio", func_00000280);

INCLUDE_ASM("nonmatchings/meaudio", func_000004B4);

INCLUDE_ASM("nonmatchings/meaudio", sceMeAudio_148E487D);

INCLUDE_ASM("nonmatchings/meaudio", sceMeAudio_29798EF3);

INCLUDE_ASM("nonmatchings/meaudio", module_start);

void sceMeAudio_5EDA8D33(void) {
    do {

    } while (sceSysreg_driver_9FC87ED4() != 0);
}

void sceMeAudio_05115756(void) {
    sceSysreg_driver_8BE2D520();
}

INCLUDE_ASM("nonmatchings/meaudio", module_reboot_before);

INCLUDE_ASM("nonmatchings/meaudio", func_000007B8);

#if FW_VERSION == 302
void sceAudioOutput(void) {
}

void sceAudioOutputBlocking(void) {
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

void sceAudioOutput2Release(void) {
}

void sceAudioOutput2OutputBlocking(void) {
}

void sceAudioOutput2ChangeLength(void) {
}

void sceAudioOutput2GetRestSample(void) {
}

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

void sceAudioGetInputLength(void) {
}

void sceAudioWaitInputEnd(void) {
}

void sceAudioInputInit(void) {
}

void sceAudioInputInitEx(void) {
}

void sceAudioPollInputEnd(void) {
}

void sceAudio_E9D97901(void) {
}

void sceAudio_41EFADE7(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/meaudio", D_00000EE0);
