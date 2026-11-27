/* lang: c++ */
#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin", module_start);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", module_stop);
#else
s32 module_stop(void) {
    func_0005FF5C();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000019C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000001DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000234);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000268);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000002A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000380);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000043C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000480);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000004B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000004F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000005A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000680);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000006C4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000718);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000007F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000007FC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000890);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000098C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000009D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000AD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000BAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000BF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000C38);

#if FW_VERSION < 201
s32 func_00000CF4(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_00065E04 != NULL) {
        var_v0 = D_00065E04->unk2C;
    }
    return var_v0;
}
#else
s32 func_00000E24(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_00065E04 != NULL) {
        var_v0 = D_00065E04->unk2C;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000E40);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000E84);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000EC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000F10);

#if FW_VERSION < 201
void func_00000E5C(void) {
    func_00000FA8();
}
#else
void func_00000F8C(void) {
    func_00000FA8();
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061270);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061288);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000612A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000612B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000612D0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000612E8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061300);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006131C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006133C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061358);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061370);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006138C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000613AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000613C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000613E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061400);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061420);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061438);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006144C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061460);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061470);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061484);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006149C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000614B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000614D0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000614EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006150C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061520);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061538);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006154C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061560);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061578);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061590);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000615A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000615B0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000615CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000615DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_000615EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_00061608);

INCLUDE_RODATA("nonmatchings/msvideo_plugin", D_0006161C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00000FA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000106C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000010C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001108);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001150);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001198);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000011CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001200);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000012DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001328);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001370);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000013B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001400);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001444);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000148C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_000014C0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000193C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001980);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001948);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000198C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001A2C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_0000185C);
#else
void func_00001A70(void) {
    if (D_00065DE0 == 0) {

    } else {
        func_00003EFC(D_00065DE0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001AA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001AE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001B2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001C08);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001C30);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001A44);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001AD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001DB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001B80);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001C58);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001D14);

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001E3C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin", func_00001ED0);
