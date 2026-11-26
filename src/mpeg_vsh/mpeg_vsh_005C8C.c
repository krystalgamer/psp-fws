/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00005C8C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00005CE4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00005E6C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_000060A0);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_0000617C);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegQueryMemSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegCreate);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegDelete);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegMallocAvcEsBuf);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegAvcDecodeDetail);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegAvcDecodeFlush);

s32 sceMpegAvcQueryYCbCrSize(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3E0) {
        var_v1 = func_00001674((s32) arg0, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegAvcInitYCbCr);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegAvcCsc);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegGetUserdataAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegGetAvcEsAu);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegRingbufferDestruct);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpegRingbufferPut);

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

s32 sceMpegFlushAu(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", sceMpeg_D4DD6E75);

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

s32 sceMpegAvcDecodeDetail2(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007ADC() >= 0x3F0) {
        var_v1 = func_00000F10(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeGetDecodeSEI(s32 arg0, s32 arg1) {
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
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007A08);

#if FW_VERSION < 152
s32 func_00005DB8(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelPollSema(arg0, 0) != 0) {
        var_v1 = 0x80000041;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00005DB8(s32 arg0) {
    return (sceKernelPollSema(arg0, 0) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION < 152
s32 func_00007A68(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelSignalSema(arg0, 1) != 0) {
        var_v1 = 0x80000041;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
s32 func_00007A3C(s32 arg0) {
    return (sceKernelPollSema(arg0, 0) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION >= 152
s32 func_00007A68(s32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : 0x80000041;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007A94);

#if FW_VERSION == 271
s32 func_00007A14(void) {
    return sceKernelCheckThreadStack();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_0000791C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_000079D0);
#endif

#if FW_VERSION >= 282
s32 func_00007ADC(void) {
    return sceKernelCheckThreadStack();
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007AF8);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007BAC);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007BF0);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00007B94(void) {
    sceVideocodecReleaseEDRAM(D_00007D40);
}

s32 func_00007BB8(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00007F04);
    temp_s1 = func_000079D0(arg0);
    func_00007A68(D_00007F04);
    return temp_s1;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00005FC8);

void func_00006048(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00006050);
#endif

#if FW_VERSION < 201
s32 func_00006050(s32 *arg0) {
    s32 temp_s1;

    func_000079D8(D_00007F04);
    temp_s1 = sceVideocodecOpen(D_00007D40, 0);
    *arg0 = M2C_FIELD(D_00007D40, s32 *, 0x18);
    func_00007A68(D_00007F04);
    return temp_s1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_000060C0);
#endif

#if FW_VERSION < 201
s32 func_000060C0(void) {
    return M2C_FIELD(D_00007D40, s32 *, 0x14);
}
#endif

#if FW_VERSION < 250
void func_000060D0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s0;
    s32 var_s1;

    temp_a1 = (s32) (arg1 + ((u32) (arg1 >> 0x1F) >> 0x1C)) >> 4;
    var_s1 = arg0;
    if (temp_a1 > 0) {
        var_s0 = temp_a1;
        do {
            var_s0 -= 1;
            func_00006234(var_s1);
            var_s1 += 0x10;
        } while (var_s0 != 0);
    }
}
#endif

#if FW_VERSION < 282
s32 func_00006124(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00007F04);
    temp_s1 = sceVideocodecDecode(arg0, 0);
    func_00007A68(D_00007F04);
    return temp_s1;
}

s32 func_00006178(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00007F04);
    temp_s1 = sceVideocodecStop(arg0, 0);
    func_00007A68(D_00007F04);
    return temp_s1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_000061CC);
#endif

#if FW_VERSION < 201
s32 func_000061CC(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    func_000079D8(D_00007F04);
    temp_v0 = sceVideocodecDelete(arg0, 0);
    if (temp_v0 != 0) {
        func_00007A68(D_00007F04);
        var_v0 = temp_v0;
    } else {
        func_00007A68(D_00007F04);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00007754(void *arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00007F04);
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    temp_s1 = sceVideocodecGetSEI(arg0, 0);
    func_00007A68(D_00007F04);
    return temp_s1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_000067C4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_0000699C);

s32 func_00006F6C(void) {
    return 0x584;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00006F74);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00006FDC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007D88);

INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00007E14);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpeg_vsh_005C8C", func_00006234);
#endif

#if FW_VERSION >= 282
void func_00007D70(void) {
    sceVideocodecReleaseEDRAM(D_00009DC0);
}

s32 func_00007D94(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    temp_s1 = func_00007BAC(arg0);
    func_00007A68(D_00009F80);
    return temp_s1;
}
#endif
