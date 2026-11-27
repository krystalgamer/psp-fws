/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049660);

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056DF0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E00);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E10);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E60);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E80);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EA0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EB8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EC8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EE8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056F08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056F1C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049700);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000497CC);

s32 func_00049830(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 *arg4) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -2;
    if (arg3 >= func_00049908(arg1)) {
        temp_v0 = func_0004DFF0(arg2, arg0, arg1);
        var_v1 = -1;
        if (temp_v0 >= 0) {
            *arg4 = temp_v0;
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000498BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049908);

s32 func_0004992C(u32 arg0) {
    return ((arg0 >> 2) * 3) - 2;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049940);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000499F4);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049A9C);
#else
s32 func_00049A9C(void) {
    s32 temp_v0;

    temp_v0 = _Znwj(8);
    func_0004A91C(temp_v0);
    return temp_v0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049AD0);
#else
s32 func_00049AD0(void) {
    s32 temp_v0;

    temp_v0 = _Znwj(0xC);
    func_0004AC1C(temp_v0);
    return temp_v0;
}
#endif

void func_00049B04(void) {
    func_0004A65C();
}

void func_00049B20(void) {
    func_0004A740();
}

void func_00049B3C(void) {
    func_0004A578();
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049B58);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049BDC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049CB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049D00);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049D9C);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049E5C);

void func_00049E94(M2C_UNK **arg0) {
    *arg0 = &D_00056E00;
    func_0004A08C((s32) arg0);
}

void func_00049EBC(M2C_UNK **arg0) {
    *arg0 = &D_00056E00;
    func_0004A08C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049EE4);

void func_00049F1C(s32 arg0) {
    func_0004A190(arg0);
}

void func_00049F38(s32 arg0) {
    func_0004A1DC(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00049F54);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A08C);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A190);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A1DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A268);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A2AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A2E4);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00045458);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00045480);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000454A8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00067414);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A3A4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_0007F05C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_0007F07C);
#endif

#if FW_VERSION >= 303
void func_0004A31C(M2C_UNK **arg0) {
    *arg0 = &D_00056E10;
    func_0004A544((s32) arg0);
}

void func_0004A344(M2C_UNK **arg0) {
    *arg0 = &D_00056E10;
    func_0004A544((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A36C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A3A4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A404);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00045620);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000676B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E60);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056E80);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EA0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EB8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EC8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056EE8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056F08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_049660", D_00056F1C);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A4E4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A544);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A578);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A5C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A5E4);

s32 func_0004A608(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A610);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A65C);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A6AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A6C8);

s32 func_0004A6EC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A6F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A740);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A7AC);

s32 func_0004A7D0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A7D8);

void func_0004A824(M2C_UNK **arg0) {
    *arg0 = &D_00056E80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A834);

void func_0004A85C(M2C_UNK **arg0) {
    *arg0 = &D_00056E80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A86C);

void func_0004A894(M2C_UNK **arg0) {
    *arg0 = &D_00056E80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A8A4);

void func_0004A8CC(M2C_UNK **arg0) {
    *arg0 = &D_00056E80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A8DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A904);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A91C);

void func_0004A934(struct Unk_func_0004A934_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    arg0->unk0 = &D_00056EA0;
    if (temp_a1 > 0) {
        sceKernelDeleteSema((u32) temp_a1);
    }
    arg0->unk0 = &D_00056EC8;
}

void func_0004A980(struct Unk_func_0004A980_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    arg0->unk0 = &D_00056EA0;
    if (temp_a1 > 0) {
        sceKernelDeleteSema((u32) temp_a1);
    }
    arg0->unk0 = &D_00056EC8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004A9CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AA20);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AAC8);

void func_0004AB2C(M2C_UNK **arg0) {
    *arg0 = &D_00056EC8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AB3C);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AB64);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AC1C);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004ADB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AE9C);

void func_0004AFA0(void) {
    sceKernelGetThreadId();
}

s32 func_0004AFBC(struct Unk_func_0004AFBC_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004AFC4);

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004B080);

s32 func_0004B1CC(struct Unk_func_0004B1CC_0 *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0;
    temp_a1 = arg0->unk4;
    if (temp_a1 > 0) {
        var_v1 = sceNetThreadAbort((u32) temp_a1);
    }
    return var_v1;
}

s32 func_0004B200(void) {
    s32 var_v0;

    var_v0 = sceKernelGetThreadCurrentPriority();
    if (var_v0 > 0) {
        var_v0 = sceKernelRotateThreadReadyQueue(var_v0);
    }
    return var_v0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_00046368);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_000684A0);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004B22C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004B3DC);

void func_0004B458(M2C_UNK **arg0) {
    *arg0 = &D_00056F28;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_049660", func_0004B468);

void func_0004B490(void) {
    sceKernelGetSystemTimeWide();
}
