#include "common.h"
#include "savedata_auto_dialog_decls.h"

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000000AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", module_start);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", module_stop);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002B4);
#endif

#if FW_VERSION == 100
void func_00000340(void) {
    D_00020A00 = 0;
}
#endif

#if FW_VERSION == 100
u8 func_0000034C(void) {
    return (u8) D_00020A00;
}
#endif

#if FW_VERSION != 100
void func_0000010C(void) {
    func_00017684();
}
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    func_00014270();
    func_00000000();
    func_000004D8(0, 0);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_0001A5C8();
    func_000142AC();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_reboot_before(void) {
    func_00014418();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000001A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000238);
#endif

#if FW_VERSION != 100
s32 func_000002B4(s32 arg0) {
    func_00000944(arg0);
    D_0001C204 = 1;
    return 0;
}
#endif

#if FW_VERSION != 100
void func_000002E0(void) {
    func_00000A5C();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000037C);
#endif

#if FW_VERSION == 100
void func_000004DC(void) {
    if (D_00020A01 == 0) {
        D_00020A00 = 1;
    }
}
#endif

#if FW_VERSION == 100
void func_000004FC(void) {
    func_00011710();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000518);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000053C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000056C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000059C);
#endif

#if FW_VERSION == 100
void func_000005CC(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000005F4(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0000061C(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000654);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000006BC);
#endif

#if FW_VERSION == 100
void func_00000784(void *arg0, s32 arg1) {
    func_000006BC(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000007A0);
#endif

#if FW_VERSION == 100
void func_00000974(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 *, 0xA30) = (u8) M2C_FIELD(arg1, u8 *, 0x500);
    }
    func_0000EA3C((s32) arg0, (s32) arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000099C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000BC0);
#endif

#if FW_VERSION == 100
u32 func_00000CE4(s32 arg0, void *arg1, u32 arg2) {
    s32 temp_v1;
    u32 var_a3;

    var_a3 = 0;
    if ((((arg0 == 0) | (arg1 == NULL)) == 0) && (M2C_FIELD(arg1, s32 *, 0) != 0)) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 4);
        if (temp_v1 != 0) {
            var_a3 = (u32) ((temp_v1 + arg2) - 1) / arg2;
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000D2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000F60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000013A8);
#endif

#if FW_VERSION == 100
s32 func_00001414(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000141C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000143C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001470);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F5F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000014A4);
#endif

#if FW_VERSION == 100
s32 func_00001870(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0x30);
}
#endif

#if FW_VERSION == 100
void func_0000187C(s32 arg0) {
    func_00001EC8(arg0, 0x8010300B);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000189C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001AA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001AF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F618);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001B9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001EA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001EC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001F34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002140);
#endif

#if FW_VERSION == 100
void func_000024C4(void) {
    func_0000187C(D_00020A20);
}
#endif

#if FW_VERSION == 100
u8 func_000024E8(void) {
    return D_00020A24;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024F4);
#endif

#if FW_VERSION != 100
void func_00000338(void) {
}
#endif

#if FW_VERSION != 100
void func_00000340(void) {
    func_000001A4();
    func_000002FC();
}
#endif

#if FW_VERSION != 100
void func_00000364(void) {
    func_00015304();
    func_00015698();
    func_000149A0();
    sceKernelCheckCallback();
}
#endif

#if FW_VERSION != 100
void func_00000398(void) {
    func_00000338();
    func_00000238();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000003BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000004D8);
#endif

#if FW_VERSION != 100
void func_0000057C(void) {
    func_00015094();
}
#endif

#if FW_VERSION != 100
void func_00000598(void) {
    func_00015118();
}
#endif

#if FW_VERSION != 100
void func_000005B4(void) {
    func_000152DC();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000005D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000007FC);
#endif

#if FW_VERSION != 100
void func_000008D8(void) {
    if (D_0001C208 == 0) {

    } else {
        func_00014AA4(0, (s32) &func_000005D0, D_0001C208, -1, -1, (s32) &func_000007FC);
    }
}
#endif

#if FW_VERSION != 100
void func_00000928(void) {
    D_0001C21D = 1;
}
#endif

#if FW_VERSION != 100
u8 func_00000938(void) {
    return D_0001B5F8;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000944);
#endif

#if FW_VERSION != 100
void func_00000A5C(void) {
}
#endif

#if FW_VERSION != 100
void func_00000A64(void) {
    func_000080B4();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000B38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000EDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000FA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001068);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000110C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000011F4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABBC);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001358);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000016E4);
#endif

#if FW_VERSION != 100
s32 func_000017C8(void) {
    return 0x200000;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000017D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001910);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001A8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001C3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001D30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001F94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002060);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000213C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002304);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002414);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002658);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000272C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABD0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABE8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABF0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002788);
#endif

#if FW_VERSION != 100
s32 func_000027E8(void) {
    return D_0001C220 * D_0001C22C;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002804);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000287C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002AC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002B90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002C44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002CAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002D38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002DE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002E58);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AC00);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F6D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F6EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002540);
#endif

#if FW_VERSION == 100
void func_000026EC(void) {
    if ((D_00020A25 == 0) && (D_00020A20 != 0)) {
        D_00020A24 = 1;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002718);
#endif

#if FW_VERSION == 100
void func_00002790(s32 arg0, s32 arg1) {
    func_0000C60C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F790;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#endif

#if FW_VERSION == 100
void func_000027C8(s32 arg0, s32 arg1) {
    func_0000C60C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F790;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#endif

#if FW_VERSION == 100
void func_00002800(M2C_UNK **arg0) {
    *arg0 = &D_0001F790;
    func_0000C664();
}
#endif

#if FW_VERSION == 100
void func_00002828(M2C_UNK **arg0) {
    *arg0 = &D_0001F790;
    func_0000C664();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002850);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002888);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F71C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002E08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F73C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F744);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F758);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002EE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003328);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000335C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003390);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000372C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003820);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003AAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003ADC);
#endif

#if FW_VERSION == 100
void func_00003B2C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003B4C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003C50);
#endif

#if FW_VERSION == 100
void func_00003C80(M2C_UNK **arg0) {
    *arg0 = &D_0001F988;
    func_0000A1DC((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00003CA8(M2C_UNK **arg0) {
    *arg0 = &D_0001F988;
    func_0000A1DC((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003D08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F790);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004210);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004330);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000043B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004470);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004518);
#endif

#if FW_VERSION == 100
void func_000045D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000F0B0(arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000045EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000474C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000047BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000487C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000493C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004A04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004AF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000501C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005148);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005208);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000052F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000055E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000056A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005854);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005970);
#endif

#if FW_VERSION == 100
void func_000059E4(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 0x1C);
    temp_v0 = scePaf_DAB59652(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_0001F9E0);
    if (temp_v0 == 0) {

    } else {
        func_00005A50(temp_v0, 0, 0, (s32) arg0);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005B90);
#endif

#if FW_VERSION == 100
void func_00005C50(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00003B4C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005D68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005DE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005E74);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FA18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005EB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005F78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006038);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000060A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000618C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FAB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000623C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006360);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000642C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002EBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000032FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000336C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000034F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000035E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003660);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003ED0);
#endif

#if FW_VERSION != 100
void func_000040A8(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    func_00004140(arg0, arg1);
    arg0->unk20 = (s32) (arg0->unk20 + 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000040D8);
#endif

#if FW_VERSION != 100
void func_00004140(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk24 != 0) {

        } else {
            func_000040D8();
        }
        arg0->unk14 = (s32) (arg0->unk14 + arg1);
    }
}
#endif

#if FW_VERSION != 100
void func_00004198(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    func_00004140(arg0, arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000041B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004260);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004388);
#endif

#if FW_VERSION != 100
s32 func_00004504(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000098BC();
    var_v1 = 0x80101008;
    if (temp_v0 != 1) {
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            var_v1 = 0x80101005;
            if (func_0000983C() != 1) {
                var_v1 = ((func_00009918() ^ 1) != 0) ? 0 : 0x80101009;
            }
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000456C);

#if FW_VERSION == 100
void func_00006674(void *arg0, void *arg1) {
    s32 temp_s0;
    void **temp_a0;

    temp_s0 = D_00020A20;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
            if (M2C_FIELD(temp_s0, s32 *, 0x58) >= 3) {
                func_0000C6BC(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC));
                func_0000C82C(M2C_FIELD(temp_s0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg1, s32 *, 0xC));
                temp_a0 = M2C_FIELD(temp_s0, void ***, 0x20);
                M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, void *), 0xC)(temp_a0, arg0);
                func_00005970((s32) M2C_FIELD(temp_s0, void ***, 0x20), (s32) arg0);
            }
        }
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000067C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000068B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000069B0);
#endif

#if FW_VERSION != 100
s32 func_00004578(void) {
    return D_0001C234;
}
#endif

#if FW_VERSION != 100
s32 func_00004584(struct Unk_func_00004584_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) arg0->unk38 >= 2U) {
            func_0000456C(1);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000045D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000046A0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ACB8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006A1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006BB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006C28);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FBD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006E94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC14);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006F0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007034);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007224);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004784);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004824);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000048AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004950);
#endif

#if FW_VERSION != 100
s32 func_00004BDC(struct Unk_func_00004BDC_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00007824() >= 2) {
        var_v1 = 0x80103002;
        if (arg0 != NULL) {
            var_v1 = 0;
            if (arg0->unk64 != 0) {
                var_v1 = func_00004824(&arg0->unk64);
            }
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CB8);
#endif

#if FW_VERSION == 100
void func_00004D0C(s32 arg0) {
    func_00006E94(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D0C);
#endif

#if FW_VERSION == 100
void func_00004D50(s32 arg0) {
    func_00006F0C(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000072E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007308);
#endif

#if FW_VERSION == 100
s32 func_00007458(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_75062BCF(arg1) == 0) {
        var_v1 = func_000093F0(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x800);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000074A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC74);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCB4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCD4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCEC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD04);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000757C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000075EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000078D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000809C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000817C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008274);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD84);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD88);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000082F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008434);
#endif

#if FW_VERSION == 100
void func_00004D94(s32 arg0) {
    func_0000757C(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000085C4);
#endif

#if FW_VERSION == 100
void func_00004DD8(s32 arg0) {
    func_00008434(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004DD8);
#endif

#if FW_VERSION == 100
void func_000086DC(s32 arg0) {
    func_00008434(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000086F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000087B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000087CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008814);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000898C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008A24);
#endif

#if FW_VERSION == 100
void func_00008A54(M2C_UNK **arg0) {
    *arg0 = &D_0001FDE0;
    func_0000BEF4((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00008A7C(M2C_UNK **arg0) {
    *arg0 = &D_0001FDE0;
    func_0000BEF4((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008AA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008ADC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008CAC);
#endif

#if FW_VERSION == 100
void func_00008D0C(M2C_UNK **arg0) {
    *arg0 = &D_0001FE08;
}
#endif

#if FW_VERSION == 100
void func_00008D1C(M2C_UNK **arg0) {
    *arg0 = &D_0001FE08;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008D2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008D54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008E80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008FC8);
#endif

#if FW_VERSION == 100
void func_00009154(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009204((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0000917C(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009220((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000091A4(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009220((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000091CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009204);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009220);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000927C);
#endif

#if FW_VERSION == 100
s32 func_000092F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_000092F8(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg1 >= 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_a0 != 0) {
            var_v1 = temp_a0 + (arg1 * 0x34) + 0x20;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009338);
#endif

#if FW_VERSION == 100
s32 func_000093CC(s32 arg0) {
    func_000094AC(arg0, 0, -1);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000093F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000094AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000950C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000095B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009668);
#endif

#if FW_VERSION == 100
s32 func_0000974C(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a2 = 0;
    if ((temp_v1 != 0) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        var_a2 = M2C_FIELD(((arg1 * 0x34) + temp_v1), s32 *, 0x30);
    }
    return var_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009784);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009A4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009CCC);
#endif

#if FW_VERSION == 100
s32 func_00009D6C(s32 arg0) {
    return func_00014554(arg0) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D8C);
#endif

#if FW_VERSION == 100
s32 func_00009DC8(s32 arg0) {
    return func_000146CC(arg0) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009DE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009E24);
#endif

#if FW_VERSION == 100
s32 func_00009ECC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return __builtin_allegrex_min(func_000147F4(arg0, arg1, arg2, arg3), 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009EF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009FD0);
#endif

#if FW_VERSION == 100
void func_0000A074(s32 **arg0) {
    *arg0 = &D_0001FE18;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A09C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A13C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A1DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A230);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A284);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A2DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A2F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDE0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDF8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A434);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A564);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A570);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A59C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A5F0);
#endif

#if FW_VERSION == 100
void func_0000A670(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A680);
#endif

#if FW_VERSION == 100
void func_0000A6C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A6D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A710);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A764);
#endif

#if FW_VERSION == 100
void func_0000A808(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000A8C8((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A84C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A8C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A9C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AAFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AB74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ABE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACF8);
#endif

#if FW_VERSION == 100
void func_0000AD10(void) {

}
#endif

#if FW_VERSION == 100
void func_0000AD18(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AD20);
#endif

#if FW_VERSION == 100
void func_0000AD70(s32 arg0) {
    func_0000B6CC(arg0 + 8);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AD8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AF2C);
#endif

#if FW_VERSION == 100
s32 func_0000AFB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) != 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AFC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B014);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B084);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B1A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B2D0);
#endif

#if FW_VERSION == 100
void func_0000B35C(void) {
    func_0000B2D0(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_0000B37C(void) {
    func_0000B2D0(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_0000B39C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B3AC);
#endif

#if FW_VERSION == 100
void func_0000B428(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B478);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B4CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B554);
#endif

#if FW_VERSION == 100
void func_0000B590(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}
#endif

#if FW_VERSION == 100
void func_0000B5E8(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B644);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B6CC);
#endif

#if FW_VERSION == 100
void ***func_0000B740(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION == 100
void func_0000B7A8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000BB14((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B7EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B888);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B914);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BA24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BB14);
#endif

#if FW_VERSION == 100
void func_0000BBF8(void) {
    scePaf_5FAC9869();
}
#endif

#if FW_VERSION == 100
void func_0000BC14(void) {
    scePaf_3586BE05();
}
#endif

#if FW_VERSION == 100
void func_0000BC30(void) {
    scePaf_545FE2DA();
}
#endif

#if FW_VERSION == 100
void func_0000BC4C(void) {
    scePaf_10B901E7();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BC68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BCB4);
#endif

#if FW_VERSION == 100
void func_0000BD00(M2C_UNK **arg0) {
    *arg0 = &D_0001FEA0;
}
#endif

#if FW_VERSION == 100
void func_0000BD10(M2C_UNK **arg0) {
    *arg0 = &D_0001FEA0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD20);
#endif

#if FW_VERSION == 100
void func_0000BD48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 100
void func_0000BD58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD60);
#endif

#if FW_VERSION == 100
s32 func_0000BDE0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 8) >> 4) & 1;
}
#endif

#if FW_VERSION == 100
s32 func_0000BDF0(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x18) != 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000BE00(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (!((M2C_FIELD(arg0, u8 *, 8) ^ 1) & 1) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_0000BE2C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x19) == 0;
}
#endif

#if FW_VERSION == 100
void func_0000BE3C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        scePaf_35F25BA1(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BE84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEF4);
#endif

#if FW_VERSION == 100
void func_0000BF1C(s32 **arg0) {
    *arg0 = &D_0001FE90;
    func_0000BD00(arg0);
}
#endif

#if FW_VERSION == 100
void func_0000BF44(s32 **arg0) {
    *arg0 = &D_0001FE90;
    func_0000BD00(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
void func_0000BF7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BFB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C088);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C130);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C1B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C2A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C378);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C3DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C41C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C45C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C4D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C524);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C5D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C60C);
#endif

#if FW_VERSION == 100
void func_0000C638(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FFC8;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_0000C6AC((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C664);
#endif

#if FW_VERSION == 100
void func_0000C674(M2C_UNK **arg0) {
    *arg0 = &D_0001FFC8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C82C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C904);
#endif

#if FW_VERSION == 100
void func_0000CA7C(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_E9930C29(-1));
    func_00003AAC(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_00003AAC(&sp0);
    sceVshCommonGui_BAA1F762(&sp0, sceVshCommonGui_7DB9C54A(-1));
    func_00003AAC(&sp0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CAE4);
#endif

#if FW_VERSION == 100
void func_0000CB64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000CC04(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC04);
#endif

#if FW_VERSION == 100
void func_0000CC40(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC48);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CFE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D468);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E1C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004EAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000511C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000524C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005310);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000536C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000053F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000543C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000054A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005608);
#endif

#if FW_VERSION != 100
void func_000056E8(s32 arg0) {
    func_00005608(arg0, 6);
}
#endif

#if FW_VERSION != 100
void func_00005704(s32 arg0) {
    func_00005608(arg0, 8);
}
#endif

#if FW_VERSION != 100
s32 func_00005720(struct Unk_func_00005720_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) arg0->unk5EC >= 4U) {
            func_0000456C(0x2F);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000576C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005868);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000589C);
#endif

#if FW_VERSION != 100
s32 func_00005958(struct Unk_func_00005958_0 *arg0) {
    s32 var_v1;
    u32 *temp_v0;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk5F4;
        var_v1 = 0;
        if ((temp_v0 != NULL) && ((u32) *temp_v0 >= 0x801U)) {
            func_0000456C(0x31);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000059AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005E60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000060C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006240);
#endif

#if FW_VERSION != 100
u32 func_0000641C(struct Unk_func_0000641C_0 *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 != 0)) {
        var_v1 = (u32) ((arg0->unk8 + arg1) - 1) / arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006460);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006564);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000066A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000066F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000067E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006AF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006B78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006D68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006F8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006FE8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AD3C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FED4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEDC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEE4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEF4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF1C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF30);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF60);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D534);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D718);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D86C);
#endif

#if FW_VERSION == 100
void func_0000DA54(s32 arg0, void **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_00003B2C(&sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FEE4);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FEF4);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FF08);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s0_2);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000DC6C(s32 arg0, void **arg1, s32 arg2) {
    void *sp0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_00003B2C(&sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FF1C);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FF30);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    scePaf_DC2CA0F7(&sp0, arg0, &D_0001FF44);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, &sp0, temp_s0_2);
    if (sp0 != NULL) {
        temp_v0_4 = M2C_FIELD(sp0, s32 *, 4) - 1;
        M2C_FIELD(sp0, s32 *, 4) = temp_v0_4;
        if (temp_v0_4 > 0) {

        } else {
            M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
        }
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DE84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E0B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E180);
#endif

#if FW_VERSION == 100
void func_0000E254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E2CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E348);
#endif

#if FW_VERSION == 100
void func_0000E3E0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000E65C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E400);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E478);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E65C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E67C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E6B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E6EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E728);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E7A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E7E0);
#endif

#if FW_VERSION == 100
void func_0000E834(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA34);
    if (temp_v0 != 0) {
        func_0000A734(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA34) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E870);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E900);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E95C);
#endif

#if FW_VERSION == 100
void func_0000E9F8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA20);
    if (temp_v0 != 0) {
        scePaf_B3D2C3BB(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA20) = 0;
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
        M2C_FIELD(arg0, s32 *, 0xA28) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EA3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070D4);
#endif

#if FW_VERSION != 100
void func_000072DC(void) {
    func_00006AF0();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000072F8);
#endif

#if FW_VERSION != 100
s32 func_00007440(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007460);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000770C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000778C);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007824);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EC00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EC20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EC78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ECD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ED5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EDE8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020010);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EE7C);
#endif

#if FW_VERSION == 100
void func_0000EF10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EF18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EFD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F0B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F198);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F2E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F340);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F3B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F430);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F4F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F5B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F678);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F6C0);
#endif

#if FW_VERSION == 100
void func_0000F76C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F774);
#endif

#if FW_VERSION == 100
s32 func_0000F860(void) {
    return 1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F868);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020030);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020050);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020068);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FAB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FBC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FC80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FCE4);
#endif

#if FW_VERSION == 100
s32 func_0000FD48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FD50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FDE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FECC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FF58);
#endif

#if FW_VERSION == 100
void func_0000FF94(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}
#endif

#if FW_VERSION == 100
void func_0000FFEC(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}
#endif

#if FW_VERSION == 100
void ***func_00010048(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000100B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000100EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010128);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010178);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000101B4);
#endif

#if FW_VERSION == 100
s32 func_000101F8(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00010218(s32 arg0, s32 arg1) {
    func_00010DB8(arg0, arg1);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010238);
#endif

#if FW_VERSION == 100
void func_00010304(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_000104D4((s32) temp_s1);
}
#endif

#if FW_VERSION == 100
void func_00010354(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00010E04((s32) arg0, arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010374);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010398);
#endif

#if FW_VERSION == 100
void func_000103E0(void) {
    sceVshCommonGui_C5B53362();
}
#endif

#if FW_VERSION == 100
void func_000103FC(void) {
    sceVshCommonGui_A1C3DDD6();
}
#endif

#if FW_VERSION == 100
void func_00010418(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceVshCommonGui_607D5C82(arg1, arg2, arg3);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}
#endif

#if FW_VERSION == 100
u8 func_00010450(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010458);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000104D4);
#endif

#if FW_VERSION == 100
s32 func_0001055C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_00010564(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_0001056C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00010574(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_0001057C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_00010584(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_0001058C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010594);
#endif

#if FW_VERSION == 100
void func_000105B8(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_000105D4(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_000105F0(void *arg0, s32 *arg1) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001060C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010650);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001084C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010930);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000109B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010A34);
#endif

#if FW_VERSION == 100
s32 func_00010BE4(void) {
    return 1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010BEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010C5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020098);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000200B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000200D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020128);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010CCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010D60);
#endif

#if FW_VERSION == 100
void func_00010D80(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_000104D4((s32) (arg0 + 0x20));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010DB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010E04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011118);
#endif

#if FW_VERSION == 100
void func_000111BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_000111CC(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00011308((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011200);
#endif

#if FW_VERSION == 100
void func_00011294(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_0000053C((M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 0xC)) - 0xC);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_00011308((s32) arg0, temp_v0 - 0xA);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001142C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011454);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007830);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000790C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007BC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007C64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007CA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007E78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007EF4);
#endif

#if FW_VERSION != 100
M2C_UNK *func_00007F68(void) {
    return &D_00047D34;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007F74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007FA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007FCC);

#if FW_VERSION == 100
void func_0001151C(s32 arg0) {
    scePaf_6829D7AF(&D_00047D24, 0, 0x10);
    scePaf_F95EA3F1(&D_00047D24, arg0, 0x10);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001156C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000201C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011710);
#endif

#if FW_VERSION == 100
void func_00011814(void) {
    IoFileMgrForUser_6D08A871(&D_0001AD94);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008000);
#endif

#if FW_VERSION != 100
s32 func_00008040(struct Unk_func_00008040_0 *arg0) {
    func_00017760(&D_00047D24, 0, 0x10);
    func_00017684(&D_00047D24, arg0, 0x10);
    func_00013644(arg0->unk0, arg0->unk8);
    func_00017760(&D_00047E40, 0, 0xC);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000081A0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AD94);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020234);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011834);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADA0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADB4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000119C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011AB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011E08);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000202BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000202C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008300);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000869C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008724);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008810);
#endif

#if FW_VERSION != 100
s32 func_000088A8(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000088C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008994);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008B24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008CAC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE24);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE30);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012000);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000120BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001212C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001232C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000125E8);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008DEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009020);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012928);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000911C);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009278);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012BB0);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009330);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012C78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012CCC);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000935C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000093C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009448);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000094B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009548);

#if FW_VERSION == 100
s32 func_00012FC0(void) {
    return 0x1330;
}
#endif

#if FW_VERSION == 100
void func_00012FC8(s32 arg0, s32 arg1) {
    func_00008724(arg0, (s32) &D_000202BC, arg1);
}
#endif

#if FW_VERSION != 100
s32 func_0000957C(void) {
    return 0x1330;
}
#endif

#if FW_VERSION != 100
void func_00009584(s32 arg0, s32 arg1) {
    func_00008724(arg0, (s32) &D_0001AE7C, arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE7C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE88);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE90);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000095A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000096A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009790);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000983C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000098BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009918);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009DE0);
#endif

#if FW_VERSION != 100
void func_00009F64(s32 arg0, s32 arg1) {
    func_00009DE0(arg0, arg1, 0);
}
#endif

#if FW_VERSION != 100
void func_00009F80(s32 arg0, s32 arg1) {
    func_00009DE0(arg0, arg1, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009F9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEBC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A284);
#endif

#if FW_VERSION != 100
void func_0000A374(s32 arg0) {
    if (func_0000A174() >= 0) {
        func_0000A284(arg0);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A450);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A55C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A5B0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF08);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF10);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012FEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000138E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013954);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000139D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013AD8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020400);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002040C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020428);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020434);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020458);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020468);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020478);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020498);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013BDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013D1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013D80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013E4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001400C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001409C);
#endif

#if FW_VERSION == 100
s32 func_00014104(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceIoOpen(&D_00020530, 3, 0);
    var_v1 = 0;
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014148);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000141C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014224);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014398);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020530);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002053C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014554);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020558);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002056C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000145F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000146CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014714);
#endif

#if FW_VERSION == 100
s32 func_000147C0(s32 arg0) {
    return __builtin_allegrex_max(func_00011AB8(0, 0, arg0, 0, 0), -1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014A00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BE0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020610);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020618);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A734);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014E0C);
#endif

#if FW_VERSION == 100
void func_00015070(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = (*arg0 & ~(3 << arg1)) | (arg2 << arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015094);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A834);
#endif

#if FW_VERSION != 100
void func_0000AC0C(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}
#endif

#if FW_VERSION != 100
void func_0000AC34(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC74);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000150EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC8C);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AEF0);

#if FW_VERSION == 100
void func_00015280(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_00019028(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00007FCC(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        func_00007FCC((s32) arg0);
    }
}
#endif

#if FW_VERSION != 100
void func_0000AF14(struct Unk_func_0000AF14_0 *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0000FEAC(arg0->unk8);
        temp_v1 = arg0->unk0;
        if (temp_v1 != 0) {
            func_00007FCC(temp_v1);
            arg0->unk0 = 0;
        }
        func_00017760(arg0, 0, 0x10C);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AF6C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015394);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000154F0);
#endif

#if FW_VERSION == 100
s32 func_000155B0(void *arg0) {
    s32 var_v0;

    var_v0 = -0x1000;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000155C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000158B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015A90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015CE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015EC0);
#endif

#if FW_VERSION == 100
void func_00015FF8(s32 arg0, s8 arg1) {
    M2C_FIELD(((arg0 * 8) + D_00020A2C), s8 *, 6) = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016010);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B034);
#endif

#if FW_VERSION != 100
s32 func_0000B19C(struct Unk_func_0000B19C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = arg0->unk100;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B1B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B228);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B264);
#endif

#if FW_VERSION != 100
s32 func_0000B270(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00047E40.unk0 != 0) {
        var_a0 = D_00047E40.unk4;
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
void func_0000B290(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0000B2C4(arg0, arg1, arg2, arg3);
    } else {
        func_0000B4A4(arg0, arg1, arg2, arg3);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B2C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B4A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B7A4);
#endif

#if FW_VERSION != 100
void func_0000B910(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0000B944(arg0, arg1, arg2, arg3);
    } else {
        func_0000BA7C(arg0, arg1, arg2);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B944);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BA7C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF54);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016060);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C008);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C138);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C1F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C29C);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C3C4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000162D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016678);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016B74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016E0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016EB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000177EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017D10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000181B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018578);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019168);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019304);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000198F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001993C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A75C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A7C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A81C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AB9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AE30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AEA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AF70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AFE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B0E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B35C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B5C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B818);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BA68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BC10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BD40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C328);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C7A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C894);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CD90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D0B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D25C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C484);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C634);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF84);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF90);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFA4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFBC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFCC);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6F4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFEC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B000);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C7E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C944);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C9B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CCB4);
#endif

#if FW_VERSION != 100
M2C_UNK *func_0000CD0C(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_0001B0CC;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CD28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CDA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CE74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CEB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D340);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D520);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D5CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D780);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D908);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DA78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DCF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E4E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EE48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EFB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F2F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F590);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FB3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FF98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010118);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000104D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010518);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000105FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001074C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010EB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011100);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011198);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011360);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000113B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011430);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000114A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001152C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000116B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011848);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000119C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011BC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011CD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011DEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000122B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012674);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012748);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012AEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012BB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012D0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012E10);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B020);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B028);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B038);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B048);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B058);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B064);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B078);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B08C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B09C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0A8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0B4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0C0);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0CC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0D8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0E4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012FD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013290);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001343C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013644);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000136B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001370C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013748);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013804);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013898);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001392C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000139A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013A74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013AE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013B48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013BE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013CD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013DD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F48);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E584);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E5DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001411C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014160);
#endif

#if FW_VERSION != 100
void func_00014200(s32 *arg0) {
    if (!(*arg0 & 1)) {

    } else {
        scePower_DB62C9CF();
    }
    if (D_0001C240 != 0) {
        ((M2C_UNK (*)(M2C_UNK)) D_0001C240)(0);
    } else {
        sceKernelPowerUnlock(0);
    }
}
#endif

#if FW_VERSION != 100
void func_0001425C(s32 arg0, s32 arg1) {
    D_0001C23C = arg0;
    D_0001C240 = arg1;
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B114);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014270);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001434C);
#endif

#if FW_VERSION != 100
void func_000143C4(void) {
    func_000142CC();
}
#endif

#if FW_VERSION != 100
void func_000143E0(void) {
    func_0001434C();
}
#endif

#if FW_VERSION != 100
void func_000143FC(void) {
    func_0001434C();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014418);
#endif

#if FW_VERSION != 100
s32 func_0001445C(struct Unk_func_0001445C_0 *arg0) {
    D_0001C24C.unk0 = (s32) arg0->unk0;
    D_0001C24C.unk4 = (s32) arg0->unk4;
    D_0001C24C.unk8 = (s32) arg0->unk8;
    D_0001C24C.unkC = (s32) arg0->unkC;
    D_0001C24C.unk10 = (s32) arg0->unk10;
    D_0001C24C.unk14 = (s32) arg0->unk14;
    D_0001C24C.unk18 = (s32) arg0->unk18;
    D_0001C24C.unk1C = (s32) arg0->unk1C;
    return 0;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_000144AC(void) {
    return &D_0001C24C;
}
#endif

#if FW_VERSION != 100
s32 func_000144B8(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_0001C274)) {
        var_a1 = 0;
    }
    return var_a1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000144E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001456C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014720);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B130);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001490C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000149A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014AA4);
#endif

#if FW_VERSION != 100
s32 func_00014BA4(void) {
    return D_0001C274;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BF8);
#endif

#if FW_VERSION != 100
void func_00014E7C(struct Unk_func_00014E7C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = arg0;
}
#endif

#if FW_VERSION != 100
void func_00014E88(struct Unk_func_00014E88_0 *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk4 = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014EA0);
#endif

#if FW_VERSION != 100
void func_00014EC0(struct Unk_func_00014EC0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}
#endif

#if FW_VERSION != 100
s32 func_00014EC8(struct Unk_func_00014EC8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
M2C_UNK *func_00014EDC(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a0 = *arg0;
    var_a2 = 0;
    if ((arg1 > 0) & (var_a0 != NULL)) {
        do {
            var_a0 = *var_a0;
            var_a2 += 1;
        } while ((var_a2 < arg1) & (var_a0 != NULL));
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
s32 *func_00014F18(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_00014EDC(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_00014EDC(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}
#endif

#if FW_VERSION != 100
void func_00014F90(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}
#endif

#if FW_VERSION != 100
void func_00014FB4(void) {
    func_00015094();
}
#endif

#if FW_VERSION != 100
void func_00014FD0(void) {
    func_00015094();
}
#endif

#if FW_VERSION != 100
void func_00014FEC(void) {
    func_000152DC();
}
#endif

#if FW_VERSION != 100
void func_00015008(void) {
    func_000152DC();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015024);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001505C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015094);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015118);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000151AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000152DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015304);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000153B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000153F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B164);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B190);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015428);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015698);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000156E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001574C);
#endif

#if FW_VERSION != 100
s32 func_000157F4(s8 *arg0) {
    if (arg0 != NULL) {
        func_00015E84(arg0);
    }
    return 1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015818);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001590C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015A14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015AA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015BA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015C24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015CB8);
#endif

#if FW_VERSION != 100
s32 func_00015D54(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015D7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015DC0);
#endif

#if FW_VERSION != 100
void func_00015E84(s8 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015E8C);
#endif

#if FW_VERSION != 100
s32 func_00016014(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_0001C288;
    }
    if ((D_0001C284 == 0) || (arg0 != D_0001C284)) {
        return -1;
    }
    temp_v1 = D_0001C288;
    D_0001C284 = 0;
    D_0001C288 = temp_v1 + arg0;
    return temp_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001605C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000160C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000163CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016870);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000169B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016ACC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016D2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016F68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016F94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016FB4);
#endif

#if FW_VERSION != 100
s32 func_0001728C(void) {
    func_000169B4(D_0001C280);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000172B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000172FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000174C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000175B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017604);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001763C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017684);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000176EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017760);
#endif

#if FW_VERSION != 100
void func_000177EC(s32 arg0, M2C_UNK arg1) {
    func_000176EC(arg1, arg0);
}
#endif

#if FW_VERSION != 100
void func_00017810(void *arg0, s32 arg1) {
    func_00017760(arg0, 0, arg1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017830);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017854);
#endif

#if FW_VERSION != 100
void func_0001789C(struct Unk_func_0001789C_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000178BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017908);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001796C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000179A0);
#endif

#if FW_VERSION != 100
void func_000179D8(void) {
    func_00017760(&D_0001FA8C, 0, 0x2020);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017A00);
#endif

#if FW_VERSION != 100
s32 func_00017D9C(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017DA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017ED8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017FF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001806C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018098);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001811C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018160);
#endif

#if FW_VERSION != 100
void func_000181AC(struct Unk_func_000181AC_0 *arg0) {
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        arg0->unk8 = 0;
    }
}
#endif

#if FW_VERSION != 100
s32 func_000181D4(struct Unk_func_000181D4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = __builtin_allegrex_ext(arg0->unk8, 1, 1);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
s32 func_00018204(struct Unk_func_00018204_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = arg0->unk8 & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018234);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001825C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000182C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000182F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018424);
#endif

#if FW_VERSION != 100
u8 *func_00018554(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_v0;

    var_a1 = arg1;
    var_a2 = arg0;
    var_v0 = NULL;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_v0 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_v0;
            var_a2 += 1;
        } while (temp_v0 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001858C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018628);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018670);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000186A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001870C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000188F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018948);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018990);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018A60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018A80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018D80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018F00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018F7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018FDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019028);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019074);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019088);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019AEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2B8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4A8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B2C);
#endif

#if FW_VERSION != 100
void func_00019C5C(void) {
    func_00019B2C(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00019C7C(void) {
    func_00019B2C(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019C9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019CF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A2C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A464);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4E8);
