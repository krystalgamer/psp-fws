#include "common.h"
#include "libhttp_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017310);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017318);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/libhttp", func_00000000);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpIsRequestInCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequestInCacheFirstMode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
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

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);

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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00000DDC);

s32 sceHttpCreateTemplate(void *arg0, s32 arg1, s32 arg2) {
    return func_0000A774((s32) arg0, arg1, arg2);
}

s32 sceHttpDeleteTemplate(s32 arg0) {
    return func_0000A9B0(arg0);
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D6F8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_4E4A284A);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);

INCLUDE_ASM("nonmatchings/libhttp", func_0000165C);

INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00001B70);

INCLUDE_ASM("nonmatchings/libhttp", func_00001C10);

INCLUDE_ASM("nonmatchings/libhttp", func_00001FC8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
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

#if FW_VERSION < 282
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2) {
    return func_00006B7C(arg0, (s32) arg1, arg2, 0, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceHttpDeleteConnection(s32 arg0) {
    return func_0000A370(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceHttpCreateRequest(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_0000992C(arg0, arg1, arg2, arg3, arg4, arg5);
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);

s32 sceHttpDeleteRequest(s32 arg0) {
    return func_00009300(arg0);
}
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

INCLUDE_ASM("nonmatchings/libhttp", func_00007918);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C90);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_00007D88);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D96C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D974);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D97C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D988);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D98C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D994);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173D0);

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/libhttp", func_000014BC);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D9A0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007F54);
#endif

#if FW_VERSION == 151
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

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA3C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA40);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#else
INCLUDE_ASM("nonmatchings/libhttp", func_0000213C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000230C);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_0001746C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008DA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008EBC);
#else
INCLUDE_ASM("nonmatchings/libhttp", func_00002704);

INCLUDE_ASM("nonmatchings/libhttp", func_00002B38);

INCLUDE_ASM("nonmatchings/libhttp", func_00002CC8);

INCLUDE_ASM("nonmatchings/libhttp", func_00002EFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00002F5C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);

INCLUDE_ASM("nonmatchings/libhttp", func_00003088);

INCLUDE_ASM("nonmatchings/libhttp", func_0000312C);

INCLUDE_ASM("nonmatchings/libhttp", func_000031E8);

INCLUDE_ASM("nonmatchings/libhttp", func_000032C0);

INCLUDE_ASM("nonmatchings/libhttp", func_00003480);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001747C);

INCLUDE_ASM("nonmatchings/libhttp", func_000036B8);

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

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddCookie);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_000050F4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008FB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000027A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000907C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000092D4);

INCLUDE_ASM("nonmatchings/libhttp", func_00009460);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00002F44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000097F8);
#endif

#if FW_VERSION < 282
void func_00009A38(void) {
    func_00009E68(D_0000E0A0);
    D_0000E0A0 = 0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_00009A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_00009DA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009E68);

INCLUDE_ASM("nonmatchings/libhttp", func_00009EE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00003908);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000A094);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A67C);
#else
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

INCLUDE_ASM("nonmatchings/libhttp", func_00007454);

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

INCLUDE_ASM("nonmatchings/libhttp", func_000080FC);

INCLUDE_ASM("nonmatchings/libhttp", func_000087E8);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInit);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DAEC);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInitWithPath);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsLoadDefaultCert);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#else
INCLUDE_ASM("nonmatchings/libhttp", func_0000909C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00004C44);

INCLUDE_ASM("nonmatchings/libhttp", func_00005004);

INCLUDE_ASM("nonmatchings/libhttp", func_000050DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B2D4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B484);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000092E8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000962C);

INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetSslError);
#else
INCLUDE_ASM("nonmatchings/libhttp", func_0000B598);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5C4);
#else
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsSetSslCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetCaList);

s32 func_00009ADC(void) {
    return D_0001A5C4;
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);

INCLUDE_ASM("nonmatchings/libhttp", func_00009B1C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009CA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00009D54);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B93C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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

INCLUDE_ASM("nonmatchings/libhttp", func_0000584C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005CAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00005D20);

INCLUDE_ASM("nonmatchings/libhttp", func_00005EF4);

INCLUDE_ASM("nonmatchings/libhttp", func_00006320);

INCLUDE_ASM("nonmatchings/libhttp", func_00006388);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);

INCLUDE_ASM("nonmatchings/libhttp", func_0000649C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006558);

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

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_2A6C3296);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_0000761C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D38);

INCLUDE_ASM("nonmatchings/libhttp", func_00007DC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00007ED0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007F88);

INCLUDE_ASM("nonmatchings/libhttp", func_0000804C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000813C);

INCLUDE_ASM("nonmatchings/libhttp", func_00008304);

INCLUDE_ASM("nonmatchings/libhttp", func_00008360);

INCLUDE_ASM("nonmatchings/libhttp", func_0000837C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);

INCLUDE_ASM("nonmatchings/libhttp", func_00008510);

INCLUDE_ASM("nonmatchings/libhttp", func_0000851C);

INCLUDE_ASM("nonmatchings/libhttp", func_000086B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008944);

INCLUDE_ASM("nonmatchings/libhttp", func_00008AB8);

INCLUDE_ASM("nonmatchings/libhttp", func_00008AF4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008C5C);

INCLUDE_ASM("nonmatchings/libhttp", func_00008E24);

INCLUDE_ASM("nonmatchings/libhttp", func_00008E84);

INCLUDE_ASM("nonmatchings/libhttp", func_00008F68);

INCLUDE_ASM("nonmatchings/libhttp", func_00008FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008FCC);

INCLUDE_ASM("nonmatchings/libhttp", func_000091B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00009300);

INCLUDE_ASM("nonmatchings/libhttp", func_00009638);

INCLUDE_ASM("nonmatchings/libhttp", func_00009700);

INCLUDE_ASM("nonmatchings/libhttp", func_000097C4);

INCLUDE_ASM("nonmatchings/libhttp", func_000098F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000992C);

INCLUDE_ASM("nonmatchings/libhttp", func_000099C8);

INCLUDE_ASM("nonmatchings/libhttp", func_00009E08);

INCLUDE_ASM("nonmatchings/libhttp", func_00006B7C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A0A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A370);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A4C0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A584);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A64C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A73C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A774);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A9B0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AAAC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AB3C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AC04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000ACC8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AF34);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AF68);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF0);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF4);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B068);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B0E8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B28C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B428);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B4AC);

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

INCLUDE_ASM("nonmatchings/libhttp", func_0000B590);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B5DC);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B710);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B874);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B8F8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B98C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA58);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA64);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA74);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA84);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA9C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BAF8);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE28);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BF98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C088);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C1F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C26C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C828);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C9A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000CCD8);

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

#if FW_VERSION < 282
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

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/libhttp", func_0000D1A8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_0000BED4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000BF6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C030);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C0AC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C0DC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C114);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C2F0);
#else
INCLUDE_ASM("nonmatchings/libhttp", func_00009E74);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A048);

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

INCLUDE_ASM("nonmatchings/libhttp", func_0000ECD0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EF08);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EFE4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F05C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F18C);

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

INCLUDE_ASM("nonmatchings/libhttp", func_000114B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017628);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001762C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001763C);

INCLUDE_ASM("nonmatchings/libhttp", func_000115B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011628);

INCLUDE_ASM("nonmatchings/libhttp", func_000117BC);

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

INCLUDE_ASM("nonmatchings/libhttp", func_00013CE8);

INCLUDE_ASM("nonmatchings/libhttp", func_00013E98);

INCLUDE_ASM("nonmatchings/libhttp", func_00013F6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0001408C);

INCLUDE_ASM("nonmatchings/libhttp", func_00014208);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017684);

INCLUDE_ASM("nonmatchings/libhttp", func_00014284);

INCLUDE_ASM("nonmatchings/libhttp", func_000147F8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017794);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001779C);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177AC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177BC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177C8);

INCLUDE_ASM("nonmatchings/libhttp", func_00014970);

INCLUDE_ASM("nonmatchings/libhttp", func_00014C48);

INCLUDE_ASM("nonmatchings/libhttp", func_0001500C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015080);

INCLUDE_ASM("nonmatchings/libhttp", func_000151D4);

INCLUDE_ASM("nonmatchings/libhttp", func_000152A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00015324);

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

#if FW_VERSION < 282
void func_00015A10(s32 arg0) {
    func_0000C114(arg0, 0, 0xA);
}
#else
INCLUDE_ASM("nonmatchings/libhttp", func_00015A10);

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

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017848);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017860);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017960);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000179D0);
