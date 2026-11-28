/* SCE's newlib system layer for user-mode PRX (fd 0-2 = sceKernelStdin/Stdout/Stderr) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

#define O_ACCMODE 3
#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define O_APPEND 0x0008
#define O_CREAT 0x0200
#define O_TRUNC 0x0400
#define O_EXCL 0x0800
#define O_NONBLOCK 0x4000

#define PSP_O_RDONLY 0x0001
#define PSP_O_WRONLY 0x0002
#define PSP_O_RDWR 0x0003
#define PSP_O_NBLOCK 0x0004
#define PSP_O_APPEND 0x0100
#define PSP_O_CREAT 0x0200
#define PSP_O_TRUNC 0x0400
#define PSP_O_EXCL 0x0800

#define PSP_SEEK_SET 0
#define PSP_SEEK_CUR 1
#define PSP_SEEK_END 2

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

_off_t func_000013C4(int fd, _off_t offset, int whence) {
    SceUID uid;

    switch (fd) {
    case 0:
        uid = sceKernelStdin();
        break;
    case 1:
        uid = sceKernelStdout();
        break;
    case 2:
        uid = sceKernelStderr();
        break;
    default:
        uid = fd;
        break;
    }
    return sceIoLseek(uid, offset, whence);
}

_off_t _lseek(int fd, _off_t offset, int whence) {
    SceUID uid;
    int w;

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
    if (uid < 0) {
        return -EBADF;
    }
    switch (whence) {
    case SEEK_SET:
        w = PSP_SEEK_SET;
        break;
    case SEEK_CUR:
        w = PSP_SEEK_CUR;
        break;
    case SEEK_END:
        w = PSP_SEEK_END;
        break;
    default:
        w = whence;
        break;
    }
    return func_000013C4(uid, offset, w);
}

int _fstat(int fd, struct stat *st) {
    st->st_mode = S_IFCHR;
    return 0;
}

int isatty(int fd) {
    return 1;
}

extern int sce_newlib_nocreate_thread_in_start __attribute__((weak));

void _exit(int status) {
    if (&sce_newlib_nocreate_thread_in_start != NULL) {
        if (status == 0) {
            func_000015B4();
        }
        sceKernelExitThread(status);
    } else {
        func_000015B4();
        sceKernelSelfStopUnloadModule(1, 0, NULL);
    }
}

int func_000015A4(void) {
    return -1;
}

int func_000015AC(void) {
    return -1;
}

void func_000015B4(void) {
    sceKernelFreePartitionMemory(D_0000F598);
}

extern unsigned int sce_newlib_heap_kb_size __attribute__((weak));

void *_sbrk(ptrdiff_t incr) {
    unsigned int size;
    SceUID uid;
    char *base;
    char *end;
    char *old;

    if (D_0000F590 == NULL) {
        size = 64 * 1024;
        if (&sce_newlib_heap_kb_size != NULL) {
            size = sce_newlib_heap_kb_size << 10;
        }
        uid = sceKernelAllocPartitionMemory(2, "block", 0, size, NULL);
        D_0000F598 = uid;
        if (uid > 0) {
            base = sceKernelGetBlockHeadAddr(uid);
            D_0000F594 = base + size;
            D_0000F58C = base;
            D_0000F590 = base;
        }
    }
    if (D_0000F590 != NULL) {
        end = D_0000F58C + incr;
        if (end >= D_0000F590 && D_0000F594 >= end) {
            old = D_0000F58C;
            D_0000F58C = end;
            return old;
        }
    }
    return (void *)-1;
}

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
