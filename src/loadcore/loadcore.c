/* cflags[100-103]: -O2 */
/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "loadcore_decls.h"

#if FW_VERSION < 150
s32 func_00000000(void) {
    s32 i;

    g_LoadCoreLibEntries[0].next = NULL;
    for (i = 1; i < 30; i++)
        g_LoadCoreLibEntries[i].next = &g_LoadCoreLibEntries[i - 1];
    g_FreeLibEnt = &g_LoadCoreLibEntries[29];
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/loadcore", func_00000000);
#endif

#if FW_VERSION < 150
SceResidentLibrary *func_00000048(void) {
    SceResidentLibrary *lib;

    if (g_FreeLibEnt != NULL) {
        lib = g_FreeLibEnt;
        g_FreeLibEnt = lib->next;
        lib->next = NULL;
    } else {
        lib = sceKernelAllocHeapMemory(func_00000C08(), sizeof(SceResidentLibrary));
    }
    return lib;
}
#else
INCLUDE_ASM("nonmatchings/loadcore", func_00000048);
#endif

#if FW_VERSION < 150
SceResidentLibrary *func_00000098(SceResidentLibrary *lib) {
    if (lib >= &g_LoadCoreLibEntries[0] && lib < &g_LoadCoreLibEntries[30]) {
        lib->next = g_FreeLibEnt;
        g_FreeLibEnt = lib;
        return lib;
    }
    sceKernelFreeHeapMemory(func_00000C08(), lib);
    return g_FreeLibEnt;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00000098);
#endif

#if FW_VERSION < 150
s32 func_0000010C(void) {
    s32 i;

    g_LoadCoreLibStubs[0].freeNext = NULL;
    for (i = 1; i < 90; i++)
        g_LoadCoreLibStubs[i].freeNext = &g_LoadCoreLibStubs[i - 1];
    g_FreeLibStub = &g_LoadCoreLibStubs[89];
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_0000010C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_000000A0);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/loadcore", func_00000154);
#endif

#if FW_VERSION < 150
SceStubLibrary *func_0000019C(void) {
    SceStubLibrary *stub;

    if (g_FreeLibStub != NULL) {
        stub = g_FreeLibStub;
        g_FreeLibStub = stub->freeNext;
    } else {
        stub = sceKernelAllocHeapMemory(func_00000C08(), sizeof(SceStubLibrary));
    }
    return stub;
}
#else
INCLUDE_ASM("nonmatchings/loadcore", func_0000019C);
#endif

#if FW_VERSION < 150
SceStubLibrary *func_000001A0(SceStubLibrary *stub) {
    if (stub >= &g_LoadCoreLibStubs[0] && stub < &g_LoadCoreLibStubs[90]) {
        stub->freeNext = g_FreeLibStub;
        g_FreeLibStub = stub;
        return stub;
    }
    sceKernelFreeHeapMemory(func_00000C08(), stub);
    return g_FreeLibStub;
}

s32 func_00000214(void) {
    s32 i;

    Kprintf("systable.c:%s:()\n", "InitSysEntTable");
    initialSysEntTable[0].next = NULL;
    for (i = 1; i < 60; i++)
        initialSysEntTable[i].next = &initialSysEntTable[i - 1];
    D_00007268 = &initialSysEntTable[59];
    return 0;
}

SceSysCallEntryTable *func_00000280(void) {
    SceSysCallEntryTable *ent;

    if (D_00007268 != NULL) {
        ent = D_00007268;
        D_00007268 = ent->next;
    } else {
        ent = sceKernelAllocHeapMemory(func_00000C08(), sizeof(SceSysCallEntryTable));
    }
    return ent;
}

SceSysCallEntryTable *func_000002CC(SceSysCallEntryTable *p) {
    if (p >= &initialSysEntTable[0] && p < &initialSysEntTable[60]) {
        p->next = D_00007268;
        D_00007268 = p;
        return p;
    }
    sceKernelFreeHeapMemory(func_00000C08(), p);
    return D_00007268;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000002CC);

INCLUDE_ASM("nonmatchings/loadcore", func_00000214);

INCLUDE_ASM("nonmatchings/loadcore", func_00000368);

INCLUDE_ASM("nonmatchings/loadcore", func_00000480);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00000340);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000340(void) {
    Kprintf("systable.c:%s: is called.\n", "UndefSyscall");
    return 0x80020001;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00000764(s32 arg0, s32 arg1, s32 arg2) {
    func_000007A4(arg0, arg1, 0, arg2);
}

void func_00000784(s32 arg0, s32 arg1) {
    func_000007A4(arg0, arg1, 1, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_000007A4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000009A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00000934);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", module_bootstart);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/loadcore", func_00000E00);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00000B4C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/loadcore", D_00006A40);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006A60);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006A6C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00000DC0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", module_bootstart);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000014F8);

void sceKernelRegisterLibrary(s32 arg0) {
    func_000014F8(arg0, 0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000014A0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/loadcore", func_0000145C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00001224);
#endif

#if FW_VERSION < 150
s32 func_00000370(u32 seed, SceSyscallTable **syscallTable) {
    s32 i;
    s32 status;
    SceSyscallTable *tbl;
    SceSysCallEntryTable *ent;

    tbl = sceKernelAllocHeapMemory(func_00000C08(), sizeof(SceSyscallTable));
    if (tbl == NULL) {
        Kprintf("systable.c:%s:No Heap Memory\n", "SyscallTableInit");
        return 0x80020001;
    }
    tbl->next = NULL;
    tbl->seed = seed << 2;
    tbl->funcTableSize = (seed << 2) + 0x3FFC;
    tbl->tableSize = sizeof(SceSyscallTable);
    for (i = 0; i < 4096; i++)
        tbl->syscalls[i] = (void (*)())func_00000340;
    ent = func_00000280();
    g_pSysEntControl = ent;
    ent->inUse = 0;
    ent->next = NULL;
    ent->startAddr = 0;
    ent->numEntries = 0x1000;
    status = sceKernelRegisterSystemCallTable(tbl);
    if (status != 0) {
        Kprintf("systable.c:%s:sceKernelRegisterSystemCallTable failed: 0x%X\n", "SyscallTableInit", status);
        sceKernelFreeHeapMemory(func_00000C08(), tbl);
        return status;
    }
    *syscallTable = tbl;
    return 0;
}

s32 func_00000488(s32 numEntries) {
    SceSysCallEntryTable *cur;
    SceSysCallEntryTable *ent;

    for (cur = g_pSysEntControl; cur != NULL; cur = cur->next) {
        if ((cur->inUse & 1) == 0) {
            if (cur->numEntries == numEntries) {
                cur->inUse |= 1;
                return cur->startAddr;
            }
            if (cur->numEntries > numEntries) {
                ent = func_00000280();
                ent->inUse = 0;
                ent->startAddr = cur->startAddr + (u16)numEntries;
                ent->next = cur->next;
                ent->numEntries = cur->numEntries - numEntries;
                cur->inUse |= 1;
                cur->numEntries = numEntries;
                cur->next = ent;
                return cur->startAddr;
            }
        }
    }
    Kprintf("systable.c:%s:Automatic SyscallTable grow needed\n", "AllocSysTable");
    return 0x80020001;
}

SceSysCallEntryTable *func_00000570(u32 addr) {
    SceSysCallEntryTable *cur;
    SceSysCallEntryTable *prev;
    SceSysCallEntryTable *next;

    prev = NULL;
    for (cur = g_pSysEntControl; cur != NULL; cur = cur->next) {
        if (cur->startAddr == addr)
            break;
        prev = cur;
    }
    if (cur == NULL) {
        Kprintf("systable.c:%s:Cannot found index %d\n", "FreeSysTable", addr);
        return NULL;
    }
    if ((cur->inUse & 1) == 0) {
        Kprintf("systable.c:%s:try to Release unused table: %d\n", "FreeSysTable", addr);
        return NULL;
    }
    cur->inUse &= ~1;
    if (prev != NULL && prev->inUse == 0) {
        prev->numEntries += cur->numEntries;
        prev->next = cur->next;
        func_000002CC(cur);
        cur = prev;
    }
    next = cur->next;
    if (next == NULL || next->inUse != 0)
        return cur;
    cur->numEntries += next->numEntries;
    cur->next = next->next;
    func_000002CC(next);
    return cur;
}
#endif

#if FW_VERSION < 152
void func_00000674(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 0);
}

void func_00000690(s32 arg0, s32 arg1) {
    func_000008D0(arg0, arg1, 1);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_000006AC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000008D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_00000898);

INCLUDE_ASM("nonmatchings/loadcore", module_bootstart);

INCLUDE_RODATA("nonmatchings/loadcore", D_000068A0);

INCLUDE_RODATA("nonmatchings/loadcore", D_000068AC);
#endif

#if FW_VERSION < 150
void func_00000A7C(u32 *src, u32 *dst, s32 n) {
    s32 i;

    for (i = n - 1; i >= 0; i--)
        dst[i] = src[i];
}

void func_00000AAC(SceResidentLibrary *a, SceResidentLibrary *b) {
    func_00005338(a->libName, b->libName);
}

s32 func_00000ACC(SceResidentLibrary *a, SceResidentLibrary *b) {
    return a->version - b->version;
}

s32 func_00000ADC(SceResidentLibrary *lib, SceStubLibrary *stub) {
    return lib->version - stub->version;
}

s32 func_00000AEC(SceResidentLibrary *lib, SceStubLibrary *stub) {
    return func_00005338(stub->libName, lib->libName);
}

s32 func_00000B10(SceResidentLibrary *lib, SceStubLibrary *stub) {
    return (lib->version >> 8) - (stub->version >> 8);
}

s32 func_00000B28(SceStubLibrary *list, SceStubLibrary *stub) {
    for (; list != NULL; list = list->next) {
        if (list->unk20 == stub->unk20)
            return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00000B58);

INCLUDE_ASM("nonmatchings/loadcore", func_00000B98);

INCLUDE_ASM("nonmatchings/loadcore", func_00000C08);

void func_00000CC0(SceStubLibrary *stub) {
    u32 i;
    u32 *p;

    i = stub->stubCount;
    if (i != 0) {
        p = stub->stubTable;
        do {
            i--;
            p[0] = 0x03E00008;
            p[1] = 0;
            p += 2;
        } while (i != 0);
    }
}
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadcore", D_000065E4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/loadcore", D_00006604);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006610);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_000001F0);

INCLUDE_ASM("nonmatchings/loadcore", func_000002A4);

INCLUDE_ASM("nonmatchings/loadcore", func_00000444);

INCLUDE_ASM("nonmatchings/loadcore", func_00000560);
#endif

#if FW_VERSION >= 350
s32 func_00000770(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_000007D0(void) {
    Kprintf("systable.c:%s: is called.\n", "UndefSyscall");
    return 0x80020001;
}
#endif

#if FW_VERSION >= 282
void func_00000800(s32 arg0, s32 arg1, s32 arg2) {
    func_00000840(arg0, arg1, 0, arg2);
}

void func_00000820(s32 arg0, s32 arg1) {
    func_00000840(arg0, arg1, 1, 0);
}

INCLUDE_ASM("nonmatchings/loadcore", func_00000840);

INCLUDE_ASM("nonmatchings/loadcore", func_000009D4);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", module_bootstart);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00001138);

INCLUDE_ASM("nonmatchings/loadcore", func_000012EC);

INCLUDE_ASM("nonmatchings/loadcore", func_0000132C);

INCLUDE_ASM("nonmatchings/loadcore", func_000013AC);

INCLUDE_ASM("nonmatchings/loadcore", func_000014B0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000014F8);

void sceKernelRegisterLibrary(s32 arg0) {
    func_000014F8(arg0, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000010D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCanReleaseLibrary);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00001830);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00001B6C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1) {
    func_00001830(arg0, arg1, 0, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00001AA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00001560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelUnLinkLibraryEntries);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelUnLinkLibraryEntries(u32 arg0, u32 arg1) {
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = arg0 + ((arg1 >> 2) * 4);
    var_s0 = arg0;
    if (arg0 >= temp_s1) {

    } else {
        do {
            func_00001560((s32) var_s0);
            var_s0 += M2C_FIELD(var_s0, u8 *, 8) * 4;
        } while (var_s0 < temp_s1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetLibraryLinkInfo);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetLibraryList);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelLoadModuleBootLoadCore);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadcore", func_0000201C);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/loadcore", func_00002328);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00002060);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/loadcore", func_00001B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00001770);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelSetBootCallbackLevel);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002220);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
void func_00002220(s32 arg0) {
    sceKernelAllocHeapMemory(func_00000B4C(), arg0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000029B4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadcore", func_000026BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadcore", func_00002A04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000020A0);
#endif

#if FW_VERSION < 282
void sceKernelRegisterLibraryForUser(s32 arg0) {
    func_000014F8(arg0, 1);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00001888);

INCLUDE_ASM("nonmatchings/loadcore", func_00001A00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelReleaseLibrary);
#else
INCLUDE_ASM("nonmatchings/loadcore", func_00000DB8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00000EF4);
#endif

#if FW_VERSION >= 282
void sceKernelRegisterLibrary(s32 arg0) {
    func_00000EF4(arg0, 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_0000141C);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCanReleaseLibrary);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00001B6C);

void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 0);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1) {
    func_00001830(arg0, arg1, 1, 0);
}
#endif

#if FW_VERSION < 270
void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1) {
    func_00001B6C(arg0, arg1, 1);
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void sceKernelLinkLibraryEntriesWithModule(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2) {
    func_00001830(arg1, arg2, 1, arg0->unkD4);
}

s32 sceKernelMaskLibraryEntries(void) {
    return 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00001D1C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_0000175C);
#endif

#if FW_VERSION >= 282
void sceKernelLinkLibraryEntries(s32 arg0, s32 arg1) {
    func_0000175C(arg0, arg1, 0, 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00001990);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelUnLinkLibraryEntries);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", sceKernelMaskLibraryEntries);
#endif

#if FW_VERSION < 150
void *sceKernelQueryLoadCoreCB(void) {
    return &g_loadCore;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelQueryLoadCoreCB);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void *sceKernelQueryLoadCoreCB(void) {
    return &D_00008C40;
}
#endif

#if FW_VERSION < 282
s32 func_00001ECC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 sceKernelLoadCoreMode(void) {
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002C08);

INCLUDE_ASM("nonmatchings/loadcore", func_00002DD8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/loadcore", func_00002B28);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00002350);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_0000245C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00002E84(void) {
    sceKernelIcacheClearAll();
    sceKernelDcacheWBinvAll();
}

void func_00002EA8(void) {
    sceKernelIcacheInvalidateAll();
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002ECC(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002EE8(void) {
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002F04(void) {
    sceKernelIcacheClearAll();
    sceKernelDcacheWBinvAll();
}

void func_00002F28(void *arg0, u32 arg1) {
    sceKernelIcacheInvalidateRange(arg0, arg1);
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

void func_00002F64(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002F80(void *arg0, u32 arg1) {
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadcore", func_00002C28);

INCLUDE_ASM("nonmatchings/loadcore", func_00002DF4);
#endif

#if FW_VERSION == 270
INCLUDE_ASM("nonmatchings/loadcore", func_00003058);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/loadcore", func_00002F9C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadcore", func_00003190);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000034C0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadcore", func_00003050);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00002854);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/loadcore", func_00002CA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00002E18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002260);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/loadcore", func_00002410);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadcore", func_00002B18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00002528);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00001ED4);

INCLUDE_ASM("nonmatchings/loadcore", func_00001F94);

INCLUDE_ASM("nonmatchings/loadcore", func_00002144);

INCLUDE_ASM("nonmatchings/loadcore", func_00002204);

INCLUDE_ASM("nonmatchings/loadcore", func_00002284);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetLibraryLinkInfo);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetLibraryList);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/loadcore", D_00007934);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007938);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000794C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007960);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007974);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007994);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079A0);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079B4);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079CC);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079E0);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079E8);

INCLUDE_RODATA("nonmatchings/loadcore", D_000079FC);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007B54);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007B5C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007B68);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007BA4);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007BC0);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007BCC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelLoadModuleBootLoadCore);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/loadcore", func_00001A6C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/loadcore", func_00001904);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/loadcore", func_00002050);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelSetBootCallbackLevel);
#endif

#if FW_VERSION >= 300
void LoadCoreForKernel_4440853B(void) {
    func_0000665C();
}

void LoadCoreForKernel_FA3101A4(void) {
    func_00006688();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002664);

INCLUDE_ASM("nonmatchings/loadcore", func_0000269C);

INCLUDE_ASM("nonmatchings/loadcore", func_000026EC);
#endif

#if FW_VERSION >= 282
void sceKernelRegisterLibraryForUser(s32 arg0) {
    func_00000EF4(arg0, 1);
}

INCLUDE_ASM("nonmatchings/loadcore", sceKernelReleaseLibrary);

void sceKernelLinkLibraryEntriesForUser(s32 arg0, s32 arg1) {
    func_0000175C(arg0, arg1, 1, 0);
}

void sceKernelLinkLibraryEntriesWithModule(struct Unk_LoadCoreForKernel_C0913394_0 *arg0, s32 arg1, s32 arg2) {
    func_0000175C(arg1, arg2, 1, arg0->unkD4);
}
#endif

#if FW_VERSION == 282
s32 sceKernelMaskLibraryEntries(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
void *sceKernelQueryLoadCoreCB(void) {
    return &D_000097AC;
}
#endif

#if FW_VERSION >= 300
s32 sceKernelLoadCoreMode(void) {
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/loadcore", D_00008060);

INCLUDE_RODATA("nonmatchings/loadcore", D_00008068);

INCLUDE_RODATA("nonmatchings/loadcore", D_000080A8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_00001CF0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/loadcore", func_000023A8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/loadcore", func_00001D40);
#endif

#if FW_VERSION == 282
s32 func_000027F8(void) {
    return 0;
}

s32 sceKernelLoadCoreMode(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00002808);
#endif

#if FW_VERSION < 150
s32 func_000029D8(void *func) {
    D_00007270 = func;
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_000029D8);
#endif

#if FW_VERSION >= 282
void func_00002B40(void) {
    sceKernelIcacheClearAll();
    sceKernelDcacheWBinvAll();
}

void func_00002B64(void) {
    sceKernelIcacheInvalidateAll();
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002B88(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002BA4(void) {
    sceKernelDcacheWritebackInvalidateAll();
}

void func_00002BC0(void) {
    sceKernelIcacheClearAll();
    sceKernelDcacheWBinvAll();
}

void func_00002BE4(void *arg0, u32 arg1) {
    sceKernelIcacheInvalidateRange(arg0, arg1);
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}

void func_00002C20(void) {
    sceKernelDcacheWBinvAll();
}

void func_00002C3C(void *arg0, u32 arg1) {
    sceKernelDcacheWritebackInvalidateRange(arg0, arg1);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_00000EF4);

INCLUDE_ASM("nonmatchings/loadcore", func_0000141C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002C58);

INCLUDE_ASM("nonmatchings/loadcore", func_00002E40);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_00003028);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_0000175C);

INCLUDE_ASM("nonmatchings/loadcore", func_0000287C);

s32 func_00002A5C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_000030DC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_00002CD0);

INCLUDE_ASM("nonmatchings/loadcore", func_00002EA0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadcore", func_000039A8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/loadcore", func_00003008);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_000031C8);
#endif

INCLUDE_ASM("nonmatchings/loadcore", sceKernelCheckPspConfig);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/loadcore", func_00003B74);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002C10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_000028B4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00002AE0);
#endif

#if FW_VERSION < 150
void func_00002AA0(SceLoadCoreExecFileInfo *execInfo, s32 ret) {
    if (ret == 0) {
        execInfo->isDecrypted = 1;
        return;
    }
    execInfo->isDecrypted = 0;
}

u32 func_00002AB8(SceModule *mod) {
    return mod->attribute & 0x1E00;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00002AC4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/loadcore", func_00003138);

INCLUDE_ASM("nonmatchings/loadcore", func_000031BC);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/loadcore", func_0000305C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_0000326C);

INCLUDE_ASM("nonmatchings/loadcore", func_00003290);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/loadcore", func_000034C4);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/loadcore", D_00006CC0);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006CCC);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006CD8);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006D10);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_000036BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/loadcore", func_00003414);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", func_00003450);

INCLUDE_ASM("nonmatchings/loadcore", func_00003534);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCheckExecFile);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadcore", D_00006D58);

INCLUDE_RODATA("nonmatchings/loadcore", D_00006D78);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_0000395C);
#else
INCLUDE_ASM("nonmatchings/loadcore", sceKernelProbeExecutableObject);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/loadcore", func_000031EC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003138);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/loadcore", D_00006E0C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003B18);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/loadcore", sceKernelLoadExecutableObject);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000035D0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000047D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00003D4C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadcore", func_000039E8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/loadcore", D_000071C4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/loadcore", D_00007104);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003B40);

INCLUDE_ASM("nonmatchings/loadcore", func_00003E60);

INCLUDE_ASM("nonmatchings/loadcore", func_00004168);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00004600);

INCLUDE_ASM("nonmatchings/loadcore", func_00004844);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_00003EAC);

INCLUDE_ASM("nonmatchings/loadcore", func_000042DC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadcore", sceKernelApplyElfRelSection);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007234);

INCLUDE_RODATA("nonmatchings/loadcore", D_0000724C);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007268);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/loadcore", D_0000728C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 260) || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/loadcore", sceKernelApplyElfRelSection);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/loadcore", D_00007304);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007BC0);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007BD8);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007BF4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007D50);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/loadcore", D_000079C0_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelApplyElfRelSection);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/loadcore", sceKernelApplyPspRelSection);
#endif

#if FW_VERSION >= 310
s32 func_000051C0(s32 arg0) {
    D_00007F08 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000046C4(s32 arg0) {
    D_000079C0 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000039F4(s32 arg0) {
    D_000075B4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_00004404(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_000046EC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/loadcore", D_00007064);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/loadcore", D_00007DCC_v270);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005454);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00004944);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_000079C8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/loadcore", func_0000440C);

INCLUDE_ASM("nonmatchings/loadcore", func_00004630);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", sceKernelLoadExecutableObject);

INCLUDE_ASM("nonmatchings/loadcore", func_00003AA4);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/loadcore", func_00003F4C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/loadcore", func_00003E78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/loadcore", func_00004210);

INCLUDE_ASM("nonmatchings/loadcore", func_00004490);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCreateModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/loadcore", sceKernelAssignModule);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007DCC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/loadcore", sceKernelAssignModule);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/loadcore", D_00007DD8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelReleaseModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleListWithAlloc);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleIdListForKernel);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_000054D0(void) {
    sceKernelCreateUIDtype("SceModule", 0xD8, &D_000079C8, 0, &D_000075B8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_000054D0(void) {
    sceKernelCreateUIDtype("SceModule", 0xD4, &D_000079C8, 0, &D_000075B8);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/loadcore", func_00004F84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/loadcore", D_000073F8);

INCLUDE_RODATA("nonmatchings/loadcore", D_00007418);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleFromUID);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelDeleteModule);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelCreateAssignModule);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelRegisterModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/loadcore", sceKernelReleaseModule);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByName);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByAddress);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleGPByAddressForKernel);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByUID);

INCLUDE_ASM("nonmatchings/loadcore", func_000054B4);
#endif

#if FW_VERSION < 150
void func_00004A00(u32 *src, u32 *dst, u32 size) {
    u32 *end;
    u32 *p;

    if (dst == src)
        return;
    if (dst < src) {
        end = src + (size >> 2);
        while (src < end)
            *dst++ = *src++;
    } else {
        p = src + (size >> 2);
        dst += size >> 2;
        while (src < p)
            *--dst = *--p;
    }
}

void func_00004A80(u32 *p, s32 n) {
    while (n > 0) {
        n--;
        *p++ = 0;
    }
}

INCLUDE_ASM("nonmatchings/loadcore", func_00004AA0);
#endif

#if FW_VERSION < 282
SceUID func_00004B28(SceSysmemUidCB *cb, SceSysmemUidCB *uidWithFunc, s32 funcId, void *ap) {
    sceKernelCallUIDObjCommonFunction(cb, uidWithFunc, funcId, ap);
    return cb->uid;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_00004B50);

INCLUDE_ASM("nonmatchings/loadcore", func_00004BD4);
#endif

#if FW_VERSION == 102
SceModule *sceKernelModuleFromUID(SceUID uid) {
    SceSysmemUidCB *cb;
    SceModule *mod;
    s32 intr;
    s32 ret;

    intr = func_0000665C();
    ret = func_000061BC(uid, g_ModuleType, &cb);
    if (ret < 0) {
        mod = sceKernelFindModuleByUID(uid);
        if (mod == NULL)
            Kprintf("module.c:%s:failed: uid[0x%08x] ret=0x%08x\n", "sceKernelModuleFromUID", uid, ret);
    } else {
        mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    }
    func_00006688(intr);
    return mod;
}
#endif

#if FW_VERSION == 103
SceModule *sceKernelModuleFromUID(SceUID uid) {
    SceSysmemUidCB *cb;
    SceModule *mod;
    s32 intr;
    s32 ret;

    intr = func_0000665C();
    ret = func_00006284(uid, g_ModuleType, &cb);
    if (ret < 0) {
        mod = sceKernelFindModuleByUID(uid);
        if (mod == NULL)
            Kprintf("module.c:%s:failed: uid[0x%08x] ret=0x%08x\n", "sceKernelModuleFromUID", uid, ret);
    } else {
        mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    }
    func_00006688(intr);
    return mod;
}
#endif

#if FW_VERSION == 100
SceModule *sceKernelModuleFromUID(SceUID uid) {
    SceSysmemUidCB *cb;
    SceModule *mod;
    s32 intr;
    s32 ret;

    intr = func_0000665C();
    ret = sceKernelGetUIDcontrolBlockWithType(uid, g_ModuleType, &cb);
    if (ret < 0) {
        mod = sceKernelFindModuleByUID(uid);
        if (mod == NULL)
            Kprintf("module.c:%s:failed: uid[0x%08x] ret=0x%08x\n", "sceKernelModuleFromUID", uid, ret);
    } else {
        mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    }
    func_00006688(intr);
    return mod;
}
#endif

#if FW_VERSION >= 282
s32 func_00004D04(s32 arg0) {
    D_000074B4 = arg0;
    return 0;
}

s32 func_00004D14(s32 arg0) {
    D_000074B8 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/loadcore", LoadCoreForKernel_CDCAA8B2);
#endif

#if FW_VERSION >= 282
s32 func_00004D24(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00004D2C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_00004D54);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/loadcore", func_000059AC);

INCLUDE_ASM("nonmatchings/loadcore", func_00005B68);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/loadcore", func_00004E38);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/loadcore", func_000056E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/loadcore", D_00007308);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/loadcore", func_00005DF0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadcore", func_0000664C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/loadcore", func_00004F80);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/loadcore", func_0000584C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/loadcore", D_000073A0);
#endif

#if FW_VERSION == 100
SceModule *sceKernelCreateModule(void) {
    SceSysmemUidCB *cb;
    SceModule *mod;

    sceKernelCreateUID(g_ModuleType, "module", 0, &cb);
    mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    if (mod == NULL)
        return NULL;
    mod->modId = cb->uid;
    mod->moduleStartThreadPriority = -1;
    mod->moduleStartThreadStacksize = -1;
    mod->moduleStartThreadAttr = -1;
    mod->moduleStopThreadPriority = -1;
    mod->moduleStopThreadStacksize = -1;
    mod->moduleStopThreadAttr = -1;
    mod->moduleRebootBeforeThreadPriority = -1;
    mod->moduleRebootBeforeThreadStacksize = -1;
    mod->moduleRebootBeforeThreadAttr = -1;
    return mod;
}
#endif

#if FW_VERSION == 102
SceModule *sceKernelCreateModule(void) {
    SceSysmemUidCB *cb;
    SceModule *mod;

    func_000061AC(g_ModuleType, "module", 0, &cb);
    mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    if (mod == NULL)
        return NULL;
    mod->modId = cb->uid;
    mod->moduleStartThreadPriority = -1;
    mod->moduleStartThreadStacksize = -1;
    mod->moduleStartThreadAttr = -1;
    mod->moduleStopThreadPriority = -1;
    mod->moduleStopThreadStacksize = -1;
    mod->moduleStopThreadAttr = -1;
    mod->moduleRebootBeforeThreadPriority = -1;
    mod->moduleRebootBeforeThreadStacksize = -1;
    mod->moduleRebootBeforeThreadAttr = -1;
    return mod;
}
#endif

#if FW_VERSION == 103
SceModule *sceKernelCreateModule(void) {
    SceSysmemUidCB *cb;
    SceModule *mod;

    func_00006274(g_ModuleType, "module", 0, &cb);
    mod = (SceModule *)((u8 *)cb + g_ModuleType->size * 4);
    if (mod == NULL)
        return NULL;
    mod->modId = cb->uid;
    mod->moduleStartThreadPriority = -1;
    mod->moduleStartThreadStacksize = -1;
    mod->moduleStartThreadAttr = -1;
    mod->moduleStopThreadPriority = -1;
    mod->moduleStopThreadStacksize = -1;
    mod->moduleStopThreadAttr = -1;
    mod->moduleRebootBeforeThreadPriority = -1;
    mod->moduleRebootBeforeThreadStacksize = -1;
    mod->moduleRebootBeforeThreadAttr = -1;
    return mod;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCreateModule);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/loadcore", D_000073C8);

INCLUDE_RODATA("nonmatchings/loadcore", D_000073D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelAssignModule);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelReleaseModule);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleListWithAlloc);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleIdListForKernel);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/loadcore", func_00005E20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00005E20(void) {
    sceKernelCreateUIDtype("SceModule", 0xD8, &D_000073A0, 0, &D_000077C4);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleFromUID);
#endif

#if FW_VERSION < 150
void sceKernelDeleteModule(SceModule *mod) {
    sceKernelDeleteUID(mod->modId);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelDeleteModule);
#endif

#if FW_VERSION < 150
void func_00004DBC(SceModule *mod) {
    char *name = mod->modName;

    if (mod->moduleBlockId > 0)
        sceKernelRenameUID(mod->moduleBlockId, name);
}

INCLUDE_ASM("nonmatchings/loadcore", sceKernelModuleAssign);

SceModule *sceKernelAllocModule(SceLoadCoreExecFileInfo *execInfo) {
    SceModule *mod;

    mod = sceKernelCreateModule();
    if (mod == NULL)
        return NULL;
    sceKernelModuleAssign(mod, execInfo);
    return mod;
}

void sceKernelFreeModule(SceModule *mod) {
    sceKernelDeleteModule(mod);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelCreateAssignModule);
#endif

#if FW_VERSION < 150
s32 sceKernelRegisterModule(SceModule *mod) {
    SceModule *prev;

    func_00004DBC(mod);
    prev = (SceModule *)&g_loadCore.registeredMods;
    mod->secId = g_loadCore.secModId++;
    for (; prev->next != NULL; prev = prev->next)
        ;
    mod->next = prev->next;
    prev->next = mod;
    g_loadCore.regModCount++;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelRegisterModule);
#endif

#if FW_VERSION < 150
s32 sceKernelReleaseModule(SceModule *mod) {
    SceModule *prev;

    if (mod == NULL)
        return 0x80020324;
    for (prev = (SceModule *)&g_loadCore.registeredMods; prev->next != NULL; prev = prev->next) {
        if (prev->next == mod) {
            prev->next = mod->next;
            g_loadCore.regModCount--;
            return 0;
        }
    }
    Kprintf("module.c:%s:Cannot found modcb 0x%p\n", "sceKernelReleaseModule", mod);
    return 0x80020001;
}

SceModule *sceKernelFindModuleByName(const char *name) {
    s32 intr;
    SceModule *mod;

    intr = func_0000665C();
    mod = func_00004BD4(name);
    func_00006688(intr);
    return mod;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByName);
#endif

#if FW_VERSION < 150
SceModule *sceKernelFindModuleByAddress(u32 addr) {
    SceModule *mod;

    for (mod = g_loadCore.registeredMods; mod != NULL; mod = mod->next) {
        if (addr >= mod->textAddr && addr < mod->textAddr + mod->textSize + mod->dataSize + mod->bssSize)
            return mod;
    }
    return NULL;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByAddress);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleGPByAddressForKernel);
#endif

#if FW_VERSION < 150
SceModule *sceKernelFindModuleByUID(SceUID uid) {
    SceModule *mod;

    for (mod = g_loadCore.registeredMods; mod != NULL; mod = mod->next) {
        if (mod->modId == uid)
            return mod;
        if (mod->secId == uid)
            return mod;
    }
    Kprintf("module.c:%s:0x%08x not found\n", "sceKernelFindModuleByUID", uid);
    return NULL;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", sceKernelFindModuleByUID);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", sceKernelGetModuleListWithAlloc);
#endif

#if FW_VERSION < 150
s32 sceKernelModuleCount(void) {
    return D_00008914;
}

s32 sceKernelGetModuleList(u32 size, SceUID *list) {
    SceModule *mod;

    if (size < g_loadCore.regModCount) {
        Kprintf("module.c:%s:size 0x%x < 0x%x\n", "sceKernelGetModuleList", size, g_loadCore.regModCount);
        return 0x80020145;
    }
    for (mod = g_loadCore.registeredMods; mod != NULL; mod = mod->next)
        *list++ = mod->modId;
    return 0;
}

/* zero words after module.c's strings (start of the next object's .rodata?) */
const u32 g_rodataPad[13] = { 0 };
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_00006280);

s32 func_0000630C(struct Unk_func_0000630C_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/loadcore", func_00006470);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/loadcore", func_00007130);
#endif

INCLUDE_ASM("nonmatchings/loadcore", sceKernelDcacheWBinvAll);

INCLUDE_ASM("nonmatchings/loadcore", sceKernelIcacheClearAll);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005338);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
u8 *func_000057D0(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_000063B4);

u8 *func_00006434(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_0000646C);

INCLUDE_ASM("nonmatchings/loadcore", func_000064E8);

s32 func_00006550(const char *s) {
    s32 len;

    len = 0;
    if (s == NULL)
        return len;
    while (*s++ != '\0')
        len++;
    return len;
}

INCLUDE_ASM("nonmatchings/loadcore", func_00006584);

INCLUDE_ASM("nonmatchings/loadcore", func_000065EC);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/loadcore", func_00007040);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_000055E0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/loadcore", func_000056A4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_000056D8);
#endif

#if FW_VERSION == 150
s32 func_00005858(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (func_000056D8(arg0, 0, 0, 0, 0, &sp0) >= 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 150
s32 func_00005858(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (func_000056D8(arg0, 0, &sp0, 0, 0, 0) >= 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 260
s32 func_00005858(s32 arg0) {
    void *sp0;
    return (func_000056D8(arg0, 0, 0, 0, 0, &sp0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00005B10);
#endif

#if FW_VERSION < 151
s32 func_00005894(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (func_000056D8(arg0, 0, 0, &sp0, 0, 0) >= 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 260
s32 func_00005894(s32 arg0) {
    void *sp0;
    return (func_000056D8(arg0, 0, 0, &sp0, 0, 0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION < 150
s32 func_000058D0(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (func_000056D8(arg0, 0, 0, 0, 0, &sp0) >= 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_0000665C);

INCLUDE_ASM("nonmatchings/loadcore", func_00006688);

INCLUDE_ASM("nonmatchings/loadcore", func_000066B0);

#if FW_VERSION < 282
s32 func_00005998(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_000066E8(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/loadcore", func_000066F0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005C5C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/loadcore", func_00005FF0);

INCLUDE_ASM("nonmatchings/loadcore", func_0000606C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/loadcore", D_00008050);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_000059B0);

INCLUDE_ASM("nonmatchings/loadcore", func_00005C80);

INCLUDE_ASM("nonmatchings/loadcore", func_00005C9C);

INCLUDE_ASM("nonmatchings/loadcore", func_00005D28);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/loadcore", func_00006A38);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/loadcore", func_00005DB4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/loadcore", func_00006A98);

INCLUDE_ASM("nonmatchings/loadcore", func_00006BA4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/loadcore", func_00005DB8);

INCLUDE_ASM("nonmatchings/loadcore", func_00005ED0);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/loadcore", func_00005FF0);

INCLUDE_ASM("nonmatchings/loadcore", func_0000606C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/loadcore", D_00007180);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/loadcore", func_000066FC);

INCLUDE_ASM("nonmatchings/loadcore", func_00006780);

INCLUDE_ASM("nonmatchings/loadcore", func_000067EC);
#endif
