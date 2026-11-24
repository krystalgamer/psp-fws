/* cflags: -Os */
#include "common.h"
#include "codec_decls.h"

INCLUDE_ASM("nonmatchings/codec", func_00000000);

INCLUDE_ASM("nonmatchings/codec", func_0000004C);

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

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_856E7487);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_261C6EE8);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_6D945509);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_40D5C897);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_EEB91526);

void sceCodec_driver_359C2B9F(void) {
    func_000002A8(-1, -1, 0, 0);
}

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_DFBCACF3);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_C513C747);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_3064C53D);

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

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_BD8E0977);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_20C61103);

INCLUDE_ASM("nonmatchings/codec", sceCodec_driver_02133959);

INCLUDE_RODATA("nonmatchings/codec", D_00001010);

INCLUDE_RODATA("nonmatchings/codec", D_0000108C);
