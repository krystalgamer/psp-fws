/* cflags: -Os */
#include "common.h"
#include "lftv_middleware_decls.h"

void func_000315DC(struct Unk_func_000315DC_0 *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_00056208;
    arg0->unk4 = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2 == 1, 1, NULL);
}

void func_00031654(struct Unk_func_00031654_0 *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_00056208;
    arg0->unk4 = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2 == 1, 1, NULL);
}

void func_000316CC(struct Unk_func_000316CC_0 *arg0) {
    arg0->unk0 = &D_00056208;
    sceKernelDeleteSema(arg0->unk4);
    func_00031514((s32) arg0);
}

void func_00031708(struct Unk_func_00031708_0 *arg0) {
    arg0->unk0 = &D_00056208;
    sceKernelDeleteSema(arg0->unk4);
    func_00031514((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031744);

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031788);

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031830);

s32 func_000318C4(struct Unk_func_000318C4_0 *arg0) {
    return (sceKernelCancelSema(arg0->unk4, -1, NULL) == 0) ? 0 : -1;
}

s32 func_000318F4(void) {
    return 0;
}

void func_000318FC(struct Unk_func_000318FC_0 *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_000561E0;
    arg0->unk4 = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2, arg2, NULL);
}

void func_0003196C(struct Unk_func_0003196C_0 *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    arg0->unk18 = arg1;
    arg0->unk0 = &D_000561E0;
    arg0->unk4 = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2, arg2, NULL);
}

void func_000319DC(struct Unk_func_000319DC_0 *arg0) {
    arg0->unk0 = &D_000561E0;
    sceKernelDeleteSema(arg0->unk4);
    func_00031514((s32) arg0);
}

void func_00031A18(struct Unk_func_00031A18_0 *arg0) {
    arg0->unk0 = &D_000561E0;
    sceKernelDeleteSema(arg0->unk4);
    func_00031514((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031A54);

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031A98);

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031B40);

s32 func_00031BCC(struct Unk_func_00031BCC_0 *arg0) {
    return (sceKernelCancelSema(arg0->unk4, -1, NULL) == 0) ? 0 : -1;
}

s32 func_00031BFC(void) {
    return 0;
}

void func_00031C04(struct Unk_func_00031C04_0 *arg0, s32 arg1) {
    func_000314B4(arg0);
    arg0->unk0 = &D_000561B8;
    arg0->unk18 = arg1;
    arg0->unk4 = 1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = sceKernelCreateEventFlag(&D_000561A4, 0x200U, 3U, NULL);
}

void func_00031C70(struct Unk_func_00031C70_0 *arg0, s32 arg1) {
    func_000314B4(arg0);
    arg0->unk0 = &D_000561B8;
    arg0->unk18 = arg1;
    arg0->unk4 = 1;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = sceKernelCreateEventFlag(&D_000561A4, 0x200U, 3U, NULL);
}

void func_00031CDC(struct Unk_func_00031CDC_0 *arg0) {
    arg0->unk0 = &D_000561B8;
    sceKernelDeleteEventFlag(arg0->unk24);
    arg0->unk4 = 0;
    func_00031514((s32) arg0);
}

void func_00031D1C(struct Unk_func_00031D1C_0 *arg0) {
    arg0->unk0 = &D_000561B8;
    sceKernelDeleteEventFlag(arg0->unk24);
    arg0->unk4 = 0;
    func_00031514((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0315DC", func_00031D5C);

