/* compiler[282,303,311,340]: 1.9.2 */
/* cflags[282,303,311,340]: -O2 */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
/* cflags: -O2 */
#include "common.h"
#include "netfront_decls.h"

void func_00111AB8(struct Unk_func_00111AB8_0 *arg0, struct Unk_func_00111AB8_1 *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (arg1->unk4 * 4) + arg0->unk4C;
        arg1->unk0 = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00111AE4);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00111D14);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00111D9C);

void func_00111E54(s32 arg0, s32 arg1) {
    struct Unk_func_00111E54_temp_v0 *temp_v0;

    temp_v0 = func_00111A00(arg0, 1);
    temp_v0->unk14 = arg1;
    temp_v0->unk10 = 1;
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00111E88);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001120A0);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001121B8);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001122F0);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112358);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112544);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112668);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_0011290C);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112E64);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112EB8);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00112F4C);
#endif

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113170);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001131A4);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_0011321C);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001132A8);

void func_00113320(struct Unk_func_00113320_0 *arg0) {
    func_001134E8(func_0010BB64(), arg0->unkE);
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113350);

s32 func_001133C4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_00135FE0 = 0;
    temp_v0 = func_0011A4E0(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_00135FE0 != 0) {
        *arg0 = D_00135FE0;
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_0011342C);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001134E8);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113544);

s32 func_001135A8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_00135FE0 = 0;
    temp_v0 = func_0011A154(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_00135FE0 != 0) {
        *arg0 = D_00135FE0;
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113610);

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001136B4);

u32 func_001136F0(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

s32 func_001136FC(u32 arg0) {
    s32 cmp_tmp = arg0 > 0xFFFFU;
    return cmp_tmp == 0;
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_0011370C);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113728);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113758);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001137C4);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113848);

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_001138C4);

s32 func_00113B40(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00134474;
    D_00134474 = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/netfront_111AB8", func_00113B50);

void func_00113D18(void) {
    func_0011552C();
}

void func_00113D34(void) {
    func_00115558();
}

void func_00113D50(s32 arg0) {
    func_0011370C(arg0);
}

void func_00113D6C(s32 arg0) {
    func_00115708(arg0 & 0xFFFF);
}

void func_00113D88(s32 arg0) {
    func_00113E9C(arg0 & 0xFFFF);
}

void func_00113DA4(s32 arg0) {
    func_00114DA8(arg0 & 0xFFFF);
}

void func_00113DC0(s32 arg0) {
    func_001145FC(arg0 & 0xFFFF);
}
#endif
