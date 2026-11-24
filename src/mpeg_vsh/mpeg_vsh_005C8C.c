/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00005C8C);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00005CE4);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00005E6C);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_000060A0);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_0000617C);

s32 sceMpegQueryStreamOffset(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00001EFC((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegQueryStreamSize(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00001FFC((s32) arg0, (s32 *) arg1);
    }
    return var_v1;
}

s32 sceMpegInit(void) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_0000034C();
    }
    return var_v1;
}

s32 sceMpegFinish(void) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_0000041C();
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegQueryMemSize);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegCreate);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegDelete);

void *sceMpegRegistStream(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_0000026C((s32) arg0, arg1, arg2);
    }
    return (void *) var_v1;
}

s32 sceMpegUnRegistStream(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_000001B4((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegMallocAvcEsBuf);

s32 sceMpegFreeAvcEsBuf(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005790((s32) arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegQueryAtracEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005810((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegQueryPcmEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005A64((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegInitAu(void *arg0, s32 arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000B88((s32) arg0, arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegChangeGetAvcAuMode(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_000060A0(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 sceMpegChangeGetAuMode(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_0000617C((s32) arg0, (s32) arg1, arg2);
    }
    return var_v1;
}

s32 sceMpegNextAvcRpAu(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005CE4((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegGetAvcAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00004C18((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegGetPcmAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00003D7C((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegGetAtracAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00004818((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegFlushStream(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000000((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegFlushAllStream(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000124((s32) arg0);
    }
    return var_v1;
}

s32 sceMpegAvcDecode(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00001058((s32) arg0, (s32) arg1, arg2, (s32) arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegAvcDecodeDetail);

s32 sceMpegAvcDecodeMode(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000D5C((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeStop(void *arg0, s32 arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_000012D4((s32) arg0, arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegAvcDecodeFlush);

s32 sceMpegAvcQueryYCbCrSize(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00001674((s32) arg0, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegAvcInitYCbCr);

s32 sceMpegAvcDecodeYCbCr(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_000019E4((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeStopYCbCr(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00001B00((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegAvcCsc);

s32 sceMpegAvcCopyYCbCr(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00001954((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegAtracDecode(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00001E54((s32) arg0, (s32) arg1, (s32) arg2, arg3);
    }
    return var_v1;
}

s32 func_00006FCC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_000014C0(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_00007044(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00001A88(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 sceMpegQueryUserdataEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005B08((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegGetUserdataAu);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegGetAvcEsAu);

s32 sceMpegRingbufferQueryMemSize(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00003560(arg0);
    }
    return var_v1;
}

s32 sceMpegRingbufferQueryPackNum(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00003578(arg0);
    }
    return var_v1;
}

s32 sceMpegRingbufferConstruct(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00003594((s32) arg0, arg1, (s32) arg2, arg3, arg4, (s32) arg5);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegRingbufferDestruct);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpegRingbufferPut);

s32 sceMpegRingbufferAvailableSize(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00003290((s32) arg0);
    }
    return var_v1;
}

s32 sceMpeg_11CAB459(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005AB0(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 sceMpeg_C2F02CDD(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_000033D0(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 sceMpeg_5AC68A41(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00003CC4(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 sceMpeg_DBB60658(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00003C1C(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_B27711A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00005E6C(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", sceMpeg_D4DD6E75);

s32 sceMpeg_C345DED2(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00004704(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegGetAvcNalAu(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005048((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeDetailIndex(void *arg0, s32 arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000E04((s32) arg0, arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpeg_CF3547A2(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000F10(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_6F314410(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000F78(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_AE693D0B(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000FE8(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_988E9E12(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00005888(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00007958(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateSema(arg2, 0U, arg0, arg1, NULL);
    *arg3 = temp_v0;
    return (temp_v0 >= 0) ? 0 : 0x80000041;
}

s32 func_000079AC(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : 0x80000041;
}

s32 func_000079D8(s32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : 0x80000041;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00007A08);

s32 func_00007A3C(s32 arg0) {
    return (sceKernelPollSema(arg0, 0) == 0) ? 0 : 0x80000041;
}

s32 func_00007A68(s32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : 0x80000041;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00007A94);

s32 func_00007ADC(void) {
    return sceKernelCheckThreadStack();
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00007AF8);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00007BAC);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C8C", func_00007BF0);

void func_00007D70(void) {
    sceVideocodec_4F160BF4(D_00009DC0);
}

s32 func_00007D94(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    temp_s1 = func_00007BAC(arg0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

