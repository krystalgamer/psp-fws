/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_4F68DB0E);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_6A046357);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_5155EC8A);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_E6F67D14);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_3D905F34);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_59561561);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_DC38FEE9);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_DE9E5174);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_824CBC6D);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_4459EAAF);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_A94A75E7);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_EB7A7E4F);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_FDE938A7);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_7776A492);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_3FDDB0BA);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_8FE19FC4);

void func_00001320(void) {
    D_0002C4F0 = 0;
    D_0002C4F4 = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001334);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000014DC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001624);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_AC9D90A5);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_AAF4895A);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetTcpcbstat);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetUdpcbstat);

void func_00001BA0(void) {
    sceNet_lib_E155112D(&func_00001BE4, func_00001C28);
}

void func_00001BC8(void) {
    sceNet_lib_41621EB0();
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001BE4);

void func_00001C28(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xB4);
    if ((temp_v1 == NULL) || (M2C_FIELD(temp_v1, s32 *, 0x20) == 0)) {
        M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x800);
    } else {
        M2C_FIELD(temp_v1, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v1, s32 *, 0x48) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x48) | 2);
        sceKernelSignalSema(M2C_FIELD(temp_v1, u32 *, 0x4C), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001C80);

void func_00001DF4(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001DFC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001E2C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001EA8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00001F64);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00002028);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000020C4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00002168);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000220C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000023A8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000243C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000025CC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000025FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00002684);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00002CAC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000038BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00003A00);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00003D28);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00003F68);

void func_000040FC(void) {
    D_0002BEC0 = 0x80;
    D_0002C504 = 0;
    M2C_FIELD(&D_0002CC9C, s32 *, 0) = 0;
    M2C_FIELD(&D_0002CC9C, M2C_UNK **, 4) = &D_0002CC9C;
}

s32 func_00004124(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = sceNet_lib_94B44F26();
    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 (**)(void *, M2C_UNK, M2C_UNK, s32, M2C_UNK), 0x1C)(arg0, 2, 0, arg1, 0);
    sceNet_lib_515B2F33(temp_s2);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004190);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004248);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000042D4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004404);

void func_000044AC(s32 arg0) {
    sceNet_lib_B9C780C7(arg0 + 0x5C);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000044C8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000453C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004620);

void func_000047DC(void *arg0, void *arg1, s32 arg2) {
    void **temp_v0;
    void *temp_a0;

    M2C_FIELD(arg1, void **, 0x14) = arg0;
    if (arg2 == 0) {
        M2C_FIELD(arg1, void **, 0x18) = (void *) (arg0 + 0x1C);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) + 1);
    } else {
        M2C_FIELD(arg1, void **, 0x18) = (void *) (arg0 + 0x24);
        M2C_FIELD(arg0, u16 *, 0x36) = (u16) (M2C_FIELD(arg0, u16 *, 0x36) + 1);
    }
    temp_a0 = M2C_FIELD(arg1, void **, 0x18);
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    M2C_FIELD(arg1, void ***, 0x30) = (void **) M2C_FIELD(temp_a0, void ***, 4);
    temp_v0 = M2C_FIELD(temp_a0, void ***, 4);
    M2C_FIELD(temp_a0, void ***, 4) = (void **) (arg1 + 0x2C);
    *temp_v0 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004838);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000048B8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004944);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000049EC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004A3C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004A68);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004B40);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00004E28);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005008);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005050);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005308);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005440);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000562C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005700);

void func_00005778(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) ((M2C_FIELD(arg0, u16 *, 8) & 0xFFF5) | 4);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000578C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000580C);

void func_0000588C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x10);
    if (!(M2C_FIELD(arg0, u16 *, 0x8C) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, arg0 + 0x6C);
    }
}

void func_000058CC(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x20);
    if (!(M2C_FIELD(arg0, u16 *, 0x64) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, arg0 + 0x44);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000590C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005934);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000059AC);

s32 func_00005B8C(void) {
    return 3;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00005B94);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetBind);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetAccept);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetConnect);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSend);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSendto);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSendmsg);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00006568);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetRecv);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetRecvfrom);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetRecvmsg);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00006AB0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSetsockopt);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetsockopt);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetsockname);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetpeername);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00007490);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSelect);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00007914);

void func_00007A88(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}

void func_00007AA4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetPoll);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00007D50);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00007E00);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00007E78);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_AEE60F84);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_B3FF98EB);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSocket);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetListen);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetShutdown);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000084B4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetClose);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetCloseWithRST);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetSocketAbort);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008704);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008874);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008970);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008A2C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008D34);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008D98);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008E40);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00008FC8);

s32 func_000090FC(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != arg1) {

    } else {
        func_0000BEE0(2, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x34), 0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009144);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009240);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000931C);

void func_00009570(s32 arg0) {
    func_0000E4E4(arg0, 0);
}

void func_0000958C(s32 arg0) {
    func_0000C998(arg0, 2, 0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000095AC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009650);

void func_000096C8(s32 arg0) {
    func_0000E4E4(arg0, 1);
}

void func_000096E4(void *arg0) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_00002028(0, M2C_FIELD(var_s0, s32 *, 0));
            var_s0 = M2C_FIELD(var_s0, void **, 0x10);
        } while (var_s0 != NULL);
    }
}

void func_00009724(s32 arg0) {
    func_0000E3F0(arg0);
}

void func_00009740(s32 arg0) {
    func_0000E3F0(arg0);
}

s32 func_0000975C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009764);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009788);

void func_000097BC(void) {
    sceNet_lib_976AB1E9(&func_0000986C, func_0000993C, func_00009570, func_0000958C, &func_000095AC, &func_00009650, func_000096C8, func_000096E4, func_00009724, func_00009740, func_0000975C, &func_00009764, &func_00009788);
}

void func_00009850(void) {
    sceNet_lib_4C8FD452();
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000986C);

void func_0000993C(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009944);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009A14);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009A58);

s32 func_00009AF0(s32 arg0) {
    D_0002C51C = arg0;
    D_0002C520 = 1;
    return 0;
}

s32 func_00009B0C(void) {
    D_0002C520 = 0;
    D_0002C51C = 0;
    return 0;
}

void func_00009B24(void) {
    sceNet_lib_5ED457BE(&func_00009B84, &func_00009A14, &func_00009A58, &func_00009944);
}

void func_00009B5C(void) {
    sceNet_lib_31F3CDA1();
}

M2C_UNK *sceNetInet_lib_D7928A6D(void) {
    return &D_0002D930;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00009B84);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000A144);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000A470);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000A61C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000A960);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000AFE0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B41C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B580);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B5E0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B6C0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B774);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B7BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000B91C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000BA10);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000BB7C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000BE00);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000BEE0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000C6D4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000C8F8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000C998);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000CC00);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000CCE8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000CD64);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000CE98);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D048);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D104);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D15C);

s32 func_0000D1F4(void) {
    return 0x5F;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D1FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D254);

void func_0000D330(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 func_0000D338(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x34) & 0x2000) && (M2C_FIELD(arg0, s32 *, 0x80) == arg1)) {
        func_0000D378((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D378);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D484);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000D6D0);

void func_0000DDCC(s32 arg0, void *arg1, void *arg2) {
    if (arg0 & 8) {
        M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    }
    if (arg0 & 0x10) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    }
    if (arg0 & 0x20) {
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    }
    if (arg0 & 0x40) {
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    }
    if (arg0 & 0x80) {
        M2C_FIELD(arg2, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    }
    if (arg0 & 2) {
        M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    }
    if (arg0 & 1) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
    if (arg0 & 4) {
        M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000DE58);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000DF08);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E0EC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E318);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E3F0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E4E4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E5A4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E704);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000E928);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000EACC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000ED18);

void func_0000EDB8(void *arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    func_000023A8((s32) temp_a0);
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    *M2C_FIELD(arg0, void ***, 4) = temp_v1;
    sceNetIfhandle_lib_76BAD213(arg0);
}

void func_0000EE04(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    if (!(M2C_FIELD(temp_v1, u16 *, 8) & 1)) {

    } else {
        M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
        func_000023A8((s32) temp_v1);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_v1_2 != NULL) {
            M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        }
        *M2C_FIELD(arg0, void ***, 4) = temp_v1_2;
        sceNetIfhandle_lib_76BAD213(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000EE68);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002B6FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F040);

void func_0000F268(void) {
    D_0002CD80 = 0;
}

s32 func_0000F274(void) {
    return 0;
}

void func_0000F27C(void *arg0, void *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = M2C_FIELD(arg0, u8 **, 0x10);
    temp_a2 = *temp_a0;
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) temp_a2;
    sceNet_lib_2F305274(temp_a0, M2C_FIELD(arg1, s32 *, 8), temp_a2);
}

void func_0000F2A8(void *arg0, void *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = M2C_FIELD(arg0, u8 **, 0xC);
    temp_a2 = *temp_a0;
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) temp_a2;
    sceNet_lib_2F305274(temp_a0, M2C_FIELD(arg1, s32 *, 8), temp_a2);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F2D4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F61C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F690);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F71C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000F730);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000FA70);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000FBD0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000FDC0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0000FED8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001044C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010528);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010668);

s32 func_00010700(void) {
    return 0x5F;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010708);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010770);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000107F8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010930);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010A28);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010B84);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00010C08);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00011678);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00011820);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00011D04);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00011D6C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012230);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012354);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012478);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012684);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012758);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000127EC);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002B754);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000128AC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001292C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000129AC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012AC4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012B9C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012CDC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00012D0C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000130B8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00013338);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001358C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000137AC);

void func_000138B4(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_v1 != 0) {
        func_0000D15C(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000138F0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000139A8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00013A94);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00013BAC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00013CC4);

void func_00013ED4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    M2C_FIELD(arg0, void **, 0) = arg0;
    M2C_FIELD(arg0, void **, 4) = arg0;
    M2C_FIELD(arg0, s32 *, 8) = sceNet_lib_C4261339(arg1, arg0 + 0x10);
    temp_v0 = sceNet_lib_C4261339(arg2, arg0 + 0x14);
    M2C_FIELD(arg0, s16 *, 0x1A) = 0x3FF;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((u16) D_0002C02C + (sceNet_lib_1858883D() % (u32) ((D_0002C030 - D_0002C02C) + 1)));
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00013F68);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014018);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014120);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000141EC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014258);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000142C4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000143E0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014480);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014524);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00014588);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000145F4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001486C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000150C8);

void func_00015654(void *arg0) {
    void **temp_a1;
    void *temp_a0;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0, void **, 0);
            sceNetIfhandle_lib_F56FAC82(M2C_FIELD(var_s0, s32 *, 0xC));
            temp_v1 = M2C_FIELD(var_s0, void **, 0);
            temp_a0 = var_s0;
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
            }
            temp_a1 = M2C_FIELD(var_s0, void ***, 4);
            var_s0 = temp_s1;
            *temp_a1 = temp_v1;
            sceNetIfhandle_lib_76BAD213(temp_a0);
        } while (temp_s1 != NULL);
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    *M2C_FIELD(arg0, void ***, 4) = temp_v1_2;
    sceNetIfhandle_lib_76BAD213(arg0);
    D_0002C57C -= 1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000156F8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00015BD8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00015C8C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00015CFC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000160E4);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002B764);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000161F0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000165BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00016644);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00016788);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00016830);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00016938);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000169EC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000175DC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000177A4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001788C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00017BF0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00017DA0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00018328);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00018478);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00018594);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000185BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00018628);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00018A90);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00019034);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000195B8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00019668);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000196DC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000197D4);

s32 func_00019A98(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00019AA0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00019B24);

void func_00019C00(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x34);
    if ((temp_a1 & 0x14) != 0x14) {
        if (!(M2C_FIELD(arg0, s32 *, 0x50) & 1)) {
            M2C_FIELD(arg0, s32 *, 0x54) = 0;
        }
    } else {
        func_0000BEE0(2, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x10), temp_a1, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00019C5C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001A5C8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001A714);

void func_0001A8AC(void) {
    sceNet_lib_57CC57DA(&D_0002DBC8, 0, 0x48);
    D_0002DBC0 = 0;
    D_0002C5BC = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001A8E4);

void func_0001AA20(void *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((M2C_FIELD(arg0, s32 *, 0) & temp_a3) != temp_v1_2) && !(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) & 8) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4) != 1)) {
            func_0001A714((s32) arg0, 0x17);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001AA90);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001AAFC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001AE68);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B094);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B1B0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B5C0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B5FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B6BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B754);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001B770);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001BA74);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001BC98);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001BEDC);

void func_0001C208(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    D_0002C314 = 1;
    sceNet_lib_57CC57DA(&D_0002DC30, 0, 0x48);
    func_00013ED4(&D_0002DC78, D_0002C318, D_0002C318);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001C26C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001C374);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001C448);

void func_0001C57C(void *arg0, s16 arg1) {
    void *var_a2;

    var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(var_a2, s16 *, 0x3C) = arg1;
    if (M2C_FIELD(var_a2, u16 *, 0x64) & 0x3C) {
        func_000048B8((s32) var_a2, (s32) (var_a2 + 0x44));
        var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    }
    if (!(M2C_FIELD(var_a2, u16 *, 0x8C) & 0x3C)) {

    } else {
        func_000048B8((s32) var_a2, (s32) (var_a2 + 0x6C));
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001C5F0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001CBCC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001F088);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001F30C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001F3B0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001F4CC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001F5A0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001FA38);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001FE88);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0001FFF0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00020690);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00020914);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00020BB8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00021070);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00021458);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000214B0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000215C4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000223CC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00022450);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000225DC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00022714);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000228BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00022E84);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023030);

s32 func_000232C0(void *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    var_v0 = 0;
    var_s0 = M2C_FIELD(arg0, void **, 4);
    if (var_s0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 0);
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
            }
            *M2C_FIELD(var_s0, void ***, 4) = temp_v1;
            temp_v1_2 = M2C_FIELD(var_s0, void **, 0x14);
            if (temp_v1_2 != NULL) {
                M2C_FIELD(temp_v1_2, void ***, 0x18) = (void **) M2C_FIELD(var_s0, void ***, 0x18);
            }
            *M2C_FIELD(var_s0, void ***, 0x18) = temp_v1_2;
            sceNetIfhandle_lib_F56FAC82(M2C_FIELD(var_s0, s32 *, 0xC));
            sceNetIfhandle_lib_76BAD213(var_s0);
            var_s0 = M2C_FIELD(arg0, void **, 4);
            var_v0 = 1;
        } while (var_s0 != NULL);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023344);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000235D0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023704);

s32 func_00023828(void *arg0) {
    return (((M2C_FIELD(arg0, u16 *, 0x2A) & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023840);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023908);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000239E4);

void func_00023AB8(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, s32 *, 0x78) = (s32) M2C_FIELD(temp_v1, u16 *, 0x26);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023AD4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023B08);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023BD8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023C5C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023D1C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023D98);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00023F70);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024430);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024490);

void func_000244B0(void) {
    D_0002C358 = 0x3840;
    D_0002C39C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002C364 = 0x3840;
    D_0002DF50 = 0;
    D_0002C5D8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000244FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000249FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024C58);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024D44);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024DF8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024EC4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00024FB0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000252BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002534C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000253FC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00025638);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB0C);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB10);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB20);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB24);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB4C);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB54);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB90);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BB94);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BBCC);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BBD0);

INCLUDE_RODATA("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", D_0002BBD8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00025870);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00025F18);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00025FCC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000263D0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026500);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000266E4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026734);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026788);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026A94);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026C04);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026D7C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026F58);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00026FF4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027260);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000273BC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002757C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002766C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000276A4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000277E0);

s32 func_00027830(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = sceNet_lib_94B44F26();
    if (M2C_FIELD(arg0, s32 *, 0x130) == 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0xD4) == 0;
    }
    sceNet_lib_515B2F33(temp_a0);
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027880);

void func_00027C20(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027C28);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027CD8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027DB4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027E8C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027FA0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00027FC4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028080);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028124);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028164);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028194);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028290);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028318);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000283B8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000284B4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028608);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002862C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000286C8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028758);

void func_00028768(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) | 2);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028778);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028788);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000287F4);

void func_0002884C(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028854);

void func_000288E4(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000288EC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028930);

void func_000289B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) | 8);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000289C0);

void func_00028A18(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028A20);

void func_00028B30(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028B38);

void func_00028B7C(void) {
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028B84);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028D50);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028E80);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028FA0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00028FBC);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00029108);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00029280);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000293A4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00029460);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000296F8);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000297E4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_000299E4);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00029AC0);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_00029C28);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002A1B0);

void func_0002A244(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4BC) < 3) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x4BC) = 4;
        sceNet_lib_7C86FBA4(arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002A290);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002A570);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_7CB1D9E3);

s32 sceNetInet_lib_4C13BE10(void) {
    s32 temp_s0;

    temp_s0 = sceNet_lib_94B44F26();
    func_00009B0C();
    sceNet_lib_87DC7A7E();
    func_00028D50();
    sceNet_lib_515B2F33(temp_s0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInet_lib_2595064C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetInetNtop);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetInetPton);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetInetAddr);

void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002AA4C(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", func_0002AA4C);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetTerm);

void func_0002AF14(void) {
    sceNet_lib_435843CB();
}

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetErrno);

INCLUDE_ASM("tmp/asm/282/pspnet_inet/nonmatchings/pspnet_inet", sceNetInetGetPspError);
