/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

#if FW_VERSION >= 282
void func_000005CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_000125F0 = arg0;
    D_000125F4 = arg1;
    D_00012608 = arg2;
    D_0001260C = arg3;
    func_00008274(&D_0001247C);
}

void func_00000610(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_000125F0 = arg0;
    D_000125F4 = arg1;
    D_000125F8 = arg2;
    D_000125FC = arg3;
    D_00012608 = arg4;
    D_0001260C = arg5;
    func_00008274(&D_0001247C);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000678);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000006FC);
#endif

#if FW_VERSION >= 350
void func_000006FC(s32 arg0) {
    sceVshCommonUtil_21EF453A(&D_0001A314, arg0);
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000664_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000664_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000664_v301);
#endif

#if FW_VERSION == 300
void func_00000664_v300(s32 arg0) {
    sceVshCommonUtil_8584376D(&D_00013F64, arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000688);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115C8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000080C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000006D8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000810);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000970);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000664);
#endif

#if FW_VERSION >= 350
void func_0000076C(void) {
    sceVshCommonUtil_951BC384(&D_0001A314, &func_00000688);
    func_00008120(&D_0001247C);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000076C(void) {
    sceVshCommonUtil_622815DD(&D_00013F64, &func_00000688);
    func_00008120(&D_0001247C);
}
#endif

#if FW_VERSION == 282
void func_0000076C(void) {
    func_00008120(&D_0001247C);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000078C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000868);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000088C);

void func_00000938(void) {
    func_0000088C(1, 0xFFFF);
}

void func_00000958(void) {
    func_0000088C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION >= 282
void func_00000978(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}

void func_00000998(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}

void func_000009B8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000009D8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A58);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A78);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AA8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AD8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000BB8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DA8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DEC);

void func_00000E68(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E78);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000E78(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010D8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010C4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010FC);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001148);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000011A8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001208);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00001208(void) {
    sceVshCommonUtil_0587F20C(&D_00013F64, 8, 0);
    if (D_00015B0D != 0) {

    } else {
        _ZN3paf4View4FindEPKc(&D_00014340);
        func_000081A4((s32) &D_0001247C);
    }
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001260);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001298);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00001298(s32 arg0) {
    void *temp_v0;

    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00001260, 0);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00000ED0(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115F0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115FC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010768);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011608);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010784);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011614);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011628);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001163C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011650);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011664);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011674);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010808);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010818);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011688);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001169C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010850);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116AC);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116C0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116D8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116E8);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00015DA4);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00015DB8);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116F8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011708);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000108D4);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000108E8);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001171C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011BFC);
#endif

#if FW_VERSION == 201
void func_00000558(void) {
    func_000071AC(0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000558(void) {
    sce_paf_private_snprintf(&D_000129D8, 0x80, "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN");
    func_000071AC(0);
}

void func_0000058C(void) {
    sce_paf_private_snprintf(&D_000129D8, 0x80, "disc0:/PSP_GAME/SYSDIR/UPDATE/EBOOT.BIN");
    func_000071AC(1);
}
#endif

#if FW_VERSION == 201
void func_0000058C(void) {
    func_000071AC(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000005C0(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_snprintf(&D_000129D8, 0x80, (s32 *) arg0);
    D_00012A70 = arg1;
    D_00012A74 = arg2;
    func_000075F4(&D_0001157C);
}
#endif

#if FW_VERSION == 201
void func_000005C0(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_strncpy(&D_000129D8, arg0, 0x80);
    D_00011710 = arg1;
    D_00011714 = arg2;
    func_000075F4(&D_0001157C);
}

void func_000005F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_000116F8 = arg0;
    D_000116FC = arg1;
    D_00011710 = arg2;
    D_00011714 = arg3;
    func_000075F4(&D_0001157C);
}

void func_00000638(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_000116F8 = arg0;
    D_000116FC = arg1;
    D_00012A60 = arg2;
    D_00012A64 = arg3;
    D_00011710 = arg4;
    D_00011714 = arg5;
    func_000075F4(&D_0001157C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000620(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sce_paf_private_snprintf(&D_000129D8, 0x80, "usb:");
    D_00012A58 = arg0;
    D_00012A5C = arg1;
    D_00012A70 = arg2;
    D_00012A74 = arg3;
    func_000075F4(&D_0001157C);
}

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000006A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000758);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
void func_00000BC8(void) {
    func_00008120(&D_0001157C);
}
#endif

#if FW_VERSION == 100
void func_00000BC8(void) {
    func_00007E08();
    func_00007490((s32) &D_0001157C);
    func_0000744C((s32) &D_000115B0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000880);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000868);
#endif

#if FW_VERSION == 100
void func_00000868(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_00011530);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000C20);

void func_00000CCC(void) {
    func_00000C20(1, 0xFFFF);
}

void func_00000CEC(void) {
    func_00000C20(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION < 271
void func_00000D3C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}

void func_00000D5C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}

void func_00000D7C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000D9C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E1C);
#endif

#if FW_VERSION == 100
void func_00000E6C(void) {
    func_00000FE4();
}

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E88);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A58);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A78);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AA8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000F38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000FE4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001000);

void *func_000010AC(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010E4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000011C4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000013BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E68);
#endif

#if FW_VERSION < 201
void func_00000E68(s32 **arg0) {
    *arg0 = &D_00011890;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E78);
#endif

#if FW_VERSION < 201
void func_00000E78(s32 **arg0) {
    *arg0 = &D_00011890;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_000010C8(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000014BC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011744);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000141B4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018C64);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000141C4);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000141D0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018C9C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011758);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011860);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011870);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011880);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011890);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014340);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001434C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000012D0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018F04);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000165C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000168C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000016C4);
#endif

#if FW_VERSION >= 350
void func_00001730(s32 arg0) {
    if (arg0 == 0) {
        D_00015B0C = 1;
        sceVshCommonGui_F5A16B4D();
        sceVshCommonGui_891DD627(0);
        M2C_FIELD(D_0001A180, M2C_UNK (**)(M2C_UNK, void *), 0x10)(0xE, D_0001A180);
        func_000012D0(D_0001A42C);
    } else {
        func_000076A0();
        func_0000179C();
    }
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00001730(s32 arg0) {
    if (arg0 == 0) {
        D_00015B0C = 1;
        _ZN3vsh26ShowButtonNavigation_EnterEb(arg0);
        _ZN3vsh25ShowButtonNavigation_BackEb(0);
        M2C_FIELD(D_00015840, M2C_UNK (**)(M2C_UNK, void *), 0x10)(1, D_00015840);
        func_000012D0(D_00015AEC);
    } else {
        func_000076A0();
        func_000081A4((s32) &D_0001247C);
    }
}
#endif

#if FW_VERSION >= 350
void func_000016B8(void) {
    func_000076A0();
    func_0000179C();
}

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000016DC);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000017EC);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001940);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001A4C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B0C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B0C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B0C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B60);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000179C);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001828);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001DE4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000206C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000018A0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001AC0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014424);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014428);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014468);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000144A8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001492C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014938);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00014944);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001496C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000062D4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B0C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B24_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B24_v310);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000062F0);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001C40);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002398);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000023C8);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002418);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001CD4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001D00);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001F10);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000279C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001FBC);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002098);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000021D0);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002224);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002278);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000022EC);
#endif

#if FW_VERSION >= 351
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000023D8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018FCC);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018FD0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00018FD4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 351
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000023D8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002C74);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002CAC);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002D70);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000304C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000242C);
#endif

#if FW_VERSION >= 310
s32 func_0000270C(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010F0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001278);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001274);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001614);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001C4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001118);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000012C4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B24);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011980);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011990);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119A0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011DDC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119B8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119C4);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119D0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011E08);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119E4);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119F8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000191D0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000191E8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A08);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A18);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00019220);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010B38);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A28);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00019238);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A30);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A3C);

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001655C);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A4C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002104);
#else
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002034);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002640);
#endif

#if FW_VERSION == 201
void func_00002640(s32 arg0) {
    s32 temp_s1;

    if (func_00002CEC() == 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0, 2);
        temp_s1 = D_00011620;
        _ZN3paf4View8PageOpenEPKcii(temp_s1, (s32) &D_00011980, 0, 0);
        _ZN3paf4View12PageActivateEPKc(temp_s1, (s32) &D_00011980);
        InputDevice_PspPad_Unlock();
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002640(s32 arg0) {
    s32 temp_s1;

    if (func_00002B38() == 0) {
        if (D_00012A98 == 0) {

        } else {
            _ZN3paf9PhHandler11KillTimerCBEi(arg0, 2);
            temp_s1 = D_00011580;
            _ZN3paf4View8PageOpenEPKcii(temp_s1, (s32) &D_00011980, 0, 0);
            _ZN3paf4View12PageActivateEPKc(temp_s1, (s32) &D_00011980);
            InputDevice_PspPad_Unlock();
        }
    }
}
#endif

#if FW_VERSION == 100
void func_00002640(s32 arg0) {
    s32 temp_s1;

    if (func_00002B38() == 0) {
        if (D_00011680 == 0) {

        } else {
            _ZN3paf9PhHandler11KillTimerCBEi(arg0, 2);
            temp_s1 = D_00011580;
            _ZN3paf4View8PageOpenEPKcii(temp_s1, (s32) &D_00011980, 0, 0);
            _ZN3paf4View12PageActivateEPKc(temp_s1, (s32) &D_00011980);
        }
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002800);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002998);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000026F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002880);
#endif

#if FW_VERSION == 100
void func_00002880(s32 arg0) {
    s32 temp_s0;

    if (D_0001167C != 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(arg0, 1);
        temp_s0 = D_00011678;
        if (temp_s0 == 0) {

        } else {
            sceVshCommonGui_57F57F40(temp_s0);
            _ZdlPv(temp_s0);
        }
        D_00011678 = 0;
        _ZN3vsh26ShowButtonNavigation_EnterEb(0);
        _ZN3vsh25ShowButtonNavigation_BackEb(0);
        _ZN11PageManager13ReturnTopmenuEi(&D_0001157C, 2);
        InputDevice_PspPad_Unlock();
    }
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002918);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000028C8);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000029F0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002B18);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002BD0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002BB0_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002BA4);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002BDC);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002A60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00002CEC(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00012A98 != 0) {
        var_v0 = D_0001167C == 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002A98(s32 arg0, void *arg1) {
    if (D_00012A80 == 0) {
        if (M2C_FIELD(arg1, u16 *, 4) == 0x401) {
            if (M2C_FIELD(arg1, s32 *, 0xC) == 0) {
                func_00002A60(arg0, (s32) &func_00002918, 0);
            }
        }
    }
}
#endif

#if FW_VERSION == 100
void func_00002A98(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 4) == 0x401) {
        if (M2C_FIELD(arg1, s32 *, 0xC) == 0) {
            func_00002A60(arg0, (s32) &func_00002918, 0);
        }
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002ADC);

void func_00002B1C(s32 arg0, s32 arg1, s32 arg2) {
    func_00002A60(arg0, arg1, arg2);
}

s32 func_00002B38(void) {
    return D_0001167C;
}
#endif

#if FW_VERSION == 152
u8 func_00002D00(void) {
    return D_00012A98;
}
#endif

#if FW_VERSION == 150
u8 func_00002D08_v150(void) {
    return D_00012A98;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002AF8);

s32 func_00002B8C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00012638 != 0) {
        var_v0 = D_00012634 == 0;
    }
    return var_v0;
}
#endif
