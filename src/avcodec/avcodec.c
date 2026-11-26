/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "avcodec_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/avcodec", D_00003E34);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003E38);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003E50);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003E68);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003E80);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003E98);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003EB0);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003EC8);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003EE0);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003EF0);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003F10);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003F24);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003F34);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003F44);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003FAC);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003FBC);

INCLUDE_RODATA("nonmatchings/avcodec", D_00003FFC);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004008);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004050);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004064);

INCLUDE_RODATA("nonmatchings/avcodec", D_000040AC);

INCLUDE_RODATA("nonmatchings/avcodec", D_000040B4);

INCLUDE_RODATA("nonmatchings/avcodec", D_0000410C);

INCLUDE_RODATA("nonmatchings/avcodec", D_0000412C);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004138);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004158);

INCLUDE_RODATA("nonmatchings/avcodec", D_0000416C);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004170);

INCLUDE_RODATA("nonmatchings/avcodec", D_0000417C);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004184);
#endif

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

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecCheckNeedMem);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecInit);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_3DD7EE1A);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecDecode);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecGetInfo);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecAlcExtendParameter);

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodec_E066B45F);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecGetEDRAM);

INCLUDE_ASM("nonmatchings/avcodec", sceAudiocodecReleaseEDRAM);

INCLUDE_RODATA("nonmatchings/avcodec", D_00004034);

#if FW_VERSION >= 300
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

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecGetEDRAM);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecReleaseEDRAM);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecOpen);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecInit);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecSetMemory);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecScanHeader);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecGetVersion);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecGetSEI);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecGetFrameCrop);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodec_893B32B1);
#endif

s32 func_000012AC(void) {
    sceMePower_driver_B6FE3E62(0);
    sceMePowerControlAvcPower(0);
    return 0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecInit);
#endif

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecDecode);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecStop);

INCLUDE_ASM("nonmatchings/avcodec", sceVideocodecDelete);

INCLUDE_ASM("nonmatchings/avcodec", func_00001524);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/avcodec", func_0000171C);

INCLUDE_ASM("nonmatchings/avcodec", func_000017E8);
#else
INCLUDE_ASM("nonmatchings/avcodec", func_00001598);

INCLUDE_ASM("nonmatchings/avcodec", func_00001668);

INCLUDE_ASM("nonmatchings/avcodec", func_000016DC);
#endif

INCLUDE_ASM("nonmatchings/avcodec", func_000018F0);

INCLUDE_ASM("nonmatchings/avcodec", func_0000199C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/avcodec", func_00001B80);
#else
INCLUDE_ASM("nonmatchings/avcodec", func_00001A68);
#endif

INCLUDE_ASM("nonmatchings/avcodec", func_00001B88);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseYCrCbCopy);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseYCrCbCopyVme);

#if FW_VERSION >= 300
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

void sceJpegDecompressAllImage(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
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

INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseCscAvc);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseCscVme);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseCscAvcRange);

INCLUDE_ASM("nonmatchings/avcodec", func_000033E8);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_0530BE4E);

INCLUDE_ASM("nonmatchings/avcodec", sceMpegbase_driver_AC9E717E);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/avcodec", sceMpegBaseCscInit);
#else
void sceMpegBaseCscInit(s32 arg0) {
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

s32 sceAvcodecStartEntry(void) {
    func_00000000();
    func_000012AC();
    func_00002A38();
    return 0;
}

s32 sceAvcodecEndEntry(void) {
    func_00000050();
    func_00002A88();
    return 0;
}

INCLUDE_RODATA("nonmatchings/avcodec", D_000040E4);
