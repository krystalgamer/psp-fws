#include "common.h"
#include "mpegbase_decls.h"

#if FW_VERSION == 100
s32 sceMpegbase_driver_27A2982F(void) {
    func_000014C0();
    func_00000C04();
    func_00001B98();
    sceMeWrapper_driver_3D5F109C(0x183);
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

#if FW_VERSION != 100
s32 sceMpegbase_driver_27A2982F(void) {
    func_000014C0();
    func_00000C04();
    func_00001B98();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00001BD4();
    func_00001500();
    func_00000C54();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_AC9E717E);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_492B5E4B);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_91929A21);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_CE8EB837);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_304882E1);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C04);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C54);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C7C);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000CA4);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000CC8);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_0530BE4E);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", func_00000D78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", func_00000DA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", func_00000E68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", func_00001020);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", func_00001130);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BEA18F91);

INCLUDE_ASM("nonmatchings/mpegbase", func_000014C0);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001500);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001528);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001550);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001574);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_7AC0321A);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BE45C284);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", func_00001B98);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001BD4);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001BFC);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C24);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C48);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001C6C);
