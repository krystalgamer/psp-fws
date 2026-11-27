/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003ADC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00003ADC(void) {
    s32 temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000572A0);
    if (temp_v0 != 0) {
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0, (s32) &func_00003A28);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003B18);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003C68);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003C88);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003D28);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00003F64);

s32 func_00004038(void) {
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00004258);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00004040);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_000040E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00004380);

void func_000043AC(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 2;
    var_s0 = arg0 + 0x18;
    do {
        var_s1 -= 1;
        func_00004918(var_s0);
        var_s0 += 0x10;
    } while (var_s1 >= 0);
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_000043EC);
#else
void func_0000414C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg2 * 4) + arg0), s32 *, 0x74) = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_0000415C);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_0000425C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_003ADC", D_00040108);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_003ADC", D_000400C8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_003ADC", D_00040238);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_003ADC", D_00040B08);
#endif

s32 func_00004308(void) {
    return 0;
}

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_003ADC", func_00004048);
#endif
