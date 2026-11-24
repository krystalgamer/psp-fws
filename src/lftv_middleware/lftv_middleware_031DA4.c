/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00031DA4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00031EB4);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032030);

void func_000320FC(struct Unk_vt_func_000320FC_arg0 **arg0) {
    (*arg0)->unk8();
}

void func_00032120(struct Unk_vt_func_00032120_arg0 **arg0) {
    (*arg0)->unkC();
}

void func_00032144(struct Unk_vt_func_00032144_arg0 **arg0) {
    (*arg0)->unk10();
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032168);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000321E0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_0003228C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032338);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032400);

void func_00032450(s32 arg0) {
    func_000315C0(arg0, sceKernelGetThreadId());
}

s32 func_00032480(struct Unk_func_00032480_0 *arg0) {
    return arg0->unk4;
}

s32 func_00032488(void) {
    return -1;
}

s32 func_00032490(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032498);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032518);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032668);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032768);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032808);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000328B0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032958);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032A08);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032CA0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032E58);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032EA8);

s32 func_00032F30(struct Unk_func_00032F30_0 *arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = -1;
    if (sceKernelWaitSema(arg0->unk2C, 1, NULL) == 0) {
        var_s0 = func_000305F0((s32) ((u8 *)arg0 + 0x10), arg1);
        sceKernelSignalSema(arg0->unk2C, 1);
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00032F98);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033020);

s32 func_00033088(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != 0) {
        var_v1 = func_00032A08(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_000330B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != 0) {
        var_v1 = func_00032CA0(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_000330E0(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != 0) {
        var_v1 = func_00032E58(arg0);
    }
    return var_v1;
}

s32 func_0003310C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033114);

s32 func_00033170(struct Unk_func_00032F30_0 *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = func_00032F30(arg0, sceKernelGetThreadId());
    }
    return var_v0;
}

s32 func_000331AC(struct Unk_func_000331AC_0 *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = arg0->unk34;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000331C0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000332CC);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033324);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_0003336C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000333B4);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056150);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056154);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056158);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_0005615C);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056160);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056164);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056170);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056180);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056190);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056198);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_000561A4);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_000561B8);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_000561E0);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056208);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056230);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056250);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_0005625C);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056270);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056280);

INCLUDE_RODATA("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", D_00056288);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033404);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033520);

s32 func_000335BC(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = scePaf_B7E6052B(0x10);
    func_000332CC(temp_v0);
    temp_v0_2 = func_00034490();
    if (temp_v0_2 != 0) {
        func_0003449C(temp_v0_2, 1, temp_v0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033610);

s32 func_00033678(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != 0) {
        var_v1 = func_00033404(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_000336A4(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != 0) {
        var_v1 = func_00033520(arg0);
    }
    return var_v1;
}

s32 func_000336D0(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000336D8);

s32 func_0003373C(void) {
    return -1;
}

s32 func_00033744(void) {
    return -1;
}

void func_0003374C(void *arg0, s32 arg1, s32 arg2) {
    sceIoOpen(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_00033768);

void func_00033794(u32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000337B0);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_031DA4", func_000338FC);

