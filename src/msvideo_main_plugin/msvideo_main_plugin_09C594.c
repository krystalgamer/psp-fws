/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_0009C594(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = arg5 & 3;
    var_v1 = 6;
    if (temp_v0 < 3U) {
        var_v1 = func_0009BDF0(arg0, arg1, arg2, arg3, arg4, (s32) temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009C5CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009C670);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009CAE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009CCF8);

s32 func_0009CDD4(void) {
    func_000801B8();
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009CDF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009CF5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D1B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D250);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D314);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D5F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D6BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009D8BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009DADC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009DB58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009DD70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009DF04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009E014);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009E224);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009E440);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009E604);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009E7D8);

s32 func_0009E9F4(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_000996D0((s32) arg0, arg1, arg2);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009EA2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009EA68);

s32 func_0009ED80(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009A664(arg0, arg1);
    }
    return var_v1;
}

s32 func_0009EDAC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 4;
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        var_v0 = func_0009A7C8(arg0, arg1, arg2);
    }
    return var_v0;
}

s32 func_0009EDDC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009AB90(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_0009EE08(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009ADBC(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_0009EE34(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009B028(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_0009EE60(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009B17C(arg0, arg1);
    }
    return var_v1;
}

s32 func_0009EE8C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009B304(arg0, arg1 & 0xFFFF, arg2);
    }
    return var_v1;
}

s32 func_0009EEBC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009B41C(arg0, arg1 & 0xFFFF, arg2);
    }
    return var_v1;
}

s32 func_0009EEEC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009B534(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009EF18);

s32 func_0009EF50(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009B8AC((s32) arg0);
        }
    }
    return var_v1;
}

s32 func_0009EF88(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009B8D4((s32) arg0, arg1, arg2);
        }
    }
    return var_v1;
}

s32 func_0009EFC0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009BAEC(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_0009EFEC(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009BB68(arg0, arg1 & 0xFFFF);
    }
    return var_v1;
}

s32 func_0009F01C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009BB80(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F048);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F0A0);

s32 func_0009F0D0(struct Unk_func_0009BD64_0 *arg0, s16 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_0009BD64(arg0, arg1);
    }
    return var_v1;
}

s32 func_0009F100(s32 arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009BD70(arg0);
    }
    return var_v1;
}

s32 func_0009F12C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009BDF0(arg0, arg1, arg2, arg3, arg4, arg5);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F158);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F184);

s32 func_0009F338(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009C594(arg0, arg1, arg2, arg3, arg4, arg5);
    }
    return var_v1;
}

s32 func_0009F364(s32 arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009C5CC(arg0);
    }
    return var_v1;
}

s32 func_0009F390(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009C670((s32) arg0);
        }
    }
    return var_v1;
}

s32 func_0009F3C8(s32 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009CAE4((s32) arg0, arg1);
        }
    }
    return var_v1;
}

s32 func_0009F400(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009CCF8((s32) arg0, arg1, arg2);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F438);

s32 func_0009F464(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009CDF4((s32) arg0, arg1, arg2, arg3, arg4);
        }
    }
    return var_v1;
}

s32 func_0009F49C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != 0) {
        var_v1 = func_0009CF5C(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F4C8);

s32 func_0009F63C(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009D5F0((s32) arg0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F674);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F6B4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F6F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F744);

s32 func_0009F794(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009E440((s32) arg0, arg1, arg2);
        }
    }
    return var_v1;
}

s32 func_0009F7CC(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009E604((s32) arg0, arg1, arg2);
        }
    }
    return var_v1;
}

s32 func_0009F804(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0009E7D8((s32) arg0);
        }
    }
    return var_v1;
}

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F83C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
s32 func_0009F83C(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 6;
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        temp_v0 = scePaf_5FAC9869(0x1C);
        var_v1 = 1;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, s32 *, 0) = arg0;
            var_v1 = 0;
            M2C_FIELD(temp_v0, s32 *, 0xC) = arg1;
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
            M2C_FIELD(temp_v0, s32 *, 8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            *arg2 = temp_v0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 352
s32 func_0009F83C(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 6;
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        temp_v0 = scePaf_3AC3E06A(0x1C);
        var_v1 = 1;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, s32 *, 0) = arg0;
            var_v1 = 0;
            M2C_FIELD(temp_v0, s32 *, 0xC) = arg1;
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
            M2C_FIELD(temp_v0, s32 *, 8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            *arg2 = temp_v0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_09C594", func_0009F8C4);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void func_0009F8C4(s32 *arg0) {
    s32 temp_s0;
    s32 var_s1;

    var_s1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_s1 != 0) {
        do {
            temp_s0 = func_000A0020(var_s1);
            func_0009FFC4(var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != 0);
    }
    if (arg0 != NULL) {
        scePaf_545FE2DA((s32) arg0);
    }
}
#endif

#if FW_VERSION == 352
void func_0009F8C4(s32 *arg0) {
    s32 temp_s0;
    s32 var_s1;

    var_s1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_s1 != 0) {
        do {
            temp_s0 = func_000A0020(var_s1);
            func_0009FFC4(var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != 0);
    }
    if (arg0 != NULL) {
        scePaf_4729E549(arg0);
    }
}
#endif

s32 func_0009F928(struct Unk_func_0009F928_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk4;
    return 0;
}
