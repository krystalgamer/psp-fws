#include "common.h"
#include "photo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00014B04);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00014D3C);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_000150F0);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_000151D8);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_000152E4);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015354);

void func_00015390(void) {
    if (func_00012D5C() == 0) {
        if (D_00031B40 == 0) {

        } else {
            func_0001B7B4(D_00031B40);
        }
    } else {
        func_0000B8A4();
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_000153E0);

void func_00015440(void) {
    func_00015390();
    scePaf_5EBC648F(D_00031B30, scePaf_CE21D21F(D_00031B30));
}

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015478);

s32 func_000155C0(void) {
    s32 var_v1;
    struct Unk_vt_func_000155C0_temp_v0 **temp_v0;

    D_00031BE4 = 1;
    temp_v0 = scePaf_4708AED4(D_00031B30, &D_0002FEDC);
    var_v1 = 0;
    if (temp_v0 != NULL) {
        (*temp_v0)->unkBC(temp_v0, 0, 0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015620);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015760);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_0001584C);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015980);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015A84);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015CAC);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015EB8);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00015ED4);

void func_000160D4(void) {
    if (D_00031BE8 == 0) {

    } else {
        sceNetAdhocTransInt_83FA2BBA();
    }
}

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00016108);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00016284);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00016760);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_000169B0);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00016B54);

INCLUDE_ASM("nonmatchings/photo_plugin_014B04", func_00016BC4);

