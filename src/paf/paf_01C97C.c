#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_01C97C", func_0001C97C);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016F7AC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C97C", func_0001C1A8);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00164DF0);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016F5E4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016E724);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016DFA4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016A7CC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00168CCC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00164D44);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00164E04);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00164F40);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00164F70);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024248);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_01C97C", func_0001BEE8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_01C97C", func_0001CA78);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016F890);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016F8A4);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016F9E0);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FA10);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024B9C);
#endif

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024E24);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024E74);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_752F182C);

INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_81817B66);
#else
INCLUDE_ASM("nonmatchings/paf_01C97C", func_0001F474);
#endif

INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_10C1DB70);

INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_01C2FC36);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024B6C);
#endif

#if FW_VERSION == 282
void func_000254C0(void) {
    sceKernelWaitSema(*D_001A4E30, 1, NULL);
}
#endif

void func_000254EC(void) {
    sceKernelSignalSema((s32) *D_001A4E30, 1);
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024BC0);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00024C94);
#endif

#if FW_VERSION < 200
s32 func_0001F918(void) {
    return 1;
}

s32 func_0001F920(void) {
    return 1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_01C97C", func_00025514);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_000255E8);
#endif

INCLUDE_ASM("nonmatchings/paf_01C97C", func_000256E4);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_000257A4);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00025874);

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00025B20);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FAC8);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FAE4);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FAF0);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FB04);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FB1C);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FB3C);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FB54);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0016FB68);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_AAE8A6B6);

INCLUDE_ASM("nonmatchings/paf_01C97C", scePaf_CEFBDE33);
#else
INCLUDE_ASM("nonmatchings/paf_01C97C", func_0002013C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00125FF8);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00125FFC);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00126000);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00126004);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00126008);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_0012600C);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00126028);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00170F78);

INCLUDE_RODATA("nonmatchings/paf_01C97C", D_00126064);
#endif

INCLUDE_ASM("nonmatchings/paf_01C97C", func_0002722C);

void func_000272A0(struct Unk_func_000272A0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_01C97C", func_000272B0);

void func_00027324(struct Unk_func_00027324_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_01C97C", func_00027334);

void func_000273A8(struct Unk_func_000273A8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000273B8(struct Unk_func_000273B8_0 *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *var_a1;

    var_a1 = arg0->unk0;
    if (var_a1 != NULL) {
        var_s0 = arg0->unk4 - 1;
        var_v0 = var_s0 * 8;
        if (var_s0 >= 0) {
            do {
                temp_v1 = M2C_FIELD((var_a1 + var_v0), s32 *, 4);
                var_s0 -= 1;
                if (temp_v1 != 0) {
                    scePaf_48B5C1C0(temp_v1);
                    var_a1 = arg0->unk0;
                }
                var_v0 = var_s0 * 8;
            } while (var_s0 >= 0);
        }
        scePaf_997D2809(var_a1);
    }
}
