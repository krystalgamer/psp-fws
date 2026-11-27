/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041D54);
#endif

#if FW_VERSION == 100
void func_00041D54(void *arg0) {
    func_00041C04(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041D70);
#endif

#if FW_VERSION == 100
void func_00041D70(void *arg0) {
    func_00041C18(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041D8C);
#endif

#if FW_VERSION == 100
void func_00041D8C(void *arg0) {
    func_00041C2C(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041DA8);
#endif

#if FW_VERSION == 100
void func_00041DA8(s32 arg0) {
    func_00041C40(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041DC4);
#endif

#if FW_VERSION == 100
void func_00041DC4(s32 arg0) {
    func_00041C5C(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041DE0);
#endif

#if FW_VERSION == 100
void func_00041DE0(s32 arg0) {
    func_00041C78(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041DFC);
#endif

#if FW_VERSION == 100
void func_00041DFC(s32 arg0) {
    func_00041C94(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041E18);
#endif

#if FW_VERSION == 100
void func_00041E18(s32 arg0) {
    func_00041CB0(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041E34);
#endif

#if FW_VERSION == 100
void func_00041E34(s32 arg0) {
    func_00041CCC(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041E50);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041F0C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00041FC8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042084);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042140);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042204);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042288);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000422C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00052D2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000423C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042470);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000424F4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042528);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042594);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042600);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004266C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000426D8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042758);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000464EC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045F64);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000585A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0005336C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00053558);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0005369C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042858);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000429A8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042B60);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042C88);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042D34);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042E88);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004669C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000466B4);
#endif

#if FW_VERSION == 152
s32 func_000466B4(void) {
    return (D_000630D0 != 0) ? 0 : 0x961D;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042F80);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042F9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042FC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E6EC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F8E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F928);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F930);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F970);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F978);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F9B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F9C0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F9DC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F9F4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FA18);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FA38);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00042FD0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043084);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00043084(void) {
    func_00042FD0(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000430A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000430A4(void) {
    func_00042FD0(0, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000430C4);
#endif

#if FW_VERSION == 100
void func_000430C4(s32 **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 152
void func_000430C4(M2C_UNK **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000430D4);
#endif

#if FW_VERSION == 100
void func_000430D4(s32 **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 152
void func_000430D4(M2C_UNK **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000430E4);
#endif

#if FW_VERSION == 100
void func_000430E4(s32 **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 152
void func_000430E4(M2C_UNK **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000430F4);
#endif

#if FW_VERSION == 100
void func_000430F4(s32 **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION == 152
void func_000430F4(M2C_UNK **arg0) {
    *arg0 = &D_0005FAC0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043104);
#endif

#if FW_VERSION == 100
void func_00043104(s32 **arg0) {
    *arg0 = &D_0005FAC0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004312C);
#endif

#if FW_VERSION == 100
s32 *func_0004312C(void) {
    return &D_000630FC;
}
#endif

#if FW_VERSION == 152
M2C_UNK *func_0004312C(void) {
    return &D_000630FC;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043138);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043470);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004352C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000435A8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000435A8(void) {
    func_0004352C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000435C8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000435C8(void) {
    func_0004352C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FA90);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FAC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000435E8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043654);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000436C0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004372C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043798);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004381C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000438A0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004392C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043B24);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043CB0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043CBC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00043CBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043CC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00043CC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043CCC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043D48);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043DC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00043DC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043DCC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00043DCC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043DD4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043E88);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043EF4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043F38);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00043F38(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 4;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_v0 != 0) {
        func_0004DA78(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00043F6C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000447F8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000447F8(s32 arg0) {
    func_0004381C(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044814);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00044814(s32 arg0) {
    func_000438A0(arg0 - 4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044830);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000448EC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000449A8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044A64);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044B20);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044BE4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044C68);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044CA8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044DA8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044E60);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044EE4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044F18);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044F84);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00044FF0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004505C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000450C8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045148);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045250);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000453A0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045574);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000456A8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004576C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000458DC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049240);

s32 func_00049258(void) {
    return (D_00063100 != 0) ? 0 : 0x961D;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000459E8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045A04);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045A2C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FB00);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FB70);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FB8C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FBA8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FBCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E708);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E718);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E738);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E768);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E798);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E7C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005E7F8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FBF0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045AD0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045B84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00045B84(void) {
    func_00045AD0(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045BA4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00045BA4(void) {
    func_00045AD0(0, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045BC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00045BC4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005FC88;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045BD8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00045BD8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005FC88;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045BEC);
#endif

#if FW_VERSION == 100
void func_00045BEC(s32 **arg0) {
    *arg0 = &D_0005FC88;
}
#endif

#if FW_VERSION == 152
void func_00045BEC(M2C_UNK **arg0) {
    *arg0 = &D_0005FC88;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045BFC);
#endif

#if FW_VERSION == 100
void func_00045BFC(s32 **arg0) {
    *arg0 = &D_0005FC88;
}
#endif

#if FW_VERSION == 152
void func_00045BFC(M2C_UNK **arg0) {
    *arg0 = &D_0005FC88;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045C0C);
#endif

#if FW_VERSION == 100
void func_00045C0C(s32 **arg0) {
    *arg0 = &D_0005FC88;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045C34);
#endif

#if FW_VERSION == 100
s32 *func_00045C34(void) {
    return &D_0006312C;
}
#endif

#if FW_VERSION == 152
M2C_UNK *func_00045C34(void) {
    return &D_0006312C;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00045C40);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000460E0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000461E0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004625C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004625C(void) {
    func_000461E0(1, 0xFFFF);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004627C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004627C(void) {
    func_000461E0(0, 0xFFFF);
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FC48);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FC88);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004629C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046310);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046384);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000463F8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004646C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000464F8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046584);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046618);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004681C);
#endif

#if FW_VERSION == 152
s32 func_0004681C(void) {
    return 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004699C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004699C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000469A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000469A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000469AC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046A28);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046AA4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00046AA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046AAC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00046AAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046AB4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046B68);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046BD4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046C20);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00046C64);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000472B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000472B4(void *arg0, s32 arg1) {
    s32 temp_s1;

    func_000475A0(M2C_FIELD(arg0, s32 *, 0x68));
    temp_s1 = func_00047B98(M2C_FIELD(arg0, s32 *, 0x68), arg1);
    func_000475BC(M2C_FIELD(arg0, s32 *, 0x68));
    return temp_s1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047304);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00047304(s32 arg0) {
    func_000464F8(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047320);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00047320(s32 arg0) {
    func_00046584(arg0 - 4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004733C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000473C0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047444);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000474AC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047514);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004753C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047564);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000475A0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000475A0(s32 arg0) {
    func_0005620C(arg0 + 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000475BC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000475BC(s32 arg0) {
    func_0005629C(arg0 + 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000475D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000475D8(s32 arg0) {
    func_00056308(arg0 + 4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000475F4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000476D8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004771C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047784);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000477E0);
#endif

#if FW_VERSION == 100
s32 func_000477E0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00047C28(arg0);
    *arg2 = func_000476D8(arg0, temp_v0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        var_v1 = 1;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x804C);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047858);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000478CC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000478CC(s32 arg0, s32 arg1, s32 arg2) {
    func_00047A00(arg0, 0, arg1, arg2);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000478F0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047928);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047960);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047A00);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047B98);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FCC0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00047C28);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048124);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004BB1C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004839C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048568);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004870C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000487A8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004882C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048890);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000488D4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048918);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00048918(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048920);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004895C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048998);
#endif

#if FW_VERSION == 100
void func_00048998(s32 **arg0) {
    *arg0 = &D_0005FD70;
    func_0001A2EC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00048998(M2C_UNK **arg0) {
    *arg0 = &D_0005FD70;
    func_0001A2EC((s32) arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000489C0);
#endif

#if FW_VERSION == 100
void func_000489C0(s32 **arg0) {
    *arg0 = &D_0005FD70;
    func_0001A2EC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000489C0(M2C_UNK **arg0) {
    *arg0 = &D_0005FD70;
    func_0001A2EC((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000489E8);
#endif

#if FW_VERSION == 100
void func_000489E8(s32 **arg0) {
    *arg0 = &D_0005FD70;
    func_0001A2EC((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004C7B4_v150);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004C820);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004C150);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004C1BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048A20);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048A6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048B1C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004CA40);
#endif

#if FW_VERSION == 152
s32 func_0004C3D4(void) {
    return 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048C38);
#endif

#if FW_VERSION == 100
void func_00048C38(s32 **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 152
void func_00048C38(M2C_UNK **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048C48);
#endif

#if FW_VERSION == 100
void func_00048C48(s32 **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 152
void func_00048C48(M2C_UNK **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048C58);
#endif

#if FW_VERSION == 100
void func_00048C58(s32 **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 152
void func_00048C58(M2C_UNK **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048C68);
#endif

#if FW_VERSION == 100
void func_00048C68(s32 **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION == 152
void func_00048C68(M2C_UNK **arg0) {
    *arg0 = &D_0005FDD0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048C78);
#endif

#if FW_VERSION == 100
void func_00048C78(s32 **arg0) {
    *arg0 = &D_0005FDD0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048CA0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048CBC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048CD8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048CF4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048D10);
#endif

#if FW_VERSION == 100
void func_00048D10(s32 **arg0) {
    *arg0 = &D_0005FDF0;
}
#endif

#if FW_VERSION == 152
void func_00048D10(M2C_UNK **arg0) {
    *arg0 = &D_0005FDF0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048D20);
#endif

#if FW_VERSION == 100
void func_00048D20(s32 **arg0) {
    *arg0 = &D_0005FDF0;
}
#endif

#if FW_VERSION == 152
void func_00048D20(M2C_UNK **arg0) {
    *arg0 = &D_0005FDF0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048D30);
#endif

#if FW_VERSION == 100
void func_00048D30(s32 **arg0) {
    *arg0 = &D_0005FDF0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048D58);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00048D58(s32 arg0) {
    return arg0 + 8;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048D60);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048E5C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048F70);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00048F70(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005FE00;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048F88);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00048F88(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005FE00;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048FA0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00048FA0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005FE00;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048FB8);
#endif

#if FW_VERSION == 100
void func_00048FB8(s32 **arg0) {
    *arg0 = &D_0005FE00;
}
#endif

#if FW_VERSION == 152
void func_00048FB8(M2C_UNK **arg0) {
    *arg0 = &D_0005FE00;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048FC8);
#endif

#if FW_VERSION == 100
void func_00048FC8(s32 **arg0) {
    *arg0 = &D_0005FE00;
}
#endif

#if FW_VERSION == 152
void func_00048FC8(M2C_UNK **arg0) {
    *arg0 = &D_0005FE00;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00048FD8);
#endif

#if FW_VERSION == 100
void func_00048FD8(s32 **arg0) {
    *arg0 = &D_0005FE00;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049000);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000491E8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000492F0);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049320);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049340);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049360);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049380);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493A0);
#endif

#if FW_VERSION == 100
void func_000493A0(s32 **arg0) {
    *arg0 = &D_00060530;
}
#endif

#if FW_VERSION == 152
void func_000493A0(M2C_UNK **arg0) {
    *arg0 = &D_00060530;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493B0);
#endif

#if FW_VERSION == 100
void func_000493B0(s32 **arg0) {
    *arg0 = &D_00060530;
}
#endif

#if FW_VERSION == 152
void func_000493B0(M2C_UNK **arg0) {
    *arg0 = &D_00060530;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493C0);
#endif

#if FW_VERSION == 100
void func_000493C0(s32 **arg0) {
    *arg0 = &D_00060530;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493E8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000493E8(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493F0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000493F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000493F8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049504);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004CCA4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000495C4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049808);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049860);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000498C4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049928);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049950);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049978);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499B4(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x10) - 1) < 2U;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499C4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499C4(s32 arg0) {
    return arg0 + 0x20;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499CC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499CC(s32 arg0) {
    return arg0 + 0x24;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499D4(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499DC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499DC(s32 arg0) {
    return arg0 + 0x14;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499E4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499E4(s32 arg0) {
    return arg0 + 0x1C;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499EC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000499EC(s32 arg0) {
    return arg0 + 0x10;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_000499F4);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049B30);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049C90);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049DFC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00049DFC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060578;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E18);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00049E18(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060578;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E34);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00049E34(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060578;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E50);
#endif

#if FW_VERSION == 100
void func_00049E50(s32 **arg0) {
    *arg0 = &D_00060578;
}
#endif

#if FW_VERSION == 152
void func_00049E50(M2C_UNK **arg0) {
    *arg0 = &D_00060578;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E60);
#endif

#if FW_VERSION == 100
void func_00049E60(s32 **arg0) {
    *arg0 = &D_00060578;
}
#endif

#if FW_VERSION == 152
void func_00049E60(M2C_UNK **arg0) {
    *arg0 = &D_00060578;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E70);
#endif

#if FW_VERSION == 100
void func_00049E70(s32 **arg0) {
    *arg0 = &D_00060578;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00049E98);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A3A8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A868);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A928);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004A928(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060588;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A944);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004A944(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060588;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A960);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004A960(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060588;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A97C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004A97C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00060588;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A998);
#endif

#if FW_VERSION == 100
void func_0004A998(s32 **arg0) {
    *arg0 = &D_00060588;
}
#endif

#if FW_VERSION == 152
void func_0004A998(M2C_UNK **arg0) {
    *arg0 = &D_00060588;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A9A8);
#endif

#if FW_VERSION == 100
void func_0004A9A8(s32 **arg0) {
    *arg0 = &D_00060588;
}
#endif

#if FW_VERSION == 152
void func_0004A9A8(M2C_UNK **arg0) {
    *arg0 = &D_00060588;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A9B8);
#endif

#if FW_VERSION == 100
void func_0004A9B8(s32 **arg0) {
    *arg0 = &D_00060588;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004A9E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FD60);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FD70);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FDD0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FDE0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FDF0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE00);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE08);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE10);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE18);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE28);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE30);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE38);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE40);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE48);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE50);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE58);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE60);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE68);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE70);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE78);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE80);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE84);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE88);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE8C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE94);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FE9C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEA4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEB0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEBC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEC0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FECC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FED4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEE0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEEC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FEF4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF00);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF08);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF14);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF1C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF24);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF30);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF40);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF48);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF50);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF58);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF64);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF6C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF74);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF80);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF88);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF90);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FF98);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFA0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFAC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFC0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFD4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFDC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFE4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005FFF0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060004);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060010);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006001C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060028);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060030);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060040);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060048);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060050);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060058);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060060);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060070);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006007C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060084);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060094);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006009C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600A8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600B4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600BC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600D8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000600F8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060100);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060108);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060110);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006011C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060128);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060130);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006013C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006014C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060154);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060160);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060168);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060170);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060178);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060180);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006018C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060198);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601A4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601CC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601DC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601F4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000601FC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006020C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060218);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060220);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060228);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060230);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060238);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060248);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060250);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006025C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060268);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060270);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006027C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060284);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060290);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060298);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602A8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602B4);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602BC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602CC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602DC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602F0);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000602FC);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060308);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060314);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060320);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006032C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_000899E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0005F848);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060530);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060540);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060548);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006054C);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060558);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_0006055C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060568);

INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060578);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00041D54", D_00060588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_00053A38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AD0C);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AD44);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AD6C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004AD6C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 4) + (M2C_FIELD(arg0, u8 *, 3) << 8)) & 0xFFFF;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AD84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
u8 func_0004AD84(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 5);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AD8C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004AD8C(s32 arg0) {
    func_0004AFCC(arg0 + 6);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004ADA8);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AF78);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004AFCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B03C);
#endif

#if FW_VERSION == 100
void func_0004B03C(s32 arg0) {
    func_0001E000(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B058);
#endif

#if FW_VERSION == 100
void func_0004B058(s32 arg0) {
    func_0001E064(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B074);
#endif

#if FW_VERSION == 100
s32 func_0004B074(u32 arg0) {
    return (arg0 >> 6) & 1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B080);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
u32 func_0004B080(s8 arg0) {
    return (u32) arg0 >> 0x1F;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B08C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004B08C(u32 arg0) {
    return (arg0 >> 5) & 1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B098);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
u32 func_0004B098(s32 arg0) {
    return (u32) (arg0 & 0xFF00) >> 8;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B0A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004B0A4(s32 arg0) {
    return arg0 & 0xFF;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B0AC);

INCLUDE_ASM("nonmatchings/music_plugin_00041D54", func_0004B18C);
#endif
