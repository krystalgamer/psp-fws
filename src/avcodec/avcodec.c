/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "avcodec_decls.h"

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", func_00000000);
#else
s32 func_00000000(void) {
    M2C_VFIELD(&D_00004480, s32, 0x670) = sceKernelCreateSema("SceMpegBaseLLI", 0U, 1, 1, NULL);
    M2C_VFIELD(&D_00004480, s32, 0x668) = 0;
    M2C_VFIELD(&D_00004480, s32, 0x66C) = 0;
    M2C_VFIELD(&D_00004480, s32, 0x674) = sceKernelCreateEventFlag("SceMpegBaseCSC", 0x200U, 0U, NULL);
    return 0;
}

s32 func_00000050(void) {
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00004480, s32, 0x674));
    sceKernelDeleteSema(M2C_VFIELD(&D_00004480, u32, 0x670));
    return 0;
}
#endif

#if FW_VERSION < 300
s32 func_00000050(void) {
    sceKernelDeleteSema(D_00004830);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_9D3F790C);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_5B37EB1D);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_3DD7EE1A);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_70A703F8);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_8ACA11D5);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_59176A0F);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_E066B45F);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_3A20A200);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_29681260);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004034);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", func_00000A74);

INCLUDE_ASM("nonmatchings/avcodec", func_00000B64);

INCLUDE_ASM("nonmatchings/avcodec", func_00000C3C);
#else
INCLUDE_ASM("nonmatchings/avcodec", func_00000A18);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/avcodec", func_000009E4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/avcodec", func_00000B04);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", func_00000BD8);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_2D31F5B1);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_4F160BF4);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_C01EC829);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_17099F0A);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_745A7B7A);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_2F385E7F);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_26927D19);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_627B7D42);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_17CF7D2C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_893B32B1);
#endif

s32 func_000012AC(void) {
    sceMePower_driver_B6FE3E62(0);
    sceMePower_driver_05B2C420(0);
    return 0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_17099F0A);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_DBA273FA);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_A2F0564E);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_307E6E1C);

INCLUDE_ASM("nonmatchings/avcodec", func_00001524);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", func_0000171C);

INCLUDE_ASM("nonmatchings/avcodec", func_000017E8);
#else
INCLUDE_ASM("nonmatchings/avcodec", func_00001598);

INCLUDE_ASM("nonmatchings/avcodec", func_00001668);

INCLUDE_ASM("nonmatchings/avcodec", func_000016DC);
#endif

INCLUDE_ASM("nonmatchings/avcodec", func_000018F0);

INCLUDE_ASM("nonmatchings/avcodec", func_0000199C);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", func_00001B80);
#else
INCLUDE_ASM("nonmatchings/avcodec", func_00001A68);
#endif

INCLUDE_ASM("nonmatchings/avcodec", func_00001B88);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_7AC0321A);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_BE45C284);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/avcodec", func_000020DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/avcodec", func_00001D34);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/avcodec", func_00001FC0);
#endif

INCLUDE_ASM("nonmatchings/avcodec", func_0000203C);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_BEA18F91);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegInitMJpeg);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegCreateMJpeg);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegDeleteMJpeg);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegFinishMJpeg);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegMJpegCsc);

INCLUDE_ASM("nonmatchings/avcodec", sceJpegDecodeMJpeg);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/avcodec", sceJpegGetOutputInfo);
#endif

void sceJpeg_0425B986(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00002AB0(arg0, arg1, arg2, arg3, 0);
}

s32 sceJpegCsc(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    return 0x80000003;
}

INCLUDE_ASM("nonmatchings/avcodec", sceJpegDecodeMJpegYCbCr);

s32 sceJpeg_9B36444C(void) {
    return 0x80000003;
}

INCLUDE_RODATA("nonmatchings/avcodec", D_00004078);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004098);

INCLUDE_RODATA("nonmatchings/avcodec", D_000040B0);

INCLUDE_RODATA("nonmatchings/avcodec", D_000040C4);

INCLUDE_ASM("nonmatchings/avcodec", func_00002A38);

s32 func_00002A88(void) {
    sceKernelDeleteSema(D_00004140);
    return 0;
}

INCLUDE_ASM("nonmatchings/avcodec", func_00002AB0);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_91929A21);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_CE8EB837);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_304882E1);

INCLUDE_ASM("nonmatchings/avcodec", func_000033E8);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_0530BE4E);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_AC9E717E);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_492B5E4B);
#else
void sceMpegbase_driver_492B5E4B(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceMpegbase_driver_AC9E717E(arg0, (s32) &D_000040E4);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/avcodec", func_000037CC);

INCLUDE_ASM("nonmatchings/avcodec", func_0000388C);

INCLUDE_ASM("nonmatchings/avcodec", func_00003968);

INCLUDE_ASM("nonmatchings/avcodec", func_00003AE0);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", func_000035F0);

INCLUDE_ASM("nonmatchings/avcodec", func_00003698);

INCLUDE_ASM("nonmatchings/avcodec", func_00003724);

INCLUDE_ASM("nonmatchings/avcodec", func_0000389C);
#endif

s32 sceAvcodec_driver_4A0592C7(void) {
    func_00000000();
    func_000012AC();
    func_00002A38();
    return 0;
}

s32 sceAvcodec_driver_C692C906(void) {
    func_00000050();
    func_00002A88();
    return 0;
}

INCLUDE_RODATA("nonmatchings/avcodec", D_000040E4);
