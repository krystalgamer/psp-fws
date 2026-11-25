#include "common.h"
#include "k1.h"
#include "sc_sascore_decls.h"

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasCore);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasCoreWithMix);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasGetEndFlag);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetKeyOn);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetKeyOff);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetVolume);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetPitch);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetVoice);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetNoise);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetTrianglarWave);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetSteepWave);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetADSR);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetADSRmode);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetSL);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasGetEnvelopeHeight);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetSimpleADSR);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetGrain);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasGetGrain);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetOutputmode);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasGetOutputmode);
#endif

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasInit);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasRevVON);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasRevEVOL);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasRevType);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasRevParam);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasSetPause);

INCLUDE_ASM("nonmatchings/sc_sascore", __sceSasGetPauseFlag);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025A0);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025A8);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025B0);

INCLUDE_ASM("nonmatchings/sc_sascore", sceSasCore_driver_B0F9F98F);

INCLUDE_ASM("nonmatchings/sc_sascore", sceSasCore_driver_E143A1EA);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/sc_sascore", sceP3daBridgeInit);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sc_sascore", sceP3daBridgeCore);
#endif

#if FW_VERSION >= 300
void sceP3daBridgeInit(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceMeCore_driver_D1EA3DFD(0x108, arg0, arg1);
    setK1(temp_s0);
}
#endif

#if FW_VERSION == 282
void sceP3da_59FB2B06(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceMeCore_driver_D1EA3DFD(0x108, arg0, arg1);
    setK1(temp_s0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sc_sascore", sceP3daBridgeExit);
#endif
