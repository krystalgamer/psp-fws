/* cflags: -Os */
#include "common.h"
#include "game_install_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000000AC);

#if FW_VERSION >= 350
void func_0000010C(void) {
    scePaf_3308156F();
}
#else
void func_0000010C(void) {
    sce_paf_private_memcpy();
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", module_start);

s32 module_stop(void) {
    func_0000334C();
    return 0;
}

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000178);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000036D8);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000036DC);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000036F0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003708);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003718);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003730);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000373C);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000374C);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003760);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003780);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000037A4);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003840);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003844);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003860);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000386C);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000389C);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000038C4);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000038D4);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_000038E0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003924);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003934_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003934_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003934_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003930);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003934);
#endif

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003968);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003978);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000398C);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_0000399C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000019C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000288);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000002A8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000404);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000434);

void func_00000588(void) {
}

void func_00000590(void) {
}

s32 func_00000598(void) {
    return __builtin_allegrex_min(func_00001744(D_000040C8, (s32) &D_000040DC, 0x100), 0);
}

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A00);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A04);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000005CC);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000778);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000800);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A54);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A70);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A80);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003A98);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003AA8);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003AC8);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003AE0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003B04);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003B24);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003B44);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003B68);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003B88);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003BA0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003BC0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003BE0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003C04);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003C24);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003C44);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000092C);

void func_00000A00(void) {
    func_00001710(0);
}

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000A1C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000B60);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000B80);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000BF4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000C88);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000D20);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000DE4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000EB0);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000F98);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00000FC8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000012B0);

#if FW_VERSION >= 350
void func_000012E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_000013CC(arg0, arg1, var_v0);
}
#else
void func_000012E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_000013CC(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001330);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000013CC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001490);
#else
void func_00001490(M2C_UNK **arg0) {
    *arg0 = &D_00003CC0;
    _ZdlPv();
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000014B8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000014D4);

#if FW_VERSION >= 350
void func_000014E0(void) {
    scePaf_7EED9087();
}
#else
void func_000014E0(void) {
    sce_paf_private_memalign();
}
#endif

#if FW_VERSION >= 350
void func_000014FC(void) {
    scePaf_4729E549();
}
#else
void func_000014FC(void) {
    sce_paf_private_free();
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001518);

void func_000015B8(s32 arg0) {
    D_000041E4 = arg0;
}

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000015C4);

#if FW_VERSION >= 350
void func_000015D0(void) {
    scePaf_B1975FE1();
}
#else
void func_000015D0(void) {
    sce_paf_private_strncmp();
}
#endif

#if FW_VERSION >= 350
void func_000015EC(void) {
    scePaf_C1B0AA0D();
}
#else
void func_000015EC(void) {
    sce_paf_private_strlen();
}
#endif

#if FW_VERSION >= 350
void func_00001608(void) {
    scePaf_9479C11B();
}
#else
void func_00001608(void) {
    sce_paf_private_memset();
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001624);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000016A4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001710);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003CC0);

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003CC8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001744);

#if FW_VERSION >= 350
void func_0000183C(void) {
    sceUtility_private_C36E3C16();
}
#else
void func_0000183C(void) {
    sceUtility_private_5BA71568();
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001858);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000193C);

#if FW_VERSION >= 350
void func_000019F0(void) {
    func_000015B8(1);
    scePaf_3EDD45EF(0, &func_00001A34, D_000040C8, -1, -1, &func_00001B1C);
}
#else
void func_000019F0(void) {
    func_000015B8(1);
    Job_Start(0, &func_00001A34, D_000040C8, -1, -1, &func_00001B1C);
}
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001A34);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001B1C);
#endif

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003CF0);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003ED0);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001B1C);
#endif

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001C18);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001CD4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001D98);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001EC0);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001FA4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00001FD8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000206C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000209C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000023F4);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002464);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002508);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002598);

void func_000026D4(void) {
    sceDRMInstallInstall();
}

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000026F0);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002794);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002858);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000289C);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_000029F8);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002A54);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002B28);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002C10);

M2C_UNK *func_00002CF8(void) {
    return &D_000041FC;
}

void func_00002D04(void) {
    sceDRMInstallAbort();
}

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002D20);

INCLUDE_ASM("nonmatchings/game_install_plugin", func_00002D78);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_install_plugin", func_0000334C);
#endif

INCLUDE_RODATA("nonmatchings/game_install_plugin", D_00003F38);
