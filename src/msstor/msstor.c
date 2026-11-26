/* cflags[150]: -Os */
/* cflags[100]: -Os */
#include "common.h"
#include "msstor_decls.h"

INCLUDE_ASM("nonmatchings/msstor", func_00000000);

INCLUDE_ASM("nonmatchings/msstor", func_00000060);

INCLUDE_ASM("nonmatchings/msstor", func_0000009C);

INCLUDE_ASM("nonmatchings/msstor", func_00000134);

INCLUDE_ASM("nonmatchings/msstor", func_0000017C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor", func_000001BC);

INCLUDE_ASM("nonmatchings/msstor", func_00000220);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msstor", func_00000288);
#endif

#if FW_VERSION < 152
void func_00000288(void) {
    D_00009888->unk10(D_00009B50);
}
#endif

#if FW_VERSION < 201
void func_00000518(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00001568();
}
#endif
