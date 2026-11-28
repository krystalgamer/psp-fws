/* compiler[280]: 1.9.2 */
/* cflags[280]: -Os -mext */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -Os -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -Os -mext */
/* cflags: -Os */
#include "common.h"
#include "msstor_decls.h"

#if FW_VERSION == 201
s32 func_000001BC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_v1 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_v1 = D_00009888->unk4(D_00009B50, arg0 + D_00009B50->unk4, arg1, arg2);
        }
    }
    return var_v1;
}

s32 func_00000220(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_t0;

    var_t0 = -0xD;
    if (D_00009B50->unk18 != 0) {
        var_t0 = -0xC;
        if (D_00009B50->unk1C == 0) {
            var_t0 = D_00009888->unk4(D_00009B50, arg0, arg1, arg2);
        }
    }
    return var_t0;
}

void func_00000288(void) {
    D_00009888->unk10(D_00009B50);
}

void func_000002B8(void) {
    D_00009888->unk14(D_00009B50);
}

void func_000002E8(void) {
    D_00009888->unk18(D_00009B50);
}

void func_00000318(s32 arg0, s32 arg1, s32 arg2) {
    func_00000340(arg0 + D_00009B50->unk4, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000340);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_000004B0);

void func_00000518(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E90) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_00001884(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000548);

s32 func_00000654(SceMSstorDev *dev, s32 on) {
    u8 param;
    s32 ret;

    dev->parallel = on;
    if (on == 0) {
        param = 0x80;
    } else if (dev->mediaType2 & 0x40) {
        param = 0;
    } else {
        param = 0x88;
    }
    ret = func_00000978(dev, 0x10, 1, &param);
    if (ret != 0) {
        return ret;
    }
    return func_000016E4(dev, on);
}

s32 func_000006DC(SceMSstorDev *dev, s32 cmd, u32 addr, u16 count, s32 timeout) {
    u8 regs[2];
    s32 ret;

    ret = func_0000083C(dev, 2, 1, regs);
    if (ret != 0) {
        return ret;
    }
    regs[0] &= 2;
    if (regs[0] != 0) {
        timeout += 500;
    }
    ret = func_0000172C(dev, cmd, addr, count);
    if (ret != 0) {
        return ret;
    }
    return func_00000784(dev, timeout, &regs[1]);
}

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000784);

#if FW_VERSION < 201
s32 func_0000083C(SceMSstorDev *dev, s32 addr, s32 size, u8 *buf) {
    s32 ret;

    if ((u32)(size - 1) >= 0x100) {
        return -1;
    }
    ret = func_000018D8(dev, addr, size, 0x10, 0xF);
    if (ret != 0) {
        return ret;
    }
    return func_0000181C(dev, size, buf);
}
#else
INCLUDE_ASM("nonmatchings/msstor_0001BC", func_0000083C);
#endif

s32 func_000008B8(SceMSstorDev *dev, u8 cmd, s32 timeout) {
    u8 intr;

    return func_000077C4(sceMScmTPCSetCmd(dev->hc, cmd, &intr, timeout * 1000));
}

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_000008F0);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000978);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000A84);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000D20);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000DD4);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000F0C);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00000FD0);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_000010B0);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00001160);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00001288);

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_00001400);

s32 func_00001474(SceMSstorDev *dev) {
    return func_000006DC(dev, 0x11, 0, 0, 1000);
}

INCLUDE_ASM("nonmatchings/msstor_0001BC", func_0000149C);

s32 func_00001558(struct Unk_func_00001558_0 *arg0) {
    return arg0->unk4E60;
}

#if FW_VERSION == 201
void func_00001560(s32 arg0) {
    func_000008B8(arg0, 0x11, 0x3E8);
}

void func_00001580(s32 arg0) {
    func_000008B8(arg0, 0x25, 0x5DC);
}
#endif
