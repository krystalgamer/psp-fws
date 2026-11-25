/* cflags: -Os */
#include "common.h"
#include "codec_decls.h"

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/codec", func_00000000);

INCLUDE_ASM("nonmatchings/codec", func_0000004C);
#endif

#if FW_VERSION == 271
void func_00000094(s32 arg0) {
    if (sceSysreg_driver_E2A5D1EE() > 0x4FFFFF) {
        func_0000004C(0x31, 0x37);
        return;
    }
    sceGpio_driver_103C3EB2(2);
}

void func_000000E0(void) {
    if (sceSysreg_driver_E2A5D1EE() > 0x4FFFFF) {
        func_0000004C(0x31, 0xF7);
        return;
    }
    sceGpio_driver_310F0CCF(2);
}

INCLUDE_ASM("nonmatchings/codec", func_0000012C);

INCLUDE_ASM("nonmatchings/codec", func_00000188);

INCLUDE_ASM("nonmatchings/codec", func_00000924);
#endif

#if FW_VERSION == 282
void func_00000094(s32 arg0) {
    if (arg0 != (sceSysreg_driver_E2A5D1EE() > 0x4FFFFF)) {
        sceGpio_driver_103C3EB2(0x20);
        return;
    }
    sceGpio_driver_310F0CCF(0x20);
}

void func_000000E4(void) {
    if (sceSysreg_driver_E2A5D1EE() > 0x4FFFFF) {
        func_0000004C(0x31, 0x37);
        return;
    }
    sceGpio_driver_103C3EB2(2);
}

void func_00000130(void) {
    if (sceSysreg_driver_E2A5D1EE() > 0x4FFFFF) {
        func_0000004C(0x31, 0xF7);
        return;
    }
    sceGpio_driver_310F0CCF(2);
}

s32 func_0000017C(void) {
    sceGpio_driver_317D9D2C(5, 0);
    func_00000094(0);
    if (sceSysreg_driver_E2A5D1EE() <= 0x4FFFFF) {
        sceGpio_driver_317D9D2C(1, 0);
        func_000000E4();
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/codec", func_000001D8);

INCLUDE_ASM("nonmatchings/codec", func_000002A8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_856E7487);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_261C6EE8);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_6D945509);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_40D5C897);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_EEB91526);

void sceCodec_driver_359C2B9F(void) {
    func_000002A8(-1, -1, 0, 0);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_DFBCACF3);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_C513C747);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 271) || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_3064C53D);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_56494D70);
#endif

#if FW_VERSION == 282
void sceCodec_driver_31B2E41E(void) {
    func_000002A8(0, 0, -1, 0);
}

INCLUDE_ASM("nonmatchings/codec", func_00000B68);

s32 sceCodec_driver_28A49CCA(void) {
    s32 var_v0;

    var_v0 = 1;
    if (sceSysreg_driver_E2A5D1EE() <= 0x4FFFFF) {
        var_v0 = sceSysreg_driver_DE170397();
    }
    return var_v0;
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_BD8E0977);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_856E7487);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_261C6EE8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_6D945509);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_40D5C897);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_EEB91526);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_359C2B9F);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceCodec_driver_359C2B9F(void) {
    func_00000924(-1, -1, 0, 0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_DFBCACF3);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_C513C747);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_3064C53D);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_31B2E41E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceCodec_driver_31B2E41E(void) {
    func_00000924(0, 0, -1, 0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/codec", func_00000B28);

INCLUDE_ASM("nonmatchings/codec", func_00000BDC);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_BD8E0977);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_4515AE04);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_20C61103);
#endif

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_02133959);

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

#if FW_VERSION < 271
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
INCLUDE_ASM("nonmatchings/codec", func_00000E60);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/codec", D_00001160);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/codec", D_000011B8);

INCLUDE_RODATA("nonmatchings/codec", D_000011C8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/codec", D_00001010);
#endif

INCLUDE_RODATA("nonmatchings/codec", D_0000108C);
