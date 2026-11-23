#include "common.h"
#include "audio_decls.h"

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00000000);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_000001E8);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00000274);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_000004EC);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutput);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutputBlocking);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutputPanned);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutputPannedBlocking);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioChReserve);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_41EFADE7);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioChRelease);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioGetChannelRestLength);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioSetChannelDataLen);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioChangeChannelVolume);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioChangeChannelConfig);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutput2ChangeLength);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutput2GetRestSample);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_E9D97901);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioOutput2Reserve);

void sceAudioOutput2OutputBlocking(void) {
    sceAudio_E0727056();
}

void sceAudioOutput2Release(void) {
    sceAudio_5C37C0AE();
}

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00001330);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_driver_A2BEAA6C);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_driver_210567F7);

INCLUDE_RODATA("tmp/asm/282/audio/nonmatchings/audio", D_000032E4);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_driver_80F1F7E0);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_driver_B61595C0);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_driver_927AC32B);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00001908);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00001A70);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00001B90);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00001CC8);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_38553111);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_5C37C0AE);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudio_E0727056);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_0000217C);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_0000234C);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioWaitInputEnd);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioInputInitEx);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioInputBlocking);

void sceAudioInput(void) {
    func_000029D4();
}

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioGetInputLength);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", sceAudioPollInputEnd);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_000028AC);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_000029D4);

INCLUDE_ASM("tmp/asm/282/audio/nonmatchings/audio", func_00002B7C);
