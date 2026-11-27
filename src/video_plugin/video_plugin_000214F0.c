/* cflags[152]: -O2 */
/* cflags[150]: -O2 */
/* cflags[100]: -O2 */
/* cflags: -Os */
#include "common.h"
#include "video_plugin_decls.h"

#if FW_VERSION == 100
void func_000214F0(s32 arg0) {
    func_000205CC(arg0 - 0x38);
}

void func_0002150C(s32 arg0, s32 arg1) {
    func_000205D4(arg0 - 0x38, arg1);
}

void func_00021528(s32 arg0, s32 arg1) {
    func_00020634(arg0 - 0x38, arg1);
}

void func_00021544(s32 arg0, s32 arg1) {
    func_000206DC(arg0 - 0x38, arg1);
}

void func_00021560(s32 arg0, s32 arg1) {
    func_00020758(arg0 - 0x38, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002157C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002157C(s32 arg0, s32 arg1, s32 arg2) {
    func_0002087C(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002373C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000237CC_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023840);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000238B4);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000238B4(s32 arg0) {
    func_0001DE04(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000238D0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000238D0(s32 arg0) {
    func_0001DE60(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000238EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002390C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002390C(s32 arg0, s32 arg1) {
    func_0001DF20(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023928);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023928(s32 arg0, s32 arg1) {
    func_0001DF80(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023944);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023964);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023964(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E044(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023980);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023980(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E0B8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002399C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002399C(s32 arg0) {
    func_0001E12C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000239B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023A24);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A24(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E234(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023A40);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A40(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E2A8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023A5C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A5C(s32 arg0, s32 arg1, s32 arg2) {
    func_0001E31C(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023A78);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A78(s32 arg0, s32 arg1) {
    func_0001E390(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023A94);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023A94(s32 arg0, s32 arg1) {
    func_0001E3F4(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023AB0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023AB0(s32 arg0, s32 arg1) {
    func_0001E458(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023ACC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023ACC(s32 arg0, s32 arg1) {
    func_0001E4BC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023AE8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023AE8(s32 arg0, s32 arg1) {
    func_0001E520(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025D24);
#endif

#if FW_VERSION == 260
void func_00025D24(s32 arg0) {
    func_00022340(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023B04);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023B78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023BEC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023BEC(s32 arg0) {
    func_000214A8(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C08);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C08(s32 arg0) {
    func_0001EF3C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C44);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C44(s32 arg0, s32 arg1) {
    func_0002185C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C60);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C60(s32 arg0, s32 arg1) {
    func_000219D8(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023C9C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023C9C(s32 arg0, s32 arg1, s32 arg2) {
    func_00021BFC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023CB8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00023CB8(s32 arg0, s32 arg1, s32 arg2) {
    func_0001F590(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023CD4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025F98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023D5C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023D78);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023D94);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023DB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023DCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023DCC(s32 arg0, s32 arg1) {
    func_0002217C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023DE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023DE8(s32 arg0, s32 arg1) {
    func_00022294(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023E04(s32 arg0) {
    func_0001FA40(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023E20(s32 arg0) {
    func_0001FA94(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E3C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023E74(s32 arg0) {
    func_0002258C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023E90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023E90(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    func_0001FB78(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023EAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023EAC(s32 arg0, s32 arg1) {
    func_000225EC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023EC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023EC8(s32 arg0, s32 arg1) {
    func_0001FBD0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023EE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023EE4(s32 arg0) {
    func_0001FBEC(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F00(s32 arg0) {
    func_0001FC08(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F1C(s32 arg0) {
    func_0001FC28(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F38(s32 arg0) {
    func_0001FC48(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F54(s32 arg0, s32 arg1) {
    func_000226D0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F70(s32 arg0, s32 arg1) {
    func_0001FD1C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023F8C(s32 arg0, s32 arg1) {
    func_0001FD4C(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023FA8(s32 arg0, s32 arg1) {
    func_000228E8(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023FC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023FC4(s32 arg0, s32 arg1) {
    func_0001FEB0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023FE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023FFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023FFC(s32 arg0, s32 arg1) {
    func_0001FF00(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024018);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024034);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024050);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024050(s32 arg0, s32 arg1, s32 arg2) {
    func_0001FF50(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002406C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002406C(s32 arg0, s32 arg1, s32 arg2) {
    func_00020004(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024088(s32 arg0, s32 arg1) {
    func_000200A4(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000240A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000240C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000240C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00020120(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000240DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000240DC(s32 arg0, s32 arg1, s32 arg2) {
    func_000201DC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000240F8);
#endif

#if FW_VERSION == 260
void func_00027344_v260(s32 arg0, s32 arg1, s32 arg2) {
    func_000201DC(arg0 - 0x3C, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027360);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024114);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024134);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024150(s32 arg0, s32 arg1) {
    func_00020308(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002416C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002416C(s32 arg0, s32 arg1) {
    func_000203A0(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024188);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024188(s32 arg0, s32 arg1) {
    func_00020438(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000241A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000241A4(s32 arg0, s32 arg1, s32 arg2) {
    func_00020534(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000241C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000241C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00020578(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000241DC);
#endif

#if FW_VERSION == 152
void func_000241DC(s32 arg0) {
    func_000205CC(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000241F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000241F8(s32 arg0, s32 arg1) {
    func_00023090(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024214);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024214(s32 arg0, s32 arg1) {
    func_00020634(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024230);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024230(s32 arg0, s32 arg1) {
    func_000206DC(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002424C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002424C(s32 arg0, s32 arg1) {
    func_00020758(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024268);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_00024268(s32 arg0, s32 arg1, s32 arg2) {
    func_000234A0(arg0 - 0x40, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021598);
#endif

#if FW_VERSION < 201
void func_00021598(s32 **arg0) {
    *arg0 = &D_00043510;
}
#endif

#if FW_VERSION == 260
void func_00021598(M2C_UNK **arg0) {
    *arg0 = &D_00043510;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215A8);
#endif

#if FW_VERSION < 201
void func_000215A8(s32 **arg0) {
    *arg0 = &D_00043510;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_000215A8(M2C_UNK **arg0) {
    *arg0 = &D_00043510;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215D0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000215D0(void) {

}
#endif

#if FW_VERSION == 260
s32 func_0002752C(void) {
    return 0;
}

s32 func_00027534(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215D8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215D8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215E0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215E0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215E8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215F0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215F0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000215F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000215F8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021600);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021600(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021608);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021608(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021610);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021610(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021618);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021618(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021620);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021620(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021628);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021628(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021630);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021630(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021638);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021638(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021640);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021640(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021648);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021648(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021650);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021650(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021658);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021658(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021660);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021660(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021668);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021668(void) {
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021670);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00021670(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000265BC);
#endif

#if FW_VERSION == 260
s32 func_000265BC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000265C4);
#endif

#if FW_VERSION == 260
s32 func_000265C4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024364);
#endif

#if FW_VERSION == 150
s32 func_00024364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x99C);
}
#endif

#if FW_VERSION == 260
s32 func_00024364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBFC);
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021678);
#endif

#if FW_VERSION == 152
void func_00021678(s32 arg0) {
    func_00024364(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000265F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026638);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026680);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000266B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000266E0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026720);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D30);
#endif

#if FW_VERSION == 260
s32 func_00026D30(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D44);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026DB4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026DEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026E34);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026E7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026ED8);
#endif

#if FW_VERSION == 260
s32 func_00026ED8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026EE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026FB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026FC0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027344);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027370);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027428);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027444);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027460);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027498);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000274D0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027500);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027530);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027570);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002761C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027628);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027A10);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027A3C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027AF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027B0C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027B28);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027C00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027CD8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027D08);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027D38);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027D78);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028060);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002807C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028098);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000280A4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002872C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000290F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029434);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029788);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029894);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000299C0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029A78);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029CC8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029ECC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029EF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029F6C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A0F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A12C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A198);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A218);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A334);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A41C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A4B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A640);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A6EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A774);
#endif

#if FW_VERSION == 260
s32 func_0002A774(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A77C);
#endif

#if FW_VERSION == 260
s32 func_0002A77C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A784);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A960);
#endif

#if FW_VERSION == 260
s32 func_0002A960(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A96C);
#endif

#if FW_VERSION == 260
s32 func_0002A96C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A978);
#endif

#if FW_VERSION == 260
s32 func_0002A978(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A984);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AAF8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ACA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADBC);
#endif

#if FW_VERSION == 260
s32 func_0002ADBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADC8);
#endif

#if FW_VERSION == 260
s32 func_0002ADC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD20) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADD4);
#endif

#if FW_VERSION == 260
s32 func_0002ADD4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BE1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BEC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B270);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B2FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B3C0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B45C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B5FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B7C4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B870);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B90C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B994);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C860);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA2C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BEF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C264);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C6CC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C7D0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CFCC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D394);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D780);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004EFF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F028);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043510);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F450);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F478);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F4C0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F510);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F560);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5A8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5B4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5C0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5CC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5E4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5F0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F5FC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F604);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F610);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F618);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F620);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EC48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D9E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DD40);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E000);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E434);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E618);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E6DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E8C4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ED60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EE74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F11C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F294);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F3D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F6FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F860);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F97C);
#endif

#if FW_VERSION == 260
void func_0002F97C(s32 arg0) {
    func_000290F4(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F998);
#endif

#if FW_VERSION == 260
void func_0002F998(s32 arg0) {
    func_000290F4(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F9B4);
#endif

#if FW_VERSION == 260
void func_0002F9B4(s32 arg0) {
    func_00029434(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F9D0);
#endif

#if FW_VERSION == 260
void func_0002F9D0(s32 arg0) {
    func_00029434(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F9EC);
#endif

#if FW_VERSION == 260
void func_0002F9EC(s32 arg0) {
    func_00029894(arg0 - 0x68);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FA08);
#endif

#if FW_VERSION == 260
void func_0002FA08(s32 arg0) {
    func_000299C0(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FA24);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FA68);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FAA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FB68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC34);
#endif

#if FW_VERSION == 260
void func_0002FC34(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC3C);
#endif

#if FW_VERSION == 260
s32 func_0002FC3C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC44);
#endif

#if FW_VERSION == 260
s32 func_0002FC44(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC4C);
#endif

#if FW_VERSION == 260
s32 func_0002FC4C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC54);
#endif

#if FW_VERSION == 260
s32 func_0002FC54(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC5C);
#endif

#if FW_VERSION == 260
s32 func_0002FC5C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC64);
#endif

#if FW_VERSION == 260
s32 func_0002FC64(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC6C);
#endif

#if FW_VERSION == 260
s32 func_0002FC6C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC74);
#endif

#if FW_VERSION == 260
s32 func_0002FC74(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC7C);
#endif

#if FW_VERSION == 260
s32 func_0002FC7C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC84);
#endif

#if FW_VERSION == 260
s32 func_0002FC84(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC8C);
#endif

#if FW_VERSION == 260
s32 func_0002FC8C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC94);
#endif

#if FW_VERSION == 260
s32 func_0002FC94(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FC9C);
#endif

#if FW_VERSION == 260
s32 func_0002FC9C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCA4);
#endif

#if FW_VERSION == 260
s32 func_0002FCA4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCAC);
#endif

#if FW_VERSION == 260
s32 func_0002FCAC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCB4);
#endif

#if FW_VERSION == 260
s32 func_0002FCB4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCBC);
#endif

#if FW_VERSION == 260
s32 func_0002FCBC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCC4);
#endif

#if FW_VERSION == 260
s32 func_0002FCC4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCCC);
#endif

#if FW_VERSION == 260
s32 func_0002FCCC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCD4);
#endif

#if FW_VERSION == 260
s32 func_0002FCD4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCDC);
#endif

#if FW_VERSION == 260
s32 func_0002FCDC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCE4);
#endif

#if FW_VERSION == 260
s32 func_0002FCE4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCEC);
#endif

#if FW_VERSION == 260
s32 func_0002FCEC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCF4);
#endif

#if FW_VERSION == 260
s32 func_0002FCF4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FCFC);
#endif

#if FW_VERSION == 260
s32 func_0002FCFC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD04);
#endif

#if FW_VERSION == 260
s32 func_0002FD04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD0C);
#endif

#if FW_VERSION == 260
s32 func_0002FD0C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD14);
#endif

#if FW_VERSION == 260
s32 func_0002FD14(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD1C);
#endif

#if FW_VERSION == 260
s32 func_0002FD1C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD24);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FDE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FE9C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FF74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003004C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030138);
#endif

#if FW_VERSION == 260
void func_00030138(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030140);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000312A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030378_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000303F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030448);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003051C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030558);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030594);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003063C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000306A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000306E0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000308E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003096C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000309F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030A74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030AA8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030ADC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030B5C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528C8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528CC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528D0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528D4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000528DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F648);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F708);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F790);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F798);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7A4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7B0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7C0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7CC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7E0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7E4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F7EC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004F800);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030C1C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021694);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021748);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002189C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002193C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000219E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021A54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021A54(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0002951C(arg1);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021A90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021AEC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00021AEC(void *arg0) {
    func_000292F0(M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004320C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004321C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043250);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043510);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043658);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043668);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004368C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000436B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000436D4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043704);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043728);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021B08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021B3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021B3C(void *arg0) {
    func_00025B40(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24);
}
#endif

#if FW_VERSION == 100
void func_00021B3C(void *arg0) {
    func_00025B40(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021B64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021B98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 * 0x5C) + 0x18);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 << 6) + 0x18);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00021B98(s32 arg0, s32 arg1) {
    func_00026004(arg0 + (arg1 * 0x60) + 0x18);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021BC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021BC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021BCC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00021BCC(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 < 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021BE8);
#endif

#if FW_VERSION < 201
s32 func_00021BE8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x11C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021BF4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021C6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021D00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021D00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00026100((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021D38);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021D88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021DD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021DD8(void *arg0) {
    func_00026194((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021E00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021E8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18));
}
#endif

#if FW_VERSION == 100
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION == 260
void func_00021E8C(void *arg0) {
    func_000261A0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021EB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021EB4(void *arg0) {
    func_00025CAC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021EB4(void *arg0) {
    func_00025CAC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021EDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021EDC(void *arg0) {
    func_00025CB8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021EDC(void *arg0) {
    func_00025CB8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021F04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021F04(void *arg0) {
    func_00025B5C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021F04(void *arg0) {
    func_00025B5C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021F2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021F2C(void *arg0) {
    func_00025B68((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021F2C(void *arg0) {
    func_00025B68((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021F54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021FC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021FC4(void *arg0) {
    func_00025CE4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_00021FC4(void *arg0) {
    func_00025CE4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00021FEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00021FEC(void *arg0, s32 arg1) {
    func_00025CF4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1);
}
#endif

#if FW_VERSION == 100
void func_00021FEC(void *arg0, s32 arg1) {
    func_00025CF4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022014);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000220C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000220C0(void *arg0) {
    func_00025CD4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_000220C0(void *arg0) {
    func_00025CD4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000220E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000220E8(void *arg0) {
    func_000257E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24));
}
#endif

#if FW_VERSION == 100
void func_000220E8(void *arg0) {
    func_000257E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022110);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022110(void *arg0, s32 arg1, s32 arg2) {
    func_00025788((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00022110(void *arg0, s32 arg1, s32 arg2) {
    func_00025788((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1, arg2);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022138);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000221DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000221DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00025D94((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24), arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
void func_000221DC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00025D94((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24), arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022204);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000222C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022380);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022458);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000224A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000224F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022548(void *arg0, s32 arg1) {
    func_00028614((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x30), arg1);
}
#endif

#if FW_VERSION == 100
void func_00022548(void *arg0, s32 arg1) {
    func_00026880((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x30), arg1);
}
#endif

#if FW_VERSION == 260
void func_00022548(void *arg0, s32 arg1) {
    func_00028614((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x30), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022570);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000226EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000226EC(void *arg0, s32 arg1) {
    func_0002870C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x38), arg1);
}
#endif

#if FW_VERSION == 100
void func_000226EC(void *arg0, s32 arg1) {
    func_00026960((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x38), arg1);
}
#endif

#if FW_VERSION == 260
void func_000226EC(void *arg0, s32 arg1) {
    func_0002870C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x38), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022714);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000227C4);
#endif

#if FW_VERSION == 100
void func_000228B0(void *arg0, s32 arg1) {
    func_00026A6C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x40), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000228D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022A54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x48));
}
#endif

#if FW_VERSION == 100
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x48));
}
#endif

#if FW_VERSION == 260
void func_00022A54(void *arg0) {
    func_000254FC((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032168);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022A7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000322F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000323D0);
#endif

#if FW_VERSION == 260
void func_000323D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000322F8(arg0, arg1, arg2 + arg3, arg4);
}
#endif

#if FW_VERSION == 100
void func_00022BA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00022B38(arg0, arg1 + arg2, arg3);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022BC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032418);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022BF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00022BF0(void *arg0, s32 arg1, s32 arg2) {
    func_000255B0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032470);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025A60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022C18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022D00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022D64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022EC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18), arg1);
}
#endif

#if FW_VERSION == 100
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1);
}
#endif

#if FW_VERSION == 260
void func_00022EC4(void *arg0, s32 arg1) {
    func_000266A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18), arg1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022EEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032A50);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00022F80);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023000);
#endif

#if FW_VERSION == 152
void func_00023000(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = func_000251F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00023000(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = func_000251F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1, arg2);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002304C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032C5C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032D90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000230C8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000231D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000330AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026174);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000232B8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000233DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000234C0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000235C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000235C4(void *arg0) {
    func_000251C8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C);
}
#endif

#if FW_VERSION == 100
void func_000235C4(void *arg0) {
    func_000251C8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x4C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000235EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023684);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x4C), arg1 - 1, arg2);
}
#endif

#if FW_VERSION == 260
void func_00023684(void *arg0, s32 arg1, s32 arg2) {
    func_00025248((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000265E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000265E0(void *arg0, s32 arg1) {
    func_00026E30((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x4C), arg1 - 1);
}
#endif

#if FW_VERSION == 260
void func_000265E0(void *arg0, s32 arg1) {
    func_00026E30((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50), arg1 - 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000236B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000236B0(void *arg0) {
    func_000267E8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60);
}
#endif

#if FW_VERSION == 100
void func_000236B0(void *arg0) {
    func_000262E4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000236D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000236D8(void *arg0, s32 arg1) {
    func_000281F8((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1);
}
#endif

#if FW_VERSION == 100
void func_000236D8(void *arg0, s32 arg1) {
    func_000262F0((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023700(void *arg0, s32 arg1, s32 arg2) {
    func_00028268((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023700(void *arg0, s32 arg1, s32 arg2) {
    func_00026370((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023728);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023728(void *arg0, s32 arg1, s32 arg2) {
    func_00028320((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00023728(void *arg0, s32 arg1, s32 arg2) {
    func_00026438((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023750);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023750(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00028394((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
void func_00023750(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000264A4((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023778);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00023778(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00028468((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1, arg2, arg3, arg4);
}
#endif

#if FW_VERSION == 100
void func_00023778(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0002657C((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18), arg1, arg2, arg3, arg4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026734);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00026734(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00028198((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x60), arg1);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}
#endif

#if FW_VERSION == 260
s32 func_00026734(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00028198((s32) (arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64), arg1);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000237A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000237A0(void *arg0) {
    return func_000260F8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x18) + 1;
}
#endif

#if FW_VERSION == 100
s32 func_000237A0(void *arg0) {
    return func_000260F8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x18) + 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000237CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000237CC(void *arg0) {
    func_00025E54(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x24);
}
#endif

#if FW_VERSION == 100
void func_000237CC(void *arg0) {
    func_00025E54(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x24);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000237F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000237F4(void *arg0, s32 arg1) {
    s32 var_v1;

    if (arg1 != 0x1B) {
        if (((arg1 == 0x10) | (arg1 == 0xA0)) == 0) {
            var_v1 = 0;
            if (arg1 == 0xB1) {
                var_v1 = func_000269EC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x40);
            }
        } else {
            var_v1 = func_000268D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x38);
        }
    } else {
        var_v1 = func_00026878(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x5C) + 0x30);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_000237F4(void *arg0, s32 arg1) {
    s32 var_v1;

    if (arg1 != 0x1B) {
        if (((arg1 == 0x10) | (arg1 == 0xA0)) == 0) {
            var_v1 = 0;
            if (arg1 == 0xB1) {
                var_v1 = func_000269EC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x40);
            }
        } else {
            var_v1 = func_000268D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x38);
        }
    } else {
        var_v1 = func_00026878(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + 0x30);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023890);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000238B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000238E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023904);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023924);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00023F00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024064);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024104);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024414);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024738);

s32 func_00024808(void *arg0) {
    void *sp0;
    func_00021BC0(arg0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg0, 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0x18)(arg0, 0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, void *), 0x50)(arg0, 0, &sp0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK, void *), 0x54)(arg0, 0, 0, &sp0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x58)(arg0, 0, 0xE000, 0, &sp0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000248BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024EC0);
#endif

#if FW_VERSION == 100
void func_00024F10(M2C_UNK **arg0) {
    *arg0 = &D_00043828;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024F20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024F68);
#endif

#if FW_VERSION < 201
void func_00024F68(s32 **arg0) {
    *arg0 = &D_000437B8;
}
#endif

#if FW_VERSION == 260
void func_00024F68(M2C_UNK **arg0) {
    *arg0 = &D_000437B8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024F78);
#endif

#if FW_VERSION < 201
void func_00024F78(s32 **arg0) {
    *arg0 = &D_000437B8;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_00024F78(M2C_UNK **arg0) {
    *arg0 = &D_000437B8;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033920);
#endif

#if FW_VERSION == 260
s32 func_00033920(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FA0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FA0(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FA8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FA8(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FB0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FB0(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FB8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FB8(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00024FC0(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FC8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00024FFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002500C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002501C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002502C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025044);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025044(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002504C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002504C(void) {
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025054);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025070);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025070(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025078);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025078(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025080);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025080(void) {
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025088);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000250AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000250D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033A8C);
#endif

#if FW_VERSION == 260
s32 func_00033A8C(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026B48);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00026B48(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000250FC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000250FC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025104);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025104(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033AAC);
#endif

#if FW_VERSION == 260
s32 func_00033AAC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033AB4);
#endif

#if FW_VERSION == 260
s32 func_00033AB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026B60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026BE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00026CB8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION == 100
void func_0002510C(M2C_UNK **arg0) {
    *arg0 = &D_00043828;
    _ZdlPv();
}

void func_00025134(s32 arg0) {
    func_00025298(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025150);
#endif

#if FW_VERSION == 100
s32 func_00025150(void *arg0, s32 arg1) {
    return func_00025298((s32) arg0);
}
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_00025150(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_00026D38((s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002516C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000251C8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000251C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026E30);
#endif

#if FW_VERSION == 100
s32 func_000251D0(s32 arg0) {
    func_00025380(arg0);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000251F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025248);
#endif

#if FW_VERSION == 100
s32 func_00025298(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043828;
    return (s32) &D_00043828;
}

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043748);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000437B8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043828);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000252B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025380);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004386C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043890);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025404);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025454);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002549C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002549C(s32 arg0, s32 arg1) {
    return (arg0 << 8) | arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000254A8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000254A8(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000254B0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000254B0(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000254B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000254B8(s32 *arg0) {
    *arg0 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000254C4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000254C4(s32 *arg0, s32 arg1) {
    func_000254B8(arg0);
    *arg0 = arg1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000254FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025518);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000255B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025670);
#endif

#if FW_VERSION < 201
void func_00025670(void *arg0) {
    func_000267F4((s32) (arg0 + 0xC));
    func_000268C4((s32) (arg0 + 0x14));
    func_000269E0((s32) (arg0 + 0x1C));
    func_000254B0(arg0 + 0x24);
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025670(void *arg0) {
    func_000267F4(arg0 + 0xC);
    func_000268C4(arg0 + 0x14);
    func_000269E0(arg0 + 0x1C);
    func_000254B0(arg0 + 0x24);
    func_000254B0(arg0 + 0x28);
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000256C0);
#endif

#if FW_VERSION < 201
s32 func_000256C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00026800((s32) (arg0 + 0xC));
    func_000268D8((s32) (arg0 + 0x14));
    func_000269F4((s32) (arg0 + 0x1C));
    func_000254B8(arg0 + 0x24);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_000256C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00026800((s32) (arg0 + 0xC));
    func_000268D8((s32) (arg0 + 0x14));
    func_000269F4((s32) (arg0 + 0x1C));
    func_000254B8(arg0 + 0x24);
    func_000254B8(arg0 + 0x28);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025714);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025764);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025788);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000257E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025968);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000259F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025A74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025B40);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00025B40(void *arg0) {
    func_00029E44(M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025B5C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025B68);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025B74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CAC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025CAC(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 8) + 0x2C;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CC4);
#endif

#if FW_VERSION < 201
s32 func_00025CC4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x1C), s32 *, 4);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CD4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CE4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025CF4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025D94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025E54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00025E54(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00048680);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000437B8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025E5C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043910);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043934);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025EAC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025EFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025F44);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025F8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025F8C(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0((s32) (arg0 + 0x34));
    func_00027F20((s32) (arg0 + 0x48));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025F8C(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0(arg0 + 0x38);
    func_00027F20(arg0 + 0x4C);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00025FC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025FC8(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0((s32) (arg0 + 0x34));
    func_00027F20((s32) (arg0 + 0x48));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 260
void func_00025FC8(void *arg0) {
    func_00025670(arg0 + 0xC);
    func_00026BE0(arg0 + 0x38);
    func_00027F20(arg0 + 0x4C);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026004);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026070);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000260F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000260F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026100);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026114);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026164);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_00026164(s32 arg0, s32 arg1) {
    return (func_00026194(arg0) >= arg1) ? 0 : 6;
}
#endif

#if FW_VERSION < 152
s32 func_00026164(s32 arg0, s32 arg1) {
    return -(func_00026194(arg0) < arg1) & 6;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026194);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000261A0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000261F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027D10);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026250);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000262E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000262F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026370);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026438);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000264A4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002657C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026698);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00026698(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000266A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026738);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_00026738(void *arg0, u32 arg1) {
    return (arg1 < (u32) M2C_FIELD(arg0, u32 *, 8)) ? 0 : 6;
}
#endif

#if FW_VERSION < 152
s32 func_00026738(void *arg0, u32 arg1) {
    return ~-(arg1 < (u32) M2C_FIELD(arg0, u32 *, 8)) & 6;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026750);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000267A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027EA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027F20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027FF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00027FF8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028050);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00028050(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_0002B548(arg1);
    func_0002808C((s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002808C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028198);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000351E0);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000267E8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_000267E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000281F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028268);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028320);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028394);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028468);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000267F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026800);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026810);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026878);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00026878(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026880);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268B8);
#endif

#if FW_VERSION < 201
void func_000268B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268D0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000268D0(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000268E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002870C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026960);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000269D4);
#endif

#if FW_VERSION < 201
void func_000269D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000269E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000269EC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_000269EC(s32 *arg0) {
    return *arg0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000269F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026A04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026A6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026AD4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026C1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026D64);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026E14);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026EC4);

void func_00026F7C(s32 arg0) {
    D_00045B90 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028D48(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x5C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x14);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028D68);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028EEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028F08);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028F50);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028FEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029030);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000290B4);

s32 func_000290F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002911C);

void func_000293EC(s32 arg0) {
    func_00026E14(arg0 - 0x3C);
}

void func_00029408(s32 arg0) {
    func_00026EC4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029424);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000294C0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002960C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029758);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000297E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029870);

void func_00029904(s32 arg0) {
    D_0004AB70 = arg0;
}
#endif

#if FW_VERSION == 152
void func_00029850(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x10C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x3C);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 150
void func_00029910_v150(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x10C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x3C);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029930);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029DB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029DD4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029E1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029F44);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029FD8);

s32 func_0002A014(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A040);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A1D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A4E0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A54C);

void func_0002A734(s32 arg0) {
    func_000297E4(arg0 - 0x3C);
}

void func_0002A750(s32 arg0) {
    func_00029870(arg0 - 0x3C);
}

void func_0002A76C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00029DB0(arg0 - 0x3C, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A788);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A844);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A900);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A8BC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A97C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9F8);

void func_0002AA7C(s32 arg0) {
    D_0004AB74 = arg0;
}

void func_0002AA88(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x70);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0xC0);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AAA8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AC00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AC4C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ACBC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADBC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AE04);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AE48);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AE98);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B004);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B0C4_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B148);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B1A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B228);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B250);
#endif

#if FW_VERSION == 152
void func_0002B278(s32 arg0) {
    func_0002A8BC(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 150
void func_0002B278(s32 arg0) {
    func_0002A97C_v150(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002B294(s32 arg0) {
    func_0002A9F8(arg0 - 0x3C);
}

void func_0002B2B0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002AC00(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B2CC);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B2CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_0002F2C8(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_0002F2E0(arg1 + 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B318);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B318(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000290E0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_000290E0(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B33C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B40C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B42C);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002B42C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026F88);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00026F88(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000439F8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043A0C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043A20);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043A34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00048894);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00026F90);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002714C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027168);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000271B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000271E8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002722C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027268);

s32 func_000272A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000272D0);

void func_00027504(s32 arg0) {
    func_00026E14(arg0 - 0x38);
}

void func_00027520(s32 arg0) {
    func_00026EC4(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002753C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027558);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002759C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000275D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027714);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027850);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000278D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027958);

void func_000279E4(s32 arg0) {
    D_00045B94 = arg0;
}

void func_000279F0(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000279F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027E74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027E9C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027EE4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027F80);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00027FC4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028000);

s32 func_0002803C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028068);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028220);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028528);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028594);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002870C);

void func_00028728(s32 arg0) {
    func_00027958(arg0 - 0x38);
}

void func_00028744(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00027E74(arg0 - 0x38, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028760);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028808);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000288B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028924);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028998);

void func_00028A14(s32 arg0) {
    D_00045B98 = arg0;
}

void func_00028A20(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043A60);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043A98);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043AA0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043AB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043AC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00048918);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043AD0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043ADC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B00);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B38);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B48);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B58);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000489D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028A28);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028BE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028C2C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028C9C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028CD4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028D1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028D60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028DB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028F68);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028FA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00028FE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002903C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029064);

void func_0002908C(s32 arg0) {
    func_00028924(arg0 - 0x38);
}

void func_000290A8(s32 arg0) {
    func_00028998(arg0 - 0x38);
}

void func_000290C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00028BE0(arg0 - 0x38, arg1, arg2);
}

void func_000290E0(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000290E8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000291A0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029258);

void func_00029278(void) {

}

void func_00029280(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043B98);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029288);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000292CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B4A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B548);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0002B548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x304);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000292F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029320);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002951C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002957C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029630);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B898);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B8F0);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
void func_0002B8F0(s32 arg0) {
    func_0002A964(arg0 + 0x10C);
    func_0002A98C(arg0 + 0x118);
    func_0002A9B4(arg0 + 0x124);
    func_0002E110(arg0 + 4);
}
#endif

#if FW_VERSION == 150
void func_0002B9C0_v150(s32 arg0) {
    func_0002A964(arg0 + 0x10C);
    func_0002A98C(arg0 + 0x118);
    func_0002A9B4(arg0 + 0x124);
    func_0002E110(arg0 + 4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029694);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029910);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029AB8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029BB8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029BB8(s32 arg0) {
    func_0002E304(arg0 + 4);
    func_00029AB8(arg0);
    func_00029B38(arg0);
    func_00029630(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029BF8);
#endif

#if FW_VERSION < 201
void func_00029BF8(s32 arg0) {
    func_00029BB8(arg0);
    func_0002A9CC(arg0 + 0x124);
    func_0002A9A4(arg0 + 0x118);
    func_0002A97C(arg0 + 0x10C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029C38);
#endif

#if FW_VERSION < 201
void func_00029C38(s32 arg0) {
    func_00029BB8(arg0);
    func_0002A9CC(arg0 + 0x124);
    func_0002A9A4(arg0 + 0x118);
    func_0002A97C(arg0 + 0x10C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BD24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029C78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029CE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029D74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029DDC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029E44);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029E74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029E94);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029E94(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029E9C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00029E9C(void) {

}
#endif

#if FW_VERSION == 100
void func_00029EA4(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029EAC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029F40);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00029F7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A050);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A0D8);
#endif

#if FW_VERSION < 201
void func_0002A0D8(s32 arg0) {
    func_0002A138(arg0);
    func_0002AF20(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A108);
#endif

#if FW_VERSION < 201
void func_0002A108(s32 arg0) {
    func_0002A138(arg0);
    func_0002AF20(arg0 + 0x20);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A20C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002A20C(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x18) = (u32) (arg1 >> 0xB);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C308);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C308(void *arg0) {
    func_0002AF30((s32) (arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 260
void func_0002C308(void *arg0) {
    func_0002AF30(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C334);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C334(void *arg0) {
    func_0002AF30((s32) (arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 260
void func_0002C334(void *arg0) {
    func_0002AF30(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A21C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A43C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A65C);
#endif

#if FW_VERSION < 201
void func_0002A65C(s32 **arg0) {
    *arg0 = &D_00043F70;
}
#endif

#if FW_VERSION == 260
void func_0002A65C(M2C_UNK **arg0) {
    *arg0 = &D_00043F70;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043BFC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043C04);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043C3C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043C60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A66C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A73C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A7C0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A810);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A8E0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A964);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A97C);
#endif

#if FW_VERSION < 201
void func_0002A97C(s32 **arg0) {
    *arg0 = &D_00043F60;
}
#endif

#if FW_VERSION == 260
void func_0002A97C(M2C_UNK **arg0) {
    *arg0 = &D_00043F60;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A98C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9A4);
#endif

#if FW_VERSION < 201
void func_0002A9A4(s32 **arg0) {
    *arg0 = &D_00043F50;
}
#endif

#if FW_VERSION == 260
void func_0002A9A4(M2C_UNK **arg0) {
    *arg0 = &D_00043F50;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9CC);
#endif

#if FW_VERSION < 201
void func_0002A9CC(s32 **arg0) {
    *arg0 = &D_00043F40;
}
#endif

#if FW_VERSION == 260
void func_0002A9CC(M2C_UNK **arg0) {
    *arg0 = &D_00043F40;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9DC);
#endif

#if FW_VERSION < 152
void func_0002A9DC(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00043F70;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 152
void func_0002A9DC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043F70;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002A9F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AA78);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AAC8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AB98);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AC68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ACEC);
#endif

#if FW_VERSION < 201
void func_0002ACEC(s32 **arg0) {
    *arg0 = &D_00043F30;
}
#endif

#if FW_VERSION == 260
void func_0002ACEC(M2C_UNK **arg0) {
    *arg0 = &D_00043F30;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ACFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002ADCC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AE50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AF20);
#endif

#if FW_VERSION < 201
void func_0002AF20(s32 **arg0) {
    *arg0 = &D_00043F20;
}
#endif

#if FW_VERSION == 260
void func_0002AF20(M2C_UNK **arg0) {
    *arg0 = &D_00043F20;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AF30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AF48);
#endif

#if FW_VERSION < 152
void func_0002AF48(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00043F30;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 152
void func_0002AF48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043F30;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AF60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002AFE4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B02C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B074);
#endif

#if FW_VERSION < 201
void func_0002B074(s32 **arg0) {
    *arg0 = &D_00043F70;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B074(M2C_UNK **arg0) {
    *arg0 = &D_00043F70;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B09C);
#endif

#if FW_VERSION < 201
void func_0002B09C(s32 **arg0) {
    *arg0 = &D_00043F60;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B09C(M2C_UNK **arg0) {
    *arg0 = &D_00043F60;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B0C4);
#endif

#if FW_VERSION < 201
void func_0002B0C4(s32 **arg0) {
    *arg0 = &D_00043F50;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B0C4(M2C_UNK **arg0) {
    *arg0 = &D_00043F50;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B0EC);
#endif

#if FW_VERSION < 201
void func_0002B0EC(s32 **arg0) {
    *arg0 = &D_00043F40;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B0EC(M2C_UNK **arg0) {
    *arg0 = &D_00043F40;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B114);
#endif

#if FW_VERSION < 201
void func_0002B114(s32 **arg0) {
    *arg0 = &D_00043F30;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B114(M2C_UNK **arg0) {
    *arg0 = &D_00043F30;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B13C);
#endif

#if FW_VERSION < 201
void func_0002B13C(s32 **arg0) {
    *arg0 = &D_00043F20;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002B13C(M2C_UNK **arg0) {
    *arg0 = &D_00043F20;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F20);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F30);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F40);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F50);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F60);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F70);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B164);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B2E8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B36C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B3F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B454);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B524);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B610);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038B10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B718);
#endif

#if FW_VERSION < 201
void func_0002B718(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00043FA8;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B754);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B754(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B75C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B7BC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B81C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B85C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B89C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B8E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B964);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B964(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B96C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B9B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B9B8(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B9C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002B9E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002B9E8(s32 arg0, s32 arg1) {
    func_0002C144(arg1, arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA0C);
#endif

#if FW_VERSION < 201
void func_0002BA0C(s32 **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION == 260
void func_0002BA0C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA1C);
#endif

#if FW_VERSION < 201
void func_0002BA1C(s32 **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION == 260
void func_0002BA1C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA2C);
#endif

#if FW_VERSION < 201
void func_0002BA2C(s32 **arg0) {
    *arg0 = &D_00043FF0;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002BA2C(M2C_UNK **arg0) {
    *arg0 = &D_00043FF0;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA54);
#endif

#if FW_VERSION < 201
void func_0002BA54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA6C);
#endif

#if FW_VERSION < 201
void func_0002BA6C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BA84);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002BA84(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BADC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002BADC(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BB34);
#endif

#if FW_VERSION < 201
void func_0002BB34(void *arg0) {
    void *temp_s0;
    void *var_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000440B8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v0 = M2C_FIELD(arg0, void **, 8);
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 8);
                if (var_v0 != NULL) {
                    _ZdlPv(var_v0);
                }
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
    }
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BBA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BC30);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043F98);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043FA8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043FB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043FD0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00043FF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BC78);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044028);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BD90);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002BF9C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C048);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C0E8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C144);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C200);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C22C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002C22C(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000440B8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C234);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C310);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C3C8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_0002C3C8(void *arg0, s32 arg1) {
    func_0002DB58(M2C_FIELD(arg0, s32 *, 8), arg1);
    return 1;
}
#endif

#if FW_VERSION == 100
s32 func_0002C3C8(void *arg0, s32 arg1) {
    func_0002DB58(M2C_FIELD(arg0, s32 *, 4), arg1);
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C3E8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002C3E8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C3F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C410);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C410(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C410(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C448);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C448(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C448(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C660((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C480);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C480(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C480(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C4B8);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
void func_0002C4B8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_0002C4B8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    func_0002C6B0((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C4F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C4F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 100
void func_0002C4F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C53C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002C53C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION == 100
void func_0002C53C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044140;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0002C310((s32) arg0);
    }
    func_0002C700((s32) (arg0 + 0xC));
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E538(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E578);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E578(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E5B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E5B8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E5F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E5F8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E638);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E638(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E660);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E660(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E688);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002E688(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00048F38;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E6C4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E624);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E704_v150);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002E758(void *arg0, u32 arg1) {
    return func_0002CA10(M2C_FIELD(arg0, s32 *, 4), arg1) == 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E778);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002E778(void *arg0, s32 arg1) {
    return func_0002CA3C(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E79C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C600);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C61C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C638);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C660);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C688);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C6B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C6D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C700);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C728);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C764);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002C764(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044140);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00048F38);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044158);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C76C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C7D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C7F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C87C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C948);
#endif

#if FW_VERSION == 260
s32 func_0002C948(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag("OsWrapFlg", 0x200U, 0U, NULL);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C948(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag("OsWrapFlg", 0x200U, 0U, NULL);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C998);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002C998(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C998(s32 *arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002C9E4);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002C9E4(s32 arg0) {
    return (sceKernelDeleteEventFlag(arg0) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002C9E4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelDeleteEventFlag(arg0) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CA10);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002CA10(s32 arg0, u32 arg1) {
    return (sceKernelSetEventFlag(arg0, arg1) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002CA10(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelSetEventFlag(arg0, arg1) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CA3C);
#endif

#if FW_VERSION == 152 || FW_VERSION == 260
s32 func_0002CA3C(s32 arg0, u32 arg1) {
    return (sceKernelClearEventFlag(arg0, arg1) == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_0002CA3C(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelClearEventFlag(arg0, arg1) != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CA68);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CAC4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EBEC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CB48);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CBA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC54);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC54(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC5C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC5C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC64);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002CC64(void) {
    return -9;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC6C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002CC6C(void) {
    return -9;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC74);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002CC74(void) {

}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CC7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CD0C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CDCC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CE88);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002CF20);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D0C0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D1E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D260);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002D260(void) {
    func_0002D1E4(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D280);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002D280(void) {
    func_0002D1E4(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D2A0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D2F0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044288);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000442AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D374);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D444);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D48C);
#endif

#if FW_VERSION == 150
void func_0002D48C(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_000442F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002D48C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000442F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D4A4);
#endif

#if FW_VERSION < 201
void func_0002D4A4(s32 **arg0) {
    *arg0 = &D_000442F0;
}
#endif

#if FW_VERSION == 260
void func_0002D4A4(M2C_UNK **arg0) {
    *arg0 = &D_000442F0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D4B4);
#endif

#if FW_VERSION < 201
void func_0002D4B4(s32 **arg0) {
    *arg0 = &D_000442F0;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002D4B4(M2C_UNK **arg0) {
    *arg0 = &D_000442F0;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D4DC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000442F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D56C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D5D0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004432C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D6D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044388);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D768);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D828);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D8B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002D914);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DA5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DAF4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002DAF4(s32 arg0) {
    sceKernelDelayThread(arg0 * 0xA);
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DB20);
#endif

#if FW_VERSION == 150
s32 *func_0002DB20(s32 arg0) {
    void *sp0;
    s32 *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004595C;
    temp_v0 = func_0002D4DC(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

#if FW_VERSION == 100
M2C_UNK *func_0002DB20(s32 arg0) {
    void *sp0;
    M2C_UNK *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004595C;
    temp_v0 = func_0002D4DC(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DB58);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DC5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DCD8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002DCD8(void) {
    func_0002DC5C(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DCF8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002DCF8(void) {
    func_0002DC5C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DD18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DD68);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044518);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004453C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DDEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DEBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DF04);
#endif

#if FW_VERSION == 150
void func_0002DF04(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00044588;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002DF04(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044588;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DF1C);
#endif

#if FW_VERSION < 201
void func_0002DF1C(s32 **arg0) {
    *arg0 = &D_00044588;
}
#endif

#if FW_VERSION == 260
void func_0002DF1C(M2C_UNK **arg0) {
    *arg0 = &D_00044588;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DF2C);
#endif

#if FW_VERSION < 201
void func_0002DF2C(s32 **arg0) {
    *arg0 = &D_00044588;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_0002DF2C(M2C_UNK **arg0) {
    *arg0 = &D_00044588;
    _ZdlPv();
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044588);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DF54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002DFC8);
#endif

#if FW_VERSION == 152
s32 func_0002DFC8(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        var_s1 = ~sce_paf_private_fclose(*arg0) == 0;
        func_0002F328((s32) arg0);
    }
    return var_s1;
}
#endif

#if FW_VERSION < 152
s32 func_0002DFC8(s32 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        if (sce_paf_private_fclose(*arg0) == -1) {
            var_s1 = 1;
        }
        func_0002F328((s32) arg0);
    }
    return var_s1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E020);
#endif

#if FW_VERSION < 201
void func_0002E020(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    sce_paf_private_fread(arg0, arg1, arg2, *arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E03C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E03C(s32 *arg0) {
    sce_paf_private_fseek(*arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E058);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E058(s32 *arg0) {
    sce_paf_private_ftell(*arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E074);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E0A8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E0A8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (func_0002F2C8(arg1) & 1);
    M2C_FIELD(arg0, s32 *, 4) = func_0002F2E0(arg1 + 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E0F4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002E0F4(s32 *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u8 *, 0) << 8;
    *arg0 = temp_v0;
    *arg0 = temp_v0 | M2C_FIELD(arg1, u8 *, 1);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E110);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E144);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E304);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E344);
#endif

#if FW_VERSION < 201
s32 func_0002E344(s32 *arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_s2;

    temp_s0 = *arg0;
    temp_s2 = temp_s0 + 0x28;
    sce_paf_private_strncpy(arg1, temp_s0 + 4, 4);
    M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(temp_s2, u8 *, 7);
    sce_paf_private_strncpy(arg1 + 5, temp_s0 + 0x31, (s32) M2C_FIELD(temp_s2, u8 *, 8));
    M2C_FIELD((arg1 + M2C_FIELD(temp_s2, u8 *, 8)), s8 *, 5) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E3B8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E3B8(s32 *arg0, void *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E3F8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E3F8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E408);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E4B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E56C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E56C(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_0002F2C8(temp_s0 + 4) + temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E598);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E598(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    return func_0002F2C8(temp_s0 + 6) + temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E5C4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002E5C4(s32 *arg0, s32 *arg1) {
    *arg1 = func_0002F2C8(func_0002E56C(arg0) + 6);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E5FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003089C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000308E8);
#endif

#if FW_VERSION == 100
s32 func_0002E6CC(s32 *arg0, s32 *arg1) {
    *arg1 = func_0002F2C8(func_0002E598(arg0) + 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445A4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445B4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445C4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E704);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002E8CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EA60);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EA60(s32 *arg0, void *arg1) {
    sce_paf_private_memcpy(arg1, *arg0 + 4, 4);
    M2C_FIELD(arg1, s8 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EAA0);
#endif

#if FW_VERSION < 201
s32 func_0002EAA0(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        func_0002F328(temp_v0);
        *arg0 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EAE0);
#endif

#if FW_VERSION < 201
s32 func_0002EAE0(void **arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sce_paf_private_memcpy(arg1, (s32) (temp_s0 + 4), 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0002EAE0(void **arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *arg0;
    sce_paf_private_memcpy(arg1, temp_s0 + 4, 4);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0, u8 *, 0x2E);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EB28);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EB28(s32 *arg0, void *arg1) {
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = *arg0;
    temp_s0_2 = temp_s0 + func_0002F2E0(temp_s0 + 8);
    M2C_FIELD(arg1, void **, 0) = temp_s0_2;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_s0_2, u8 *, 0x11);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EB70);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EB70(s32 *arg0, void *arg1) {
    s32 temp_s1;

    temp_s1 = *arg0;
    func_0002E0A8(arg1, temp_s1 + 4);
    func_0002E0A8(arg1 + 8, temp_s1 + 0xA);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EBC0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002EBC0(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EBD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030DE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030DE8(void *arg0, void *arg1) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 0) >> 4);
    M2C_FIELD(arg1, s8 *, 1) = (s8) (M2C_FIELD(temp_a2, u8 *, 0) & 0xF);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(temp_a2, u8 *, 1) >> 4);
    M2C_FIELD(arg1, s8 *, 3) = (s8) (M2C_FIELD(temp_a2, u8 *, 1) & 1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030E24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030E24(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    sce_paf_private_memcpy(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 5) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 0xF);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030E90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00030E90(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 0) >> 4);
    sce_paf_private_memcpy(arg1 + 1, (s32) (temp_s0 + 2), 2);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(temp_s0, u8 *, 5) >> 4);
    M2C_FIELD(arg1, s8 *, 4) = (s8) (M2C_FIELD(temp_s0, u8 *, 5) & 1);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EC84);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EE78);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EF04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EFB8);
#endif

#if FW_VERSION < 201
s32 func_0002EFB8(s32 arg0) {
    func_0002F328(arg0);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0002EFB8(s32 arg0) {
    if (arg0 != 0) {
        func_0002F328(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031160);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002EFD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F224);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0002F224(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0xA);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F23C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F268);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F2AC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002F2AC(s32 arg0) {
    func_0002F2E0(arg0 + 6);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F2C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F30C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0002F30C(void) {
    sce_paf_private_malloc();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F328);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F348);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003BBCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003143C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000445F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F3C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000319F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031A3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C4AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031BF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031E28);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F0C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003233C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F7A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000326F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000328C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002F8F4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FB40);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FD8C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0002FFE0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030040);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000301A4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030294);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030378);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003049C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003050C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E630);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003057C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030A50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EA90);
#endif

#if FW_VERSION == 260
void func_0003EA90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x12C8) = (s32) M2C_FIELD(arg0, s32 *, 0x1330);
    M2C_FIELD(arg0, s32 *, 0x12D8) = (s32) M2C_FIELD(arg0, s32 *, 0x1334);
    M2C_FIELD(arg0, s32 *, 0x12D0) = (s32) M2C_FIELD(arg0, s32 *, 0x1340);
    M2C_FIELD(arg0, s32 *, 0x12E0) = (s32) M2C_FIELD(arg0, s32 *, 0x1344);
    M2C_FIELD(arg0, s32 *, 0x12CC) = (s32) M2C_FIELD(arg0, s32 *, 0x1338);
    M2C_FIELD(arg0, s32 *, 0x12D4) = (s32) M2C_FIELD(arg0, s32 *, 0x1348);
    M2C_FIELD(arg0, s32 *, 0x12DC) = (s32) M2C_FIELD(arg0, s32 *, 0x133C);
    M2C_FIELD(arg0, s32 *, 0x12E4) = (s32) M2C_FIELD(arg0, s32 *, 0x134C);
    func_0003EAEC((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0x1281));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EAEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ECD8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EE4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000343FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD94) = (s32) M2C_FIELD(arg0, s32 *, 0xDFC);
    M2C_FIELD(arg0, s32 *, 0xDA4) = (s32) M2C_FIELD(arg0, s32 *, 0xE00);
    M2C_FIELD(arg0, s32 *, 0xD9C) = (s32) M2C_FIELD(arg0, s32 *, 0xE0C);
    M2C_FIELD(arg0, s32 *, 0xDAC) = (s32) M2C_FIELD(arg0, s32 *, 0xE10);
    M2C_FIELD(arg0, s32 *, 0xD98) = (s32) M2C_FIELD(arg0, s32 *, 0xE04);
    M2C_FIELD(arg0, s32 *, 0xDA0) = (s32) M2C_FIELD(arg0, s32 *, 0xE14);
    M2C_FIELD(arg0, s32 *, 0xDA8) = (s32) M2C_FIELD(arg0, s32 *, 0xE08);
    M2C_FIELD(arg0, s32 *, 0xDB0) = (s32) M2C_FIELD(arg0, s32 *, 0xE18);
    func_00030BD8((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0xC41));
}
#endif

#if FW_VERSION == 100
void func_00030B7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x564) = (s32) M2C_FIELD(arg0, s32 *, 0x5CC);
    M2C_FIELD(arg0, s32 *, 0x574) = (s32) M2C_FIELD(arg0, s32 *, 0x5D0);
    M2C_FIELD(arg0, s32 *, 0x56C) = (s32) M2C_FIELD(arg0, s32 *, 0x5DC);
    M2C_FIELD(arg0, s32 *, 0x57C) = (s32) M2C_FIELD(arg0, s32 *, 0x5E0);
    M2C_FIELD(arg0, s32 *, 0x568) = (s32) M2C_FIELD(arg0, s32 *, 0x5D4);
    M2C_FIELD(arg0, s32 *, 0x570) = (s32) M2C_FIELD(arg0, s32 *, 0x5E4);
    M2C_FIELD(arg0, s32 *, 0x578) = (s32) M2C_FIELD(arg0, s32 *, 0x5D8);
    M2C_FIELD(arg0, s32 *, 0x580) = (s32) M2C_FIELD(arg0, s32 *, 0x5E8);
    func_00030BD8((s32) arg0, (s32) M2C_FIELD(arg0, u8 *, 0x411));
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030BD8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044690);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044694);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044698);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004469C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446A0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494D4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0005056C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446B0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494E8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494EC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494F0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494F4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000494F8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050590);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049500);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030D98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F014);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F140);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F38C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F500);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F674);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034720);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00030E7C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031094);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034A68);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034BB8_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000312EC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031740);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031804);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031804(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031828);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031E38);
#endif

#if FW_VERSION < 152
void func_00031E7C(s32 **arg0) {
    *arg0 = &D_00044830;
}
#endif

#if FW_VERSION == 152
void func_00031E7C(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
}
#endif

#if FW_VERSION < 152
void func_00031E8C(s32 **arg0) {
    *arg0 = &D_00044830;
    _ZdlPv();
}
#endif

#if FW_VERSION == 152
void func_00031E8C(M2C_UNK **arg0) {
    *arg0 = &D_00044830;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031EB4);
#endif

#if FW_VERSION < 201
void func_00031EB4(s32 **arg0) {
    *arg0 = &D_00044818;
}
#endif

#if FW_VERSION == 260
void func_00031EB4(M2C_UNK **arg0) {
    *arg0 = &D_00044818;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031EC4);
#endif

#if FW_VERSION < 201
void func_00031EC4(s32 **arg0) {
    *arg0 = &D_00044818;
    _ZdlPv();
}
#endif

#if FW_VERSION == 260
void func_00031EC4(M2C_UNK **arg0) {
    *arg0 = &D_00044818;
    _ZdlPv();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031EEC);
#endif

#if FW_VERSION < 201
void func_00031EEC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044780;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00044830;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F3C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F64);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F64(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F80);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F80(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031F9C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00031F9C(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031FB8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00031FFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003203C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032078);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000320B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000320DC);
#endif

#if FW_VERSION < 201
void func_000320DC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032100);
#endif

#if FW_VERSION < 201
void func_00032100(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032124);
#endif

#if FW_VERSION < 201
void func_00032124(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032148);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003216C);
#endif

#if FW_VERSION < 201
void func_0003216C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032190);
#endif

#if FW_VERSION < 201
void func_00032190(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000321B4);
#endif

#if FW_VERSION < 201
void func_000321B4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000321D8);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000321D8(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000321F4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_000321F4(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032210);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032210(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003222C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_0003222C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032248);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032288);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000322C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032308);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032348);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032348(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032350);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032350(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032358);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032358(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032360);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032360(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032368);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032368(void) {
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032370);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032370(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032378);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032378(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032380);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00032380(void) {
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032388);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00032388(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035B6C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035BD8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035C4C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000446E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000495D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049618);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044780);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044818);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044830);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044838);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044848);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044860);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049774);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004489C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000448B4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000448C4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000448D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000448E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032390);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032710);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032AE0);
#endif

#if FW_VERSION < 201
void func_00032AE0(s32 **arg0) {
    *arg0 = &D_000449D8;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032B30);
#endif

#if FW_VERSION < 201
void func_00032B30(s32 **arg0) {
    *arg0 = &D_000449D8;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032B88);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032BF4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032C24);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032CB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032D44);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032DE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00032EAC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033114);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033178);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003349C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033558);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033764);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033834);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000338EC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000339C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033AA0);
#endif

#if FW_VERSION < 201
void func_00033AA0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4C4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4C8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4D0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4D8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4E0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4EC) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x4F8) = (s32) M2C_FIELD(arg4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x4FC) = (s32) M2C_FIELD(arg4, s32 *, 0xC);
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033B80);
#endif

#if FW_VERSION < 201
void func_00033B80(void *arg0, u32 arg1) {
    if (arg1 >= 3U) {

    } else {
        M2C_FIELD(arg0, u32 *, 0x500) = arg1;
        func_00033DA4((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033BAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x504) = arg1;
    M2C_FIELD(arg0, s32 *, 0x508) = arg2;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x504) = arg1;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION == 260
void func_00033BAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x534) = arg1;
    M2C_FIELD(arg0, s32 *, 0x538) = arg2;
    func_00033DA4((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033BCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x50C) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4B0) == 0);
}
#endif

#if FW_VERSION == 100
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x508) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4B0) == 0);
}
#endif

#if FW_VERSION == 260
void func_00033BCC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x53C) = arg1;
    func_00033C20((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x4D8) == 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033BF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x50D) = arg1;
    func_00033C20((s32) arg0, 2, M2C_FIELD(arg0, s32 *, 0x4B0) == 2);
}
#endif

#if FW_VERSION == 100
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x509) = arg1;
    func_00033C20((s32) arg0, 2, M2C_FIELD(arg0, s32 *, 0x4B0) == 2);
}
#endif

#if FW_VERSION == 260
void func_00033BF4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x53D) = arg1;
    func_00033C20((s32) arg0, 3, M2C_FIELD(arg0, s32 *, 0x4D8) == 3);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033C20);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033DA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033DF8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033EE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033F68);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00033F68(void) {
    func_00033EE0(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000421D0);
#endif

#if FW_VERSION == 260
void func_000421D0(void) {
    func_00033EE0(0, 0xFFFF);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033F88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033FB4);
#endif

#if FW_VERSION < 201
s32 func_00033FB4(void) {
    return D_00045994;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033FC0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00033FFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003406C);
#endif

#if FW_VERSION < 201
s32 func_0003406C(void) {
    return D_00045998;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034078);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00034078(s32 arg0) {
    return arg0 + 0x334;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034080);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034170);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034218);
#endif

#if FW_VERSION == 260
void func_00034218(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044D30, 1, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044D80;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003425C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000449C8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000449D8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044AA8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044B78);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044B88);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044BA4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044BB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044BD0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044BDC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044BFC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C0C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C28);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C38);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C54);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C68);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C8C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044C9C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044CB8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044CC8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044CEC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044CFC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D20);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D3C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D54);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034280);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034424);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000344FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000345A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000345A4(s32 **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000345A4(M2C_UNK **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000345D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000345D0(s32 **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_000345D0(M2C_UNK **arg0) {
    *arg0 = &D_00044D80;
    D_00046370 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034610);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000346C4);
#endif

#if FW_VERSION == 260
void func_000346C4(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044D98, 0, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044DF0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000381FC);
#endif

#if FW_VERSION == 150
void func_000381FC(s32 **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000381FC(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034714);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000347C8);
#endif

#if FW_VERSION == 150
void func_000347C8(s32 **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000347C8(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003487C);
#endif

#if FW_VERSION == 150
void func_0003487C(s32 **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 152
void func_0003487C(M2C_UNK **arg0) {
    *arg0 = &D_00044DF0;
    D_00046374 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D80);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044D98);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034938);
#endif

#if FW_VERSION == 150
void func_00034938(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = _ZN3paf8PhWidget9FindChildEPKci(temp_v0, "video_home_menu_plane", 0);
        M2C_FIELD(arg0, void **, 0x20) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x1FF) = 0;
            _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0_2);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_00034938(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = _ZN3paf8PhWidget9FindChildEPKci(temp_v0, "video_home_menu_plane", 0);
        M2C_FIELD(arg0, void **, 0x24) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 0x1FF) = 0;
            _ZN3paf8PhWidget13UpdateCamerasEv(temp_v0_2);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034998);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00034998(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000349A0);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION == 260
s32 func_000349A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 1;
}
#endif

#if FW_VERSION == 100
s32 func_000349A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000349AC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034B74);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034BB8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034C5C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044420);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034C9C);
#endif

#if FW_VERSION < 201
void func_00034C9C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(temp_v0, 0x10001, &func_00034D24, (s32) arg0);
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034CE0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034D24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034D2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00034D2C(s32 **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00034D2C(M2C_UNK **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034D58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00034D58(s32 **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_00034D58(M2C_UNK **arg0) {
    *arg0 = &D_00044E20;
    D_00046378 = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000444B8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044DF0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00054070);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0005408C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000540A8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000540C4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000540E4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00054108);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0005412C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00054148);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004458C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000447AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00011BDC);

s32 func_0004480C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044814);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044888);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034D98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034E4C);
#endif

#if FW_VERSION < 201
void func_00034E4C(s32 arg0, s32 arg1) {
    func_00016DBC(arg0, arg1, (s32) &D_00044E38, 1, 3);
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00044E58;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034E9C);
#endif

#if FW_VERSION < 201
void func_00034E9C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterE6Locale(-1));
    func_00001A30(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_00001A30(&sp0);
}
#endif

#if FW_VERSION == 260
void func_00034E9C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_00001A30(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_00001A30(&sp0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034EE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00034F20);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000350A0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000350D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035114);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_00035114(void) {
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003513C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0003513C(s32 **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0003513C(M2C_UNK **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035168);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00035168(s32 **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_00035168(M2C_UNK **arg0) {
    *arg0 = &D_00044E58;
    D_0004637C = 0;
    func_00016F3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000443AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044530);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043388);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043520);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000436B8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036E1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036EB8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000351A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000352C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000353E8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000354A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035568);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00039014(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x20);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039034);
#endif

#if FW_VERSION == 100
void func_0003563C(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035644);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035860);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035888);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039364);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039450);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035950);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000359B4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000359F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035A34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00035A70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00035A70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00035A7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00035A7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0002B9C0((s32) (arg0 + 0x38), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035AA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00035DB4(s32 arg0) {
    func_000354A8(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00035DB4(s32 arg0) {
    func_000354A8(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00035DD0(s32 arg0) {
    func_00035568(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00035DD0(s32 arg0) {
    func_00035568(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00035DEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00035860(arg0 - 0x3C, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
void func_00035DEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00035860(arg0 - 0x38, arg1, arg2, arg3);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035E08);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035EE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039AC8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039B64);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039C00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00035FB8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036040);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000360C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036158);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
void func_00036158(s32 arg0) {
    D_00046384 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004393C);
#endif

#if FW_VERSION == 260
void func_0004393C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ABA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000371C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043BCC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043C98);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043D34);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043F10);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043FF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00039CB0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x84);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x24);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
void func_00036164(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044DF0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E08);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E20);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E38);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E58);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E70);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E80);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044E90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049D98);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044EA0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044EB8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044EF0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044F00);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044F10);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044F20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003616C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000362FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036328);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036384);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000363C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036410);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036454);

s32 func_000365B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000365C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000365E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A244);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A2E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003664C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000366B8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000366F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036758);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036790);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003696C);

void func_00036994(s32 arg0) {
    func_000369B0(arg0);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000369B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036A38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00036AAC(s32 arg0) {
    func_00039B64(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00036AAC(s32 arg0) {
    func_00036040(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00036AC8(s32 arg0) {
    func_00039C00(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00036AC8(s32 arg0) {
    func_000360C8(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00036AE4(s32 arg0, s32 arg1, s32 arg2) {
    func_000362FC(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00036AE4(s32 arg0, s32 arg1, s32 arg2) {
    func_000362FC(arg0 - 0x38, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036B00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036C40);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036D80);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036E1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036EB8);

void func_00036F5C(s32 arg0) {
    D_0004638C = arg0;
}

void func_00036F68(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ABA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00036F70);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000371C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037238);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000372F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037388);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037468);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037524);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B2AC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B3C4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B4D0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B5E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000375EC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037684);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003772C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000377DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0xA4);
}
#endif

#if FW_VERSION == 100
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x94);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x98);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xA8);
}
#endif

#if FW_VERSION == 100
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003790C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003797C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00037A34(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xEC);
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00037A34(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037A4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00037A98);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038384);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000383E0);
#endif

#if FW_VERSION == 100
s32 func_0003840C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038418);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038444);
#endif

#if FW_VERSION < 201
s32 func_00038470(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C4C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C4F4);
#endif

#if FW_VERSION < 201
s32 func_0003847C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0003C52C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038488);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C70C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C864);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003CB18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003CC60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003865C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003878C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003893C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038A9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038BE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038CFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00038E2C(s32 arg0) {
    func_00036E1C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00038E2C(s32 arg0) {
    func_00036E1C(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00038E48(s32 arg0) {
    func_00036EB8(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 100
void func_00038E48(s32 arg0) {
    func_00036EB8(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00038E64(s32 arg0, s32 arg1, s32 arg2) {
    func_000371C8(arg0 - 0x3C, arg1, arg2);
}
#endif

#if FW_VERSION == 100
void func_00038E64(s32 arg0, s32 arg1, s32 arg2) {
    func_000371C8(arg0 - 0x38, arg1, arg2);
}
#endif

#if FW_VERSION < 201
s32 func_00038E80(void) {
    return D_000463B8;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038E8C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003936C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039AE4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00039D7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E594);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E798);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E83C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E9DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EBEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EC68);

s32 func_0003ED94(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x114) = 0;
        break;
    default:
        var_v1 = 1;
        break;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x108) = 0;
        break;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EDBC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EE28);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EEA8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EFA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F088);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F11C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F2B4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F360);

s32 func_0003F3EC(void) {
    return 0;
}

s32 func_0003F3F4(void) {
    return 0;
}

s32 func_0003F3FC(void) {
    return 0;
}

s32 func_0003F404(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC8) = arg1;
    return 0;
}

s32 func_0003F410(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xCC) = arg1;
    return 0;
}

s32 func_0003F41C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD0) = arg1;
    return 0;
}

s32 func_0003F428(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x778) = arg1;
    func_0002E758(arg0 + 0xB8, 0x10000U);
    return 0;
}

s32 func_0003F450(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x77C) = arg1;
    func_0002E758(arg0 + 0xB8, 0x20000U);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F478);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F59C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F6C0);

s32 func_0003F7D4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    return 0;
}

s32 func_0003F7E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB88) = arg1;
    return 0;
}

s32 func_0003F7EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F7F8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FA7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FB18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FBD0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FD80);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FDF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FE60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FEE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003FF4C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000403A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000408B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00040D30);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00040E34);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00041288);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00041668);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00041A4C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00041E64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A028);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044F58);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044F70);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044FA0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044FB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044FC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049ED4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049EE4);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049EEC);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049EF4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044FCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050E84);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050E8C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050E98);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050EA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045030);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000440B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000441D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044330);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000453E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044454);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000378D4);
#endif

#if FW_VERSION == 260
s32 func_000378D4(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0xAC);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000378F0);
#endif

#if FW_VERSION == 260
s32 func_000378F0(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xB0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003790C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003797C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044804);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B950);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038384);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044EE4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F10);
#endif

#if FW_VERSION == 260
s32 func_00044F10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F74);
#endif

#if FW_VERSION == 260
s32 func_00044F74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F80);
#endif

#if FW_VERSION == 260
s32 func_00044F80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00044F8C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045150);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004521C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045298);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000452D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004553C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046848);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045790);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000459FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045BD0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046E10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00045D04);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000461DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004636C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004651C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047818);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047A30);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047A7C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046630);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038E2C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038E48);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00038E64);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046870);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046930);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000469F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046A6C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046AE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046B6C);
#endif

#if FW_VERSION == 260
void func_00046B6C(s32 arg0) {
    D_0007C7FC = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046B78);
#endif

#if FW_VERSION == 260
void func_00046B78(void *arg0) {
    void *var_a0;
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x38);
        } while (var_v0 != NULL);
    }
    var_a0 = M2C_FIELD(arg0, void **, 0x70);
    if (var_a0 != NULL) {
        do {
            var_a0 = M2C_FIELD(var_a0, void **, 0x24);
        } while (var_a0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046BB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046DA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046E14);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046EA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046FB4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00046FFC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047040);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047090);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047324);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000473A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047408);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047498);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047518);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047540);
#endif

#if FW_VERSION == 260
void func_00047540(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_0002B9C0((s32) temp_s0, arg1 + 0xD8, 2);
    func_0002B9C0((s32) temp_s0, arg1 + 0xEC, 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047598);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000475B4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000475D0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000475EC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000476F4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000477FC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047898);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047934);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000479D8);
#endif

#if FW_VERSION == 260
void func_000479D8(s32 arg0) {
    D_0007C800 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000479E4);
#endif

#if FW_VERSION == 260
void func_000479E4(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x30);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047A04);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047D58);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047D84);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047E54);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00047F10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049500);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004808C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004809C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000480B4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048120);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004819C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048240);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048250);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048288);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000482F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048328);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048444);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048490);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000484DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048528);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004858C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004862C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048648);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048664);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048680);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000487C8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048910);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004899C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048A28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048ABC);
#endif

#if FW_VERSION == 260
void func_00048ABC(s32 arg0) {
    D_0007C804 = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048AC8);
#endif

#if FW_VERSION == 260
void func_00048AC8(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x114);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x40);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048AE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048F7C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048FA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00048FE8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049100);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049144);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000491D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049214);
#endif

#if FW_VERSION == 260
s32 func_00049214(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049240);
#endif

#if FW_VERSION == 260
s32 func_00049240(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049248);
#endif

#if FW_VERSION == 260
s32 func_00049248(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049250);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049260);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AB00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049474);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049490);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000494AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000494C8);
#endif

#if FW_VERSION == 260
s32 func_000494C8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00044FE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050F90);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050FA0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050FB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050FC0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050FD0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00050FE8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00051018);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00051028);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00051038);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00045018);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00045024);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00045030);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00051068);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004503C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00045048);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049F70);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049F7C);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049F88);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00045054);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_0004505C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049FA8);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049FB0);

INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_00049FB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/video_plugin_000214F0", D_000510F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000494D0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000497F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000498E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_000499D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049AE0);
#endif

#if FW_VERSION == 260
void func_00049AE0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x6C);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x20);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049B00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049D00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049D60);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049E28);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049EEC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049F30);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00049FB4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A02C);
#endif

#if FW_VERSION == 260
s32 func_0004A02C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x178) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A110);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A400);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A518);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A6B4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A8C4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003A8F8);

s32 func_0003AA24(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s8 *, 0x120) = 0;
        break;
    default:
        var_v1 = 1;
        break;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x114) = 0;
        break;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AA4C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AA88);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AB08);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ABF0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AC80);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AE08);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AEB0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AF34);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AF70);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003AFAC);

s32 func_0003AFE8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD4) = arg1;
    return 0;
}

s32 func_0003AFF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD8) = arg1;
    return 0;
}

s32 func_0003B000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B00C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B044);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B07C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B17C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B27C);

s32 func_0003B37C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
    return 0;
}

s32 func_0003B388(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B394);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B624);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B878);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003B8B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003BCA4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C270);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C674);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003C73C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003CB64);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003CF20);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D0D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D2A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D364);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D714);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D8E0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003D9A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00042970);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00042DAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003DB84);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003DF10);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E018);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043184);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E2BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0003E414(s32 arg0) {
    func_00039AE4(arg0 - 0x68);
}
#endif

#if FW_VERSION == 100
void func_0003E414(s32 arg0) {
    func_00039AE4(arg0 - 0x8C);
}
#endif

#if FW_VERSION < 201
void func_0003E430(s32 arg0) {
    func_00039AE4(arg0 - 0x54);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0003E44C(s32 arg0) {
    func_00039D7C(arg0 - 0x68);
}
#endif

#if FW_VERSION == 100
void func_0003E44C(s32 arg0) {
    func_00039D7C(arg0 - 0x8C);
}
#endif

#if FW_VERSION < 201
void func_0003E468(s32 arg0) {
    func_00039D7C(arg0 - 0x54);
}

void func_0003E484(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0003A110(arg0 - 0x54, arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E4A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0003E4A0(void *arg0, s32 arg1) {
    return func_0003E798((s32) (arg0 - 0x68));
}
#endif

#if FW_VERSION == 100
s32 func_0003E4A0(void *arg0, s32 arg1) {
    return func_0003A400((s32) (arg0 - 0x8C));
}
#endif

#if FW_VERSION == 260
s32 func_0003E4A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0002B9C0((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E4BC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E568);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0004350C(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E61C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E61C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E624);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E624(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E62C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E62C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A07C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A0A8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A15C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A178);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A194);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A1B0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A2F0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A430);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A4E4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A598);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A654);
#endif

#if FW_VERSION == 260
void func_0004A654(s32 arg0) {
    D_0007C81C = arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A660);
#endif

#if FW_VERSION == 260
void func_0004A660(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x60);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x18);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A680);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A888);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A8D4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A91C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004A9D8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AA1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AAA0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AADC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AB6C);
#endif

#if FW_VERSION == 260
s32 func_0004AB6C(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_0002B9C0((s32) temp_s0, arg1 + 0x40, 0);
    func_0002B9C0((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E634);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003E634(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_0003E63C(void) {
    return 0;
}

s32 func_0003E644(void) {
    return 0;
}

s32 func_0003E64C(void) {
    return 0;
}

s32 func_0003E654(void) {
    return 0;
}

s32 func_0003E65C(void) {
    return 0;
}

s32 func_0003E664(void) {
    return 0;
}

s32 func_0003E66C(void) {
    return 0;
}

s32 func_0003E674(void) {
    return 0;
}

s32 func_0003E67C(void) {
    return 0;
}

s32 func_0003E684(void) {
    return 0;
}

s32 func_0003E68C(void) {
    return 0;
}

s32 func_0003E694(void) {
    return 0;
}

s32 func_0003E69C(void) {
    return 0;
}

s32 func_0003E6A4(void) {
    return 0;
}

s32 func_0003E6AC(void) {
    return 0;
}

s32 func_0003E6B4(void) {
    return 0;
}

s32 func_0003E6BC(void) {
    return 0;
}

s32 func_0003E6C4(void) {
    return 0;
}

s32 func_0003E6CC(void) {
    return 0;
}

s32 func_0003E6D4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000435D4(void) {
    return 0;
}

s32 func_000435DC(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E6DC);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E79C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004375C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E85C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E8F4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003E98C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000439F8(void) {

}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043A00);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043BBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EA38);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EC28);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ECCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043C8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043D50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00043D50(s32 arg0) {
    func_0002E758(arg0 + 0x28, 2U);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003ED1C);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EDB8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EE18);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003EED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043E88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0004AC08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00043EC4);
#endif

#if FW_VERSION == 100
void func_0003EF44(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003EF84(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C948(arg0 + 4);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003EFC4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003F004(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C998(arg0 + 4, arg1);
    func_0002CA10(M2C_FIELD(arg0, s32 *, 4), 0U);
}

void func_0003F044(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}

void func_0003F06C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
}

void func_0003F094(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00045238;
    func_0002C9E4(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F0D0);

s32 func_0003F110(void *arg0, u32 arg1) {
    return func_0002CA10(M2C_FIELD(arg0, s32 *, 4), arg1) == 0;
}

s32 func_0003F130(void *arg0, s32 arg1) {
    return func_0002CA3C(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F154);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F178);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F1E0);
#endif

#if FW_VERSION < 201 || FW_VERSION == 260
s32 func_0003F1E0(s32 arg0, s32 *arg1) {
    func_00004FD4(arg0 + 0x84, *arg1);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F204);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F2A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0003F344);
#endif

#if FW_VERSION < 201
void func_0003F344(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00001DE4);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00001EC0);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_00001FF8);

INCLUDE_ASM("nonmatchings/video_plugin_000214F0", func_0000204C);
#endif
