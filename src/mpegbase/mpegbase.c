/* cflags[152]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "mpegbase_decls.h"

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/mpegbase", D_0000195C);
#endif

#if FW_VERSION >= 250
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

#if FW_VERSION >= 250
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

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_AC9E717E);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_492B5E4B);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_91929A21);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_CE8EB837);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_304882E1);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpegbase", func_00000C04);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000C54);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000C7C);
#endif

#if FW_VERSION < 201
void func_00000C7C(void) {
    sceKernelWaitSema(D_000020A0, 1, NULL);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000CA4);
#endif

#if FW_VERSION < 201
void func_00000CA4(void) {
    sceKernelSignalSema(D_000020A0, 1);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000CC8);
#endif

#if FW_VERSION < 201
void func_00000CC8(void) {
    sceKernelPollSema(D_000020A0, 1);
}
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_0530BE4E);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_AC9E717E);

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_492B5E4B);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000B1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00000D48);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000D74);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000E34);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000FEC);

INCLUDE_ASM("nonmatchings/mpegbase", func_000010FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/mpegbase", func_00000D78);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000DA8);

INCLUDE_ASM("nonmatchings/mpegbase", func_00000E68);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001020);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpegbase", func_00000CA0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001130);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpegbase", func_00000EA4);
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BEA18F91);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpegbase", func_000014C0);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001500);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001528);
#endif

#if FW_VERSION < 201
void func_00001528(void) {
    sceKernelWaitSema(D_00002710, 1, NULL);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001550);
#endif

#if FW_VERSION < 201
void func_00001550(void) {
    sceKernelSignalSema(D_00002710, 1);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001574);
#endif

#if FW_VERSION < 201
void func_00001574(void) {
    sceKernelPollSema(D_00002710, 1);
}
#endif

INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_7AC0321A);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/mpegbase", sceMpegbase_driver_BE45C284);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/mpegbase", func_000017B8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpegbase", func_00001660);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpegbase", func_0000184C);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B58);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B70);

INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B80);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/mpegbase", D_00001B9C);
#else
INCLUDE_ASM("nonmatchings/mpegbase", func_00001B98);

INCLUDE_ASM("nonmatchings/mpegbase", func_00001BD4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001BFC);
#endif

#if FW_VERSION < 201
void func_00001BFC(void) {
    sceKernelWaitSema(D_00002740, 1, NULL);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001C24);
#endif

#if FW_VERSION < 201
void func_00001C24(void) {
    sceKernelSignalSema(D_00002740, 1);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/mpegbase", func_00001C48);
#endif

#if FW_VERSION < 201
void func_00001C48(void) {
    sceKernelPollSema(D_00002740, 1);
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpegbase", func_00001C6C);
#endif
