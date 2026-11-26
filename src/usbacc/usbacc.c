#include "common.h"

INCLUDE_ASM("nonmatchings/usbacc", sceUsbAccGetAuthStat);

INCLUDE_ASM("nonmatchings/usbacc", sceUsbAccGetInfo);

INCLUDE_ASM("nonmatchings/usbacc", sceUsbAcc_internal_2A100C1F);

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/usbacc", D_00000B2C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000B30);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000B48);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000B5C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000B7C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000B94);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000BA4);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000BC4);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000BD8);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C00);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C0C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C1C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C30);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C40);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C48);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C4C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000C58);
#endif

INCLUDE_RODATA("nonmatchings/usbacc", D_00000CEC);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D04);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D18);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D30);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D3C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D6C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000D8C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000DA0);

INCLUDE_ASM("nonmatchings/usbacc", func_000001E8);

INCLUDE_ASM("nonmatchings/usbacc", func_00000374);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000E34);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000E58);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usbacc", func_0000050C);

INCLUDE_RODATA("nonmatchings/usbacc", D_00000EB0);
#endif

INCLUDE_ASM("nonmatchings/usbacc", sceUsbAcc_internal_2E251404);

INCLUDE_ASM("nonmatchings/usbacc", sceUsbAcc_internal_18B04C82);

INCLUDE_ASM("nonmatchings/usbacc", module_start);

INCLUDE_ASM("nonmatchings/usbacc", module_stop);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usbacc", func_00000664);
#endif

INCLUDE_ASM("nonmatchings/usbacc", func_00000728);

INCLUDE_ASM("nonmatchings/usbacc", func_00000780);

INCLUDE_ASM("nonmatchings/usbacc", func_000007A0);

INCLUDE_ASM("nonmatchings/usbacc", func_000007E4);
