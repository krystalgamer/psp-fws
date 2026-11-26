/* cflags: -Os */
#include "common.h"
#include "netplay_server_plus_utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000024);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", module_start);

s32 module_stop(void) {
    func_00003C08();
    return 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000015C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000001F0);

s32 func_000001FC(void) {
    func_0000015C();
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000040E0);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000040E4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000040F4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004108);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004120);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_0000412C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_0000413C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004154);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_0000416C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004184);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004198);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000041B8);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000041CC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000041DC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000041FC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004204);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042B4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042B8);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042E4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042E4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042F4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042F8);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004308);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004340_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004340_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004294);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000043C4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042A8);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042AC);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042B0);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042C8);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042E4);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000042FC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_0000431C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004340);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004364);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004380);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000043A0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000021C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000002B4);

void func_00000470(void) {
    D_00004894 = 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000047C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000004A0);

void func_0000052C(void) {
    func_000004A0(1, 0xFFFF);
}

void func_0000054C(void) {
    func_000004A0(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000056C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000059C);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000618);
#else
void func_00000618(s32 arg0, s32 arg1) {
    scePaf_8B38372A(D_000049C0, arg0);
    scePaf_39E62C88(D_000049C0, arg1, 0, 0);
    scePaf_A013540A(D_000049C0, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000674);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000780);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000820);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000008AC);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000008E0);

void func_00000BBC(void) {
    func_00000674(3);
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000BD8);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000D10);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000043FC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004414);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004448);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004460);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004478);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_0000449C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000044C0);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000044D8);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000044F0);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004508);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004518);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000E04);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000EB8);

#if FW_VERSION >= 350
s32 func_00000F3C(void) {
    func_00002CBC();
    scePaf_82CF97B0(0xC8);
    scePaf_D1447DB7(D_000049C0);
    return 0;
}
#else
s32 func_00000F3C(void) {
    func_00002CBC();
    scePaf_C4BAD564(0xC8);
    scePaf_27F64616(D_00004890);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000F70);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000F88);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00000FD4);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001024);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000120C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000012F0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001390);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001424);

void func_00001480(void) {
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001488);

void func_000014F0(void) {
}

void func_000014F8(void) {
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001500);

#if FW_VERSION >= 350
void func_00001530(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_0000161C(arg0, arg1, var_v0);
}
#else
void func_00001530(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_0000161C(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001580);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000161C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000016D0);

s32 func_00001884(u32 arg0, struct Unk_func_00001884_1 *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 < 4U) {
        func_00001CC8();
        func_00001DC4(arg0, arg1);
        func_00001EF0(arg0, arg1);
        func_00001D28(arg0, arg1->unkC);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000045AC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000045CC);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000045DC);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000018F0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001A4C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001B2C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001C3C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001C6C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001CC8);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001D28);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001DC4);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001EF0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00001F48);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002004);

void func_00002020(void) {
    func_00001F48(1, 0xFFFF);
}

void func_00002040(void) {
    func_00001F48(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002060);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000020E0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002138);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_000045F0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002198);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000240C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002494);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000024C4);

void func_000024F4(void) {
    func_000033BC();
}

void func_00002510(void) {
    func_00003450();
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000252C);

s32 func_00002588(struct Unk_func_00002588_0 *arg0) {
    return arg0->unk4;
}

s32 func_00002590(struct Unk_func_00002590_0 *arg0) {
    return arg0->unk8;
}

s32 func_00002598(struct Unk_func_00002598_0 *arg0) {
    return arg0->unkC;
}

s32 func_000025A0(struct Unk_func_000025A0_0 *arg0) {
    return arg0->unk10;
}

s32 func_000025A8(struct Unk_func_000025A8_0 *arg0) {
    return arg0->unk14;
}

s32 func_000025B0(struct Unk_func_000025B0_0 *arg0) {
    return arg0->unk18;
}

s32 func_000025B8(struct Unk_func_000025B8_0 *arg0) {
    return arg0->unk1C;
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000025C0);
#else
void func_000025C0(void *arg0, s32 arg1) {
    scePaf_39E62C88(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000025E4);
#endif

#if FW_VERSION < 350
void func_000025E4(struct Unk_func_000025E4_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#else
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002600);
#endif

#if FW_VERSION < 350
void func_00002600(struct Unk_func_00002600_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#else
void func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    scePaf_CD216C47(arg0->unk4);
}
#endif

#if FW_VERSION < 350
void func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002638);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002660);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000269C);

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004650);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002778);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002AF4);
#else
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002AD8);
#endif

s32 func_00002C9C(void) {
    sceNetAdhocDownload_4C542FD1();
    return 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002CBC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002EDC);
#else
void func_00002DE4(void) {
    sceNetAdhocDownload_48F87AB1();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002E00);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00002F9C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000313C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003254);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000032DC);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_0000334C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000033BC);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003450);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003470);
#else
void func_00003470(struct Unk_func_00003470_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00003708((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000034A8);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000034F4);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003600);

void func_000036C4(struct Unk_func_000036C4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000036D4);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003708);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003790);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003824);

#if FW_VERSION >= 350
void func_00003898(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_00003AA0(arg0, arg1, var_v0);
}
#else
void func_00003898(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_00003AA0(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_000038E8);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003A0C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003AA0);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003B4C);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003B74);

INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003BB0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_plus_utility", func_00003C08);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_plus_utility", D_00004750);
