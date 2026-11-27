#ifndef AUDIO_DECLS_H
#define AUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct {
    u32 src;
    u32 dst;
    u32 next;
    u32 ctrl;
} SceAudioDmaLink;
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
    SceAudioDmaLink dmaLink[12];
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

typedef struct SceSysEventHandler {
    s32 size;
    char *name;
    s32 typeMask;
    s32 (*handler)(s32 ev_id, char *ev_name, void *param, s32 *result);
    s32 r28;
    s32 busy;
    struct SceSysEventHandler *next;
    s32 reserved[9];
} SceSysEventHandler;

extern SceSysEventHandler g_audioEvent;
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
s32 sceAudioChRelease(u32 channel);
s32 sceAudioChReserve(s32 channel, s32 sampleCount, s32 format);
s32 sceAudioChangeChannelConfig(u32 chanId, s32 format);
s32 sceAudioChangeChannelVolume(u32 chanId, s32 leftVol, s32 rightVol);
s32 sceAudioEnd(void);
s32 sceAudioGetChannelRestLen(u32 chanId);
s32 sceAudioGetInputLength(void);
s32 sceAudioInput(s32 arg0, s32 arg1, void *arg2);
s32 sceAudioLoopbackTest(s32 arg0);
s32 sceAudioOutput(u32 chanId, s32 vol, void *buf);
s32 sceAudioOutput2OutputBlocking(s32 arg0, void *arg1);
s32 sceAudioOutput2Release(void);
s32 sceAudioOutput2Reserve(s32 arg0);
s32 sceAudioOutputPanned(u32 chanId, s32 leftVol, s32 rightVol, void *buf);
s32 sceAudioSRCChRelease(void);
s32 sceAudioSRCChReserve(s32, s32, s32);
s32 sceAudioSRCOutputBlocking(s32 vol, void *buf);
s32 sceAudioSetChannelDataLen(u32 chanId, s32 sampleCount);
s32 sceAudioSetVolumeOffset(s32 arg0);
s32 sceAudioWaitInputEnd(void);
M2C_UNK sceCodecSetVolumeOffset(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteEventFlag(SceUID id);
s32 sceKernelDmaOpAssign(void *op, s32 a1, s32 a2, s32 a3, s32 a4);
s32 sceKernelDmaOpDeQueue(void *op);
s32 sceKernelDmaOpEnQueue(void *op);
s32 sceKernelDmaOpFree(void *op);
s32 sceKernelDmaOpQuit(void *op);
s32 sceKernelDmaOpSetCallback(void *op, s32 (*cb)(s32, s32), s32 arg);
s32 sceKernelDmaOpSetupLink(void *op, s32 ctrl, void *link);
s32 sceKernelRegisterSysEventHandler(SceSysEventHandler *handler);
s32 sceKernelSetEventFlag(SceUID id, u32 bits);
s32 sceKernelUnregisterSysEventHandler(SceSysEventHandler *handler);
s32 sceKernelWaitEventFlag(SceUID id, u32 bits, u32 wait, u32 *outBits, void *timeout);
s32 updateAudioBuf(s32 arg);

#endif
