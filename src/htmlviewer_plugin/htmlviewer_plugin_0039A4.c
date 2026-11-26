#include "common.h"
#include "htmlviewer_plugin_decls.h"

#if FW_VERSION >= 282
s32 func_000039A4(void) {
    return D_00008244;
}

void func_000039B0(s32 arg0) {
    D_00008B90 = arg0;
}

s32 func_000039BC(void) {
    return D_00008B90;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000056A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000056B0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000039C8);

u8 func_000039D4(void) {
    return D_00007F51;
}

void func_000039E0(void) {
    if ((u32) (D_00008240 - 2) >= 4U) {

    } else {
        sceHVUI_Module_789FBBA8();
    }
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_0000570C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003A18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003A8C);

void func_00003B28(void) {
    switch (D_00008240) {                           /* irregular */
    case 4:
        if (D_00007F51 != 0) {
        case 2:
            if (D_00008BB8 != 0) {
                sceHVUI_Module_3ADFED08(D_00008BB8, 0);
                D_00008BB8 = 0;
            }
        }
        break;
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000063B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003B90);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003BDC);

void func_00003D3C(s8 arg0) {
    D_00008B94 = arg0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003D48);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00005AAC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003D74);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
M2C_UNK *func_00005554(void) {
    return "http://manuals.playstation.net/document/pspindex.html";
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003D9C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003E2C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00004008);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00005EA0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000058EC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_0000411C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000042C4);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00003FD4);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000032A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000043F8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000044CC);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00005D94);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00006EE0);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00004554);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000045D8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00004688);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000042A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_000046E4);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_0039A4", func_00004788);
#endif
