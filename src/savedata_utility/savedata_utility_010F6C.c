/* cflags: -O1 */
#include "common.h"
#include "savedata_utility_decls.h"

#if FW_VERSION >= 150
void func_00010F6C(struct Unk_func_00010F6C_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000250F0;
    arg0->unk4 = arg1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk18 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}

void func_00010F9C(struct Unk_func_00010F9C_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000250F0;
    arg0->unk4 = arg1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk18 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}

void func_00010FCC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
}

void func_00010FDC(M2C_UNK **arg0) {
    *arg0 = &D_000250F0;
}
#endif
