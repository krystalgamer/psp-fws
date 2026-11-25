/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_resolver_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStartNtoA);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStartAtoN);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverStop);

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverInit);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverTerm);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetResolverTerm(void) {
    if (D_00002340 != 0) {
        func_000005B0();
        D_00002340 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceNetResolverTerm(void) {
    if (D_00002340 != 0) {
        _sce_pspnet_resolver_term();
        D_00002340 = 0;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_resolver", sceNetResolverCreate);

#if FW_VERSION == 201
s32 sceNetResolverDelete(s32 arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_a1 = 0x80410405;
        if (arg0 >= 0) {
            var_a1 = func_0000060C(arg0);
        }
        var_v1 = var_a1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetResolverDelete(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410405;
    if (arg0 >= 0) {
        var_v1 = func_0000060C(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 sceNetResolverDelete(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410405;
    if (arg0 >= 0) {
        var_v1 = _sce_pspnet_resolver_delete_ctx(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000003FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000055C(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00000DE8();
    var_a0 = 0;
    if (temp_v0 >= 0) {
        D_00001F78 = 0;
        D_00002344 = 0;
    } else {
        func_00000E2C();
        var_a0 = temp_v0;
    }
    return var_a0;
}

s32 func_000005B0(void) {
    func_00000E2C();
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000005D0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_0000060C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000007E0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000908);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000006E0);
#endif

#if FW_VERSION == 100
s32 _sce_pspnet_resolver_init(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = _sce_pspnet_resolver_net_init();
    var_a0 = 0;
    if (temp_v0 >= 0) {
        D_00001F78 = 0;
        D_00002344 = 0;
    } else {
        func_00000E2C();
        var_a0 = temp_v0;
    }
    return var_a0;
}

s32 _sce_pspnet_resolver_term(void) {
    func_00000E2C();
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceNetResolverDelete(s32 arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_a1 = 0x80410405;
        if (arg0 >= 0) {
            var_a1 = _sce_pspnet_resolver_delete_ctx(arg0);
        }
        var_v1 = var_a1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000508);

s32 func_0000065C(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = _sce_pspnet_resolver_net_init();
    var_a0 = 0;
    if (temp_v0 >= 0) {
        D_00001F78 = 0;
        D_00001F74 = 0;
    } else {
        func_00000FA8();
        var_a0 = temp_v0;
    }
    return var_a0;
}

s32 func_000006B0(void) {
    func_00000FA8();
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", _sce_pspnet_resolver_get_resolver_ctx);

INCLUDE_ASM("nonmatchings/pspnet_resolver", _sce_pspnet_resolver_delete_ctx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_resolver", _sce_pspnet_resolver_strncasecmp);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000007D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000DE8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000007E0);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000908);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", _sce_pspnet_resolver_net_init);
#endif

#if FW_VERSION < 282
s32 func_00000E2C(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000F98);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000E40);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000E34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_0000104C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_resolver", create_query_message);
#endif

#if FW_VERSION == 282
s32 func_00000FA8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00000FB0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", send_query_message);
#endif

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000011E8);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_0000131C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000011D0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001210);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001380);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_0000157C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_resolver", parse_dns_header);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001278);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", skip_question_section);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001470);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000016D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_resolver", get_domain_name);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000019A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001A50);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000014D8);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001730);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001818);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_000019A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_resolver", set_domain_name);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001B54);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001B80);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001BAC);

M2C_UNK *func_00001BC0(void) {
    return &D_000022B1;
}

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001BCC);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001C04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001BFC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001C78);
#endif

#if FW_VERSION < 201
u8 *func_00001CB8(u8 *arg0, u8 *arg1, s32 arg2) {
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

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001CEC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001CA4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001D18);

void func_00001D58(s32 arg0, s32 arg1) {
    func_00001C04(arg1, arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001D7C);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001DA4);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001E54);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001E30);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001E9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001F34);

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00001FB0);

u8 *func_00001FE0(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/pspnet_resolver", func_00002018);
#endif
