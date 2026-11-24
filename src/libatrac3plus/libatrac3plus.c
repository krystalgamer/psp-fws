/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libatrac3plus_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracReinit);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetAtracID);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetHalfwayBuffer);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetDataAndGetID);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetHalfwayBufferAndGetID);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBuffer);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBufferAndGetID);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetAA3HalfwayBufferAndGetID);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracDecodeData);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetStreamDataInfo);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracAddStreamData);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetSecondBufferInfo);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetSecondBuffer);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetSoundSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetNextDecodePosition);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetLoopNum);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtrac3plus_CA3CA3D2);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracResetPlayPosition);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000E00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000E84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000EEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000010D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001140);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000E84);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000F1C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00000FD8);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracStartEntry);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracEndEntry);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracReleaseAtracID);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracSetData);
#endif

#if FW_VERSION != 100
s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2) {
    return sceAtracSetHalfwayBuffer(arg0, arg1, arg2, arg2);
}
#endif

#if FW_VERSION != 100
s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1) {
    return sceAtracSetHalfwayBufferAndGetID(arg0, arg1, arg1);
}
#endif

#if FW_VERSION != 100
s32 sceAtracSetAA3DataAndGetID(void *arg0, u32 arg1, u32 arg2, void *arg3) {
    return sceAtracSetAA3HalfwayBufferAndGetID(arg0, arg1, arg1, arg2, arg3);
}
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetRemainFrame);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracIsSecondBufferNeeded);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetChannel);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetOutputChannel);
#endif

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetMaxSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetNextSample);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetBitrate);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetLoopStatus);

INCLUDE_ASM("nonmatchings/libatrac3plus", sceAtracGetInternalErrorInfo);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000016A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001E24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001E8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001F20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001F9C);
#endif

#if FW_VERSION == 100
s32 func_00002014(void *arg0) {
    s32 var_a1;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    var_a1 = 0;
    if ((temp_v1 != 0) && ((M2C_FIELD(arg0, s32 *, 0x24) != 0) || (temp_v1 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)))) {
        var_a1 = 1;
    }
    return var_a1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000021E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002218);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000022F8);
#endif

#if FW_VERSION == 100
void func_00002320(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    if (var_a2 != 0) {
        do {
            temp_v1 = *var_a1;
            var_a2 -= 1;
            var_a1 += 1;
            *var_a0 = temp_v1;
            var_a0 += 1;
        } while (var_a2 != 0);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002348);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000024A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002588);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000025D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002628);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000027F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000028B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000028CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002918);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000150C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000153C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000015E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001648);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000016D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001708);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000019F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00001B38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002050);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002088);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000020E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002114);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000214C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000219C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002348);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000023C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000037F8);
#endif

INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003810);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000038A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_000038B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002CE0);
#endif

#if FW_VERSION == 100
u32 func_00002D4C(void *arg0) {
    u32 temp_a1;
    u32 var_a2;

    temp_a1 = M2C_FIELD(arg0, u32 *, 0x3C);
    var_a2 = -2U;
    if (temp_a1 < (u32) (M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg0, s32 *, 0x28))) {
        var_a2 = temp_a1 / (u32) M2C_FIELD(arg0, u32 *, 8);
    }
    return var_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002D84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002E3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002F7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002FBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002FE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_0000302C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030D0);
#endif

#if FW_VERSION == 100
s32 func_00003168(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_v1;
    u32 temp_a0;
    u32 temp_hi;

    temp_a0 = arg0 + arg2;
    var_v1 = 0;
    if (temp_a0 < arg1) {
        var_v1 = arg1 - temp_a0;
    } else {
        temp_hi = (u32) (arg1 - arg0) % arg3;
        if (arg1 >= (u32) (temp_hi + arg2)) {
            var_v1 = (arg1 - temp_hi) - arg2;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000031E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003238);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000033A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003478);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000035A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003820);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libatrac3plus", D_00003830);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002478);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002544);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002624);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002710);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002774);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000027B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002860);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002964);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000029C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002A9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002B70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002BEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002C78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00002F04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000030AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000032E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000033DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003464);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_000034D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libatrac3plus", func_00003518);
#endif
