/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libparse_uri_decls.h"

INCLUDE_ASM("nonmatchings/libparse_uri", func_00000000);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriEscape);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriUnescape);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriParse);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A98);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002798);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriBuild);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000CDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000D1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000DE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000010AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000011FC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002B98);
#endif

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002BAC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_000027B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001310);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001490);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001554);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000015FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000016A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_0000175C);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriBuild);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriMerge);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriSweepPath);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000EC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000F98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_0000124C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001398);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001494);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001610);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000016F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001794);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001834);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_000018E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_0000196C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001AEC);
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B2C);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B58);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B84);

#if FW_VERSION == 100
M2C_UNK *func_0000181C(void) {
    return &D_00002A19;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_00001B98(void) {
    return &D_00002E11;
}
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001BA4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001860);
#endif

#if FW_VERSION == 100
u8 *func_000018A0(u8 *arg0, u8 *arg1, s32 arg2) {
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001BDC);
#endif

#if FW_VERSION != 100
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
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001C58);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001C84);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001D24);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001DA4);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001E80);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001EC8);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001EFC);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001F64);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00002144);

#if FW_VERSION == 100
u8 *func_00001DE4(u8 *arg0, u8 *arg1) {
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00002174);
#endif

#if FW_VERSION != 100
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
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_000021F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00002240);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002BF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libparse_uri", func_00002240);
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00002984);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C20);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002824);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C28);
#endif
