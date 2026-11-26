/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libparse_uri_decls.h"

#if (FW_VERSION >= 150 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000000);
#else
INCLUDE_ASM("nonmatchings/libparse_uri", _is_scheme_char);
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriEscape);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriUnescape);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriParse);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A38);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A3C);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A50);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A60);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A6C);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A9C);
#endif

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002A98);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C38);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002798);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriBuild);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriMerge);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000CDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriSweepPath);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", func_00000D1C);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00000DE8);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000010AC);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000011FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", uri_encoded_lenN);

INCLUDE_ASM("nonmatchings/libparse_uri", uri_decoded_len);

INCLUDE_ASM("nonmatchings/libparse_uri", _userinfo_parse);

INCLUDE_ASM("nonmatchings/libparse_uri", _scheme_parse);

INCLUDE_ASM("nonmatchings/libparse_uri", _hostname_parse);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002B98);
#endif

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002BAC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libparse_uri", sceUriBuild);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriMerge);

INCLUDE_ASM("nonmatchings/libparse_uri", sceUriSweepPath);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00000EC4);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00000F98);

INCLUDE_ASM("nonmatchings/libparse_uri", func_0000124C);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001398);
#else
INCLUDE_RODATA("nonmatchings/libparse_uri", D_000027B4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001310);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_0000170C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libparse_uri", func_000016F0);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001794);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001834);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001490);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001554);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000015FC);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000016A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_000019F8);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001A7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libparse_uri", _path_parse);

INCLUDE_ASM("nonmatchings/libparse_uri", _fragment_parse);

INCLUDE_ASM("nonmatchings/libparse_uri", _portnum_parse);

INCLUDE_ASM("nonmatchings/libparse_uri", _query_parse);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libparse_uri", func_0000175C);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001494);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001610);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000016F0);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001794);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001834);

INCLUDE_ASM("nonmatchings/libparse_uri", func_000018E8);

INCLUDE_ASM("nonmatchings/libparse_uri", func_0000196C);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001AEC);
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B2C);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B58);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001B84);

#if FW_VERSION < 282
M2C_UNK *func_0000181C(void) {
    return &D_00002A19;
}
#else
M2C_UNK *func_00001B98(void) {
    return &D_00002E11;
}
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00001BA4);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001868);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001860);
#endif

#if FW_VERSION < 282
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
#else
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001BDC);

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

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libparse_uri", func_00001DEC);
#endif

#if FW_VERSION < 282
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
#else
INCLUDE_ASM("nonmatchings/libparse_uri", func_00002174);

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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002D14);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002BF4);
#endif

INCLUDE_ASM("nonmatchings/libparse_uri", func_00002240);

INCLUDE_ASM("nonmatchings/libparse_uri", func_00002984);

INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C20);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C30);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002C28);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002CC8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002D48);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002874);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/libparse_uri", D_00002824);
#endif
