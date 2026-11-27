/* lang: c++ */
#include "common.h"
#include "savedata_auto_dialog_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000000AC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000010C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", module_start);
#endif

#if FW_VERSION < 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", module_stop);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_stop(void) {
    func_0001EB8C();
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 module_stop(void) {
    func_00049D88();
    func_0001275C();
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", module_reboot_before);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 module_reboot_before(void) {
    func_000128C8();
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000188);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000194_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000228);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002A4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000002A4(s32 arg0) {
    func_000008F0(arg0);
    D_0004E3E4 = 1;
    return 0;
}
#endif

#if FW_VERSION < 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000015C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000015C(void) {
    func_00000A10();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000015C(void) {
    sce_paf_private_malloc();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002EC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000002EC(void) {
    func_00013B14(0, (s32) func_000002A4, D_0001C670, -1, -1, (s32) func_0000015C);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000178);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00000178(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000178(void) {
    sce_paf_private_memalign();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000358);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00000358(void) {
    func_00000188();
    func_000002EC();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000037C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000037C(void) {
    func_0003B4A8();
    func_0003B83C();
    func_00013A10();
    sceKernelCheckCallback();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000003B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000003B0(void) {
    func_00000178();
    func_00000228();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000003D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000004F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000194);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00000194(void) {
    func_0003B238();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000194(void) {
    sce_paf_private_free();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000005B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000005B0(s32 arg0, s32 arg1) {
    func_0003B2BC(arg0, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000005CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000005E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000001B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000474);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000884);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00000884(void) {
    if (D_0004E3EC == 0) {

    } else {
        func_00013B14(0, (s32) &func_000005E8, D_0004E3EC, -1, -1, (s32) &func_00000474);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000510);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00000340(void) {
    D_00010839 = 1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000340);
#endif

#if FW_VERSION == 100
void func_00000340(void) {
    D_00020A00 = 0;
}
#endif

#if FW_VERSION < 282
u8 func_0000034C(void) {
    return (u8) D_00020A00;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000008F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A10);
#endif

#if FW_VERSION >= 282
void func_0000010C(void) {
    func_00017684();
}

s32 module_start(void) {
    func_00014270();
    func_00000000();
    func_000004D8(0, 0);
    return 0;
}

s32 module_stop(void) {
    func_0001A5C8();
    func_000142AC();
    return 0;
}

s32 module_reboot_before(void) {
    func_00014418();
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000001A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000238);

s32 func_000002B4(s32 arg0) {
    func_00000944(arg0);
    D_0001C204 = 1;
    return 0;
}

void func_000002E0(void) {
    func_00000A5C();
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000002FC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000037C);

void func_000004DC(void) {
    if (D_00020A01 == 0) {
        D_00020A00 = 1;
    }
}
#endif

#if FW_VERSION < 282
void func_000004FC(void) {
    func_00011710();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000AF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000BCC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A60C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000CE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000F0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000FD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000010B4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000010B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001158);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001214);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000012D8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A60C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A61C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000142C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000017A4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001888);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00001888(void) {
    return 0x200000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001890);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000019C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001B48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001C7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001D68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001E28);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001FC0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001FB8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001EF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002094);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000021BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000023F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000025A4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000234C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000225C);
#endif

#if FW_VERSION < 201
void func_00000518(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_000208A8);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000053C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000008FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000954);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A638);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000101B4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000101C0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000101C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A78);

s32 func_00000AD8(void) {
    return D_0001083C * D_00010848;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002648);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000027C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000297C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002ADC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000AF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000258C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002694);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000299C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A04);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002C84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A90);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002B1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002B8C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AB80);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002BF0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003248);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000032B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002FFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003050);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000281C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A668);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002F30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003020);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000309C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003884);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003A5C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003A5C(void *arg0, s32 arg1) {
    func_00003ABC(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004024);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003A8C);
#endif

#if FW_VERSION == 250
void func_00003A8C(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        temp_a1 = arg1 - temp_v1;
        if (M2C_FIELD(arg0, s32 *, 0xC) < temp_a1) {
            M2C_FIELD(arg0, s32 *, 0xC) = temp_a1;
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_v1 - arg1);
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003ABC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003ABC(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {

        } else {
            func_00004024((s32) arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + arg1);
    }
}
#endif

#if FW_VERSION == 250
void func_00003ABC(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0x20) != 0) {

        } else {
            func_00003A8C(arg0, arg1);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + arg1);
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B14);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00003B14(void *arg0, s32 arg1) {
    func_00003ABC(arg0, arg1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B30);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000041AC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003BDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003C14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003C50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003D78);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003E28);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00003E28(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000141C8();
    var_v1 = 0x80101008;
    if (temp_v0 != 1) {
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            var_v1 = 0x80101005;
            if (func_00014148() != 1) {
                var_v1 = ((func_000050D4() ^ 1) != 0) ? 0 : 0x80101009;
            }
        }
    }
    return var_v1;
}

void func_00004200(s32 arg0) {
    D_0001C6A4 = arg0;
}

s32 func_0000420C(void) {
    return D_0001C6A4;
}

s32 func_00004218(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) >= 2U) {
            func_00004200(1);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004264);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004334);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003E90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003EBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A738);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003F64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004004);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000047F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000489C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004038);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004054);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004724);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004794);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000047F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004834);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004878);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000048BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D70);
#endif

#if FW_VERSION == 250
s32 func_00004900(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x5C4);
        var_v1 = 0;
        if (temp_v0 != 0) {
            var_v1 = func_0000494C(temp_v0, 4, 0);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000494C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004BD8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B130);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004DA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E04);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005344);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E78_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000040B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000040C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000040EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000041D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000042B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004420);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004F30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000051B8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004474);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000046E0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000046E0(s32 arg0) {
    func_000051B8(arg0, 6);
}

void func_000052B4(s32 arg0) {
    func_000051B8(arg0, 8);
}
#endif

#if FW_VERSION == 271
s32 func_000052D0(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5EC) >= 4U) {
            func_00004200(0x2F);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 260
s32 func_000052D0(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5EC) >= 3U) {
            func_00004200(0x30);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 250
s32 func_000052D0(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        var_v1 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5EC) >= 3U) {
            func_00004200(0x2F);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000531C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005418);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000544C);
#endif

#if FW_VERSION == 250 || FW_VERSION == 271
s32 func_00005508(void *arg0) {
    s32 var_v1;
    u32 *temp_v0;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, u32 **, 0x5F4);
        var_v1 = 0;
        if ((temp_v0 != NULL) && ((u32) *temp_v0 >= 0x801U)) {
            func_00004200(0x31);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 260
s32 func_00005508(void *arg0) {
    s32 var_v1;
    u32 *temp_v0;

    var_v1 = 0x80103002;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, u32 **, 0x5F4);
        var_v1 = 0;
        if ((temp_v0 != NULL) && ((u32) *temp_v0 >= 0x801U)) {
            func_00004200(0x32);
            var_v1 = 0x80103008;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000555C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000055C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004720);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004748);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005C44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005DBC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000B6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000CA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000DB4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000056C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000059C);

void func_000005CC(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
}

void func_000005F4(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
}

void func_0000061C(M2C_UNK **arg0) {
    *arg0 = &D_0001F5F8;
    func_0000E6EC((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000654);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000007C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000908);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000006BC);

void func_00000784(void *arg0, s32 arg1) {
    func_000006BC(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000007A0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000974);
#endif

#if FW_VERSION == 100
void func_00000974(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 *, 0xA30) = (u8) M2C_FIELD(arg1, u8 *, 0x500);
    }
    func_0000EA3C((s32) arg0, (s32) arg1);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000099C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A2C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A9C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004AD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
u32 func_00004C34(void *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_v1 = (u32) ((M2C_FIELD(arg0, s32 *, 8) + arg1) - 1) / arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005FDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000060E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000D2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004F68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005218);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000052C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000054AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000056CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005728);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A79C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A7A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005814);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A0C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00005A0C(s32 arg0) {
    func_00005218(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005B84);
#endif

#if FW_VERSION == 271
s32 func_00005B84(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006FDC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005BB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005E1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006130);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000BC0);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000D2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000DE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000F60);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020174);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001244);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000015B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000FCC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000013A8);
#endif

#if FW_VERSION < 201
s32 func_00001414(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001AF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001DE4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000141C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000143C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001470);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000181C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000018E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000019A4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F5F8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001A70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001B78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000014A4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001870);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001BF4);
#endif

#if FW_VERSION == 100
s32 func_00001870(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0x30);
}
#endif

#if FW_VERSION < 150
void func_0000187C(s32 arg0) {
    func_00001EC8(arg0, 0x8010300B);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000189C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001AA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001AF0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000201C8_v102);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F618);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001B9C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020210);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002234);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000022EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002320);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001EA4);
#endif

#if FW_VERSION == 100
void func_00001EA4(void *arg0) {
    func_000101F8(M2C_FIELD(arg0, void **, 0x1C));
    D_00020A24 = 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000022D0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001EC8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002458);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002744);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002AD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001F34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002140);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024C4);
#endif

#if FW_VERSION == 100
void func_000024C4(void) {
    func_0000187C(D_00020A20);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000617C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000790C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006258);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000074D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007510);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006300);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000637C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006448);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000079F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000064E4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007C08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006638);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000066AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
M2C_UNK *func_000066AC(void) {
    return &D_00082BA0;
}
#endif

#if FW_VERSION < 150
u8 func_000024E8(void) {
    return D_00020A24;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024F4);
#endif

#if FW_VERSION >= 282
void func_00000338(void) {
}

void func_00000340(void) {
    func_000001A4();
    func_000002FC();
}

void func_00000364(void) {
    func_00015304();
    func_00015698();
    func_000149A0();
    sceKernelCheckCallback();
}

void func_00000398(void) {
    func_00000338();
    func_00000238();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000003BC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEA4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEA8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEB8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AED0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEEC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF04);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF1C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF34);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF48);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF70);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFB4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFBC);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2D8);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B028_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B040);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B044);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2F8);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B048_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B050);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AAFC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0A0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AB0C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AB10);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000004D8);

void func_0000057C(void) {
    func_00015094();
}

void func_00000598(void) {
    func_00015118();
}

void func_000005B4(void) {
    func_000152DC();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000005D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000007FC);

void func_000008D8(void) {
    if (D_0001C208 == 0) {

    } else {
        func_00014AA4(0, (s32) &func_000005D0, D_0001C208, -1, -1, (s32) &func_000007FC);
    }
}

void func_00000928(void) {
    D_0001C21D = 1;
}

u8 func_00000938(void) {
    return D_0001B5F8;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000944);

void func_00000A5C(void) {
}

void func_00000A64(void) {
    func_000080B4();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000A80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000B38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000C98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000EDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00000FA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001068);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000110C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000011F4);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001358);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000016E4);

s32 func_000017C8(void) {
    return 0x200000;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000017D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001910);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001A8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001C3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001D30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00001F94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002060);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000213C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002304);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002414);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000024A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002658);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000272C);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABD0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABE8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ABF0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002788);

s32 func_000027E8(void) {
    return D_0001C220 * D_0001C22C;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002804);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000287C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002AC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002B90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002C44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002CAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002D38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002DE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002E58);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AC00);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F6D8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F6EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002540);

void func_000026EC(void) {
    if ((D_00020A25 == 0) && (D_00020A20 != 0)) {
        D_00020A24 = 1;
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002718);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002790);
#endif

#if FW_VERSION < 103
void func_00002790(s32 arg0, s32 arg1) {
    func_0000C60C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F790;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000027C8);
#endif

#if FW_VERSION < 103
void func_000027C8(s32 arg0, s32 arg1) {
    func_0000C60C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F790;
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
}
#endif

#if FW_VERSION < 150
void func_00002800(M2C_UNK **arg0) {
    *arg0 = &D_0001F790;
    func_0000C664();
}

void func_00002828(M2C_UNK **arg0) {
    *arg0 = &D_0001F790;
    func_0000C664();
}

void func_00002850(s32 **arg0) {
    *arg0 = &D_0001F790;
    func_0000C664();
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002888);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002988);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A08);
#endif

#if FW_VERSION < 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F71C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002A98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002E08);
#endif

#if FW_VERSION < 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F73C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F744);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F758);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F770);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002EE4);

void func_00003328(s32 arg0) {
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xDC);
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xCC);
}

void func_0000335C(s32 arg0) {
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xC9);
    _ZN3paf9PhHandler11KillTimerCBEi(arg0, 0xCA);
}
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000206C4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003390);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000372C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003820);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000206F8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000206FC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020700);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020704);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003924);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003AAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003ADC);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000042A8);
#endif

#if FW_VERSION < 150
void func_00003B2C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003B4C((s32) arg0);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B6C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B4C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000447C);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003B6C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003C50);

void func_00003C80(M2C_UNK **arg0) {
    *arg0 = &D_0001F988;
    func_0000A1DC((s32) arg0);
}

void func_00003CA8(M2C_UNK **arg0) {
    *arg0 = &D_0001F988;
    func_0000A1DC((s32) arg0);
}

void func_00003CD0(s32 **arg0) {
    *arg0 = &D_0001F988;
    func_0000A1DC((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003D08);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F790);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003DE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004210);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004264);

void func_00004330(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0000EC20(arg0, arg1, arg2);
    *arg0 = &D_0001FA18;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000043B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004410);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004470);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004518);

void func_000045D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000F0B0(arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000045EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000474C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000047BC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000487C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000493C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004A04);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005434);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004AF4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F988);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004EB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000501C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005148);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005208);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000052F4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9A8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9AC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005438);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000055E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000056A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005854);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005970);

void func_000059E4(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 0x1C);
    temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_0001F9E0);
    if (temp_v0 == 0) {

    } else {
        func_00005A50(temp_v0, 0, 0, (s32) arg0);
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A50);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000064F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000042A8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005B90);

void func_00005C50(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00003B4C((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005C70);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005CE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005D68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005DE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005E74);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9E0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001F9F8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FA18);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000205F0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005EB4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006838);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005F78);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006038);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000069F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000060A0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000618C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FAB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000623C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB30);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB40);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FB50);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020AE8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000642C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002EBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000032FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000336C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000034F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000035E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003660);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003ED0);

void func_000040A8(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    func_00004140(arg0, arg1);
    arg0->unk20 = (s32) (arg0->unk20 + 1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000040D8);

void func_00004140(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg0->unk24 != 0) {

        } else {
            func_000040D8();
        }
        arg0->unk14 = (s32) (arg0->unk14 + arg1);
    }
}

void func_00004198(struct Unk_func_000040A8_0 *arg0, s32 arg1) {
    func_00004140(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000041B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004260);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004388);

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

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000456C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006674);
#endif

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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007064);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006714);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000067C8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000068B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000069B0);
#endif

#if FW_VERSION >= 282
s32 func_00004578(void) {
    return D_0001C234;
}

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000045D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000046A0);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ACB8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006A1C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006BB8);
#endif

#if FW_VERSION == 100
void func_00006BB8(s32 arg0, void *arg1) {
    if (arg1 != NULL) {
        func_0000CAE4(3, 0);
        func_0000CC40(M2C_FIELD(arg1, void **, 0x2C));
        if (arg0 == 0) {
            func_0000757C((s32) arg1);
        } else {
            func_00001EC8((s32) arg1, 0x80103009);
        }
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006C28);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FBD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006CC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006E94);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC10);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC14);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC18);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006F0C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000079B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007034);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007224);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004784);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004824);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000048AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004950);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004CB8);
#endif

#if FW_VERSION < 150
void func_00004D0C(s32 arg0) {
    func_00006E94(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D0C);
#endif

#if FW_VERSION < 150
void func_00004D50(s32 arg0) {
    func_00006F0C(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D50);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000072E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007308);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007458);
#endif

#if FW_VERSION == 100
s32 func_00007458(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (Job_isCanceled(arg1) == 0) {
        var_v1 = func_000093F0(M2C_FIELD(arg0, s32 *, 0x28), 0, 0x800);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007E30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000074A4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC30);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC40);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC44);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC5C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC74);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020C28);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020C48);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002085C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002087C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FC94);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCB4);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCD4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FCEC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD04);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020CAC);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000208E0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD18);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000757C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000075EC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008290);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008664);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000078D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007C6C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000809C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000817C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008D84);
#endif

#if FW_VERSION == 100
void func_00008274(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    if (arg0 != NULL) {
        func_0000CC40(M2C_FIELD(arg0, void **, 0x2C));
        func_0000CAE4(3, 1);
        temp_a0 = M2C_FIELD(arg0, void ***, 0x1C);
        temp_v0 = _ZNK3paf4View8PageRootEPKc(M2C_FIELD(*temp_a0, s32 (**)(void **), 0x24)(temp_a0), &D_0001FC30);
        if (temp_v0 != 0) {
            func_00003924(temp_v0, (s32) arg0, 0);
        }
        func_0000817C((s32) arg0);
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD5C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD6C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD84);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FD88);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDA4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008E2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008F30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000082F8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008434);

void func_00004D94(s32 arg0) {
    func_0000757C(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004D94);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000085C4);

void func_00004DD8(s32 arg0) {
    func_00008434(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004DD8);
#endif

#if FW_VERSION < 150
void func_000086DC(s32 arg0) {
    func_00008434(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000086F8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009404);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000087B0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000087CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008814);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000898C);

void func_00008A24(s32 **arg0, s32 arg1) {
    func_0000BE84(arg0, arg1);
    *arg0 = &D_0001FDE0;
}

void func_00008A54(M2C_UNK **arg0) {
    *arg0 = &D_0001FDE0;
    func_0000BEF4((s32) arg0);
}

void func_00008A7C(M2C_UNK **arg0) {
    *arg0 = &D_0001FDE0;
    func_0000BEF4((s32) arg0);
}

void func_00008AA4(s32 **arg0) {
    *arg0 = &D_0001FDE0;
    func_0000BEF4((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000980C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008ADC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008CAC);

void func_00008D0C(M2C_UNK **arg0) {
    *arg0 = &D_0001FE08;
}

void func_00008D1C(M2C_UNK **arg0) {
    *arg0 = &D_0001FE08;
}

void func_00008D2C(s32 **arg0) {
    *arg0 = &D_0001FE08;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008D54);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDE0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008E80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008FC8);

void func_00009154(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009204((s32) arg0);
}

void func_0000917C(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009220((s32) arg0);
}

void func_000091A4(M2C_UNK **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009220((s32) arg0);
}

void func_000091CC(s32 **arg0) {
    *arg0 = &D_0001FDF8;
    func_00009220((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009204);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009220);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000927C);

s32 func_000092F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009338);

s32 func_000093CC(s32 arg0) {
    func_000094AC(arg0, 0, -1);
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000093F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000094AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000950C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009568);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000095B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009668);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009784);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009A4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009A68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009CCC);

s32 func_00009D6C(s32 arg0) {
    return func_00014554(arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D8C);

s32 func_00009DC8(s32 arg0) {
    return func_000146CC(arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009DE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009E24);

s32 func_00009ECC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return __builtin_allegrex_min(func_000147F4(arg0, arg1, arg2, arg3), 0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009EF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009FD0);

void func_0000A074(s32 **arg0) {
    *arg0 = &D_0001FE18;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A09C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A13C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A1DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A230);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A284);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A2DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A2F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDE0);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDE8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FDF8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE08);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A358);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A434);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A564);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A570);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A59C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A5F0);

void func_0000A670(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A680);

void func_0000A6C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A6D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A710);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A764);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A84C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A8C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A9C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AAFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AB74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ABE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACF8);

void func_0000AD10(void) {

}

void func_0000AD18(void) {

}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BA3C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AD20);

void func_0000AD70(s32 arg0) {
    func_0000B6CC(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AD8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AF2C);

s32 func_0000AFB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AFC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B014);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B084);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B1A4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE30);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B2D0);

void func_0000B35C(void) {
    func_0000B2D0(1, 0xFFFF);
}

void func_0000B37C(void) {
    func_0000B2D0(0, 0xFFFF);
}

void func_0000B39C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B3AC);

void func_0000B428(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B438);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B478);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B4CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B554);

void func_0000B590(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}

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
            sce_paf_private_free2(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B644);

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
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}
#endif

#if FW_VERSION < 150
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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B7EC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C3E4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B888);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B914);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BA24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BB14);

void func_0000BBF8(void) {
    sce_paf_private_malloc();
}

void func_0000BC14(void) {
    sce_paf_private_memalign();
}

void func_0000BC30(void) {
    sce_paf_private_free();
}

void func_0000BC4C(void) {
    sce_paf_private_qsort();
}

void func_0000BC68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FEA0;
    func_0000BD48(arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
}

void func_0000BCB4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FEA0;
    func_0000BD48(arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
}

void func_0000BD00(M2C_UNK **arg0) {
    *arg0 = &D_0001FEA0;
}

void func_0000BD10(M2C_UNK **arg0) {
    *arg0 = &D_0001FEA0;
}

void func_0000BD20(s32 **arg0) {
    *arg0 = &D_0001FEA0;
    _ZdlPv(arg0);
}

void func_0000BD48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_0000BD58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD60);

s32 func_0000BDE0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 8) >> 4) & 1;
}

s32 func_0000BDF0(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x18) != 0;
}

s32 func_0000BE00(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if ((((M2C_FIELD(arg0, u8 *, 8) ^ 1) & 1) == 0) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0000BE2C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x19) == 0;
}

void func_0000BE3C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        Job_Cancel(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void func_0000BE84(s32 **arg0, s32 arg1) {
    func_0000BC68(arg0, arg1);
    *arg0 = &D_0001FE90;
    func_0000BF7C(arg0);
}

void func_0000BEBC(s32 **arg0, s32 arg1) {
    func_0000BC68(arg0, arg1);
    *arg0 = &D_0001FE90;
    func_0000BF7C(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEF4);

void func_0000BF1C(s32 **arg0) {
    *arg0 = &D_0001FE90;
    func_0000BD00(arg0);
}

void func_0000BF44(s32 **arg0) {
    *arg0 = &D_0001FE90;
    func_0000BD00(arg0);
    _ZdlPv(arg0);
}

void func_0000BF7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BFB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C088);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C130);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C1B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C2A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C378);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C3DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C41C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C45C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C498);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C4D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C524);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C5D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C60C);

void func_0000C638(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001FFC8;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_0000C6AC((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C664);

void func_0000C674(M2C_UNK **arg0) {
    *arg0 = &D_0001FFC8;
}

void func_0000C684(s32 **arg0) {
    *arg0 = &D_0001FFC8;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C82C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C904);

void func_0000CA7C(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterE6Locale(-1));
    func_00003AAC(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_00003AAC(&sp0);
    _ZN3vsh32SetButtonNavigationString_OptionEPKw(&sp0, _ZN3vsh16GetString_OptionE6Locale(-1));
    func_00003AAC(&sp0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CAE4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CB64);
#endif

#if FW_VERSION < 103
void func_0000CB64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0000CC04(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = sceVshCommonGui_1A6F3382(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC04);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC40);
#endif

#if FW_VERSION < 103
void func_0000CC40(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC48);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FE90);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CFE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D468);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004EAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000511C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000524C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005310);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000536C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000053F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000543C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000054A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005608);

void func_000056E8(s32 arg0) {
    func_00005608(arg0, 6);
}

void func_00005704(s32 arg0) {
    func_00005608(arg0, 8);
}

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000576C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005868);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000589C);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000059AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005A44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005E60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000060C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006240);

u32 func_0000641C(struct Unk_func_0000641C_0 *arg0, u32 arg1) {
    u32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 != 0)) {
        var_v1 = (u32) ((arg0->unk8 + arg1) - 1) / arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006460);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006564);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000066A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000066F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000067E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006AF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006B78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006D68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006F8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006FE8);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AD3C);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FED4);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020E64);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEE4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FEF4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF08);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF1C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF30);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF44);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF58);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF60);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF68);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF7C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FF94);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D534);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D694);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D718);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E428);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D86C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DA54);
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

    func_00003B2C((s32*) &sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FEE4);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FEF4);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FF08);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0_2);
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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DC6C);
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

    func_00003B2C((s32*) &sp0, 0);
    temp_s2 = arg2 << 0x10;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2 | 1);
    if ((sp0 == NULL) || (temp_v0 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0, (temp_v0 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FF1C);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s2);
    if ((sp0 == NULL) || (temp_v0_2 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_2, (temp_v0_2 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0 = temp_s2 | 7;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FF30);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0);
    if ((sp0 == NULL) || (temp_v0_3 = M2C_FIELD(sp0, s32 *, 4) - 1, M2C_FIELD(sp0, s32 *, 4) = temp_v0_3, (temp_v0_3 > 0))) {

    } else {
        M2C_FIELD(M2C_FIELD(sp0, void **, 0), M2C_UNK (**)(void *), 4)(sp0);
    }
    temp_s0_2 = temp_s2 | 0xE;
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32, M2C_UNK, M2C_UNK), 0x7C)(arg1, temp_s0_2, 0x19, 3);
    _ZNK3paf4View10GetTextureEPKc((s32*) &sp0, arg0, &D_0001FF44);
    M2C_FIELD(*arg1, M2C_UNK (**)(void **, s32 *, s32), 0xA8)(arg1, (s32*) &sp0, temp_s0_2);
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

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DE84);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EDAC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E0B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E180);

void func_0000E254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E264);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E2CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E348);

void func_0000E3E0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000E65C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E400);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E478);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E544);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E65C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E67C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E6B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E6EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E728);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E764);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E7A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E7E0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E834);
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

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F314);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E870);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E900);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E95C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E9F8);
#endif

#if FW_VERSION == 100
void func_0000E9F8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA20);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xA20) = 0;
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
        M2C_FIELD(arg0, s32 *, 0xA28) = 0;
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EA3C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFC8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFD8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001FFE0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB0C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070D4);

void func_000072DC(void) {
    func_00006AF0();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000072F8);

s32 func_00007440(s32 arg0) {
    return (arg0 & 1) + __builtin_allegrex_ext(arg0, 1, 1) + __builtin_allegrex_ext(arg0, 2, 1) + __builtin_allegrex_ext(arg0, 3, 1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007460);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000770C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000778C);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007824);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EC00);

void func_0000EC20(void *arg0, s32 arg1, s32 arg2) {
    func_0000BC68(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000200B8;
    func_00003B2C(arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0000EE7C((s32) arg0);
}

void func_0000EC78(void *arg0, s32 arg1, s32 arg2) {
    func_0000BC68(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000200B8;
    func_00003B2C(arg0 + 0x24, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0000EE7C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ECD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ED5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EDE8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020010);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EE7C);

void func_0000EF10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EF18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EFD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F0B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F198);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F2E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F340);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F3B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F430);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F4F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F5B0);

void func_0000F678(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0000FFEC(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F6C0);

void func_0000F76C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F774);

s32 func_0000F860(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F868);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020030);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020050);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020068);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FAB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FBC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FC80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FCE4);

s32 func_0000FD48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FD50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FDE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEA0);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010A54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEA8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FECC);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010D5C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FF58);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FF94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010E30);
#endif

#if FW_VERSION < 103
void func_0000FF94(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION < 150
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
            sce_paf_private_free2(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

void ***func_00010048(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000100B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000100EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010128);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010150);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010178);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000101B4);

s32 func_000101F8(void *arg0) {
    _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

s32 func_00010218(s32 arg0, s32 arg1) {
    func_00010DB8(arg0, arg1);
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010238);

void func_00010304(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_000104D4((s32) temp_s1);
}

void func_00010354(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00010E04((s32) arg0, arg1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010374);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010398);

void func_000103E0(void) {
    _ZN3vsh10OptionMenu4ShowEv();
}

void func_000103FC(void) {
    _ZN3vsh10OptionMenu4HideEv();
}

void func_00010418(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg1, arg2, arg3);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}

u8 func_00010450(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010458);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000104D4);

s32 func_0001055C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00010564(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0001056C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00010574(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0001057C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00010584(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_0001058C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_00010594(void *arg0, s32 arg1) {
    _ZN3paf4View8PageOpenEPKcii(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}

void func_000105B8(void *arg0) {
    _ZN3paf4View12PageActivateEPKc(M2C_FIELD(arg0, s32 *, 4));
}

void func_000105D4(void *arg0) {
    _ZN3paf4View9PageCloseEPKc(M2C_FIELD(arg0, s32 *, 4));
}

void func_000105F0(void *arg0, s32 *arg1) {
    _ZNK3paf4View8PageRootEPKc(M2C_FIELD(arg0, s32 *, 4), arg1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001060C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010650);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010694);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010770);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001084C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010930);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000109B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010A34);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001177C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010BE4);
#endif

#if FW_VERSION == 100
s32 func_00010BE4(void) {
    return 1;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010BEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010C5C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020098);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000200B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000200D0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020128);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020138);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010CCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010D60);

void func_00010D80(void *arg0) {
    _ZN3paf4View12PageCloseAllEv(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_000104D4((s32) (arg0 + 0x20));
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010DB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010E04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010FD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011118);

void func_000111BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000111CC(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00011308((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011200);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011308);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001142C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011454);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007830);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000790C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A4C);
#endif

#if FW_VERSION >= 351
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007AE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007B28);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007A88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007BC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007C64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007CA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007E78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007EF4);

M2C_UNK *func_00007F68(void) {
    return &D_00047D34;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007F74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007FA0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007FE0);
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007FCC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007DD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001151C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001151C(s32 arg0) {
    sce_paf_private_memset(&D_00047D24, 0, 0x10);
    sce_paf_private_memcpy(&D_00047D24, arg0, 0x10);
    func_0000EBB4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007DD8);
#endif

#if FW_VERSION < 150
void func_0001151C(s32 arg0) {
    sce_paf_private_memset(&D_00047D24, 0, 0x10);
    sce_paf_private_memcpy(&D_00047D24, arg0, 0x10);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001156C);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000201C8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011710);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011814);
#endif

#if FW_VERSION < 201
void func_00011814(void) {
    sceIoUnassign(&D_0001AD94);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011710);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00011710(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000026B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002794);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004A79C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006A18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008000);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008040);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00008040(struct Unk_func_00008040_0 *arg0) {
    func_00017760(&D_00047D24, 0, 0x10);
    func_00017684(&D_00047D24, arg0, 0x10);
    func_00013644(arg0->unk0, arg0->unk8);
    func_00017760(&D_00047E40, 0, 0xC);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080B4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008108);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000081A0);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AD94);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020234);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001020C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011834);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADA0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008184);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008480);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000080BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000081A0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADB4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000119C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011AB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000869C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001027C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011E08);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000869C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002123C);
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008724);
#endif

#if FW_VERSION < 103
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000202BC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000202C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008300);
#endif

#if FW_VERSION < 103 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000869C);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADEC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008740);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008724);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008810);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000088A8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_000088A8(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000088C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008994);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008B24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008CAC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008F64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000911C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009020);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000092B4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE24);
#endif

#if FW_VERSION < 271 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008160);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012000);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012C44);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002FAC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00002FAC(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002FAC(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000070B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000082FC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007174);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000729C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007424);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE64);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00002FD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000120BC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001212C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001232C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000125E8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008DEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009020);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00007888);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012928);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000911C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009278);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012BB0);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009330);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012C78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012CCC);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000935C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009458);
#else
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000093C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009448);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000094B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009548);
#endif

#if FW_VERSION < 282
s32 func_00012FC0(void) {
    return 0x1330;
}

void func_00012FC8(s32 arg0, s32 arg1) {
    func_00008724(arg0, (s32) &D_000202BC, arg1);
}
#endif

#if FW_VERSION >= 103 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000202BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001ADDC);
#endif

#if FW_VERSION >= 282
s32 func_0000957C(void) {
    return 0x1330;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009584);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00009584(s32 arg0, s32 arg1) {
    func_00008724(arg0, (s32) &D_0001AE7C, arg1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE7C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B3FC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B410);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000096A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000096A0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE88);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AE90);

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000095A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000096A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009790);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000983C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000098BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009918);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009AD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D28);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009F64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009F80);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009DE0);

void func_00009F64(s32 arg0, s32 arg1) {
    func_00009DE0(arg0, arg1, 0);
}

void func_00009F80(s32 arg0, s32 arg1) {
    func_00009DE0(arg0, arg1, 1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009F9C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEBC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEC8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A320);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A174);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A284);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A374);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000A374(s32 arg0) {
    if (func_0000A174() >= 0) {
        func_0000A284(arg0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A3F4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A63C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A450);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A55C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A7B0);

s32 func_0000A7D4(u8 *arg0, s32 arg1) {
    return (arg1 & *arg0) != 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A7E4);

void func_0000A7FC(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A824);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A834);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A894);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A958);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AEE8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A5B0);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF08);
#endif

#if FW_VERSION < 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF10);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013B2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000141DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00003E0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008588);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000452C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012FEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000138E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013954);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000087DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008904);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000139D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013AD8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020400);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00008A0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002040C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020428);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020434);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020458);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020468);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020478);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020498);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204B0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_000204D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013BDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C6C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014A7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004AD0);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013D1C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013D80);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000148B0);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014DF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004C2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004E48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013E4C);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001400C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001409C);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014148);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000141C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000050D4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009AAC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014224);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142A8);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014398);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020530);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002053C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014554);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020558);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0002056C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000145F4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000146CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014714);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147C0);
#endif

#if FW_VERSION < 201
s32 func_000147C0(s32 arg0) {
    return __builtin_allegrex_max(func_00011AB8(0, 0, arg0, 0, 0), -1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009730);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000097E8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000996C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000996C(s32 arg0, s32 arg1) {
    func_000097E8(arg0, arg1, 0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009988);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00009988(s32 arg0, s32 arg1) {
    func_000097E8(arg0, arg1, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000099A4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020530);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B3C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009B78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009C88);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D4C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00009D4C(s32 arg0) {
    if (func_00009B78() >= 0) {
        func_00009C88(arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009D90);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014A00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00005B2C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B068);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B174);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009E38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00009E38(s32 arg0, s32 arg1, s32 arg2) {
    func_00009F18(arg0, arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009E60);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00010480);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A594);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BE0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020610);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00009F18);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_00020618);
#endif

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A734);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A5B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A198);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014E0C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015070);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00015070(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}
#endif

#if FW_VERSION < 201
void func_00015070(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = (*arg0 & ~(3 << arg1)) | (arg2 << arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015094);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A834);

void func_0000AC0C(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

void func_0000AC34(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A534);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000150EC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AC8C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AEF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015280);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION >= 282 && FW_VERSION < 350
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

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AF6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A874);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015394);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000154F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000155B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000155B0(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 201
s32 func_000155B0(void *arg0) {
    s32 var_v0;

    var_v0 = -0x1000;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000A9F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AA68);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000AA68(void) {
    if (D_00082CAC != 0) {
        func_00007FCC(D_00082CAC);
        D_00082CAC = 0;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AAA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0000AAA4(void) {
    return D_00082CAC;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AAB0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0000AAB0(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(&D_00082CAC, s32 *, 0) != 0) {
        var_a0 = M2C_FIELD(&D_00082CAC, s32 *, 4);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AAD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AB04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000ACE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000AFC0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B134);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000B134(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0000B168(arg0, arg1, arg2, arg3);
    } else {
        func_0000B288(arg0, arg1, arg2);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B168);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B288);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B51C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD84);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF08);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BE00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B688);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B7B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B870);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000155C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000158B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00006AB4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015A90);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015CE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015EC0);

void func_00015FF8(s32 arg0, s8 arg1) {
    M2C_FIELD(((arg0 * 8) + D_00020A2C), s8 *, 6) = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016010);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B034);
#endif

#if FW_VERSION >= 282
s32 func_0000B19C(struct Unk_func_0000B19C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = arg0->unk100;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B1B4);
#endif

#if FW_VERSION == 282 || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B228);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_0000B228(void) {
    if (D_00047E40.unk0 != 0) {
        func_00007FCC(D_00047E40.unk0);
        D_00047E40.unk0 = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B264);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B270);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0000B270(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_00047E40.unk0 != 0) {
        var_a0 = D_00047E40.unk4;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B3C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEA8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000B290(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0000B2C4(arg0, arg1, arg2, arg3);
    } else {
        func_0000B4A4(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B2C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B4A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B7A4);

void func_0000B910(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_0000B944(arg0, arg1, arg2, arg3);
    } else {
        func_0000BA7C(arg0, arg1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B944);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BA7C);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF54);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B77C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B910);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000B290);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016060);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BEA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BF24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C008);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C138);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C1F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C29C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C3C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BB8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000BD3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF2C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF38);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF4C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF64);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00004AD0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF94);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFA8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C7C8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013D80);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C7D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C844);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CAC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CB48);
#endif

#if FW_VERSION == 271
M2C_UNK *func_0000CD48(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if ((arg0 & 0xFF) == 0) {
        var_v0 = &D_0001B154;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CBA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC20);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000162D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016634);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016678);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016B74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016E0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C554);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DAA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DC28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DD98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E014);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016EB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CD88);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F168);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000177EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017D10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D3AC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000181B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018578);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FD54);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DAE8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019028);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019168);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E5C8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019304);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000198F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001993C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A75C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A7C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F420);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A81C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AACC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F648);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AB9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AE30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F868);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AEA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AF70);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F950);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F9DC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AFE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B0E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B35C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FCF8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B5C4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B818);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010070);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BA68);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BC10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BD40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C328);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C7A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C894);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011064);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000111BC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CD90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D0B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D25C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C484);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C634);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF84);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AF90);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C484);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFA4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CCC8);
#endif

#if FW_VERSION < 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFBC);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFCC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C6F4);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001AFEC);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B000);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C7E4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C944);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000C9B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CC34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CCB4);
#endif

#if FW_VERSION >= 282
M2C_UNK *func_0000CD0C(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if ((arg0 & 0xFF) == 0) {
        var_v0 = &D_0001B0CC;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CD28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CDA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CE74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000CEB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D340);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D520);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D5CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D780);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000D908);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DA78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000DCF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000E4E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EB68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EE48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EFB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F2F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000F590);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FA34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FB3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FEAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000FF98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010118);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000104D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010518);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000105FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001074C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010EB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00010F70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011100);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011198);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000113B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011430);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000114A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001152C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000116B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011848);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000119C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011BC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011CD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00011DEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000122B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012674);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012748);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012AEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012BB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012D0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012E10);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0CC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B5E8);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B8D4);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B5F4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B600);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B60C);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B020);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B028);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B038);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B048);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B058);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B064);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B078);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B08C);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B09C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0A8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0B4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0C0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B154);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B074);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0CC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0D8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0E4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B0EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012FD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013290);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001343C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0000EBB4);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000125CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012610);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000126B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000126B0(s32 *arg0) {
    if ((*arg0 & 1) == 0) {

    } else {
        scePowerCancelRequest();
    }
    if (D_0004E420 != 0) {
        ((M2C_UNK (*)(M2C_UNK)) D_0004E420)(0);
    } else {
        sceKernelPowerUnlock(0);
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001270C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0001270C(s32 arg0, s32 arg1) {
    D_0004E41C = arg0;
    D_0004E420 = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B114);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012720);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00012720(void) {
    D_0004E424 = 0;
    D_0004E428 = sceKernelCreateEventFlag("SceVshRebootLock", 0x200U, 3U, NULL);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001275C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0001275C(void) {
    return sceKernelDeleteEventFlag(D_0004E428);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001277C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0001277C(void) {
    s32 temp_s0;
    s32 temp_v1;

    sceKernelWaitEventFlag(D_0004E428, 2U, 0, NULL, NULL);
    temp_s0 = sceKernelSuspendDispatchThread();
    temp_v1 = D_0004E424 + 1;
    D_0004E424 = temp_v1;
    if (temp_v1 == 1) {
        sceKernelClearEventFlag(D_0004E428, -2U);
    }
    sceKernelResumeDispatchThread(temp_s0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000127FC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012874);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00012874(void) {
    func_0001277C();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012890);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00012890(void) {
    func_000127FC();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000128AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000128AC(void) {
    func_000127FC();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000128C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000128C8(void) {
    sceKernelClearEventFlag(D_0004E428, -3U);
    return sceKernelWaitEventFlag(D_0004E428, 1U, 0, NULL, NULL);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001290C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004ABEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012A64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012B78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012B84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012B90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012B9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012BFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012C90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012C98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012CD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012CD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012CF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012D10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012D84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012DA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012DEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012E98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012F7C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AC34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00012F98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013310);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004ACC0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004ACDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004ACFC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AD34);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AD58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001332C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000134CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000134CC(void *arg0) {
    M2C_FIELD(&D_0004E458, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_0004E458, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_0004E458, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_0004E458, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_0004E458, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_0004E458, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_0004E458, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(&D_0004E458, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001351C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
M2C_UNK *func_0001351C(void) {
    return &D_0004E458;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013528);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00013528(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_0004E480)) {
        var_a1 = 0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013550);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000135DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013790);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AE60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013848);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001397C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013A10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013B14);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C14);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00013C14(void) {
    return D_0004E480;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013C68);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013EEC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00013EEC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 4) = arg0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013EF8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00013EF8(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F10);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00013F30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00013F38(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F4C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
M2C_UNK *func_00013F4C(M2C_UNK **arg0, s32 arg1) {
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

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00013F88);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 *func_00013F88(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_00013F4C(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = (s32**) func_00013F4C(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014000);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00014000(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014024);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014044);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014060);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014334);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014358);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001438C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014474);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014490);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001452C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001456C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000145AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000145F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014610);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014630);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000146A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000146C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014744);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014838);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AE9C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AEA0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AEAC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AF2C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AFB4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004AFEC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B068);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B0E8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B170);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B1A8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B224);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000148D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014A44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014C18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014C7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014CE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014D48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000150C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001592C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015B60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015FB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000166E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000167D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016820);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001689C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001696C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000169E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016AE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016C1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016C3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016D8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016FEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017178);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017184);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017328);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000173DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001748C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001781C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000178D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017940);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017A24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017A9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017AE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017AF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017BCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017CA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017F98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018124);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001817C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000181CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018268);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000182C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018378);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018478);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018570);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000185D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018658);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000186E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018744);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018754);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001877C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000187FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001880C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001881C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018888);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000188F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018A98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018BAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018BBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018CB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018DD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018DEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018E64);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B308);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B320);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B330);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B3C0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B3C4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B3C8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B428);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B458);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B460);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019000);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000190D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019268);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000197DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019968);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000199B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019C3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019CD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019DAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019FFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A178);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A328);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A37C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A428);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A4D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A898);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AB54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001ACB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AD14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AD70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AE2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001AF3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B02C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B204);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B488);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B664);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B70C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B7C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B884);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B8A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B924);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B9D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001B9F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BA40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BA90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BAA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BBD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BBF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BC18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BC90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BCA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BCE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BD34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BDC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BDD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BE10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BF04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001BF80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C01C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C03C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C120);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C1E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C208);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C298);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C328_v201);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C37C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C434);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C580);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C64C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C6E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C7C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C7FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C858);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C8D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C964);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001C9CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CA20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CA7C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B538);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B544);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B558);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CAD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CBA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CCB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CE64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CE98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001CEC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D088);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D0CC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5C4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5C8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5CC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5D0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5D4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5D8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5DC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5E0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5E4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B5E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D0F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D188);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D374);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D3AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D3EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D424);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D498);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D4FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D524);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D534);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D55C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D564);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D570);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D580);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D624);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D62C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D634);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D63C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D69C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D6A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D6AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D6B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D778);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D7C4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B640);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D808);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D93C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D9B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001D9F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DA40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DB4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DCE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DD54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DDC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001DFC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E004);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E218);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E45C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E72C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E7E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E89C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E8F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E930);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001ECA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001EE74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001EF90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001EFFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F01C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F03C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F0A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F11C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F188);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F1FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F218);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F234);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F250);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F26C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F288);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F2A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F2B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F2DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F364);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F3EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F430);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B718);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B758);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B798);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F474);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F4C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F4D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F4E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F50C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F568);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F60C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F638);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F660);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F6B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F6BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F6C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F820);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F920);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001F9D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FA24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FAAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FDD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FE54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FEA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FED4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FEE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FF50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001FFD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020000);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020070);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020080);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000200C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000200F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020108);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020138);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000202B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000202D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000202F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020348);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002039C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020560);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002064C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000206C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000207D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002087C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002093C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002094C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020974);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000209E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000209F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020A30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020A58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020A94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020AB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020AD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020AFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020B24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020B60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020B9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020C18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020C80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020CA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020CD0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B7B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B7C8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B7D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020CF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020D40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020D6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020DCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020E00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00020F0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021044);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021094);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B7E4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B7F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000210E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021138);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002118C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021214);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002129C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021394);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000214E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021604);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021638);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021658);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021688);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000216B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000218F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002196C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021A30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021ACC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021BC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021BE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021C10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021C40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021C70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021CA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021D54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021E00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021E20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021E40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021E78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021EEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021F24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021F74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00021FB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022108);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022274);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000222E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000224C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002263C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002267C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000226BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000226D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000226E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022700);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002271C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000227A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000227DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000227F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000227FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022808);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000228B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022958);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000229D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022A50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022AD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022AF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022C30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022CA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022D44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022E18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022F4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00022FD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023054);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000230B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000231A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000231FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023254);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023378);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000234A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023738);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000239B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023A94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023BBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023C34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023D88);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B808);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023E5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023F64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023F90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00023FC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024090);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024114);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024134);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024154);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000241D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024204);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024214);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024254);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024290);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000242F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024384);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024418);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024520);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024600);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024674);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024750);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002475C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024808);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024870);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000248AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024904);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024954);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000249A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024A0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024AE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024B14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024B88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024C84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024C94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024CC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00024E1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025014);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000250C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000251F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025220);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002522C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B820);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B868);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B874);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B880);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025238);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025560);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025888);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025974);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025A60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025B54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025CA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025CCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025D50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025E00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00025E38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002600C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002614C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026454);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002651C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026634);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000266E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026738);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000267C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026858);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000268F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026988);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026A84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026C20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026CAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026E08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026E48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026EA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00026F9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027014);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027104);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027388);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002759C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027814);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000278D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027BFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027C64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027C88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027D34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027E6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027F10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00027FA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028040);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000280DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028178);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000281D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028270);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028304);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002834C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000283EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028480);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002851C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028560);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002898C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028A08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028A48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028A84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028AC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028AFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028B3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028B78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028BB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028BF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028C2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028C68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028CA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028CE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028D1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028D58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028D94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028DD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028E30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028E64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028EC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028EF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028F28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028F38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00028F78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029064);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000290D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000291E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000292A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000292B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029304);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029310);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002932C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029388);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000293A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000293C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000293DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029420);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029460);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002949C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000294DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029500);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029524);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029548);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002956C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029590);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000295B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000295D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000295FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029618);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029634);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029650);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002966C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000296AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000296EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002972C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002976C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029774);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002977C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029784);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002978C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029794);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002979C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297EC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B900);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004B9D8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BA68);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BA70);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BA7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000297F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029B74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029BD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029C34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029C74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029E60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029E68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029EE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029F7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029FA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00029FF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A04C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A0C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A110);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A120);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A160);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A24C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A2C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A380);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A4F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A500);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A55C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A5A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A604);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A660);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A6D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A718);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A7C4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BA98);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BAA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A810);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A858);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A89C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A990);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002A9E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AAB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AB7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AC48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AD14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AD84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002ADF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AE64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002AED4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B1E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B280);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B2E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B3BC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BBB8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BBCC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BBE0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BBF4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC08);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC1C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC20);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC34);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC48);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC5C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC70);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC84);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BC98);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCA4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCB0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCC8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCD4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCE0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCE8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BCF0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD00);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD10);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD18);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD24);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD2C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD38);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD48);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD54);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD64);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD70);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD7C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD90);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BD9C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BDB8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BDC4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BDD8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BDEC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BE00);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BE14);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BE28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B3DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002B738);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002BB2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002BCA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002BD0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002BD70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002C01C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002C104);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002C420);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002C568);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CA68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CAF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CB80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CBB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CBE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CC08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CC38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CD14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CDD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CEEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002CF30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D11C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D198);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D1FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D250);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D2D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D7A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D92C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002D97C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002DBE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002DE98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002E154);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002E69C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002E6EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002E73C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002E8BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002EE04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002F2E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002F630);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002F864);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002F9A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002FA60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002FD8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0002FFA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000300C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030424);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000306E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000307DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030838);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000308B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000308E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000309CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030C5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030CD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030F38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00030F58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031094);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000310DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031310);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000313A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000314DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031590);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000315CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000316F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031754);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031780);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003178C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031798);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000317E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031830);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031890);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000318F0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BE50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031A34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031AA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031B88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031CC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031F20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031F28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00031FB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032058);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003207C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032084);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000320B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000320BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000320C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003215C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000321F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032244);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BE70);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BEB8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BEC4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032300);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000325E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032774);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000327CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032824);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032884);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000328B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000328D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032AB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032B90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032C10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032C78);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032DBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032EEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032F28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032F90);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032FA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00032FE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003304C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000330D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033154);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000331E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003327C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000333E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033478);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003357C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000335B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000335D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000335F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033650);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033670);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BF0C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BF20);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004BF30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033694);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000337DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033804);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003382C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033868);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033894);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000338B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000338D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000338FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033944);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003398C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000339C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033A0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033A44);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C018);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033A7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033AF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033B3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033B84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033BCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033C04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033C5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033C8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033CE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033D1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033DE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033E38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033EE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033F20);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00033F64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034038);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000340A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034174);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000341E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003425C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034358);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034454);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003453C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034564);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034664);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034764);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000348B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000348E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034940);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003499C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034A08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034A60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034AD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034BBC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034BE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034C80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034CAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034DA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034E80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00034F14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000351F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000353A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035478);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035484);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000354B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035518);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035660);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000356A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035748);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000357EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035890);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035920);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000359B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035A40);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035AD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035B74);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035C10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035C44);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035CA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035D34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035E0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035E94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00035F50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036000);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000361B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036220);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036258);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036318);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036340);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000363E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003657C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000367A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000368BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000369CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036A30);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036B94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036CF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036D8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036DAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036E08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036E64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036ED0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00036F3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037110);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037270);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000372B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037430);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037498);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037510);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037548);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003760C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037748);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000379C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037B04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037C50);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037D94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00037ED8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C0F0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C108);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038024);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000380D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038198);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000381A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038214);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000382B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000382E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038308);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000383AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038670);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000386F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000387C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038BAC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038C6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038CA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038CDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038D38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038DC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00038E60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039018);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000390F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000391E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000392D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039528);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C130);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C140);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C160);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C170);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000395B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000396CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000396EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003970C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039734);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039744);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039754);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003977C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039794);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000398D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003996C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000399E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039A4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039AA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039B18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039B3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039BC0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00039E84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A128);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A1A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A1C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A1C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A2DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A2FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A31C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A378);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A3D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A3F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A40C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A4A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A624);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A730);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A7B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A7DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A7FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A818);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003A92C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AC70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AD1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003ADC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AE5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AF08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AF28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AF48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003AFC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B054);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B0BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B0F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B150);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B158);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003B158(void) {
    func_0003B238();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B174);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003B174(void) {
    func_0003B238();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B190);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B1AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003B1AC(s32 arg0) {
    func_0003B480(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B1C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B200);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B238);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B2BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B350);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B480);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B4A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B4F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B55C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B594);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C1B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C1E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B5CC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B778);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B814);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B83C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B888);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B8F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B998);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0003B998(s8 *arg0) {
    if (arg0 != NULL) {
        func_0003C044(arg0);
    }
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003B9BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BAB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BBC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BC54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BD64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BDE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BE74);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BF10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0003BF10(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BF38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003BF7C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C044);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003C044(s8 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C04C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C1EC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0003C1EC(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_0004EE54;
    }
    if ((D_0004EE50 == 0) || (arg0 != D_0004EE50)) {
        return -1;
    }
    temp_v1 = D_0004EE54;
    D_0004EE50 = 0;
    D_0004EE54 = temp_v1 + arg0;
    return temp_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C234);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C298);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003C5B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003CA68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003CBAC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016B08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003CCCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003CF38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D178);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D1A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D1C4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D4B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0003D4B0(void) {
    func_0003CBAC(D_0004EE4C);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000172EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D4D4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C190);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C19C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C1B0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C1B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C1E4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C204);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D51C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D6F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D7E4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D838);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D858);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D8E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D978);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003D9D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DA48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DAEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DB68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DC80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DD64);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DE38);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DE5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DF4C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003DFB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E004);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E0A8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E114);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E1BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E2E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E320);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E3D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E444);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E4D0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003E4D0(s32 arg0, s32 arg1) {
    func_0003E3D0(arg1, arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E4F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E514);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E538);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E580);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003E580(void *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E5A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E5EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E650);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E684);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E6BC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C3B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003E6E4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EA80);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0003EA80(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EA88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EBBC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EC6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003ECD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003ED58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003ED84);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EDB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EDE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EE08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EE4C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EE98);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0003EE98(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EEC0);
#endif

#if FW_VERSION == 271
s32 func_0003EEC0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 1, 1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_0003EEC0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1) & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EEF4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0003EEF4(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 8) & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EF24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EF4C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000181D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003EFE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F114);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F244);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
u8 *func_0003F244(u8 *arg0, u8 *arg1) {
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F27C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F318);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F394);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F3FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000188B0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F564);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F5E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F638);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F680);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F750);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F770);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003F844);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FA70);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FBF0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FCCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FCFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FE60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FED0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FF04);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0003FF6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004014C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000401A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000401EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000402C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040394);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040410);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040470);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000404BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040508);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004051C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019AD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040EE0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040F54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00040FE8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041008);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C414);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B348);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B25C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B754);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C41C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C600);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C604);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C608);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C60C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041028);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041158);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00041158(void) {
    func_00041028(1, 0xFFFF);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041178);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00041178(void) {
    func_00041028(0, 0xFFFF);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041198);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000411DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041224);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041258);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004128C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000412B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000412DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041354);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041398);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041424);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041448);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004146C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041488);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000414A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000414C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000414F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041530);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041568);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041594);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000415C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000415EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000416E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041738);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000417D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041890);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041898);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000418A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000418C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041AA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041BCC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041BF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041C28);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C640);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C644);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004C944);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CCB8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CCD8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CCF8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CD18);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CD5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041CD4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041D68);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CD88);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CDC8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CDDC);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CE34);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CE8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041D88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00041F38);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000420B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004233C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042408);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042424);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042568);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004260C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042640);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042650);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042694);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042790);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042A6C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042D1C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042D28);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00042DB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043130);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043240);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000433B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000434C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000436F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043788);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043BA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043BD8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043CE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043D0C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043D34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00043D5C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044000);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000440EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044150);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000441D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004427C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000442E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044410);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000444F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044538);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044584);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000445BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044634);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004467C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004469C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000446CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044778);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000447C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044824);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044850);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000448C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004490C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000449BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000449E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044A58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044AFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044C18);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044C70);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044CFC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044D34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044D98);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044DC8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044E00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044E60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044EE4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044F48);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00044F68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045068);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000450AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000450F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045110);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004513C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045184);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000451E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045264);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000452B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045300);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045330);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045360);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000453A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045458);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000454A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000454C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045508);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004556C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000456D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004570C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004587C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000458B8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CEB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045AB4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045B10);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00045F3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00046358);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000466B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00046A54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00047104);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00047958);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000479D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00047A58);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00047D88);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000480D0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000483F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000484F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000485AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048900);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048958);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000489D4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048A2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048A8C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048AD0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048B3C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048BB8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048C24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048CB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048DF8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00048F60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049220);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049288);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000492A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000492C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000492DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000492F8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049314);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049330);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0004934C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049368);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049384);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000493B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000493CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000493E8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049404);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049420);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E584);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001E5DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049A80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049B08);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00049C24);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0004CF00);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001411C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014160);

void func_00014200(s32 *arg0) {
    if ((*arg0 & 1) == 0) {

    } else {
        scePowerCancelRequest();
    }
    if (D_0001C240 != 0) {
        ((M2C_UNK (*)(M2C_UNK)) D_0001C240)(0);
    } else {
        sceKernelPowerUnlock(0);
    }
}

void func_0001425C(s32 arg0, s32 arg1) {
    D_0001C23C = arg0;
    D_0001C240 = arg1;
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B114);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014270);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000142CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001434C);

void func_000143C4(void) {
    func_000142CC();
}

void func_000143E0(void) {
    func_0001434C();
}

void func_000143FC(void) {
    func_0001434C();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014418);

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

D_0001C24C_s *func_000144AC(void) {
    return &D_0001C24C;
}

s32 func_000144B8(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_0001C274)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000144E0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001456C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014720);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B130);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000147D8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001490C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000149A0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014AA4);

s32 func_00014BA4(void) {
    return D_0001C274;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BB0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014BF8);

void func_00014E7C(struct Unk_func_00014E7C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = arg0;
}

void func_00014E88(struct Unk_func_00014E88_0 *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk4 = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00014EA0);

void func_00014EC0(struct Unk_func_00014EC0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

s32 func_00014EC8(struct Unk_func_00014EC8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}

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

s32 *func_00014F18(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_00014EDC(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = (s32**) func_00014EDC(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}

void func_00014F90(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

void func_00014FB4(void) {
    func_00015094();
}

void func_00014FD0(void) {
    func_00015094();
}

void func_00014FEC(void) {
    func_000152DC();
}

void func_00015008(void) {
    func_000152DC();
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015024);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001505C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015094);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015118);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000151AC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000152DC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015304);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015350);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000153B8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000153F0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B164);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B190);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015428);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015698);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000156E4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001574C);

s32 func_000157F4(s8 *arg0) {
    if (arg0 != NULL) {
        func_00015E84(arg0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015818);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001590C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015A14);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015AA0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015BA8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015C24);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015CB8);

s32 func_00015D54(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015D7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015DC0);

void func_00015E84(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00015E8C);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001605C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000160C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000163CC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016870);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000169B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016ACC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016D2C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016F68);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016F94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00016FB4);

s32 func_0001728C(void) {
    func_000169B4(D_0001C280);
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000172B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000172FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000174C0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000175B0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017604);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001763C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017684);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000176EC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017760);

void func_000177EC(s32 arg0, M2C_UNK arg1) {
    func_000176EC(arg1, arg0);
}

void func_00017810(void *arg0, s32 arg1) {
    func_00017760(arg0, 0, arg1);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017830);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017854);

void func_0001789C(struct Unk_func_0001789C_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000178BC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017908);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001796C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000179A0);

void func_000179D8(void) {
    func_00017760(&D_0001FA8C, 0, 0x2020);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017A00);

s32 func_00017D9C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017DA4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017ED8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00017FF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001806C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018098);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000180FC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001811C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018160);

void func_000181AC(struct Unk_func_000181AC_0 *arg0) {
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        arg0->unk8 = 0;
    }
}

s32 func_000181D4(struct Unk_func_000181D4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = __builtin_allegrex_ext(arg0->unk8, 1, 1);
    }
    return var_v1;
}

s32 func_00018204(struct Unk_func_00018204_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = arg0->unk8 & 1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018234);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001825C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000182C4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000182F4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018424);

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

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001858C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018628);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018670);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000186A4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001870C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018874);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_000188F0);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018948);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018990);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018A60);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018A80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018B54);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018D80);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018F00);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018F7C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00018FDC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019028);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019074);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019088);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A34);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019A94);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019AEC);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B0C);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2B8);
#endif

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001BB5C);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B87C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B328);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B308);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B2C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4A4);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4A8);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4B0);

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4B4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019B2C);

void func_00019C5C(void) {
    func_00019B2C(1, 0xFFFF);
}

void func_00019C7C(void) {
    func_00019B2C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019C9C);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_00019CF4);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A2C8);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A350);

INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A464);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_auto_dialog", func_0001A5C8);
#endif

INCLUDE_RODATA("nonmatchings/savedata_auto_dialog", D_0001B4E8);
