/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "iofilemgr_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", syslib_D3744BE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000002C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000447C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000449C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000001E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000458);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000005C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000006C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000704);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoPollAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_CB05F8D6);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeAsyncPriority);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004594);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000AEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoClose);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCloseAsync);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_A905B705);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000050C0);
#endif

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005118);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000D24);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000511C);
#endif

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005130);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000E2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000001E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000364);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_3C54E908);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000466C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000010A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRead);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReadAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000011EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWrite);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWriteAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001330);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseekAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek32);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek32Async);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000014D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctlAsync);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000472C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004758);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoMkdir);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRmdir);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChdir);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetstat);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChstat);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetDevType);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_B2A628C1);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_6D08A871);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_411106BA);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_CB0A151F);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCancel);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdList);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_73B7671F);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_8E982A74);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002E18);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_C7F35804);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002FA4);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001A24);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AA8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AE4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001B50);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003180);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000031A4);
#endif

#if FW_VERSION != 100
void func_00001B9C(s32 arg0) {
    SysMemForKernel_7B749390(D_00005870, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001BC4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C00);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C6C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000332C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000034F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000035CC);
#endif

#if FW_VERSION != 100
void func_00001CB8(s32 arg0) {
    SysMemForKernel_7B749390(D_00005870, arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001CE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002028);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002168);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002254);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", func_000022D8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002328);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000036F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003830);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000038C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002378);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002484);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002578);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", func_000028C0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002960);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000029D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003CF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D68);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000055E4);
#endif

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000563C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005650);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000565C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", syslib_D3744BE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);
#endif

#if FW_VERSION != 100
s32 sceIoPollAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 1, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoWaitAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 1);
}
#endif

#if FW_VERSION != 100
void IoFileMgrForKernel_CB05F8D6(s32 arg0, s32 arg1, s32 arg2) {
    func_00003570(arg0, arg2, arg1, 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);
#endif

#if FW_VERSION != 100
s32 sceIoClose(u32 arg0) {
    return func_00003748((s32) arg0, 0, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoCloseAsync(u32 arg0) {
    return func_00003748((s32) arg0, 1, 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);
#endif

#if FW_VERSION != 100
s32 sceIoRead(u32 arg0, void *arg1, u32 arg2) {
    return func_00003AD4((s32) arg0, (s32) arg1, (s32) arg2, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_00003AD4((s32) arg0, (s32) arg1, (s32) arg2, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2) {
    return func_00003C34((s32) arg0, (s32) arg1, (s32) arg2, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_00003C34((s32) arg0, (s32) arg1, (s32) arg2, 1);
}
#endif

#if FW_VERSION != 100
void sceIoLseek(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00003D94(arg0, arg1, arg2, arg3, arg4, 0);
}
#endif

#if FW_VERSION != 100
void sceIoLseekAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00003D94(arg0, arg1, arg2, arg3, arg4, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoLseek32(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 >> 0x1F;
    return func_00003D94((s32) arg0, temp_a1, arg1, temp_a1, arg2, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoLseek32Async(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 >> 0x1F;
    return func_00003D94((s32) arg0, temp_a1, arg1, temp_a1, arg2, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoIoctl(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_00003F24((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoIoctlAsync(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_00003F24((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoMkdir(void *arg0, s32 arg1) {
    return func_00004114((s32) arg0, arg1, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoRmdir(void *arg0) {
    return func_00004114((s32) arg0, 0, 2);
}
#endif

#if FW_VERSION != 100
s32 sceIoChdir(void *arg0) {
    return func_00004114((s32) arg0, 0, 0);
}
#endif

#if FW_VERSION != 100
s32 sceIoGetstat(void *arg0, void *arg1) {
    return func_00004374((s32) arg0, (s32) arg1, 0, 1);
}
#endif

#if FW_VERSION != 100
s32 sceIoChstat(void *arg0, void *arg1, u32 arg2) {
    return func_00004374((s32) arg0, (s32) arg1, (s32) arg2, 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION != 100
s32 sceIoGetDevType(s32 arg0) {
    struct Unk_sceIoGetDevType_sp0 *sp0;
    s32 var_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    var_v0 = func_00001DAC(arg0, 0, 1, 0, &sp0);
    if (var_v0 >= 0) {
        setK1(temp_s0);
        var_v0 = (s32) sp0->unkC;
    } else {
        setK1(temp_s0);
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_411106BA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_5216CE3F);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_42F954D4);
#endif

#if FW_VERSION != 100
s32 IoFileMgrForKernel_BD17474F(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0) {
    return arg0->unk80;
}
#endif

#if FW_VERSION != 100
void func_0000339C(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        SysMemForKernel_7B749390(D_00005870, temp_v1);
        *arg0 = 0;
    }
}
#endif

#if FW_VERSION != 100
s32 func_000033DC(void) {
    return 0x80020328;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003570);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003748);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000039A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003AD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003C34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003F24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00004114);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00004374);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00004534);
#endif

#if FW_VERSION != 100
s32 func_0000467C(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00004684);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00004690);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000046EC);
#endif
