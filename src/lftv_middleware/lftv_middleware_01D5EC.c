/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D5EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D628);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D798);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D8B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D910);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D96C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D9D0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_000550F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001D9E8);

void func_0001DAE8(struct Unk_func_0001DAE8_0 *arg0, s32 arg1, u32 arg2, s32 arg3) {
    arg0->unk14 = arg1;
    arg0->unkC = arg3;
    arg0->unk1C = arg2;
    if (arg2 == 0) {
        arg0->unk1C = 0xF4240U;
        return;
    }
    if (arg2 <= 0x3D08FU) {
        arg0->unk1C = 0x3D090U;
    }
}

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DB2C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DBAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DCA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DD54);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DE08);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DE70);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DECC);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DF28);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DF84);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_000396A0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001DFE0);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E098);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E0D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E134);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E190);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_00055130);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E1F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E328);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E3E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E4F4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_00039D84);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E594);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E678);

void func_0001E6C8(s32 arg0) {
    func_0001F5A4(arg0);
    func_0001ED90(arg0);
}

void func_0001E6F4(struct Unk_func_0001E6F4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_0001D434(arg0);
    if (temp_v0 != 0) {
        func_0003C974(temp_v0);
    }
    temp_v1 = arg0->unkC;
    if (temp_v1 != 0) {
        func_0003C974(temp_v1);
    }
}

void func_0001E73C(struct Unk_func_0001E73C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_0001D434(arg0);
    if (temp_v0 != 0) {
        func_0003C694(temp_v0);
    }
    temp_v1 = arg0->unkC;
    if (temp_v1 != 0) {
        func_0003C694(temp_v1);
    }
}

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E784);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E7C4);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001B310);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003A0F4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E838);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001B38C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_00054B24);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0005002C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B24C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B250);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B29C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B2B0);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E7F8);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E838);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003A1E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B598);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B2F8);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E874);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E8B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E8F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E92C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003A358);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001E96C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001ED48);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001ED90);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003AA58);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001EE5C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_000551BC);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_000551C8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003AA58);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F2AC);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B4F4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B4FC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B504);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B580);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B594);

INCLUDE_RODATA("nonmatchings/lftv_middleware_01D5EC", D_0007B5BC);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F4B8);

s32 func_0001F550(s32 arg0) {
    func_000349B4(0);
    func_0001D5EC(arg0);
    func_0001E838(arg0);
    func_0001E8B4(arg0);
    func_0001E7C4(arg0);
    func_0001E8F0(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F5A4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003B514);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001C2B4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003B614);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003B7D8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F7E8);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0003BAB4);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F744);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F7A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001F8B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FA0C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FA94);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FBC4);

void func_0001FC08(M2C_UNK **arg0) {
    *arg0 = &D_000551E8;
    func_0001FFAC((s32) arg0);
    func_0001FCD0((s32) arg0);
    func_000204EC((s32) arg0);
}

void func_0001FC48(M2C_UNK **arg0) {
    *arg0 = &D_000551E8;
    func_0001FFAC((s32) arg0);
    func_0001FCD0((s32) arg0);
    func_000204EC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FC88);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FCD0);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FD5C);

void func_0001FF84(struct Unk_func_0001FF84_0 *arg0) {
    void **temp_a0;
    struct Unk_func_0001FF84_temp_a1 *temp_a1;

    temp_a0 = arg0->unkC;
    temp_a1 = *temp_a0;
    temp_a1->unk10(temp_a0, temp_a1);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0001FFAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_00020038);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_000200CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0002010C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0002014C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0002018C);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_000201D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_00020244);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_00020394);

INCLUDE_ASM("nonmatchings/lftv_middleware_01D5EC", func_0002041C);

u8 func_0002049C(struct Unk_func_0002049C_0 *arg0) {
    u8 var_v0;
    struct Unk_func_0002049C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk10;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk4;
    }
    return var_v0;
}
