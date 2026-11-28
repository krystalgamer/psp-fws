/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
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

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sc_sascore", D_0000262C);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002630);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002648);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002660);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002674);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_0000268C);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_0000269C);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000026BC);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000026D0);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000026E0);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000026EC);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000027E4);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000027F4);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002804);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_0000280C);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002824);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002828);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002838);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_00002844);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_0000284C);
#endif

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025A0);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025A8);

INCLUDE_RODATA("nonmatchings/sc_sascore", D_000025B0);

INCLUDE_ASM("nonmatchings/sc_sascore", sceSasCoreInit);

INCLUDE_ASM("nonmatchings/sc_sascore", sceSasCoreExit);

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
