#include "common.h"
#include "k1.h"
#include "me_wrapper_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_B655AD4E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_06F0236A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_176BBE07);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_DE2E7E89);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_E67F4E0A);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_1C6A60E1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_C00D873B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_B655AD4E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_06F0236A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_176BBE07);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_DE2E7E89);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_E67F4E0A);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_1C6A60E1);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_C00D873B);
#endif

INCLUDE_RODATA("nonmatchings/me_wrapper", D_00001F8C);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeVideo_driver_1C6A60E1);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_C00D873B);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_FEE0A97D);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_3D6CC0D9);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_BAC7C2BE);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeAudio_driver_39F06790);

void sceMeMemory_driver_A177798D(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x180, arg0);
}

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeMemory_driver_C86500E3);

void sceMeMemory_driver_5AD660FA(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x181, arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000CF0);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D1C);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_FEE0A97D);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_BAC7C2BE);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_39F06790);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_A177798D);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_C86500E3);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_5AD660FA);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D14);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D28);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D58);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000EFC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000D84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_4794C05C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/me_wrapper", sceMePower_driver_05B2C420);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePower_driver_B6FE3E62);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePower_driver_55F11AF6);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMePower_driver_8EBBBBA3);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", sceMePower_driver_579ACEA9);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceMePower_driver_579ACEA9(s32 arg0) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    sceMeCore_driver_3D5F109C(8, arg0);
    setK1(temp_s0);
}
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001070);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_0000129C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000010B0);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001120);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_D1EA3DFD);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_04AFF68E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_B97B15D7);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_00000EE4);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_D1EA3DFD);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_04AFF68E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_B97B15D7);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001200);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001114);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001174);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_04AFF68E);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_B97B15D7);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000012A4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000012D4);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_3D5F109C);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_D1EA3DFD);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000014E4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001588);
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001624);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002A64);
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_63463F66);

INCLUDE_ASM("nonmatchings/me_wrapper", sceMeWrapper_driver_C3A1D6B2);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018B4_v250);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_000019C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000015B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/me_wrapper", func_000012D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001368);

INCLUDE_ASM("nonmatchings/me_wrapper", func_0000145C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000016D4);

INCLUDE_ASM("nonmatchings/me_wrapper", func_000017B0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/me_wrapper", func_000018B4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001A44);
#endif

INCLUDE_ASM("nonmatchings/me_wrapper", func_00001918);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001B58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001C90);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", func_00001B84);
#endif

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/me_wrapper", D_00002048);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_47DB48C2);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/me_wrapper", func_0000210C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/me_wrapper", sceMeCore_driver_4794C05C);
#endif

#if FW_VERSION >= 271
void sceMeCore_driver_4794C05C(s32 arg0) {
    sceMeCore_driver_3D5F109C(0x185, arg0);
}
#endif
