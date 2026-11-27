/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "htmlviewer_plugin_decls.h"

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004788);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000071BC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000071C8);
#endif

#if FW_VERSION == 282
s32 func_00004788(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = -4;
    if (D_00008240 == 2) {
        var_a1 = -1;
        if (arg0 == 0) {
            temp_v0 = func_00000D38(2);
            D_00008240 = temp_v0;
            var_a1 = -5;
            if ((u32) (temp_v0 - 3) < 2U) {
                D_00008244 = 3;
                var_a1 = 0;
            }
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000047F8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000048C8);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000049A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000049E8);
#endif

#if FW_VERSION < 270 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007558);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003518);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_0000356C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_0000356C(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = -4;
    if (D_00005C00 == 2) {
        var_a1 = -1;
        if (arg0 == 0) {
            temp_v0 = func_00000D38(2);
            D_00005C00 = temp_v0;
            var_a1 = -5;
            if ((u32) (temp_v0 - 3) < 2U) {
                D_00005C04 = 3;
                var_a1 = 0;
            }
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION == 260
s32 func_0000356C(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = -4;
    if (D_00005C00 == 2) {
        var_a1 = -1;
        if (arg0 == 0) {
            temp_v0 = func_00000D38(1);
            D_00005C00 = temp_v0;
            var_a1 = -5;
            if ((u32) (temp_v0 - 3) < 2U) {
                D_00005C04 = 3;
                var_a1 = 0;
            }
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000035DC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000036AC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003788);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000037CC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003854);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000038A8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000038A8(s32 arg0, s32 arg1) {
    func_00003788(arg0, arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000038C4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003A28);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003AAC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003C14);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003C80);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003CE4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000044A4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000050D0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00003E18);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000052C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00005324);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00005324(void) {
    sceKernelWaitEventFlag(D_00008E64, 0x100U, 0, NULL, NULL);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00005354);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00005354(void) {
    sceHtmlViewerHelper_C92C71B7(0);
}
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007568);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007574);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007580);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000758C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000759C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075E0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006744);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006754);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006760);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000075FC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007608);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009710);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009720);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009730);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000973C);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009D94);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007618);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006860);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006870);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006888);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006898);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068E8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000068F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006908);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006914);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006924);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006938);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006948);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006958);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006968);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006978);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006988);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006998);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000069A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000069B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000069C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007708);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007718);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007730);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007740);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007750);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007760);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007770);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007780);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000778C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000779C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000077B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000077C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000077D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000077E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000077F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007800);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007810);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007820);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007830);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007840);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000078D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000078DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000078EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000078F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007904);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007910);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007924);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000793C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007948);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006AF4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007954);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000795C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007968);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007970);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007978);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000798C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000AFCC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_0000AFE0);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079A0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079C8);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006B28);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079CC);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079D0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006144);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006148);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079DC);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079E8);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079F0);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_000079F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007A98);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007AB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007AC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007ADC);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007AF4);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B08);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B20);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B38);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B50);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009CB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00009CC8);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B68);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B70);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B7C);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B84);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007B90);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007BA8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007BC8);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007BE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00007C04);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/htmlviewer_plugin_004788", D_00006D3C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004ABC);

void func_00004B54(void) {
    func_000049A4();
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004B70);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000087B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004CD4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_0000664C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004D58);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004EDC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004F50);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00004FB4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00005014);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000050D0);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00005238);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_000052C8);

void func_00005324(void) {
    sceKernelWaitEventFlag(D_00008E64, 0x100U, 0, NULL, NULL);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_004788", func_00005354);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00005354(void) {
    sceHtmlViewerHelper_C92C71B7(0);
}
#endif
