/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BBB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BBD0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BBE8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BC40);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BC98);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BD24);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BD50);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BD78);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BE50);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003BF14);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C01C);
#else
void func_0003C01C(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    temp_v0 = scePaf_B7E6052B(0x414);
    func_0004A268(temp_v0);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
    D_0005C5FC += 1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C0B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C14C);

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_00056628);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_00056648);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_00056660);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_00056690);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C1E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C694);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C870);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_0007E664);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03BBB8", D_0007E694);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C8C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C974);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003C9EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003CA48);

u16 func_0003CACC(struct Unk_func_0003CACC_0 *arg0) {
    u16 var_v1;

    var_v1 = 0xFFFF;
    if (arg0->unk34 != 0) {
        var_v1 = arg0->unk8;
    }
    return var_v1;
}

#if FW_VERSION == 303
s32 func_0003CAE4(struct Unk_func_0003CAE4_0 *arg0) {
    return arg0->unk54;
}
#endif

s32 func_0003CAEC(struct Unk_func_0003CAEC_0 *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0;
    temp_a1 = arg0->unk18;
    if (temp_a1 != 0) {
        var_v1 = func_0003F654(temp_a1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003CB20);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_03BBB8", func_0003CBB0);
#else
s32 func_0003CBB0(void) {
    s32 temp_v0;

    temp_v0 = scePaf_F13EBB78(0xE);
    if (temp_v0 != 0) {
        scePaf_A82E3C19(func_0004C108(0));
        scePaf_809A4F83(temp_v0, 4, "%d", scePaf_4370175A());
    }
    return temp_v0;
}
#endif
