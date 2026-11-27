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

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/registry", sceRegInit);
#else
s32 sceRegInit(void) {
    s32 temp_v0;
    s32 var_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    D_0000706C = -1;
    D_00007070 = 0;
    g_hiveCount = 0;
    g_hiveHead = 0;
    g_hiveTail = 0;
    g_catCount = 0;
    g_catHead = 0;
    g_catTail = 0;
    D_00007050 = 0;
    temp_v0 = sceKernelCreateMutex("SceRegBlockAPI", 0U, 0, NULL);
    if (temp_v0 >= 0) {
        D_0000706C = temp_v0;
        if (func_000069A0(0, 0x8000) >= 0) {
            D_00007050 = 1;
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

INCLUDE_ASM("nonmatchings/registry", sceRegExit);

#if FW_VERSION >= 150
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

INCLUDE_ASM("nonmatchings/registry", sceRegOpenRegistry);

INCLUDE_ASM("nonmatchings/registry", sceRegCloseRegistry);

INCLUDE_ASM("nonmatchings/registry", sceRegRemoveRegistry);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegFlushRegistry);
#else
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
INCLUDE_ASM("nonmatchings/registry", func_000006CC);
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
    ret = func_000008E4(arg0);
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
out:
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008E4);

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
s32 func_00000CA0(u32 *regType, SceRegHive **hive, s32 *index) {
    SceRegHive *h;
    s32 i;

    if (g_hiveHead == NULL) {
        *hive = NULL;
        return 0x80082713;
    }
    h = g_hiveHead;
    for (i = 0; i < g_hiveCount; i++) {
        if (h->regType == *regType) {
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
#else
INCLUDE_ASM("nonmatchings/registry", func_00000D9C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00001058);

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
INCLUDE_ASM("nonmatchings/registry", func_00001730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001730(s32 arg0, s32 *arg1) {
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

INCLUDE_ASM("nonmatchings/registry", sceRegCloseCategory);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00002350);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryNumAtRoot);

INCLUDE_ASM("nonmatchings/registry", sceRegGetCategoryListAtRoot);

INCLUDE_ASM("nonmatchings/registry", func_00002A5C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00002228);
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
INCLUDE_ASM("nonmatchings/registry", func_000033C4);

INCLUDE_ASM("nonmatchings/registry", func_00003414);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_000033AC);

INCLUDE_ASM("nonmatchings/registry", func_00003594);

INCLUDE_ASM("nonmatchings/registry", func_00003738);

INCLUDE_ASM("nonmatchings/registry", func_0000396C);

INCLUDE_ASM("nonmatchings/registry", func_000039A4);
#endif

void func_000039E0(SceRegIndexEntry *e) {
    e->unk0 = 0;
    e->unk2 = 0;
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
INCLUDE_ASM("nonmatchings/registry", func_00003910);
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

INCLUDE_ASM("nonmatchings/registry", func_00003FE4);

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
INCLUDE_ASM("nonmatchings/registry", func_00003B2C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_000040A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000045B8);

INCLUDE_ASM("nonmatchings/registry", func_00004768);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_000040E4);

INCLUDE_ASM("nonmatchings/registry", func_00004270);
#endif

INCLUDE_ASM("nonmatchings/registry", sceRegCreateKey);

INCLUDE_ASM("nonmatchings/registry", sceRegSetKeyValue);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyInfo);
#else
s32 sceRegGetKeyInfo(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004A28(arg0, arg1, arg2, arg3, arg4);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyInfoByName);
#else
s32 sceRegGetKeyInfoByName(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 ret;
    u32 oldK1;

    oldK1 = shiftK1();
    ret = 0x80082733;
    if (sceKernelWaitSema(g_semaId, 1, NULL) != 0)
        goto end;
    ret = func_00004A28(arg0, arg1, &sp0, arg2, arg3);
end:
    if (sceKernelSignalSema(g_semaId, 1) != 0) {
        ret = 0x80082734;
    }
    setK1(oldK1);
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/registry", func_00004A28);

INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyValue);

INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyValueByName);

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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000050F4);
#else
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
