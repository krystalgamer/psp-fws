/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "iofilemgr_decls.h"

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeAsyncPriority);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000044DC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000044E0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000000F8);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_3C54E908);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004554);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004670);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046AC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046D8);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_B2A628C1);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004780);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047B4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047C8);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047F4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004800);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004824);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_6D08A871);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_CB0A151F);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCancel);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdList);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_8E982A74);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_C7F35804);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000016D4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001758);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001794);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001800);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000184C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001874);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000018B0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000191C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001968);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004958);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001990);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001B1C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001BF0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C80);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001CD0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001D20);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001E20);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001F10);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000221C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000022B8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002330);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A9C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004AB0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", syslib_D3744BE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000002C);

INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000447C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000449C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004B38);

INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000015C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000001E8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000458);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000005C4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000006C4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000704);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoPollAsync);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_CB05F8D6);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeAsyncPriority);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004594);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000AEC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoClose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCloseAsync);
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_A905B705);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000050C0);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000D24);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000511C);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000E2C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);
#else
INCLUDE_ASM("nonmatchings/iofilemgr", func_000001E4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000364);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_3C54E908);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000466C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000010A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRead);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReadAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000011EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWrite);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWriteAsync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001330);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseekAsync);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek32);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoLseek32Async);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000014D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctl);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctlAsync);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046F0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000472C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004758);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AB0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoMkdir);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRmdir);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChdir);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetstat);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChstat);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetDevType);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_B2A628C1);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_6D08A871);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_411106BA);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002BAC);
#else
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_CB0A151F);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCancel);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdList);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_73B7671F);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_8E982A74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002E18);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_C7F35804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002FA4);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001A24);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AA8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AE4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001B50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003180);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000031A4);
#endif

#if FW_VERSION == 282
void func_00001B9C(s32 arg0) {
    SysMemForKernel_7B749390(D_00005870, arg0);
}
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001BC4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C00);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000332C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003350);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000033A4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000034F8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000035CC);
#endif

#if FW_VERSION == 282
void func_00001CB8(s32 arg0) {
    SysMemForKernel_7B749390(D_00005870, arg0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001CE0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002028);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002168);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002254);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_000022D8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002328);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000036F0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002C48);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002C54);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000704);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000AEC);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000D24);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000010A8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000011EC);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001330);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000014D4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AB0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003730);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003830);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000038C0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002378);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002484);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002578);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_000028C0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002960);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000029D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003CF8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D00);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000396C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003A6C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003BE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D0C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D68);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000055E4);
#endif

#if FW_VERSION != 150
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000563C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005650);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000565C);

INCLUDE_ASM("nonmatchings/iofilemgr", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);

s32 sceIoPollAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 1, 0);
}

s32 sceIoWaitAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 0);
}

s32 sceIoWaitAsyncCB(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 1);
}

void IoFileMgrForKernel_CB05F8D6(s32 arg0, s32 arg1, s32 arg2) {
    func_00003570(arg0, arg2, arg1, 0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);

s32 sceIoClose(u32 arg0) {
    return func_00003748((s32) arg0, 0, 1);
}

s32 sceIoCloseAsync(u32 arg0) {
    return func_00003748((s32) arg0, 1, 0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);

s32 sceIoRead(u32 arg0, void *arg1, u32 arg2) {
    return func_00003AD4((s32) arg0, (s32) arg1, (s32) arg2, 0);
}

s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_00003AD4((s32) arg0, (s32) arg1, (s32) arg2, 1);
}

s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2) {
    return func_00003C34((s32) arg0, (s32) arg1, (s32) arg2, 0);
}

s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_00003C34((s32) arg0, (s32) arg1, (s32) arg2, 1);
}

void sceIoLseek(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00003D94(arg0, arg1, arg2, arg3, arg4, 0);
}

void sceIoLseekAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00003D94(arg0, arg1, arg2, arg3, arg4, 1);
}

s32 sceIoLseek32(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 >> 0x1F;
    return func_00003D94((s32) arg0, temp_a1, arg1, temp_a1, arg2, 0);
}

s32 sceIoLseek32Async(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 >> 0x1F;
    return func_00003D94((s32) arg0, temp_a1, arg1, temp_a1, arg2, 1);
}

s32 sceIoIoctl(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_00003F24((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 0);
}

s32 sceIoIoctlAsync(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_00003F24((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 1);
}

s32 sceIoMkdir(void *arg0, s32 arg1) {
    return func_00004114((s32) arg0, arg1, 1);
}

s32 sceIoRmdir(void *arg0) {
    return func_00004114((s32) arg0, 0, 2);
}

s32 sceIoChdir(void *arg0) {
    return func_00004114((s32) arg0, 0, 0);
}

s32 sceIoGetstat(void *arg0, void *arg1) {
    return func_00004374((s32) arg0, (s32) arg1, 0, 1);
}

s32 sceIoChstat(void *arg0, void *arg1, u32 arg2) {
    return func_00004374((s32) arg0, (s32) arg1, (s32) arg2, 0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);

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

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_411106BA);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_5216CE3F);

INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrForKernel_42F954D4);

s32 IoFileMgrForKernel_BD17474F(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0) {
    return arg0->unk80;
}

void func_0000339C(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        SysMemForKernel_7B749390(D_00005870, temp_v1);
        *arg0 = 0;
    }
}

s32 func_000033DC(void) {
    return 0x80020328;
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_000033E8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000033F8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003570);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003748);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000039A8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003AD4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003C34);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D94);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003F24);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00004114);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00004374);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00004534);

s32 func_0000467C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00004684);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00004690);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000046EC);
#endif
