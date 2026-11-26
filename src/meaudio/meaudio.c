#include "common.h"
#include "meaudio_decls.h"

INCLUDE_ASM("nonmatchings/meaudio", func_00000000);

INCLUDE_ASM("nonmatchings/meaudio", func_000000B0);

INCLUDE_ASM("nonmatchings/meaudio", func_00000280);

INCLUDE_ASM("nonmatchings/meaudio", func_000004B4);

INCLUDE_ASM("nonmatchings/meaudio", sceMeAudioRegisterTickCallback);

INCLUDE_ASM("nonmatchings/meaudio", sceMeAudioSetPause);

INCLUDE_ASM("nonmatchings/meaudio", module_start);

void sceMeAudioScLock(void) {
    do {

    } while (sceSysregSemaTryLock() != 0);
}

void sceMeAudioScUnlock(void) {
    sceSysregSemaUnlock();
}

INCLUDE_ASM("nonmatchings/meaudio", module_reboot_before);

INCLUDE_ASM("nonmatchings/meaudio", func_000007B8);

#if FW_VERSION >= 302
void sceAudioOutput(void) {
}
#endif

#if FW_VERSION == 303
void sceAudioOutputBlocking(void) {
    sceKernelDelayThread(0x2710U);
}
#endif

#if FW_VERSION == 302
void sceAudioOutputBlocking(void) {
}
#endif

#if FW_VERSION >= 302
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

void sceAudioGetChannelRestLen(void) {
}

void sceAudioOneshotOutput(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/meaudio", D_00000EE0);
