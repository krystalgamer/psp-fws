/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_0007495C(M2C_UNK **arg0) {
    *arg0 = &D_000B48E0;
    func_00075144();
    *arg0 = &D_000AF3E8;
}

void func_00074998(M2C_UNK **arg0) {
    *arg0 = &D_000B48E0;
    func_00075144();
    *arg0 = &D_000AF3E8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000749D4);
#else
void func_000749D4(M2C_UNK **arg0) {
    *arg0 = &D_000B48E0;
    func_00075144();
    *arg0 = &D_000AF3E8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074A18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074A58);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074A98);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074AD8);
#endif

void func_00074DEC(void) {
    func_00075144();
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074E08);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074F60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075144);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075218);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075244);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000752B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000752D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075428);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000754D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075590);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075648);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00074BEC);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075830);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_0007587C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000758B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075910);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000759B0);
#else
void func_000759B0(void) {
    scePaf_CB4C96CE();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000759CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075A80);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075AFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00075FE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00076088);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000760B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_0007614C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_00076178);

void func_000761A4(M2C_UNK **arg0) {
    *arg0 = &D_000B4A08;
}

void func_000761B4(M2C_UNK **arg0) {
    *arg0 = &D_000B4A08;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07495C", func_000761C4);
#else
void func_000761C4(M2C_UNK **arg0) {
    *arg0 = &D_000B4A08;
    scePaf_6261C0A5((s32) arg0);
}
#endif
