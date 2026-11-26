/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_00026DBC(struct Unk_func_00026DBC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 4;
    temp_v0 = arg0->unk5C;
    if (temp_v0 != 0) {
        var_v1 = (func_00027840(temp_v0) >= 0) ? 0 : 0x11;
    }
    return var_v1;
}

s32 func_00026DF8(struct Unk_func_00026DF8_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 4;
    temp_v0 = arg0->unk5C;
    if (temp_v0 != 0) {
        var_v1 = (func_00027864(temp_v0) >= 0) ? 0 : 0x12;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00026E34);

void func_000274D4(s32 arg0) {
    func_0002665C(arg0 - 4);
}

void func_000274F0(s32 arg0) {
    func_000266F8(arg0 - 4);
}

void func_0002750C(s32 arg0) {
    func_000505F8(arg0 + 4);
}

void func_00027528(s32 arg0) {
    func_0002750C(arg0 - 4);
}

s32 func_00027544(void) {
    return 0;
}

s32 func_0002754C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027554);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002765C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027764);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000277AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000277F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027840);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027864);

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027888);
#else
void func_00027888(s32 arg0) {
    music_common_E0EB40AC(arg0 + 0x10078);
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000278AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000279C4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00015A50);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027AD8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027BD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027C4C);

void func_00027CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00027E0C(arg0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027CEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027D2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027D6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00027E0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000280A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_026DBC", D_0009C318);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000281F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00028A08);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00028D10);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00028B78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000290D4);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000291A0);
#else
void func_000291A0(struct Unk_func_000291A0_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    arg0->unk0 = &D_0009C3E0;
    arg0->unkC = scePaf_F13EBB78(arg1 * 0x10);
    arg0->unk10 = scePaf_F13EBB78(arg1 * 4);
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000291F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002932C);

s32 func_00029368(struct Unk_func_00029368_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    struct Unk_func_00029368_temp_v1 *temp_v1;

    temp_v1 = arg0->unkC + (arg1 * 0x10);
    temp_v1->unk0 = arg2;
    temp_v1->unk4 = arg3;
    temp_v1->unk8 = arg4;
    temp_v1->unkC = arg5;
    return 0;
}

s32 func_0002938C(void) {
    func_00029EFC();
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000293AC);

s32 func_000293E8(void) {
    return (D_000A4518 != 0) ? 0 : 0x80105002;
}

void func_00029400(void) {
    if (sceKernelDeleteEventFlag(D_000A4514) == 0) {
        D_000A4514 = -1U;
    }
    if (sceKernelTerminateDeleteThread(D_000A4510) == 0) {
        D_000A4510 = -1U;
    }
    if (sceKernelDeleteMbx(D_000A450C) == 0) {
        D_000A450C = -1U;
    }
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_026DBC", D_0009C3D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_026DBC", D_0009C3E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002947C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029568);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000295C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029608);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029648);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000296A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029700);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002975C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002979C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029858);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000298F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029970);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_000299C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029A00);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029A40);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029ABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029B18);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029B74);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029BB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029BF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029C34);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029E60);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029EA0);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002E21C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029EFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_00029F44);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A02C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A090);

void func_0002A138(void) {
    func_0005B140((s32) &func_00029F44);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A158);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A194);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A1FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A238);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A380);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A3B0);

s32 func_0002A40C(s32 arg0) {
    D_000A451C = func_0002A380(arg0 + 6, 4);
    return 0;
}

s32 func_0002A438(s32 arg0) {
    D_000A4520 = func_0002A380(arg0 + 6, 4);
    return 0;
}

s32 func_0002A464(s32 arg0) {
    D_000A4524 = func_0002A380(arg0 + 6, 4);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A490);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A4D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A514);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A5C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A69C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A718);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A810);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A84C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A898);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A914);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002A9A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AA00);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AA3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AA78);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AAB4);

s32 func_0002AB0C(s32 arg0) {
    D_000A4528 = func_0002A380(arg0 + 6, 4);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AB38);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002ABB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AC4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002ACC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AD04);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AD5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AD78);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002ADE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_026DBC", func_0002AE40);

s32 func_0002AF5C(void) {
    return 0;
}

s32 func_0002AF64(void) {
    return 1;
}
