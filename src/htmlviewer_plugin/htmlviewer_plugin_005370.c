#include "common.h"
#include "htmlviewer_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005370);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007CAC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007CCC);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007CDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_000053D4);

void func_00005488(void) {
    func_000052C8(0);
    func_00005354();
    func_00005324();
    if (D_00008E64 != 0) {
        sceKernelDeleteEventFlag(D_00008E64);
        D_00008E64 = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_000054DC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_C92C71B7);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_232F5D22);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_E26BCED1);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_5F1A7733);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_F27998C2);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", sceHtmlViewerHelper_47F988E6);

s32 sceHtmlViewerHelper_55732F91(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 == 0) {
        var_v0 = M2C_FIELD(D_00008C00, s32 *, 4);
    }
    return var_v0;
}

void sceHtmlViewerHelper_05E0C3D4(s32 arg0) {
    func_000039C8((arg0 & 0xFF) ^ 1);
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_000058D4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005948);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_000059C0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005B2C);

s32 func_00005BA0(M2C_UNK **arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        *arg1 = D_00009274;
        *arg0 = &D_000091F4;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005BDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005C28);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005C64);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005CC8);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005CDC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005D24);

s8 *func_00005D6C(s8 *arg0) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_00005D24(var_a0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005DB0);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005E30);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005ECC);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005EF4);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005F20);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00005FE0);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007D38);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007D54);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007D68);

INCLUDE_RODATA("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", D_00007D74);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00006044);

INCLUDE_ASM("tmp/asm/282/htmlviewer_plugin/nonmatchings/htmlviewer_plugin_005370", func_00006164);
