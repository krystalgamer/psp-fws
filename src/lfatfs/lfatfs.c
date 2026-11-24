/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lfatfs_decls.h"

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000C94C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00000000);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000C9C4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CA1C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CA28);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CA38);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000004C4);

s32 func_00000584(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EB24, 1, NULL);
        if (temp_v0 != 0) {
            KDebugForKernel_84F370BC("lfatfs.c:%s:sceKernelWaitSema -> 0x%08x\n", "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000004C4();
            sceKernelSignalSema(D_0000EB24, 1);
        }
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00000604);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD10);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD18);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD24);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD2C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD34);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", module_start);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD94);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CD9C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CDA8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CDB4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CDBC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CDC8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00000C1C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CE20);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CE50);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", syslib_ADF12745);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", sceLFatFs_driver_933F6E29);

s32 sceLFatFs_driver_8F0560E0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00000EF8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00000FF8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001134);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001620);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000168C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000018E4);

s32 func_00001980(struct Unk_func_00001980_0 *arg0) {
    void **temp_v0;
    void *temp_a1;
    struct Unk_func_00001980_temp_a2 *temp_a2;

    if (arg0 != NULL) {
        temp_a2 = arg0->unk8;
        temp_a1 = arg0->unk0;
        temp_a2->unk8 = (s32) (temp_a2->unk8 - 1);
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_a1, void ***, 4) = (void **) arg0->unk4;
        } else {
            D_0000EDB0 = arg0->unk4;
        }
        temp_v0 = arg0->unk4;
        if (temp_v0 == NULL) {
            D_0000EDAC = temp_a1;
        } else {
            *temp_v0 = temp_a1;
        }
        arg0->unk0 = (void *) D_0000EDB4;
        D_0000EDB4 = arg0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000019E8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001AD0);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001BFC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CF1C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001C8C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001CE0);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CF5C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CF6C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CF9C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001D34);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001E48);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00001F30);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000CFEC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002034);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000217C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000022B8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000241C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002534);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000265C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002774);

s32 func_0000286C(struct Unk_func_0000286C_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000EB24;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_0000CF6C, &D_0000CF5C, temp_v0);
        sceKernelPowerUnlock(0);
        KDebugForKernel_84F370BC(&D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009F04();
        func_00001980(arg0->unk10);
        func_00009F04();
        sceKernelSignalSema(D_0000EB24, 1);
        sceKernelPowerUnlock(0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000293C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002A30);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002B34);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002C6C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002CAC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002CE4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00002F6C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003074);

s32 func_000031DC(void) {
    return 0x80010086;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000031E8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000033EC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003580);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003674);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000372C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000037B4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003890);

void func_00003AA0(struct Unk_func_00003AA0_0 *arg0) {
    func_000042D8(arg0->unk0, arg0->unk4, arg0->unk8, arg0->unkC);
}

void func_00003ACC(s32 arg0) {
    func_000045C8(arg0);
}

void func_00003AE8(struct Unk_func_00003AE8_0 *arg0) {
    func_0000168C(M2C_FIELD(arg0->unk0, s32 *, 0x10), arg0->unk4, arg0->unk8, 0);
}

void func_00003B14(struct Unk_func_00003B14_0 *arg0) {
    func_0000466C(arg0->unk0, arg0->unk4, arg0->unk8);
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003B3C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003B70);

void func_00003B90(struct Unk_func_00003B90_0 *arg0) {
    func_00004CFC(arg0->unk0, arg0->unk4, arg0->unk8);
}

void func_00003BB8(struct Unk_func_00003BB8_0 *arg0) {
    func_00005110(arg0->unk0, arg0->unk4);
}

void func_00003BD8(struct Unk_func_00003BD8_0 *arg0) {
    func_00005388(arg0->unk0, arg0->unk4);
}

void func_00003BF8(struct Unk_func_00003BF8_0 *arg0) {
    func_00005470(arg0->unk0, arg0->unk4);
}

void func_00003C18(struct Unk_func_00003C18_0 *arg0) {
    func_000055FC(arg0->unk0, arg0->unk4, arg0->unk8);
}

void func_00003C40(struct Unk_func_00003C40_0 *arg0) {
    func_00005708(arg0->unk0, arg0->unk4, arg0->unk8, arg0->unkC);
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003C6C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003CA0);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D218);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D244);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D250);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D274);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D284);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D290);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D2A0);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003CC0);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003DB8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00003EA4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004180);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004268);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000042D8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000045C8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000466C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000047E4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004874);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004918);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004BA8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00004CFC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00005110);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00005388);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00005470);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000055FC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00005708);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00005D18);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006600);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006708);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000675C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006940);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000069F8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006A84);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006B14);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00006C18);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007054);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007188);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007304);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007600);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007774);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007934);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007BC8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007D00);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00007EB4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000808C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000816C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008504);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000860C);

s32 func_00008718(struct Unk_func_00008718_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000872C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000087C4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D874);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008894);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008A68);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D8C0);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D8EC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D8F4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D910);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D940);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D94C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008AE4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008B74);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D9CC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000D9FC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA0C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA1C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA3C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA48);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA50);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008D28);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DA98);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DAA8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DAD0);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DAEC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008DC0);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00008EDC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009050);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DCB4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DCE0);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DCF8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DD0C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DD3C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DD5C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DD84);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000920C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000959C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_000098E8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009B30);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009C2C);

void func_00009D0C(void) {
}

void func_00009D14(void) {
}

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DEE8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DEFC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DF10);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DF44);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DF50);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009D1C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009E74);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009EBC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009F04);

s32 func_00009F74(void) {
    IoFileMgrForKernel_8E982A74(&D_0000DA50);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009F98);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000DF88);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_00009FD4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E03C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E068);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E0AC);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E0B8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E0C4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E0F4);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E100);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A2D4);

s32 func_0000A320(void) {
    return 0x80010086;
}

s32 func_0000A32C(void) {
    return 0x80010086;
}

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E130);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A338);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A36C);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E160);

s32 func_0000A3A0(struct Unk_func_0000A3A0_0 *arg0) {
    KDebugForKernel_84F370BC(&D_0000E160, "df_dclose", **arg0->unk8);
    return 0x80010086;
}

s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0) {
    KDebugForKernel_84F370BC(&D_0000E160, "df_dread", **arg0->unk8);
    return 0x80010086;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A418);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A460);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A494);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A4C8);

s32 func_0000A4FC(void) {
    return 0x80010086;
}

s32 func_0000A508(void) {
    return 0x80010086;
}

s32 func_0000A514(void) {
    return 0x80010086;
}

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A520);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A5C0);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A658);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A6D8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000A7B4);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000AA60);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000AC78);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E5D8);

INCLUDE_RODATA("tmp/asm/282/lfatfs/nonmatchings/lfatfs", D_0000E5F8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000AF14);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B190);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B328);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B4E8);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B720);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B7CC);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B87C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000B938);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000BA8C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000BB1C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000BC3C);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000BD54);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000BE44);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000C254);

INCLUDE_ASM("tmp/asm/282/lfatfs/nonmatchings/lfatfs", func_0000C300);
