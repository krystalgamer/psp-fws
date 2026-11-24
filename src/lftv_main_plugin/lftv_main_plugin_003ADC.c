/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

s32 func_00003ADC(void) {
    s32 temp_v0;

    temp_v0 = scePaf_D4FAE7D0(&D_000572A0);
    if (temp_v0 != 0) {
        scePaf_1A45C860(temp_v0, (s32) &func_00003A28);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003B18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003C68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003C88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003D28);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003F64);

s32 func_00004038(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00004040);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_000040E0);

void func_0000414C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg2 * 4) + arg0), s32 *, 0x74) = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_0000415C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_0000425C);

s32 func_00004308(void) {
    return 0;
}

