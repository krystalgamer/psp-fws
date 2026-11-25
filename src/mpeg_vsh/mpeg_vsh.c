/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFlushStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFlushAllStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegUnRegistStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRegistStream);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000096DC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00007A30);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegInit);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFinish);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryMemSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegCreate);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegDelete);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegInitAu);
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000000);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000124);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000001B4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000026C);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009AC8);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009AE0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000034C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000041C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000004A0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000600);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000ADC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000B88);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000BD0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetailIndex);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_6F314410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetail);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecode);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeStop);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeFlush);

s32 sceMpegAvcDecodeDetail(void *arg0, void *arg1) {
    return sceMpegAvcDecodeDetailIndex(arg0, 0, arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_CF3547A2);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000114C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcInitYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcQueryYCbCrSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcCsc);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeStopYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000017D0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001874);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAtracDecode);
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000D5C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000E04);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000F10);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000F78);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000FE8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001058);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000012D4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000145C);

void func_000014A0(s32 arg0, s32 arg1) {
    func_00000E04(arg0, 0, arg1);
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000014C0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001548);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001674);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001738);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001954);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000019E4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001A88);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001B00);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001B64);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001C08);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001CB8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001D60);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001E54);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009B68);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009784);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_0000919C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009B70);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009B88);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009B98);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryStreamOffset);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001FC8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00001FC8(s32 *arg0) {
    return (func_00006884(*arg0, (s32) &D_00009B98) == 0) ? 0 : 0x806101FE;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryStreamSize);
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001EFC);

s32 func_00001FC8(s32 *arg0) {
    return (func_00009194(*arg0, (s32) &D_00009B98) == 0) ? 0 : 0x806101FE;
}

s32 func_00001FFC(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00009568(arg0 + 0xC);
    *arg1 = temp_v0;
    var_v0 = 0;
    if (temp_v0 & 0x7FF) {
        *arg1 = 0;
        var_v0 = 0x806101FE;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002040);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001310);
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000020E8);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000022B4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000237C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000015FC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000019B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000029AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002040_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003A8C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferPut);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003B90);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferAvailableSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_C2F02CDD);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferQueryMemSize);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferQueryPackNum);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferConstruct);

s32 sceMpegRingbufferDestruct(void *arg0) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000023FC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002764);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002878);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002A1C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000309C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003108);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003290);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000033D0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003560);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003578);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003594);

s32 func_0000366C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003674);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000036DC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003794);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_DBB60658);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_5AC68A41);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetPcmAu);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050DC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005444);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_D4DD6E75);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_C345DED2);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAtracAu);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcAu);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcEsAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcNalAu);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003844);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003C1C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003CC4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003D7C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003FA8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004308);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004704);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004818);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004B14);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004C18);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004F68);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005048);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000052E4);

#if FW_VERSION < 282
s32 func_00004D20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 250
void func_00006484(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00005444(arg0, arg1, 3, arg2, arg3);
}

void sceMpeg_D4DD6E75(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000050DC(arg0, arg1, 5, arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000057A4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004D2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000633C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000063F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005C08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005D9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000657C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000660C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000051E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegMallocAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFreeAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryAtracEsSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_988E9E12);
#else
s32 func_00005318(struct Unk_func_00005318_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

void func_00005324(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00004308(arg0, arg1, 3, arg2, arg3);
}

void func_00005348(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003FA8(arg0, arg1, 5, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000536C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000053C4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005454);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005508);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000563C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005708);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005790);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005810);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005888);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005A28);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryPcmEsSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_11CAB459);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00007040);
#endif

#if FW_VERSION < 282
s32 func_000055EC(s32 arg0) {
    return ((func_00009530(arg0 + 2) & 0x3FF) * 8) + 8;
}

s32 func_00005614(u8 *arg0) {
    return *arg0 & 0xF;
}
#else
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005A64);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005AB0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005B08);

s32 func_00005B54(s32 arg0) {
    return ((func_00009530(arg0 + 2) & 0x3FF) * 8) + 8;
}

s32 func_00005B7C(u8 *arg0) {
    return *arg0 & 0xF;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005B88);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005BA8);

#if FW_VERSION < 282
s32 func_00005664(s32 arg0) {
    return func_00009548(arg0 + 1) & 0x1FFFFF;
}

u8 func_0000568C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 3);
}
#endif

#if FW_VERSION == 250
void *func_00005694(void *arg0, u32 arg1) {
    void *var_v0;

    var_v0 = NULL;
    if ((s32) arg1 < (s32) M2C_FIELD(arg0, u8 *, 3)) {
        var_v0 = arg0 + (arg1 * 4) + 4;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
void *func_00005694(void *arg0, u32 arg1) {
    void *var_v0;

    var_v0 = NULL;
    if (arg1 < (u8) M2C_FIELD(arg0, u8 *, 3)) {
        var_v0 = arg0 + (arg1 * 4) + 4;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
u8 func_000056B8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 1);
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000056C0);

s32 func_000056FC(s32 arg0) {
    return arg0 + 0xE;
}

void *func_00005704(void **arg0) {
    void *temp_a1;

    temp_a1 = *arg0;
    return temp_a1 + (M2C_FIELD(temp_a1, s32 *, 0x24) * 0x644) + 0x28;
}

s32 func_00005724(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000639C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000572C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegNextAvcRpAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_B27711A8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegChangeGetAvcAuMode);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegChangeGetAuMode);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005CC4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00005CC4(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateSema(arg2, 0U, arg0, arg1, NULL);
    *arg3 = temp_v0;
    return (temp_v0 >= 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005D1C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00005D1C(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000079D8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_000079D8(s32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION == 282
s32 func_00005BCC(s32 arg0) {
    return __builtin_allegrex_ins(func_00009548(arg0 + 1), 0, 0x15, 0xB);
}

u8 func_00005BEC(struct Unk_func_00005BEC_0 *arg0) {
    return arg0->unk3;
}

void *func_00005BF4(struct Unk_func_00005BF4_0 *arg0, s32 arg1) {
    void *var_v0;

    var_v0 = NULL;
    if (arg1 < (s32) arg0->unk3) {
        var_v0 = (u8 *)arg0 + (arg1 * 4) + 4;
    }
    return var_v0;
}

u8 func_00005C18(struct Unk_func_00005C18_0 *arg0) {
    return arg0->unk1;
}
#endif
