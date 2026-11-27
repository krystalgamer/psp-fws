/* cflags[100]: -O2 -fno-builtin */
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

#if FW_VERSION == 100
s32 module_bootstart(s32 args, void *argp) {
    s32 arg = 0;
    if (args >= 4) {
        arg = *(s32 *)argp;
    }
    return IoFileMgrInit(arg);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", module_bootstart);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", IoFileMgrInit);

void module_reboot_before(void) {
    terminate_iofm(0);
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
INCLUDE_ASM("nonmatchings/iofilemgr", terminate_iofm);

INCLUDE_ASM("nonmatchings/iofilemgr", async_loop);

INCLUDE_ASM("nonmatchings/iofilemgr", create_async_thread);

s32 start_async(SceIoIob *iob, s32 cmd) {
    s32 ret;
    char **ktls;
    char *cwd;

    if (iob->asyncThread == 0) {
        ret = create_async_thread(iob);
        if (ret < 0) {
            return ret;
        }
    }
    if (sceKernelPollSema(iob->asyncSema, 1) < 0) {
        return 0x80020329;
    }
    iob->asyncCwd = NULL;
    if (cmd == 1) {
        ktls = sceKernelGetKTLS(g_ktls);
        if (ktls != NULL && *ktls != NULL) {
            cwd = sceKernelAllocHeapMemory(g_heap, strlen(*ktls) + 1);
            iob->asyncCwd = cwd;
            if (cwd == NULL) {
                sceKernelSignalSema(iob->asyncSema, 1);
                return 0x80020190;
            }
            strcpy(cwd, *ktls);
        }
    }
    iob->k1 = getK1();
    iob->asyncCmd = cmd;
    return sceKernelSetEventFlag(iob->asyncEvFlag, 3);
}

s32 is_async_busy(SceIoIob *iob) {
    s32 ret = 0;
    if (iob->asyncThread != 0) {
        ret = sceKernelPollEventFlag(iob->asyncEvFlag, 1, 1, 0) == 0;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/iofilemgr", do_get_async_stat);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoPollAsync);
#endif

#if FW_VERSION < 201
s32 sceIoPollAsync(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 1, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);
#endif

#if FW_VERSION < 201
s32 sceIoWaitAsync(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);
#endif

#if FW_VERSION < 201
s32 sceIoWaitAsyncCB(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetAsyncStat);
#endif

#if FW_VERSION < 201
s32 sceIoGetAsyncStat(SceUID fd, s32 poll, s64 *res) {
    do_get_async_stat(fd, res, poll, 0);
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

INCLUDE_ASM("nonmatchings/iofilemgr", do_close);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoClose);
#endif

#if FW_VERSION < 201
s32 sceIoClose(SceUID fd) {
    return do_close(fd, 0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoCloseAsync);
#endif

#if FW_VERSION < 201
s32 sceIoCloseAsync(SceUID fd) {
    return do_close(fd, 1, 0);
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
INCLUDE_ASM("nonmatchings/iofilemgr", do_open);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000511C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00005130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", open_main);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);
#endif

#if FW_VERSION < 201
SceUID sceIoOpen(const char *file, s32 flags, SceMode mode) {
    return do_open(file, flags, mode, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);
#endif

#if FW_VERSION < 201
SceUID sceIoOpenAsync(const char *file, s32 flags, SceMode mode) {
    return do_open(file, flags, mode, 1);
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

INCLUDE_ASM("nonmatchings/iofilemgr", do_read);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRead);
#endif

#if FW_VERSION < 201
s32 sceIoRead(SceUID fd, void *data, SceSize size) {
    return do_read(fd, data, size, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoReadAsync);
#endif

#if FW_VERSION < 201
s32 sceIoReadAsync(SceUID fd, void *data, SceSize size) {
    return do_read(fd, data, size, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", do_write);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWrite);
#endif

#if FW_VERSION < 201
s32 sceIoWrite(SceUID fd, const void *data, SceSize size) {
    return do_write(fd, data, size, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWriteAsync);
#endif

#if FW_VERSION < 201
s32 sceIoWriteAsync(SceUID fd, const void *data, SceSize size) {
    return do_write(fd, data, size, 1);
}
#endif

#if FW_VERSION == 100
SceOff do_lseek(SceUID fd, SceOff offset, s32 whence, s32 async) {
    SceIoIob *iob;
    u32 oldK1;
    s64 ret;

    oldK1 = shiftK1();
    ret = validate_fd(fd, 0, 4, 0, &iob);
    if (ret < 0) {
        setK1(oldK1);
        return ret;
    }
    if ((u32)whence >= 3) {
        setK1(oldK1);
        return 0x80020324;
    }
    if (iob->i_de->d_dp->dt_func->df_lseek == NULL) {
        setK1(oldK1);
        return 0x80020325;
    }
    if (!async) {
        ret = iob->i_de->d_dp->dt_func->df_lseek(iob, offset, whence);
    } else {
        *(SceOff *)&iob->asyncArgs[0] = offset;
        iob->asyncArgs[2] = whence;
        ret = start_async(iob, 5);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 282
SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence) {
    return do_lseek(fd, offset, whence, 0);
}

SceOff sceIoLseekAsync(SceUID fd, SceOff offset, s32 whence) {
    return do_lseek(fd, offset, whence, 1);
}

s32 sceIoLseek32(SceUID fd, s32 offset, s32 whence) {
    return do_lseek(fd, offset, whence, 0);
}

s32 sceIoLseek32Async(SceUID fd, s32 offset, s32 whence) {
    return do_lseek(fd, offset, whence, 1);
}
#endif

#if FW_VERSION == 100
s32 do_ioctl(SceUID fd, s32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen, s32 async) {
    SceIoIob *iob;
    u32 oldK1;
    s32 ret;

    oldK1 = shiftK1();
    if (k1IsUserMode() && (s32)((u32)indata | inlen | ((u32)indata + inlen)) < 0) {
        Kprintf("iofilemgr.c:%s:Overrange pointer and size, argp: 0x%x %d\n", D_00004758, indata, inlen);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (k1IsUserMode() && (s32)((u32)outdata | outlen | ((u32)outdata + outlen)) < 0) {
        Kprintf(D_000046F0, D_00004758, outdata, outlen);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (k1IsUserMode() && ((cmd >> 15) & 1)) {
        Kprintf(D_0000472C, D_00004758);
        setK1(oldK1);
        return 0x800200D1;
    }
    ret = validate_fd(fd, 0, 2, 0, &iob);
    if (ret < 0) {
        setK1(oldK1);
        return ret;
    }
    if (iob->i_de->d_dp->dt_func->df_ioctl == NULL) {
        setK1(oldK1);
        return 0x80020325;
    }
    if (!async) {
        ret = iob->i_de->d_dp->dt_func->df_ioctl(iob, cmd, indata, inlen, outdata, outlen);
    } else {
        iob->asyncArgs[0] = cmd;
        iob->asyncArgs[1] = (s32)indata;
        iob->asyncArgs[2] = inlen;
        iob->asyncArgs[3] = (s32)outdata;
        iob->asyncArgs[4] = outlen;
        ret = start_async(iob, 6);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctl);
#endif

#if FW_VERSION < 201
s32 sceIoIoctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen) {
    return do_ioctl(fd, cmd, indata, inlen, outdata, outlen, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoIoctlAsync);
#endif

#if FW_VERSION < 201
s32 sceIoIoctlAsync(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen) {
    return do_ioctl(fd, cmd, indata, inlen, outdata, outlen, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/iofilemgr", D_000046F0);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_0000472C);

INCLUDE_RODATA("nonmatchings/iofilemgr", D_00004758);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDopen);
#endif

#if FW_VERSION == 100
s32 sceIoDread(SceUID fd, SceIoDirent *dir) {
    SceIoIob *iob;
    u32 oldK1;
    s32 ret;

    oldK1 = shiftK1();
    if (k1IsUserMode() && (s32)dir < 0) {
        Kprintf(D_00005118, "sceIoDread", dir);
        setK1(oldK1);
        return 0x800200D3;
    }
    ret = validate_fd(fd, 8, 4, 0, &iob);
    if (ret >= 0) {
        ret = 0x80020325;
        if (iob->i_de->d_dp->dt_func->df_dread != NULL) {
            ret = iob->i_de->d_dp->dt_func->df_dread(iob, dir);
        }
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDread);
#endif

#if FW_VERSION == 100
s32 sceIoDclose(SceUID fd) {
    SceIoIob *iob;
    u32 oldK1;
    s32 ret;

    oldK1 = shiftK1();
    ret = validate_fd(fd, 8, 4, 2, &iob);
    if (ret >= 0) {
        ret = 0x80020325;
        if (iob->i_de != NULL) {
            if (iob->i_de->d_dp->dt_func->df_dclose != NULL) {
                ret = iob->i_de->d_dp->dt_func->df_dclose(iob);
                if (ret >= 0) {
                    goto free;
                }
            }
        } else {
free:
            free_iob(iob);
            setK1(oldK1);
            return 0;
        }
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDclose);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRemove);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", xx_dir);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoMkdir);
#endif

#if FW_VERSION < 201
s32 sceIoMkdir(const char *path, SceMode mode) {
    return xx_dir(path, mode, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRmdir);
#endif

#if FW_VERSION < 201
s32 sceIoRmdir(const char *path) {
    return xx_dir(path, 0, 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoChdir);
#endif

#if FW_VERSION < 201
s32 sceIoChdir(const char *path) {
    return xx_dir(path, 0, 0);
}

s32 sceIoSync(const char *device, u32 unk) {
    u32 oldK1 = shiftK1();
    s32 ret = sceIoDevctl(device, 0x100, &unk, 4, NULL, 0);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/iofilemgr", xx_stat);
#endif

#if FW_VERSION < 282
s32 sceIoGetstat(const char *file, SceIoStat *stat) {
    return xx_stat(file, stat, 0, 1);
}

s32 sceIoChstat(const char *file, SceIoStat *stat, u32 bits) {
    return xx_stat(file, stat, bits, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSync);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoRename);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDevctl);
#endif

#if FW_VERSION == 100
s32 sceIoGetDevType(SceUID fd) {
    SceIoIob *iob;
    u32 oldK1;
    s32 ret;

    oldK1 = shiftK1();
    ret = validate_fd(fd, 0, 1, 0, &iob);
    if (ret < 0) {
        setK1(oldK1);
        return ret;
    }
    setK1(oldK1);
    return iob->d_type;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetDevType);
#else
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
s32 func_00002E18(SceIoDeviceEntry *dev) {
    SceIoIob *iob;
    s32 intr;
    s32 i;

    intr = sceKernelCpuSuspendIntr();
    for (i = 0; i < 64; i++) {
        if (validate_fd(i, 0, 0, 5, &iob) == 0 && iob->i_de == dev) {
            iob->i_de = NULL;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoDelDrv);
#endif

#if FW_VERSION == 100
void func_00002FA4(void) {
    SceIoDeviceList *cur;

    for (cur = g_devList; cur != NULL; cur = cur->next) {
        if (cur->arg.d_dp->dt_func->df_exit != NULL) {
            cur->arg.d_dp->dt_func->df_exit(&cur->arg);
        }
    }
}

SceIoDeviceList *lookup_device_list(const char *drive) {
    s32 intr;
    SceIoDeviceList *cur;

    intr = sceKernelCpuSuspendIntr();
    for (cur = g_devList; cur != NULL; cur = cur->next) {
        if (strcmp_bs(drive, cur->arg.d_dp->dt_string) == 0) {
            sceKernelCpuResumeIntr(intr);
            return cur;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return NULL;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", lookup_device_list);
#endif

#if FW_VERSION == 100
void add_device_list(SceIoDeviceList *list) {
    s32 intr = sceKernelCpuSuspendIntr();
    list->next = g_devList;
    g_devList = list;
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", add_device_list);
#endif

#if FW_VERSION == 100
s32 delete_device_list(SceIoDeviceList *list) {
    s32 intr;
    SceIoDeviceList *prev;

    intr = sceKernelCpuSuspendIntr();
    for (prev = (SceIoDeviceList *)&g_devList; prev->next != NULL; prev = prev->next) {
        if (prev->next == list) {
            prev->next = prev->next->next;
            sceKernelCpuResumeIntr(intr);
            return 0;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return -1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", delete_device_list);

INCLUDE_ASM("nonmatchings/iofilemgr", alloc_device_list);
#endif

#if FW_VERSION == 100
SceIoDeviceList *alloc_device_list(void) {
    SceIoDeviceList *list;

    list = sceKernelAllocHeapMemory(g_heap, sizeof(SceIoDeviceList));
    if (list != NULL) {
        memset(list, 0, sizeof(SceIoDeviceList));
    }
    return list;
}

void free_device_list(SceIoDeviceList *list) {
    sceKernelFreeHeapMemory(g_heap, list);
}

SceIoAlias *lookup_alias_tbl(const char *drive) {
    s32 intr;
    SceIoAlias *cur;

    intr = sceKernelCpuSuspendIntr();
    for (cur = g_aliasList; cur != NULL; cur = cur->next) {
        if (cur->dev != NULL && strcmp_bs(drive, cur->alias) == 0) {
            sceKernelCpuResumeIntr(intr);
            return cur;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return NULL;
}
#endif

#if FW_VERSION >= 282
void func_00001B9C(s32 arg0) {
    sceKernelFreeHeapMemory(D_00005870, arg0);
}
#endif

#if FW_VERSION == 100
void add_alias_tbl(SceIoAlias *alias) {
    s32 intr = sceKernelCpuSuspendIntr();
    alias->next = g_aliasList;
    g_aliasList = alias;
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", add_alias_tbl);
#endif

#if FW_VERSION == 100
s32 delete_alias_tbl(SceIoAlias *alias) {
    s32 intr;
    SceIoAlias *prev;

    intr = sceKernelCpuSuspendIntr();
    for (prev = (SceIoAlias *)&g_aliasList; prev->next != NULL; prev = prev->next) {
        if (prev->next == alias) {
            prev->next = prev->next->next;
            sceKernelCpuResumeIntr(intr);
            return 0;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return -1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", delete_alias_tbl);

INCLUDE_ASM("nonmatchings/iofilemgr", alloc_alias_tbl);
#endif

#if FW_VERSION == 100
SceIoAlias *alloc_alias_tbl(void) {
    SceIoAlias *alias;

    alias = sceKernelAllocHeapMemory(g_heap, sizeof(SceIoAlias));
    if (alias != NULL) {
        memset(alias, 0, sizeof(SceIoAlias));
    }
    return alias;
}

void free_alias_tbl(SceIoAlias *alias) {
    sceKernelFreeHeapMemory(g_heap, alias);
}

s32 init_iob_table(void) {
    s32 i;

    memset(g_iob, 0, sizeof(g_iob));
    for (i = 0; i < 64; i++) {
        g_iob[i].fd = -1;
    }
    return 0;
}

s32 validate_fd(SceUID fd, s32 flags, s32 arg2, s32 arg3, SceIoIob **outIob) {
    SceIoIob *iob;
    SceUID thid;

    if ((u32)fd >= 64) {
        goto bad;
    }
    iob = &g_iob[fd];
    if (iob->fd < 0) {
        goto bad;
    }
    *outIob = iob;
    if ((arg3 & 2) == 0 && iob->i_de == NULL) {
        return 0x80020328;
    }
    if ((arg3 & 1) == 0 && is_async_busy(iob) != 0) {
        if ((arg3 & 4) == 0) {
            Kprintf("iofilemgr.c:%s:fd %d: Async mode BUSY\n", "validate_fd", fd);
        }
        return 0x80020329;
    }
    if (flags != 0 && (iob->i_flgs & flags) == 0) {
        goto bad;
    }
    if ((iob->i_flgs & 0x1000000) != 0) {
        thid = sceKernelGetThreadId();
        if (thid != iob->curThread && thid != iob->asyncThread) {
            return 0x80020323;
        }
    }
    return 0;

bad:
    if ((arg3 & 4) == 0) {
        Kprintf(D_00004594, "validate_fd", fd);
    }
    return 0x80020323;
}

s32 alloc_iob(SceIoIob **outIob) {
    s32 intr;
    SceIoIob *iob;
    s32 i;

    intr = sceKernelCpuSuspendIntr();
    iob = g_iob;
    for (i = 0; i < 64; i++) {
        if (iob->fd < 0) {
            memset(iob, 0, sizeof(SceIoIob));
            *outIob = iob;
            iob->fd = i;
            iob->asyncPrio = g_defaultThreadPriority;
            iob->curThread = sceKernelGetThreadId();
            iob->userMode = k1IsUserMode() != 0;
            iob->powerLocked = 0;
            sceKernelCpuResumeIntr(intr);
            return i;
        }
        iob++;
    }
    sceKernelCpuResumeIntr(intr);
    Kprintf("iofilemgr.c:%s:SCE_KERNEL_ERROR_MFILE\n", "alloc_iob");
    return 0x80020320;
}

INCLUDE_ASM("nonmatchings/iofilemgr", free_iob);
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
INCLUDE_ASM("nonmatchings/iofilemgr", validate_fd);
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
s32 iob_power_lock(SceIoIob *iob) {
    if (iob->powerLocked == 0) {
        iob->powerLocked = 1;
        if (iob->userMode != 0) {
            sceKernelPowerLockForUser(0);
        } else {
            sceKernelPowerLock(0);
        }
    }
    return 0;
}

s32 iob_power_unlock(SceIoIob *iob) {
    if (iob->powerLocked != 0) {
        iob->powerLocked = 0;
        if (iob->userMode != 0) {
            sceKernelPowerUnlockForUser(0);
        } else {
            sceKernelPowerUnlock(0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 100
void free_cwd(char **ktls) {
    u32 cwd;

    cwd = (u32)*ktls;
    if (cwd != 0) {
        sceKernelFreeHeapMemory(g_heap, (void *)cwd);
        *ktls = NULL;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", free_cwd);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void free_cwd(char **ktls) {
    u32 cwd;

    cwd = (u32)*ktls;
    if (cwd != 0) {
        sceKernelFreeHeapMemory(D_00004E4C, (void *)cwd);
        *ktls = NULL;
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
INCLUDE_ASM("nonmatchings/iofilemgr", do_get_async_stat);

INCLUDE_ASM("nonmatchings/iofilemgr", do_close);

INCLUDE_ASM("nonmatchings/iofilemgr", do_open);

INCLUDE_ASM("nonmatchings/iofilemgr", do_read);

INCLUDE_ASM("nonmatchings/iofilemgr", do_write);

INCLUDE_ASM("nonmatchings/iofilemgr", do_lseek);

INCLUDE_ASM("nonmatchings/iofilemgr", do_ioctl);

INCLUDE_ASM("nonmatchings/iofilemgr", xx_dir);

INCLUDE_ASM("nonmatchings/iofilemgr", xx_stat);
#endif

#if FW_VERSION == 100
char *parsedev(const char *path, SceIoDeviceEntry **dev, s32 *unit) {
    char buf[32];
    char *colon;
    char *end;
    SceIoDeviceList *list;
    s32 len;

    while (*path == ' ') {
        path++;
    }
    colon = strchr(path, ':');
    if (colon == NULL) {
        return NULL;
    }
    *unit = 0;
    len = colon - path;
    strncpy(buf, path, len);
    end = &buf[len];
    *end = '\0';
    if (look_ctype_table(end[-1]) & 4) {
        while (look_ctype_table(end[-1]) & 4) {
            end--;
        }
        *unit = strtol(end, NULL, 10);
    }
    *end = '\0';
    list = lookup_device_list(buf);
    if (list == NULL) {
        return NULL;
    }
    *dev = &list->arg;
    return colon + 1;
}

SceIoAlias *parse_alias(const char *path) {
    char buf[32];
    char *colon;
    s32 len;

    while (*path == ' ') {
        path++;
    }
    colon = strchr(path, ':');
    if (colon == NULL) {
        return NULL;
    }
    len = colon - path;
    strncpy(buf, path, len);
    buf[len] = '\0';
    return lookup_alias_tbl(buf);
}

s32 parsefile(const char *path, SceIoDeviceEntry **dev, s32 *unit, char **outPath) {
    char buf[32];
    char *colon;
    const char *p;
    char *end;
    char **cwd;
    SceIoAlias *alias;
    SceIoDeviceList *list;
    s32 len;
    s32 ret;

    while (*path == ' ') {
        path++;
    }
    colon = strchr(path, ':');
    if (colon != NULL) {
        p = path;
    } else {
        cwd = sceKernelGetKTLS(g_ktls);
        if (cwd == NULL || *cwd == NULL) {
            Kprintf("iofilemgr.c:%s:Unset CWD, Unknown device '%s'\n", "parsefile", path);
            return 0x8002032C;
        }
        strcpy(*outPath, *cwd);
        colon = *outPath + strlen(*outPath) - 1;
        if (*colon != '/' && *colon != ':') {
            if (*path != '/') {
                colon[1] = '/';
                colon[2] = '\0';
            }
        } else if (*colon == '/' && *path == '/') {
            *colon = '\0';
        }
        if (strlen(*outPath) + strlen(path) >= 0x3FF) {
            Kprintf("iofilemgr.c:%s:File name too long '%s'\n", "parsefile", path);
            return 0x8002032D;
        }
        strcat(*outPath, path);
        p = *outPath;
        colon = strchr(p, ':');
        if (colon == NULL) {
            Kprintf("iofilemgr.c:%s:CWD: Unknown device '%s'\n", "parsefile", p);
            return 0x80020321;
        }
    }
    len = colon - p;
    strncpy(buf, p, len);
    buf[len] = '\0';
    end = &buf[len];
    *unit = 0;
    if (look_ctype_table(end[-1]) & 4) {
        while (look_ctype_table(end[-1]) & 4) {
            end--;
        }
        *unit = strtol(end, NULL, 10);
    }
    alias = lookup_alias_tbl(buf);
    if (alias == NULL) {
        *end = '\0';
        list = lookup_device_list(buf);
        if (list == NULL) {
            Kprintf("iofilemgr.c:%s:Unknown device '%s'\n", "parsefile", buf);
            return 0x80020321;
        }
        *dev = &list->arg;
        ret = list->arg.d_dp->dt_type;
    } else {
        *unit = alias->i_unit;
        *dev = alias->dev;
        ret = alias->attr;
    }
    *outPath = colon + 1;
    return ret;
}
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
INCLUDE_ASM("nonmatchings/iofilemgr", strcmp_bs);
#endif

#if FW_VERSION == 100
char *alloc_pathbuf(void) {
    s32 intr;
    char *path;

    intr = sceKernelCpuSuspendIntr();
    if (g_pathbufCount > 0) {
        path = g_pathbufBuf[--g_pathbufCount];
    } else {
        path = sceKernelAllocHeapMemory(g_heap, 1024);
    }
    sceKernelCpuResumeIntr(intr);
    return path;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", alloc_pathbuf);
#endif

#if FW_VERSION == 100
void free_pathbuf(char *ptr) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    if (g_pathbufCount < 2) {
        g_pathbufBuf[g_pathbufCount++] = ptr;
    } else {
        sceKernelFreeHeapMemory(g_heap, ptr);
    }
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", free_pathbuf);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/iofilemgr", D_00006374);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/iofilemgr", _nulldev);
#endif

#if FW_VERSION < 201
s32 _nulldev(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
SceOff _nulldev_offt(void) {
    return 0;
}
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
s32 _nulldev_write(SceIoIob *iob, const char *data, s32 len) {
    if (sceKernelDipsw(15) == 1) {
        sceKernelDebugWrite(0, data, len);
    }
    return len;
}

void func_00003D68(void) {
    sceIoDelDrv(D_0000563C);
    sceIoAddDrv(&g_dummyconDriver);
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
s32 sceIoPollAsync(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 1, 0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsync);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoWaitAsync(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 0, 0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoWaitAsyncCB);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoWaitAsyncCB(SceUID fd, s64 *res) {
    return do_get_async_stat(fd, res, 0, 1);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoGetAsyncStat);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 sceIoGetAsyncStat(SceUID fd, s32 poll, s64 *res) {
    do_get_async_stat(fd, res, poll, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/iofilemgr", sceIoSetAsyncCallback);

s32 sceIoClose(SceUID fd) {
    return do_close(fd, 0, 1);
}

s32 sceIoCloseAsync(SceUID fd) {
    return do_close(fd, 1, 0);
}

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpen);

INCLUDE_ASM("nonmatchings/iofilemgr", sceIoOpenAsync);

s32 sceIoRead(SceUID fd, void *data, SceSize size) {
    return do_read(fd, data, size, 0);
}

s32 sceIoReadAsync(SceUID fd, void *data, SceSize size) {
    return do_read(fd, data, size, 1);
}

s32 sceIoWrite(SceUID fd, const void *data, SceSize size) {
    return do_write(fd, data, size, 0);
}

s32 sceIoWriteAsync(SceUID fd, const void *data, SceSize size) {
    return do_write(fd, data, size, 1);
}

SceOff sceIoLseek(SceUID fd, SceOff offset, s32 whence) {
    return do_lseek(fd, offset, whence, 0);
}

SceOff sceIoLseekAsync(SceUID fd, SceOff offset, s32 whence) {
    return do_lseek(fd, offset, whence, 1);
}

s32 sceIoLseek32(SceUID fd, s32 offset, s32 whence) {
    return do_lseek(fd, offset, whence, 0);
}

s32 sceIoLseek32Async(SceUID fd, s32 offset, s32 whence) {
    return do_lseek(fd, offset, whence, 1);
}

s32 sceIoIoctl(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen) {
    return do_ioctl(fd, cmd, indata, inlen, outdata, outlen, 0);
}

s32 sceIoIoctlAsync(SceUID fd, u32 cmd, void *indata, s32 inlen, void *outdata, s32 outlen) {
    return do_ioctl(fd, cmd, indata, inlen, outdata, outlen, 1);
}

s32 sceIoMkdir(const char *path, SceMode mode) {
    return xx_dir(path, mode, 1);
}

s32 sceIoRmdir(const char *path) {
    return xx_dir(path, 0, 2);
}

s32 sceIoChdir(const char *path) {
    return xx_dir(path, 0, 0);
}

s32 sceIoGetstat(const char *file, SceIoStat *stat) {
    return xx_stat(file, stat, 0, 1);
}

s32 sceIoChstat(const char *file, SceIoStat *stat, u32 bits) {
    return xx_stat(file, stat, bits, 0);
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
    var_v0 = validate_fd(arg0, 0, 1, 0, &sp0);
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

INCLUDE_ASM("nonmatchings/iofilemgr", do_get_async_stat);

INCLUDE_ASM("nonmatchings/iofilemgr", do_close);

INCLUDE_ASM("nonmatchings/iofilemgr", func_000039A8);

INCLUDE_ASM("nonmatchings/iofilemgr", do_read);

INCLUDE_ASM("nonmatchings/iofilemgr", do_write);

INCLUDE_ASM("nonmatchings/iofilemgr", do_lseek);

INCLUDE_ASM("nonmatchings/iofilemgr", do_ioctl);

INCLUDE_ASM("nonmatchings/iofilemgr", xx_dir);

INCLUDE_ASM("nonmatchings/iofilemgr", xx_stat);

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
