#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00002828);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00001DB8);
#else
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

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_002828", func_00001F4C);
#else
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
