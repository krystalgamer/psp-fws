/* cflags[100-303]: -O2 -fno-thread-jumps */
#include "common.h"
#include "k1.h"
#include "registry_decls.h"

#define IS_USER_ADDR(p) (((u32)(p) >> 31) ^ 1)

#if FW_VERSION < 150
s32 regCreateFile(const char *name) {
    char *path;
    s32 fd;

    path = regAlloc(0x108);
    if (path == NULL)
        return 0;
    sprintf(path, D_000066DC, D_00006F8C, name);
    fd = sceIoOpen(path, 0x203, 0xFFF);
    regFree(path);
    if (fd < 0)
        goto fail;
    return fd;
fail:
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/regio", regCreateFile);
#endif

#if FW_VERSION < 201
s32 regOpenFile(const char *name) {
    char *path;
    s32 fd;

    path = regAlloc(0x108);
    if (path == NULL)
        return 0x80082712;
    sprintf(path, D_000066DC, D_00006F8C, name);
    fd = sceIoOpen(path, 3, 0);
    regFree(path);
    return fd;
}
#else
INCLUDE_ASM("nonmatchings/regio", regOpenFile);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/regio", func_00006EF0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00006EF0(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 150
s32 regCloseFile(s32 arg0) {
    return -(sceIoClose(arg0) < 0);
}

s32 regRemoveFile(const char *name) {
    char *path;
    s32 ret;

    path = regAlloc(0x108);
    ret = -11;
    if (path != NULL) {
        sprintf(path, D_000066DC, D_00006F8C, name);
        ret = (sceIoRemove(path) < 0) ? -5 : 0;
    }
    if (path != NULL)
        regFree(path);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/regio", regRemoveFile);
#endif

#if FW_VERSION >= 282
s32 func_00006674(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/regio", func_000066D0);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/regio", regWriteFile);
#else
s32 regWriteFile(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_v0;
    u32 temp_lo;

    temp_lo = arg1 * arg2;
    temp_v0 = sceIoWrite(arg3, arg0, temp_lo);
    *arg4 = temp_v0;
    return (-((temp_v0 < (s32) temp_lo) == 0) & 6) - 6;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/regio", regReadFile);
#else
s32 regReadFile(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_v0;
    u32 temp_lo;

    temp_lo = arg1 * arg2;
    temp_v0 = sceIoRead(arg3, arg0, temp_lo);
    *arg4 = temp_v0;
    return (((temp_v0 < (s32) temp_lo) == 0) * 8) - 8;
}
#endif

#if FW_VERSION < 282
s32 regSeekFile(s32 fd, s32 offset, s32 whence) {
    return ((s32)sceIoLseek(fd, offset, func_000061B4(whence)) < 0) ? -9 : 0;
}
#else
INCLUDE_ASM("nonmatchings/regio", regSeekFile);
#endif

#if FW_VERSION < 201
s32 regStatFile(const char *name, u32 *size) {
    SceRegIoStat st;
    char *path;
    s32 ret;

    path = regAlloc(0x108);
    ret = -11;
    if (path != NULL) {
        ret = -10;
        sprintf(path, D_000066DC, D_00006F8C, name);
        if (sceIoGetstat(path, &st) >= 0) {
            size[0] = st.st_size; size[1] = 0;
            ret = 0;
        }
    }
    if (path != NULL)
        regFree(path);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/regio", regStatFile);
#endif

#if FW_VERSION < 282
s32 func_000061B4(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/regio", D_00006F8C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/regio", D_000066DC);
#else
s32 func_00006998(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/regio", D_00006F8C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/regio", D_00006F94);
#endif

#if FW_VERSION < 150
s32 regHeapInit(s32 arg0, s32 size) {
    s32 ret;

    g_vplId = -1;
    g_vplMaxUsed = -1;
    g_vplId = sceKernelCreateVpl("reg", 1, 0, size, NULL);
    ret = g_vplId;
    if (g_vplId >= 0) {
        g_vplMaxUsed = 0;
        ret = 0;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/regio", regHeapInit);
#endif

void regHeapDelete(void) {
    if (g_vplId >= 0) {
        sceKernelDeleteVpl(g_vplId);
        g_vplId = -1;
    }
}

void *regAlloc(s32 size) {
    void *ptr = NULL;
    SceRegVplInfo info;
    s32 used;

    if (sceKernelTryAllocateVpl(g_vplId, size, &ptr) < 0)
        return NULL;
    info.size = sizeof(info);
    if (sceKernelReferVplStatus(g_vplId, &info) == 0) {
        used = info.poolSize - info.freeSize;
        if (g_vplMaxUsed < used)
            g_vplMaxUsed = used;
    }
    return ptr;
}

void regFree(void *ptr) {
    sceKernelFreeVpl(g_vplId, ptr);
}
