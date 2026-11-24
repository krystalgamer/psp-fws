/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ge_decls.h"

INCLUDE_ASM("nonmatchings/ge", func_00000000);

INCLUDE_RODATA("nonmatchings/ge", D_00005C9C);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_71FCD1D6);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_B415364D);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_51C8BB60);

INCLUDE_ASM("nonmatchings/ge", sceGeGetCmd);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_51D44C58);

INCLUDE_ASM("nonmatchings/ge", sceGeGetMtx);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_5A0103E6);

INCLUDE_ASM("nonmatchings/ge", sceGeSaveContext);

INCLUDE_ASM("nonmatchings/ge", sceGeRestoreContext);

void func_00001790(s32 arg0) {
    func_000017E0(2, 0, arg0, 0);
}

void func_000017B8(s32 arg0) {
    func_000017E0(4, 0, 0, arg0);
}

INCLUDE_ASM("nonmatchings/ge", func_000017E0);

INCLUDE_RODATA("nonmatchings/ge", D_00005CD4);

INCLUDE_RODATA("nonmatchings/ge", D_00005CDC);

INCLUDE_RODATA("nonmatchings/ge", D_00005D18);

INCLUDE_RODATA("nonmatchings/ge", D_00005D38);

INCLUDE_RODATA("nonmatchings/ge", D_00005DB8);

INCLUDE_ASM("nonmatchings/ge", func_00001A38);

INCLUDE_ASM("nonmatchings/ge", func_00001BA4);

s32 module_start(void) {
    sceGe_driver_71FCD1D6();
    return 0;
}

INCLUDE_ASM("nonmatchings/ge", module_reboot_before);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_9F2C2948);

s32 sceGe_driver_BAD6E1CA(s32 arg0) {
    D_00006240 = arg0;
    return 0;
}

s32 sceGe_driver_9DA4A75F(s32 arg0) {
    s32 temp_a3;

    temp_a3 = *(s32 *)0xBD400200;
    *(s32 *)0xBD400200 = arg0 & 1;
    return temp_a3 & 1;
}

void func_00001E9C(s32 arg0) {
    func_000017E0(1, arg0, 0, 0);
}

void func_00001EC4(s32 arg0, s32 arg1, s32 arg2) {
    func_000017E0(7, arg0, arg1, arg2);
}

s32 func_00001EF0(void) {
    s32 temp_a1;

    temp_a1 = __builtin_allegrex_ins(0x40000000, SysMemForKernel_EF2EE8C1(), 0, 0x1D);
    M2C_FIELD(temp_a1, s32 *, 4) = 0x0C000000;
    D_00007FC0 = temp_a1;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x0F000000;
    return 0;
}

INCLUDE_ASM("nonmatchings/ge", func_00001F34);

INCLUDE_ASM("nonmatchings/ge", func_00002110);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_8F185DF7);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_114E1745);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_5BAA5439);

void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}

INCLUDE_ASM("nonmatchings/ge", sceGeEdramSetAddrTranslation);

INCLUDE_ASM("nonmatchings/ge", func_0000254C);

u32 sceGeEdramGetSize(void) {
    return D_00006A84;
}

s32 sceGe_driver_C576E897(void) {
    return D_00006A80;
}

INCLUDE_ASM("nonmatchings/ge", func_000025F0);

INCLUDE_ASM("nonmatchings/ge", func_000028BC);

INCLUDE_RODATA("nonmatchings/ge", D_00005E34);

INCLUDE_ASM("nonmatchings/ge", func_000029A8);

INCLUDE_ASM("nonmatchings/ge", func_00002E78);

INCLUDE_ASM("nonmatchings/ge", sceGeListDeQueue);

INCLUDE_ASM("nonmatchings/ge", sceGeListUpdateStallAddr);

INCLUDE_ASM("nonmatchings/ge", sceGeListSync);

INCLUDE_ASM("nonmatchings/ge", sceGeDrawSync);

INCLUDE_ASM("nonmatchings/ge", sceGeBreak);

INCLUDE_ASM("nonmatchings/ge", sceGeContinue);

INCLUDE_ASM("nonmatchings/ge", sceGeSetCallback);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_AEC21518);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_7B481502);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_9ACFF59D);

INCLUDE_ASM("nonmatchings/ge", sceGe_driver_67B01D8E);

INCLUDE_ASM("nonmatchings/ge", sceGe_user_E66CB92E);

INCLUDE_ASM("nonmatchings/ge", func_000046EC);

INCLUDE_ASM("nonmatchings/ge", func_0000479C);

INCLUDE_ASM("nonmatchings/ge", func_00004B58);

s32 func_00004C44(void) {
    sceKernelDeleteEventFlag(D_00007AC0.unk18);
    sceKernelDeleteEventFlag(D_00007AC0.unk1C);
    sceKernelDeleteEventFlag(D_00007AC0.unk20);
    return 0;
}

s32 func_00004C88(void) {
    return (D_00007AC8 == 0) ? 0 : -1;
}

void func_00004C9C(void) {
}

s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}

s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}

INCLUDE_ASM("nonmatchings/ge", sceGeUnsetCallback);

INCLUDE_ASM("nonmatchings/ge", func_00004DAC);

INCLUDE_ASM("nonmatchings/ge", func_00004DFC);

INCLUDE_ASM("nonmatchings/ge", func_00004F4C);

INCLUDE_ASM("nonmatchings/ge", func_0000505C);

INCLUDE_ASM("nonmatchings/ge", func_00005140);

INCLUDE_ASM("nonmatchings/ge", func_00005654);
