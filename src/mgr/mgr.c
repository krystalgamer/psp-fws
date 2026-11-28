/* cflags: -Os */
#include "common.h"
#include "mgr_decls.h"

s32 sceMgrLock(void) {
    s32 ret = sceKernelWaitSema(g_mgrCtrl.sema, 1, NULL);
    if (ret == 0x800201B5) {
        return 0x80500002;
    }
    if (ret == 0x80020199) {
        return 0x80501001;
    }
    if (ret != 0) {
        return ret;
    }
    sceKernelPowerLock(0);
    return 0;
}

s32 sceMgrPollLock(void) {
    s32 ret = sceKernelPollSema(g_mgrCtrl.sema, 1);
    if (ret == 0x800201AD) {
        return 0x80502001;
    }
    if (ret == 0x800201B5) {
        return 0x80500002;
    }
    if (ret == 0x80020199) {
        return 0x80501001;
    }
    if (ret != 0) {
        return ret;
    }
    sceKernelPowerLock(0);
    return 0;
}

s32 sceMgrUnLock(void) {
    sceKernelPowerUnlock(0);
    return sceKernelSignalSema(g_mgrCtrl.sema, 1);
}

void func_0000011C(void) {
    MgrCtrl *ctrl;

    *(volatile u32 *)0xBE100000 = 0x8000;
    __asm__ volatile("sync");
    ctrl = &g_mgrCtrl;
    if (ctrl->cb != NULL) {
        ctrl->cb(ctrl->cbArg);
    }
}

void func_0000015C(s32 (*intrCb)(void *), void *arg) {
    MgrCtrl *ctrl = &g_mgrCtrl;

    ctrl->intrCb = intrCb;
    ctrl->cbArg = arg;
}

s32 func_00000170(s32 unused, MgrCtrl *ctrl) {
    if (ctrl->intrCb == NULL || ctrl->intrCb(ctrl->cbArg) == 0) {
        *(volatile u32 *)0xBE100000 = 0x80;
        __asm__ volatile("sync");
        sceKernelSetEventFlag(ctrl->evf, 2);
    }
    return -1;
}

s32 func_000001C8(void) {
    return (*(volatile u32 *)0xBE100018 & 6) ? 0x80501001 : 0;
}

s32 func_000001E4(void) {
    s32 ret;

    if (*(volatile u32 *)0xBE100018 & 2) {
        ret = 0x80501001;
    } else if (*(volatile u32 *)0xBE100018 & 0x100) {
        ret = 0x80501001;
    } else {
        ret = (*(volatile u32 *)0xBE100018 & 0x200) ? 0x80503002 : 0;
    }
    return ret;
}

s32 func_00000234(void) {
    s32 ret;

    if (*(volatile u32 *)0xBE100018 & 0x2000) {
        ret = 0x80503004;
    } else {
        ret = (*(volatile u32 *)0xBE100018 & 0x1000) ? 0 : 0x80501001;
    }
    return ret;
}

void func_0000026C(void) {
    *(volatile u32 *)0xBE100000 = 8;
}

void func_0000027C(u32 cmd) {
    *(volatile u32 *)0xBE100010 = 0x100;
    *(volatile u32 *)0xBE100020 = cmd;
    __asm__ volatile("sync");
}

void func_000002A4(u32 *arg0) {
    *(volatile u32 *)0xBE100040 = arg0[0];
    *(volatile u32 *)0xBE100044 = arg0[1];
}

void func_000002C8(u32 *arg0) {
    *(volatile u32 *)0xBE100060 = arg0[0];
    *(volatile u32 *)0xBE100064 = arg0[1];
}

void func_000002EC(u32 *arg0) {
    *(volatile u32 *)0xBE100050 = arg0[0];
    *(volatile u32 *)0xBE100054 = arg0[1];
}

void func_00000310(u32 *arg0) {
    arg0[0] = *(volatile u32 *)0xBE100070;
    arg0[1] = *(volatile u32 *)0xBE100074;
}

void func_00000334(u32 *arg0) {
    *(volatile u32 *)0xBE100060 = arg0[0];
    *(volatile u32 *)0xBE100064 = arg0[1];
    *(volatile u32 *)0xBE100068 = arg0[2];
    *(volatile u32 *)0xBE10006C = arg0[3];
}

void func_00000378(u32 *arg0) {
    *(volatile u32 *)0xBE100050 = arg0[0];
    *(volatile u32 *)0xBE100054 = arg0[1];
    *(volatile u32 *)0xBE100058 = arg0[2];
    *(volatile u32 *)0xBE10005C = arg0[3];
}

void func_000003BC(u32 *arg0) {
    arg0[0] = *(volatile u32 *)0xBE100070;
    arg0[1] = *(volatile u32 *)0xBE100074;
    arg0[2] = *(volatile u32 *)0xBE100078;
    arg0[3] = *(volatile u32 *)0xBE10007C;
}

#if FW_VERSION < 340
void func_00000400(u32 arg0) {
    volatile u32 *reg = (volatile u32 *)0xBE100008;

    *reg &= ~7;
    *reg |= arg0;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00000400);
#endif

s32 func_00000424(s32 arg0, s32 arg1, s32 arg2) {
    u32 val = 0;
    s32 ret;

    if (arg0 >= 0) {
        ret = func_00002748(arg0);
        if (ret < 0) {
            return ret;
        }
        val = ret;
    }
    if (arg1 >= 0) {
        ret = func_00002748(arg1);
        if (ret < 0) {
            return ret;
        }
        val |= ret;
    }
    if (arg2 >= 0) {
        ret = func_00002748(arg2);
        if (ret < 0) {
            return ret;
        }
        val |= ret;
    }
    val |= *(volatile u32 *)0xBE100008 & 7;
    *(volatile u32 *)0xBE100008 = val;
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_000004CC);

INCLUDE_ASM("nonmatchings/mgr", func_0000052C);

s32 func_0000058C(s32 arg0, s32 arg1) {
    s32 ret = func_00000424(arg1, -1, -1);

    if (ret < 0) {
        return ret;
    }
    ret = func_000004CC(arg0);
    if (ret < 0) {
        return ret;
    }
    func_0000027C(0x4001);
    return 0;
}

s32 func_000005EC(s32 arg0, s32 arg1) {
    s32 ret = func_00000424(arg1, -1, -1);

    if (ret < 0) {
        return ret;
    }
    ret = func_0000052C(arg0);
    if (ret < 0) {
        return ret;
    }
    func_0000027C(0x4002);
    return 0;
}

s32 func_0000064C(void) {
    u32 res;
    u32 timeout = 1000000;
    s32 ret;

    if ((*(volatile u32 *)0xBE100018 & 1) == 0) {
        return 0;
    }
    ret = sceKernelWaitEventFlag(g_mgrCtrl.evf, 2, 0x11, &res, &timeout);
    if (ret == 0x800201A8) {
        return 0x80502002;
    }
    if (*(volatile u32 *)0xBE100018 & 1) {
        return 0x80502002;
    }
    return 0;
}

s32 func_000006CC(u32 cmd) {
    s32 ret;

    func_0000027C(cmd);
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    return func_000001C8();
}

s32 func_00000708(u32 *arg0, u32 cmd) {
    s32 ret;

    func_000002EC(arg0);
    func_0000027C(cmd);
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    return func_000001C8();
}

s32 func_00000754(u32 cmd0, u32 cmd1, u32 cmd2) {
    s32 ret;

    func_0000027C(cmd0);
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    func_0000027C(cmd1);
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    func_0000027C(cmd2);
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    return func_000001C8();
}

s32 func_000007DC(u32 cmd, s32 count) {
    s32 ret;
    s32 i;

    for (i = count - 1; i >= 0; i--) {
        func_0000027C(cmd);
        ret = func_0000064C();
        cmd++;
        if (ret < 0) {
            return ret;
        }
    }
    return func_000001C8();
}

s32 func_00000840(u32 *arg0, u32 cmd, s32 count) {
    func_000002EC(arg0);
    return func_000007DC(cmd, count);
}

void sceMgrReset(void) {
    func_00002588();
}

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mgr", D_0000A940);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A944);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A958);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A970);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A990);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A9A8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A9C0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A9D8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000A9EC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AA00);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AA14);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AA2C);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AA3C);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AD64);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AD84);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AD94);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AD98);

INCLUDE_RODATA("nonmatchings/mgr", D_0000ADA8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000ADE4);

INCLUDE_RODATA("nonmatchings/mgr", D_0000ADF0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000ADF8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AE1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_000008A4);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00000898);
#endif

#if FW_VERSION < 250
s32 sceMgrInit(void) {
    s32 state;
    s32 ret;
    s32 intr;
    u8 seed[16];

    state = sceKernelSuspendDispatchThread();
    if (g_mgrCtrl.initCount > 0) {
        g_mgrCtrl.initCount++;
        sceKernelResumeDispatchThread(state);
        return 0;
    }
    sceMgrReset();
    func_00001980();
    if (g_mgrCtrl.sema <= 0) {
        ret = sceKernelCreateSema("SceMgrDrv", 0x100, 1, 1, NULL);
        if (ret < 0) {
            goto fail_resume;
        }
        g_mgrCtrl.sema = ret;
    }
    if (g_mgrCtrl.evf <= 0) {
        ret = sceKernelCreateEventFlag("SceMgrDev", 0, 0, NULL);
        if (ret < 0) {
            goto fail_resume;
        }
        g_mgrCtrl.evf = ret;
    }
    ret = func_0000199C();
    if (ret < 0) {
        goto fail_resume;
    }
    g_mgrCtrl.initCount = 1;
    intr = sceKernelCpuSuspendIntr();
    sceKernelRegisterIntrHandler(9, 1, func_00000170, &g_mgrCtrl, NULL);
    sceKernelEnableIntr(9);
    sceKernelCpuResumeIntr(intr);
    func_000023F4();
    sceKernelResumeDispatchThread(state);
    ret = func_00001308();
    if (ret < 0) {
        Kprintf("no MG-R DKS available %x\n", ret);
        goto fail;
    }
    ret = sceMgrInitSeed(seed);
    if (ret >= 0) {
        return 0;
    }
    goto fail;

fail_resume:
    if (state >= 0) {
        sceKernelResumeDispatchThread(state);
    }
fail:
    func_00000AC4();
    return ret;
}

const char D_0000948C[4] = "";
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrInit);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
s32 sceMgrAesInit(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000008A4();
    var_v0 = 0;
    if (temp_v0 < 0) {
        func_00000AC4();
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrAesInit(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00000898();
    var_v0 = 0;
    if (temp_v0 < 0) {
        func_00000AC4();
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

void func_00000AC4(void) {
    sceKernelDisableIntr(9);
    sceKernelReleaseIntrHandler(9);
    func_00001980();
    func_00001A44();
    sceMgrReset();
    if (g_mgrCtrl.sema > 0) {
        sceKernelDeleteSema(g_mgrCtrl.sema);
        g_mgrCtrl.sema = 0;
    }
    if (g_mgrCtrl.evf > 0) {
        sceKernelDeleteEventFlag(g_mgrCtrl.evf);
        g_mgrCtrl.evf = 0;
    }
    g_mgrCtrl.initCount = 0;
}

void sceMgrEnd(void) {
    if (sceMgrLock() < 0) {
        return;
    }
    if (g_mgrCtrl.initCount >= 2) {
        g_mgrCtrl.initCount--;
        sceMgrUnLock();
    } else {
        sceKernelPowerUnlock(0);
        func_00000AC4();
    }
}

#if FW_VERSION >= 250
void sceMgrAesEnd(void) {
    sceMgrEnd();
}
#endif

s32 sceMgrGetHwVersion(u32 *version) {
    if (version == NULL) {
        return 0x80501003;
    }
    *version = (*(volatile u32 *)0xBE100098 << 16) | (*(volatile u32 *)0xBE100030 & 0xFFFF);
    return 0;
}

#if FW_VERSION < 340
s32 func_00000B7C(void) {
    return 0;
}
#else
s32 func_00000BF8(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00000C00);

s32 func_00000DBC(s32 id, void *buf, s32 size) {
    s32 args[3];

    args[0] = id;
    args[1] = (s32)buf;
    args[2] = size;
    return sceKernelExtendKernelStack(0x5000, func_00000C00, args);
}

void func_00000DFC(MgrSeed *out) {
    u32 clk;
    u32 t[2];
    MgrSeed *seed = &g_mgrSeed;

    if ((seed->w[0] | seed->w[1]) == 0) {
        func_00000DBC(0x2C, seed, 8);
        clk = sceKernelGetCpuClockCounter();
        seed->w[0] ^= clk;
        seed->w[1] ^= ~clk;
        sceKernelGetSystemTime(t);
        seed->w[0] ^= t[1];
        seed->w[1] ^= t[0];
    }
    if (out != NULL) {
        out->v = g_mgrSeed.v;
    }
}

void func_00000EC0(MgrSeed *seed) {
    if (seed != NULL) {
        g_mgrSeed.v = seed->v;
    }
}

INCLUDE_RODATA("nonmatchings/mgr", D_0000AE68);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AE6C);

s32 func_00000EE8(s32 id, void *mac) {
    u32 out[4];
    u8 buf[16];
    u64 key = D_0000AE68;
    s32 i;
    s32 end;
    s32 ret;

    if (id & 0xF) {
        return 0x80502000;
    }
    end = (id + 0x80) >> 1;
    out[2] = 0;
    out[3] = 0;
    for (i = 0x40; i < end; i += 8) {
        ret = func_00000DBC(i, buf, 0x10);
        if (ret < 0) {
            return ret;
        }
        ret = sceMgrDESEncrypt(out, buf, 0x10, &key, &out[2]);
        if (ret < 0) {
            return ret;
        }
    }
    if (memcmp(&out[2], mac, 8) != 0) {
        Kprintf("bad DKS MAC\n");
        return 0x80502000;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00000FE8);

INCLUDE_ASM("nonmatchings/mgr", func_00001308);

#if FW_VERSION < 340
s32 *func_000013C8(void) {
    s32 *var_v1;

    var_v1 = NULL;
    if (D_00009C0C != 0) {
        var_v1 = &D_0000B6C8;
    }
    return var_v1;
}

s32 *func_000013E8(void) {
    s32 *var_v1;

    var_v1 = NULL;
    if (D_00009C0C != 0) {
        var_v1 = &D_00009C48;
    }
    return var_v1;
}

M2C_UNK *func_00001394(void) {
    return &D_00009C58;
}

s32 *func_00001414(void) {
    return &D_00009C38;
}

s32 *func_00001420(void) {
    return &D_00009C40;
}

s32 func_000013B8(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80501004;
    if ((u32) (arg1 - 8) < 0x28U) {
        var_v1 = func_00000DBC(0x1C8 - (arg1 * 8), arg0, 0x10);
    }
    return var_v1;
}
#else
M2C_UNK *func_000013C8(void) {
    M2C_UNK *var_v1;

    var_v1 = NULL;
    if (D_0000B6AC != 0) {
        var_v1 = &D_0000B6C8;
    }
    return var_v1;
}

M2C_UNK *func_000013E8(void) {
    M2C_UNK *var_v1;

    var_v1 = NULL;
    if (D_0000B6AC != 0) {
        var_v1 = &D_0000B6E8;
    }
    return var_v1;
}

M2C_UNK *func_00001408(void) {
    return &D_0000B6F8;
}

M2C_UNK *func_00001414(void) {
    return &D_0000B6D8;
}

M2C_UNK *func_00001420(void) {
    return &D_0000B6E0;
}

s32 func_0000142C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80501004;
    if ((u32) (arg1 - 8) < 0x28U) {
        var_v1 = func_00000DBC(0x1C8 - (arg1 * 8), arg0, 0x10);
    }
    return var_v1;
}
#endif

s32 sceMgrGetLeafID(u64 *out) {
    u64 *id = (u64 *)func_000013E8();

    if (id == NULL) {
        return 0x80501001;
    }
    out[0] = id[0];
    out[1] = id[1];
    return 0;
}

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/mgr", sceMgrGetInitialEKB);
#else
u32 sceMgrGetInitialEKB(s32 arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_v1;
    u32 var_a2;

    var_a2 = arg1;
    var_v1 = 0x80501001;
    if (D_00009C0C != 0) {
        if ((u32) D_00009C10 < var_a2) {
            var_a2 = D_00009C10;
        }
        temp_v0 = func_00000DBC(0x190, arg0, (s32) var_a2);
        var_v1 = temp_v0;
        if (temp_v0 >= 0) {
            var_v1 = (s32) D_00009C10;
        }
    }
    return (u32) var_v1;
}

s32 sceMgrGetDefaultEKB(void *buf, u32 size) {
    s32 ret;
    u32 len;
    u32 id = D_00009C14 >> 1;

    len = size;
    ret = 0x80501001;
    if (D_00009C0C != 0) {
        if (D_00009C18 < len) {
            len = D_00009C18;
        }
        ret = func_00000DBC(id, buf, len);
        if (ret >= 0) {
            ret = D_00009C18;
        }
    }
    return ret;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/mgr", sceMgrGetDefaultEKB);
#endif

INCLUDE_ASM("nonmatchings/mgr", func_000015A4);

#if FW_VERSION < 340
s32 func_00001868(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 var_t4;
    void *temp_a4;
    void *temp_v0;
    void *temp_v1;

    temp_a4 = arg4 + 0x20;
    temp_v1 = arg4 + 0x2C;
    temp_v0 = temp_v1 + ((M2C_FIELD(arg4, u8 *, 0x20) << 0x18) | (M2C_FIELD(temp_a4, u8 *, 1) << 0x10) | (M2C_FIELD(temp_a4, u8 *, 2) << 8) | M2C_FIELD(temp_a4, u8 *, 3));
    var_t4 = 0x80501002;
    if ((u32) (arg4 + arg5) >= (u32) temp_v0) {
        var_t4 = func_000015A4(arg3, (s32) temp_v1, (s32) temp_v0, arg0, arg1, arg2);
    }
    return var_t4;
}
#else
s32 func_000018F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, struct Unk_func_000018F4_4 *arg4, s32 arg5) {
    s32 var_t4;
    struct Unk_func_000018F4_temp_a4 *temp_a4;
    void *temp_v0;
    void *temp_v1;

    temp_a4 = &arg4->unk20;
    temp_v1 = (u8 *)arg4 + 0x2C;
    temp_v0 = temp_v1 + ((arg4->unk20 << 0x18) | (temp_a4->unk1 << 0x10) | (temp_a4->unk2 << 8) | temp_a4->unk3);
    var_t4 = 0x80501002;
    if ((u32) ((u8 *)arg4 + arg5) >= (u32) temp_v0) {
        var_t4 = func_000015A4(arg3, (s32) temp_v1, (s32) temp_v0, arg0, arg1, arg2);
    }
    return var_t4;
}
#endif

void func_00001980(void) {
    sceKernelIsIntrContext();
}

INCLUDE_ASM("nonmatchings/mgr", func_0000199C);

void func_00001A44(void) {
    func_0000015C(0, 0);
    if (g_mgrIb2Ctrl.sema != 0) {
        sceKernelDeleteSema(g_mgrIb2Ctrl.sema);
        g_mgrIb2Ctrl.sema = 0;
    }
    if (g_mgrIb2Ctrl.evf != 0) {
        sceKernelDeleteEventFlag(g_mgrIb2Ctrl.evf);
        g_mgrIb2Ctrl.evf = 0;
    }
}

void func_00001AAC(void) {
    *(volatile u32 *)0xBE100080 = 0x8000;
    __asm__ volatile("sync");
}

s32 func_00001AC8(MgrIb2Ctrl *ctrl) {
    if ((*(volatile u32 *)0xBE100090 & 0x100) && (*(volatile u32 *)0xBE100084 & 2)) {
        *(volatile u32 *)0xBE100080 = 1;
        sceKernelSetEventFlag(ctrl->evf, 1);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00001B24);

#if FW_VERSION < 340
void func_00001B90(void) {
    *(volatile u32 *)0xBE100010 &= ~0x1000;
    __asm__ volatile("sync");
    if (*(volatile u32 *)0xBE100084 & 1) {
        func_00001AAC();
    }
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00001B90);
#endif

#if FW_VERSION < 340
void func_00001BD8(u32 arg0, u32 arg1) {
    *(volatile u32 *)0xBE100000 = 0x80;
    *(volatile u32 *)0xBE100010 = 0x1100;
    *(volatile u32 *)0xBE100080 = 3;
    *(volatile u32 *)0xBE100090 = 0x100;
    *(volatile u32 *)0xBE100094 = arg1;
    sceKernelClearEventFlag(g_mgrIb2Ctrl.evf, 0);
    *(volatile u32 *)0xBE100088 = arg0;
    __asm__ volatile("sync");
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00001BD8);
#endif

#if FW_VERSION < 340
s32 func_00001BE8(u32 *dst, u32 *src, u32 size) {
    s32 n;
    s32 i;
    s32 ret;

    while (size != 0) {
        n = (size < 0x801) ? size : 0x800;
        for (i = 0; i < n; i += 4) {
            *(volatile u32 *)0xBE1000A0 = *src++;
        }
        ret = func_00001B24();
        if (ret != 0) {
            return ret;
        }
        for (i = 0; i < n; i += 4) {
            *dst++ = *(volatile u32 *)0xBE1000A0;
        }
        size -= n;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
s32 func_00001D40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    func_00001BD8(arg0, arg3);
    temp_s0 = func_00001BE8(arg1, arg2, arg3);
    func_00001B90();
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00001D9C);
#endif

#if FW_VERSION < 250
s32 func_00001CB4(u32 *dst, u32 *src, u32 size) {
    return func_00001BE8(dst, src, size);
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00001C64);

s32 func_00001D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    func_00001BD8(arg0, arg3);
    temp_s0 = func_00001C64(arg1, arg2, arg3);
    func_00001B90();
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00001D88);
#endif

#if FW_VERSION < 250
s32 func_00001E3C(u32 mode, u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv, s32 keyReg) {
    s32 ret;

    if (size == 0) {
        return 0;
    }
    if (size & 3) {
        return 0x80501002;
    }
    if (((u32)dst | (u32)src | (u32)key | (u32)iv) & 3) {
        return 0x80501003;
    }
    if (dst == NULL || src == NULL) {
        return 0x80501000;
    }
    ret = sceMgrLock();
    if (ret != 0) {
        return ret;
    }
    func_00001AAC();
    if (keyReg >= 0) {
        ret = func_00000424(keyReg, -1, -1);
        if (ret < 0) {
            goto end;
        }
    }
    if (key != NULL) {
        func_000002A4(key);
    }
    if (iv != NULL) {
        func_000002C8(iv);
    }
    func_00001BD8(mode, size);
    ret = func_00001CB4(dst, src, size);
    func_00001B90();
end:
    sceMgrUnLock();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00001E3C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00001F94);
#endif

#if FW_VERSION < 250
s32 func_00001E14(u32 mode, u32 cmd, u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv) {
    s32 ret;

    if (size == 0) {
        return 0;
    }
    if (size & 3) {
        return 0x80501002;
    }
    if (((u32)dst | (u32)src | (u32)key | (u32)iv) & 3) {
        return 0x80501003;
    }
    if (dst == NULL || src == NULL || key == NULL) {
        return 0x80501000;
    }
    ret = sceMgrLock();
    if (ret != 0) {
        return ret;
    }
    func_00001AAC();
    func_00000378(key);
    func_0000027C(cmd);
    if (iv != NULL) {
        func_00000334(iv);
    }
    func_00001BD8(mode, size);
    ret = func_00001CB4(dst, src, size);
    func_00001B90();
    sceMgrUnLock();
    return ret;
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00001F80);
#endif

s32 sceMgrDESDecrypt(u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv) {
    return func_00001E3C((iv != NULL) ? 0x20 : 0x10, dst, src, size, key, iv, -1);
}

s32 sceMgrDESEncrypt(u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv) {
    return func_00001E3C(1 | ((iv != NULL) ? 0x20 : 0x10), dst, src, size, key, iv, -1);
}

s32 sceMgrDESDecryptBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    var_v0 = 0x80501000;
    if (arg4 != 0) {
        var_v0 = 0x80501006;
        if (arg3 >= 0) {
            var_v0 = func_00001E3C(0x30, arg0, arg1, arg2, 0, arg4, arg3);
        }
    }
    return var_v0;
}

s32 sceMgrDESEncryptBlock(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    var_v0 = 0x80501000;
    if (arg4 != 0) {
        var_v0 = 0x80501006;
        if (arg3 >= 0) {
            var_v0 = func_00001E3C(0x31, arg0, arg1, arg2, 0, arg4, arg3);
        }
    }
    return var_v0;
}

#if FW_VERSION < 201
s32 sceMgrAESDecrypt(u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv) {
    return func_00001E14(0x1000 | ((iv != NULL) ? 0x20 : 0x10), 0x8001, dst, src, size, key, iv);
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrAESDecrypt);
#endif

#if FW_VERSION < 250
s32 sceMgrAESEncrypt(u32 *dst, u32 *src, u32 size, u32 *key, u32 *iv) {
    return func_00001E14(0x1001 | ((iv != NULL) ? 0x20 : 0x10), 0x8001, dst, src, size, key, iv);
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrAESEncrypt);
#endif

#if FW_VERSION < 250
void func_000023F4(void) {
    s32 n;
    s32 i;

    n = 0;
    for (i = 0; i < 4; i++) {
        g_mgrKeyRegs[n].offset = i << 6;
        g_mgrKeyRegs[n].type = 0;
        D_00009C7C[i] = n;
        g_mgrKeyRegs[n].flags = 0;
        g_mgrKeyRegs[n].slot = &D_00009C7C[i];
        n++;
    }
    for (i = 0; i < 8; i++) {
        g_mgrKeyRegs[n].type = 1;
        g_mgrKeyRegs[n].offset = i << 10;
        D_00009C80[i] = n;
        g_mgrKeyRegs[n].flags = 0;
        g_mgrKeyRegs[n].slot = &D_00009C80[i];
        n++;
    }
    for (i = 0; i < 2; i++) {
        g_mgrKeyRegs[n].type = 2;
        g_mgrKeyRegs[n].offset = i << 4;
        D_00009C88[i] = n;
        g_mgrKeyRegs[n].flags = 0;
        g_mgrKeyRegs[n].slot = &D_00009C88[i];
        n++;
    }
    D_00009550 = sceMgrAllocKeyReg(0);
    D_00009554 = sceMgrAllocKeyReg(1);
    D_00009C78 = 0;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_000023F4);
#endif

#if FW_VERSION < 250
void func_00002588(void) {
    s32 i;

    for (i = 0; i < 14; i++) {
        if (g_mgrKeyRegs[i].flags & 1) {
            sceMgrFreeKeyReg(i);
        }
    }
    D_00009C78 = 0;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00002588);
#endif

#if FW_VERSION < 250
s32 sceMgrAllocKeyReg(s32 type) {
    s8 *pool;
    s32 count;
    s32 intr;
    s32 i;
    s32 id;

    switch (type) {
    case 0:
        pool = D_00009C7C;
        count = 4;
        break;
    case 1:
        pool = D_00009C80;
        count = 8;
        break;
    case 2:
        pool = D_00009C88;
        count = 2;
        break;
    case -1:
    case 3:
    default:
        return 0x80501005;
    }
    intr = sceKernelCpuSuspendIntr();
    for (i = 0; i < count; i++) {
        id = pool[i];
        if (!(g_mgrKeyRegs[id].flags & 1)) {
            g_mgrKeyRegs[id].flags |= 1;
            sceKernelCpuResumeIntr(intr);
            return id;
        }
    }
    sceKernelCpuResumeIntr(intr);
    return 0x80501006;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrAllocKeyReg);
#endif

#if FW_VERSION < 250
s32 sceMgrFreeKeyReg(s32 id) {
    if (id >= 14) {
        return 0x80501006;
    }
    if (!(g_mgrKeyRegs[id].flags & 1)) {
        return 0x80501006;
    }
    g_mgrKeyRegs[id].flags &= ~1;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrFreeKeyReg);
#endif

#if FW_VERSION < 250
s32 func_00002748(s32 id) {
    if (id >= 14) {
        return 0x80501006;
    }
    if (!(g_mgrKeyRegs[id].flags & 1)) {
        return 0x80501006;
    }
    return g_mgrKeyRegs[id].offset;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00002748);
#endif

#if FW_VERSION < 250
s32 func_00002788(s32 type) {
    switch (type) {
    case 0:
        D_00009C78 = 0;
        return D_00009550;
    case 1:
        return D_00009554;
    case -1:
    case 2:
    case 3:
    default:
        return 0x80501005;
    }
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00002788);
#endif

#if FW_VERSION < 340
s32 func_00002498(s32 arg0, u8 *arg1) {
    return 0x80500001;
}

void func_000024A4(s32 arg0, void *arg1) {
}
#else
s32 func_000027E0(void) {
    return 0x80500001;
}

void func_000027EC(void) {
}
#endif

s32 sceMgrInitSeed(MgrSeed *seed) {
    u8 *leaf = (u8 *)func_000013C8();
    u32 *key = (u32 *)func_00001420();
    u64 tmp[2];
    s32 ret;

    if (leaf == NULL) {
        return 0x80501001;
    }
    func_00000DFC(seed);
    ret = sceMgrLock();
    if (ret < 0) {
        return ret;
    }
    ret = func_00000708((u32 *)(leaf + 8), 0x2300);
    if (ret < 0) {
        goto end;
    }
    ret = func_00000708((u32 *)leaf, 0x2301);
    if (ret < 0) {
        goto end;
    }
    ret = func_00000708(key, 0x1101);
    if (ret < 0) {
        goto end;
    }
    ret = func_00002934(tmp, (u64 *)seed);
    if (ret < 0) {
        goto end;
    }
    func_00000EC0(seed);
end:
    sceMgrUnLock();
    return ret;
}

#if FW_VERSION < 340
s32 sceMgrRandom(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = func_00002934(arg0, arg1);
        sceMgrUnLock();
    }
    return var_s2;
}
#else
s32 sceMgrRandom(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = func_00002934(arg0, arg1);
        sceMgrUnLock();
    }
    return var_s2;
}
#endif

s32 func_00002934(u64 *out, u64 *seed) {
    s32 ret;

    func_000002EC((u32 *)seed);
    ret = func_000006CC(0x1202);
    if (ret < 0) {
        return ret;
    }
    func_00000310((u32 *)out);
    if (*out != 0) {
        *seed ^= *out;
    } else {
        ((u32 *)seed)[0] = 0;
        ((u32 *)seed)[1] = 0;
        *(u8 *)seed = 0x80;
    }
    return ret;
}

#if FW_VERSION < 340
s32 sceMgrCreateKc(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            temp_v0_3 = func_000006CC(0x1210);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x1202);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000310(arg1);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}
#else
s32 sceMgrCreateKc(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            temp_v0_3 = func_000006CC(0x1210);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x1202);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000310(arg1);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}
#endif

s32 sceMgrEncryptKcWithKse(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000006CC(0x2401);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}

s32 sceMgrDecryptKcWithKse(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s1 = func_000006CC(0x2400);
        }
        sceMgrUnLock();
    }
    return var_s1;
}

s32 sceMgrEncryptKc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000007DC(0x1460, 3);
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgrUnLock();
    }
    return var_s2;
}

s32 sceMgrDecryptKc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s2 = func_000007DC(0x1450, 3);
        }
        sceMgrUnLock();
    }
    return var_s2;
}

INCLUDE_ASM("nonmatchings/mgr", sceMgrEncryptKicv);

s32 sceMgrDecryptKicv(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg2, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000004CC(arg0);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_000002EC(arg1);
                temp_v0_4 = func_000007DC(0x1470, 3);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_000002EC(arg1 + 8);
                    var_s1 = func_000007DC(0x1480, 3);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}

#if FW_VERSION < 340
s32 sceMgrGenerateKb(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg3, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002A4(arg1);
            func_000002EC(arg2);
            var_s2 = func_000006CC(0x1102);
        }
        sceMgrUnLock();
    }
    return var_s2;
}
#else
s32 sceMgrGenerateKb(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg3, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002A4(arg1);
            func_000002EC(arg2);
            var_s2 = func_000006CC(0x1102);
        }
        sceMgrUnLock();
    }
    return var_s2;
}
#endif

s32 sceMgrGenerateICV(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 var_s5;

    temp_v0 = sceMgrLock();
    var_s5 = temp_v0;
    if (temp_v0 >= 0) {
        var_s5 = func_00002F84(arg0, arg1, arg2, arg3, arg4);
        sceMgrUnLock();
    }
    return var_s5;
}

INCLUDE_ASM("nonmatchings/mgr", func_00002F84);

INCLUDE_ASM("nonmatchings/mgr", func_0000310C);

s32 func_000031C8(u32 *dst, u64 *src, s32 count, u32 cmd) {
    s32 ret;

    func_000002EC((u32 *)src++);
    count--;
    func_0000027C(cmd);
    while (count != 0) {
        func_000002EC((u32 *)src++);
        ret = func_0000064C();
        count--;
        if (ret < 0) {
            return ret;
        }
        func_0000027C(cmd);
    }
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    func_00000310(dst);
    return 0;
}

#if FW_VERSION < 340
s32 sceMgrDecryptWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, u32 arg3, s32 arg4) {
    s32 *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 1);
        }
    } else {
        var_a7 = sceMgrDESDecryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrEncryptWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, u32 arg3, s32 arg4) {
    s32 *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 0);
        }
    } else {
        var_a7 = sceMgrDESEncryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrGenerateMACWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 *var_a2;
    s32 var_v1;

    var_a2 = arg2;
    var_v1 = 0x80501006;
    if (arg4 >= 0) {
        if (var_a2 == NULL) {
            var_a2 = &D_0000AEE0;
        }
        var_v1 = func_0000341C(arg0, arg1, (s32) var_a2, arg3, arg4, 0, 2);
    }
    return var_v1;
}

void sceMgrDecryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgrEncryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

void sceMgrGenerateMACWithKseCBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_0000AEE0;
    }
    func_0000341C(arg0, arg1, (s32) var_a2, arg3, -2, 0, 2);
}
#else
s32 sceMgrDecryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 1);
        }
    } else {
        var_a7 = sceMgrDESDecryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrEncryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 0);
        }
    } else {
        var_a7 = sceMgrDESEncryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrGenerateMACWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4) {
    M2C_UNK *var_a2;
    s32 var_v1;

    var_a2 = arg2;
    var_v1 = 0x80501006;
    if (arg4 >= 0) {
        if (var_a2 == NULL) {
            var_a2 = &D_0000AEE0;
        }
        var_v1 = func_0000341C(arg0, arg1, (s32) var_a2, arg3, arg4, 0, 2);
    }
    return var_v1;
}

void sceMgrDecryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgrEncryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

void sceMgrGenerateMACWithKseCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3) {
    M2C_UNK *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_0000AEE0;
    }
    func_0000341C(arg0, arg1, (s32) var_a2, arg3, -2, 0, 2);
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_0000341C);

INCLUDE_ASM("nonmatchings/mgr", sceMgrGenerateMAC1d);

s32 sceMgrStartSession(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_000038D0(arg1, arg2);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg0);
            func_0000027C(0x4010);
            temp_v0_3 = func_000001E4();
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                var_s2 = func_000038D0(arg4, arg3);
            }
        }
        sceMgrUnLock();
    }
    return var_s2;
}

s32 func_000038D0(u32 *arg0, u32 *arg1) {
    s32 ret = func_00000708(arg0, 0x2200);

    if (ret < 0) {
        return ret;
    }
    return func_00000840(arg1, 0x2201, 3);
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00003934);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mgr", func_00003578);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_0000391C);
#endif

s32 sceMgrGenerateKse(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s3;

    temp_v0 = sceMgrLock();
    var_s3 = temp_v0;
    if (temp_v0 >= 0) {
        var_s3 = func_00002F84(0, arg0, 0, arg1, arg2);
        sceMgrUnLock();
    }
    return var_s3;
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AEE0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF4);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF00);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF04);

INCLUDE_ASM("nonmatchings/mgr", func_00003BA8);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00003B90);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgrDecryptEKB);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_B434A376);

INCLUDE_ASM("nonmatchings/mgr", sceMgrDecryptLocalEKB);

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00004130);

INCLUDE_ASM("nonmatchings/mgr", func_000042E4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mgr", func_00003BFC);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00004070);

INCLUDE_ASM("nonmatchings/mgr", func_00004224);
#endif

s32 func_0000439C(u32 *a, u32 *b) {
    s32 ret = func_00000708(a, 0x1500);

    if (ret >= 0) {
        ret = func_00000708(a + 2, 0x1501);
        if (ret >= 0) {
            ret = func_00000708(b, 0x1502);
            if (ret >= 0) {
                ret = func_00000708(b + 2, 0x1503);
            }
        }
    }
    return ret;
}

#if FW_VERSION < 340
void func_00003E08(s32 arg0) {
    func_000002EC(arg0);
    if (func_000007DC(0x1400, 3) >= 0) {
        func_000002EC(arg0 + 8);
        func_000007DC(0x1410, 3);
    }
}
#else
void func_00004410(s32 arg0) {
    func_000002EC(arg0);
    if (func_000007DC(0x1400, 3) >= 0) {
        func_000002EC(arg0 + 8);
        func_000007DC(0x1410, 3);
    }
}
#endif

#if FW_VERSION < 201
s32 func_00004460(u32 *p, s32 count) {
    s32 i;
    s32 ret;

    for (i = count - 1; i >= 0; i--) {
        ret = func_00000840(p, 0x1420, 3);
        p += 2;
        if (ret < 0) {
            return ret;
        }
        ret = func_00000840(p, 0x1430, 3);
        p += 2;
        if (ret < 0) {
            return ret;
        }
    }
    func_0000027C(0x4000);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00004460);
#endif

s32 func_000044DC(u32 *a0, u32 a1) {
    u32 buf[2];
    s32 ret;

    func_000002EC(a0);
    ret = func_000007DC(0x1450, 3);
    if (ret < 0) {
        return ret;
    }
    buf[0] = a1;
    func_000002EC(buf);
    func_0000026C();
    func_0000027C(0x4011);
    ret = func_00000234();
    if (ret < 0) {
        if (ret == 0x80503004) {
            return 0x80501004;
        }
    }
    return ret;
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00004618);

INCLUDE_ASM("nonmatchings/mgr", func_00004724);

INCLUDE_ASM("nonmatchings/mgr", func_000048CC);

INCLUDE_ASM("nonmatchings/mgr", sceMgrCheckVCV);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_BB1E3C1A);

s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004724(0, 0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg1, arg2, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8011);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000006CC(0x9041);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_000003BC(arg0);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_4A14DD18);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FC627EBF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_566D33D3);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_76CD10BF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FCA741DE);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F1ADC4B9);

INCLUDE_ASM("nonmatchings/mgr", sceMgrNetDecryptKc);

INCLUDE_ASM("nonmatchings/mgr", sceMgrNetGenerateICV);

INCLUDE_ASM("nonmatchings/mgr", func_00005454);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesCbcDecrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesCbcEncrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesEcbDecrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesEcbEncrypt);
#endif

#if FW_VERSION < 340
s32 func_000057CC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220087:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 0x80504002;
    case 0x8022008B:
        return 0x80504001;
    case 0x8022008C:
        return 0x80504000;
    }
    return (err < 0) ? err : 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00005834);

s32 func_000059BC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00004180);

s32 func_00005B88(void) {
    if (g_mgrMsCtrl.fd >= 0) {
        sceIoClose(g_mgrMsCtrl.fd);
        g_mgrMsCtrl.fd = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00004358);

s32 sceMgrMSGetMediaType(s32 arg0) {
    s32 ret = func_00006030();
    u32 st;

    if (ret < 0) {
        return ret;
    }
    ret = func_00006884(arg0, 1);
    if (ret >= 0) {
        st = D_0000B004;
        ret = (st >> 6) & 1;
        ret |= ((st >> 5) & 1) << 1;
        ret |= ((st >> 4) & 1) << 2;
        ret |= ((st >> 7) & 1) << 3;
        ret |= ((st >> 8) & 1) << 4;
    }
    func_0000608C();
    return ret;
}

s32 func_000045DC(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AFD0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFF0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000B000);

INCLUDE_RODATA("nonmatchings/mgr", D_0000B010);

INCLUDE_RODATA("nonmatchings/mgr", D_0000B020);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00004558);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AEE0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF4);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF00);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF04);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AF10);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF30);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF40);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF50);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF60);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF70);

INCLUDE_ASM("nonmatchings/mgr", func_00004664);

INCLUDE_ASM("nonmatchings/mgr", func_00004808);

INCLUDE_ASM("nonmatchings/mgr", sceMgrCheckVCV);

s32 sceMgr_driver_BB1E3C1A(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg2, -1, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000004CC(arg0);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_00000378(arg1);
                        var_s0 = func_000006CC(0x9060);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg1, arg2, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8011);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000006CC(0x9041);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_000003BC(arg0);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

s32 func_00004CBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, arg3);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg0, arg2, -1);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000378(arg1);
                    var_s1 = func_000006CC(0x9040);
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s1;
}

void sceMgr_driver_4A14DD18(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 2);
}

void sceMgr_driver_DBB5C63E(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 5);
}

void sceMgrNetDecryptKc(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 6);
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FC627EBF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_566D33D3);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_76CD10BF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FCA741DE);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F1ADC4B9);

INCLUDE_ASM("nonmatchings/mgr", sceMgrNetGenerateICV);

INCLUDE_ASM("nonmatchings/mgr", func_00005328);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesCbcDecrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesCbcEncrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesEcbDecrypt);

INCLUDE_ASM("nonmatchings/mgr", sceMgrAesEcbEncrypt);

s32 func_000057CC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220087:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 0x80504002;
    case 0x8022008B:
        return 0x80504001;
    case 0x8022008C:
        return 0x80504000;
    }
    return (err < 0) ? err : 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00005834);

s32 func_000059BC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_000059F8);

s32 func_00005B88(void) {
    if (g_mgrMsCtrl.fd >= 0) {
        sceIoClose(g_mgrMsCtrl.fd);
        g_mgrMsCtrl.fd = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00005BC8);

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSGetMediaType);

s32 func_00005E30(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFA0);

s32 sceMgrMSInit(void) {
    s32 state = sceKernelSuspendDispatchThread();
    s32 ret;

    if (g_mgrMsCtrl.initCount > 0) {
        g_mgrMsCtrl.initCount++;
        sceKernelResumeDispatchThread(state);
        return 0;
    }
    if (g_mgrMsCtrl.sema <= 0) {
        ret = sceKernelCreateSema("SceMgrMsDrv", 0x100, 1, 1, NULL);
        if (ret < 0) {
            sceKernelResumeDispatchThread(state);
            return ret;
        }
        g_mgrMsCtrl.sema = ret;
    }
    g_mgrMsCtrl.initCount = 1;
    g_mgrMsCtrl.info.status = 0;
    sceKernelResumeDispatchThread(state);
    return 0;
}

s32 sceMgrMSReset(void) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    D_0000B004 = 0;
    func_00005B88();
    func_0000608C();
    return 0;
}

#if FW_VERSION < 152
void func_00005F7C(void) {
    func_00005B88();
    if (g_mgrMsCtrl.sema > 0) {
        sceKernelDeleteSema(g_mgrMsCtrl.sema);
        g_mgrMsCtrl.sema = -1;
    }
    g_mgrMsCtrl.initCount = 0;
}
#else
void func_00005F7C(void) {
    func_00007644(g_mgrMsCtrl.fd);
    func_00005B88();
    if (g_mgrMsCtrl.sema > 0) {
        sceKernelDeleteSema(g_mgrMsCtrl.sema);
        g_mgrMsCtrl.sema = -1;
    }
    g_mgrMsCtrl.initCount = 0;
}
#endif

s32 sceMgrMSEnd(void) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    if (g_mgrMsCtrl.initCount >= 2) {
        g_mgrMsCtrl.initCount--;
        func_0000608C();
        return 0;
    }
    func_00005F7C();
    return 0;
}

#if FW_VERSION < 152
s32 func_00006030(void) {
    s32 ret = sceKernelWaitSema(g_mgrMsCtrl.sema, 1, NULL);

    if (ret == 0x80020199) {
        return 0x80501001;
    }
    if (ret == 0x800201B5) {
        return 0x80500002;
    }
    if (ret != 0) {
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 func_00006030(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = sceKernelWaitSema(D_0000955C, 1, NULL);
    var_a0 = 0x80501001;
    if (temp_v0 != 0x80020199) {
        var_a0 = ((temp_v0 ^ 0x800201B5) != 0) ? temp_v0 : 0x80500002;
    }
    return var_a0;
}
#endif

#if FW_VERSION < 340
s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000955C, 1);
    return 0;
}

void func_000060B4(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = sceIoIoctl(arg0, 0x0211D817, NULL, 0U, arg1, 4U);
    if (temp_v0 < 0) {
        func_00005834(temp_v0);
        *arg1 = 0;
    }
}
#endif

#if FW_VERSION < 152
s32 func_00006104(void) {
    return (-((sceMScmHCLastStatus() & 0x300) == 0) & 0x7FAFE000) - 0x7FAFE000;
}
#endif

#if FW_VERSION >= 340
s32 func_00006030(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = sceKernelWaitSema(D_0000AFFC, 1, NULL);
    var_a0 = 0x80501001;
    if (temp_v0 != 0x80020199) {
        var_a0 = ((temp_v0 ^ 0x800201B5) != 0) ? temp_v0 : 0x80500002;
    }
    return var_a0;
}

s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000AFFC, 1);
    return 0;
}

void func_000060B4(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = sceIoIoctl(arg0, 0x0211D817, NULL, 0U, arg1, 4U);
    if (temp_v0 < 0) {
        func_00005834(temp_v0);
        *arg1 = 0;
    }
}
#endif

#if FW_VERSION >= 152
s32 func_00006104(void) {
    return !(sceMScmHCLastStatus() & 0x300) ? 0 : 0x80502000;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006134);

INCLUDE_ASM("nonmatchings/mgr", func_00006288);

s32 func_00006300(s32 arg0) {
    u8 buf[2];
    s32 ret = func_00006134(arg0, 1, buf, 2);

    if (ret < 0) {
        return ret;
    }
    return (buf[0] << 8) | buf[1];
}

INCLUDE_ASM("nonmatchings/mgr", func_00006340);

INCLUDE_ASM("nonmatchings/mgr", func_00006408);

s32 func_000064EC(s32 arg0, s32 arg1) {
    s32 ret = sceMScmWriteMSReg(arg0, 0x11, 6, arg1, 1, -1);

    if (ret < 0) {
        ret = func_000057CC(ret);
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/mgr", func_00006528);

s32 func_000065FC(s32 arg0, u8 *buf, s32 count) {
    s32 i;
    s32 ret;
    u8 status;

    for (i = count - 1; i >= 0; i--) {
        status = 0;
        ret = sceMScmTPCSetCmd(arg0, *buf++, &status, 10000);
        if (ret < 0) {
            return func_000057CC(ret);
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00006678);

s32 func_000067CC(s32 fd, s32 unlock) {
    s32 ret;

    sceKernelPowerUnlock(0);
    if (unlock) {
        func_0000608C();
    }
    ret = sceIoIoctl(fd, 0x0210D017, NULL, 0, NULL, 0);
    if (ret < 0) {
        ret = func_00005834(ret);
    } else {
        ret = 0;
    }
    return ret;
}

s32 func_0000684C(s32 fd) {
    s32 arg = 10;

    return sceIoIoctl(fd, 0x0211D019, &arg, 4, NULL, 0);
}

INCLUDE_ASM("nonmatchings/mgr", func_00006884);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mgr", func_00005194);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 func_00005194(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00006884(arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = !(D_0000B004 & 0x80) ? 0 : 0x80505008;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 340
s32 func_000069E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00006884(arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = !(D_0000B004 & 0x80) ? 0 : 0x80505008;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006A20);

INCLUDE_ASM("nonmatchings/mgr", func_00006B3C);

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00005324);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mgr", func_000053B0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00006BF0);
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006C40);

INCLUDE_ASM("nonmatchings/mgr", func_00006D70);

INCLUDE_ASM("nonmatchings/mgr", func_00006EAC);

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_000056C4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mgr", func_00005768);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00006F90);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSMount);

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSAuth);

INCLUDE_ASM("nonmatchings/mgr", func_00007364);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_D3A061BE);

#if FW_VERSION >= 250 && FW_VERSION < 340
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status &= ~0x208;
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION < 250
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status &= ~8;
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status = (s32) (g_mgrMsCtrl.info.status & ~0x208);
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION < 152
s32 func_00007644(s32 arg0) {
    s32 fd;
    s32 val = 100000;
    s32 ret;
    s32 res;

    ret = func_00006678(arg0, &fd, 1, 0);
    if (ret < 0) {
        return ret;
    }
    ret = 0;
    res = sceIoIoctl(arg0, 0x211D018, &val, 4, NULL, 0);
    if (res < 0) {
        ret = func_000057CC(res);
    }
    func_000067CC(arg0, 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00007644);
#endif

#if FW_VERSION < 250
s32 sceMgrMSGetMediaID(s32 arg0, u64 *id) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    ret = func_00006884(arg0, 1);
    if (ret >= 0) {
        if (!(D_0000B004 & 8)) {
            ret = 0x80505005;
        } else {
            id[0] = D_000095A0;
            id[1] = D_000095A8;
        }
    }
    func_0000608C();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrMSGetMediaID);
#endif

s32 func_000077A0(s32 fd, u64 *a, u64 *b) {
    u64 buf[3];
    s32 ret = func_000065FC(fd, (u8 *)D_0000AFBC, 4);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 3, (u8 *)buf, 0x18);
    if (ret < 0) {
        return ret;
    }
    a[0] = buf[0];
    a[1] = buf[1];
    *b = buf[2];
    return ret;
}

s32 func_00007844(s32 fd, u64 *a, u64 *b, u64 *c, s32 flag) {
    MgrMsAuthInfo info;
    s32 ret;

    func_00006288(&info, a, b, c);
    info.unk19 = flag;
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret < 0) {
        return ret;
    }
    ret = func_000065FC(fd, (u8 *)D_0000AFC0, 4);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x68);
    if (ret >= 0) {
        return ret;
    }
    if (ret != 0x80504000) {
        return ret;
    }
    ret = func_00006300(fd);
    if (ret < 0) {
        return ret;
    }
    if (ret & 2) {
        return 0x80503002;
    }
    return 0x80505003;
}

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/mgr", D_0000AFB8);
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFBC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFC0);

s32 func_000078F8(s32 fd, u64 *a, u64 *b) {
    u64 buf[3];
    s32 ret = func_000065FC(fd, (u8 *)"ijklm", 5);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 3, (u8 *)buf, 0x18);
    if (ret < 0) {
        return ret;
    }
    *b = buf[0];
    *a = buf[1];
    return ret;
}

#if FW_VERSION < 340
void func_00006100(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFCC, 4);
}
#else
void func_0000798C(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFCC, 4);
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_000079B0);

INCLUDE_ASM("nonmatchings/mgr", func_00007AD8);

INCLUDE_ASM("nonmatchings/mgr", func_00007BAC);

INCLUDE_ASM("nonmatchings/mgr", func_00007C84);

INCLUDE_ASM("nonmatchings/mgr", func_00007F24);

INCLUDE_ASM("nonmatchings/mgr", func_000080F8);

INCLUDE_ASM("nonmatchings/mgr", func_00008204);

INCLUDE_ASM("nonmatchings/mgr", func_00008374);

s32 func_00008460(s32 arg0, s32 arg1, s32 start, s32 step) {
    s32 n = D_0000B00C;
    s32 i;
    s32 ret;

    for (i = start; i < n; i += step) {
        ret = func_00008374(arg0, arg1, i, step);
        if (ret >= 0) {
            return i;
        }
        if (ret != 0x80504003) {
            return ret;
        }
    }
    return 0x80504003;
}

s32 func_00008504(s32 arg0, s32 arg1, s32 arg2, u32 *out) {
    u8 *buf = (u8 *)&D_0000B050;
    u8 *p;
    s32 ret = func_00006C40(arg0, arg1, arg2 + 7, (s32)buf, 0);

    if (ret < 0) {
        return ret;
    }
    p = buf + 0x1FC;
    *out = (buf[0x1FC] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
    return 0;
}

#if FW_VERSION < 340
s32 func_00006D2C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#else
s32 func_00008584(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00008604);

INCLUDE_ASM("nonmatchings/mgr", func_000086AC);

INCLUDE_ASM("nonmatchings/mgr", func_00008754);

INCLUDE_ASM("nonmatchings/mgr", func_00008B04);

s32 func_00008EB0(s32 *out, s32 pos) {
    s32 n = D_0000B00C;
    s32 r;

    if (pos < 0) {
        *out = 0;
        return -1;
    }
    r = pos % (n * 2);
    *out = r / n;
    return r % n;
}

#if FW_VERSION < 340
s32 sceMgrMSReadSeqPage(s32 arg0, u8 *buf, s32 which) {
    u8 extra[16];
    s32 seg;
    s32 *blks = g_mgrMsCtrl.info.map.seqBlk;
    s32 ret;
    s32 page;
    s32 blk;
    s32 i;
    u8 *p;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_00005194(arg0, 3);
    if (ret >= 0) {
        page = func_00008EB0(&seg, which ? g_mgrMsCtrl.info.map.seqPos[1] : g_mgrMsCtrl.info.map.seqPos[0]);
        ret = 0x80504003;
        if (page >= 0) {
            blk = blks[seg];
            ret = 0x80505003;
            if (blk >= 0) {
                p = buf;
                for (i = 0; i < 8; i++) {
                    ret = func_00006C40(arg0, blk, page + i, (s32)p, extra);
                    p += 0x200;
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                        goto end;
                    }
                    ret = 0x80505003;
                    if (!(extra[0] & 0x40)) {
                        goto end;
                    }
                }
                if (blks[0] < 0 || blks[1] < 0) {
                    ret = 1;
                } else {
                    ret = 0;
                }
            }
        }
    }
end:
    if (blks[0] < 0 && blks[1] < 0) {
        ret = 0x80505004;
    }
    func_0000608C();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrMSReadSeqPage);
#endif

#if FW_VERSION < 340
s32 sceMgrMSReadPoolPage(s32 arg0, u8 *buf, s32 pool) {
    u8 extra[16];
    s32 seg;
    MgrMsMap *map = &g_mgrMsCtrl.info.map;
    s32 *blks = map->poolBlk;
    s32 ret;
    s32 page;
    s32 blk;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_00005194(arg0, 3);
    if (ret >= 0) {
        ret = 0x80505003;
        if (map->poolValid >= 0) {
            page = func_00008EB0(&seg, pool ? g_mgrMsCtrl.info.map.poolPos[1] : g_mgrMsCtrl.info.map.poolPos[0]);
            ret = 0x80504003;
            if (page >= 0) {
                blk = blks[seg];
                ret = 0x80505003;
                if (blk >= 0) {
                    ret = func_00006C40(arg0, blk, page, (s32)buf, extra);
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                    } else if (!(extra[0] & 0x40)) {
                        ret = 0x80505003;
                    }
                }
            }
        }
    }
    func_0000608C();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrMSReadPoolPage);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSInvalidateICV);

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSWriteSeqPage);

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSWritePoolPage);

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr", func_00008274);
#endif

#if FW_VERSION < 152
s32 func_00008300(s32 fd, s32 reg) {
    s32 ret = func_00006528(fd, reg);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x7F);
    if (ret >= 0) {
        return 0;
    }
    if (ret != 0x80504000) {
        return ret;
    }
    ret = func_00006300(fd);
    if (ret < 0) {
        return ret;
    }
    if (ret & 0x20) {
        return 0x80503003;
    }
    return 0x80504000;
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr", func_00009B34);

void func_00009BAC(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFD0, 2);
}
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFCC);

#if FW_VERSION < 340
void func_00008388(s32 arg0) {
    func_000065FC(arg0, (s32) "x~", 2);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 151
INCLUDE_ASM("nonmatchings/mgr", func_000083CC);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AFD0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 151
s32 sceMgrMSCheckICV(s32 arg0, u64 *icv) {
    MgrMsAuthInfo info;
    s32 handle[4];
    s32 *pfd = handle;
    s32 mode = 2;
    s32 ret;

    func_00006288(&info, icv, NULL, NULL);
    ret = func_00006678(arg0, pfd, 2, 1);
    if (ret < 0) {
        if ((u32)(ret - 0x80505006) >= 2) {
            return ret;
        }
        ret = func_00006678(arg0, pfd, 3, 1);
        mode = 3;
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00006528(*pfd, 0x78);
    if (ret >= 0) {
        ret = func_00006134(*pfd, 0xC, (u8 *)&info, 0x1A);
        if (ret >= 0) {
            ret = func_000065FC(*pfd, (u8 *)"yz", 2);
            if (ret >= 0) {
                ret = func_00008300(*pfd, 0x7C);
                if (ret >= 0) {
                    ret = func_00008300(*pfd, 0x7B);
                    if (ret < 0) {
                        if (ret == 0x80504000) {
                            ret = 0;
                        } else if (ret == 0x80503003) {
                            if (!(mode & 1)) {
                                func_00006528(*pfd, 0x7D);
                            }
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    return ret;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/mgr", sceMgrMSCheckICV);
#else
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00008300(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00008274(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00009B34(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgrMSWriteICV);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFD8);

#if FW_VERSION >= 102 && FW_VERSION < 151
INCLUDE_ASM("nonmatchings/mgr", func_000086A8);

INCLUDE_ASM("nonmatchings/mgr", func_00008788);
#else
s32 sceMgr_driver_016A843B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"uvw", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgr_driver_3EE1140B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"rst", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

s32 func_0000A070(s32 arg0, u64 *out) {
    u64 buf[4];
    s32 fd;
    s32 ret;

    ret = func_00006678(arg0, &fd, 5, 0);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x40);
    if (ret >= 0) {
        ret = func_00006134(fd, 3, (u8 *)buf, 0x20);
        if (ret >= 0) {
            out[0] = buf[0];
            out[1] = buf[1];
        }
    }
    func_000067CC(arg0, 0);
    return ret;
}

s32 sceMgrMSSetLeafID(s32 arg0, u64 *id) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = id[0];
    buf.id[1] = id[1];
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x41);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}

#if FW_VERSION < 152
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = func_00006528(arg0, 0x42);
    if (var_v0 >= 0) {
        var_v0 = func_00006340(arg0, arg1, arg2, 3, (s32) &D_0000B050);
        if (var_v0 >= 0) {
            var_v0 = 0x428;
        }
    }
    return var_v0;
}
#else
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a5;

    temp_v0 = func_00006528(arg0, 0x42);
    var_a5 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00006340(arg0, arg1, arg2, 3, (s32) &D_0000B050);
        var_a5 = (temp_v0_2 >= 0) ? 0x428 : temp_v0_2;
    }
    return var_a5;
}
#endif

s32 sceMgrMSGetLocalEKB(s32 arg0, s32 buf, s32 size) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 5, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_0000A1C8(fd, buf, size);
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgrMSSetRd(s32 arg0, u64 *rd) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = *rd;
    buf.w[2] = 0;
    buf.w[3] = 0;
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x43);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgr_driver_D1023CC2(s32 arg0, u64 *a, u64 *b) {
    u64 buf[4];
    s32 fd;
    s32 ret;

    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x44);
    if (ret >= 0) {
        ret = func_00006134(fd, 3, (u8 *)buf, 0x20);
        if (ret >= 0) {
            *a = buf[0];
            *b = buf[1];
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

#if FW_VERSION < 250
s32 sceMgrMSSetMAC2d(s32 arg0, u64 *mac) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = *mac;
    buf.w[2] = 0;
    buf.w[3] = 0;
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x45);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr", sceMgrMSSetMAC2d);
#endif

s32 sceMgrMSReadIBD(s32 arg0, u8 page, s32 arg2, s32 arg3) {
    MgrMsRegParam param;
    s32 fd;
    s32 ret;

    param.unk0 = 0;
    param.unk4 = 0;
    param.unk5 = page;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_000064EC(fd, (s32)&param);
    if (ret >= 0) {
        ret = func_00006528(fd, 0x47);
        if (ret >= 0) {
            ret = func_00006340(fd, arg2, arg3, 2, (s32)&D_0000B050);
            if (ret >= 0) {
                ret = 0;
            }
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgrMSWriteIBD(s32 arg0, u8 page, s32 arg2, s32 arg3) {
    MgrMsRegParam param;
    s32 fd;
    s32 ret;

    param.unk0 = 0;
    param.unk4 = 0;
    param.unk5 = page;
    ret = func_00006678(arg0, &fd, 4, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_000064EC(fd, (s32)&param);
    if (ret >= 0) {
        ret = func_00006528(fd, 0x46);
        if (ret >= 0) {
            ret = func_00006408(fd, arg2, arg3, 2, (s32)&D_0000B050);
            if (ret >= 0) {
                ret = 0;
            }
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    func_00005F7C();
    func_00000AC4();
    return 0;
}
