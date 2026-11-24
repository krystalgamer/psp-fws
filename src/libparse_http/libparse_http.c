/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libparse_http_decls.h"

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", sceParseHttpStatusLine);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", sceParseHttpResponseHeader);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000003A0);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000510);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000005A0);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_0000061C);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000006C4);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000006F0);

M2C_UNK *func_00000704(void) {
    return &D_00000D61;
}

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000710);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000007B0);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_0000090C);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000954);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000988);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_000009F0);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000BD0);

INCLUDE_ASM("tmp/asm/282/libparse_http/nonmatchings/libparse_http", func_00000C00);

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
