/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags[152]: -Os -frename-registers */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libparse_http_decls.h"

INCLUDE_ASM("nonmatchings/libparse_http", sceParseHttpStatusLine);

INCLUDE_ASM("nonmatchings/libparse_http", sceParseHttpResponseHeader);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D08);

INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D0C);

INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D20);

INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D30);

INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D40);

INCLUDE_RODATA("nonmatchings/libparse_http", D_00000D50);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libparse_http", func_000003A0);

INCLUDE_ASM("nonmatchings/libparse_http", func_00000510);

INCLUDE_ASM("nonmatchings/libparse_http", func_000005A0);

INCLUDE_ASM("nonmatchings/libparse_http", func_0000061C);
#else
INCLUDE_ASM("nonmatchings/libparse_http", func_000002D8);

INCLUDE_ASM("nonmatchings/libparse_http", func_0000044C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_http", func_000004DC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libparse_http", strncmp_uc);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_http", func_00000564);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libparse_http", func_000005F0);
#endif

INCLUDE_ASM("nonmatchings/libparse_http", func_000006C4);

INCLUDE_ASM("nonmatchings/libparse_http", func_000006F0);

#if FW_VERSION < 282
M2C_UNK *func_0000065C(void) {
    return &D_00000C41;
}
#else
M2C_UNK *func_00000704(void) {
    return &D_00000D61;
}
#endif

INCLUDE_ASM("nonmatchings/libparse_http", func_00000710);

INCLUDE_ASM("nonmatchings/libparse_http", func_000007B0);

INCLUDE_ASM("nonmatchings/libparse_http", func_0000090C);

INCLUDE_ASM("nonmatchings/libparse_http", func_00000954);

INCLUDE_ASM("nonmatchings/libparse_http", func_00000988);

INCLUDE_ASM("nonmatchings/libparse_http", func_000009F0);

INCLUDE_ASM("nonmatchings/libparse_http", func_00000BD0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_http", func_00000C28);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libparse_http", func_00000B4C_v152);
#endif

#if FW_VERSION < 282
u8 *func_00000B4C(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#else
INCLUDE_ASM("nonmatchings/libparse_http", func_00000C00);

u8 *func_00000C48(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif
