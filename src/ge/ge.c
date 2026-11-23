/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ge_decls.h"

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00000000);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005C9C);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_71FCD1D6);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_B415364D);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_51C8BB60);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeGetCmd);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_51D44C58);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeGetMtx);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_5A0103E6);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeSaveContext);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeRestoreContext);

void func_00001790(s32 arg0) {
    func_000017E0(2, 0, arg0, 0);
}

void func_000017B8(s32 arg0) {
    func_000017E0(4, 0, 0, arg0);
}

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_000017E0);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005CD4);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005CDC);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005D18);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005D38);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005DB8);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00001A38);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00001BA4);

s32 module_start(void) {
    sceGe_driver_71FCD1D6();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_9F2C2948);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_BAD6E1CA);

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

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00001EF0);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00001F34);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00002110);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_8F185DF7);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_114E1745);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_5BAA5439);

void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeEdramSetAddrTranslation);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_0000254C);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeEdramGetSize);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_C576E897);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_000025F0);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_000028BC);

INCLUDE_RODATA("tmp/asm/282/ge/nonmatchings/ge", D_00005E34);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_000029A8);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00002E78);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeListDeQueue);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeListUpdateStallAddr);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeListSync);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeDrawSync);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeBreak);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeContinue);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeSetCallback);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_AEC21518);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_7B481502);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_9ACFF59D);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_driver_67B01D8E);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGe_user_E66CB92E);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_000046EC);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_0000479C);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004B58);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004C44);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004C88);

void func_00004C9C(void) {
}

s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}

s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", sceGeUnsetCallback);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004DAC);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004DFC);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00004F4C);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_0000505C);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00005140);

INCLUDE_ASM("tmp/asm/282/ge/nonmatchings/ge", func_00005654);
