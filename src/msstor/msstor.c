/* cflags[152]: -Os */
/* cflags[150]: -Os */
/* cflags[100]: -Os */
#include "common.h"
#include "msstor_decls.h"

INCLUDE_ASM("nonmatchings/msstor", func_00000000);

INCLUDE_ASM("nonmatchings/msstor", func_00000060);

INCLUDE_ASM("nonmatchings/msstor", func_0000009C);

INCLUDE_ASM("nonmatchings/msstor", func_00000134);

INCLUDE_ASM("nonmatchings/msstor", func_0000017C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor", func_000001BC);
#endif

#if FW_VERSION == 100
s32 func_000001BC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_v1 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_v1 = D_00009888->unk4(D_00009B50, arg0 + D_00009B50->unk4, arg1, arg2);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor", func_00000220);
#endif

#if FW_VERSION == 100
s32 func_00000220(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a4;

    var_a4 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_a4 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_a4 = D_00009888->unk4(D_00009B50, arg0, arg1, arg2);
        }
    }
    return var_a4;
}
#endif

#if FW_VERSION < 201
void func_00000288(void) {
    D_00009888->unk10(D_00009B50);
}

void func_00000518(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00001568();
}
#endif
