#include "common.h"
#include "camera_plugin_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/camera_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/camera_plugin", module_start);

s32 module_stop(void) {
    func_0002014C();
    return 0;
}

INCLUDE_ASM("nonmatchings/camera_plugin", func_0000015C);

#if FW_VERSION == 311
void func_00000180_v311(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION == 310
void func_00000180_v310(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION == 303
void func_00000180_v303(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION == 302
void func_00000180_v302(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION == 301
void func_00000180_v301(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION == 300
void func_00000180_v300(void) {
    if ((sceUsbStart(&D_000201FC, 0U, NULL) >= 0) && (sceUsbStart(&D_0002020C, 0U, NULL) >= 0) && (sceUsbStart(&D_00020220, 0U, NULL) >= 0)) {
        sceUsbStart(&D_00020230, 0U, NULL);
    }
}
#endif

#if FW_VERSION < 352
void func_000001FC(void) {
    if ((sceUsbStop(&D_00020230, 0U, NULL) >= 0) && (sceUsbStop(&D_00020220, 0U, NULL) >= 0) && (sceUsbStop(&D_0002020C, 0U, NULL) >= 0)) {
        sceUsbStop(&D_000201FC, 0U, NULL);
    }
}
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/camera_plugin", func_00000278);

INCLUDE_ASM("nonmatchings/camera_plugin", func_000002CC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020B5C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020B60);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020B68);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020B7C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020B94);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020BA0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020BB8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020BD0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020BE8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020BFC);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C0C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C18);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C24);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C34);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C44);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C50);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C60);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020C80);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020CB0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020D18);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020D1C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020D24);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020D38);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FB0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FB4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FB8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FC4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FDC);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020FE0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021038);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021070);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021094);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000210B4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000210C4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_0002117C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021320);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021328);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_0002134C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021350);
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021388);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000213A0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000213BC);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000213D4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000213E8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021400);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021418);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021430);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021448);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021464);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_0002147C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021498);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000214B8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000214C8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000214E0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000214F4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021510);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021528);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021540);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021558);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021574);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00021590);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000215AC);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000215C0);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000215D8);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_000215F4);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_0002160C);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/camera_plugin", D_000201FC);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_0002020C);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020220);

INCLUDE_RODATA("nonmatchings/camera_plugin", D_00020230);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin", func_00000180);

#if FW_VERSION >= 310 && FW_VERSION < 352
void func_000001D8(void) {
    func_000019F0();
    func_000001FC();
}
#endif

#if FW_VERSION < 310
void func_000001D8(void) {
    func_000019F0();
    func_000002CC();
    func_000001FC();
}
#endif

#if FW_VERSION == 352
void func_000001D8(void) {
    func_000062A8(func_0000CA94());
    func_0000CAD8();
}
#else
INCLUDE_ASM("nonmatchings/camera_plugin", func_000003B4);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin", func_00000204);
#endif
