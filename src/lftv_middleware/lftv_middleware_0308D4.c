/* cflags: -O2 */
#include "common.h"
#include "lftv_middleware_decls.h"

void func_000308D4(M2C_UNK **arg0) {
    *arg0 = &D_00056170;
    sceKernelDeleteSema(D_0005C1B0);
}

void func_00030904(M2C_UNK **arg0) {
    *arg0 = &D_00056170;
    sceKernelDeleteSema(D_0005C1B0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030934);

s32 func_00030978(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0005C1AC;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0x10);
        var_v0 = func_00030880(temp_v0);
        D_0005C1AC = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_000309C8);

s32 func_00030A38(void) {
    return D_0005C1AC;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030A44);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030AE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030BB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030C50);

s32 func_00030CF8(struct Unk_func_00030CF8_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030D00);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030DF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030EFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030F7C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055DC4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055DC8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055DD8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055DE8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055DEC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E00);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E10);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E1C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E24);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E38);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E4C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E60);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E74);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E88);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055E98);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055EAC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055EBC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055ED0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055EE4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055EF8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F0C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F18);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F1C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F34);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F44);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F48);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F5C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F6C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F7C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F84);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F88);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F8C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F98);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055F9C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FA0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FAC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FB4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FC8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FD0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FD4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FD8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FE8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00055FFC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056004);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056008);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0005600C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056020);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056034);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056048);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056058);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056068);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0005607C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056090);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560A0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560C4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560D8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560E8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000560FC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0005610C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056120);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056134);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_0004CE6C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030BB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030C50);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030CF8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_0004D09C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_0004D178);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030EFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_0004D300);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00030FD0);

void func_000311D4(void) {
    sceKernelGetThreadId();
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_000311F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00031220);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE00);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE04);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE0C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE10);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0007CE14);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056170);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056180);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056190);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056198);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000561A4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000561B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_000561E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056208);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056230);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_00056250);

INCLUDE_RODATA("nonmatchings/lftv_middleware_0308D4", D_0005625C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_000312AC);

s32 func_000312DC(s32 arg0) {
    return (sceKernelResumeThread(arg0) == 0) ? 0 : -1;
}

s32 func_00031304(s32 arg0) {
    return ((sceKernelGetThreadmanIdType(arg0) ^ 1) == 0) ? 0 : -1;
}

s32 func_0003132C(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00030BB8(func_00030A38(), arg0);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return var_v1;
}

s32 func_0003136C(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00030C50(func_00030A38(), arg0);
    var_v1 = -1;
    if (temp_v0 != 0) {
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0x10);
    }
    return var_v1;
}

void func_000313AC(void) {
    func_000313D0(sceKernelGetThreadId());
}

s32 func_000313D0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00030BB8(func_00030A38(), arg0);
    var_v1 = -1;
    if (temp_v0 != 0) {
        var_v1 = M2C_FIELD(temp_v0, s32 *, 0x18);
    }
    return var_v1;
}

void func_00031410(s32 arg0) {
    func_00031440(sceKernelGetThreadId(), arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00031440);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00031490);

void func_000314B4(struct Unk_func_000314B4_0 *arg0) {
    arg0->unk0 = &D_00056230;
    arg0->unk4 = 0;
    func_00030544((s32) ((u8 *)arg0 + 8));
}

void func_000314E4(struct Unk_func_000314E4_0 *arg0) {
    arg0->unk0 = &D_00056230;
    arg0->unk4 = 0;
    func_00030544((s32) ((u8 *)arg0 + 8));
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00031514);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_0003153C);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_00031564);

INCLUDE_ASM("nonmatchings/lftv_middleware_0308D4", func_000315A0);

void func_000315C0(s32 arg0, s32 arg1) {
    func_000305F0(arg0 + 8, arg1);
}
