#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002828);

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000022E8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0000398C() == 2) {
        scePaf_CAF05F1D(D_000080A4, D_00007E48);
    }
    if (arg2 == 0) {
        if (arg0 != 0) {
            scePaf_1A45C860(arg0, func_0000280C);
        } else {
            scePaf_6844744A(arg1, func_0000280C);
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002380);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00001DB8);
#endif

#if FW_VERSION == 282
s32 func_00002930(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0000398C() == 2) {
        scePaf_CAF05F1D(D_000080A4, D_00007E48);
    }
    if (arg2 == 0) {
        if (arg0 != 0) {
            scePaf_1A45C860(arg0, func_0000280C);
        } else {
            scePaf_6844744A(arg1, func_0000280C);
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_000029C8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002A28);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00001EEC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00001EEC(void) {
    void *sp0;
    s32 temp_v0;

    D_0000716C = func_00001840();
    temp_v0 = sceKernelCreateCallback(&D_00005BF0, (s32) &func_00002380, NULL);
    D_00006700 = temp_v0;
    if (temp_v0 > 0) {
        sceVshBridge_13AEE247(2, temp_v0);
    }
    func_00003F6C();
    func_00004008((s32) &D_0000513C, (s32) &D_0000512C, &sp0);
    if (sp0 != 0) {
        func_000024FC();
    } else {
        func_000039B0(4);
        func_000024AC();
    }
}
#endif

#if FW_VERSION == 260
void func_00001EEC(void) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = sceKernelCreateCallback(&D_00005BF0, (s32) &func_00002380, NULL);
    D_00006700 = temp_v0;
    if (temp_v0 > 0) {
        sceVshBridge_13AEE247(2, temp_v0);
    }
    func_00003F6C();
    func_00004008((s32) &D_0000513C, (s32) &D_0000512C, &sp0);
    if (sp0 != 0) {
        func_000024FC();
    } else {
        func_000039B0(4);
        func_000024AC();
    }
}
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00001F4C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00001F4C(void) {
    if (D_000066F9 != 0) {
        func_00000678(0);
    }
    if (func_0000398C() >= 2) {
        func_00001478(1, D_00006DFC != 0, D_00006E00 != 0, (s32) (u8) D_0000716C);
    }
    func_000052C8(0);
    func_00005354();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002B08);

void func_00002BF4(void) {
    if (D_000081CD != 0) {
        func_00000660(0);
    }
    if (func_0000398C() >= 2) {
        func_00001418(1, D_00007E4C != 0, D_00007E50 != 0, (s32) D_000081CC);
    }
    func_000052C8(0);
    func_00005354();
    func_00001890(0);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002C80);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002D4C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002D70);

void func_00002E44(void) {
    func_00002D70(1, 0xFFFF);
}

void func_00002E64(void) {
    func_00002D70(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002E84);
