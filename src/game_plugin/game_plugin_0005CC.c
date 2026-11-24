/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

#if FW_VERSION != 100
void func_000005CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_000125F0 = arg0;
    D_000125F4 = arg1;
    D_00012608 = arg2;
    D_0001260C = arg3;
    func_00008274(&D_0001247C);
}
#endif

#if FW_VERSION != 100
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

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000006D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000810);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000970);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000664);
#endif

#if FW_VERSION != 100
void func_0000076C(void) {
    func_00008120(&D_0001247C);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000078C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000868);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_0000088C);
#endif

#if FW_VERSION != 100
void func_00000938(void) {
    func_0000088C(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00000958(void) {
    func_0000088C(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00000978(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}
#endif

#if FW_VERSION != 100
void func_00000998(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}
#endif

#if FW_VERSION != 100
void func_000009B8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000009D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000BB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DEC);
#endif

#if FW_VERSION != 100
void func_00000E68(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
}
#endif

#if FW_VERSION != 100
void func_00000E78(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION != 100
s32 func_00000ED0(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115F0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000115FC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010768);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011608);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010784);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011614);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011628);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001163C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011650);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011664);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011674);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010808);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010818);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011688);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001169C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010850);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116AC);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116C0);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116D8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116E8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000116F8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011708);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000108D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000108E8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_0001171C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011730);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A14);
#endif

#if FW_VERSION == 100
void func_00000BC8(void) {
    func_00007E08();
    func_00007490((s32) &D_0001157C);
    func_0000744C((s32) &D_000115B0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000868);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000C20);
#endif

#if FW_VERSION == 100
void func_00000CCC(void) {
    func_00000C20(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_00000CEC(void) {
    func_00000C20(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EA0);
#endif

#if FW_VERSION == 100
void func_00000D3C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}
#endif

#if FW_VERSION == 100
void func_00000D5C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}
#endif

#if FW_VERSION == 100
void func_00000D7C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000D9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E1C);
#endif

#if FW_VERSION == 100
void func_00000E6C(void) {
    func_00000FE4();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000A78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000F38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000FE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001000);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000010E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000011C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000013BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000DEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000E78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000014BC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011744);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011758);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011860);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011870);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011880);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011890);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001CC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00000EF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001118);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000012C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00001B24);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011980);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011990);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119A0);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119B8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119C4);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119D0);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119E4);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_000119F8);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A08);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A18);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00010B38);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A28);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A30);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A3C);

INCLUDE_RODATA("nonmatchings/game_plugin_0005CC", D_00011A4C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002104);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002034);
#endif

#if FW_VERSION == 100
void func_00002640(s32 arg0) {
    s32 temp_s1;

    if (func_00002B38() == 0) {
        if (D_00011680 == 0) {

        } else {
            scePaf_EAA5AFF6(arg0, 2);
            temp_s1 = D_00011580;
            scePaf_F609FA81(temp_s1, (s32) &D_00011980, 0, 0);
            scePaf_CAF05F1D(temp_s1, (s32) &D_00011980);
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002640);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000026F0);
#endif

#if FW_VERSION == 100
void func_00002880(s32 arg0) {
    s32 temp_s0;

    if (D_0001167C != 0) {

    } else {
        scePaf_EAA5AFF6(arg0, 1);
        temp_s0 = D_00011678;
        if (temp_s0 == 0) {

        } else {
            sceVshCommonGui_57F57F40(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        D_00011678 = 0;
        sceVshCommonGui_A0DE7090(0);
        sceVshCommonGui_441D55D7(0);
        vsh_0B8DE38E(&D_0001157C, 2);
        scePaf_66907719();
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002918);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000026F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000028C8);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_000029F0);

INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002A60);

#if FW_VERSION == 100
void func_00002A98(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 4) == 0x401) {
        if (M2C_FIELD(arg1, s32 *, 0xC) == 0) {
            func_00002A60(arg0, (s32) &func_00002918, 0);
        }
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002ADC);
#endif

#if FW_VERSION == 100
void func_00002B1C(s32 arg0, s32 arg1, s32 arg2) {
    func_00002A60(arg0, arg1, arg2);
}
#endif

#if FW_VERSION == 100
s32 func_00002B38(void) {
    return D_0001167C;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/game_plugin_0005CC", func_00002AF8);
#endif

#if FW_VERSION != 100
s32 func_00002B8C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00012638 != 0) {
        var_v0 = D_00012634 == 0;
    }
    return var_v0;
}
#endif

