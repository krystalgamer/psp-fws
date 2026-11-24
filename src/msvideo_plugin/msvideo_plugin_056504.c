/* cflags: -O1 */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION != 100
s32 func_00056504(struct Unk_func_00056504_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    struct Unk_func_00056504_temp_a0 *temp_a0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk160;
        var_v0 = 7;
        if (temp_a0 != NULL) {
            temp_a0->unk24 = arg3;
            var_v0 = 0;
            temp_a0->unk1C = arg1;
            temp_a0->unk20 = arg2;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
s32 func_00056530(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
s32 func_0005653C(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00056548(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00056554(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00056560(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
s32 func_0005656C(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_056504", func_00056578);
#endif

#if FW_VERSION != 100
s32 func_000565E8(struct Unk_func_000565E8_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_056504", func_000565F0);
#endif

#if FW_VERSION != 100
s32 func_00056660(struct Unk_func_00056660_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
s32 func_00056668(struct Unk_func_00056668_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
void func_00056670(struct Unk_func_00056670_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
    if (arg3 != NULL) {
        *arg3 = arg0->unk30;
    }
    if (arg4 != NULL) {
        *arg4 = arg0->unk34;
    }
}
#endif

#if FW_VERSION != 100
void func_000566B8(struct Unk_func_000566B8_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
    if (arg3 != NULL) {
        *arg3 = arg0->unk30;
    }
    if (arg4 != NULL) {
        *arg4 = arg0->unk34;
    }
}
#endif

#if FW_VERSION != 100
void func_00056700(struct Unk_func_00056700_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk20;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk24;
    }
}
#endif

#if FW_VERSION != 100
void func_00056728(struct Unk_func_00056728_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk20;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk24;
    }
}
#endif

#if FW_VERSION != 100
void func_00056750(struct Unk_func_00056750_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
}
#endif

#if FW_VERSION != 100
void func_00056778(struct Unk_func_00056778_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = arg0->unk28;
    }
    if (arg2 != NULL) {
        *arg2 = arg0->unk2C;
    }
}
#endif

