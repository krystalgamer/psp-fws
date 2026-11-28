/* compiler[340]: 1.9.2 */
/* cflags[340]: -Os -mext */
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
