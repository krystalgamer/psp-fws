/* cflags[100]: -O2 */
#include "common.h"
#include "k1.h"
#include "registry_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/registry", D_00006D40);

INCLUDE_RODATA("nonmatchings/registry", D_00006D44);

INCLUDE_RODATA("nonmatchings/registry", D_00006D5C);

INCLUDE_RODATA("nonmatchings/registry", D_00006D74);

INCLUDE_RODATA("nonmatchings/registry", D_00006D8C);

INCLUDE_RODATA("nonmatchings/registry", D_00006DA4);

INCLUDE_RODATA("nonmatchings/registry", D_00006DB4);

INCLUDE_RODATA("nonmatchings/registry", D_00006DDC);

INCLUDE_RODATA("nonmatchings/registry", D_00006DE4);

INCLUDE_RODATA("nonmatchings/registry", D_00006EA4);

INCLUDE_RODATA("nonmatchings/registry", D_00006EB4);

INCLUDE_RODATA("nonmatchings/registry", D_00006F7C);

INCLUDE_RODATA("nonmatchings/registry", D_00006FA0);

INCLUDE_RODATA("nonmatchings/registry", D_00006FB8);

INCLUDE_RODATA("nonmatchings/registry", D_00006FDC);

INCLUDE_RODATA("nonmatchings/registry", D_00006FE0);
#endif

#if FW_VERSION < 282
s32 sceRegInit(void) {
    s32 id;
    u32 oldK1;

    oldK1 = shiftK1();
    g_semaId = -1;
    g_openMode = 0;
    g_hiveCount = 0;
    g_hiveHead = NULL;
    g_hiveTail = NULL;
    g_catCount = 0;
    g_catHead = NULL;
    g_catTail = NULL;
    g_initialized = 0;
    id = sceKernelCreateSema("SceRegBlockAPI", 0, 1, 1, NULL);
    if (id < 0)
        return 0x80082732;
    g_semaId = id;
    if (func_000069A0(0, 0x8000) < 0)
        return 0x8008272B;
    g_initialized = 1;
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/registry", sceRegInit);
#endif

#if FW_VERSION >= 310
s32 sceRegInit(void) {
    s32 temp_v0;
    s32 var_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    D_0000706C = -1;
    g_openMode = 0;
    g_hiveCount = 0;
    g_hiveHead = 0;
    g_hiveTail = 0;
    g_catCount = 0;
    g_catHead = 0;
    g_catTail = 0;
    g_initialized = 0;
    temp_v0 = sceKernelCreateMutex("SceRegBlockAPI", 0U, 0, NULL);
    if (temp_v0 >= 0) {
        D_0000706C = temp_v0;
        if (func_000069A0(0, 0x8000) >= 0) {
            g_initialized = 1;
            setK1(temp_s0);
            var_v0 = 0;
        } else {
            sceKernelDeleteMutex(D_0000706C);
            setK1(temp_s0);
            var_v0 = 0x8008272B;
        }
    } else {
        setK1(temp_s0);
        var_v0 = 0x8008273D;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 sceRegExit(void) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x8008272C;
    if (g_initialized == 0)
        goto end;
    if (g_semaId > 0) {
        sceKernelDeleteSema(g_semaId);
        g_semaId = -1;
    }
    func_00006228();
    g_openMode = 0;
    g_initialized = 0;
    setK1(oldK1);
    ret = 0;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegExit);

s32 module_reboot_before(void) {
    sceRegExit();
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 module_reboot_phase(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        break;
    case 2:
        sceKernelWaitSema(g_semaId, 1, NULL);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 310
s32 module_reboot_phase(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        break;
    case 2:
        sceKernelLockMutex(D_0000706C, 1, NULL);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 module_reboot_phase(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        break;
    case 2:
        sceKernelWaitSema(D_00006FDC, 1, NULL);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceRegOpenRegistry(SceRegParam *param, s32 mode, s32 *handle) {
    const char *ireg;
    const char *dreg;
    s32 index;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto fail;
    ireg = NULL;
    dreg = NULL;
    func_00001908(param->regType, &ireg, &dreg);
    ret = func_00000B88(param, ireg, dreg);
    if (ret == 0x80082731)
        goto fail;
    if (mode == 1) {
        if (ret != 0) {
            ret = func_00001058(param, ireg, dreg);
            if (ret != 0)
                goto fail;
            g_openMode = mode;
        }
        ret = func_00000C50(param, ireg, dreg, &index);
    } else if (mode == 2) {
        if (ret != 0)
            goto fail;
        ret = func_00000C50(param, ireg, dreg, &index);
    } else {
        ret = 0x80084E27;
    }
    if (ret != 0)
        goto fail;
    *handle = index;
    goto end;
fail:
    *handle = -1;
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegOpenRegistry);
#endif

#if FW_VERSION == 100
s32 sceRegCloseRegistry(s32 index) {
    SceRegHive *h;
    SceRegHive *prev;
    s32 i;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = 0x80082715;
    if (func_00000B6C(index) == NULL)
        goto end;
    ret = func_000006CC(index);
    if (ret != 0)
        goto end;
    h = g_hiveHead;
    prev = NULL;
    for (i = 0; i < g_hiveCount; i++) {
        if (i == index)
            break;
        prev = h;
        h = h->next;
    }
    if (h->openCount != 0) {
        h->openCount--;
    } else {
        g_openMode = 0;
        h->unk0 = 1;
        ret = func_00005F54(h->iregFd);
        if (ret != 0)
            goto end;
        ret = func_00005F54(h->dregFd);
        if (ret != 0)
            goto end;
        if (--g_hiveCount == 0)
            g_hiveHead = NULL;
        else if (prev == NULL)
            g_hiveHead = h->next;
        else
            prev->next = h->next;
        func_000062E0(h->ireg);
        func_000062E0(h);
    }
    ret = 0;
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegCloseRegistry);
#endif

#if FW_VERSION == 100
s32 sceRegRemoveRegistry(SceRegParam *param) {
    const char *ireg;
    const char *dreg;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = 0;
    sceKernelPowerLock(0);
    ireg = NULL;
    dreg = NULL;
    func_00001908(param->regType, &ireg, &dreg);
    func_00005F78(ireg);
    func_00005F78(dreg);
end:
    sceKernelPowerUnlock(0);
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegRemoveRegistry);

INCLUDE_ASM("nonmatchings/registry", sceRegFlushRegistry);
#endif

#if FW_VERSION == 100
s32 sceRegFlushRegistry(s32 arg0) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_000006CC(arg0);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008BC);
#endif

#if FW_VERSION == 100
s32 func_000006CC(s32 index) {
    SceRegHive *h;
    SceRegIregHeader *hdr;
    s32 size;
    s32 written;
    s32 ret;

    ret = 0x80082715;
    sceKernelPowerLock(0);
    h = func_00000B6C(index);
    if (h == NULL)
        goto end;
    if (func_00003B2C(index) != 0)
        goto ok;
    hdr = h->ireg;
    size = hdr->bitmapSize + hdr->entriesSize + 0x28;
    ret = func_00006888(h->iregFd, 0, 0);
    if (ret != 0)
        goto end;
    ret = func_000067A0(hdr, 1, size, h->iregFd, &written);
    if (ret != 0)
        goto end;
    func_00003FE4(index);
ok:
    ret = 0;
end:
    sceKernelPowerUnlock(0);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_0000086C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegFlushCategory);
#else
s32 sceRegFlushCategory(s32 arg0) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto out;
    ret = func_000008E4((SceRegIndexEntry *)arg0);
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
out:
    setK1(oldK1);
    return ret;
}

s32 func_000008E4(SceRegIndexEntry *cat) {
    SceRegBlockRuns runs;
    s32 written;
    SceRegOpenCat *o;
    SceRegHive *h;
    u8 *buf;
    s32 i;
    s32 ret;

    ret = 0x80082715;
    sceKernelPowerLock(0);
    if (func_00003E60(cat) == NULL)
        goto end;
    if (func_000040A0(cat) != 0)
        goto ok;
    h = cat->hive;
    o = cat->opened;
    ret = 0x80082735;
    if (o == NULL)
        goto end;
    buf = o->buf;
    ret = func_00006888(h->dregFd, 0, 0);
    if (ret != 0)
        goto end;
    memset(&runs, 0, sizeof(runs));
    func_00001AC4(&runs, cat->blocks);
    for (i = 0; i < runs.count; i++) {
        ret = func_00006888(h->dregFd, runs.runs[i].start << 9, 0);
        if (ret != 0)
            goto end;
        ret = func_000067A0(buf + i * 0x200, 1, runs.runs[i].num << 9, h->dregFd, &written);
        if (ret != 0)
            goto end;
    }
    func_00004058(cat);
ok:
    ret = 0;
end:
    sceKernelPowerUnlock(0);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008E4);
#endif

#if FW_VERSION < 282
SceRegHive *func_00000B6C(s32 index) {
    SceRegHive *h;
    s32 i;

    if (g_hiveHead == NULL)
        goto fail;
    h = g_hiveHead;
    for (i = 0; i < g_hiveCount; i++) {
        if (index == i)
            break;
        h = h->next;
    }
    if (i == g_hiveCount)
        goto fail;
    return h;
fail:
    return NULL;
}

INCLUDE_ASM("nonmatchings/registry", func_00000B88);
#else
INCLUDE_ASM("nonmatchings/registry", func_000009F8);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000BC8);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00000C50);

#if FW_VERSION < 282
s32 func_00000CA0(SceRegParam *param, SceRegHive **hive, s32 *index) {
    SceRegHive *h;
    s32 i;

    if (g_hiveHead == NULL) {
        *hive = NULL;
        return 0x80082713;
    }
    h = g_hiveHead;
    for (i = 0; i < g_hiveCount; i++) {
        if (h->regType == param->regType) {
            *hive = h;
            *index = i;
            break;
        }
        h = h->next;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00000D10);
#endif

#if FW_VERSION < 271
void func_00000D7C(SceRegHive *h) {
    h->openCount++;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00000D7C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/registry", func_00000DA8);
#endif

#if FW_VERSION == 100
s32 func_00000D9C(SceRegParam *param, const char *ireg, const char *dreg, SceRegHive **hiveOut) {
    u32 size;
    s32 iregFd;
    s32 written;
    s32 dregFd;
    SceRegIregHeader *buf;
    SceRegHive *h;
    s32 ret;

    buf = NULL;
    iregFd = 0;
    dregFd = 0;
    ret = func_00001828(ireg, &size);
    if (ret != 0)
        goto fail;
    ret = 0x80082712;
    buf = func_00006A48(size);
    if (buf == NULL)
        goto fail;
    ret = func_00001730(ireg, &iregFd);
    if (ret != 0)
        goto fail;
    h = func_00006A48(sizeof(SceRegHive));
    ret = 0x80082712;
    if (h == NULL)
        goto fail;
    memset(h, 0, sizeof(SceRegHive));
    ret = 0x80084E24;
    if (func_00006828(buf, 1, size, iregFd, &written) != 0)
        goto fail;
    func_00001938(buf);
    ret = func_00001730(dreg, &dregFd);
    if (ret != 0)
        goto fail;
    h->unk0 = 0;
    h->unk4 = 0;
    h->openCount = 0;
    h->iregFd = iregFd;
    h->dregFd = dregFd;
    h->regType = param->regType;
    h->ireg = buf;
    h->next = NULL;
    *hiveOut = h;
    return 0;
fail:
    if (iregFd != 0) {
        func_00005F54(iregFd);
        func_00005F78(ireg);
    }
    if (dregFd != 0) {
        func_00005F54(dregFd);
        func_00005F78(dreg);
    }
    if (hiveOut != NULL)
        func_000062E0(hiveOut);
    if (buf != NULL)
        func_000062E0(buf);
    *hiveOut = NULL;
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/registry", func_00000D9C);
#endif

#if FW_VERSION == 100
s32 func_00001058(SceRegParam *param, const char *ireg, const char *dreg) {
    SceRegIregHeader hdr;
    s32 ret;

    sceKernelPowerLock(0);
    memset(&hdr, 0, sizeof(hdr));
    func_000010B8(param, &hdr);
    ret = func_000012B0(ireg, &hdr);
    if (ret != 0)
        goto fail;
    ret = func_00001560(dreg, &hdr);
    if (ret != 0)
        goto fail;
    sceKernelPowerUnlock(0);
    return 0;
fail:
    func_00005F78(ireg);
    func_00005F78(dreg);
    sceKernelPowerUnlock(0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00001058);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000010B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000014A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_000012B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001560);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001A0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00001608);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00001110);

INCLUDE_ASM("nonmatchings/registry", func_00001288);

INCLUDE_ASM("nonmatchings/registry", func_00001694);

INCLUDE_ASM("nonmatchings/registry", func_00001714);
#endif

s32 func_00001828(const char *name, u32 *size) {
    u64 sz;
    s32 ret;

    ret = 0x80084E29;
    if (func_000068EC(name, &sz) == 0) {
        ret = 0;
        *size = sz;
    } else {
        *size = 0;
    }
    return ret;
}

#if FW_VERSION == 100
s32 func_00001730(const char *name, s32 *fd) {
    s32 ret;
    s32 res;

    res = func_000065E4(name);
    ret = 0;
    if (res >= 0) {
        *fd = res;
    } else {
        *fd = 0;
        ret = res;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001730(const char *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000065E4(arg0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        *arg1 = temp_v0;
    } else {
        *arg1 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001770);

void func_00001908(s32 type, const char **ireg, const char **dreg) {
    if (type == 1) {
        *ireg = "/registry/system.ireg";
        *dreg = "/registry/system.dreg";
        return;
    }
    *ireg = NULL;
    *dreg = NULL;
}
#endif

#if FW_VERSION == 100
void func_00001938(SceRegIregHeader *hdr) {
    SceRegIndexEntry *e;
    u32 i;
    u32 n;

    e = (SceRegIndexEntry *)((u8 *)hdr + hdr->entriesOffset);
    n = hdr->entriesSize / sizeof(SceRegIndexEntry);
    for (i = n; i != 0; i--) {
        e->opened = NULL;
        e++;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001938);
#endif

#if FW_VERSION >= 282
s32 func_00001874(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000065E4(arg0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        *arg1 = temp_v0;
    } else {
        *arg1 = 0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/registry", func_000018B4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/registry", func_00001A44);
#endif

#if FW_VERSION == 282
void func_00001A44(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2) {
    if (arg0 == 1) {
        *arg1 = "/registry/system.ireg";
        *arg2 = "/registry/system.dreg";
        return;
    }
    *arg1 = NULL;
    *arg2 = NULL;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00001A74);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001AC4);

void func_00001B7C(SceRegBlockRuns *runs, u16 start, u16 num) {
    runs->runs[runs->count].start = start;
    runs->runs[runs->count].num = num;
    runs->count++;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001EC4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001A9C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00002064);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00001B9C);

INCLUDE_ASM("nonmatchings/registry", func_00001CC4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/registry", func_00001D7C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001E2C);

INCLUDE_ASM("nonmatchings/registry", sceRegOpenCategory);

INCLUDE_ASM("nonmatchings/registry", sceRegRemoveCategory);

#if FW_VERSION < 152
s32 sceRegCloseCategory(s32 hd) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto out;
    ret = func_00002228((SceRegIndexEntry *)hd);
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
out:
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegCloseCategory);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002350);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryNumAtRoot);

INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryListAtRoot);

INCLUDE_ASM("nonmatchings/registry", func_00002A5C);
#endif

#if FW_VERSION < 152
s32 func_00002228(SceRegIndexEntry *cat) {
    s32 ret;

    if (func_00003E60(cat) == NULL)
        return 0x80082715;
    ret = func_000008E4(cat);
    if (ret != 0)
        return ret;
    if (cat != NULL && cat->opened == NULL)
        return 0x80082735;
    func_00003414(cat);
    if (cat->opened->refCount == 0) {
        func_000062E0(cat->opened->buf);
        func_000062E0(cat->opened);
        cat->opened = NULL;
        func_00003910(cat);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/registry", func_0000236C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_0000263C);

INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryNumAtRoot);

INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryListAtRoot);

INCLUDE_ASM("nonmatchings/registry", func_00002A64);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00002C3C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002D24);

INCLUDE_ASM("nonmatchings/registry", func_00002F10);

INCLUDE_ASM("nonmatchings/registry", func_000030B8);

INCLUDE_ASM("nonmatchings/registry", func_00003194);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/registry", func_00002630);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002848);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002884);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/registry", func_00002948);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00002A64);

INCLUDE_ASM("nonmatchings/registry", func_00002B44);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002B18);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00003498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00002C78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00002D2C);

INCLUDE_ASM("nonmatchings/registry", func_00002F18);

INCLUDE_ASM("nonmatchings/registry", func_000030C0);

INCLUDE_ASM("nonmatchings/registry", func_0000319C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003340);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002D14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_0000358C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002F10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/registry", func_00003070);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000031D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003228);

INCLUDE_ASM("nonmatchings/registry", func_00003260);
#endif

#if FW_VERSION < 152
void func_000033C4(SceRegIndexEntry *cat) {
    cat->opened->refCount++;
}

u16 func_00003414(SceRegIndexEntry *cat) {
    return --cat->opened->refCount;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_000033AC);

INCLUDE_ASM("nonmatchings/registry", func_00003594);

INCLUDE_ASM("nonmatchings/registry", func_00003738);

INCLUDE_ASM("nonmatchings/registry", func_0000396C);

INCLUDE_ASM("nonmatchings/registry", func_000039A4);
#endif

void func_000039E0(SceRegIndexEntry *e) {
    e->hive = NULL;
    e->unk4 = 0;
    e->unk6 = -1;
    memset(e->name, 0, sizeof(e->name));
    memset(e->blocks, 0xFFFF, sizeof(e->blocks));
    e->opened = NULL;
}

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003318);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_000034E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003594);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000034D0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_0000377C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00003A5C);

INCLUDE_ASM("nonmatchings/registry", func_00003ACC);

INCLUDE_ASM("nonmatchings/registry", func_00003C68);
#endif

void func_00003D1C(s32 hive, SceRegIndexEntry *cat) {
    SceRegCatNode *n;

    if (func_00003E60(cat) != NULL)
        return;
    n = func_00006A48(sizeof(SceRegCatNode));
    n->hive = hive;
    n->cat = cat;
    n->next = NULL;
    n->unk4 = 0;
    if (g_catHead == NULL)
        g_catHead = n;
    else
        g_catTail->next = n;
    g_catTail = n;
    g_catCount++;
}

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003604);
#endif

#if FW_VERSION < 152
void func_00003910(SceRegIndexEntry *cat) {
    SceRegCatNode *prev = NULL;
    SceRegCatNode *n = g_catHead;
    s32 i;

    for (i = 0; i < g_catCount; i++) {
        if (n->cat == cat)
            break;
        prev = n;
        n = n->next;
    }
    if (n == NULL)
        return;
    if (n == g_catHead) {
        g_catHead = n->next;
    } else {
        prev->next = n->next;
        if (n == g_catTail)
            g_catTail = prev;
    }
    func_000062E0(n);
    g_catCount--;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00003DAC);
#endif

SceRegIndexEntry *func_00003E60(SceRegIndexEntry *cat) {
    SceRegCatNode *n = g_catHead;
    s32 i;

    for (i = 0; i < g_catCount; i++) {
        if (n->cat == cat)
            return cat;
        n = n->next;
    }
    return NULL;
}

SceRegCatNode *func_00003EA4(SceRegIndexEntry *cat) {
    SceRegCatNode *n = g_catHead;
    s32 i;

    for (i = 0; i < g_catCount; i++) {
        if (n->cat == cat)
            return n;
        n = n->next;
    }
    return NULL;
}

#if FW_VERSION < 282
s32 func_00003A3C(s32 index) {
    s32 ret;
    SceRegHive *h;

    h = func_00000B6C(index);
    ret = 0x80082715;
    if (h != NULL) {
        h->unk4 = 1;
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003A80);
#endif

#if FW_VERSION == 100
s32 func_00003A80(SceRegIndexEntry *cat) {
    s32 ret;
    SceRegCatNode *n;

    n = func_00003EA4(cat);
    ret = 0x8008272E;
    if (n != NULL) {
        n->unk4 = 1;
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 func_00003EE8(s32 index) {
    s32 ret;
    SceRegHive *h;

    h = func_00000B6C(index);
    ret = 0x80082715;
    if (h != NULL) {
        h->unk4 = 1;
        ret = 0;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/registry", func_00003F2C);
#endif

s32 func_00003FE4(s32 index) {
    s32 ret;
    SceRegHive *h;

    h = func_00000B6C(index);
    ret = 0x80082715;
    if (h != NULL) {
        h->unk4 = 0;
        ret = 0;
    }
    return ret;
}

#if FW_VERSION >= 282
s32 func_00004024(SceRegIndexEntry *cat) {
    s32 ret;
    SceRegCatNode *n;

    n = func_00003EA4(cat);
    ret = 0x8008272E;
    if (n != NULL) {
        n->unk4 = 0;
        ret = 0;
    }
    return ret;
}
#else
s32 func_00004058(SceRegIndexEntry *cat) {
    s32 ret;
    SceRegCatNode *n;

    n = func_00003EA4(cat);
    ret = 0x8008272E;
    if (n != NULL) {
        n->unk4 = 0;
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000038A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00004058);
#endif

#if FW_VERSION < 152
s32 func_00003B2C(s32 index) {
    s32 ret;
    SceRegHive *h;

    h = func_00000B6C(index);
    ret = 0x80082715;
    if (h != NULL) {
        if (h->unk4 == 1)
            ret = 0;
        else
            ret = 0x8008272F;
    }
    return ret;
}
#endif

s32 func_000040A0(SceRegIndexEntry *cat) {
    s32 ret;
    SceRegCatNode *n;

    n = func_00003EA4(cat);
    ret = 0x8008272E;
    if (n != NULL) {
        if (n->unk4 == 1)
            ret = 0;
        else
            ret = 0x80082730;
    }
    return ret;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000045B8);

INCLUDE_ASM("nonmatchings/registry", func_00004768);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_000040E4);

INCLUDE_ASM("nonmatchings/registry", func_00004270);
#endif

INCLUDE_ASM("nonmatchings/registry", sceRegCreateKey);

#if FW_VERSION == 100
s32 sceRegSetKeyValue(s32 hd, const char *name, const void *buf, s32 size) {
    SceRegIndexEntry *cat = (SceRegIndexEntry *)hd;
    SceRegKeyEntry *k;
    void *data;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = 0x8008272E;
    if (func_00003E60(cat) == NULL)
        goto end;
    k = func_000050F4(cat, name, &data);
    ret = 0x8008271D;
    if (k == NULL)
        goto end;
    switch (k->type) {
    case 2:
        k->value = *(u32 *)buf;
        break;
    case 3:
    case 4:
        ret = 0x80082729;
        if ((s32)(((k->value >> 16) & 0xFF) << 5) < size)
            goto end;
        k->value = (k->value & 0xFFFF0000) | (size & 0xFFFF);
        memcpy(data, buf, size);
        break;
    default:
        ret = 0x8008271C;
        goto end;
    }
    func_00003A80(cat);
    ret = 0;
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegSetKeyValue);

INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyInfo);
#endif

#if FW_VERSION == 100
s32 sceRegGetKeyInfo(s32 hd, const char *name, s32 *keyId, s32 *type, u32 *size) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004A28((SceRegIndexEntry *)hd, name, keyId, type, size);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyInfoByName);
#endif

#if FW_VERSION == 100
s32 sceRegGetKeyInfoByName(s32 hd, const char *name, s32 *type, u32 *size) {
    s32 keyId;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004A28((SceRegIndexEntry *)hd, name, &keyId, type, size);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}

s32 func_00004A28(SceRegIndexEntry *cat, const char *name, s32 *keyId, s32 *type, u32 *size) {
    SceRegKeyEntry *k;
    void *data;
    s32 ret;

    ret = 0x80082737;
    if (name == NULL)
        goto fail;
    ret = 0x8008272E;
    if (func_00003E60(cat) == NULL)
        goto fail;
    k = func_000050F4(cat, name, &data);
    ret = 0x8008271D;
    if (k == NULL)
        goto fail;
    *type = k->type;
    switch (k->type) {
    case 1:
        *size = 0;
        break;
    case 2:
        *size = 4;
        break;
    case 3:
    case 4:
        *size = k->value & 0xFFFF;
        break;
    default:
        ret = 0x8008271C;
        goto fail;
    }
    *keyId = (u32)k ^ 0xA0F3D97B;
    return 0;
fail:
    *type = 0;
    *size = 0;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00004A28);
#endif

#if FW_VERSION == 100
s32 sceRegGetKeyValue(s32 hd, s32 keyId, void *buf, s32 size) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004D6C((SceRegIndexEntry *)hd, keyId, buf, size);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyValue);
#endif

#if FW_VERSION == 100
s32 sceRegGetKeyValueByName(s32 hd, const char *name, void *buf, s32 size) {
    s32 keyId;
    s32 type;
    u32 keySize;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004A28((SceRegIndexEntry *)hd, name, &keyId, &type, &keySize);
    if (ret != 0)
        goto end;
    ret = func_00004D6C((SceRegIndexEntry *)hd, keyId, buf, size);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyValueByName);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00004D6C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegRemoveKey);
#else
s32 sceRegRemoveKey(s32 arg0, s32 arg1) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto out;
    ret = func_000046A8(arg0, arg1);
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
out:
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00004778);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_000046A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00004F2C);
#endif

INCLUDE_ASM("nonmatchings/registry", sceRegGetKeysNum);

INCLUDE_ASM("nonmatchings/registry", sceRegGetKeys);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000052C0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/registry", func_00004AF4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00004BB8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00004AF0);

INCLUDE_ASM("nonmatchings/registry", func_00004BE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_000052B0);

INCLUDE_ASM("nonmatchings/registry", func_00005390);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00005548);

INCLUDE_ASM("nonmatchings/registry", func_00005608);

INCLUDE_ASM("nonmatchings/registry", func_00005718);

#if FW_VERSION < 271
SceRegKeyEntry *func_000050F4(SceRegIndexEntry *cat, const char *name, void **data) {
    SceRegCatData *d = cat->opened->buf;
    SceRegKeyEntry *k = (SceRegKeyEntry *)((u8 *)d + 0x20);
    s32 i;

    for (i = 0; i < d->numEntries; i++, k++) {
        if (k->name[0] == name[0] && strcmp((char *)k->name, name) == 0) {
            if (k->type == 3 || k->type == 4)
                *data = (u8 *)d + ((k->value & 0xFF000000) >> 19);
            else
                *data = NULL;
            return k;
        }
    }
    *data = NULL;
    return NULL;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/registry", func_000050F4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_0000589C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000059A0);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00005284);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00005340);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00005A88);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00005F74);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000058D8);
#else
INCLUDE_ASM("nonmatchings/registry", func_00005FF0);
#endif

#if FW_VERSION == 100
s32 func_00006524(const char *name) {
    char *path;
    s32 fd;

    path = func_00006A48(0x108);
    if (path == NULL)
        return 0;
    sprintf(path, D_000066DC, D_00006F8C, name);
    fd = sceIoOpen(path, 0x203, 0xFFF);
    func_000062E0(path);
    if (fd < 0)
        goto fail;
    return fd;
fail:
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00006524);
#endif

#if FW_VERSION < 201
s32 func_000065E4(const char *name) {
    char *path;
    s32 fd;

    path = func_00006A48(0x108);
    if (path == NULL)
        return 0x80082712;
    sprintf(path, D_000066DC, D_00006F8C, name);
    fd = sceIoOpen(path, 3, 0);
    func_000062E0(path);
    return fd;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_000065E4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/registry", func_00006EF0);
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

#if FW_VERSION == 100
s32 func_00005F54(s32 arg0) {
    return -(sceIoClose(arg0) < 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00005F78);
#else
s32 func_00006674(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (sceIoClose(arg0) >= 0) {
        var_v1 = (sceIoDevctl(&D_00006F8C, 0x5802, NULL, 0U, NULL, 0U) >= 0) ? 0 : 0x80084E2B;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/registry", func_000066D0);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", func_000067A0);
#else
s32 func_000067A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_v0;
    u32 temp_lo;

    temp_lo = arg1 * arg2;
    temp_v0 = sceIoWrite(arg3, arg0, temp_lo);
    *arg4 = temp_v0;
    return (-((temp_v0 < (s32) temp_lo) == 0) & 6) - 6;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", func_00006828);
#else
s32 func_00006828(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_v0;
    u32 temp_lo;

    temp_lo = arg1 * arg2;
    temp_v0 = sceIoRead(arg3, arg0, temp_lo);
    *arg4 = temp_v0;
    return (((temp_v0 < (s32) temp_lo) == 0) * 8) - 8;
}
#endif

#if FW_VERSION < 282
s32 func_00006888(s32 fd, s32 offset, s32 whence) {
    return ((s32)sceIoLseek(fd, offset, func_000061B4(whence)) < 0) ? -9 : 0;
}
#else
INCLUDE_ASM("nonmatchings/registry", func_00006888);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000068EC);

#if FW_VERSION < 282
s32 func_000061B4(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F8C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/registry", D_000066DC);
#else
s32 func_00006998(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F8C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/registry", D_00006F94);
#endif

#if FW_VERSION == 100
s32 func_000069A0(s32 arg0, s32 size) {
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
INCLUDE_ASM("nonmatchings/registry", func_000069A0);
#endif

#if FW_VERSION < 282
void func_00006228(void) {
    if (g_vplId >= 0) {
        sceKernelDeleteVpl(g_vplId);
        g_vplId = -1;
    }
}
#else
void func_00006A0C(void) {
    if (g_vplId >= 0) {
        sceKernelDeleteVpl(g_vplId);
        g_vplId = -1;
    }
}
#endif

void *func_00006A48(s32 size) {
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

#if FW_VERSION < 282
void func_000062E0(void *ptr) {
    sceKernelFreeVpl(g_vplId, ptr);
}
#else
void func_00006AC0(void *ptr) {
    sceKernelFreeVpl(g_vplId, ptr);
}
#endif
