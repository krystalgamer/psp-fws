/* cflags: -Os */
#include "common.h"
#include "dd_helper_utility_decls.h"

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000024);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000000AC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", module_start);

s32 module_stop(void) {
    func_00004100();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000015C);

void func_00000198(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_000007F0((s32) &D_00004B7C, &sp0);
    func_000007C0(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_000007F0((s32) &D_00004B88, &sp0);
    func_000007C0(&sp0);
}

void func_00000204(void) {
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000020C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000248);

s32 func_00000320(void) {
    func_000004C0(0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000340);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000368);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004738);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004748);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000003B0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000454);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000004C0);

void func_00000550(void) {
}

void func_00000558(void) {
    func_000004C0(2);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000574);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000580);

void func_000005A4(struct Unk_func_000005A4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000047C8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_000005BC(struct Unk_func_000005BC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000047C8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_000005D4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
}

void func_000005E4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
}

void func_000005F4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000061C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004770);

void func_0000063C(void) {
    struct Unk_func_0000063C_temp_v0 *temp_v0;

    temp_v0 = scePaf_D4FAE7D0("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        scePaf_5EBC648F(temp_v0, temp_v0->unk1B8);
    }
    sceHtmlViewerHelper_05E0C3D4(0);
}

void func_00000674(struct Unk_func_00000674_0 *arg0) {
    sceHtmlViewerHelper_05E0C3D4(1);
    scePaf_CAF05F1D(arg0->unk4, &D_00004770);
}

void func_000006AC(struct Unk_func_000006AC_0 *arg0) {
    sceHtmlViewerHelper_F27998C2(arg0->unk8);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000006C8);

void func_00000750(void) {
    func_000006C8(1, 0xFFFF);
}

void func_00000770(void) {
    func_000006C8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000790);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000007C0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000007F0);

void func_0000088C(void) {
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000894);

s32 func_000008C4(s32 arg0, struct Unk_func_000008C4_1 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (arg1->unk4 * 2) + 2;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != 0) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, arg1->unk0);
        func_00001CFC(arg0, temp_v0);
        scePaf_545FE2DA(temp_v0);
    }
    return arg0;
}

void func_00000944(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (scePaf_FD4C9F47(arg1) * 2) + 0x20;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != 0) {
        scePaf_49A81B18(temp_v0, temp_s0, arg1, arg2);
        func_00001D4C(arg0, temp_v0, scePaf_FD4C9F47(temp_v0));
        scePaf_545FE2DA(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000009E4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000AF8);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000BE4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000CD0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000D68);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000E00);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000EA0);

void func_00000F18(s32 arg0) {
    func_000026C0(arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000F34);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004794);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047AC);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047B4);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047C8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047E0);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047EC);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000047F8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004804);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_0000480C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00000FD8);

void func_00001120(void *arg0) {
    func_000021C8(arg0 + 0xC, M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001140);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000011A4);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000048C8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000048CC);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000048E8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000048FC);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_0000490C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_0000491C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004928);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004940);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_0000495C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004978);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001280);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000013F4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000014AC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000156C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000015E0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001770);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001A28);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001BBC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001BE4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001C28);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001C84);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001CFC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001D4C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001E18);

void func_00001ECC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00001F1C(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001F1C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00001FC8);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002088);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000020C4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002100);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002128);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002150);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000218C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000021C8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_000049F8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A10);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002210);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002368);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A28);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A30);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002390);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000023B8);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000023E0);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A40);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002408);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002430);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000026C0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000026CC);

s32 *func_00002760(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000292C(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002798);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000282C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000028AC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_0000292C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002A20);

void func_00002A3C(s32 arg0) {
    func_00002C24();
    func_00002FDC(arg0);
}

void func_00002A68(s32 arg0) {
    func_00002C24();
    func_00002FDC(arg0);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002A94);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002C24);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002CB0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002F48);

void func_00002FC0(void) {
    func_00003240();
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00002FDC);

void func_00002FF8(void) {
    func_000032C4();
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003014);

void func_000030DC(void) {
    func_000032F0();
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000030F8);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003160);

s32 *func_00003208(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00003738(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003240);

void func_00003298(s32 *arg0) {
    func_00003014();
    scePaf_7EC15225(*arg0);
}

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000032C4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000032F0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003348);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003538);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003738);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003810);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000038EC);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003A24);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003B5C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003BB0);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003C04);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003C58);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003D1C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003D8C);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003E00);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003E74);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003EB4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003EF4);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_00003F38);

INCLUDE_ASM("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", func_000040A8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A54);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A5C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A64);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A6C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A74);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004A9C);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004AC8);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004AD0);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004AD4);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004AE0);

INCLUDE_RODATA("tmp/asm/282/dd_helper_utility/nonmatchings/dd_helper_utility", D_00004AF0);
