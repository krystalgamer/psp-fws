/* cflags: -Os */
#include "common.h"
#include "lftv_middleware_decls.h"

void func_000315DC(void *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00056208;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2 == 1, 1, NULL);
}

void func_00031654(void *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00056208;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2 == 1, 1, NULL);
}

void func_000316CC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00056208;
    sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 4));
    func_00031514((s32) arg0);
}

void func_00031708(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00056208;
    sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 4));
    func_00031514((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031744);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031788);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031830);

s32 func_000318C4(void *arg0) {
    return (sceKernelCancelSema(M2C_FIELD(arg0, s32 *, 4), -1, NULL) == 0) ? 0 : -1;
}

s32 func_000318F4(void) {
    return 0;
}

void func_000318FC(void *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561E0;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2, arg2, NULL);
}

void func_0003196C(void *arg0, s32 arg1, s32 arg2) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561E0;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateSema(&D_00056198, (arg1 & 1) << 8, arg2, arg2, NULL);
}

void func_000319DC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561E0;
    sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 4));
    func_00031514((s32) arg0);
}

void func_00031A18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561E0;
    sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 4));
    func_00031514((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031A54);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031A98);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031B40);

s32 func_00031BCC(void *arg0) {
    return (sceKernelCancelSema(M2C_FIELD(arg0, s32 *, 4), -1, NULL) == 0) ? 0 : -1;
}

s32 func_00031BFC(void) {
    return 0;
}

void func_00031C04(void *arg0, s32 arg1) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561B8;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = sceKernelCreateEventFlag(&D_000561A4, 0x200U, 3U, NULL);
}

void func_00031C70(void *arg0, s32 arg1) {
    func_000314B4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561B8;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = sceKernelCreateEventFlag(&D_000561A4, 0x200U, 3U, NULL);
}

void func_00031CDC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561B8;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00031514((s32) arg0);
}

void func_00031D1C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000561B8;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00031514((s32) arg0);
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_0315DC", func_00031D5C);

