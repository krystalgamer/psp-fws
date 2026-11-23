/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libatrac3plus_decls.h"

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracReinit);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetAtracID);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetHalfwayBuffer);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetHalfwayBufferAndGetID);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBuffer);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetMOutHalfwayBufferAndGetID);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetAA3HalfwayBufferAndGetID);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracDecodeData);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetStreamDataInfo);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracAddStreamData);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetSecondBufferInfo);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetSecondBuffer);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetSoundSample);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetNextDecodePosition);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracSetLoopNum);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtrac3plus_CA3CA3D2);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracResetPlayPosition);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00000E84);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00000F1C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00000FD8);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracStartEntry);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracEndEntry);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracReleaseAtracID);

s32 sceAtracSetData(s32 arg0, void *arg1, u32 arg2) {
    return sceAtracSetHalfwayBuffer(arg0, arg1, arg2, arg2);
}

s32 sceAtracSetDataAndGetID(void *arg0, u32 arg1) {
    return sceAtracSetHalfwayBufferAndGetID(arg0, arg1, arg1);
}

s32 sceAtracSetAA3DataAndGetID(void *arg0, u32 arg1, u32 arg2, void *arg3) {
    return sceAtracSetAA3HalfwayBufferAndGetID(arg0, arg1, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetRemainFrame);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracIsSecondBufferNeeded);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetChannel);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetOutputChannel);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetMaxSample);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetNextSample);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetBitrate);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetLoopStatus);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", sceAtracGetInternalErrorInfo);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_0000150C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_0000153C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000015E4);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00001648);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000016D4);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00001708);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000019F8);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00001B38);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002050);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002088);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000020E4);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002114);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_0000214C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_0000219C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002348);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000023C0);

INCLUDE_RODATA("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", D_000037F8);

INCLUDE_RODATA("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", D_00003810);

INCLUDE_RODATA("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", D_00003820);

INCLUDE_RODATA("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", D_00003830);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002478);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002544);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002624);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002710);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002774);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000027B4);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002860);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002964);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000029A8);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000029C0);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002A04);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002A7C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002A9C);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002B28);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002B70);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002BEC);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002C18);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002C78);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00002F04);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000030AC);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000032E4);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000033DC);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00003464);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_000034D8);

INCLUDE_ASM("tmp/asm/282/libatrac3plus/nonmatchings/libatrac3plus", func_00003518);
