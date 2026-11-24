/* cflags: -Os */
#include "common.h"
#include "auth_plugin_decls.h"

INCLUDE_ASM("nonmatchings/auth_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/auth_plugin", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_000018E0();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000238);
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_000026B0();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000015C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000194);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000328);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000004B0);
#endif

#if FW_VERSION != 100
void func_00000574(void) {
    func_0000222C((s32) &D_00002C88, (s32) &D_00002AEC);
    func_0000222C((s32) &D_00002C94, (s32) &D_00002AEC);
    scePaf_3481F595(D_00002C7C, &D_00002AE0);
    scePaf_F609FA81(D_00002C7C, &D_00002AE0, 0, 0);
    scePaf_CAF05F1D(D_00002C7C, &D_00002AE0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000005F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000954);
#endif

#if FW_VERSION != 100
void func_0000098C(void) {
    func_000004B0(1);
    if (D_00002D50 != NULL) {
        D_00002D50->unk1C = 1;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AB4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AB8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ABC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AC8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ACC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AD8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002ADC);
#endif

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AE0);

INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002AEC);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000009BC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001C9C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001CF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D1C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D84);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001D94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DBC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00001DD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000045C);
#endif

#if FW_VERSION == 100
void func_000005B0(void) {

}
#endif

#if FW_VERSION == 100
void func_000005B8(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000005C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000758);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000B3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000D38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000F40);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001034);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00000924);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_0000105C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000010C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001D54);
#endif

#if FW_VERSION != 100
void func_00001D7C(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00002D50 != NULL) {
        var_a0 = D_00002D50->unk30;
    }
    func_00001DF4(var_a0, 0, 0, 0);
}
#endif

#if FW_VERSION != 100
void func_00001DB8(void) {
    func_000004B0(2);
    if (D_00002D50 != NULL) {
        D_00002D50->unk1C = 2;
    }
}
#endif

#if FW_VERSION == 100
void func_00001DE8(void) {

}
#else
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001DE8);
#endif

#if FW_VERSION == 100
void func_00001168(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001170);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001DF4);

#if FW_VERSION == 100
void func_0000127C(void) {
    func_0000015C(2);
}
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00001EBC);

#if FW_VERSION == 100
void func_00001340(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001348);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001F64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001FCC);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002058);

INCLUDE_ASM("nonmatchings/auth_plugin", func_0000207C);

#if FW_VERSION == 100
void func_00001454(void) {
    func_0000207C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_00001474(void) {
    func_0000207C(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_00001494(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000024D8(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
void func_0000218C(void) {
    func_0000207C(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_000021AC(void) {
    func_0000207C(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_000021CC);

#if FW_VERSION == 100
void func_00001514(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00002584(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001564);
#endif

#if FW_VERSION == 100
void func_000021FC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002638();
}
#else
INCLUDE_ASM("nonmatchings/auth_plugin", func_000021FC);
#endif

#if FW_VERSION != 100
void func_0000222C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000024D8(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
void func_0000227C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00002584(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000022CC);
#endif

#if FW_VERSION != 100
void func_000023A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002638();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_000023C4);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002460);

INCLUDE_ASM("nonmatchings/auth_plugin", func_000024D8);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002584);

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002638);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/auth_plugin", func_00001858);
#endif

INCLUDE_ASM("nonmatchings/auth_plugin", func_00002658);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002C00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/auth_plugin", D_00002C10);
#endif
