/* cflags: -O2 -frename-registers */
#include "common.h"
#include "audio_decls.h"
#include "k1.h"

#define HW(addr) (*(volatile s32 *)(addr))

static inline void pspSync(void) {
    __asm__ __volatile__("sync");
}

INCLUDE_ASM("nonmatchings/audio", updateAudioBuf);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", dmaUpdate);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioMixerThread);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioMixerThread);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioOutputDmaCb);
#endif

#if FW_VERSION == 100
s32 dmaUpdate(s32 arg) {
g_audio.flags &= ~(1 << arg); HW(0xBE000004) = (s8)g_audio.flags;
    sceKernelDmaOpQuit(g_audio.dmaPtr[arg]);
    sceKernelDmaOpDeQueue(g_audio.dmaPtr[arg]);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", dmaUpdate);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", audioMixerThread);
#endif

#if FW_VERSION == 100
s32 audioOutputDmaCb(s32 unused, s32 arg1) {
    if (arg1 != 0) {
        dmaUpdate(0);
        return -1;
    }
    sceKernelSetEventFlag(g_audio.evFlagId[0], 1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", audioOutputDmaCb);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", dmaUpdate);

INCLUDE_ASM("nonmatchings/audio", audioMixerThread);

INCLUDE_ASM("nonmatchings/audio", audioOutputDmaCb);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioOutput);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputBlocking);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPanned);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPannedBlocking);

INCLUDE_ASM("nonmatchings/audio", sceAudioChReserve);

INCLUDE_ASM("nonmatchings/audio", sceAudioOneshotOutput);

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

INCLUDE_ASM("nonmatchings/audio", sceAudioGetChannelRestLen);

#if FW_VERSION >= 250
s32 sceAudioOutput2Reserve(s32 arg0) {
    return sceAudioSRCChReserve(arg0, 0xAC44, 2);
}

s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1) {
    return sceAudioSRCOutputBlocking(arg0, (s32) arg1);
}

s32 sceAudioOutput2Release(void) {
    return sceAudioSRCChRelease();
}
#endif

INCLUDE_ASM("nonmatchings/audio", audioOutput);

INCLUDE_ASM("nonmatchings/audio", sceAudioSetFrequency);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/audio", sceAudioEnd);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/audio", D_00002F9C);

INCLUDE_RODATA("nonmatchings/audio", D_00002FA0);

INCLUDE_RODATA("nonmatchings/audio", D_00002FB8);

INCLUDE_RODATA("nonmatchings/audio", D_00002FD0);

INCLUDE_RODATA("nonmatchings/audio", D_00002FE4);

INCLUDE_RODATA("nonmatchings/audio", D_00002FFC);

INCLUDE_RODATA("nonmatchings/audio", D_0000301C);

INCLUDE_RODATA("nonmatchings/audio", D_00003038);

INCLUDE_RODATA("nonmatchings/audio", D_0000304C);

INCLUDE_RODATA("nonmatchings/audio", D_00003064);

INCLUDE_RODATA("nonmatchings/audio", D_00003078);

INCLUDE_RODATA("nonmatchings/audio", D_0000308C);

INCLUDE_RODATA("nonmatchings/audio", D_000030A0);

INCLUDE_RODATA("nonmatchings/audio", D_000030C8);

INCLUDE_RODATA("nonmatchings/audio", D_000030D8);

INCLUDE_RODATA("nonmatchings/audio", D_000031D0);

INCLUDE_RODATA("nonmatchings/audio", D_000031DC);

INCLUDE_RODATA("nonmatchings/audio", D_000032D4);

INCLUDE_RODATA("nonmatchings/audio", D_000032F8);

INCLUDE_RODATA("nonmatchings/audio", D_00003310);

INCLUDE_RODATA("nonmatchings/audio", D_00003318);

INCLUDE_RODATA("nonmatchings/audio", D_00003320);

INCLUDE_RODATA("nonmatchings/audio", D_00003344);

INCLUDE_RODATA("nonmatchings/audio", D_0000334C);

INCLUDE_RODATA("nonmatchings/audio", D_00003350);

INCLUDE_RODATA("nonmatchings/audio", D_0000336C);

INCLUDE_RODATA("nonmatchings/audio", D_00003370);

INCLUDE_RODATA("nonmatchings/audio", D_00003378);
#endif

INCLUDE_RODATA("nonmatchings/audio", D_000032E4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/audio", D_00002D70);

INCLUDE_RODATA("nonmatchings/audio", D_00002D7C);

INCLUDE_RODATA("nonmatchings/audio", D_00002D88);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioInit);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", sceAudioEnd);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioLoopbackTest);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/audio", sceAudioEnd);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/audio", sceAudioSetVolumeOffset);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
s32 sceAudioSetVolumeOffset(s32 arg0) {
    s32 var_a0;

    var_a0 = -0x80;
    if (arg0 >= 0) {
        var_a0 = arg0 * 6;
    }
    sceCodecSetVolumeOffset(var_a0);
    g_audio.volumeOffset = arg0 + 8;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioIntrHandler);
#endif

#if FW_VERSION == 100
s32 sceAudioSetVolumeOffset(s32 arg0) {
    s32 var_a0;

    var_a0 = -0x3C;
    if (arg0 >= 0) {
        var_a0 = arg0 * 6;
    }
    sceCodecSetVolumeOffset(var_a0);
    g_audio.volumeOffset = arg0 + 8;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", audioIntrHandler);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", audioIntrHandler);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioHwInit);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioEventHandler);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioSRCOutputDmaCb);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", audioEventHandler);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioSRCOutputDmaCb);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", audioIntrHandler);

INCLUDE_ASM("nonmatchings/audio", audioHwInit);

INCLUDE_ASM("nonmatchings/audio", audioEventHandler);

INCLUDE_ASM("nonmatchings/audio", audioSRCOutputDmaCb);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioSRCChReserve);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCChRelease);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCOutputBlocking);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCChRelease);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCOutputBlocking);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioSRCOutput);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioSRCOutput);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/audio", audioSRCOutput);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", audioSRCOutput);
#endif

#if FW_VERSION == 260 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInitEx);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/audio", sceAudioInputBlocking);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/audio", sceAudioInput);
#endif

#if FW_VERSION == 100
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    g_audio.inputIsWaiting = 1;
    sceKernelCpuResumeIntr(temp_a0);
    return audioInput(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/audio", sceAudioPollInputEnd);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInitEx);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/audio", sceAudioInputBlocking);

s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    return audioInput(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 282
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    return audioInput(arg0, arg1, arg2);
}
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioGetInputLength);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/audio", sceAudioPollInputEnd);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);

INCLUDE_ASM("nonmatchings/audio", audioInput);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/audio", audioInput);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/audio", audioInputDmaCb);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", audioInput);

INCLUDE_ASM("nonmatchings/audio", audioInputSetup);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/audio", audioInputDmaCb);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);

INCLUDE_ASM("nonmatchings/audio", audioInput);

INCLUDE_ASM("nonmatchings/audio", audioInputDmaCb);
#endif
