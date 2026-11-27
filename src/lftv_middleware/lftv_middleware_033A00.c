/* cflags: -O2 */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 func_00033A00(void *arg0) {
    return (sceIoRemove(arg0) == 0) ? 0 : -1;
}

s32 func_00033A28(void *arg0) {
    return (sceIoMkdir(arg0, 0) == 0) ? 0 : -1;
}

s32 func_00033A50(void *arg0, void *arg1) {
    return (sceIoRename(arg0, arg1) == 0) ? 0 : -1;
}

s32 func_00033A78(void *arg0) {
    return (sceIoRemove(arg0) == 0) ? 0 : -1;
}

s32 func_00033AA0(void *arg0) {
    return (sceIoRemove(arg0) == 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00033AC8);

void func_00033B94(s32 arg0, s32 arg1) {
    s32 temp_a6;
    s32 var_a3;
    s32 var_a4;
    s8 *temp_v1;
    s8 temp_a2;
    u8 *temp_a1;

    var_a4 = 0;
    var_a3 = arg1 - 1;
    temp_a6 = arg1 >> 1;
    if (temp_a6 > 0) {
        do {
            temp_v1 = arg0 + var_a4;
            temp_a1 = arg0 + var_a3;
            temp_a2 = *temp_v1;
            var_a4 += 1;
            *temp_v1 = *temp_a1;
            var_a3 -= 1;
            *temp_a1 = (u8) temp_a2;
        } while (var_a4 < temp_a6);
    }
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00033BD8);

s32 func_00033BF8(void) {
    void *sp0;
    return (sceRtcGetCurrentTick(&sp0) < 0) ? 0 : sp0;
}

s32 func_00033C20(void) {
    return 0x3C;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00033C28);

s32 func_00033C58(void) {
    return 0;
}

void func_00033C60(s32 arg0, s32 arg1, s32 arg2) {
    sceNetInetSocket(arg0, arg1, arg2);
}

s32 func_00033C7C(s32 arg0, void *arg1, s32 arg2) {
    return (sceNetInetBind(arg0, arg1, arg2) == 0) ? 0 : -1;
}

s32 func_00033CA4(s32 arg0, s32 arg1) {
    return (sceNetInetListen(arg0, arg1) == 0) ? 0 : -1;
}

void func_00033CCC(s32 arg0, void *arg1, void *arg2) {
    sceNetInetAccept(arg0, arg1, arg2);
}

void func_00033CE8(s32 arg0, void *arg1, s32 arg2) {
    sceNetInetConnect(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00033D04);

void func_00033E3C(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, s32 arg5) {
    sceNetInetSendto(arg0, arg1, arg2, arg3, arg4, arg5);
}

void func_00033E58(s32 arg0, void *arg1, u32 arg2, s32 arg3) {
    sceNetInetSend(arg0, arg1, arg2, arg3);
}

void func_00033E74(s32 arg0, void *arg1, s32 arg2) {
    sceNetInetSendmsg(arg0, arg1, arg2);
}

void func_00033E90(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, void *arg5) {
    sceNetInetRecvfrom(arg0, arg1, arg2, arg3, arg4, arg5);
}

void func_00033EAC(s32 arg0, void *arg1, u32 arg2, s32 arg3) {
    sceNetInetRecv(arg0, arg1, arg2, arg3);
}

void func_00033EC8(s32 arg0, void *arg1, s32 arg2) {
    sceNetInetRecvmsg(arg0, arg1, arg2);
}

s32 func_00033EE4(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    return (sceNetInetSetsockopt(arg0, arg1, arg2, arg3, arg4) == 0) ? 0 : -1;
}

s32 func_00033F0C(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    return (sceNetInetGetsockopt(arg0, arg1, arg2, arg3, arg3) == 0) ? 0 : -1;
}

s32 func_00033F34(s32 arg0, void *arg1, void *arg2) {
    return (sceNetInetGetsockname(arg0, arg1, arg2) == 0) ? 0 : -1;
}

s32 func_00033F5C(s32 arg0, void *arg1, void *arg2) {
    return (sceNetInetGetpeername(arg0, arg1, arg2) == 0) ? 0 : -1;
}

s32 func_00033F84(s32 arg0, s32 arg1) {
    return (sceNetInetShutdown(arg0, arg1) == 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00033FAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034010);

s32 func_000340B0(void) {
    return ((sceNetInetInetAton() ^ 1) == 0) ? 0 : -1;
}

INCLUDE_RODATA("nonmatchings/lftv_middleware_033A00", D_000562B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000340D8);

#if FW_VERSION != 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_033A00", D_000562CC);
#endif

#if FW_VERSION >= 311
INCLUDE_RODATA("nonmatchings/lftv_middleware_033A00", D_000562E0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_033A00", D_000562F0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_033A00", D_000582E0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034134);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034184);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000341B0);

s32 func_00034230(s32 arg0) {
    return __builtin_allegrex_wsbh(arg0 & 0xFFFF) & 0xFFFF;
}

s32 func_00034240(s32 arg0) {
    return __builtin_allegrex_wsbw(arg0);
}

s32 func_00034248(s32 arg0) {
    return __builtin_allegrex_wsbh(arg0 & 0xFFFF) & 0xFFFF;
}

s32 func_00034258(s32 arg0) {
    return __builtin_allegrex_wsbw(arg0);
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050558);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050560);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_0005057C);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000505CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000505E0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_0005092C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050620_v250);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050664);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000506CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000506E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050728);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_0005073C);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050750);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050794);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050890);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050910);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00050998);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000509C4);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000509CC);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034260);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000342B4);

void func_00034308(M2C_UNK **arg0) {
    *arg0 = &D_000562E0;
    sceKernelDeleteSema(D_0005C5BC);
    D_0005C5BC = 0;
}

void func_00034344(M2C_UNK **arg0) {
    *arg0 = &D_000562E0;
    sceKernelDeleteSema(D_0005C5BC);
    D_0005C5BC = 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034380);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000343D0);
#else
s32 func_000343D0(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0005C5B8;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        var_v0 = func_000342B4(temp_v0);
        D_0005C5B8 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034420);

s32 func_00034490(void) {
    return D_0005C5B8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_0003449C);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034570);

s32 func_00034664(void) {
    func_000343D0();
    func_00030978();
    return 0;
}

s32 func_0003468C(void) {
    func_000309C8();
    func_00034420();
    return 0;
}

void func_000346B4(M2C_UNK **arg0) {
    *arg0 = &D_000562F0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000346C4);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034AA0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034BA8);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034B0C_v311);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034B78);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034BB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034BE8);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034C28);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00034F84);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_0003562C);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_00035698);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000351A8);

INCLUDE_ASM("nonmatchings/lftv_middleware_033A00", func_000351E8);
#endif
