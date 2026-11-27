/* cflags[100]: -Os */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "iofilemgr_decls.h"

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000000);

void func_00000094(void) {
    func_00000000();
}

s32 sceKernelStdin(void) {
    return D_00006630;
}

s32 sceKernelStdout(void) {
    return D_00006634;
}

s32 sceKernelStderr(void) {
    return D_00006638;
}

s32 sceKernelStdoutReopen(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80020384;
    if (D_00006634 >= 0) {
        var_v0 = sceIoReopen(arg0, arg1, arg2, D_00006634);
    }
    return var_v0;
}

s32 sceKernelStderrReopen(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0x80020384;
    if (D_00006638 >= 0) {
        var_v0 = sceIoReopen(arg0, arg1, arg2, D_00006638);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceKernelStdoutReset);

INCLUDE_ASM("nonmatchings/iofilemgr", sceKernelStderrReset);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005B9C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005BA0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005BC0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005BD4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005BEC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005C00);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005C18);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005C2C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005C4C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005C5C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005CB4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005CC4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005D7C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005D90);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005ED8);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005EEC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000608C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000609C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060B4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060B4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060B4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060E4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006114);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006188);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006028);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000019C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000244);

INCLUDE_ASM("nonmatchings/iofilemgr", fdprintf);

INCLUDE_ASM("nonmatchings/iofilemgr", printf);

INCLUDE_ASM("nonmatchings/iofilemgr", fdputc);

INCLUDE_ASM("nonmatchings/iofilemgr", fdgetc);

INCLUDE_ASM("nonmatchings/iofilemgr", fdgets);

INCLUDE_ASM("nonmatchings/iofilemgr", putchar);

INCLUDE_ASM("nonmatchings/iofilemgr", fdputs);

INCLUDE_ASM("nonmatchings/iofilemgr", puts);

INCLUDE_ASM("nonmatchings/iofilemgr", getchar);

void gets(s32 arg0) {
    fdgets(arg0, 0);
}

s32 sceKernelStdioRead(void) {
    return 0x80020001;
}

s32 sceKernelStdioLseek(void) {
    return 0x80020001;
}

void sceKernelStdioSendChar(void) {

}

s32 sceKernelStdioWrite(void) {
    return 0x80020001;
}

s32 sceKernelStdioClose(void) {
    return 0x80020001;
}

s32 sceKernelStdioOpen(void) {
    return 0x80020001;
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000980);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000A84);

s32 func_00000B78(void) {
    sceIoAddDrv((s32) &D_000060D4);
    return 0;
}

s32 func_00000B9C(void) {
    sceIoDelDrv((s32) &D_000060B4);
    return 0;
}

s32 sceKernelRegisterStdoutPipe(s32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000D04(1, arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceKernelRegisterStderrPipe(s32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000D04(2, arg0);
    setK1(temp_s0);
    return temp_v0;
}

s32 func_00000C28(void) {
    return 0;
}

s32 func_00000C30(void) {
    return 0;
}

s32 func_00000C38(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) < 3) ? 0 : 0x80010006;
}

s32 func_00000C50(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) < 3) ? 0 : 0x80010006;
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000C68);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000C78);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006054);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000605C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060B4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060C0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000060D4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000D04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeAsyncPriority);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000000F8);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000044DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004838);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004DC0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReopen);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004894);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReopen);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000044E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/iofilemgr", func_000000F8);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReopen);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004554);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 250) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000098C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004670);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046AC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoAssign);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004780);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000049A0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000049B4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000049E0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000049EC);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A10);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A18);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A1C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A48);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A6C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047B4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047C8);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_000047F4);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004800);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004824);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoUnassign);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeThreadCwd);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCancel);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdList);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoAddDrv);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDelDrv);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000016D4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001758);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001794);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001800);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000184C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000184C(s32 arg0) {
    sceKernelFreeHeapMemory(D_00004E4C, arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001874);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000018B0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000191C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001968);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001968(s32 arg0) {
    sceKernelFreeHeapMemory(D_00004E4C, arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004958);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001990);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001D70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001B1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001BF0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001F7C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001D08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C80);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001CD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001EFC);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002008);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001D20);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001E20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001F10);

INCLUDE_ASM("nonmatchings/iofilemgr", func_0000221C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000022B8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002330);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004EBC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004A9C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004AB0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004F34);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", module_bootstart);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000002C);

void module_reboot_before(void) {
    func_0000015C(0);
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000447C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000449C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004B38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoPollAsync);
#endif

#if FW_VERSION < 201
s32 sceIoPollAsync(u32 arg0, void *arg1) {
    return func_00000704((s32) arg0, (s32) arg1, 1, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);
#endif

#if FW_VERSION < 201
s32 sceIoWaitAsync(u32 arg0, void *arg1) {
    return func_00000704((s32) arg0, (s32) arg1, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);
#endif

#if FW_VERSION < 201
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1) {
    return func_00000704((s32) arg0, (s32) arg1, 0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetAsyncStat);
#endif

#if FW_VERSION < 201
void sceIoGetAsyncStat(s32 arg0, s32 arg1, s32 arg2) {
    func_00000704(arg0, arg2, arg1, 0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeAsyncPriority);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004594);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000AEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoClose);
#endif

#if FW_VERSION < 201
s32 sceIoClose(u32 arg0) {
    return func_00000AEC((s32) arg0, 0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCloseAsync);
#endif

#if FW_VERSION < 201
s32 sceIoCloseAsync(u32 arg0) {
    return func_00000AEC((s32) arg0, 1, 0);
}
#endif

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCloseAll);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001064);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000011F0);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000050C0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000D24);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000511C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00000E2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);
#endif

#if FW_VERSION < 201
s32 sceIoOpen(void *arg0, s32 arg1, s32 arg2) {
    return func_00000D24((s32) arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);
#endif

#if FW_VERSION < 201
s32 sceIoOpenAsync(void *arg0, s32 arg1, s32 arg2) {
    return func_00000D24((s32) arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_000001E4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00000364);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReopen);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000466C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000010A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRead);
#endif

#if FW_VERSION < 201
s32 sceIoRead(u32 arg0, void *arg1, u32 arg2) {
    return func_000010A8((s32) arg0, (s32) arg1, (s32) arg2, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReadAsync);
#endif

#if FW_VERSION < 201
s32 sceIoReadAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_000010A8((s32) arg0, (s32) arg1, (s32) arg2, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_000011EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWrite);
#endif

#if FW_VERSION < 201
s32 sceIoWrite(u32 arg0, void *arg1, u32 arg2) {
    return func_000011EC((s32) arg0, (s32) arg1, (s32) arg2, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWriteAsync);
#endif

#if FW_VERSION < 201
s32 sceIoWriteAsync(u32 arg0, void *arg1, u32 arg2) {
    return func_000011EC((s32) arg0, (s32) arg1, (s32) arg2, 1);
}
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctl);
#endif

#if FW_VERSION < 201
s32 sceIoIoctl(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_000014D4((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctlAsync);
#endif

#if FW_VERSION < 201
s32 sceIoIoctlAsync(u32 arg0, s32 arg1, void *arg2, u32 arg3, void *arg4, u32 arg5) {
    return func_000014D4((s32) arg0, arg1, (s32) arg2, (s32) arg3, (s32) arg4, (s32) arg5, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046F0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000472C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004758);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoMkdir);
#endif

#if FW_VERSION < 201
s32 sceIoMkdir(void *arg0, s32 arg1) {
    return func_00001AB0((s32) arg0, arg1, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRmdir);
#endif

#if FW_VERSION < 201
s32 sceIoRmdir(void *arg0) {
    return func_00001AB0((s32) arg0, 0, 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChdir);
#endif

#if FW_VERSION < 201
s32 sceIoChdir(void *arg0) {
    return func_00001AB0((s32) arg0, 0, 0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetstat);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChstat);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetDevType);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoAssign);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoUnassign);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetThreadCwd);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetIobUserLevel);
#endif

#if FW_VERSION == 152
s32 sceIoGetIobUserLevel(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0) {
    return arg0->unk80;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002BAC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002E64);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChangeThreadCwd);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCancel);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdList);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetFdDebugInfo);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoAddDrv);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002E18);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDelDrv);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002FA4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001A24);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AA8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001AE4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001B50);
#endif

#if FW_VERSION == 100
s32 func_00001B50(void) {
    s32 temp_v0;

    temp_v0 = sceKernelAllocHeapMemory(D_00004CEC, 0xC);
    if (temp_v0 != 0) {
        memset(temp_v0, 0, 0xC);
    }
    return temp_v0;
}

void func_00003180(s32 arg0) {
    sceKernelFreeHeapMemory(D_00004CEC, arg0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_000031A4);
#endif

#if FW_VERSION >= 282
void func_00001B9C(s32 arg0) {
    sceKernelFreeHeapMemory(D_00005870, arg0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001BC4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C00);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001C6C);
#endif

#if FW_VERSION == 100
s32 func_00001C6C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelAllocHeapMemory(D_00004CEC, 0x70);
    if (temp_v0 != 0) {
        memset(temp_v0, 0, 0x70);
    }
    return temp_v0;
}

void func_0000332C(s32 arg0) {
    sceKernelFreeHeapMemory(D_00004CEC, arg0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003350);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000033A4);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000034F8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000035CC);
#endif

#if FW_VERSION >= 282
void func_00001CB8(s32 arg0) {
    sceKernelFreeHeapMemory(D_00005870, arg0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", func_00001CE0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetUID);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00001DAC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002E00);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002FA8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002028);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002168);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002254);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000022D8);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002328);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/iofilemgr", func_000036F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000036F0(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        sceKernelFreeHeapMemory(D_00004E4C, temp_v1);
        *arg0 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002C48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002C48(void) {
    return 0x80020328;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002C54);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000031F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000396C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002378);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002484);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033DC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033DC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_000033DC_v350);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/iofilemgr", func_00002578);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000028C0);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00002960);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000029D8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006374);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003CF8);
#endif

#if FW_VERSION < 201
s32 func_00003CF8(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D00);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000401C);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/iofilemgr", func_000042A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/iofilemgr", func_0000396C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003A6C);

INCLUDE_ASM("nonmatchings/iofilemgr", func_00003BE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", func_00003D0C);

void func_00003D68(void) {
    sceIoDelDrv((s32) &D_0000563C);
    sceIoAddDrv((s32) &D_00004CCC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000055E4);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000563C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005650);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000565C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006404);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", module_bootstart);

INCLUDE_ASM("nonmatchings/iofilemgr", module_reboot_before);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoPollAsync);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoPollAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 1, 0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoWaitAsync(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoWaitAsyncCB(u32 arg0, void *arg1) {
    return func_00003570((s32) arg0, (s32) arg1, 0, 1);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetAsyncStat);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void sceIoGetAsyncStat(s32 arg0, s32 arg1, s32 arg2) {
    func_00003570(arg0, arg2, arg1, 0);
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetDevType);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 303
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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetThreadCwd);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoTerminateFd);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoAddHook);

s32 sceIoGetIobUserLevel(struct Unk_IoFileMgrForKernel_BD17474F_0 *arg0) {
    return arg0->unk80;
}

void func_0000339C(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        sceKernelFreeHeapMemory(D_00005870, temp_v1);
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
#endif

#if FW_VERSION >= 350
s32 func_0000557C(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000055A4(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", func_000046EC);
#endif
