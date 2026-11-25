#include "common.h"
#include "mpegbase_decls.h"

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_27A2982F);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceMpegbase_driver_27A2982F(void) {
    func_000014C0();
    func_00000C04();
    func_00001B98();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceMpegbase_driver_27A2982F(void) {
    func_000014C0();
    func_00000C04();
    func_00001B98();
    sceMeWrapper_driver_3D5F109C(0x183);
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpegbase", module_stop);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 module_stop(void) {
    func_00001BD4();
    func_00001500();
    func_00000C54();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00001BD4();
    func_00001500();
    func_00000C54();
    sceMeWrapper_driver_3D5F109C(0x184);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_AC9E717E);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_492B5E4B);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_91929A21);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_CE8EB837);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_304882E1);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpegbase", func_00000C04);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C54);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C7C);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000CA4);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000CC8);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_0530BE4E);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000D48);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000D74);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000E34);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000FEC);

INCLUDE_ASM("nonmatchings/mpegbase", func_000010FC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000D78);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000DA8);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000E68);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001020);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001130);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BEA18F91);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpegbase", func_000014C0);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001500);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001528);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001550);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001574);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_7AC0321A);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BE45C284);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpegbase", func_000017B8);

INCLUDE_ASM("nonmatchings/mpegbase", func_0000184C);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B58);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B70);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B80);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B9C);
#else
INCLUDE_ASM("nonmatchings/mpegbase", func_00001B98);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001BD4);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001BFC);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C24);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C48);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C6C);
#endif
