/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_decls.h"

INCLUDE_ASM("nonmatchings/mpeg", func_00000000);

INCLUDE_ASM("nonmatchings/mpeg", func_00000124);

INCLUDE_ASM("nonmatchings/mpeg", func_000001B4);

INCLUDE_ASM("nonmatchings/mpeg", func_0000026C);

INCLUDE_RODATA("nonmatchings/mpeg", D_00008018);

INCLUDE_RODATA("nonmatchings/mpeg", D_00008030);

INCLUDE_ASM("nonmatchings/mpeg", func_0000034C);

INCLUDE_ASM("nonmatchings/mpeg", func_00000414);

INCLUDE_ASM("nonmatchings/mpeg", func_00000498);

INCLUDE_ASM("nonmatchings/mpeg", func_00000824);

INCLUDE_ASM("nonmatchings/mpeg", func_000008D0);

s32 func_00000918(void) {
    return 0x10000;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00000920);

INCLUDE_ASM("nonmatchings/mpeg", func_00000AAC);

INCLUDE_ASM("nonmatchings/mpeg", func_00000B54);

INCLUDE_ASM("nonmatchings/mpeg", func_00000C3C);

INCLUDE_ASM("nonmatchings/mpeg", func_00000C88);

INCLUDE_ASM("nonmatchings/mpeg", func_00000E20);

INCLUDE_ASM("nonmatchings/mpeg", func_00000F70);

void func_00000FB4(s32 arg0, s32 arg1) {
    func_00000B54(arg0, 0, arg1);
}

#if FW_VERSION >= 282
s32 func_00000FD4(void) {
    return 0x80618006;
}
#endif

s32 func_00000FE0(void) {
    return 0x80618006;
}

void func_00000FEC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 temp_s1;
    struct Unk_func_00000FEC_temp_s4 *temp_s4;

    temp_s4 = M2C_FIELD(*arg0, void **, 0x68C);
    if (func_00001AF4(arg0) == 0) {
        temp_s1 = temp_s4->unk34;
        temp_s4->unk34 = 1;
        func_00000C88((s32) arg0, arg1, arg2, arg3, &sp0);
        temp_s4->unk34 = temp_s1;
    }
}

INCLUDE_ASM("nonmatchings/mpeg", func_00001074);

INCLUDE_ASM("nonmatchings/mpeg", func_000011A0);

INCLUDE_ASM("nonmatchings/mpeg", func_00001264);

INCLUDE_ASM("nonmatchings/mpeg", func_00001480);

INCLUDE_ASM("nonmatchings/mpeg", func_00001510);

void func_000015B4(s32 *arg0, s32 arg1, s32 arg2) {
    void *sp0;
    s32 temp_s1;
    struct Unk_func_000015B4_temp_s3 *temp_s3;

    temp_s3 = M2C_FIELD(*arg0, void **, 0x68C);
    if (func_00001AF4(arg0) == 0) {
        temp_s1 = temp_s3->unk34;
        temp_s3->unk34 = 1;
        func_00001510((s32) arg0, arg1, arg2, &sp0);
        temp_s3->unk34 = temp_s1;
    }
}

INCLUDE_ASM("nonmatchings/mpeg", func_0000162C);

INCLUDE_ASM("nonmatchings/mpeg", func_00001690);

INCLUDE_ASM("nonmatchings/mpeg", func_00001734);

INCLUDE_ASM("nonmatchings/mpeg", func_000017E4);

INCLUDE_ASM("nonmatchings/mpeg", func_0000188C);

INCLUDE_ASM("nonmatchings/mpeg", func_00001980);

INCLUDE_RODATA("nonmatchings/mpeg", D_000080B8);

INCLUDE_RODATA("nonmatchings/mpeg", D_000080C0);

INCLUDE_RODATA("nonmatchings/mpeg", D_000080D0);

INCLUDE_ASM("nonmatchings/mpeg", func_00001A28);

s32 func_00001AF4(s32 *arg0) {
    return (func_00007758(*arg0, (s32) &D_000080D0) == 0) ? 0 : 0x806101FE;
}

s32 func_00001B28(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00007B2C(arg0 + 0xC);
    *arg1 = temp_v0;
    var_v0 = 0;
    if (temp_v0 & 0x7FF) {
        *arg1 = 0;
        var_v0 = 0x806101FE;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00001B6C);

INCLUDE_ASM("nonmatchings/mpeg", func_00001C14);

INCLUDE_ASM("nonmatchings/mpeg", func_00001DE0);

INCLUDE_ASM("nonmatchings/mpeg", func_00001EA8);

INCLUDE_ASM("nonmatchings/mpeg", func_00001F28);

INCLUDE_ASM("nonmatchings/mpeg", func_00002290);

INCLUDE_ASM("nonmatchings/mpeg", func_000023A4);

INCLUDE_ASM("nonmatchings/mpeg", func_00002548);

INCLUDE_ASM("nonmatchings/mpeg", func_00002BC8);

INCLUDE_ASM("nonmatchings/mpeg", func_00002C34);

INCLUDE_ASM("nonmatchings/mpeg", func_00002DBC);

INCLUDE_ASM("nonmatchings/mpeg", func_0000308C);

INCLUDE_ASM("nonmatchings/mpeg", func_000030A4);

INCLUDE_ASM("nonmatchings/mpeg", func_000030C0);

s32 func_00003198(void) {
    return 0;
}

s32 func_000031A0(struct Unk_func_000031A0_0 *arg0) {
    s32 *temp_v1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    struct Unk_func_000031A0_temp_s2 *temp_s2;

    temp_v1 = arg0->unk28;
    temp_s2 = *temp_v1;
    temp_v0 = func_00001AF4(temp_v1);
    if (temp_v0 != 0) {
        var_v0 = temp_v0;
    } else {
        func_00006D70(temp_s2->unk66C);
        temp_s0 = arg0->unkC;
        func_00006E00(temp_s2->unk66C);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00003208);

INCLUDE_ASM("nonmatchings/mpeg", func_000032C0);

INCLUDE_ASM("nonmatchings/mpeg", func_00003370);

INCLUDE_ASM("nonmatchings/mpeg", func_000038D4);

INCLUDE_ASM("nonmatchings/mpeg", func_00003B00);

INCLUDE_ASM("nonmatchings/mpeg", func_00003E60);

INCLUDE_ASM("nonmatchings/mpeg", func_0000425C);

INCLUDE_ASM("nonmatchings/mpeg", func_00004370);

INCLUDE_ASM("nonmatchings/mpeg", func_0000466C);

INCLUDE_ASM("nonmatchings/mpeg", func_00004770);

INCLUDE_ASM("nonmatchings/mpeg", func_00004AC0);

INCLUDE_ASM("nonmatchings/mpeg", func_00004E3C);

s32 func_00004E70(struct Unk_func_00004E70_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

void func_00004E7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003E60(arg0, arg1, 3, arg2, arg3);
}

void func_00004EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00003B00(arg0, arg1, 5, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/mpeg", func_00004EC4);

INCLUDE_ASM("nonmatchings/mpeg", func_00004F1C);

INCLUDE_ASM("nonmatchings/mpeg", func_00004FD0);

INCLUDE_ASM("nonmatchings/mpeg", func_00005128);

INCLUDE_ASM("nonmatchings/mpeg", func_000051F4);

INCLUDE_ASM("nonmatchings/mpeg", func_0000527C);

INCLUDE_ASM("nonmatchings/mpeg", func_000052FC);

INCLUDE_ASM("nonmatchings/mpeg", func_00005338);

INCLUDE_ASM("nonmatchings/mpeg", func_00005388);

INCLUDE_ASM("nonmatchings/mpeg", func_000053D4);

INCLUDE_ASM("nonmatchings/mpeg", func_0000542C);

s32 func_00005478(s32 arg0) {
    return ((func_00007AF4(arg0 + 2) & 0x3FF) * 8) + 8;
}

s32 func_000054A0(u8 *arg0) {
    return *arg0 & 0xF;
}

INCLUDE_ASM("nonmatchings/mpeg", func_000054AC);

INCLUDE_ASM("nonmatchings/mpeg", func_000054CC);

s32 func_000054F0(s32 arg0) {
    return __builtin_allegrex_ins(func_00007B0C(arg0 + 1), 0, 0x15, 0xB);
}

u8 func_00005510(struct Unk_func_00005510_0 *arg0) {
    return arg0->unk3;
}

void *func_00005518(struct Unk_func_00005518_0 *arg0, s32 arg1) {
    void *var_v0;

    var_v0 = NULL;
    if (arg1 < (s32) arg0->unk3) {
        var_v0 = (u8 *)arg0 + (arg1 * 4) + 4;
    }
    return var_v0;
}

u8 func_0000553C(struct Unk_func_0000553C_0 *arg0) {
    return arg0->unk1;
}

s32 func_00005544(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 >= 4) {

    } else {
        var_v0 = func_00007AF4(arg0 + (arg1 * 2) + 2);
    }
    return var_v0;
}

s32 func_00005580(s32 arg0) {
    return arg0 + 0xE;
}

void *func_00005588(void **arg0) {
    struct Unk_func_00005588_temp_a1 *temp_a1;

    temp_a1 = *arg0;
    return (u8 *)temp_a1 + (temp_a1->unk24 * 0x644) + 0x28;
}

s32 func_000055A8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mpeg", func_000055B0);

INCLUDE_ASM("nonmatchings/mpeg", func_0000596C);

INCLUDE_ASM("nonmatchings/mpeg", func_00005A48);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryStreamOffset);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryStreamSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegInit);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegFinish);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryMemSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegCreate);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegDelete);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRegistStream);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegUnRegistStream);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegMallocAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegFreeAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryAtracEsSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryPcmEsSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegInitAu);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegChangeGetAvcAuMode);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegChangeGetAuMode);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegNextAvcRpAu);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegGetAvcAu);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegGetPcmAu);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegGetAtracAu);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegFlushStream);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegFlushAllStream);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecode);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeDetail);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeMode);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeStop);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeFlush);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcQueryYCbCrSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcInitYCbCr);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeYCbCr);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcDecodeStopYCbCr);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcCsc);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAvcCopyYCbCr);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegAtracDecode);

INCLUDE_ASM("nonmatchings/mpeg", func_00006898);

INCLUDE_ASM("nonmatchings/mpeg", func_00006910);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegQueryUserdataEsSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegGetUserdataAu);

INCLUDE_ASM("nonmatchings/mpeg", func_00006A58);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferQueryMemSize);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferQueryPackNum);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferConstruct);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferDestruct);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferPut);

INCLUDE_ASM("nonmatchings/mpeg", sceMpegRingbufferAvailableSize);

s32 func_00006CF0(s32 arg0, s32 arg1, void *arg2, u32 *arg3) {
    u32 temp_v0;

    temp_v0 = sceKernelCreateSema(arg2, 0U, arg0, arg1, NULL);
    *arg3 = temp_v0;
    return ((s32) temp_v0 >= 0) ? 0 : 0x80000041;
}

s32 func_00006D44(u32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : 0x80000041;
}

s32 func_00006D70(u32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : 0x80000041;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00006DA0);

s32 func_00006DD4(u32 arg0) {
    return (sceKernelPollSema(arg0, 0) == 0) ? 0 : 0x80000041;
}

s32 func_00006E00(u32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : 0x80000041;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00006E2C);

void func_00006E74(void) {
    sceKernelCheckThreadStack();
}

INCLUDE_ASM("nonmatchings/mpeg", func_00006E90);

INCLUDE_ASM("nonmatchings/mpeg", func_00006F44);

INCLUDE_ASM("nonmatchings/mpeg", func_00006F88);

void func_00007108(void) {
    sceVideocodec_4F160BF4(D_00008300);
}

s32 func_0000712C(s32 arg0) {
    s32 temp_s1;

    func_00006D70(D_000084C0);
    temp_s1 = func_00006F44(arg0);
    func_00006E00(D_000084C0);
    return temp_s1;
}

s32 func_0000717C(void) {
    return D_00008300->unk14;
}

s32 func_0000718C(s32 arg0) {
    s32 temp_s1;

    func_00006D70(D_000084C0);
    temp_s1 = sceVideocodec_DBA273FA(arg0, 0);
    func_00006E00(D_000084C0);
    return temp_s1;
}

s32 func_000071E0(s32 arg0) {
    s32 temp_s1;

    func_00006D70(D_000084C0);
    temp_s1 = sceVideocodec_A2F0564E(arg0, 0);
    func_00006E00(D_000084C0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/mpeg", func_00007234);

#if FW_VERSION >= 282
s32 func_000072FC(struct Unk_func_000072FC_0 *arg0, s32 arg1) {
    s32 temp_s1;

    func_00006D70(D_000084C0);
    arg0->unk54 = arg1;
    temp_s1 = sceVideocodec_17CF7D2C(arg0, 0);
    func_00006E00(D_000084C0);
    return temp_s1;
}
#endif

#if FW_VERSION >= 300
s32 func_00007390(void *arg0, s32 arg1) {
    s32 temp_s1;

    func_00006D70(D_000084C0);
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    temp_s1 = sceVideocodec_893B32B1(arg0, 0);
    func_00006E00(D_000084C0);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg", func_0000735C);

INCLUDE_ASM("nonmatchings/mpeg", func_000073E8);

INCLUDE_ASM("nonmatchings/mpeg", func_00007494);

void func_00007590(void) {
    if (D_00008400->unkC == 0) {

    } else {
        sceAudiocodec_29681260(D_00008400);
    }
}

s32 func_000075C8(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_00006D70(D_000084C4);
    temp_s1 = func_000073E8(arg0, arg1, 0);
    func_00006E00(D_000084C4);
    return temp_s1;
}

s32 func_00007628(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_000084AC;
    }
    return D_00008400->unkC;
}

s32 func_00007648(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    func_00006D70(D_000084C4);
    temp_v0 = sceAudiocodec_70A703F8(arg0, 0x1000);
    if (temp_v0 != 0) {
        func_00006E00(D_000084C4);
        var_v0 = temp_v0;
    } else {
        func_00006E00(D_000084C4);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mpeg", func_000076B0);

u8 *func_000076F8(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mpeg", func_0000772C);

INCLUDE_ASM("nonmatchings/mpeg", func_00007758);

s32 func_000077D8(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}

INCLUDE_ASM("nonmatchings/mpeg", func_000077E8);

INCLUDE_ASM("nonmatchings/mpeg", func_0000787C);

INCLUDE_ASM("nonmatchings/mpeg", func_00007AC8);

INCLUDE_ASM("nonmatchings/mpeg", func_00007AF4);

INCLUDE_ASM("nonmatchings/mpeg", func_00007B0C);

INCLUDE_ASM("nonmatchings/mpeg", func_00007B2C);

INCLUDE_ASM("nonmatchings/mpeg", func_00007B58);

INCLUDE_RODATA("nonmatchings/mpeg", D_00008100);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/mpeg", D_000081BC);
#else
INCLUDE_RODATA("nonmatchings/mpeg", D_00008110);
#endif

INCLUDE_RODATA("nonmatchings/mpeg", D_00008190);

INCLUDE_RODATA("nonmatchings/mpeg", D_000081E4);

INCLUDE_RODATA("nonmatchings/mpeg", D_000081E8);

INCLUDE_RODATA("nonmatchings/mpeg", D_000081EC);

INCLUDE_RODATA("nonmatchings/mpeg", D_000081F4);
