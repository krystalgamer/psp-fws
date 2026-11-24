/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ge_decls.h"

INCLUDE_ASM("nonmatchings/ge", func_00000000);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005C9C);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_71FCD1D6);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_B415364D);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_51C8BB60);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeGetCmd);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_51D44C58);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeGetMtx);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_5A0103E6);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeSaveContext);

INCLUDE_ASM("nonmatchings/ge", sceGeRestoreContext);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_00000AC0);
#endif

#if FW_VERSION != 100
void func_00001790(s32 arg0) {
    func_000017E0(2, 0, arg0, 0);
}
#endif

#if FW_VERSION != 100
void func_000017B8(s32 arg0) {
    func_000017E0(4, 0, 0, arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_000017E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005CD4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005CDC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005D18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005D38);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/ge", D_00005DB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00001A38);
#endif

INCLUDE_ASM("nonmatchings/ge", func_00001BA4);

#if FW_VERSION == 100
s32 module_start(void) {
    sceGe_driver_71FCD1D6();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    sceGe_driver_71FCD1D6();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/ge", module_reboot_before);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_9F2C2948);

#if FW_VERSION == 100
s32 sceGe_driver_9DA4A75F(s32 arg0) {
    s32 temp_a3;

    temp_a3 = *(s32 *)0xBD400200;
    *(s32 *)0xBD400200 = arg0 & 1;
    return temp_a3 & 1;
}
#endif

#if FW_VERSION != 100
s32 sceGe_driver_BAD6E1CA(s32 arg0) {
    D_00006240 = arg0;
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceGe_driver_9DA4A75F(s32 arg0) {
    s32 temp_a3;

    temp_a3 = *(s32 *)0xBD400200;
    *(s32 *)0xBD400200 = arg0 & 1;
    return temp_a3 & 1;
}
#endif

#if FW_VERSION != 100
void func_00001E9C(s32 arg0) {
    func_000017E0(1, arg0, 0, 0);
}
#endif

#if FW_VERSION != 100
void func_00001EC4(s32 arg0, s32 arg1, s32 arg2) {
    func_000017E0(7, arg0, arg1, arg2);
}
#endif

#if FW_VERSION != 100
s32 func_00001EF0(void) {
    s32 temp_a1;

    temp_a1 = __builtin_allegrex_ins(0x40000000, SysMemForKernel_EF2EE8C1(), 0, 0x1D);
    M2C_FIELD(temp_a1, s32 *, 4) = 0x0C000000;
    D_00007FC0 = temp_a1;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x0F000000;
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00001F34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00002110);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_8F185DF7);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_114E1745);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_5BAA5439);
#endif

#if FW_VERSION != 100
void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeEdramSetAddrTranslation);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_0000102C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_000010CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_8F185DF7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", sceGeEdramGetSize);
#endif

#if FW_VERSION == 100
void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_00001220);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_000012B0);
#endif

#if FW_VERSION == 100
void func_00001350(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_00001358);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_0000254C);
#endif

#if FW_VERSION != 100
u32 sceGeEdramGetSize(void) {
    return D_00006A84;
}
#endif

#if FW_VERSION != 100
s32 sceGe_driver_C576E897(void) {
    return D_00006A80;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_000025F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_000028BC);
#endif

INCLUDE_RODATA("nonmatchings/ge", D_00005E34);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/ge", D_00002A34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/ge", D_00002A84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_000015B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_000029A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00002E78);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeListDeQueue);

INCLUDE_ASM("nonmatchings/ge", sceGeListUpdateStallAddr);

INCLUDE_ASM("nonmatchings/ge", sceGeListSync);

INCLUDE_ASM("nonmatchings/ge", sceGeDrawSync);

INCLUDE_ASM("nonmatchings/ge", sceGeBreak);

INCLUDE_ASM("nonmatchings/ge", sceGeContinue);

INCLUDE_ASM("nonmatchings/ge", sceGeSetCallback);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_00002104);
#endif

#if FW_VERSION == 100
s32 func_00004C44(void) {
    sceKernelDeleteEventFlag(D_00003B8C);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_000021C4);
#endif

#if FW_VERSION == 100
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_000022E0((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}
#endif

#if FW_VERSION == 100
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_000022E0((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_AEC21518);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_7B481502);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_9ACFF59D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_driver_67B01D8E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", sceGe_user_E66CB92E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_000046EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_0000479C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00004B58);
#endif

#if FW_VERSION != 100
s32 func_00004C44(void) {
    sceKernelDeleteEventFlag(D_00007AC0.unk18);
    sceKernelDeleteEventFlag(D_00007AC0.unk1C);
    sceKernelDeleteEventFlag(D_00007AC0.unk20);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00004C88(void) {
    return (D_00007AC8 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION != 100
void func_00004C9C(void) {
}
#endif

#if FW_VERSION != 100
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}
#endif

#if FW_VERSION != 100
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeUnsetCallback);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ge", func_000022E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00004DAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00004DFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00004F4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_0000505C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00005140);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/ge", func_00005654);
#endif
