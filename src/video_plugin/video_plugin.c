/* cflags: -Os */
#include "common.h"
#include "video_plugin_decls.h"

INCLUDE_ASM("nonmatchings/video_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/video_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/video_plugin", module_start);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", module_stop);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000019C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000001DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000234);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000268);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000029C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000002D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000003A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000003EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000004A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000500);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000544);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000588);

INCLUDE_ASM("nonmatchings/video_plugin", func_000005D4);
#else
s32 module_stop(void) {
    func_000020F8();
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0000015C);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002570);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040884);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000408DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040900);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040924);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040940);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004095C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000063C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000730);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000848);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000854);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000910);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000096C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000009A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000009EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000B40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000CEC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00001068);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00000F04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000F6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000FA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001008);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001094);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001104);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001130);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000115C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040978);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040988);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000119C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000156C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001814);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001984);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00001C2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001A80);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CB4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AE8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00001CF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001C30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001C70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001C94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00001F04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002084);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000022CC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A2C);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002584);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045B7C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A4C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045BB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000236C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040A98);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045BD0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AC4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040AF8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045C40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045C50);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B14);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B24);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B44);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B4C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B5C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B68);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045CB0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040B74);
#else
INCLUDE_ASM("nonmatchings/video_plugin", func_000002B4);

void func_00000540(void) {
}

void func_00000548(void) {
}

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

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045CE8);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_000025F4);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045D1C);
#endif

INCLUDE_RODATA("nonmatchings/video_plugin", D_000025FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002608);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002614);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00002624);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040C98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CB4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040CEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D24);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040D90);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DAC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DE0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040DF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E6C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00002100);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002164);

INCLUDE_ASM("nonmatchings/video_plugin", func_000021AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000021F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002258);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000238C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002474);

INCLUDE_ASM("nonmatchings/video_plugin", func_000024D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000025B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000025F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000026D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000028D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002968);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002A2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002B20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002BAC_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002C54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E70);

INCLUDE_ASM("nonmatchings/video_plugin", func_000023F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000024EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000025A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000260C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002674);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00002DD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002690);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00002718);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000277C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00003134);

INCLUDE_ASM("nonmatchings/video_plugin", func_000031C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003554);

INCLUDE_ASM("nonmatchings/video_plugin", func_000036E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000281C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00002874);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00002BAC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00003988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00002CFC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000363C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00004268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004320);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000036BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00003A6C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00003F9C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000043C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004714);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004774);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004818);

INCLUDE_ASM("nonmatchings/video_plugin", func_000049C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004D38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004D78);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00003FA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000407C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00005290);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005394);

INCLUDE_ASM("nonmatchings/video_plugin", func_000045E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000054D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000043BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000045E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000464C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000046D0);
#else
INCLUDE_ASM("nonmatchings/video_plugin", func_000005A0);

void func_00000B84(s32 arg0) {
    struct Unk_func_00000B84_temp_v0 *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00000C18, 0);
        scePaf_A0ED77C4(0, &func_00000D70, 0, -1, -1, func_00000DF8);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00000BE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000C18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000D70);

void func_00000DF8(void) {
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00000E00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00000E68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001174);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001238);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001294);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001360);

void func_00001444(void) {
    func_00001360();
}

void func_00001460(void) {
    func_00001294();
}
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_0000147C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000014A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000027B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000015C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001768);

void func_000017F4(void) {
    func_00001768(1, 0xFFFF);
}

void func_00001814(void) {
    func_00001768(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001834);

#if FW_VERSION == 282
void func_00001864(void) {
    func_00001AFC();
}

INCLUDE_ASM("nonmatchings/video_plugin", func_00001880);

void func_0000194C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00001D38(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/video_plugin", func_0000199C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001A60);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00004B8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004BAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004BBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004C48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004D84);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDFC);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001AFC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00004DF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004EA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004F3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004F5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00004FD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000504C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000506C);
#else
INCLUDE_ASM("nonmatchings/video_plugin", func_00001B28);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_00001D38);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00006128);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000051FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005218);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005250);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005294);

INCLUDE_ASM("nonmatchings/video_plugin", func_000052B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005430);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005668);

INCLUDE_ASM("nonmatchings/video_plugin", func_000056A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005814);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000581C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005870);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000587C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005884);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005974);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000597C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000059C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00005A84);

INCLUDE_ASM("nonmatchings/video_plugin", func_00006AD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007B24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007BDC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00008D34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008D74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008EBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009084);

INCLUDE_ASM("nonmatchings/video_plugin", func_000091F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000092CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000931C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000093A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000094DC_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009584);

INCLUDE_ASM("nonmatchings/video_plugin", func_000098CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008534);

INCLUDE_ASM("nonmatchings/video_plugin", func_000085D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008854);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007C74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007D94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007E38);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00040E98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040EB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040F88);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00040FEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041008);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004102C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041094);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000410AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000410C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000410E4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041100);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041114);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041130);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041148);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004115C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041170);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041180);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041194);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000411F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041204);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041214);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004122C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004124C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041268);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041284);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412B8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046328);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000412DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000412F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041300);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004130C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046380);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00007EDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007EFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007F48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00007FE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000808C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000083B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000084F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008534);

INCLUDE_ASM("nonmatchings/video_plugin", func_000085D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008854);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041338);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000896C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008A34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008B1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008C04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008CEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00008DD4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A478);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00008EC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000090C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009290);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009360);

INCLUDE_ASM("nonmatchings/video_plugin", func_000094DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000095BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000096A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000096C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000096DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000097A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000413FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041414);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004142C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041434);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041460);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041490);

INCLUDE_ASM("nonmatchings/video_plugin", func_000097DC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000AEA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000098C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009920);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041520);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004152C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004156C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009AD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009C0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009C5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009CB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009D70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009E84);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009E8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00009EA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A21C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000B8D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B8E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B984);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A254);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000A340);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A350);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A378);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A3EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A424);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A584);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A680);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A764);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A848);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041584);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041598);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041668);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041670);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000A934);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AC14);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000AF6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B010);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B130);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041734);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004173C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041744);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004174C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041754);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041760);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004176C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041778);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041784);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041790);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004179C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000417F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041800);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004180C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00046880);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041818);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041850);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041868);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041888);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000418EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B160);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B240);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B26C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B514);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B54C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B58C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B744);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000B78C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BA7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BD50);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDA0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D4D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D62C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000BDFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BE4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000BF00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C2B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C38C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C3CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DA60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C40C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C6DC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DE34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C780);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C7A8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000E008);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CB8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E3B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041928);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041940);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000C8A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CA70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CB8C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000CCD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000CFB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D030);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D0B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D1FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D30C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D348);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D384);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ECF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D3C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D3FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D404);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D464);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D484);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D48C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D4C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D504);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D56C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D650);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D6FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D7FC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F1BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D8D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D980);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000D9F8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F4C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041910);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000DAD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000DBAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000DDF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000DFF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E02C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E094);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E170);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E1D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E2B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E420);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E5C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E62C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E708);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E770);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E84C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E8E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E92C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E934);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000E9D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EA48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EAB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00010568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EB70);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041ACC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041AF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041B98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041BF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C24);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C58);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C6C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CA4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041CE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D3C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041D98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DB8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041C58);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041DE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EC94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001073C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000ED7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EDD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000EE38);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00010A54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010C34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F07C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F268);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F420);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00010E0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F43C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F5F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F728);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F7D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000F848);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FA94);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FAB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FACC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FB88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FBE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FC58);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FD34);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E10);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FDA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FE78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF1C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00011A9C_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF5C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00041E30);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00011BD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0000FF84);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010008);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010034);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00010074);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010128);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010160);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010390);

INCLUDE_ASM("nonmatchings/video_plugin", func_000103C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010550);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000105D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010608);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010768);

INCLUDE_ASM("nonmatchings/video_plugin", func_000107FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00010B9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010C44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010C70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010CB0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00010CCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010CE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010D00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010D18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010D44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010DB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010DC4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010E4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00010F58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011068);

INCLUDE_ASM("nonmatchings/video_plugin", func_000110E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011124);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011164);

INCLUDE_ASM("nonmatchings/video_plugin", func_000111A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001121C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000112A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000112DC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00012F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012F60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001300C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00011350);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011418);

INCLUDE_ASM("nonmatchings/video_plugin", func_000114F0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00013398);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00011524);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00011558);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001159C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000116B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000116E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001172C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011774);

INCLUDE_ASM("nonmatchings/video_plugin", func_000118A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000118EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000119A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F6C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041F90);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FA4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FD4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00041FFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042014);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042028);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042040);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004206C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042084);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004209C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000420F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004210C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042120);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042138);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004214C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004216C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000470F0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000119F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011A9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011AB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011B78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011BDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011C64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011CA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011D70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011DA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011DE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011EB4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000421FC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042208);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042228);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042234);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042258);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042268);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042284);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042294);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422E0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000422F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042300);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042318);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042324);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004232C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042344);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042350);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004235C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004237C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042388);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000423F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042404);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004240C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042424);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042430);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004243C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042454);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042460);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042468);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042480);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004248C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042498);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424C0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000424E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00011F1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000122CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012394);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001429C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000145C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000123E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000126E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000128B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012934);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012A00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012B54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012B90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012CF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012D1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00012E14);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013000);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013098);

INCLUDE_ASM("nonmatchings/video_plugin", func_000130B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000130E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013124);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013150);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013190);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013214);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013298);

INCLUDE_ASM("nonmatchings/video_plugin", func_000132D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013318);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013428);

INCLUDE_ASM("nonmatchings/video_plugin", func_000134A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013518);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001358C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000135F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001366C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000136E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013754);

INCLUDE_ASM("nonmatchings/video_plugin", func_000137C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001383C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001384C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013874);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001387C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001388C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013894);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001389C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000138A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000138AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000426E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042708);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042720);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042738);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042760);

INCLUDE_ASM("nonmatchings/video_plugin", func_000138B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000139F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013AAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013AD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013B04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013B44);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042784);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042788);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004278C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042790);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042794);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042798);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004279C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427AC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427BC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000427C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00013BA8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042828);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000477F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015CE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000144B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014684);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014948);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014A1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014BA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014C70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014C78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00014E68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015014);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015078);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001518C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000152E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015334);

INCLUDE_ASM("nonmatchings/video_plugin", func_000153F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000155BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000156E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015824);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015934);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000159E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015B74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015B90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015D6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015E88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015F14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00015FE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042828);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042840);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004284C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042858);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042864);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042878);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042894);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000428F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004290C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004291C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042934);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042944);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042950);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004295C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042978);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042998);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000429F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A1C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_000160E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001629C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016348);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000163D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016418);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016460);

INCLUDE_ASM("nonmatchings/video_plugin", func_000164DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016530);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016584);

INCLUDE_ASM("nonmatchings/video_plugin", func_000165A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000165BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016680);

INCLUDE_ASM("nonmatchings/video_plugin", func_000166D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016770);

INCLUDE_ASM("nonmatchings/video_plugin", func_000167B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016800);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016848);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016890);

INCLUDE_ASM("nonmatchings/video_plugin", func_000168BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000168E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016958);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001698C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000169C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016A78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016A98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016B8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016C04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00018C64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018D7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00016CD8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00016DBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00016F3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017010);

INCLUDE_ASM("nonmatchings/video_plugin", func_000170E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000171C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001729C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001735C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017468);

INCLUDE_ASM("nonmatchings/video_plugin", func_000174A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000174B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001752C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017618);

INCLUDE_ASM("nonmatchings/video_plugin", func_000176D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000176E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000176E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001773C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017828);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017914);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017928);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001793C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017988);

INCLUDE_ASM("nonmatchings/video_plugin", func_000179D4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00019A5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017A20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017A58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00019BA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B14);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017B94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017BD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C0C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C44);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00019CE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017C80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00017CFC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00019DD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017D34);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AC0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AE0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042AF8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00019EB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A0B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017DEC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A1C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00017F88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018000);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001801C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A2BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018038);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000180A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042B2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000180A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001830C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018398);

INCLUDE_ASM("nonmatchings/video_plugin", func_000183E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018454);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001A868);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A8D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A938);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A9A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00018550);

INCLUDE_ASM("nonmatchings/video_plugin", func_000185D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042BF4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042C10);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001865C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001874C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001883C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000188C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000188E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00018908);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018A64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018BC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018BD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018C08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042D2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018C14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00018EA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019200);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001939C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019494);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019584);

INCLUDE_ASM("nonmatchings/video_plugin", func_000196A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000197BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000198DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000199FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019B1C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001BD4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001BE28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00019C3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019CC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019D4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019DD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019E5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019EE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00019F6C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00019FF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A1F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A2E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A520);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A52C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A690);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001A770);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001AAC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ABF4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CD78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AE4C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AECC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE54);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AEF0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CE84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF18);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF38);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CEB4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AF58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF2C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFC4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF60);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001AFE8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D40C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B410);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001B4E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B634);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B72C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001B970);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001BEA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C268);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C468);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001C5A4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E85C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C760);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001C8C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CA98);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CAEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB5C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EC50);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001EC8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ECE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001ED44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001EFDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CB94);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CBE8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F014);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC20);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F04C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC3C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F084);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC74);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0F4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CC90);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F12C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCAC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001CCC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CDC4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F90);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042F9C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FAC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FCC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00042FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043008);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043024);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043048);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043058);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043068);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043088);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004308C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043090);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043094);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043098);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004309C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430A8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000430BC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047F98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00047FE0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000430C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CEC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001CF9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D028);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D0B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D18C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001D264);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FABC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002087C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001D748);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DB58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001DC44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DD24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DEBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DF80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001DFE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E0B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E12C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E188);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E234);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E2A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E31C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E390);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E3F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E458);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E4BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E520);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00020938);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020B48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021068);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001E584);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001E9DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001EDBC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001EF3C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000217A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002185C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000219D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B3C_v150);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004805C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004806C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048078);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048088);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00048090);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000480A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000480A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F088);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F0FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F1F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F2E8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004312C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043138);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043144);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043154);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043164);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048100);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043174);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043184);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043194);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000431E0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00021BFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F364);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F590);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F6C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F764);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F76C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F774);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F77C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002217C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022294);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001F784);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001F890);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FA94);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB38);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002258C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FB78);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000225EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FBEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC28);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC48);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000226D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FC64);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FD4C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000228E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FE68);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FEF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF00);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0001FF50);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020004);

INCLUDE_ASM("nonmatchings/video_plugin", func_000200A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020118);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020120);

INCLUDE_ASM("nonmatchings/video_plugin", func_000201DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000202F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000202F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020300);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020308);

INCLUDE_ASM("nonmatchings/video_plugin", func_000203A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020438);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020534);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020578);

INCLUDE_ASM("nonmatchings/video_plugin", func_000205CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00023090);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000205D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00020634);

INCLUDE_ASM("nonmatchings/video_plugin", func_000206DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020758);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002328C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000234A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023548_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020774);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002087C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002091C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A50);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00023740);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00020A70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020A8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00020AC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020AE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020AFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020B70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020BE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020C94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020CB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020CCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020CE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020D54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020D70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020D8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020DA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020DC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020DE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020DFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020E18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020E34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020EA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020F90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020FAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020FCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00020FE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021004);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021020);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002108C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000210FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021118);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021134);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002116C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000211F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021214);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021230);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002124C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021284);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000212F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021310);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002132C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021348);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021364);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021380);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002139C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000213F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002140C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021428);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021448);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021464);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021480);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002149C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000214F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002150C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021544);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021560);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002157C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000237CC_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023840);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002390C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023928);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023944);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023964);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023980);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002399C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000239B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023A24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023A40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023A5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023A78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023A94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023AB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023ACC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023AE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023B04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023B78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023BEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023C9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023CB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023CF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023D5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023D78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023D94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023DB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023DCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023DE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023E90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023EC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023EE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023FA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023FC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023FE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024018);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024034);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002406C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024088);

INCLUDE_ASM("nonmatchings/video_plugin", func_000240A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000240C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000240DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000240F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024114);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024134);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002416C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024188);

INCLUDE_ASM("nonmatchings/video_plugin", func_000241A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000241C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000241DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000241F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024214);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024230);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002424C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024268);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00021598);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000215F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021600);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021608);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021610);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021618);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021620);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021628);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021630);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021638);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021640);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021648);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021650);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021658);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021660);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021668);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021670);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00024364);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00021678);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021694);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021748);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002189C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002193C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000219E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021A54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021A90);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021AEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004320C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004321C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043250);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043510);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043658);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043668);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004368C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000436B0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000436D4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043704);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021B98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021BC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021BCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021BE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021C6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021D00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021D38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021D88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021DD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021E00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021E8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021EB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021EDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021F04);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021F2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021F54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021FC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00021FEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022014);

INCLUDE_ASM("nonmatchings/video_plugin", func_000220C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000220E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022110);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022138);

INCLUDE_ASM("nonmatchings/video_plugin", func_000221DC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00024FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022204);

INCLUDE_ASM("nonmatchings/video_plugin", func_000222C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022380);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022458);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000224A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000224F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022548);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022570);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022610);

INCLUDE_ASM("nonmatchings/video_plugin", func_000226EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022714);

INCLUDE_ASM("nonmatchings/video_plugin", func_000227C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000228B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000228D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022978);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022A54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022A7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022B38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00022BC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022BF0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00025A60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00022C18);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022D00);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00022D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022EC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022EEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00022F80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023000);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002304C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00025F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000230C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000231D0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026174);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000232B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000233DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000234C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00023548);

INCLUDE_ASM("nonmatchings/video_plugin", func_000235C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000235EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023684);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000265E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000236B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000236D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023700);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023750);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023778);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026734);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000237A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000237CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000237F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023890);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000238E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023904);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00023924);

INCLUDE_ASM("nonmatchings/video_plugin", func_00023F00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024064);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024104);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024414);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024738);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024808);

INCLUDE_ASM("nonmatchings/video_plugin", func_000248BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00024EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00024F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024F78);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00024FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002500C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002501C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002502C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002504C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025054);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025070);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025078);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025080);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025088);

INCLUDE_ASM("nonmatchings/video_plugin", func_000250AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000250D4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026B48);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000250FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025104);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026B60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026BE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026CB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002510C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025134);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00025150);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002516C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000251C8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00026E30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000251D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000251F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025248);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00025298);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043748);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000437B8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043828);

INCLUDE_ASM("nonmatchings/video_plugin", func_000252B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025380);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004386C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043890);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025404);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025454);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002549C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000254A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000254B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000254B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000254C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000254FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025518);

INCLUDE_ASM("nonmatchings/video_plugin", func_000255B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025670);

INCLUDE_ASM("nonmatchings/video_plugin", func_000256C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025714);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025788);

INCLUDE_ASM("nonmatchings/video_plugin", func_000257E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025968);

INCLUDE_ASM("nonmatchings/video_plugin", func_000259F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025A74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025B74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025C24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025CF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025D94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025E54);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048680);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000437B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00025E5C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043910);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043934);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025EFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025F44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025F8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00025FC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026004);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026070);

INCLUDE_ASM("nonmatchings/video_plugin", func_000260F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026100);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026114);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026164);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026194);

INCLUDE_ASM("nonmatchings/video_plugin", func_000261A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000261F8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00027D10);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026250);

INCLUDE_ASM("nonmatchings/video_plugin", func_000262E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000262F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026370);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026438);

INCLUDE_ASM("nonmatchings/video_plugin", func_000264A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002657C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00026698);

INCLUDE_ASM("nonmatchings/video_plugin", func_000266A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026738);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026750);

INCLUDE_ASM("nonmatchings/video_plugin", func_000267A0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00027EA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027FF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002808C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028198);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000267E8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000281F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028268);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028320);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028394);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028468);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000267F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026800);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026810);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026878);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00028614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026880);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000268B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000268E8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002870C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026960);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000269D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000269E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000269EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000269F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026A04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00028804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026A6C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00026AD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026C1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026D64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026E14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026EC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00026F7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00028D48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028EEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F50);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029030);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002911C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000293EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029408);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029424);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000294C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002960C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029758);

INCLUDE_ASM("nonmatchings/video_plugin", func_000297E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029870);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029904);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029910_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029930);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029FD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A014);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A040);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A1D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A4E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A54C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A734);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A750);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A76C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A788);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A844);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A900);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A97C_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AA7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AA88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC00);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE98);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0C4_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B148);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B1A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B228);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B250);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B278);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B294);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B318);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B33C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B40C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B42C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F88);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000439F8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A34);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048894);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00026F90);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002714C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027168);

INCLUDE_ASM("nonmatchings/video_plugin", func_000271B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000271E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002722C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027268);

INCLUDE_ASM("nonmatchings/video_plugin", func_000272A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000272D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027504);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027520);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002753C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000275D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027714);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027850);

INCLUDE_ASM("nonmatchings/video_plugin", func_000278D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027958);

INCLUDE_ASM("nonmatchings/video_plugin", func_000279E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000279F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000279F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027E74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027E9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027EE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027F80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00027FC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028000);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002803C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028068);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028220);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028528);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028594);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002870C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028728);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028744);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028760);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028808);

INCLUDE_ASM("nonmatchings/video_plugin", func_000288B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028924);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028998);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028A14);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028A20);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A60);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043A98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AC0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048918);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043AD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043ADC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B00);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B48);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B68);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000489D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00028A28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028BE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028C2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028C9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028CD4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028D60);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028DB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00028FE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002903C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029064);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002908C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000290E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029258);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029278);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029280);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00043B98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029288);

INCLUDE_ASM("nonmatchings/video_plugin", func_000292CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B4A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B548);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000292F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029320);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002951C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002957C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029630);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002B898);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9C0_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029694);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00029910);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029AB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029B38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029BB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029BF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029C38);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002BD24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029C78);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00029CE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029D74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029DDC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E94);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029E9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00029EA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00029EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00029F7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A050);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A0D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A108);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A194);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A20C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C308);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C334);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A21C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002A43C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A65C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043BFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C04);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C3C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043C60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A66C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A73C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A7C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A810);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A8E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A964);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A97C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A98C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002A9F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AA78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AAC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AB98);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AC68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ACFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002ADCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AE50);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF30);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AF60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002AFE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B02C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B074);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B09C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B0EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B114);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B13C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F40);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F50);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F60);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B164);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B2E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B36C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B3F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B454);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B524);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B610);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B718);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B754);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B75C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B7BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B81C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B85C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B89C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B8E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B964);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B96C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002B9E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA54);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BA84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BADC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BB34);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BBA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC30);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043F98);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00043FF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BC78);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044028);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BD90);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002BF9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C048);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C0E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C144);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C200);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C22C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000440B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C234);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C310);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C3F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C410);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C448);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C480);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C4F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C53C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C588);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E538);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E578);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E638);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E660);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E688);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E6C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E704_v150);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E758);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E778);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E79C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002C600);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C61C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C638);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C660);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C688);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C6D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C700);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C728);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C764);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044140);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00048F38);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044158);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C76C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C7F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C87C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C948);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C998);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002C9E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA10);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CA68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CAC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CB48);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CBA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC54);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC64);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC74);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CC7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CD0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CDCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CE88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002CF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D0C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D1E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D260);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D280);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D2F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044288);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000442AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D374);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D444);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D48C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D4DC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000442F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D56C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D5D0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004432C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D6D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044388);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D768);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D828);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D8B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002D914);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DA5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DAF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DB58);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DC5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DCF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DD68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044518);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004453C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DDEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DEBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF2C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044588);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DF54);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002DFC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E020);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E03C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E058);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E074);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E0F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E144);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E304);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E344);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E3F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E408);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E4B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E56C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E598);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E5FC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003089C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000308E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002E6CC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445A4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E704);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002E8CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EA60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EAE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB28);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EB70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EBD0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00030DE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030E24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030E90);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EC84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EE78);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EF04);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFB8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00031160);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002EFD8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F224);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F23C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F268);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F2E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F30C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F328);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000445E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F348);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003143C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000445F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002F3C8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000319F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031A3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031BF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031E28);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F0C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003233C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F7A4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000326F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000328C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0002F8F4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0002FB40);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FD8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0002FFE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030040);

INCLUDE_ASM("nonmatchings/video_plugin", func_000301A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030294);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030378);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003049C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003050C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003057C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00030A50);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000343FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030B7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00030BD8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044690);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044694);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044698);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004469C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494D4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446A8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494DC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000494E8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494EC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000494F8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446B8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049500);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00030D98);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00034720);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00030E7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00031094);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00034BB8_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000312EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00031740);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031804);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00035050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00031828);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00031E38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031E7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031E8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031EB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031EC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031EEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F3C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031F9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00031FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003203C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032078);

INCLUDE_ASM("nonmatchings/video_plugin", func_000320B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000320DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032100);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032124);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032148);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003216C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032190);

INCLUDE_ASM("nonmatchings/video_plugin", func_000321B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000321D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000321F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032210);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003222C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032248);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032288);

INCLUDE_ASM("nonmatchings/video_plugin", func_000322C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032308);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032348);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032350);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032358);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032360);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032368);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032370);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032378);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032380);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032388);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00035B6C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035BD8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035C4C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000446E8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_000495D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049618);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044780);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044818);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044830);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044838);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044848);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044860);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049774);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004489C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448B4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448C4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000448E4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032390);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032710);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032AE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032B30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032B88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032C24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032CB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032D44);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032DE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00032EAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033114);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033178);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003349C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033558);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033764);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033834);

INCLUDE_ASM("nonmatchings/video_plugin", func_000338EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_000339C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033AA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033B38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033B80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033BAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033BCC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033BF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033C20);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033DA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033DF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033EE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033F68);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033F88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033FB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033FC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00033FFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034040);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003406C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034078);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034080);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034170);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034218);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003425C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000449C8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000449D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044AA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B78);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044B88);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BA4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BD0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BDC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044BFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C0C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C28);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C54);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C68);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C8C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044C9C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CC8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044CFC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D3C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D54);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034280);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034424);

INCLUDE_ASM("nonmatchings/video_plugin", func_000344FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034560);

INCLUDE_ASM("nonmatchings/video_plugin", func_000345A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000345D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034610);

INCLUDE_ASM("nonmatchings/video_plugin", func_000346C4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000381FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00034714);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000347C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003487C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044D98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034938);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034998);

INCLUDE_ASM("nonmatchings/video_plugin", func_000349A0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00038308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000349AC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00034B74);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034BB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034C5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034C9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034CE0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034D24);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034D2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034D58);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034D98);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034E4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034E9C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034EE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00034F20);

INCLUDE_ASM("nonmatchings/video_plugin", func_000350A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_000350D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035114);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003513C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035168);

INCLUDE_ASM("nonmatchings/video_plugin", func_000351A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000352C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000353E8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000354A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035568);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00039014);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039034);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003563C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035644);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00035860);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035888);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00039364);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039450);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035950);

INCLUDE_ASM("nonmatchings/video_plugin", func_000359B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000359F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00035A34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035A70);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035A7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035AA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035DB4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035DD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035DEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035E08);

INCLUDE_ASM("nonmatchings/video_plugin", func_00035EE0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00039AC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039B64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039C00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00035FB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036040);

INCLUDE_ASM("nonmatchings/video_plugin", func_000360C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00036158);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00039CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036164);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044DF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E08);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E20);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E38);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E70);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E80);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044E90);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049D98);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EB8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044EF0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F00);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F10);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F20);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00039CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003616C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000362FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036328);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000363C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036410);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036454);

INCLUDE_ASM("nonmatchings/video_plugin", func_000365B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000365C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000365E0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A244);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A2E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003664C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000366B8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000366F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036758);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036790);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003696C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036994);

INCLUDE_ASM("nonmatchings/video_plugin", func_000369B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036A38);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036AAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036AC8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036AE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036B00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036C40);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036D80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036E1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036EB8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036F5C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00036F68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00036F70);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000371C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037238);

INCLUDE_ASM("nonmatchings/video_plugin", func_000372F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037388);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037468);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037524);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B2AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B3C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B4D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B5E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_000375EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037684);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003772C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000377DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_000378D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000378F0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003790C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003797C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037A34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00037A4C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003B950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_00037A98);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00038384);

INCLUDE_ASM("nonmatchings/video_plugin", func_000383E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003840C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038418);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038444);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00038470);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C4C8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C4F4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003847C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C52C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00038488);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003C70C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C864);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CB18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CC60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003865C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003878C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003893C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038A9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_00038BE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038CFC);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E2C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E48);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E64);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E80);

INCLUDE_ASM("nonmatchings/video_plugin", func_00038E8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003936C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039AE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00039D7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E594);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E798);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E83C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E9DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EBEC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EC68);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003ED94);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EDBC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE28);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EEA8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EFA0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F088);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F11C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F2B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F360);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F3EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F3F4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F3FC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F404);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F410);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F41C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F428);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F450);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F478);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F59C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F6C0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F7D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F7E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F7EC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F7F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FA7C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FB18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FBD0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FD80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FDF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FE60);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FEE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003FF4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_000403A8);

INCLUDE_ASM("nonmatchings/video_plugin", func_000408B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00040D30);

INCLUDE_ASM("nonmatchings/video_plugin", func_00040E34);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041288);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041668);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041A4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00041E64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A028);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F58);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044F70);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FA0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FC0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049ED4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EE4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EEC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049EF4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FCC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00044FE8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045018);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045024);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045030);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004503C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045048);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F70);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F7C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049F88);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045054);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004505C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FA8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FB0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00049FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A400);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A518);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A6B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003A8F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA24);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA4C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AA88);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AB08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003ABF0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AC80);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AE08);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AEB0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF34);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AF70);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFAC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFE8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003AFF4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B000);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B00C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B07C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B17C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B27C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B37C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B388);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B394);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B624);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B878);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003B8B0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003BCA4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C270);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C674);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003C73C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CB64);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003CF20);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D0D8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D2A0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003D364);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D714);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D8E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003D9A4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00042970);

INCLUDE_ASM("nonmatchings/video_plugin", func_00042DAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003DB84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003DF10);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E018);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00043184);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E2BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E414);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E430);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E44C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E468);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E484);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E4BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E568);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0004350C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E61C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E624);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E62C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E634);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E63C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E644);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E64C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E654);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E65C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E664);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E66C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E674);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E67C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E684);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E68C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E694);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E69C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6A4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6AC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6B4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6BC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6C4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6CC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6D4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000435D4);

INCLUDE_ASM("nonmatchings/video_plugin", func_000435DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E6DC);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E79C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_0004375C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E85C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003E8F4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003E98C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_000439F8);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043A00);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043BBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EA38);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EC28);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ECCC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00043C8C);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043D50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003ED1C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EDB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EE18);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EED8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin", func_00043E88);

INCLUDE_ASM("nonmatchings/video_plugin", func_00043EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin", func_0003EF44);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EF84);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003EFC4);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F004);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F044);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F06C);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F094);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F0D0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F110);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F130);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F154);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/video_plugin", func_0003F178);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F1E0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F204);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F2A0);

INCLUDE_ASM("nonmatchings/video_plugin", func_0003F344);
#else
INCLUDE_ASM("nonmatchings/video_plugin", func_00001DE4);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001EC0);

INCLUDE_ASM("nonmatchings/video_plugin", func_00001FF8);

INCLUDE_ASM("nonmatchings/video_plugin", func_0000204C);
#endif

INCLUDE_ASM("nonmatchings/video_plugin", func_000020A0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000450B0);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045158);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451C0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_000451CC);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000451D8);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000451E4);

INCLUDE_RODATA("nonmatchings/video_plugin", D_000451F4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A13C);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A148);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A150);

INCLUDE_RODATA("nonmatchings/video_plugin", D_0004A154);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045204);

INCLUDE_RODATA("nonmatchings/video_plugin", D_00045218);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045238);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/video_plugin", D_00045248);
#endif
