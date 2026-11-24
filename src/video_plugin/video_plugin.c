/* cflags: -Os */
#include "common.h"
#include "video_plugin_decls.h"

INCLUDE_ASM("nonmatchings/video_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/video_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/video_plugin", module_start);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", module_stop);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000019C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000001DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000234);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000029C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000002D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000003A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000003EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000004A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000500);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000588);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000005D4);
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_000020F8();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002570);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040884);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000408A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000408BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000408DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040900);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040924);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040940);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004095C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000063C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000848);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000854);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000096C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000009A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000009EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000B40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000CEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000FA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001104);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000115C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040978);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000119C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000156C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001814);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60_v100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC_v100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001F04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002084);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000022CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A2C);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002584);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000236C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AF8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B24);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B4C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000002B4);
#endif

#if FW_VERSION != 100
void func_00000540(void) {
}
#endif

#if FW_VERSION != 100
void func_00000548(void) {
}
#endif

#if FW_VERSION != 100
void func_00000550(void) {
    s32 temp_v0;
    struct Unk_func_00000550_temp_v0_2 *temp_v0_2;

    func_00001174(0);
    temp_v0 = scePaf_D4FAE7D0(&D_00002614);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk8(0);
        }
    }
}
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_000025EC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000025F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000025FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002608);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002614);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002624);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CB4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D24);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DE0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000023F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000024EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000025A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000260C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002674);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002690);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000277C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000281C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002874);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002BAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002CFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000363C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000036BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00003764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00003A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00003F9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00003FA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000407C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000043BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000045E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000464C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000046D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000005A0);
#endif

#if FW_VERSION != 100
void func_00000B84(s32 arg0) {
    struct Unk_func_00000B84_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000C18, 0);
        scePaf_A0ED77C4(0, &func_00000D70, 0, -1, -1, func_00000DF8);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000BE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000C18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000D70);
#endif

#if FW_VERSION != 100
void func_00000DF8(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000E00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00000E68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001238);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001294);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001360);
#endif

#if FW_VERSION != 100
void func_00001444(void) {
    func_00001360();
}
#endif

#if FW_VERSION != 100
void func_00001460(void) {
    func_00001294();
}
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_0000147C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000014A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000027B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000015C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001768);
#endif

#if FW_VERSION != 100
void func_000017F4(void) {
    func_00001768(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00001814(void) {
    func_00001768(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001834);

#if FW_VERSION != 100
void func_00001864(void) {
    func_00001AFC();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001880);
#endif

#if FW_VERSION != 100
void func_0000194C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000199C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004B8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004BAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004BBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004C48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004D64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004D84);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004DF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004EA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004F5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00004FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000504C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000506C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B28);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D38);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000051FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005218);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005250);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005294);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000052B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005430);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005668);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000056A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005814);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000581C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005870);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000587C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005884);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005974);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000597C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000059C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00005A84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00006AD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007B24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007BDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007C74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007D94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007E38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040EB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040F88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041008);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004102C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041058);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041094);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000410AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000410C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000410E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041100);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041114);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041148);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004115C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041170);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041180);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041194);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000411A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000411C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000411D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000411F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041204);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041214);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004122C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004124C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041268);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041284);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041300);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004130C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007EDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007EFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007F48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007FE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000808C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000083B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000084E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000084F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008534);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000085D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008854);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041338);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000896C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008A34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008C04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008CEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008DD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00008EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000090C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009290);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000094DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000095BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000096A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000096C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000096DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000097A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000413FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041414);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004142C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041434);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041460);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041490);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000097DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000098C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009920);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041520);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004152C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004156C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009AD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009C5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009CB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009D70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009E84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009E8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00009EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A21C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A254);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A340);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A378);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A424);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A584);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A680);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A848);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041584);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041598);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041668);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041670);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A934);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000AC14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000AF6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041734);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004173C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041744);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004174C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041754);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041760);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004176C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041778);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041784);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041790);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004179C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000417A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000417AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000417B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000417BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000417F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041800);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004180C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041850);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041868);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041888);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000418EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B160);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B240);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B26C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B514);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B54C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B58C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B78C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BA7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BD50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BE4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BF00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C2B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C38C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C3CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C40C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C6DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C780);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041928);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041940);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C8A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CA70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CB8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CCD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CE60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CFB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D0B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D1FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D30C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D348);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D384);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D3C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D3FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D404);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D464);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D484);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D48C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D4C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D504);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D56C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D650);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D6FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D7FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D980);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D9F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DAD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DBAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DDF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DFF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E02C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E170);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E1D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E2B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E420);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E5C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E62C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E708);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E84C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E8E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E92C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E934);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E9D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EA48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC50);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041ACC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B50);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BDC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C24);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D04);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EE38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F07C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F420);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F43C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F7D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F848);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FA94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FAB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FB88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FBE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FD34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FDA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010034);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010074);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010128);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010160);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000103C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010550);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000105D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010768);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000107FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010B9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010C44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010DB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010DC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010E4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010F58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011068);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000110E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011124);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000111A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001121C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000112A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000112DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000114F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011524);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011558);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001159C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000116B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000116E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001172C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011774);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000118A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000118EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000119A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FD4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042014);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042028);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042040);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042058);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004206C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042084);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004209C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000420B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000420CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000420E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000420F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004210C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042120);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042138);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004214C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004216C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000119F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011A9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011AB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011B78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011BDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011CA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011D70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011DA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011DE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011EB4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000421FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042208);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042228);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042234);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042258);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042268);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042284);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042294);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000422B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000422BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000422D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000422E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000422F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042300);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042318);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042324);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004232C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042344);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042350);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004235C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004237C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042388);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000423F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042404);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004240C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042424);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042430);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004243C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042454);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042460);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042468);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042480);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004248C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042498);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000424B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000424C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000424CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000424E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011F1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000122CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012394);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000123E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000126E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000128B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012934);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012A00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012B54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012BF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012CA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012CCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012CF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012D1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00012E14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000426CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013098);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000130B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000130E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013124);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013190);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013214);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013298);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000132D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013318);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013428);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000134A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001358C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000135F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001366C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000136E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013754);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000137C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001383C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001384C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013874);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001387C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001388C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013894);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001389C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000138A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000138AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000426E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042708);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042720);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042738);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042760);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000138B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000139F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013AD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013B04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013B44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042784);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042788);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004278C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042790);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042794);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042798);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004279C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000427C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00013BA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000144B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014948);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014A1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014BA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014C78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014D64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00014E68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001518C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000152E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015334);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000153F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000155BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000156E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015824);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015934);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000159E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015D6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015E88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015F14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00015FE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042828);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042840);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004284C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042858);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042864);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042878);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042894);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000428B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000428CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000428DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000428F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004290C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004291C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042934);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042944);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042950);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004295C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042978);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042998);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000429B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000429D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000429F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A04);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A1C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000160E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001629C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016348);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016384);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000163D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000164DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016530);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016584);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000165A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000165BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016680);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000166D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000167B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016800);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016848);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000168BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000168E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016958);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001698C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000169C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016A78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016A98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016B8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016C04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016CD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016DBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000170E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000171C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001729C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001735C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017468);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000174A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000174B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001752C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017618);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000176D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000176E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000176E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001773C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017828);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017914);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017928);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001793C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000179D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017A20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017A58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017BD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017CFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017D34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AE0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017DEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001801C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018038);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000180A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042B2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000180A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001830C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018398);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000183E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018550);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000185D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BDC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042C10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001865C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001874C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001883C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000188C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000188E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018908);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018A64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018BC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018BD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042D2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018EA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019200);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001939C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019494);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019584);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000196A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000197BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000198DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000199FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019C3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019D4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019DD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019E5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019EE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019F6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019FF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A1F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A2E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A520);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A52C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A690);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AAC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001ABF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AE4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AECC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AEF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B4E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B72C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B970);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001BEA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C468);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C5A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C760);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C8C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F9C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FCC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043008);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043024);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043048);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043058);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043068);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043088);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004308C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043090);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043094);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043098);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004309C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CEC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D0B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D18C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DB58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DC44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DD24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DEBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DFE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E0B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E12C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E234);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E2A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E31C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E3F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E458);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E4BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E520);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E584);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E9DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EDBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EF3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F1F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F2E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004312C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043138);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043144);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043154);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043164);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043174);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043184);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043194);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000431E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F590);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F76C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F774);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F77C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F784);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FE68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020004);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000200A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020120);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000201DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000202F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000202F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020300);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000203A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020534);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020578);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000205CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000205D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000206DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020758);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020774);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002087C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002091C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020B70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020BE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020C94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020CCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020D54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020D70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020D8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020DA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020DC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020DFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020E18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020E34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020EA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020F90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020FE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021004);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021020);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002108C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000210A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000210C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000210E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000210FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021134);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002116C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021188);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000211A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000211C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000211DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000211F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021214);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021230);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002124C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021284);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000212A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000212BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000212D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000212F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021310);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002132C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021348);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021380);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002139C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000213B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000213D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000213F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002140C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021428);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021448);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021464);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002149C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000214B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000214D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000214F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002150C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021528);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021560);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002157C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000215F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021610);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021618);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021620);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021628);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021630);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021638);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021640);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021648);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021650);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021658);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021660);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021668);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021670);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021678);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002189C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002193C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000219E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021A54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021A90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021AEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004320C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004321C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043250);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043510);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043658);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043668);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004368C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000436B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000436D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043704);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021B98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021DD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021E00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021E8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021EB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021EDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021FC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00021FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000220C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000220E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000221DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022204);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000222C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022380);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022458);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000224A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000224F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022548);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022570);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022610);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000226EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000227C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000228B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000228D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022978);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022A54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022A7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022B38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022C18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022D64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022EEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022F80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002304C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000230C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000231D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000232B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000233DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000234C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023548);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000235C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000235EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000236B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000236D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023700);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023750);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023778);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000237A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000237CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000237F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000238B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000238E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023904);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023F00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024064);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024104);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024414);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024808);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000248BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002500C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002501C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002502C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002504C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025054);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025080);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000250AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000250D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000250FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025104);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002510C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025134);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002516C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000251C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000251D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000251F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025248);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025298);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043748);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000437B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043828);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000252B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025380);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004386C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025404);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002549C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000254A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000254B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000254B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000254C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000254FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000255B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025670);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000256C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025788);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000257E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025968);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000259F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025A74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025B74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025C24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025CF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025D94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025E54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025E5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043910);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043934);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025EAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025EFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025FC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026004);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000260F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000261A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000261F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026250);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000262E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000262F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026370);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000264A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002657C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026698);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000266A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026738);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026750);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000267A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000267E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000267F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026800);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026810);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026880);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000268B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000268C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000268D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000268D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000268E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026960);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000269D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000269E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000269EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000269F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026A04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026AD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026C1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026D64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026E14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000439F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002714C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027168);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000271B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000271E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002722C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000272A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000272D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027504);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027520);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002753C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027558);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002759C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000275D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027850);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000278D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027958);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000279E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000279F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000279F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027E74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027E9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027EE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027F80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00027FC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002803C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028068);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028220);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028528);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028594);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002870C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028760);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028808);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000288B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028998);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028A14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028A20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043ADC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B00);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B48);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028A28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028BE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028C2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028C9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028D1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028D60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028DB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028FA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028FE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002903C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029064);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002908C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000290A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000290C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000290E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000290E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000291A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029258);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029278);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029280);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029288);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000292CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000292F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029320);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002951C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002957C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029630);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029AB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029B38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029BB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029BF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029C38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029C78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029D74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029DDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029E9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029EAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029F40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029F7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A0D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A108);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A20C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A21C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A43C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A65C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043BFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C04);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A66C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A73C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A7C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A810);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A8E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A97C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A98C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AA78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AB98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002AFE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B02C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B074);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B09C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B13C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F50);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B36C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B3F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B524);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B610);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B754);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B75C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B7BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B81C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B85C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B89C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B8E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B96C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BADC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BB34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BBA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BD90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BF9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C048);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C0E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C200);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C22C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000440B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C234);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C310);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C448);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C53C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C588);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C61C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C638);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C660);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C688);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C700);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C764);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044140);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044158);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C76C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C87C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C948);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C998);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C9E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CAC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CB48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CBA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CD0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CDCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CE88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002CF20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D0C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D1E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044288);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000442AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D374);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D444);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D48C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000442F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D56C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D5D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004432C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D6D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044388);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D768);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D828);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D8B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002D914);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DA5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DAF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DC5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044518);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004453C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DDEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DEBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF2C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044588);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002DFC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E020);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E03C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E058);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E074);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E304);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E344);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E408);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E4B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E56C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E6CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E704);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E8CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EA60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EC84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EE78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EF04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F224);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F23C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F30C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F328);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F348);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F3C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F7A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F8F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FB40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FFE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000301A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030294);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030378);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003049C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003050C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003057C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030A50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030B7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030BD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044690);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044694);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044698);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004469C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030D98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030E7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000312EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031740);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031828);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031EEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031F9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031FFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003203C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000320B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000320DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032124);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032148);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003216C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032190);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000321B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000321D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000321F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032210);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003222C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032248);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032288);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000322C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032348);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032368);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032370);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032378);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032380);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032388);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044780);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044830);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044838);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044848);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044860);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004489C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000448B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000448C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000448D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000448E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032710);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032B30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032B88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032BF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032C24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00032EAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033178);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003349C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033558);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000338EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000339C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033AA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033B38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033B80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033BF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033C20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033DA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033DF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033EE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033F88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033FB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033FC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00033FFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003406C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034080);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034170);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034218);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003425C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000449C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000449D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044AA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BD0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BDC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C28);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C8C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C9C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CFC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034280);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034424);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000344FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034560);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000345A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000345D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034610);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000346C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000347C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003487C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034938);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034998);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000349A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000349AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034B74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034BB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034C5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034C9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034CE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034D98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034E4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034E9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034EE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034F20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000350A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000350D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003513C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035168);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000351A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000352C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000353E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000354A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003563C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035644);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035860);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035888);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000359B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000359F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035A34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035A70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035A7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035DEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035E08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035EE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036040);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000360C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036158);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036164);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044DF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F00);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003616C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000362FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036328);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036384);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000363C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000365B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000365C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000365E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003664C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000366B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000366F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036758);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036790);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003696C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036994);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000369B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036AE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036C40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036D80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036E1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036EB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000371C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037238);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000372F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037388);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037468);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037524);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000375EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003772C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000377DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000378D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000378F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003790C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003797C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038384);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000383E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003840C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038444);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038470);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003847C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038488);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003865C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003878C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003893C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038A9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038BE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038CFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00038E8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003936C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00039AE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00039D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A028);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FA0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FCC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045018);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045024);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045030);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004503C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045048);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045054);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004505C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A400);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A6B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AB08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AC80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AE08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AEB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B00C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B07C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B17C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B27C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B37C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B388);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B394);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B624);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B8B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003BCA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C270);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C674);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C73C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003CB64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003CF20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D0D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D2A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D8E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D9A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003DB84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003DF10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E018);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E2BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E414);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E430);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E44C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E468);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E484);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E61C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E624);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E62C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E63C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E644);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E64C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E654);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E65C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E664);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E66C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E674);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E67C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E68C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E69C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E79C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E85C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E8F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E98C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EA38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EC28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ECCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ED1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EDB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EED8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EF44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EF84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EFC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F004);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F06C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F0D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F154);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F178);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F1E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F204);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F2A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F344);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001DE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001EC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001FF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000204C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_000020A0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000450B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045158);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045204);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045218);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045238);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045248);
#endif
