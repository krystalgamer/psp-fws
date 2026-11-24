#include "common.h"
#include "libhttp_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017310);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017318);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpIsRequestInCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequestInCacheFirstMode);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateTemplate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteTemplate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00000990);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00000A74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteRequest);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D6F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_4E4A284A);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000165C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00001B70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00001C10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00001FC8);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000316C);
#endif

#if FW_VERSION == 100
s32 func_000031DC(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;

    temp_v0 = func_0000325C(arg0);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00003614(arg0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000043A0(arg0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000032B0(arg0);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00003668(arg0);
                }
            }
        }
    }
    return var_s0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000325C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000032B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003668);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003830);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003A24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003C04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003C90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003CEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003D08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003D28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003E34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003EEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D754);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D75C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003FB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000041A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000042D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000043A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004790);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004AFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004BC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004C8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004D54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004E18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004EDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004FA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", CopyHttpHeaderList);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", HttpWhichId);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000053D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000055B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000571C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005798);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005828);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _sceHttpMallocInternal);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _sceHttpFreeInternal);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _HttpAtoi64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _HttpI64toa);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000060F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006380);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000646C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000064A8);
#endif

#if FW_VERSION == 100
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2) {
    return func_00006B7C(arg0, (s32) arg1, arg2, 0, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _sceHttpReallocInternal);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", __HttpI64toa);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006658);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000673C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006B7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", DeleteHttpHeader);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006F94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000073F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000074AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _try_build_header);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007704);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000786C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007918);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007C90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007D88);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D96C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D974);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D97C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D988);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D98C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D994);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173D0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D9A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000083B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000088E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008A80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008D10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000213C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000230C);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_0001746C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008DA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008EBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00002704);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00002B38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00002CC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00002EFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00002F5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003088);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000312C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000031E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000032C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003480);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0001747C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000036B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_77EE5319);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_DD6E7857);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003FA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003FE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004020);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004090);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000041FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00004274);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000435C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveSystemCookie);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadSystemCookie);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetCookie);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddCookie);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_000050F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00008FB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000907C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000092D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000097F8);
#endif

#if FW_VERSION == 100
void func_00009A38(void) {
    func_00009E68(D_0000E0A0);
    D_0000E0A0 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009DA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009E68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009EE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A67C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005264);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_457D221D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005628);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005680);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000057B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000057E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005A54);
#endif

#if FW_VERSION != 100
void func_00005CD0(void *arg0, void *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    struct Unk_func_00005CD0_var_a0 *var_a0;
    struct Unk_func_00005CD0_var_s1 *var_s1;

    var_s1 = arg1;
    var_a0 = arg0;
    if (var_a0 != NULL) {
        do {
            temp_s0 = var_a0->unk7C;
            func_0000B2C0((s32) var_a0);
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
    }
    if (var_s1 != NULL) {
        do {
            temp_s0_2 = var_s1->unk4;
            func_000057E4(var_s1->unk0);
            func_0000B2C0((s32) var_s1);
            var_s1 = temp_s0_2;
        } while (temp_s0_2 != NULL);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005D30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00005F7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006290);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000063E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000643C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006A44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00006E54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000072B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007324);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000073A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007454);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007524);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007640);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007690);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000781C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000791C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000079CC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017510);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007A58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007B58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007C2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007DBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00007F64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000080FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000087E8);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInit);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DAEC);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInitWithPath);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsLoadDefaultCert);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000909C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B2D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B484);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000092E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000962C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetSslError);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsSetSslCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetCaList);
#endif

#if FW_VERSION != 100
s32 func_00009ADC(void) {
    return D_0001A5C4;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009B1C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009CA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00009D54);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B93C);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BAA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BAD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BBCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BBF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BC98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BD18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BDF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BE38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BE6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BED4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000BF6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000C030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000C0AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000C0DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000C114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000C2F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009E74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A048);
#endif

#if FW_VERSION != 100
void func_0000A08C(s32 arg0) {
    if (func_0000A0C0() >= 0) {
        func_0000AA9C(arg0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A0C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000AA9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017598);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_000175A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000AFEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B09C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B25C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B2C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B3E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B4CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B50C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveRetry);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_CC920C12);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_D29163DA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResHeaderMaxSize);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvBlockSize);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCacheContentLengthMaxSize);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpChangeHttpVersion);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRedirectCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieSendCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieRecvCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000D08C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000D260);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000D350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_8046E250);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000DAF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000DCC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000DD64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000DE04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000DE80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E058);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E0C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E100);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E148);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E214);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E2D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);
#endif

#if FW_VERSION != 100
s32 func_0000E568(void) {
    return D_0001AA44;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", module_reboot_before);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E5B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E738);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000E98C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000EAFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000EB44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000ECD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000EF08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000EFE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F05C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F18C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F1C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F404);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F53C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000F954);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000FA1C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000FAD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000FBE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000FC20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000FCBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010138);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010200);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010314);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000106A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000107EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000108A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010970);
#endif

#if FW_VERSION != 100
void func_00010A74(void) {
    sceNet_lib_57CC57DA(&D_0001AE08, 0, 0x194);
    D_0001AE08 = 0x01000000;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010AAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010B9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010DC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010EAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00010FA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011038);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011100);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000111BC);
#endif

#if FW_VERSION != 100
void func_00011484(void) {
    sceNet_lib_57CC57DA(&D_0001AF9C, 0, 0xB0);
    D_0001AF9C = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000114B8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017628);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0001762C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0001763C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000115B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011628);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000117BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000119A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011A84);
#endif

#if FW_VERSION != 100
void func_00011B3C(struct Unk_func_00011B3C_0 *arg0, struct Unk_func_00011B3C_1 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk28;
    if (temp_v0 != 0) {
        arg1->unk34 = temp_v0;
        arg0->unk28 = 0;
    }
    temp_v0_2 = arg0->unk2C;
    if (temp_v0_2 != 0) {
        arg1->unk38 = temp_v0_2;
        arg0->unk2C = 0;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011B6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011BB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011C04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00011C58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_739C2D79);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_B0257723);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A461A167);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001211C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012138);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000121EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000122A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000123BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000125E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012678);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000127B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012920);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001299C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012A5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012B20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012B44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012CEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012DB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012E3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012EB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00012F64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001301C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00013164);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000131F4);
#endif

#if FW_VERSION != 100
s32 func_00013294(void) {
    return D_0001B0CC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000132A0);
#endif

#if FW_VERSION != 100
s32 func_000132B0(void) {
    return D_0001B0E0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000132BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000132CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00013388);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000133E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001361C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkPspError);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00013CE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00013E98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00013F6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001408C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00014208);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017684);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00014284);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000147F8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017794);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0001779C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_000177A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_000177AC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_000177BC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_000177C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00014970);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00014C48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001500C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015080);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000151D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000152A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015324);
#endif

#if FW_VERSION != 100
void func_00015428(void) {
    sceKernelCpuSuspendIntr();
}
#endif

#if FW_VERSION != 100
void func_00015444(void) {
    sceKernelCpuResumeIntr();
}
#endif

#if FW_VERSION != 100
void func_00015460(void) {
    sceKernelUtilsMd5Digest();
}
#endif

#if FW_VERSION != 100
void func_0001547C(void) {
    sceKernelUtilsMd5BlockInit();
}
#endif

#if FW_VERSION != 100
void func_00015498(void) {
    sceKernelUtilsMd5BlockUpdate();
}
#endif

#if FW_VERSION != 100
void func_000154B4(void) {
    sceKernelUtilsMd5BlockResult();
}
#endif

#if FW_VERSION != 100
void func_000154D0(void) {
    sceNetInetInetPton();
}
#endif

#if FW_VERSION != 100
void func_000154EC(void) {
    sceRtcGetCurrentTick();
}
#endif

#if FW_VERSION != 100
void func_00015508(void) {
    sceRtcTickAddSeconds();
}
#endif

#if FW_VERSION != 100
void func_00015524(void) {
    sceRtcParseDateTime();
}
#endif

#if FW_VERSION != 100
void func_00015540(void) {
    sceRtcFormatRFC2822();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_0001555C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000155FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015664);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015810);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_000159BC);
#endif

#if FW_VERSION == 100
void func_00015A10(s32 arg0) {
    func_0000C114(arg0, 0, 0xA);
}
#else
INCLUDE_ASM("nonmatchings/libhttp", func_00015A10);
#endif

#if FW_VERSION != 100
void func_00015A40(void) {
    sceHttpStorage_CDA3D8F6();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015A5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015A9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015ADC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015B00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libhttp", func_00015BC0);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00015C90);

INCLUDE_ASM("nonmatchings/libhttp", func_00016204);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017848);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017860);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libhttp", D_00017960);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000179D0);
