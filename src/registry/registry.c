/* cflags[100]: -Os */
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
    D_00006FC4 = 0;
    D_00006FC8 = 0;
    D_00006FCC = 0;
    D_00006FD0 = 0;
    D_00006FD4 = 0;
    D_00006FD8 = 0;
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
        sceKernelWaitSema(D_0000674C, 1, NULL);
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
    s32 var_s0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    var_s0 = 0x80082733;
    if (sceKernelWaitSema(D_0000671C, 1, NULL) == 0) {
        var_s0 = func_000006CC(arg0);
    }
    if (sceKernelSignalSema(D_0000671C, 1) != 0) {
        var_s0 = 0x80082734;
    }
    setK1(temp_s1);
    return var_s0;
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
    s32 var_s0;
    u32 temp_s1;

    temp_s1 = shiftK1();
    var_s0 = 0x80082733;
    if (sceKernelWaitSema(D_0000671C, 1, NULL) == 0) {
        var_s0 = func_000008E4(arg0);
        if (sceKernelSignalSema(D_0000671C, 1) != 0) {
            var_s0 = 0x80082734;
        }
    }
    setK1(temp_s1);
    return var_s0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_000008E4);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000B88);
#else
INCLUDE_ASM("nonmatchings/registry", func_000009F8);

INCLUDE_ASM("nonmatchings/registry", func_00000B6C);

INCLUDE_ASM("nonmatchings/registry", func_00000BC8);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00000C50);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00000CA0);
#else
INCLUDE_ASM("nonmatchings/registry", func_00000D10);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00000D7C);

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

INCLUDE_ASM("nonmatchings/registry", func_00001828);

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
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/registry", func_00001908);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001908(s32 arg0, s32 **arg1, s32 **arg2) {
    if (arg0 == 1) {
        *arg1 = "/registry/system.ireg";
        *arg2 = "/registry/system.dreg";
        return;
    }
    *arg1 = NULL;
    *arg2 = NULL;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00001938);
#else
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

INCLUDE_ASM("nonmatchings/registry", func_00001B7C);

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

INCLUDE_ASM("nonmatchings/registry", func_000039E0);

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

INCLUDE_ASM("nonmatchings/registry", func_00003D1C);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003604);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/registry", func_00003910);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/registry", func_00003DAC);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003E60);

INCLUDE_ASM("nonmatchings/registry", func_00003EA4);

#if FW_VERSION < 282
s32 func_00003A3C(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00000B6C();
    var_v0 = 0x80082715;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 7) = 0;
        M2C_FIELD(temp_v0, s8 *, 5) = 0;
        M2C_FIELD(temp_v0, s8 *, 6) = 0;
        M2C_FIELD(temp_v0, s8 *, 4) = 1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/registry", func_00003A80);
#endif

#if FW_VERSION == 100
s32 func_00003A80(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
s32 func_00003EE8(void) {
    s32 var_v0;
    struct Unk_func_00003EE8_temp_v0 *temp_v0;

    temp_v0 = func_00000B6C();
    var_v0 = 0x80082715;
    if (temp_v0 != NULL) {
        temp_v0->unk7 = 0;
        temp_v0->unk5 = 0;
        temp_v0->unk6 = 0;
        temp_v0->unk4 = 1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/registry", func_00003F2C);
#endif

INCLUDE_ASM("nonmatchings/registry", func_00003FE4);

#if FW_VERSION >= 282
s32 func_00004024(void) {
    s32 var_v0;
    struct Unk_func_00004024_temp_v0 *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = 0;
        var_v0 = 0;
    }
    return var_v0;
}
#else
s32 func_00004058(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00003EA4();
    var_v0 = 0x8008272E;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        var_v0 = 0;
    }
    return var_v0;
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
    s32 var_s0;
    u32 temp_s5;

    temp_s5 = shiftK1();
    var_s0 = 0x80082733;
    if (sceKernelWaitSema(D_0000671C, 1, NULL) == 0) {
        var_s0 = func_00004A28(arg0, arg1, arg2, arg3, arg4);
    }
    if (sceKernelSignalSema(D_0000671C, 1) != 0) {
        var_s0 = 0x80082734;
    }
    setK1(temp_s5);
    return var_s0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/registry", sceRegGetKeyInfoByName);
#else
s32 sceRegGetKeyInfoByName(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 var_s0;
    u32 temp_s4;

    temp_s4 = shiftK1();
    var_s0 = 0x80082733;
    if (sceKernelWaitSema(D_0000671C, 1, NULL) == 0) {
        var_s0 = func_00004A28(arg0, arg1, &sp0, arg2, arg3);
    }
    if (sceKernelSignalSema(D_0000671C, 1) != 0) {
        var_s0 = 0x80082734;
    }
    setK1(temp_s4);
    return var_s0;
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
    s32 var_s0;
    u32 temp_s2;

    temp_s2 = shiftK1();
    var_s0 = 0x80082733;
    if (sceKernelWaitSema(D_0000671C, 1, NULL) == 0) {
        var_s0 = func_000046A8(arg0, arg1);
        if (sceKernelSignalSema(D_0000671C, 1) != 0) {
            var_s0 = 0x80082734;
        }
    }
    setK1(temp_s2);
    return var_s0;
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

INCLUDE_ASM("nonmatchings/registry", func_00006524);

INCLUDE_ASM("nonmatchings/registry", func_000065E4);

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

INCLUDE_ASM("nonmatchings/registry", func_00006888);

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

INCLUDE_ASM("nonmatchings/registry", func_000069A0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/registry", func_00006228);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00006228(void) {
    if (D_000066F0 >= 0) {
        sceKernelDeleteVpl(D_000066F0);
        D_000066F0 = -1;
    }
}
#endif

#if FW_VERSION >= 282
void func_00006A0C(void) {
    if (D_00006FB0 >= 0) {
        sceKernelDeleteVpl(D_00006FB0);
        D_00006FB0 = -1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/registry", func_00006A48);

#if FW_VERSION < 282
void func_000062E0(s32 arg0) {
    sceKernelFreeVpl(D_000066F0, arg0);
}
#else
void func_00006AC0(s32 arg0) {
    sceKernelFreeVpl(D_00006FB0, arg0);
}
#endif
