/* compiler[330,340]: 1.9.2 */
/* cflags[330,340]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libaudiocodec2_decls.h"

s32 sceAudiocodec2CheckNeedMem(struct Unk_sceAudiocodec2_AA2ED267_0 *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0x807F00FF;
    if (arg0 != NULL) {
        var_v1 = 0x807F00FF;
        if (arg1 == 0x1001) {
            arg0->unk8 = 0;
            arg0->unkC = 0;
            arg0->unk10 = 0x36A8;
            var_v1 = 0;
        }
        var_v0 = var_v1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libaudiocodec2", sceAudiocodec2Init);

INCLUDE_ASM("nonmatchings/libaudiocodec2", sceAudiocodec2Decode);

s32 func_0000010C(struct Unk_func_0000010C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    u32 temp_a3;

    temp_v0 = func_00000278(arg0);
    var_a0 = temp_v0;
    if (temp_v0 == 0) {
        temp_v0_2 = func_0000030C(arg0->unk28);
        var_a0 = 0x807F00FF;
        if (temp_v0_2 != 0x270F) {
            temp_a3 = arg0->unk34;
            var_a0 = (func_000003E4((s32) temp_a3, temp_v0_2, (s32) ((u32) arg0->unk30 / temp_a3), arg0->unkC) != 0) ? 0 : 0x807F00FD;
        }
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_0000018C);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_00000278);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_0000030C);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_0000033C);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_000003E4);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_00000520);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002884);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002894);
#endif

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_000028A4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_000028D4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002930);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002990);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_0000299C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_000029A4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002A24);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002AA4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002AE4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B04);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B14);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B24);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B2C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B34);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B44);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002B84);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002C84);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D04);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D44);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D64);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D74);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D7C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002D9C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002DDC);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002DFC);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E0C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E18);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E20);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E28);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E34);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002E4C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002F48);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00002FC4);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00003000);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00003024);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00003040);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00003054);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_0000307C);

INCLUDE_RODATA("nonmatchings/libaudiocodec2", D_00003100);

INCLUDE_ASM("nonmatchings/libaudiocodec2", func_000007A8);
