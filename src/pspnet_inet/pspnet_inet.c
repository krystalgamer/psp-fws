/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetTerm);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetErrno);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_5155EC8A);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_4F68DB0E);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_6A046357);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_5155EC8A);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_E6F67D14);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_3D905F34);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_59561561);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_DC38FEE9);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_DE9E5174);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_824CBC6D);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_4459EAAF);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_A94A75E7);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_EB7A7E4F);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_FDE938A7);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_7776A492);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_3FDDB0BA);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_8FE19FC4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001584);
#endif

#if FW_VERSION < 201
void func_00001584(void) {
    D_0002EB40 = 0;
    D_0002EB44 = 0;
}
#endif

#if FW_VERSION >= 282
void func_00001320(void) {
    D_0002C4F0 = 0;
    D_0002C4F4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001334);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000014DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001624);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_AC9D90A5);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_AAF4895A);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetTcpcbstat);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetUdpcbstat);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001D50);
#endif

#if FW_VERSION < 201
void func_00001D50(void) {
    sceNet_lib_E155112D(&func_00001BE4, func_00001DD8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001D78);
#endif

#if FW_VERSION < 201
s32 func_00001D78(void) {
    return sceNet_lib_41621EB0();
}
#endif

#if FW_VERSION >= 282
void func_00001BA0(void) {
    sceNet_lib_E155112D(&func_00001BE4, func_00001C28);
}

void func_00001BC8(void) {
    sceNet_lib_41621EB0();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001BE4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001DD8);
#endif

#if FW_VERSION < 201
void func_00001DD8(void *arg0) {
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
#endif

#if FW_VERSION >= 282
void func_00001C28(struct Unk_func_00001C28_0 *arg0) {
    struct Unk_func_00001C28_temp_v1 *temp_v1;

    temp_v1 = arg0->unkB4;
    if ((temp_v1 == NULL) || (temp_v1->unk20 == 0)) {
        arg0->unk8 = (u16) (arg0->unk8 | 0x800);
    } else {
        temp_v1->unk20 = 0;
        temp_v1->unk48 = (s32) (temp_v1->unk48 | 2);
        sceKernelSignalSema(temp_v1->unk4C, 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001C80);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001FA4);
#else
void func_00001DF4(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001DFC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001E2C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001EA8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001F64);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002028);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000020C4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002168);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000220C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000023A8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000243C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000025CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000025FC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002844);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002E98);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002684);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002CAC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000038BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003A00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003D28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003F68);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000042F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000431C);
#endif

#if FW_VERSION < 201
s32 func_0000431C(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = sceNet_lib_94B44F26();
    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 (**)(void *, M2C_UNK, M2C_UNK, s32, M2C_UNK), 0x1C)(arg0, 2, 0, arg1, 0);
    sceNet_lib_515B2F33(temp_s2);
    return temp_s1;
}
#endif

#if FW_VERSION >= 282
void func_000040FC(void) {
    D_0002BEC0 = 0x80;
    D_0002C504 = 0;
    D_0002CC9C.unk0 = 0;
    D_0002CC9C.unk4 = &D_0002CC9C;
}

s32 func_00004124(struct Unk_func_00004124_0 *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = sceNet_lib_94B44F26();
    temp_s1 = arg0->unk10->unk1C(arg0, 2, 0, arg1, 0);
    sceNet_lib_515B2F33(temp_s2);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004190);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004248);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000042D4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004404);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000046A8);
#endif

#if FW_VERSION < 201
void func_000046A8(s32 arg0) {
    sceNet_lib_B9C780C7(arg0 + 0x5C);
}
#endif

#if FW_VERSION >= 282
void func_000044AC(s32 arg0) {
    sceNet_lib_B9C780C7(arg0 + 0x5C);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000044C8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000453C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004620);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000047DC);
#endif

#if FW_VERSION < 201
void func_000047DC(struct Unk_func_000047DC_0 *arg0, struct Unk_func_000047DC_1 *arg1, s32 arg2) {
    void **temp_v0;
    void *temp_a0;

    arg1->unk14 = arg0;
    if (arg2 == 0) {
        arg1->unk18 = &arg0->pad0[0x1C];
        arg0->unk34 += 1;
    } else {
        arg1->unk18 = &arg0->pad0[0x24];
        arg0->unk36 += 1;
    }
    temp_a0 = arg1->unk18;
    arg1->unk2C = 0;
    arg1->unk30 = M2C_FIELD(temp_a0, void ***, 4);
    temp_v0 = M2C_FIELD(temp_a0, void ***, 4);
    M2C_FIELD(temp_a0, void ***, 4) = (void **) &arg1->unk2C;
    *temp_v0 = arg1;
}
#endif

#if FW_VERSION >= 282
void func_000047DC(struct Unk_func_000047DC_0 *arg0, struct Unk_func_000047DC_1 *arg1, s32 arg2) {
    void **temp_v0;
    struct Unk_func_000047DC_temp_a0 *temp_a0;

    arg1->unk14 = arg0;
    if (arg2 == 0) {
        arg1->unk18 = (void *) ((u8 *)arg0 + 0x1C);
        arg0->unk34 = (u16) (arg0->unk34 + 1);
    } else {
        arg1->unk18 = (void *) ((u8 *)arg0 + 0x24);
        arg0->unk36 = (u16) (arg0->unk36 + 1);
    }
    temp_a0 = arg1->unk18;
    arg1->unk2C = 0;
    arg1->unk30 = (void **) temp_a0->unk4;
    temp_v0 = temp_a0->unk4;
    temp_a0->unk4 = (void **) (&arg1->unk2C);
    *temp_v0 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004838);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000048B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004944);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000049EC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004A3C);
#else
void func_00004A3C(struct Unk_func_00004A3C_0 *arg0) {
    func_00005008(arg0);
    arg0->unkC = 0;
    arg0->unk4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004A68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004B40);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004E28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005008);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005050);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005308);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005440);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000562C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005700);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005964);
#endif

#if FW_VERSION < 201
void func_00005964(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) ((M2C_FIELD(arg0, u16 *, 8) & 0xFFF5) | 4);
}
#endif

#if FW_VERSION >= 282
void func_00005778(struct Unk_func_00005778_0 *arg0) {
    arg0->unk8 = (u16) ((arg0->unk8 & 0xFFF5) | 4);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000578C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000580C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005A78);
#endif

#if FW_VERSION < 151 || FW_VERSION == 152
void func_00005A78(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x10);
    if (!(M2C_FIELD(arg0, u16 *, 0x8C) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, (s32) (arg0 + 0x6C));
    }
}
#endif

#if FW_VERSION == 151
void func_00005A78(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x10);
    if (!(M2C_FIELD(arg0, u16 *, 0x8C) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, arg0 + 0x6C);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005AB8);
#endif

#if FW_VERSION < 151 || FW_VERSION == 152
void func_00005AB8(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x20);
    if (!(M2C_FIELD(arg0, u16 *, 0x64) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, (s32) (arg0 + 0x44));
    }
}
#endif

#if FW_VERSION == 151
void func_00005AB8(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x20);
    if (!(M2C_FIELD(arg0, u16 *, 0x64) & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, arg0 + 0x44);
    }
}
#endif

#if FW_VERSION >= 282
void func_0000588C(struct Unk_func_0000588C_0 *arg0) {
    arg0->unk8 = (u16) (arg0->unk8 | 0x10);
    if (!(arg0->unk8C & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, (u8 *)arg0 + 0x6C);
    }
}

void func_000058CC(struct Unk_func_000058CC_0 *arg0) {
    arg0->unk8 = (u16) (arg0->unk8 | 0x20);
    if (!(arg0->unk64 & 0x3C)) {

    } else {
        func_000048B8((s32) arg0, (u8 *)arg0 + 0x44);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000590C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005934);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000059AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005D70);
#endif

#if FW_VERSION < 201
s32 func_00005D70(void) {
    return 3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005C9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocket);
#endif

#if FW_VERSION >= 282
s32 func_00005B8C(void) {
    return 3;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005B94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetBind);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetAccept);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetConnect);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSend);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSendto);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSendmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00006568);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecv);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecvfrom);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecvmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00006AB0);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSetsockopt);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetsockopt);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetsockname);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetpeername);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007490);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSelect);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007914);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000076C4);
#endif

#if FW_VERSION < 201
void func_000076C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000076E0);
#endif

#if FW_VERSION < 201
void func_000076E0(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 282
void func_00007A88(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}

void func_00007AA4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetPoll);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007D50);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007E00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007E78);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_AEE60F84);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_B3FF98EB);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocket);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetBind);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetListen);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSend);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSendto);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecv);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecvfrom);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetShutdown);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000085D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000084B4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetClose);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetCloseWithRST);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocketAbort);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008704);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008874);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008970);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008A2C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008D34);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008D98);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008E40);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008FC8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000090FC);
#else
s32 func_000090FC(struct Unk_func_000090FC_0 *arg0, s32 arg1) {
    if (arg0->unk40 != arg1) {

    } else {
        func_0000BEE0(2, arg0->unkC, arg0->unk30, arg0->unk10, arg0->unk34, 0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009144);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009240);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000931C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000093F0);
#endif

#if FW_VERSION < 201
void func_000093F0(s32 arg0) {
    func_0000E448(arg0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000940C);
#endif

#if FW_VERSION < 201
void func_0000940C(s32 arg0) {
    func_0000C998(arg0, 2, 0);
}
#endif

#if FW_VERSION >= 282
void func_00009570(s32 arg0) {
    func_0000E4E4(arg0, 0);
}

void func_0000958C(s32 arg0) {
    func_0000C998(arg0, 2, 0);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095AC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009650);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009548);
#endif

#if FW_VERSION < 201
void func_00009548(s32 arg0) {
    func_0000E448(arg0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009564);
#endif

#if FW_VERSION < 201
void func_00009564(void *arg0) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_00002028(0, M2C_FIELD(var_s0, s32 *, 0));
            var_s0 = M2C_FIELD(var_s0, void **, 0x10);
        } while (var_s0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095A4);
#endif

#if FW_VERSION < 201
void func_000095A4(s32 arg0) {
    func_0000E3F0(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095C0);
#endif

#if FW_VERSION < 201
void func_000095C0(s32 arg0) {
    func_0000E3F0(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095DC);
#endif

#if FW_VERSION < 201
s32 func_000095DC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
void func_000096C8(s32 arg0) {
    func_0000E4E4(arg0, 1);
}

void func_000096E4(struct Unk_func_000096E4_0 *arg0) {
    struct Unk_func_000096E4_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            func_00002028(0, var_s0->unk0);
            var_s0 = var_s0->unk10;
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
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009764);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009788);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000963C);
#endif

#if FW_VERSION < 201
void func_0000963C(void) {
    sceNet_lib_976AB1E9(&func_0000986C, func_000097BC, func_000093F0, func_0000940C, &func_000095AC, &func_00009650, func_00009548, func_00009564, func_000095A4, func_000095C0, func_000095DC, &func_00009764, &func_00009788);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000096D0);
#endif

#if FW_VERSION < 201
s32 func_000096D0(void) {
    return sceNet_lib_4C8FD452();
}
#endif

#if FW_VERSION >= 282
void func_000097BC(void) {
    sceNet_lib_976AB1E9(&func_0000986C, func_0000993C, func_00009570, func_0000958C, &func_000095AC, &func_00009650, func_000096C8, func_000096E4, func_00009724, func_00009740, func_0000975C, &func_00009764, &func_00009788);
}

void func_00009850(void) {
    sceNet_lib_4C8FD452();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000986C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000097BC);
#endif

#if FW_VERSION < 201
void func_000097BC(void) {

}
#endif

#if FW_VERSION >= 282
void func_0000993C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009944);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009A14);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009A58);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009968);
#endif

#if FW_VERSION < 201
s32 func_00009968(s32 arg0) {
    D_0002C51C = arg0;
    D_0002C520 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009984);
#endif

#if FW_VERSION < 201
s32 func_00009984(void) {
    D_0002C520 = 0;
    D_0002C51C = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000999C);
#endif

#if FW_VERSION < 201
void func_0000999C(void) {
    sceNet_lib_5ED457BE(&func_00009B84, &func_00009A14, &func_00009A58, &func_00009944);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000099D4);
#endif

#if FW_VERSION < 201
s32 func_000099D4(void) {
    return sceNet_lib_31F3CDA1();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_D7928A6D);
#endif

#if FW_VERSION < 201
s32 *sceNetInet_lib_D7928A6D(void) {
    return &D_0002D930;
}
#endif

#if FW_VERSION >= 282
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
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A144);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A470);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A61C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A804);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000AE9C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A960);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000AFE0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B41C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B580);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B5E0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B6C0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B774);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B7BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B91C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BA10);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BB7C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BE00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BEE0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C6D4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C818);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C8F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C998);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CC00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CCE8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CC8C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CD64);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CE98);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D170);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CF68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D048);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D104);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D15C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D128);
#endif

#if FW_VERSION < 201
s32 func_0000D128(void) {
    return 0x5F;
}
#endif

#if FW_VERSION >= 282
s32 func_0000D1F4(void) {
    return 0x5F;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D1FC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D37C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D25C);
#endif

#if FW_VERSION < 201
void func_0000D25C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D264);
#endif

#if FW_VERSION < 201
s32 func_0000D264(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x34) & 0x2000) && (M2C_FIELD(arg0, s32 *, 0x80) == arg1)) {
        func_0000D378((s32) arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D254);

void func_0000D330(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 func_0000D338(struct Unk_func_0000D338_0 *arg0, s32 arg1) {
    if ((arg0->unk34 & 0x2000) && (arg0->unk80 == arg1)) {
        func_0000D378((s32) arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D378);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D484);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B4EC);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B4F0);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B508);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B518);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B530);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B540);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B550);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B55C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B68C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B69C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B77C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B78C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B798);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B7DC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D6D0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DD34);
#endif

#if FW_VERSION < 201
void func_0000DD34(s32 arg0, void *arg1, void *arg2) {
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DF80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DDC0);
#endif

#if FW_VERSION >= 282
void func_0000DDCC(s32 arg0, struct Unk_func_0000DDCC_1 *arg1, struct Unk_func_0000DDCC_2 *arg2) {
    if (arg0 & 8) {
        arg2->unk10 = (s32) arg1->unk10;
    }
    if (arg0 & 0x10) {
        arg2->unk14 = (s32) arg1->unk14;
    }
    if (arg0 & 0x20) {
        arg2->unk18 = (s32) arg1->unk18;
    }
    if (arg0 & 0x40) {
        arg2->unk1C = (s32) arg1->unk1C;
    }
    if (arg0 & 0x80) {
        arg2->unk20 = (s32) arg1->unk20;
    }
    if (arg0 & 2) {
        arg2->unk8 = (s32) arg1->unk8;
    }
    if (arg0 & 1) {
        arg2->unk4 = (s32) arg1->unk4;
    }
    if (arg0 & 4) {
        arg2->unkC = (s32) arg1->unkC;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DE58);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DF08);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E0EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E318);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E3F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E448);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E4E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E5A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E704);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E928);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000EACC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000ED18);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000ED48);
#endif

#if FW_VERSION < 201
void func_0000ED48(void *arg0) {
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000ED94);
#endif

#if FW_VERSION < 201
void func_0000ED94(void *arg0) {
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
#endif

#if FW_VERSION >= 282
void func_0000EDB8(struct Unk_func_0000EDB8_0 *arg0) {
    struct Unk_func_0000EDB8_temp_a0 *temp_a0;
    struct Unk_func_0000EDB8_temp_v1 *temp_v1;

    temp_a0 = arg0->unk8;
    temp_a0->unkC = 0;
    func_000023A8((s32) temp_a0);
    temp_v1 = arg0->unk0;
    if (temp_v1 != NULL) {
        temp_v1->unk4 = (void **) arg0->unk4;
    }
    *arg0->unk4 = temp_v1;
    sceNetIfhandle_lib_76BAD213(arg0);
}

void func_0000EE04(struct Unk_func_0000EE04_0 *arg0) {
    struct Unk_func_0000EE04_temp_v1 *temp_v1;
    struct Unk_func_0000EE04_temp_v1_2 *temp_v1_2;

    temp_v1 = arg0->unk8;
    if (!(temp_v1->unk8 & 1)) {

    } else {
        temp_v1->unkC = 0;
        func_000023A8((s32) temp_v1);
        temp_v1_2 = arg0->unk0;
        if (temp_v1_2 != NULL) {
            temp_v1_2->unk4 = (void **) arg0->unk4;
        }
        *arg0->unk4 = temp_v1_2;
        sceNetIfhandle_lib_76BAD213(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000EE68);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B6FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F040);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F1F8);
#endif

#if FW_VERSION < 201
void func_0000F1F8(void) {
    D_0002CD80 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F204);
#endif

#if FW_VERSION < 201
s32 func_0000F204(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F20C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F238);
#else
void func_0000F268(void) {
    D_0002CD80 = 0;
}

s32 func_0000F274(void) {
    return 0;
}

void func_0000F27C(struct Unk_func_0000F27C_0 *arg0, struct Unk_func_0000F27C_1 *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = arg0->unk10;
    temp_a2 = *temp_a0;
    arg1->unkC = (s32) temp_a2;
    sceNet_lib_2F305274(temp_a0, arg1->unk8, temp_a2);
}

void func_0000F2A8(struct Unk_func_0000F2A8_0 *arg0, struct Unk_func_0000F2A8_1 *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = arg0->unkC;
    temp_a2 = *temp_a0;
    arg1->unkC = (s32) temp_a2;
    sceNet_lib_2F305274(temp_a0, arg1->unk8, temp_a2);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F2D4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F61C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F690);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F71C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F730);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FA70);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FBD0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FDC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FED8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001044C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010528);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010668);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000106E0);
#endif

#if FW_VERSION < 201
s32 func_000106E0(void) {
    return 0x5F;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010378);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000106E8);
#endif

#if FW_VERSION >= 282
s32 func_00010700(void) {
    return 0x5F;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010708);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010770);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000107F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010930);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010A28);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010CCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010D50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010B98);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010874);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010C04);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010C08);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011678);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011968);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001184C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011820);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011D04);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000119FC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011DC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011D6C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012230);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012354);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012108);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000124E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012478);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012684);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000123FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012490);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012818);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000128EC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012758);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000127EC);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B754);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012550);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000129D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000128AC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001292C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012A08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000129AC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012AC4);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012730);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012BE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012B9C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012CDC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000130B8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012EC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013114);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000133CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013640);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D0C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000130B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013338);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001358C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000137AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000138B4);
#else
void func_000138B4(struct Unk_func_000138B4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk20;
    if (temp_v1 != 0) {
        func_0000D15C(temp_v1);
        arg0->unk20 = 0;
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013478);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013530);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001361C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000139A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013A88);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013BC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000138F0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000139A8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013A94);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013BAC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001384C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013E54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013ED4);
#endif

#if FW_VERSION < 201
void func_00013ED4(struct Unk_func_00013ED4_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk0 = arg0;
    arg0->unk4 = arg0;
    arg0->unk8 = sceNet_lib_C4261339(arg1, arg0->pad10);
    temp_v0 = sceNet_lib_C4261339(arg2, &arg0->pad10[4]);
    arg0->unk1A = 0x3FF;
    arg0->unkC = temp_v0;
    arg0->unk18 = (u16) D_0002E5EC + (sceNet_lib_1858883D() % (u32) ((D_0002E5F0 - D_0002E5EC) + 1));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013CC4);

void func_00013ED4(struct Unk_func_00013ED4_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk0 = arg0;
    arg0->unk4 = arg0;
    arg0->unk8 = sceNet_lib_C4261339(arg1, (u8 *)arg0 + 0x10);
    temp_v0 = sceNet_lib_C4261339(arg2, (u8 *)arg0 + 0x14);
    arg0->unk1A = 0x3FF;
    arg0->unkC = temp_v0;
    arg0->unk18 = (s16) ((u16) D_0002C02C + (sceNet_lib_1858883D() % (u32) ((D_0002C030 - D_0002C02C) + 1)));
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013F68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014018);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014120);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000142CC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000143A8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000143FC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013E20);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013F3C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014450);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014614);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014710);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000141EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014258);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000142C4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000143E0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014480);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014524);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014588);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014668);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014890);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000145F4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001486C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000150C8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015654);
#endif

#if FW_VERSION < 201
void func_00015654(struct Unk_func_00015654_0 *arg0) {
    struct Unk_func_00015654_temp_v1 *temp_s1;
    struct Unk_func_00015654_temp_v1 *temp_v1;
    struct Unk_func_00015654_temp_v1_2 *temp_v1_2;
    struct Unk_func_00015654_var_s0 *temp_a0;
    struct Unk_func_00015654_var_s0 *var_s0;
    void **temp_a1;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            temp_s1 = var_s0->unk0;
            sceNetIfhandle_lib_F56FAC82(var_s0->unkC);
            temp_v1 = var_s0->unk0;
            temp_a0 = var_s0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = var_s0->unk4;
            }
            temp_a1 = var_s0->unk4;
            var_s0 = (struct Unk_func_00015654_var_s0 *) temp_s1;
            *temp_a1 = temp_v1;
            sceNetIfhandle_lib_76BAD213(temp_a0);
        } while (temp_s1 != NULL);
    }
    temp_v1_2 = arg0->unk0;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk4 = arg0->unk4;
    }
    *arg0->unk4 = temp_v1_2;
    sceNetIfhandle_lib_76BAD213(arg0);
    D_0002C57C -= 1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015278);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015ADC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016030);
#endif

#if FW_VERSION >= 282
void func_00015654(struct Unk_func_00015654_0 *arg0) {
    void **temp_a1;
    void *temp_a0;
    void *temp_s1;
    struct Unk_func_00015654_temp_v1 *temp_v1;
    struct Unk_func_00015654_temp_v1_2 *temp_v1_2;
    struct Unk_func_00015654_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            temp_s1 = var_s0->unk0;
            sceNetIfhandle_lib_F56FAC82(var_s0->unkC);
            temp_v1 = var_s0->unk0;
            temp_a0 = var_s0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = (void **) var_s0->unk4;
            }
            temp_a1 = var_s0->unk4;
            var_s0 = temp_s1;
            *temp_a1 = temp_v1;
            sceNetIfhandle_lib_76BAD213(temp_a0);
        } while (temp_s1 != NULL);
    }
    temp_v1_2 = arg0->unk0;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk4 = (void **) arg0->unk4;
    }
    *arg0->unk4 = temp_v1_2;
    sceNetIfhandle_lib_76BAD213(arg0);
    D_0002C57C -= 1;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000156F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015BD8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015C8C);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015888);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000161A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015CFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000160E4);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B764);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000161F0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000165BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016644);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016788);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016830);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016D78);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016938);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000169EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000175DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000177A4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001788C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017F60);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017BF0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001794C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018480);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017DA0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018328);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018478);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018594);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000185BC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018E1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018B28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018640);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018BE8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000192B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000198F4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018628);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018A90);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019034);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000195B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019668);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000196DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000197D4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A410);
#endif

#if FW_VERSION < 201
s32 func_0001A410(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00019A98(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019AA0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019BCC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A49C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A548);
#endif

#if FW_VERSION < 201
void func_0001A548(void *arg0) {
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
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000197EC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A5A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019B24);

void func_00019C00(struct Unk_func_00019C00_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk34;
    if ((temp_a1 & 0x14) != 0x14) {
        if (!(arg0->unk50 & 1)) {
            arg0->unk54 = 0;
        }
    } else {
        func_0000BEE0(2, arg0->unkC, arg0->unk30, arg0->unk10, temp_a1, 0);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019C5C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A5C8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A714);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B398);
#else
void func_0001A8AC(void) {
    sceNet_lib_57CC57DA(&D_0002DBC8, 0, 0x48);
    D_0002DBC0 = 0;
    D_0002C5BC = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A8E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B50C);
#endif

#if FW_VERSION < 201
void func_0001B50C(void *arg0) {
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
#endif

#if FW_VERSION >= 282
void func_0001AA20(struct Unk_func_0001AA20_0 *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = arg0->unk1C;
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((arg0->unk0 & temp_a3) != temp_v1_2) && !(arg0->unk4->unk30 & 8) && (arg0->unk20->unk4 != 1)) {
            func_0001A714((s32) arg0, 0x17);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001AA90);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001ABA4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B5E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001AAFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001AE68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B094);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B1B0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B5C0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B5FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B6BC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B2E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B820);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C2E0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C30C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C60C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B754);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B770);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BA74);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BC98);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BEDC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CE38);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BE04);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CE9C);
#endif

#if FW_VERSION >= 282
void func_0001C208(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    D_0002C314 = 1;
    sceNet_lib_57CC57DA(&D_0002DC30, 0, 0x48);
    func_00013ED4(&D_0002DC78, D_0002C318, D_0002C318);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C26C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C374);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C448);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D1E4);
#endif

#if FW_VERSION < 201
void func_0001D1E4(void *arg0, s16 arg1) {
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
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CC7C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D258);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D85C);
#endif

#if FW_VERSION >= 282
void func_0001C57C(struct Unk_func_0001C57C_0 *arg0, s16 arg1) {
    struct Unk_func_0001C57C_var_a2 *var_a2;

    var_a2 = arg0->unk1C;
    var_a2->unk3C = arg1;
    if (var_a2->unk64 & 0x3C) {
        func_000048B8((s32) var_a2, (s32) ((u8 *)var_a2 + 0x44));
        var_a2 = arg0->unk1C;
    }
    if (!(var_a2->unk8C & 0x3C)) {

    } else {
        func_000048B8((s32) var_a2, (s32) ((u8 *)var_a2 + 0x6C));
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C5F0);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CBCC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F088);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F30C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F3B0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F0A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F674);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F178);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020A20);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020B74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F4CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F5A0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FA38);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FE88);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FBBC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000204E4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020788);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000215D8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021D08);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000222B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000227D4);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FFF0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020690);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020914);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020BB8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021070);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021458);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000214B0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000215C4);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021FF0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023BE4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023C74);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000223CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022450);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000225DC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023F58);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022714);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000228BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022E84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023030);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024B7C);
#endif

#if FW_VERSION < 201
s32 func_00024B7C(void *arg0) {
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
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022F68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000231F8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024C00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024F3C);
#endif

#if FW_VERSION >= 282
s32 func_000232C0(struct Unk_func_000232C0_0 *arg0) {
    s32 var_v0;
    struct Unk_func_000232C0_temp_v1 *temp_v1;
    struct Unk_func_000232C0_temp_v1_2 *temp_v1_2;
    struct Unk_func_000232C0_var_s0 *var_s0;

    var_v0 = 0;
    var_s0 = arg0->unk4;
    if (var_s0 != NULL) {
        do {
            temp_v1 = var_s0->unk0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = (void **) var_s0->unk4;
            }
            *var_s0->unk4 = temp_v1;
            temp_v1_2 = var_s0->unk14;
            if (temp_v1_2 != NULL) {
                temp_v1_2->unk18 = (void **) var_s0->unk18;
            }
            *var_s0->unk18 = temp_v1_2;
            sceNetIfhandle_lib_F56FAC82(var_s0->unkC);
            sceNetIfhandle_lib_76BAD213(var_s0);
            var_s0 = arg0->unk4;
            var_v0 = 1;
        } while (var_s0 != NULL);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023344);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000235D0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023704);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000251A4);
#endif

#if FW_VERSION < 151
s32 func_000251A4(void *arg0) {
    return -((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) == 0x180) & 0xC;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_000251A4(void *arg0) {
    return (((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#endif

#if FW_VERSION >= 282
s32 func_00023828(struct Unk_func_00023828_0 *arg0) {
    return (((arg0->unk2A & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023840);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023908);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000239E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002544C);
#endif

#if FW_VERSION < 201
void func_0002544C(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, s32 *, 0x78) = (s32) M2C_FIELD(temp_v1, u16 *, 0x24);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025468);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002373C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023CD0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002380C);
#endif

#if FW_VERSION >= 282
void func_00023AB8(struct Unk_func_00023AB8_0 *arg0) {
    struct Unk_func_00023AB8_temp_v1 *temp_v1;

    temp_v1 = arg0->unk10;
    if (temp_v1 != NULL) {
        temp_v1->unk78 = (s32) temp_v1->unk26;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023AD4);
#endif

#if FW_VERSION < 151 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023B08);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002559C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023BD8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023C5C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023D1C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000256DC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023D98);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025940);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023F70);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024430);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024490);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025E94);
#endif

#if FW_VERSION < 201
void func_00025E94(void) {
    D_0002E918 = 0x3840;
    D_0002E95C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002E924 = 0x3840;
    D_0002DF50 = 0;
    D_0002C5D8 = 0;
}
#endif

#if FW_VERSION >= 282
void func_000244B0(void) {
    D_0002C358 = 0x3840;
    D_0002C39C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002C364 = 0x3840;
    D_0002DF50 = 0;
    D_0002C5D8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000244FC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024B04);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000263E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000249FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024C58);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024D44);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024DF8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024EC4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_7CB1D9E3);

s32 sceNetInet_lib_4C13BE10(void) {
    s32 temp_s0;

    temp_s0 = sceNet_lib_94B44F26();
    func_00009984();
    sceNet_lib_87DC7A7E();
    func_00028D50();
    sceNet_lib_515B2F33(temp_s0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024FB0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000252BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002534C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000253FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025638);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB0C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB10);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB20);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB24);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB4C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB54);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB90);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB94);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBCC);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBD0);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBD8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002590C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002DFB4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027304);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025870);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025F18);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000263D0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026500);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000266E4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026734);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026788);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026A94);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026C04);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026D7C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026F58);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026FF4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000273BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002757C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002766C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000276A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000277E0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029330);
#endif

#if FW_VERSION < 151
s32 func_00029330(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = sceNet_lib_94B44F26();
    if ((M2C_FIELD(arg0, s32 *, 0x130) == 0) && (M2C_FIELD(arg0, s32 *, 0xD4) == 0)) {
        var_s1 = 1;
    }
    sceNet_lib_515B2F33(temp_a0);
    return var_s1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00029330(void *arg0) {
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
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029384);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027C20);
#endif

#if FW_VERSION < 201
void func_00027C20(void) {

}
#endif

#if FW_VERSION >= 282
s32 func_00027830(struct Unk_func_00027830_0 *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = sceNet_lib_94B44F26();
    if (arg0->unk130 == 0) {
        var_s1 = arg0->unkD4 == 0;
    }
    sceNet_lib_515B2F33(temp_a0);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027880);

void func_00027C20(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027C28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027CD8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027DB4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027E8C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027FA0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027FC4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028080);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028124);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028164);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028194);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028290);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028318);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000283B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000284B4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028608);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002862C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000286C8);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028758);
#else
void func_00028758(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x270) = (s32) (M2C_FIELD(arg0, s32 *, 0x270) & ~0x10);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028768);
#endif

#if FW_VERSION < 201
void func_00028768(struct Unk_func_00028768_0 *arg0) {
    arg0->unk254 |= 2;
}
#endif

#if FW_VERSION >= 282
void func_00028768(struct Unk_func_00028768_0 *arg0) {
    arg0->unk254 = (s32) (arg0->unk254 | 2);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028778);
#else
void func_00028778(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~2);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028788);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000287F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        func_00025F18((s32) &D_0002BB94, (s32) arg0, 2);
    }
    sceNet_lib_A93A93E9(arg0 + 0x1FC);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~4);
}
#endif

#if FW_VERSION == 100
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        func_00025F18((s32) &D_0002BB94, (s32) arg0, 2);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002884C);
#endif

#if FW_VERSION < 201
void func_0002884C(void) {

}
#endif

#if FW_VERSION >= 282
void func_0002884C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028854);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000288E4);
#endif

#if FW_VERSION < 201
void func_000288E4(void) {

}
#endif

#if FW_VERSION >= 282
void func_000288E4(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000288EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028930);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A538(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) | 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A548(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        func_00025F18((s32) &D_0002BBD8, (s32) arg0, 2);
    }
    sceNet_lib_A93A93E9(arg0 + 0x220);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A4DC);
#endif

#if FW_VERSION < 201
void func_0002A4DC(void) {

}
#endif

#if FW_VERSION >= 282
void func_000289B0(struct Unk_func_000289B0_0 *arg0) {
    arg0->unk254 = (s32) (arg0->unk254 | 8);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000289C0);
#endif

#if FW_VERSION == 100
void func_000289C0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        func_00025F18((s32) &D_0002BBD8, (s32) arg0, 2);
    }
}

void func_0002A51C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028A18(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028A20);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A62C);
#endif

#if FW_VERSION < 201
void func_0002A62C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028B30(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028B38);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A67C);
#endif

#if FW_VERSION < 201
void func_0002A67C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028B7C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028D50);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028E80);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028FA0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028FBC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029108);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029280);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000293A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029460);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000297CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000298B8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B24C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B350);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000296F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000297E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000299E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029B94);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B640);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029C28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029F28);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BD24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BDB4);
#endif

#if FW_VERSION < 201
void func_0002BDB4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4BC) < 3) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x4BC) = 4;
        sceNet_lib_7C86FBA4(arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BE00);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029AC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029C28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A1B0);

void func_0002A244(struct Unk_func_0002A244_0 *arg0) {
    if (arg0->unk4BC < 3) {

    } else {
        arg0->unk4BC = 4;
        sceNet_lib_7C86FBA4((u8 *)arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A290);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A570);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_7CB1D9E3);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_4C13BE10);
#endif

#if FW_VERSION >= 282
s32 sceNetInet_lib_4C13BE10(void) {
    s32 temp_s0;

    temp_s0 = sceNet_lib_94B44F26();
    func_00009B0C();
    sceNet_lib_87DC7A7E();
    func_00028D50();
    sceNet_lib_515B2F33(temp_s0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_2595064C);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetNtop);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetPton);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetAddr);
#endif

#if FW_VERSION < 151
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -1;
    if (func_0002C4CC(arg0, &sp0, 0) != 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    return (func_0002C4CC(arg0, &sp0, 0) != 0) ? sp0 : -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetAton);
#endif

#if FW_VERSION < 201
void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002C4CC(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C4CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetTerm);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C7B4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C7E0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C80C);
#endif

#if FW_VERSION < 151 || FW_VERSION == 152
s32 *func_0002C820(void) {
    return &D_0002EAB1;
}
#endif

#if FW_VERSION == 151
M2C_UNK *func_0002C820(void) {
    return &D_0002EAB1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C82C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C864);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002AAC8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C8D8);
#endif

#if FW_VERSION < 201
u8 *func_0002C918(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C94C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C9B8);
#endif

#if FW_VERSION < 201
void func_0002C9B8(s32 arg0, s32 arg1) {
    func_0002C864(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C9DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CA04);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CAB4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002ACFC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CAFC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CB94);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CC10);

u8 *func_0002CC40(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CC78);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CCAC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CCF8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002D420);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002E290);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002C5D8_v152);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002C498);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002E298);
#endif

#if FW_VERSION >= 282
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    return (func_0002AA4C(arg0, &sp0, 0) != 0) ? sp0 : -1;
}

void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002AA4C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002AA4C);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetTerm);

void func_0002AF14(void) {
    sceNet_lib_435843CB();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetErrno);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetPspError);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_CCC18C45);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_2D5868C0);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_1D023504);
#endif
