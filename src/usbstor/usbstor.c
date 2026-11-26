#include "common.h"
#include "usbstor_decls.h"

INCLUDE_ASM("nonmatchings/usbstor", func_00000000);

INCLUDE_ASM("nonmatchings/usbstor", func_00000134);

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/usbstor", D_000024A4);

INCLUDE_RODATA("nonmatchings/usbstor", D_000024A8);

INCLUDE_RODATA("nonmatchings/usbstor", D_000024C8);

INCLUDE_RODATA("nonmatchings/usbstor", D_000024E0);

INCLUDE_RODATA("nonmatchings/usbstor", D_000024F8);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000250C);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002520);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002538);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000254C);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000256C);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002578);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002580);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002594);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000259C);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025B0);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025E8);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025F0);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025F4);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025FC);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000262C);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002634);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000263C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/usbstor", D_00002560);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002574);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000258C);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002598);

INCLUDE_RODATA("nonmatchings/usbstor", D_000025C8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_DC1A5833);

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_FC4D0080);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/usbstor", D_00002650);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002664);

INCLUDE_RODATA("nonmatchings/usbstor", D_0000267C);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002688);

INCLUDE_RODATA("nonmatchings/usbstor", D_000026B8);
#endif

INCLUDE_RODATA("nonmatchings/usbstor", D_000026E8);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_DC1A5833);
#else
INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_489E6BF1);
#endif

INCLUDE_RODATA("nonmatchings/usbstor", D_00002724);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_FC4D0080);

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_489E6BF1);
#else
INCLUDE_RODATA("nonmatchings/usbstor", D_000024C4);

INCLUDE_RODATA("nonmatchings/usbstor", D_000024E0);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002510);
#endif

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_2CAFEFF1);

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_50F99EAD);

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_driver_60066CFE);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usbstor", func_000008FC);

INCLUDE_ASM("nonmatchings/usbstor", func_00000950);

INCLUDE_ASM("nonmatchings/usbstor", func_00000FEC);

INCLUDE_ASM("nonmatchings/usbstor", func_000010CC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/usbstor", func_000008BC);

INCLUDE_ASM("nonmatchings/usbstor", func_00000EB8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usbstor", func_000008E4);

INCLUDE_ASM("nonmatchings/usbstor", func_00000EDC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usbstor", func_00000FE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usbstor", func_00000904);

INCLUDE_ASM("nonmatchings/usbstor", func_00000958);

INCLUDE_ASM("nonmatchings/usbstor", func_00001004);

INCLUDE_ASM("nonmatchings/usbstor", func_000010E4);
#endif

INCLUDE_RODATA("nonmatchings/usbstor", D_00002868);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002890);

INCLUDE_RODATA("nonmatchings/usbstor", D_000028B0);

INCLUDE_RODATA("nonmatchings/usbstor", D_000028E0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/usbstor", D_000027E4_v271);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/usbstor", D_00002904);
#endif

INCLUDE_RODATA("nonmatchings/usbstor", D_00002928);

INCLUDE_RODATA("nonmatchings/usbstor", D_00002948);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/usbstor", D_000027E4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/usbstor", D_0000296C);
#endif

INCLUDE_RODATA("nonmatchings/usbstor", D_00002990);

INCLUDE_ASM("nonmatchings/usbstor", func_00001614);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_EC57ED1D);

INCLUDE_ASM("nonmatchings/usbstor", sceUsbstor_internal_F03FCB48);
#endif

INCLUDE_ASM("nonmatchings/usbstor", module_start);

INCLUDE_ASM("nonmatchings/usbstor", module_stop);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usbstor", func_00001758);
#endif

INCLUDE_ASM("nonmatchings/usbstor", func_00001908);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usbstor", func_00001A0C);
#endif

INCLUDE_ASM("nonmatchings/usbstor", func_00001B0C);

INCLUDE_ASM("nonmatchings/usbstor", func_00001BB0);

#if FW_VERSION < 282
void func_00001A40(void) {

}
#else
void func_00001BE4(void) {
}
#endif

INCLUDE_ASM("nonmatchings/usbstor", func_00001BEC);

INCLUDE_ASM("nonmatchings/usbstor", func_00001C50);

INCLUDE_ASM("nonmatchings/usbstor", func_00001CB4);

INCLUDE_ASM("nonmatchings/usbstor", func_00001D18);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usbstor", func_00001BD8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usbstor", func_00001EFC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/usbstor", func_00001E4C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usbstor", func_00001E5C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usbstor", func_00001D7C);

INCLUDE_ASM("nonmatchings/usbstor", func_00001FDC);
#endif

INCLUDE_ASM("nonmatchings/usbstor", func_00002208);
