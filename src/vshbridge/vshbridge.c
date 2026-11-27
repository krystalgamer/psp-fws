/* cflags: -O2 -frename-registers */
#include "common.h"
#include "vshbridge_decls.h"

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/vshbridge", func_00000000);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/vshbridge", D_000041B0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000041B4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000041CC);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000041E0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000041F8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004210);

INCLUDE_RODATA("nonmatchings/vshbridge", D_0000421C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004230);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004244);

INCLUDE_RODATA("nonmatchings/vshbridge", D_0000425C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004270);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004288);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000042A0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000042B8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000042D0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000042E8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004300);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004318);

INCLUDE_RODATA("nonmatchings/vshbridge", D_0000432C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004340);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004354);

INCLUDE_RODATA("nonmatchings/vshbridge", D_0000436C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004388);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000043A4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000043B8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000043CC);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000043E4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000043F8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004410);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004424);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004434);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004444);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000048FC);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004904);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004914);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004918);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004948);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004954);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004960);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004988);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004998);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049A4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049B0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049C8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049D8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049E0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_000049E4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004A08);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004A6C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004A70);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004A7C);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004AE0);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004AE4);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004AF8);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004B00);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004B24);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004B28);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00004B30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/vshbridge", D_000036AC);

INCLUDE_ASM("nonmatchings/vshbridge", _vshVshBridgeStart);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshChkregGetPsCode);

INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlReadBufferPositive);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlGetSamplingMode);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetCurrentTick);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetAlarmTick);

INCLUDE_ASM("nonmatchings/vshbridge", vshRtcGetAlarmTick);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshIoDevctl);

INCLUDE_ASM("nonmatchings/vshbridge", vshIdStorageLookup);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshIoIoctl);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshVaudioOutputBlocking);

INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSRCOutputBlocking);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcGetCurrentSecureTick);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelSetParamSfo);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshLflashFatfmtStartFatfmt);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", func_000009C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshRegisterPowerCallback);

INCLUDE_ASM("nonmatchings/vshbridge", vshUnregisterPowerCallback);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000980);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsSetNickname);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/vshbridge", D_00003BB0);
#endif

#if FW_VERSION == 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", _vshVshBridgeStart);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _vshVshBridgeStart(void) {
    sceImposeSetStatus(4);
    sceUmdSetSuspendResumeMode(1);
    return 0;
}
#endif

#if FW_VERSION < 103
s32 _vshVshBridgeStart(void) {
    sceImposeSetStatus(4);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 _vshVshBridgeStop(void) {
    sceKernelUnregisterSysEventHandler(&D_00002D20);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 _vshVshBridgeStop(void) {
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/vshbridge", func_00000028);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/vshbridge", func_0000004C);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000068);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", vshChkregGetPsCode);

INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlReadBufferPositive);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A9574AF7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5DA71899);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F4BD7905);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_21FEB14D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BF25C8F3);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlGetSamplingMode);

INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetCurrentTick);

INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetAlarmTick);

INCLUDE_ASM("nonmatchings/vshbridge", vshRtcGetAlarmTick);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", vshIoDevctl);

INCLUDE_ASM("nonmatchings/vshbridge", vshIdStorageLookup);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_520CB18D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CC2994C8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4CA1F6DA);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7E092ADF);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshIoIoctl);

INCLUDE_ASM("nonmatchings/vshbridge", vshVaudioOutputBlocking);

INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSRCOutputBlocking);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcGetCurrentSecureTick);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B4235201);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_1C4C47E5);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelSetParamSfo);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", vshLflashFatfmtStartFatfmt);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000B6C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5434B104);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_543DF545);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshRegisterPowerCallback);

INCLUDE_ASM("nonmatchings/vshbridge", vshUnregisterPowerCallback);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", func_00000D10);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75EFA3D4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_96E6098F);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsSetNickname);

INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsSetVSHInfo);
#endif

#if FW_VERSION >= 282
s32 _vshVshBridgeStop(void) {
    sceKernelUnregisterSysEventHandler(&D_00003C00);
    return 0;
}
#endif

#if FW_VERSION < 103 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadModuleVSH);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadModuleVSH(void) {
    sceKernelLoadModuleVSH();
}
#else
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadModuleVSHByID);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadModuleVSHByID(void) {
    sceKernelLoadModuleVSHByID();
}
#else
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadModuleBufferVSH);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A77FD0D9);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadModuleBufferVSH(void) {
    sceKernelLoadModuleBufferVSH();
}
#endif

INCLUDE_ASM("nonmatchings/vshbridge", vshChkregCheckRegion);

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshChkregGetPsCode);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/vshbridge", vshPowerSetWakeupCondition);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E1941520);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_002381F2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_60C6E226);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3007DFB3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7B85B850);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_35C28163);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_27998D2C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_DFB85AB2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6DDF0045);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_46586131);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_24B92584);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0556CCAE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_38B9DCB1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_DAE3A119);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMePowerControlAvcPower);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMePowerSetCpuClockGear);

INCLUDE_ASM("nonmatchings/vshbridge", vshMePowerSetBusClockGear);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlSetSamplingMode);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshCtrlReadBufferPositive);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshDisplaySetHoldMode);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A84742F0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshDisplaySetMode);

INCLUDE_ASM("nonmatchings/vshbridge", vshDisplaySetPseudoVsync);

INCLUDE_ASM("nonmatchings/vshbridge", vshDisplayIsPseudoField);

INCLUDE_ASM("nonmatchings/vshbridge", vshGeEdramSetSize);

INCLUDE_ASM("nonmatchings/vshbridge", vshGeEdramGetHwSize);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshUmdManTerm);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7C1658F2);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeGetStatus);

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeSetStatus);

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeGetParam);

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeSetParam);

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeChanges);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C27161C0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_31B2D587);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_243B7C57);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_815782DB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_65742115);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_ABDF01CC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshImposeSetSpecialButtonMode);

INCLUDE_ASM("nonmatchings/vshbridge", vshImposeGetSpecialButtonMode);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetConf);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshRtcSetCurrentTick);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioFormatICV);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshIoDevctl);

INCLUDE_ASM("nonmatchings/vshbridge", vshIdStorageLookup);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSetFrequency);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioInit);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioEnd);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4853573E);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0867931A);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioAuth);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioCheckICV);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioCheckICVn);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioDeauth);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE4BA2EB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B472AC68);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75591C45);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3FCFF39E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_925EE68C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B14D3E2D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D8CE03B8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_51CC70F5);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F1267A95);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E192FCAA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_38D115DD);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3EE685DE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C775F34A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2F602CB1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CB003780);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B6E618B8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2E273B01);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0E87EC0C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_82314DEE);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_40DC2749);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8EF3A0DA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_81FD3FF4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4EC06FA4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_39B499E0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5317A582);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7BB63511);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C11F2846);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D76A0D7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C86E65DC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FC0975E8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_59343B13);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B98D260C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9BA6BE17);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_69A60766);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A0A10648);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_761A11F1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5203C2A2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9BBA642D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_336ACD3B);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B840EDB2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BF107306);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_95C9D89F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_24C921AC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FDDE5CA3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_834FF53D);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D01DF045);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_57F60A8E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6BED8184);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_458D27BF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DB2D30);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_1A5FD1E6);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_08858CBF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CCF369F3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_44B266CC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B1A1A24C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_00CD4949);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B62A78F4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_758403DC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DFE1669);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BC8A6ACB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2403928E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75A512CC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A7724D4A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_12701700);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE32A06A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_78A4D7E4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_427D6063);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C62E0B0D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_689DC2B0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3E176AD8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D3C933A0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FD304180);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BE38F663);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D717671A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2686B113);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D91D5BB9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F35CE1C8);
#else
INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioInitTrack);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioEndTrack);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioInitFringe);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioDecryptFringe);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioEndFringe);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioDecryptTrack);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B21D7515);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioGetMediaType);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioInvalidateICV);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioClearMACEntry);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61DBA9D5);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioCalculateICVn);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioUpdateIBD);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioReadMACList);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioGetInitialEKB);

INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioGetICVInfo);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMSAudioGetICVEKBVersion);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshVaudioOutputBlocking);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshVaudioChReserve);

INCLUDE_ASM("nonmatchings/vshbridge", vshVaudioChRelease);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSRCOutputBlocking);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSRCChReserve);

INCLUDE_ASM("nonmatchings/vshbridge", vshAudioSRCChRelease);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMeBootStart);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoInit);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoEnd);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoAuth);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoCheckICV);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoInitMovie);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoEndMovie);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoInitTrack);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoEndTrack);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoDecryptSample);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoClearMACList);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoUpdateICV);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoFormatICV);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoGetLicenseInfo);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoGetDefaultEKB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_990BE92A);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoNetBindLicense);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE86EF4A);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoCheckGroupID);

INCLUDE_ASM("nonmatchings/vshbridge", vshMgVideoFormatGroupID);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6D24E79B);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7AE7859);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_03FD7346);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/vshbridge", vshMeRpcLock);

INCLUDE_ASM("nonmatchings/vshbridge", vshMeRpcUnlock);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferPlain0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferPlain0(void) {
    sceKernelLoadExecBufferPlain0();
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferPlain);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferPlain(void) {
    sceKernelLoadExecBufferPlain();
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExec);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExec(void *arg0, void *arg1) {
    sceKernelLoadExec(arg0, arg1);
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecFromHost);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecFromHost(void) {
    sceKernelLoadExecFromHost();
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/vshbridge", func_0000095C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/vshbridge", func_000008E4);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000900);

INCLUDE_ASM("nonmatchings/vshbridge", func_0000091C);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000938);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000954);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000970);

INCLUDE_ASM("nonmatchings/vshbridge", func_0000098C);

INCLUDE_ASM("nonmatchings/vshbridge", func_000009A8);

INCLUDE_ASM("nonmatchings/vshbridge", func_000009C4);

INCLUDE_ASM("nonmatchings/vshbridge", func_000009E0);

INCLUDE_ASM("nonmatchings/vshbridge", func_000009FC);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000A18);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000A34);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000A50);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000A6C);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000A88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_0000095C(void) {
    sceKernelExitGame();
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelExitVSH);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelExitVSH(void) {
    sceKernelExitGame();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHDiscUpdater);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHDiscUpdater(void) {
    sceKernelLoadExecVSHDiscUpdater();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHDisk);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHDisk(void) {
    sceKernelLoadExecVSHDisc();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferVSHUsbWlan);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferVSHUsbWlan(void) {
    sceKernelLoadExecBufferVSHUsbWlan();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHMs1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHMs1(void) {
    sceKernelLoadExecVSHMs1();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHMs2);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHMs2(void) {
    sceKernelLoadExecVSHMs2();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHMs3);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHMs4);

INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHMs5);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHMs3(void) {
    sceKernelLoadExecVSHMs3();
}
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelExitVSHVSH);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelExitVSHVSH(void) {
    sceKernelExitVSHVSH();
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferVSHPlain);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferVSHPlain(void) {
    sceKernelLoadExecBufferVSHPlain();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelDipswSet);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelDipswSet(void) {
    sceKernelDipswSet();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelDipswClear);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelDipswClear(void) {
    sceKernelDipswClear();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecVSHDiscDebug);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecVSHDiscDebug(void) {
    sceKernelLoadExecVSHDiscDebug();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferVSHUsbWlanDebug);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelIsUMDMode);

INCLUDE_ASM("nonmatchings/vshbridge", vshKernelIsDVDMode);
#endif

#if FW_VERSION == 201
s32 func_000020F8(void) {
    sceKernelUnregisterSysEventHandler(&D_00002D20);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", vshReceivePowerCallback);

INCLUDE_ASM("nonmatchings/vshbridge", func_00002184);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferVSHUsbWlanDebug(void) {
    sceKernelLoadExecBufferVSHUsbWlanDebug();
}
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelLoadExecBufferVSHFromHost);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void vshKernelLoadExecBufferVSHFromHost(void) {
    sceKernelLoadExecBufferVSHFromHost();
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/vshbridge", vshSircsSend);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/vshbridge", sceSircsSend);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 152)
INCLUDE_ASM("nonmatchings/vshbridge", vshLflashFatfmtStartFatfmt);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250)
void sceLflashFatfmtStartFatfmt(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/vshbridge", D_00002D04);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00002D10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshKernelGetModel);

INCLUDE_ASM("nonmatchings/vshbridge", vshReceivePowerCallback);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsRegisterEventFlag);

INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsUnregisterEventFlag);

INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsGetApInfo);

INCLUDE_ASM("nonmatchings/vshbridge", vshUsbstorMsNotifyEventDone);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D5F482CB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E7872DB9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2BA6DA4D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_27AA80A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", func_00002D24);
#endif
