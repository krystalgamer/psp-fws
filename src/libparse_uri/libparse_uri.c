/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libparse_uri_decls.h"

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00000000);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriEscape);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriUnescape);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriParse);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002A98);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002B98);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002BAC);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriBuild);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriMerge);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", sceUriSweepPath);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00000EC4);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00000F98);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_0000124C);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001398);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001494);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001610);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_000016F0);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001794);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001834);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_000018E8);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_0000196C);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001AEC);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001B2C);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001B58);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001B84);

M2C_UNK *func_00001B98(void) {
    return &D_00002E11;
}

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001BA4);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001BDC);

u8 *func_00001C24(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001C58);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001C84);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001D24);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001DA4);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001E80);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001EC8);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001EFC);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00001F64);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00002144);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00002174);

u8 *func_000021BC(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_000021F4);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002BF4);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00002240);

INCLUDE_ASM("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", func_00002984);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002C20);

INCLUDE_RODATA("tmp/asm/282/libparse_uri/nonmatchings/libparse_uri", D_00002C28);
