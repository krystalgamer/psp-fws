#include "common.h"
#include "camera_plugin_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000634);

void func_000006C8(void) {
    if (D_00024D80 != 0) {
        func_00001F14(D_00024D80, 0);
        D_00024D80 = 0;
    }
    if (D_00166970 > 0) {
        sceKernelDeleteThread(D_00166970);
        D_00166970 = -0x6F;
    }
    if (D_00166980 > 0) {
        sceKernelDeleteCallback(D_00166980);
        D_00166980 = -0x6F;
    }
}
#else
void func_00000758(s32 arg0) {
    s32 temp_v0;

    if (D_00024D80 != 0) {

    } else {
        temp_v0 = scePaf_B7E6052B(0x340);
        func_00001DA8(temp_v0, arg0, 0);
        D_00024D80 = temp_v0;
        func_00001EB4((struct Unk_func_00001EB4_0 *) temp_v0);
    }
}
#endif

#if FW_VERSION == 352
void func_00000758(s32 arg0) {
    s32 temp_v0;

    if (D_00024D80 != 0) {

    } else {
        temp_v0 = scePaf_61A8E8EC(0x340);
        func_00001DA8(temp_v0, arg0, 0);
        D_00024D80 = temp_v0;
        func_00001ED0((void *) temp_v0);
    }
}
#endif

void func_000007C8(void) {
    func_00001EB4((void *) D_00024D80);
}

void func_000007EC(void) {
    func_00001ED0((void *) D_00024D80);
}

#if FW_VERSION == 352
void func_00000810(void) {
    func_00001EEC((void *) D_00024D80);
}
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000834);

s32 func_00000870(s32 arg0) {
    func_00001FB8(arg0, D_00024D80);
    return arg0;
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000008A0);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000008C8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000AE0);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000008F0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000CF0);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000984);
#endif

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000C48);

INCLUDE_RODATA("nonmatchings/camera_plugin_000634", D_00021698);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00000C9C);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000013DC);
#else
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001158);
#endif

#if FW_VERSION < 352
void func_00001294(void) {
    sceVshCommonGui_441D55D7(0);
    if (D_00165444 == 0) {

    } else {
        func_000027BC((s32) &D_000216CC, func_0000C7E0()->unk114, 0);
    }
}
#else
void func_00001294(void) {
    sceVshCommonGui_891DD627(0);
    if (D_0016697C == 0) {

    } else {
        func_000027BC((s32) &D_000216CC, func_0000C7E0()->unk114, 0);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/camera_plugin_000634", D_000216CC);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000012E4);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001514);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_000016EC);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001960);

void func_000019F0(void) {
    if (D_00024D84 != 0) {
        if (D_00166961 == 0) {

        } else {
            func_000016EC();
        }
        D_00024D84 = 0;
        D_00166968 = 0;
        sceKernelWaitThreadEnd(D_00166970, NULL);
    }
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001A54);

u8 func_00001AA8(void) {
    return D_00166961;
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001AB4);

void func_00001B3C(void) {
    func_00001AB4(1, 0xFFFF);
}

void func_00001B5C(void) {
    func_00001AB4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001B7C);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001BAC);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001BFC);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001CB0);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001CE0);

s32 func_00001D0C(void) {
    return D_00024AF4;
}

s32 func_00001D18(void) {
    return D_00024AF4;
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001D24);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001DA8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001E54);
#else
void func_00001E54(M2C_UNK **arg0) {
    *arg0 = &D_000217F8;
    scePaf_9E0CA28F();
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001E7C);
#else
void func_00001E7C(M2C_UNK **arg0) {
    *arg0 = &D_000217F8;
    scePaf_9E0CA28F();
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001EB4);

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001ED0);
#else
void func_00001EB4(struct Unk_func_00001EB4_0 *arg0) {
    func_0001A4BC(arg0->unk330);
}

void func_00001ED0(struct Unk_func_00001ED0_0 *arg0) {
    func_0001A4F8(arg0->unk330);
}

void func_00001EEC(struct Unk_func_00001EEC_0 *arg0) {
    func_0001A504(arg0->unk330);
}
#endif

void func_00001F08(struct Unk_func_00001F08_0 *arg0, s32 arg1) {
    arg0->unk330->unk20 = arg1;
}

INCLUDE_ASM("nonmatchings/camera_plugin_000634", func_00001F14);

void func_00001F30(struct Unk_func_00001F30_0 *arg0, s8 arg1) {
    arg0->unk330->unk44 = arg1;
}

void func_00001F3C(struct Unk_func_00001F3C_0 *arg0, s8 arg1) {
    arg0->unk330->unk46 = arg1;
}

void func_00001F48(struct Unk_func_00001F48_0 *arg0) {
    func_0001A50C(arg0->unk330);
}

void func_00001F64(struct Unk_func_00001F64_0 *arg0) {
    func_0001A600(arg0->unk330);
}
