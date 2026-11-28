/* SCE's newlib system layer for user-mode PRX (fd 0-2 = sceKernelStdin/Stdout/Stderr) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

int _read(int fd, void *buf, size_t n) {
    SceUID uid;
    int ret;

    switch (fd) {
    default:
        uid = fd;
        break;
    case 2:
        uid = sceKernelStderr();
        break;
    case 0:
        uid = sceKernelStdin();
        break;
    case 1:
        uid = sceKernelStdout();
        break;
    }
    ret = -EBADF;
    if (uid >= 0) {
        ret = sceIoRead(uid, buf, n);
    }
    return ret;
}

int _write(int fd, const void *buf, size_t n) {
    SceUID uid;
    int ret;

    switch (fd) {
    default:
        uid = fd;
        break;
    case 2:
        uid = sceKernelStderr();
        break;
    case 0:
        uid = sceKernelStdin();
        break;
    case 1:
        uid = sceKernelStdout();
        break;
    }
    ret = -EBADF;
    if (uid >= 0) {
        ret = sceIoWrite(uid, buf, n);
    }
    return ret;
}

SceUID func_00001288(const char *file, int flags, int mode) {
    return sceIoOpen(file, flags, mode);
}

INCLUDE_ASM("nonmatchings/rinit_001140", _open);

int _close(int fd) {
    SceUID uid;
    int ret;

    switch (fd) {
    default:
        uid = fd;
        break;
    case 2:
        uid = sceKernelStderr();
        break;
    case 0:
        uid = sceKernelStdin();
        break;
    case 1:
        uid = sceKernelStdout();
        break;
    }
    ret = -EBADF;
    if (uid >= 0) {
        ret = sceIoClose(uid);
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/rinit_001140", func_000013C4);

INCLUDE_ASM("nonmatchings/rinit_001140", _lseek);

INCLUDE_ASM("nonmatchings/rinit_001140", _fstat);

int isatty(int fd) {
    return 1;
}

INCLUDE_ASM("nonmatchings/rinit_001140", _exit);

int func_000015AC(void) {
    return -1;
}

void func_000015B4(void) {
    sceKernelFreePartitionMemory(D_0000F598);
}

INCLUDE_ASM("nonmatchings/rinit_001140", _sbrk);

int func_000016B4(void) {
    return -1;
}

int func_000016BC(void) {
    return -1;
}

clock_t clock(void) {
    return sceKernelLibcClock();
}

time_t time(time_t *t) {
    return sceKernelLibcTime(t);
}

int _gettimeofday(struct timeval *tp, struct timezone *tzp) {
    return sceKernelLibcGettimeofday(tp, tzp);
}
