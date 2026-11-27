/* cflags: -Os */
#include "common.h"
#include "camera_plugin_decls.h"

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_00000294);
#endif

#if FW_VERSION < 350
void func_00000294(void) {
    s32 temp_v0;
    void *temp_v0_2;

    sceVshCommonUtil_622815DD(&D_000236A4, func_000004F8);
    func_0000E048(0);
    temp_v0 = _ZN3paf4View4FindEPKc(&D_00021640);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00165490 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}
#endif

#if FW_VERSION == 352
void func_00000294(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    sceVshCommonUtil_951BC384(&D_00024C5C, func_000004F8);
    func_0000E048(0);
    temp_v0 = scePaf_88784487(&D_00021640);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != 0) {
            D_001669CC = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}
#endif

void func_00000300(void) {
    func_0000BEAC();
}

INCLUDE_RODATA("nonmatchings/camera_plugin_000294", D_00021640);

INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_0000031C);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_000004F8);
#endif

#if FW_VERSION < 350
s32 func_000004F8(void) {
    sceVshCommonUtil_9E42444E(&D_000236A4, 1, 0);
    func_0000C718();
    func_00002428();
    sceVshCommonUtil_0587F20C(&D_000236A4, 1, 0);
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_000004F8(void) {
    sceVshCommonUtil_DA88D006(&D_00024C5C, 1, 0);
    func_0000C718();
    func_00002428();
    sceVshCommonUtil_F6567B66(&D_00024C5C, 1, 0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_00000550);

INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_00000578);

void func_000005F4(void) {
    func_00000578(1, 0xFFFF);
}

void func_00000614(void) {
    func_00000578(0, 0xFFFF);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_00000890);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_000006C8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/camera_plugin_000294", func_00000900);
#endif
