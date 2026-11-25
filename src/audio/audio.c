/* cflags: -O2 -frename-registers */
#include "common.h"
#include "audio_decls.h"

INCLUDE_ASM("nonmatchings/audio", func_00000000);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_0000020C);

INCLUDE_ASM("nonmatchings/audio", func_00000298);

INCLUDE_ASM("nonmatchings/audio", func_00000518);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", func_00000220);

INCLUDE_ASM("nonmatchings/audio", func_0000028C);

INCLUDE_ASM("nonmatchings/audio", func_000004CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/audio", func_000001E8);

INCLUDE_ASM("nonmatchings/audio", func_00000274);

INCLUDE_ASM("nonmatchings/audio", func_000004EC);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioOutput);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputBlocking);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPanned);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPannedBlocking);

INCLUDE_ASM("nonmatchings/audio", sceAudioChReserve);

INCLUDE_ASM("nonmatchings/audio", sceAudio_41EFADE7);

INCLUDE_ASM("nonmatchings/audio", sceAudioChRelease);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/audio", sceAudioGetChannelRestLength);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioSetChannelDataLen);

INCLUDE_ASM("nonmatchings/audio", sceAudioChangeChannelVolume);

INCLUDE_ASM("nonmatchings/audio", sceAudioChangeChannelConfig);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/audio", sceAudioOutput2ChangeLength);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutput2GetRestSample);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudio_E9D97901);

#if FW_VERSION >= 250
s32 sceAudioOutput2Reserve(s32 arg0) {
    return sceAudio_38553111(arg0, 0xAC44, 2);
}

s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1) {
    return sceAudio_E0727056(arg0, (s32) arg1);
}

s32 sceAudioOutput2Release(void) {
    return sceAudio_5C37C0AE();
}
#endif

INCLUDE_ASM("nonmatchings/audio", func_00001330);

INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_A2BEAA6C);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_210567F7);
#endif

INCLUDE_RODATA("nonmatchings/audio", D_000032E4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/audio", D_00002D70);

INCLUDE_RODATA("nonmatchings/audio", D_00002D7C);

INCLUDE_RODATA("nonmatchings/audio", D_00002D88);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_80F1F7E0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_210567F7);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_B61595C0);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_210567F7);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceAudio_driver_927AC32B(s32 arg0) {
    s32 var_a0;

    var_a0 = -0x80;
    if (arg0 >= 0) {
        var_a0 = arg0 * 6;
    }
    sceCodec_driver_EEB91526(var_a0);
    D_0000379D = arg0 + 8;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_00001834);
#endif

#if FW_VERSION == 100
s32 sceAudio_driver_927AC32B(s32 arg0) {
    s32 var_a0;

    var_a0 = -0x3C;
    if (arg0 >= 0) {
        var_a0 = arg0 * 6;
    }
    sceCodec_driver_EEB91526(var_a0);
    D_0000339D = arg0 + 8;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", func_00001774);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/audio", sceAudio_driver_927AC32B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", func_000016F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_000017A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_000019C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", func_000018FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_000019FC);
#else
INCLUDE_ASM("nonmatchings/audio", func_00001908);

INCLUDE_ASM("nonmatchings/audio", func_00001A70);

INCLUDE_ASM("nonmatchings/audio", func_00001B90);

INCLUDE_ASM("nonmatchings/audio", func_00001CC8);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudio_38553111);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/audio", sceAudio_5C37C0AE);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/audio", sceAudio_E0727056);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudio_5C37C0AE);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudio_E0727056);

INCLUDE_ASM("nonmatchings/audio", func_000020F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", func_00001E94);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_00002178);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", func_0000206C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/audio", func_0000217C);

INCLUDE_ASM("nonmatchings/audio", func_0000234C);

INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInitEx);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioInputBlocking);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioInput);
#endif

#if FW_VERSION == 100
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000033B5 = 1;
    sceKernelCpuResumeIntr(temp_a0);
    return func_0000243C(arg0, arg1, (s32) arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioPollInputEnd);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInitEx);
#endif

#if FW_VERSION == 282
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    return func_000029D4(arg0, arg1, (s32) arg2);
}
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioGetInputLength);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_000027FC);

INCLUDE_ASM("nonmatchings/audio", func_00002938);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", func_0000243C);

INCLUDE_ASM("nonmatchings/audio", func_000025B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", func_00002720);
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioPollInputEnd);

INCLUDE_ASM("nonmatchings/audio", func_000028AC);

INCLUDE_ASM("nonmatchings/audio", func_000029D4);

INCLUDE_ASM("nonmatchings/audio", func_00002B7C);
#endif
