/* cflags[100]: -O2 -frename-registers */
/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags: -Os */
#include "common.h"
#include "codec_decls.h"

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/codec", func_00000000);

INCLUDE_ASM("nonmatchings/codec", func_0000004C);
#endif

#if FW_VERSION == 271
void func_00000094(s32 arg0) {
    if (sceSysregGetTachyonVersion() > 0x4FFFFF) {
        func_0000004C(0x31, 0x37);
        return;
    }
    sceGpioPortClear(2);
}

void func_000000E0(void) {
    if (sceSysregGetTachyonVersion() > 0x4FFFFF) {
        func_0000004C(0x31, 0xF7);
        return;
    }
    sceGpioPortSet(2);
}

INCLUDE_ASM("nonmatchings/codec", func_0000012C);

INCLUDE_ASM("nonmatchings/codec", func_00000188);

INCLUDE_ASM("nonmatchings/codec", func_00000924);
#endif

#if FW_VERSION >= 282
void func_00000094(s32 arg0) {
    if (arg0 != (sceSysregGetTachyonVersion() > 0x4FFFFF)) {
        sceGpioPortClear(0x20);
        return;
    }
    sceGpioPortSet(0x20);
}
#endif

#if FW_VERSION >= 350
void func_000000E4(void) {
    if (sceSysregGetTachyonVersion() > 0x4FFFFF) {
        func_0000004C(0x31, 0);
        return;
    }
    sceGpioPortClear(2);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000000E4(void) {
    if (sceSysregGetTachyonVersion() > 0x4FFFFF) {
        func_0000004C(0x31, 0x37);
        return;
    }
    sceGpioPortClear(2);
}
#endif

#if FW_VERSION >= 282
void func_00000130(void) {
    if (sceSysregGetTachyonVersion() > 0x4FFFFF) {
        func_0000004C(0x31, 0xF7);
        return;
    }
    sceGpioPortSet(2);
}

s32 func_0000017C(void) {
    sceGpioSetPortMode(5, 0);
    func_00000094(0);
    if (sceSysregGetTachyonVersion() <= 0x4FFFFF) {
        sceGpioSetPortMode(1, 0);
        func_000000E4();
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/codec", func_000001D8);

INCLUDE_ASM("nonmatchings/codec", func_000002A8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/codec", sceCodecOutputEnable);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/codec", sceCodecSetOutputVolume);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodecSetHeadphoneVolume);

INCLUDE_ASM("nonmatchings/codec", sceCodecSetSpeakerVolume);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/codec", sceCodecSetVolumeOffset);

void sceCodecOutputDisable(void) {
    func_000002A8(-1, -1, 0, 0);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodecSetFrequency);

INCLUDE_ASM("nonmatchings/codec", sceCodecInputEnable);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 271) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_3064C53D);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_56494D70);
#endif

#if FW_VERSION >= 282
void sceCodecInputDisable(void) {
    func_000002A8(0, 0, -1, 0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/codec", func_00000C24);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/codec", func_00000B68);
#endif

#if FW_VERSION >= 282
s32 sceCodecAudioClkoutClkDisable(void) {
    s32 var_v0;

    var_v0 = 1;
    if (sceSysregGetTachyonVersion() <= 0x4FFFFF) {
        var_v0 = sceSysregAudioClkoutClkDisable();
    }
    return var_v0;
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodecInitEntry);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodecOutputEnable);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceCodecOutputEnable(s32 arg0, s32 arg1) {
    func_00000924((arg0 * 2) - 1, (arg1 * 2) - 1, 0, 1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodecSetOutputVolume);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", sceCodecSetHeadphoneVolume);

INCLUDE_ASM("nonmatchings/codec", sceCodecSetSpeakerVolume);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodecSetVolumeOffset);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/codec", sceCodecOutputDisable);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceCodecOutputDisable(void) {
    func_00000924(-1, -1, 0, 0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", sceCodecSetFrequency);

INCLUDE_ASM("nonmatchings/codec", sceCodecInputEnable);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_3064C53D);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/codec", sceCodecInputDisable);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceCodecInputDisable(void) {
    func_00000924(0, 0, -1, 0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", func_00000B28);

INCLUDE_ASM("nonmatchings/codec", func_00000BDC);

INCLUDE_ASM("nonmatchings/codec", sceCodecInitEntry);
#endif

#if FW_VERSION < 201
s32 sceCodec_driver_4515AE04(u32 arg0) {
    if (arg0 >= 5) {
        return 0x80000102;
    }
    return sceCodec_driver_56494D70(1, 0, D_00001230[arg0]);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_4515AE04);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/codec", sceCodecSelectVolumeTable);
#endif

INCLUDE_ASM("nonmatchings/codec", sceCodecStopEntry);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/codec", D_000010F8);

INCLUDE_RODATA("nonmatchings/codec", D_000010FC);

INCLUDE_RODATA("nonmatchings/codec", D_00001114);

INCLUDE_RODATA("nonmatchings/codec", D_00001130);

INCLUDE_RODATA("nonmatchings/codec", D_00001144);

INCLUDE_RODATA("nonmatchings/codec", D_0000115C);

INCLUDE_RODATA("nonmatchings/codec", D_0000116C);

INCLUDE_RODATA("nonmatchings/codec", D_0000118C);

INCLUDE_RODATA("nonmatchings/codec", D_0000119C);

INCLUDE_RODATA("nonmatchings/codec", D_0000120C);

INCLUDE_RODATA("nonmatchings/codec", D_00001220);

INCLUDE_RODATA("nonmatchings/codec", D_0000122C);

INCLUDE_RODATA("nonmatchings/codec", D_00001230);

INCLUDE_RODATA("nonmatchings/codec", D_00001238);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", func_00000B70);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", func_00000924);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", func_00000EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/codec", func_00000C50);
#endif

#if FW_VERSION < 201
s32 func_00000CF8(void) {
    KDebugUnkIf *p = sceKernelSm1ReferOperations();
    s32 type;

    if (p == NULL) {
        return 0;
    }
    if (p->unk10() != 0x534D) {
        return 0;
    }
    type = p->unk18();
    return type >= 3 && type < 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", func_00000CF8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/codec", func_00000FA0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/codec", func_00000D5C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/codec", D_00001320);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/codec", D_00001230);
#endif

#if FW_VERSION == 100
s32 func_00000E60(void) {
    if (D_00001280[0x5D] == 0) {
        D_00001280[0x5D] = 1;
        if (D_00001280[0x5C] != 0) {
            if (sceCodecSetHeadphoneVolume(-D_000011F0[0]) >= 0
                && sceCodecSetSpeakerVolume(-D_000011F0[0x1F]) >= 0) {
                D_00001280[0x5C] = 0;
            }
        }
        sceKernelDelayThread(1000);
        sceGpioPortSet(0x20);
        sceGpioPortClear(2);
        func_00000924(-1, -1, -1, -1);
    }
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/codec", D_00001160);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/codec", D_000011B8);

INCLUDE_RODATA("nonmatchings/codec", D_000011C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/codec", D_00001010);
#endif

INCLUDE_RODATA("nonmatchings/codec", D_0000108C);
