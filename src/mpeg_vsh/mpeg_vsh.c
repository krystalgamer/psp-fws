/* compiler[271]: 1.9.2 */
/* cflags[271]: -Os -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -Os -frename-registers -mext */
/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000000);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000124);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000001B4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000026C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_0000987C);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009880);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009898);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098AC);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098C0);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098D4);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098E0);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098F0);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000098F8);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009AD8);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009AF4);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009AF8);

INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009B0C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFlushStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFlushAllStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegUnRegistStream);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRegistStream);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00007A30);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000033C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000096DC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_000099D4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000034C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000041C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000004A0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000600);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000AD4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000B80);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00007A30);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegInit);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFinish);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryMemSize);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000500);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegCreate);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegDelete);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegInitAu);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000D54);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000DFC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000F08);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000F70);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000FFC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001264);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000013EC);

void func_00001430(s32 arg0, s32 arg1) {
    func_00000DFC(arg0, 0, arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetailIndex);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetail2);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeGetDecodeSEI);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetail);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000D20);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00000F14);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecode);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeStop);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeFlush);

s32 sceMpegAvcDecodeDetail(void *arg0, void *arg1) {
    return sceMpegAvcDecodeDetailIndex(arg0, 0, arg1);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetail2);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000114C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000014D8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001604);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000016C8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000018E4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001974);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001A18);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001A90);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001AF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcInitYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcQueryYCbCrSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcCsc);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcCopyYCbCr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeStopYCbCr);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000017D0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001BC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001874);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001CFC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001DE4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAtracDecode);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009BFC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009A64);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/mpeg_vsh", D_00009010);
#endif

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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001168);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00001E8C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryStreamOffset);
#endif

#if FW_VERSION < 152
s32 func_00001FC8(s32 *arg0) {
    return (-(func_00006884(*arg0, (s32) &D_00009B98) == 0) & 0x7F9EFE02) - 0x7F9EFE02;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00001FC8(s32 *arg0) {
    return (func_00006884(*arg0, (s32) &D_00009B98) == 0) ? 0 : 0x806101FE;
}
#endif

#if FW_VERSION == 271
s32 func_00001F8C(s32 arg0, s32 *arg1) {
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

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryStreamSize);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002350);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000026B8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000027CC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002970);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000302C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003098);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003220);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003360);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000034F0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003508);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003524);

s32 func_000035FC(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000015FC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000019B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000029AC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00002040_v100);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003A8C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferPut);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003B90);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferAvailableSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_C2F02CDD);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferQueryMemSize);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferQueryPackNum);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferConstruct);

s32 sceMpegRingbufferDestruct(void *arg0) {
    return 0;
}
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003674);
#else
s32 func_00003674(void *arg0) {
    s32 *temp_v1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    void *temp_s2;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0x28);
    temp_s2 = *temp_v1;
    temp_v0 = func_00001FC8(temp_v1);
    if (temp_v0 != 0) {
        var_v0 = temp_v0;
    } else {
        func_000079D8(M2C_FIELD(temp_s2, s32 *, 0x66C));
        temp_s0 = M2C_FIELD(arg0, s32 *, 0xC);
        func_00007A68(M2C_FIELD(temp_s2, s32 *, 0x66C));
        var_v0 = temp_s0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000036DC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003794);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003844);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004D2C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003BAC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003C54);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00003D0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFlushAu);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_5AC68A41);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetPcmAu);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050DC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005444);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004694);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000047A8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_D4DD6E75);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_C345DED2);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAtracAu);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050D8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004BA8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004EF8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004FD8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcAu);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcEsAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcNalAu);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004D2C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00006484(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00005444(arg0, arg1, 3, arg2, arg3);
}
#endif

#if FW_VERSION == 271
void func_000052D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000050DC(arg0, arg1, 5, arg2, arg3);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void sceMpeg_D4DD6E75(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000050DC(arg0, arg1, 5, arg2, arg3);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005D9C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000657C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000057A4);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00004D2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000633C);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000063F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005C08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005D9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000657C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000660C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005698);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005720);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000057A0);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005818);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000050D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000051E4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegMallocAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegFreeAvcEsBuf);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryAtracEsSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_988E9E12);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000059F4);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005A40);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryPcmEsSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_11CAB459);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
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

#if FW_VERSION == 271
s32 func_00005664(s32 arg0) {
    return __builtin_allegrex_ins(func_00009548(arg0 + 1), 0, 0x15, 0xB);
}
#endif

#if FW_VERSION < 271
s32 func_00005664(s32 arg0) {
    return func_00009548(arg0 + 1) & 0x1FFFFF;
}
#endif

#if FW_VERSION < 282
u8 func_0000568C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 3);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_000056C0);
#endif

#if FW_VERSION < 201
s32 func_000056C0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 >= 4) {

    } else {
        var_v0 = func_00009530(arg0 + (arg1 * 2) + 2);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000639C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000639C(void) {
    M2C_VFIELD(&D_00008A10, s32, 0x28) = 1;
    M2C_VFIELD(&D_00008A10, s32, 0) = 0x95;
    M2C_VFIELD(&D_00008A10, s32, 8) = 0xCC;
    M2C_VFIELD(&D_00008A10, s32, 0x10) = -0x32;
    M2C_VFIELD(&D_00008A10, s32, 0x14) = -0x68;
    M2C_VFIELD(&D_00008A10, s32, 0x18) = 0x95;
    M2C_VFIELD(&D_00008A10, s32, 0x1C) = 0x102;
    M2C_VFIELD(&D_00008A10, s32, 0x24) = 0x10;
    M2C_VFIELD(&D_00008A10, s32, 4) = 0;
    M2C_VFIELD(&D_00008A10, s32, 0xC) = 0x95;
    M2C_VFIELD(&D_00008A10, s32, 0x20) = 0;
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005C74);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00005DFC);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_00006030);

INCLUDE_ASM("nonmatchings/mpeg_vsh", func_0000610C);

s32 sceMpegQueryStreamOffset(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00001E8C((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegQueryStreamSize(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00001F8C((s32) arg0, (s32 *) arg1);
    }
    return var_v1;
}

s32 sceMpegInit(void) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_0000034C();
    }
    return var_v1;
}

s32 sceMpegFinish(void) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_0000041C();
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegQueryMemSize);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegCreate);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegDelete);

void *sceMpegRegistStream(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_0000026C((s32) arg0, arg1, arg2);
    }
    return (void *) var_v1;
}

s32 sceMpegUnRegistStream(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_000001B4((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegMallocAvcEsBuf);

s32 sceMpegFreeAvcEsBuf(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00005720((s32) arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegQueryAtracEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_000057A0((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegQueryPcmEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_000059F4((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegInitAu(void *arg0, s32 arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000B80((s32) arg0, arg1, (s32) arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 150
s32 func_0000572C(void) {
    M2C_VFIELD(&D_00007D00, s16, 0x14) = 1;
    M2C_VFIELD(&D_00007D00, s16, 0) = 0x95;
    M2C_VFIELD(&D_00007D00, s16, 4) = 0xCC;
    M2C_VFIELD(&D_00007D00, s16, 8) = 0x3CE;
    M2C_VFIELD(&D_00007D00, s16, 0xA) = 0x398;
    M2C_VFIELD(&D_00007D00, s16, 0xC) = 0x95;
    M2C_VFIELD(&D_00007D00, s16, 0xE) = 0x102;
    M2C_VFIELD(&D_00007D00, s16, 0x12) = 0x10;
    M2C_VFIELD(&D_00007D00, s16, 2) = 0;
    M2C_VFIELD(&D_00007D00, s16, 6) = 0x95;
    M2C_VFIELD(&D_00007D00, s16, 0x10) = 0;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegNextAvcRpAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_B27711A8);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegChangeGetAvcAuMode);
#endif

#if FW_VERSION == 271
s32 sceMpegChangeGetAvcAuMode(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00006030(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegChangeGetAuMode);
#endif

#if FW_VERSION == 271
s32 sceMpegChangeGetAuMode(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_0000610C((s32) arg0, (s32) arg1, arg2);
    }
    return var_v1;
}

s32 sceMpegNextAvcRpAu(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00005C74((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegGetAvcAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00004BA8((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegGetPcmAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00003D0C((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegGetAtracAu(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_000047A8((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegFlushStream(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000000((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegFlushAllStream(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000124((s32) arg0);
    }
    return var_v1;
}

s32 sceMpegAvcDecode(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00000FFC((s32) arg0, (s32) arg1, arg2, (s32) arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeDetail);

s32 sceMpegAvcDecodeMode(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000D54((s32) arg0, (s32) arg1);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeStop(void *arg0, s32 arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00001264((s32) arg0, arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcDecodeFlush);

s32 sceMpegAvcQueryYCbCrSize(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00001604((s32) arg0, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcInitYCbCr);

s32 sceMpegAvcDecodeYCbCr(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00001974((s32) arg0, (s32) arg1, (s32) arg2, (s32) arg3);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeStopYCbCr(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00001A90((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegAvcCsc);

s32 sceMpegAvcCopyYCbCr(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_000018E4((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegAtracDecode(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00001DE4((s32) arg0, (s32) arg1, (s32) arg2, arg3);
    }
    return var_v1;
}

s32 func_00006F5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_0000114C(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_00006FD4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00001A18(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 sceMpegQueryUserdataEsSize(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00007040((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetUserdataAu);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegGetAvcEsAu);

s32 sceMpegRingbufferQueryMemSize(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_000034F0(arg0);
    }
    return var_v1;
}

s32 sceMpegRingbufferQueryPackNum(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00003508(arg0);
    }
    return var_v1;
}

s32 sceMpegRingbufferConstruct(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00003524((s32) arg0, arg1, (s32) arg2, arg3, arg4, (s32) arg5);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferDestruct);

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpegRingbufferPut);

s32 sceMpegRingbufferAvailableSize(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00003220((s32) arg0);
    }
    return var_v1;
}

s32 sceMpeg_11CAB459(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00005A40(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 sceMpeg_C2F02CDD(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00003360(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 sceMpeg_5AC68A41(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00003C54(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 sceMpegFlushAu(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00003BAC(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_B27711A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3E0) {
        var_v1 = func_00005DFC(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh", sceMpeg_D4DD6E75);

s32 sceMpeg_C345DED2(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00004694(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegGetAvcNalAu(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00004FD8((s32) arg0, (s32) arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeDetailIndex(void *arg0, s32 arg1, void *arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000DFC((s32) arg0, arg1, (s32) arg2);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeDetail2(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000F08(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpegAvcDecodeGetDecodeSEI(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00000F70(arg0, arg1);
    }
    return var_v1;
}

s32 sceMpeg_988E9E12(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0x80618008;
    if (func_00007A14() >= 0x3F0) {
        var_v1 = func_00005818(arg0, arg1, arg2);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 152
s32 func_00005CC4(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema(arg2, 0U, arg0, arg1, NULL);
    var_v1 = 0;
    *arg3 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = 0x80000041;
    }
    return var_v1;
}
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
s32 func_00005D1C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelDeleteSema(arg0) != 0) {
        var_v1 = 0x80000041;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00005D1C(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION < 152
s32 func_000079D8(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelWaitSema(arg0, 1, NULL) != 0) {
        var_v1 = 0x80000041;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_000079D8(s32 arg0) {
    return (sceKernelWaitSema(arg0, 1, NULL) == 0) ? 0 : 0x80000041;
}
#endif

#if FW_VERSION >= 282
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
