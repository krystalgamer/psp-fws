/* cflags: -O2 -frename-registers */
#include "common.h"
#include "audio_decls.h"
#include "k1.h"

#define HW(addr) (*(volatile s32 *)(addr))

/* 1.00 shifts $k1 in a noreorder block: as never moves it into a delay slot */
static inline u32 pspShiftK1(void) {
    u32 oldK1;

    __asm__ __volatile__(".set noreorder\n\tmove %0, $27\n\tsrl $27, $27, 16\n\t.set reorder" : "=r"(oldK1));
    return oldK1;
}

static inline void pspSync(void) {
    __asm__ __volatile__("sync");
}

INCLUDE_ASM("nonmatchings/audio", updateAudioBuf);

#if FW_VERSION < 201
s32 dmaUpdate(s32 arg) {
g_audio.flags &= ~(1 << arg); HW(0xBE000004) = (s8)g_audio.flags;
    sceKernelDmaOpQuit(g_audio.dmaPtr[arg]);
    sceKernelDmaOpDeQueue(g_audio.dmaPtr[arg]);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/audio", dmaUpdate);
#endif

INCLUDE_ASM("nonmatchings/audio", audioMixerThread);

#if FW_VERSION < 201
s32 audioOutputDmaCb(s32 unused, s32 arg1) {
    if (arg1 != 0) {
        dmaUpdate(0);
        return -1;
    }
    sceKernelSetEventFlag(g_audio.evFlagId[0], 1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/audio", audioOutputDmaCb);
#endif

#if FW_VERSION < 260
s32 sceAudioOutput(u32 chanId, s32 vol, void *buf) {
    u32 oldK1;
    s32 oldIntr;
    s32 ret;
    SceAudioChannel *chan;
    u32 size;

    if (vol > 0xFFFF)
        return 0x8026000B;
    if (chanId >= 9)
        return 0x80260003;
    oldK1 = pspShiftK1();
    chan = &g_audio.chans[chanId];
    size = chan->sampleCount * 4;
    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + size)) < 0) {
        setK1(oldK1);
        return 0x80260004;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    ret = audioOutput(chan, vol, vol, buf);
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000005F4);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/audio", sceAudioOutput);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/audio", sceAudioOutputBlocking);
#endif

#if FW_VERSION < 260
s32 sceAudioOutputPanned(u32 chanId, s32 leftVol, s32 rightVol, void *buf) {
    u32 oldK1;
    s32 oldIntr;
    s32 ret;
    SceAudioChannel *chan;
    u32 size;

    if (leftVol > 0xFFFF || rightVol > 0xFFFF)
        return 0x8026000B;
    if (chanId >= 9)
        return 0x80260003;
    oldK1 = pspShiftK1();
    chan = &g_audio.chans[chanId];
    size = chan->sampleCount * 4;
    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + size)) < 0) {
        setK1(oldK1);
        return 0x80260004;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    ret = audioOutput(chan, leftVol, rightVol, buf);
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_00000888);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPanned);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/audio", sceAudioOutputPannedBlocking);
#endif

#if FW_VERSION < 260
s32 sceAudioChReserve(s32 channel, s32 sampleCount, s32 format) {
    u32 oldK1;
    s32 oldIntr;
    s32 i;
    s32 bps;
    SceAudioChannel *chan;

    oldK1 = pspShiftK1();
    oldIntr = sceKernelCpuSuspendIntr();
    if (channel < 0) {
        for (i = 7; i >= 0; i--) {
            if (g_audio.chans[i].sampleCount == 0 && g_audio.chans[i].buf == NULL)
                break;
        }
        channel = i;
        if (channel < 0) {
            sceKernelCpuResumeIntr(oldIntr);
            setK1(oldK1);
            return 0x80260005;
        }
    } else if ((u32)channel >= 9 || g_audio.chans[channel].sampleCount != 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260003;
    }
    if (sampleCount <= 0 || (sampleCount & 0x3F) != 0 || (u32)sampleCount > 0xFFC0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260006;
    }
    chan = &g_audio.chans[channel];
    if (format == 0)
        chan->bytesPerSample = 4;
    else if (format == 0x10)
        chan->bytesPerSample = 2;
    else {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260007;
    }
    chan->sampleCount = sampleCount;
    chan->rightVol = 0;
    chan->leftVol = 0;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return channel;
}
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioChReserve);
#endif

INCLUDE_ASM("nonmatchings/audio", sceAudioOneshotOutput);

#if FW_VERSION < 260
s32 sceAudioChRelease(u32 channel) {
    u32 oldK1;
    s32 oldIntr;

    if (channel >= 9)
        return 0x80260003;
    oldK1 = pspShiftK1();
    oldIntr = sceKernelCpuSuspendIntr();
    if (g_audio.chans[channel].sampleCount == 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260008;
    }
    if (g_audio.chans[channel].unk10 != 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260002;
    }
    g_audio.chans[channel].sampleCount = 0;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioChRelease);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/audio", sceAudioGetChannelRestLength);
#endif

#if FW_VERSION < 260
s32 sceAudioSetChannelDataLen(u32 chanId, s32 sampleCount) {
    u32 oldK1;
    s32 oldIntr;

    if (chanId >= 9)
        return 0x80260003;
    if (sampleCount <= 0 || (sampleCount & 0x3F) != 0 || (u32)sampleCount > 0xFFC0)
        return 0x80260006;
    oldK1 = pspShiftK1();
    oldIntr = sceKernelCpuSuspendIntr();
    if (g_audio.chans[chanId].unk10 != 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260002;
    }
    if (g_audio.chans[chanId].sampleCount == 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260001;
    }
    g_audio.chans[chanId].sampleCount = sampleCount;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioSetChannelDataLen);
#endif

#if FW_VERSION < 260
s32 sceAudioChangeChannelVolume(u32 chanId, s32 leftVol, s32 rightVol) {
    u32 oldK1;
    s32 oldIntr;

    if (leftVol > 0xFFFF || rightVol > 0xFFFF)
        return 0x8026000B;
    if (chanId >= 9)
        return 0x80260003;
    oldK1 = pspShiftK1();
    oldIntr = sceKernelCpuSuspendIntr();
    if (leftVol >= 0)
        g_audio.chans[chanId].leftVol = leftVol;
    if (rightVol >= 0)
        g_audio.chans[chanId].rightVol = rightVol;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioChangeChannelVolume);
#endif

#if FW_VERSION < 201
s32 sceAudioChangeChannelConfig(u32 chanId, s32 format) {
    u32 oldK1;
    s32 oldIntr;
    SceAudioChannel *chan;

    if (chanId >= 9)
        return 0x80260003;
    oldK1 = pspShiftK1();
    oldIntr = sceKernelCpuSuspendIntr();
    if (g_audio.chans[chanId].curSampleCnt != 0 || g_audio.chans[chanId].unk10 != 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260002;
    }
    if (g_audio.chans[chanId].sampleCount == 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80260008;
    }
    chan = &g_audio.chans[chanId];
    if (format == 0)
        chan->bytesPerSample = 4;
    else if (format == 0x10)
        chan->bytesPerSample = 2;
    else
        goto err;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0;

err:
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0x80260007;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_00001124);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/audio", sceAudioChangeChannelConfig);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/audio", sceAudioOutput2ChangeLength);

INCLUDE_ASM("nonmatchings/audio", sceAudioOutput2GetRestSample);
#endif

#if FW_VERSION == 100
s32 sceAudioGetChannelRestLen(u32 chanId) {
    if (chanId >= 9)
        return 0x80260003;
    return g_audio.chans[chanId].curSampleCnt + g_audio.chans[chanId].unk10 * g_audio.chans[chanId].sampleCount;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/audio", sceAudioGetChannelRestLen);
#endif

#if FW_VERSION >= 250
s32 sceAudioOutput2Reserve(s32 arg0) {
    return sceAudioSRCChReserve(arg0, 0xAC44, 2);
}

s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1) {
    return sceAudioSRCOutputBlocking(arg0, arg1);
}

s32 sceAudioOutput2Release(void) {
    return sceAudioSRCChRelease();
}
#endif

#if FW_VERSION < 260
s32 audioOutput(SceAudioChannel *channel, s32 leftVol, s32 rightVol, void *buf) {
    if (channel->sampleCount == 0)
        return 0x80260001;
    if (channel->buf != NULL)
        return 0x80260002;
    channel->curSampleCnt = channel->sampleCount;
    if (leftVol >= 0)
        channel->leftVol = leftVol;
    if (rightVol >= 0)
        channel->rightVol = rightVol;
    channel->buf = buf;
    if ((g_audio.flags & 1) == 0)
        updateAudioBuf(0);
    return channel->sampleCount;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000011F4);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/audio", audioOutput);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/audio", sceAudioSetFrequency);
#endif

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

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000012D8);
#else
INCLUDE_ASM("nonmatchings/audio", sceAudioInit);
#endif

#if FW_VERSION < 201
s32 sceAudioEnd(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        dmaUpdate(i);
        sceKernelDeleteEventFlag(g_audio.evFlagId[i]);
        sceKernelDmaOpFree(g_audio.dmaPtr[i]);
    }
    sceKernelUnregisterSysEventHandler(&g_audioEvent);
    sceCodecOutputEnable(0, 0);
    sceCodecInputDisable();
    sceSysregAudioClkoutIoDisable();
    sceSysregAudioClkoutClkDisable();
    sceSysregAudioIoDisable(0);
    sceSysregAudioClkDisable(0);
    sceSysregAudioBusClockDisable(0);
    sceClockgenAudioClkDisable();
    sceKernelDisableIntr(10);
    return 0;
}

s32 sceAudioLoopbackTest(s32 arg0) {
    if (arg0 != 0) {
        dmaUpdate(0);
        dmaUpdate(1);
        dmaUpdate(2);
        HW(0xBE000004) = 7;
        HW(0xBE00002C) = 7;
        HW(0xBE000010) = 4;
        HW(0xBE000008) = 0;
        HW(0xBE000020) = 7;
    } else {
        audioHwInit();
    }
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000016B8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/audio", sceAudioLoopbackTest);
#endif

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

INCLUDE_ASM("nonmatchings/audio", audioIntrHandler);

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/audio", audioHwInit);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000018F0);
#endif

#if FW_VERSION == 100
void audioHwInit(void) {
    sceClockgenAudioClkEnable();
    sceClockgenAudioClkSetFreq(g_audio.freq);
    sceCodecSetFrequency(g_audio.freq);
    sceSysregAudioClkSelect(0, 1);
    sceSysregAudioBusClockEnable(0);
    sceSysregAudioClkEnable(0);
    sceSysregAudioIoEnable(0);
    sceSysregAudioClkoutClkSelect(0);
    sceSysregAudioClkoutIoEnable();
    sceSysregAudioClkoutClkEnable();
    HW(0xBE000000) = 1;
    HW(0xBE000004) = 0;
    while ((HW(0xBE00000C) & 7) != 0)
        ;
    HW(0xBE00002C) = 7;
    while ((HW(0xBE000028) & 0x30) != 0x30)
        ;
    HW(0xBE000024) = 0;
    HW(0xBE000020) = 7;
    HW(0xBE000008) = 7;
    HW(0xBE000014) = 0x1208;
    while ((HW(0xBE000050) & 0x10000) != 0)
        ;
    HW(0xBE000050) = 0x8000;
    g_audio.srcVol = 0x400;
    HW(0xBE000018) = 0;
    if (g_audio.freq == 48000) {
        HW(0xBE000038) = 0x100;
    } else {
        g_audio.freq = 44100;
        HW(0xBE000038) = 0x80;
    }
    HW(0xBE000040) = 1;
}
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/audio", audioEventHandler);
#endif

INCLUDE_ASM("nonmatchings/audio", audioSRCOutputDmaCb);

INCLUDE_ASM("nonmatchings/audio", sceAudioSRCChReserve);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_00001CFC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCChRelease);
#endif

#if FW_VERSION == 100
s32 sceAudioSRCOutputBlocking(s32 vol, void *buf) {
    u32 oldK1;
    s32 oldIntr;
    s32 ret;
    u32 size;

    if ((u32)vol > 0x10000)
        return 0x8026000B;
    oldK1 = pspShiftK1();
    size = g_audio.srcChSampleCnt * g_audio.numChans;
    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + size)) < 0) {
        setK1(oldK1);
        return 0x80260004;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    ret = audioSRCOutput(vol, buf);
    while (ret == 0x80260002) {
        sceKernelCpuResumeIntr(oldIntr);
        ret = sceKernelWaitEventFlag(g_audio.evFlagId[1], 1, 0x20, 0, 0);
        if (ret < 0)
            break;
        oldIntr = sceKernelCpuSuspendIntr();
        ret = audioSRCOutput(vol, buf);
    }
    sceKernelCpuResumeIntr(oldIntr);
    if (ret >= 0)
        ret = sceKernelWaitEventFlag(g_audio.evFlagId[1], 1, 0x20, 0, 0);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/audio", sceAudioSRCOutputBlocking);
#endif

#if FW_VERSION < 201
s32 sceAudioSRCChRelease(void) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    if (g_audio.srcChFreq == 0) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x80260008;
    }
    g_audio.srcChFreq = 0;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/audio", audioSRCOutput);

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_000020A4);

INCLUDE_ASM("nonmatchings/audio", func_000022E8);

INCLUDE_ASM("nonmatchings/audio", func_000023C8);

INCLUDE_ASM("nonmatchings/audio", func_00002450);
#else
INCLUDE_ASM("nonmatchings/audio", audioInputThread);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/audio", sceAudioInputInit);

INCLUDE_ASM("nonmatchings/audio", sceAudioInputInitEx);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271) || FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 271
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2) {
    return audioInput(arg0, arg1, arg2);
}
#endif

#if FW_VERSION < 260
s32 sceAudioGetInputLength(void) {
    s32 ret;
    u32 oldK1 = pspShiftK1();
    s32 oldIntr = sceKernelCpuSuspendIntr();
    ret = 0x80260001;
    if (g_audio.inputOrigSampleCnt != 0)
        ret = g_audio.inputOrigSampleCnt - g_audio.inputCurSampleCnt;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/audio", func_00002548);

INCLUDE_ASM("nonmatchings/audio", func_000025C8);

INCLUDE_ASM("nonmatchings/audio", func_00002704);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/audio", sceAudioGetInputLength);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/audio", sceAudioPollInputEnd);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 201)
s32 sceAudioWaitInputEnd(void) {
    s32 ret;
    u32 oldK1;
    s32 oldIntr;
    if (g_audio.inputOrigSampleCnt == 0)
        return 0x80260001;
    oldK1 = pspShiftK1();
    ret = sceKernelWaitEventFlag(g_audio.evFlagId[2], 2, 0x20, 0, 0);
    oldIntr = sceKernelCpuSuspendIntr();
    g_audio.inputIsWaiting = 0;
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/audio", sceAudioWaitInputEnd);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/audio", audioInput);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/audio", audioInputSetup);
#endif

INCLUDE_ASM("nonmatchings/audio", audioInputDmaCb);
