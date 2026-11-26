#include "common.h"
#include "libhttp_decls.h"

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/libhttp", D_00017A10);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A14);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A24);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A38);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A48);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A5C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A6C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A7C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A90);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A9C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AB0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AC8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AE0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AF4);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B04);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B14);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B2C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B34);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E4C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E54);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E5C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E78);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E88);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E8C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EA4);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EA8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EE0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EF0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F30);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F38);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F44);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00016EB0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00016EB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017310);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017318);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/libhttp", func_00000000);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpIsRequestInCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequestInCacheFirstMode);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateTemplate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteTemplate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);

INCLUDE_ASM("nonmatchings/libhttp", func_00000990);

INCLUDE_ASM("nonmatchings/libhttp", func_00000A74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00000DDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateTemplate);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpCreateTemplate(void *arg0, s32 arg1, s32 arg2) {
    return func_0000A774((s32) arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteTemplate);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteTemplate(s32 arg0) {
    return func_0000A9B0(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D6F8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_4E4A284A);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);

INCLUDE_ASM("nonmatchings/libhttp", func_0000165C);

INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00001AB4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00001B70);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00001C10);

INCLUDE_ASM("nonmatchings/libhttp", func_00001FC8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_000173A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00003094);

INCLUDE_ASM("nonmatchings/libhttp", func_0000316C);

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

INCLUDE_ASM("nonmatchings/libhttp", func_0000325C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D730);

INCLUDE_ASM("nonmatchings/libhttp", func_000032B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00003614);

INCLUDE_ASM("nonmatchings/libhttp", func_00003668);

INCLUDE_ASM("nonmatchings/libhttp", func_00003830);

INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);

INCLUDE_ASM("nonmatchings/libhttp", func_00003A24);

INCLUDE_ASM("nonmatchings/libhttp", func_00003AA8);

INCLUDE_ASM("nonmatchings/libhttp", func_00003C04);

INCLUDE_ASM("nonmatchings/libhttp", func_00003C90);

INCLUDE_ASM("nonmatchings/libhttp", func_00003CEC);

INCLUDE_ASM("nonmatchings/libhttp", func_00003D08);

INCLUDE_ASM("nonmatchings/libhttp", func_00003D28);

INCLUDE_ASM("nonmatchings/libhttp", func_00003E34);

INCLUDE_ASM("nonmatchings/libhttp", func_00003EEC);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D754);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D75C);

INCLUDE_ASM("nonmatchings/libhttp", func_00003FB0);

INCLUDE_ASM("nonmatchings/libhttp", func_000041A8);

INCLUDE_ASM("nonmatchings/libhttp", func_000042D4);

INCLUDE_ASM("nonmatchings/libhttp", func_000043A0);

INCLUDE_ASM("nonmatchings/libhttp", func_00004790);

INCLUDE_ASM("nonmatchings/libhttp", func_00004AFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00004BC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00004C8C);

INCLUDE_ASM("nonmatchings/libhttp", func_00004D54);

INCLUDE_ASM("nonmatchings/libhttp", func_00004E18);

INCLUDE_ASM("nonmatchings/libhttp", func_00004EDC);

INCLUDE_ASM("nonmatchings/libhttp", func_00004FA0);

INCLUDE_ASM("nonmatchings/libhttp", CopyHttpHeaderList);

INCLUDE_ASM("nonmatchings/libhttp", HttpWhichId);

INCLUDE_ASM("nonmatchings/libhttp", func_000053D0);

INCLUDE_ASM("nonmatchings/libhttp", func_000055B4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000571C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005798);

INCLUDE_ASM("nonmatchings/libhttp", func_00005828);

INCLUDE_ASM("nonmatchings/libhttp", func_00005DE0);

INCLUDE_ASM("nonmatchings/libhttp", _sceHttpMallocInternal);

INCLUDE_ASM("nonmatchings/libhttp", _sceHttpFreeInternal);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);

INCLUDE_ASM("nonmatchings/libhttp", _HttpAtoi64);

INCLUDE_ASM("nonmatchings/libhttp", _HttpI64toa);

INCLUDE_ASM("nonmatchings/libhttp", func_000060F8);

INCLUDE_ASM("nonmatchings/libhttp", func_00006380);

INCLUDE_ASM("nonmatchings/libhttp", func_0000646C);

INCLUDE_ASM("nonmatchings/libhttp", func_000064A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

#if FW_VERSION < 201
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2) {
    return func_00006B7C(arg0, (s32) arg1, arg2, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteConnection(s32 arg0) {
    return func_0000A370(arg0);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceHttpCreateRequest(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_0000992C(arg0, arg1, arg2, arg3, arg4, arg5);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteRequest);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_4E4A284A);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteRequest(s32 arg0) {
    return func_00009300(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);

INCLUDE_ASM("nonmatchings/libhttp", func_000015DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000172C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);

INCLUDE_ASM("nonmatchings/libhttp", _sceHttpReallocInternal);

INCLUDE_ASM("nonmatchings/libhttp", __HttpI64toa);

INCLUDE_ASM("nonmatchings/libhttp", func_00006658);

INCLUDE_ASM("nonmatchings/libhttp", func_0000673C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006B7C);

INCLUDE_ASM("nonmatchings/libhttp", DeleteHttpHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_00006EA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00006F94);

INCLUDE_ASM("nonmatchings/libhttp", func_000073F4);

INCLUDE_ASM("nonmatchings/libhttp", func_000074AC);

INCLUDE_ASM("nonmatchings/libhttp", _try_build_header);

INCLUDE_ASM("nonmatchings/libhttp", func_00007704);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000786C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001BB4);

INCLUDE_ASM("nonmatchings/libhttp", func_00001F6C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001710C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017110);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001AF8);

INCLUDE_ASM("nonmatchings/libhttp", func_00001E9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007918);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C90);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_00007D88);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C0);

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/libhttp", D_000173C8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/libhttp", D_00017CB4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D96C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D974);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D97C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D988);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00016F58);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D98C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D994);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173D0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000020E0);

INCLUDE_ASM("nonmatchings/libhttp", func_000022B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001FFC);

INCLUDE_ASM("nonmatchings/libhttp", func_000021CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017004);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000026A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000025C8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000014BC);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D9A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007F54);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00001AC0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_000083B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000088E8);

INCLUDE_ASM("nonmatchings/libhttp", func_00008A80);

INCLUDE_ASM("nonmatchings/libhttp", func_00008CB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00008D10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000302C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00002F78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00003020);

INCLUDE_ASM("nonmatchings/libhttp", func_000030DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00003264);

INCLUDE_ASM("nonmatchings/libhttp", func_00003424);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000031B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00003378);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000365C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000035B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000037D4);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_77EE5319);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_DD6E7857);

INCLUDE_ASM("nonmatchings/libhttp", func_00003ECC);

INCLUDE_ASM("nonmatchings/libhttp", func_00003F08);

INCLUDE_ASM("nonmatchings/libhttp", func_00003F48);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00004034);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA3C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA40);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000213C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000230C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0001746C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008DA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008EBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00004198);

INCLUDE_ASM("nonmatchings/libhttp", func_00004280);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00002704);

INCLUDE_ASM("nonmatchings/libhttp", func_00002B38);

INCLUDE_ASM("nonmatchings/libhttp", func_00002CC8);

INCLUDE_ASM("nonmatchings/libhttp", func_00002EFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00002F5C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);

INCLUDE_ASM("nonmatchings/libhttp", func_00003088);

INCLUDE_ASM("nonmatchings/libhttp", func_0000312C);

INCLUDE_ASM("nonmatchings/libhttp", func_000031E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00003244);

INCLUDE_ASM("nonmatchings/libhttp", func_000032EC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000339C);

INCLUDE_ASM("nonmatchings/libhttp", func_000035BC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000032C0);

INCLUDE_ASM("nonmatchings/libhttp", func_00003480);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0001747C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000382C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000036B8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_77EE5319);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_DD6E7857);

INCLUDE_ASM("nonmatchings/libhttp", func_00003FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00003FE0);

INCLUDE_ASM("nonmatchings/libhttp", func_00004020);

INCLUDE_ASM("nonmatchings/libhttp", func_00004090);

INCLUDE_ASM("nonmatchings/libhttp", func_000041FC);

INCLUDE_ASM("nonmatchings/libhttp", func_00004274);

INCLUDE_ASM("nonmatchings/libhttp", func_0000435C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddCookie);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_000050F4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000050CC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005208);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000051BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_457D221D);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000055CC);

INCLUDE_ASM("nonmatchings/libhttp", func_00005624);

INCLUDE_ASM("nonmatchings/libhttp", func_0000575C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005748);

INCLUDE_ASM("nonmatchings/libhttp", func_000059F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000558C);

INCLUDE_ASM("nonmatchings/libhttp", func_000055E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005718);

INCLUDE_ASM("nonmatchings/libhttp", func_00005748);

INCLUDE_ASM("nonmatchings/libhttp", func_000059C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00005C50);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005CD4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005F20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005CB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00005EFC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006228);

INCLUDE_ASM("nonmatchings/libhttp", func_00006380);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000063E0);

INCLUDE_ASM("nonmatchings/libhttp", func_000069E8);

INCLUDE_ASM("nonmatchings/libhttp", func_00006DF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000063DC);

INCLUDE_ASM("nonmatchings/libhttp", func_000069D0);

INCLUDE_ASM("nonmatchings/libhttp", func_00006DD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007230);

INCLUDE_ASM("nonmatchings/libhttp", func_000072A0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000734C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007324);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000073D0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000074C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000074A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000075C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007634);

INCLUDE_ASM("nonmatchings/libhttp", func_000077C0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00007644);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000077A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000078AC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000795C);

INCLUDE_RODATA("nonmatchings/libhttp", D_000170A4);

INCLUDE_ASM("nonmatchings/libhttp", func_000079E8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007AFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00007BD0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007AE8);

INCLUDE_ASM("nonmatchings/libhttp", func_00007BC8);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007F10);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000080A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000878C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000080A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00008790);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008FB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000027A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000907C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000092D4);

INCLUDE_ASM("nonmatchings/libhttp", func_00009460);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00002F44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000097F8);
#endif

#if FW_VERSION < 201
void func_00009A38(void) {
    func_00009E68(D_0000E0A0);
    D_0000E0A0 = 0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_00009A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009DA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00009DA0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != 0) {
        func_00006388(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0_2 != 0) {
        func_00006388(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_3 != 0) {
        func_00006388(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0_4 != 0) {
        func_00006388(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_5 != 0) {
        func_00006388(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_6 != 0) {
        func_00006388(temp_a0_6);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00009E68);

INCLUDE_ASM("nonmatchings/libhttp", func_00009EE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00003908);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A094);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000A67C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00005174);

INCLUDE_ASM("nonmatchings/libhttp", func_00005264);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_457D221D);

INCLUDE_ASM("nonmatchings/libhttp", func_00005628);

INCLUDE_ASM("nonmatchings/libhttp", func_00005680);

INCLUDE_ASM("nonmatchings/libhttp", func_000057B8);

INCLUDE_ASM("nonmatchings/libhttp", func_000057E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005A54);

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

INCLUDE_ASM("nonmatchings/libhttp", func_00005D30);

INCLUDE_ASM("nonmatchings/libhttp", func_00005F7C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006290);

INCLUDE_ASM("nonmatchings/libhttp", func_000063E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000643C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006A44);

INCLUDE_ASM("nonmatchings/libhttp", func_00006E54);

INCLUDE_ASM("nonmatchings/libhttp", func_000072B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00007324);

INCLUDE_ASM("nonmatchings/libhttp", func_000073A8);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/libhttp", func_000075FC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_00007454);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007524);

INCLUDE_ASM("nonmatchings/libhttp", func_00007640);

INCLUDE_ASM("nonmatchings/libhttp", func_00007690);

INCLUDE_ASM("nonmatchings/libhttp", func_0000781C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000791C);

INCLUDE_ASM("nonmatchings/libhttp", func_000079CC);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017510);

INCLUDE_ASM("nonmatchings/libhttp", func_00007A58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007B58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C2C);

INCLUDE_ASM("nonmatchings/libhttp", func_00007DBC);

INCLUDE_ASM("nonmatchings/libhttp", func_00007F64);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/libhttp", func_000082B8);

INCLUDE_ASM("nonmatchings/libhttp", func_000089A0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_000080FC);

INCLUDE_ASM("nonmatchings/libhttp", func_000087E8);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInit);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DAEC);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInitWithPath);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsLoadDefaultCert);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000092A4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000909C);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_87F1E666);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_3C478044);
#else
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00009498);

INCLUDE_ASM("nonmatchings/libhttp", func_000095D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000928C);

INCLUDE_ASM("nonmatchings/libhttp", func_000095D0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00009544);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_000094F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00004C44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005004);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000050DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B2D4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B484);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000092E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000962C);

INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetSslError);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsSetSslCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetCaList);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009A80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009AC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B598);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5C4);
#endif

#if FW_VERSION >= 282
s32 func_00009ADC(void) {
    return D_0001A5C4;
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);

INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009B1C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009CA4);

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/libhttp", func_0000A02C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009D54);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009E18);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B93C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A260);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A43C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A480);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A4B4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AE54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005778(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;

    temp_v0 = func_000057F8(arg0);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00005CAC(arg0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00005EF4(arg0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_0000584C(arg0);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00005D20(arg0);
                }
            }
        }
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000057F8);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000ED38);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000F640);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000F648);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B3BC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B46C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000584C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005CAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00005D20);

INCLUDE_ASM("nonmatchings/libhttp", func_00005EF4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_00006664);

INCLUDE_ASM("nonmatchings/libhttp", func_00006734);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006320);

INCLUDE_ASM("nonmatchings/libhttp", func_00006388);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B7D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000649C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006558);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B90C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveRetry);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResHeaderMaxSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvBlockSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCacheContentLengthMaxSize);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpChangeHttpVersion);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRedirectCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieSendCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieRecvCallback);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000CE58);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D02C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D11C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000D040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000D350);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_8046E250);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DAF4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DA8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DCBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000DD64);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE04);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DC4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DE80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000E064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007C58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D38);

INCLUDE_ASM("nonmatchings/libhttp", func_00007DC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00007ED0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007F88);

INCLUDE_ASM("nonmatchings/libhttp", func_0000804C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000813C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008304);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000E10C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E154);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E220);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E2DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008360);

INCLUDE_ASM("nonmatchings/libhttp", func_0000837C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);

INCLUDE_ASM("nonmatchings/libhttp", func_00008510);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", module_reboot_before);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000E37C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E504);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E758);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E8C8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E910);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000851C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000E758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000086B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008944);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_0000EBC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00008AB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008AF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008C5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000EEA8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EF7C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000EDEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008E24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008E84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008F68);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000EF58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F114);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008FCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000091B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F2CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009300);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009638);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F7AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F9C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000097C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000098F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000992C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000FA4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000099C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00010024);

INCLUDE_ASM("nonmatchings/libhttp", func_000100E4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000100A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000101F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00009E08);

INCLUDE_ASM("nonmatchings/libhttp", func_00006B7C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A0A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A370);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0001057C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A4C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A584);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A64C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A73C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0001083C);

INCLUDE_ASM("nonmatchings/libhttp", func_0001092C);

INCLUDE_ASM("nonmatchings/libhttp", func_00010B54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000109A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A774);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00010DD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A9B0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AAAC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AB3C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010E90);

INCLUDE_ASM("nonmatchings/libhttp", func_00010F4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000AC04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010FF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000ACC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000AF34);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00011244);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000AF68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF0);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF4);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B068);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000113B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00011480);

INCLUDE_ASM("nonmatchings/libhttp", func_00011618);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00011804);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000B0E8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B28C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B428);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B4AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B560);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000118F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000B560(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 != 0) {
        M2C_FIELD(arg1, s32 *, 0x2C) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_v0_2 != 0) {
        M2C_FIELD(arg1, s32 *, 0x30) = temp_v0_2;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B590);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00011A08);

INCLUDE_ASM("nonmatchings/libhttp", func_00011A54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B710);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B874);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B8F8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B98C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_739C2D79);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_B0257723);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A461A167);

INCLUDE_ASM("nonmatchings/libhttp", func_00011F88);

INCLUDE_ASM("nonmatchings/libhttp", func_00011FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00012058);

INCLUDE_ASM("nonmatchings/libhttp", func_0001210C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012228);

INCLUDE_ASM("nonmatchings/libhttp", func_0001244C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012404);

INCLUDE_ASM("nonmatchings/libhttp", func_0001253C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000124E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00012610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012780);

INCLUDE_ASM("nonmatchings/libhttp", func_000127FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000127E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000128BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012974);

INCLUDE_ASM("nonmatchings/libhttp", func_00012998);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B40);

INCLUDE_ASM("nonmatchings/libhttp", func_00012C04);

INCLUDE_ASM("nonmatchings/libhttp", func_00012C98);

INCLUDE_ASM("nonmatchings/libhttp", func_00012D0C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012DC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012E6C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012FB4);

INCLUDE_ASM("nonmatchings/libhttp", func_00013044);

INCLUDE_ASM("nonmatchings/libhttp", func_000130E4);

INCLUDE_ASM("nonmatchings/libhttp", func_000130F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000BA58);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0001311C);

INCLUDE_ASM("nonmatchings/libhttp", func_000131D8);

INCLUDE_ASM("nonmatchings/libhttp", func_00013238);

INCLUDE_ASM("nonmatchings/libhttp", func_00013470);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000BA74);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA84);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA9C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BAF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkPspError);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013A74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013AA0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013C58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013CF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013D2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013E4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE28);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BF98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000C1F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017250);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00014010);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_000141FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00014044);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000C26C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000C828);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017360);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017368);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017370);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017378);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017388);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017394);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000146FC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_000148F8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014BE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_000146D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014D30);

INCLUDE_ASM("nonmatchings/libhttp", func_00014DA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0001517C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000C9A0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_0000D3BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000CCD8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000150B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00014F78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000CD48(void) {
    sceKernelCpuSuspendIntr();
}

void func_0000CD64(void) {
    sceKernelCpuResumeIntr();
}

void func_0000CD80(void) {
    sceKernelUtilsMd5Digest();
}

void func_0000CD9C(void) {
    sceKernelUtilsMd5BlockInit();
}

void func_0000CDB8(void) {
    sceKernelUtilsMd5BlockUpdate();
}

void func_0000CDD4(void) {
    sceKernelUtilsMd5BlockResult();
}

void func_0000CDF0(void) {
    sceNetInetInetPton();
}

void func_0000CE0C(void) {
    sceRtcGetCurrentTick();
}

void func_0000CE28(void) {
    sceRtcTickAddSeconds();
}

void func_0000CE44(void) {
    sceRtcParseDateTime();
}

void func_0000CE60(void) {
    sceRtcFormatRFC2822();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000151B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015238);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000153F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0001559C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000152A0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015448);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000155F0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015644);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000BAA8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BAD4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BB00);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BB14);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BB20);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BB58);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BB98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BBCC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BBF8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BC98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BD18);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BDF0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BE38);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BE6C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000D1A8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_0000BED4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000BF6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C030);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C0AC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_0000DD2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000C0DC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C114);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C2F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009E74);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A048);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000A248);
#endif

#if FW_VERSION >= 282
void func_0000A08C(s32 arg0) {
    if (func_0000A0C0() >= 0) {
        func_0000AA9C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000A0C0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AA9C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017598);

INCLUDE_RODATA("nonmatchings/libhttp", D_000175A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AFEC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B09C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B25C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B2C0);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B3E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B4CC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B50C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveRetry);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_CC920C12);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_D29163DA);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResHeaderMaxSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvBlockSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCacheContentLengthMaxSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_CDB0DC58);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_951D310E);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_D80BE761);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_C0E69162);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpChangeHttpVersion);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRedirectCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieSendCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieRecvCallback);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D08C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D260);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D350);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_8046E250);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DAF8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DCC0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DD64);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE80);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E058);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E0C0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E100);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E148);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E214);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E2D0);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);

s32 func_0000E568(void) {
    return D_0001AA44;
}

INCLUDE_ASM("nonmatchings/libhttp", module_reboot_before);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E5B0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E738);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E98C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EAFC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EB44);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000F280);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000ECD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000EF08);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EFE4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F05C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0000F7C4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F18C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0000F81C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000F824);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F1C8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F404);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F53C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F954);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FA1C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FAD8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FBE4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FC20);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FCBC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010138);

INCLUDE_ASM("nonmatchings/libhttp", func_00010200);

INCLUDE_ASM("nonmatchings/libhttp", func_00010314);

INCLUDE_ASM("nonmatchings/libhttp", func_000106A4);

INCLUDE_ASM("nonmatchings/libhttp", func_000107EC);

INCLUDE_ASM("nonmatchings/libhttp", func_000108A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00010970);

void func_00010A74(void) {
    sceNet_lib_57CC57DA(&D_0001AE08, 0, 0x194);
    D_0001AE08 = 0x01000000;
}

INCLUDE_ASM("nonmatchings/libhttp", func_00010AAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010B9C);

INCLUDE_ASM("nonmatchings/libhttp", func_00010DC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00010EAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010FA8);

INCLUDE_ASM("nonmatchings/libhttp", func_00011038);

INCLUDE_ASM("nonmatchings/libhttp", func_00011100);

INCLUDE_ASM("nonmatchings/libhttp", func_000111BC);

void func_00011484(void) {
    sceNet_lib_57CC57DA(&D_0001AF9C, 0, 0xB0);
    D_0001AF9C = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00011B9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000114B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017628);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001762C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001763C);

INCLUDE_ASM("nonmatchings/libhttp", func_000115B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011628);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0001227C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/libhttp", func_000117BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000119A4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011A84);

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

INCLUDE_ASM("nonmatchings/libhttp", func_00011B6C);

INCLUDE_ASM("nonmatchings/libhttp", func_00011BB8);

INCLUDE_ASM("nonmatchings/libhttp", func_00011C04);

INCLUDE_ASM("nonmatchings/libhttp", func_00011C58);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_739C2D79);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_B0257723);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A461A167);

INCLUDE_ASM("nonmatchings/libhttp", func_0001211C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012138);

INCLUDE_ASM("nonmatchings/libhttp", func_000121EC);

INCLUDE_ASM("nonmatchings/libhttp", func_000122A0);

INCLUDE_ASM("nonmatchings/libhttp", func_000123BC);

INCLUDE_ASM("nonmatchings/libhttp", func_000125E0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012678);

INCLUDE_ASM("nonmatchings/libhttp", func_000127B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012920);

INCLUDE_ASM("nonmatchings/libhttp", func_0001299C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012A5C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B20);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B44);

INCLUDE_ASM("nonmatchings/libhttp", func_00012CEC);

INCLUDE_ASM("nonmatchings/libhttp", func_00012DB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012E3C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012EB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012F64);

INCLUDE_ASM("nonmatchings/libhttp", func_0001301C);

INCLUDE_ASM("nonmatchings/libhttp", func_00013164);

INCLUDE_ASM("nonmatchings/libhttp", func_000131F4);

s32 func_00013294(void) {
    return D_0001B0CC;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000132A0);

s32 func_000132B0(void) {
    return D_0001B0E0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000132BC);

INCLUDE_ASM("nonmatchings/libhttp", func_000132CC);

INCLUDE_ASM("nonmatchings/libhttp", func_00013388);

INCLUDE_ASM("nonmatchings/libhttp", func_000133E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0001361C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkPspError);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION >= 302
INCLUDE_ASM("nonmatchings/libhttp", func_00014444);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013CE8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00014660);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013E98);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013F6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0001408C);

INCLUDE_ASM("nonmatchings/libhttp", func_00014208);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/libhttp", D_00017F84);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017684);

INCLUDE_ASM("nonmatchings/libhttp", func_00014284);

INCLUDE_ASM("nonmatchings/libhttp", func_000147F8);
#endif

#if FW_VERSION >= 302
INCLUDE_ASM("nonmatchings/libhttp", func_0001524C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 302
INCLUDE_RODATA("nonmatchings/libhttp", D_00017794);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001779C);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177AC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177BC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177C8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_000151E0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014970);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014C48);

INCLUDE_ASM("nonmatchings/libhttp", func_0001500C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015080);

INCLUDE_ASM("nonmatchings/libhttp", func_000151D4);

INCLUDE_ASM("nonmatchings/libhttp", func_000152A8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 302
INCLUDE_ASM("nonmatchings/libhttp", func_00015324);
#endif

#if FW_VERSION >= 282
void func_00015428(void) {
    sceKernelCpuSuspendIntr();
}

void func_00015444(void) {
    sceKernelCpuResumeIntr();
}

void func_00015460(void) {
    sceKernelUtilsMd5Digest();
}

void func_0001547C(void) {
    sceKernelUtilsMd5BlockInit();
}

void func_00015498(void) {
    sceKernelUtilsMd5BlockUpdate();
}

void func_000154B4(void) {
    sceKernelUtilsMd5BlockResult();
}

void func_000154D0(void) {
    sceNetInetInetPton();
}

void func_000154EC(void) {
    sceRtcGetCurrentTick();
}

void func_00015508(void) {
    sceRtcTickAddSeconds();
}

void func_00015524(void) {
    sceRtcParseDateTime();
}

void func_00015540(void) {
    sceRtcFormatRFC2822();
}

INCLUDE_ASM("nonmatchings/libhttp", func_0001555C);

INCLUDE_ASM("nonmatchings/libhttp", func_000155FC);

INCLUDE_ASM("nonmatchings/libhttp", func_00015664);

INCLUDE_ASM("nonmatchings/libhttp", func_00015810);

INCLUDE_ASM("nonmatchings/libhttp", func_000159BC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", func_00015A10);
#else
void func_00015A10(s32 arg0) {
    func_0000C114(arg0, 0, 0xA);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00015690);

INCLUDE_ASM("nonmatchings/libhttp", func_000156D0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015710);

INCLUDE_ASM("nonmatchings/libhttp", func_00015730);

INCLUDE_ASM("nonmatchings/libhttp", func_000157F0);
#endif

#if FW_VERSION >= 282
void func_00015A40(void) {
    sceHttpStorage_CDA3D8F6();
}

INCLUDE_ASM("nonmatchings/libhttp", func_00015A5C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015A9C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015ADC);

INCLUDE_ASM("nonmatchings/libhttp", func_00015B00);

INCLUDE_ASM("nonmatchings/libhttp", func_00015BC0);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00015C90);

INCLUDE_ASM("nonmatchings/libhttp", func_00016204);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017414);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017430);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017530);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017848);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017860);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017960);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000179D0);
