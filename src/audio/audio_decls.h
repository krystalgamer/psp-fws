#ifndef AUDIO_DECLS_H
#define AUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    void *buf;
    s32 curSampleCnt;
    u16 sampleCount;
    u8 unk10;
    u8 bytesPerSample;
    u16 leftVol;
    u16 rightVol;
} SceAudioChannel;
typedef struct {
    u8 buf0[240];
    u8 buf240[272];
    u8 buf512[240];
    u8 buf752[272];
    u32 hwBuf[48];
#if FW_VERSION < 201
    SceAudioChannel chans[8];
    void *dmaPtr[3];
    SceUID evFlagId[3];
#else
    void *dmaPtr[3];
    SceUID evFlagId;
    SceAudioChannel chans[8];
#endif
    s32 freq;
    u8 flags;
    s8 volumeOffset;
    u8 delayShift;
    u8 padding1;
    u16 srcChFreq;
    u16 srcChSampleCnt;
    u16 srcVol;
    u8 numChans;
    u8 padding2;
    u32 inputOrigSampleCnt;
    u32 inputCurSampleCnt;
    void *inputBuf;
#if FW_VERSION >= 150
    s16 unkInput0;
    s16 inputGain;
    s16 unkInput2;
    s16 unkInput3;
    s16 unkInput4;
    s16 unkInput5;
#endif
    u8 inputHwFreq;
    s8 inputIsWaiting;
    s8 inputInited;
    s8 unkCodecArg;
} SceAudio;

extern SceAudio g_audio;

void audioHwInit(void);
s32 audioInput(s32 sampleCount, s32 freq, void *buf);
s32 audioInputDmaCb(s32 arg0, s32 arg1);
s32 audioInputSetup(void);
s32 audioOutput(SceAudioChannel *channel, s32 leftVol, s32 rightVol, void *buf);
s32 audioOutputDmaCb(s32 unused, s32 arg1);
s32 audioSRCOutput(s32 vol, void *buf);
s32 audioSRCOutputDmaCb(s32 arg0, s32 arg1);
s32 dmaUpdate(s32 arg);
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2);
s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1);
s32 sceAudioOutput2Release(void);
s32 sceAudioOutput2Reserve(s32 arg0);
s32 sceAudioSRCChRelease(void);
s32 sceAudioSRCChReserve(s32, s32, s32);
s32 sceAudioSRCOutputBlocking(s32, s32);
s32 sceAudioSetVolumeOffset(s32 arg0);
M2C_UNK sceCodecSetVolumeOffset(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDmaOpDeQueue(void *op);
s32 sceKernelDmaOpEnQueue(void *op);
s32 sceKernelDmaOpQuit(void *op);
s32 sceKernelSetEventFlag(SceUID id, u32 bits);
s32 sceKernelWaitEventFlag(SceUID id, u32 bits, u32 wait, u32 *outBits, void *timeout);
void updateAudioBuf(s32 arg);

#endif
