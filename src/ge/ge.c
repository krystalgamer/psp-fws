/* cflags: -O2 -frename-registers */
#include "common.h"
#include "ge_decls.h"
#include "k1.h"

/* $k1 shift in its own noreorder block: psp-as never moves the srl into a
   following branch delay slot (k1.h's shiftK1 lets it) */
static inline u32 geShiftK1(void) {
    u32 oldK1;

    __asm__ __volatile__(".set noreorder\n\tmove %0, $27\n\tsrl $27, $27, 16\n\t.set reorder" : "=r"(oldK1));
    return oldK1;
}

#if FW_VERSION < 201
s32 _sceGeReset(void) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    SceGeContext *ctx = &_aw_ctx;

    sceSysregAwRegABusClockEnable();
    pspSync();
    HW_GE_EDRAM_UNK10 = 2;
    HW_GE_RESET = 1;
    while ((HW_GE_RESET & 1) != 0)
        ;
    sceGeSaveContext(&_aw_ctx);
    ctx->geometryClock = HW_GE_GEOMETRY_CLOCK;
    sceSysregAwResetEnable();
    sceSysregAwResetDisable();
    HW_GE_EDRAM_UNK10 = 0;
    HW_GE_EDRAM_ENABLED_SIZE = 4;
    HW_GE_EXEC = 0;
    HW_GE_LISTADDR = 0;
    HW_GE_STALLADDR = 0;
    HW_GE_RADR1 = 0;
    HW_GE_RADR2 = 0;
    HW_GE_VADR = 0;
    HW_GE_IADR = 0;
    HW_GE_OADR = 0;
    HW_GE_OADR1 = 0;
    HW_GE_OADR2 = 0;
    HW_GE_INTERRUPT_TYPE2 = HW_GE_INTERR | HW_GE_INTFIN | HW_GE_INTEND;
    HW_GE_GEOMETRY_CLOCK = ctx->geometryClock;
    sceSysregSetMasterPriv(64, 1);
    sceGeRestoreContext(&_aw_ctx);
    sceSysregSetMasterPriv(64, 0);
    sceSysregAwRegABusClockDisable();
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ge", _sceGeReset);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/ge", D_000059C4);

INCLUDE_RODATA("nonmatchings/ge", D_000059C8);

INCLUDE_RODATA("nonmatchings/ge", D_000059DC);

INCLUDE_RODATA("nonmatchings/ge", D_000059F8);

INCLUDE_RODATA("nonmatchings/ge", D_00005A0C);

INCLUDE_RODATA("nonmatchings/ge", D_00005A2C);

INCLUDE_RODATA("nonmatchings/ge", D_00005A44);

INCLUDE_RODATA("nonmatchings/ge", D_00005A5C);

INCLUDE_RODATA("nonmatchings/ge", D_00005A70);

INCLUDE_RODATA("nonmatchings/ge", D_00005A84);

INCLUDE_RODATA("nonmatchings/ge", D_00005A98);

INCLUDE_RODATA("nonmatchings/ge", D_00005AB8);

INCLUDE_RODATA("nonmatchings/ge", D_00005AC8);

INCLUDE_RODATA("nonmatchings/ge", D_00005BF8);

INCLUDE_RODATA("nonmatchings/ge", D_00005C04);

INCLUDE_RODATA("nonmatchings/ge", D_00005CB4);

INCLUDE_RODATA("nonmatchings/ge", D_00005CB8);

INCLUDE_RODATA("nonmatchings/ge", D_00005CEC);

INCLUDE_RODATA("nonmatchings/ge", D_00005CF4);

INCLUDE_RODATA("nonmatchings/ge", D_00005D00);

INCLUDE_RODATA("nonmatchings/ge", D_00005D04);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/ge", D_00005D18_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/ge", D_00005D18_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/ge", D_00005D18_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/ge", D_00005D24);

INCLUDE_RODATA("nonmatchings/ge", D_00005D2C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/ge", D_00005878);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/ge", D_00004C94);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/ge", D_00005C9C);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeInit);

#if FW_VERSION < 201
s32 sceGeGetReg(s32 regId) {
    u32 val = 0;
    u32 oldK1 = geShiftK1();
    s32 oldBus;

    if (regId < 0) {
        setK1(oldK1);
        return 0x80000102;
    }
    oldBus = sceSysregAwRegABusClockEnable();
    if (regId < 20) {
        val = *g_pAwRegAdr[regId];
    }
    if (oldBus == 0) {
        sceSysregAwRegABusClockDisable();
    }
    setK1(oldK1);
    return val;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeGetReg);

INCLUDE_ASM("nonmatchings/ge", sceGeSetReg);
#endif

#if FW_VERSION < 201
s32 sceGeGetCmd(u32 cmdOff) {
    u32 oldK1 = geShiftK1();
    s32 oldBus;
    u32 cmd;

    if (cmdOff >= 0x100) {
        return 0x80000102;
    }
    oldBus = sceSysregAwRegABusClockEnable();
    cmd = HW_GE_CMD(cmdOff);
    if (oldBus == 0) {
        sceSysregAwRegABusClockDisable();
    }
    setK1(oldK1);
    return cmd;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeGetCmd);

INCLUDE_ASM("nonmatchings/ge", sceGeSetCmd);
#endif

#if FW_VERSION < 201
s32 sceGeGetMtx(s32 id, s32 *mtx) {
    u32 oldK1 = geShiftK1();
    s32 oldBus;
    s32 i;

    if ((u32)id >= 12) {
        setK1(oldK1);
        return 0x80000102;
    }
    if (k1IsUserMode() && (s32)mtx < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    oldBus = sceSysregAwRegABusClockEnable();
    if (id < 10) {
        volatile s32 *src = (volatile s32 *)(0xBD400C00 + id * 48);
        s32 *dst = mtx;
        for (i = 0; i < 12; i++) {
            *dst++ = *src++;
        }
    } else if (id == 10) {
        for (i = 0; i < 16; i++) {
            mtx[i] = ((volatile s32 *)0xBD400DE0)[i];
        }
    } else if (id == 11) {
        for (i = 0; i < 12; i++) {
            mtx[i] = ((volatile s32 *)0xBD400E20)[i];
        }
    }
    if (oldBus == 0) {
        sceSysregAwRegABusClockDisable();
    }
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeGetMtx);

INCLUDE_ASM("nonmatchings/ge", sceGeSetMtx);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeSaveContext);

#if FW_VERSION < 201
s32 sceGeRestoreContext(SceGeContext *ctx) {
    s32 ret = 0;
    u32 oldK1 = geShiftK1();
    s32 oldIntr;
    s32 oldBus;
    u32 intr1;
    u32 intr2;

    if (k1IsUserMode() && (s32)((u32)ctx | ((u32)ctx + sizeof(SceGeContext))) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    oldBus = sceSysregAwRegABusClockEnable();
    if ((HW_GE_EXEC & 1) != 0) {
        sceKernelCpuResumeIntr(oldIntr);
        setK1(oldK1);
        return 0x80000021;
    }
    intr1 = HW_GE_UNK300;
    intr2 = HW_GE_INTERRUPT_TYPE2;
    HW_GE_INTERRUPT_TYPE3 = intr2;
    HW_GE_LISTADDR = __builtin_allegrex_ext((u32)ctx->dl, 0, 29);
    HW_GE_STALLADDR = 0;
    HW_GE_EXEC = 1;
    pspSync();
    while ((HW_GE_EXEC & 1) != 0)
        ;
    if ((HW_GE_UNK300 & 8) != 0) {
        ret = -1;
    }
    HW_GE_INTERRUPT_TYPE4 = intr1 ^ HW_GE_INTERRUPT_TYPE1;
    HW_GE_INTERRUPT_TYPE2 = intr2;
    HW_GE_LISTADDR = ctx->ladr;
    HW_GE_STALLADDR = ctx->sadr;
    HW_GE_RADR1 = ctx->radr1;
    HW_GE_RADR2 = ctx->radr2;
    HW_GE_VADR = ctx->vadr;
    HW_GE_IADR = ctx->iadr;
    HW_GE_OADR = ctx->oadr;
    HW_GE_OADR1 = ctx->oadr1;
    HW_GE_OADR2 = ctx->oadr2;
    HW_GE_EXEC = ctx->exec;
    pspSync();
    if (oldBus == 0) {
        sceSysregAwRegABusClockDisable();
    }
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeRestoreContext);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000018B8(s32 arg0) {
    func_00001908(2, 0, arg0, 0);
}

void func_000018E0(s32 arg0) {
    func_00001908(4, 0, 0, arg0);
}

INCLUDE_ASM("nonmatchings/ge", func_00001908);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/ge", D_000058B0);

INCLUDE_RODATA("nonmatchings/ge", D_000058B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/ge", D_00004CC4);

INCLUDE_RODATA("nonmatchings/ge", D_00004CE4);

INCLUDE_RODATA("nonmatchings/ge", D_00004D64);

INCLUDE_ASM("nonmatchings/ge", func_00001B60);
#endif

#if FW_VERSION < 201
s32 _sceGeInterrupt(s32 arg0, s32 arg1, s32 arg2) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    u32 attr = HW_GE_INTERRUPT_TYPE1;
    u32 unk1 = HW_GE_UNK004;

    HW_GE_INTERRUPT_TYPE4 = attr;
    if ((attr & HW_GE_INTERR) != 0) {
        _sceGeErrorInterrupt(attr, unk1, arg2);
    }
    if ((attr & HW_GE_INTFIN) != 0) {
        _sceGeFinishInterrupt(attr, unk1, arg2);
    }
    if ((attr & (HW_GE_INTSIG | HW_GE_INTEND)) != 0) {
        _sceGeListInterrupt(attr, unk1, arg2);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return -1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", func_00000B94);
#endif

#if FW_VERSION >= 282
void func_00001790(s32 arg0) {
    func_000017E0(2, 0, arg0, 0);
}

void func_000017B8(s32 arg0) {
    func_000017E0(4, 0, 0, arg0);
}

INCLUDE_ASM("nonmatchings/ge", func_000017E0);

INCLUDE_RODATA("nonmatchings/ge", D_00005CD4);

INCLUDE_RODATA("nonmatchings/ge", D_00005CDC);

INCLUDE_RODATA("nonmatchings/ge", D_00005D18);

INCLUDE_RODATA("nonmatchings/ge", D_00005D38);

INCLUDE_RODATA("nonmatchings/ge", D_00005DB8);

INCLUDE_ASM("nonmatchings/ge", func_00001A38);
#endif

#if FW_VERSION == 100
s32 _sceGeSysEventHandler(s32 ev, char *name, void *param, s32 *result) {
    SceGeContext *ctx;

    switch (ev) {
    case 0x402:
        return _sceGeQueueStatus();
    case 0x4003:
        sceSysregAwRegABusClockEnable();
        _sceGeQueueSuspend();
        ctx = &_aw_ctx;
        sceGeSaveContext(ctx);
        ctx->edramTransDisable = HW_GE_EDRAM_ADDR_TRANS_DISABLE;
        ctx->edramTransVal = HW_GE_EDRAM_ADDR_TRANS_VALUE;
        ctx->edramRefresh1 = HW_GE_EDRAM_REFRESH_UNK1;
        ctx->edramRefresh2 = HW_GE_EDRAM_REFRESH_UNK2;
        ctx->edramRefresh3 = HW_GE_EDRAM_REFRESH_UNK3;
        ctx->edramUnk40 = HW_GE_EDRAM_UNK40;
        ctx->geometryClock = HW_GE_GEOMETRY_CLOCK;
        _sceGeEdramSuspend();
        sceSysregAwRegABusClockDisable();
        sceSysregAwRegBBusClockDisable();
        sceSysregAwEdramBusClockDisable();
        break;
    case 0x10003:
        sceSysregAwResetDisable();
        sceSysregAwRegABusClockEnable();
        sceSysregAwRegBBusClockEnable();
        sceSysregAwEdramBusClockEnable();
        sceGeEdramInit();
        _sceGeEdramResume();
        HW_GE_EDRAM_ENABLED_SIZE = 4;
        HW_GE_EXEC = 0;
        HW_GE_LISTADDR = 0;
        HW_GE_STALLADDR = 0;
        HW_GE_RADR1 = 0;
        HW_GE_RADR2 = 0;
        HW_GE_VADR = 0;
        HW_GE_IADR = 0;
        HW_GE_OADR = 0;
        HW_GE_OADR1 = 0;
        HW_GE_OADR2 = 0;
        HW_GE_INTERRUPT_TYPE2 = HW_GE_INTERR | HW_GE_INTFIN | HW_GE_INTEND;
        ctx = &_aw_ctx;
        HW_GE_EDRAM_ADDR_TRANS_DISABLE = ctx->edramTransDisable;
        HW_GE_EDRAM_ADDR_TRANS_VALUE = ctx->edramTransVal;
        HW_GE_EDRAM_REFRESH_UNK1 = ctx->edramRefresh1;
        HW_GE_EDRAM_REFRESH_UNK2 = ctx->edramRefresh2;
        HW_GE_EDRAM_REFRESH_UNK3 = ctx->edramRefresh3;
        HW_GE_EDRAM_UNK40 = ctx->edramUnk40;
        HW_GE_GEOMETRY_CLOCK = ctx->geometryClock;
        sceSysregSetMasterPriv(64, 1);
        sceGeRestoreContext(ctx);
        sceSysregSetMasterPriv(64, 0);
        _sceGeQueueResume();
        if (_sceGeQueueStatus() == 0) {
            sceSysregAwRegABusClockDisable();
        }
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/ge", _sceGeSysEventHandler);
#endif

s32 module_start(void) {
    sceGeInit();
    return 0;
}

#if FW_VERSION < 310
s32 module_reboot_before(void) {
    _sceGeQueueEnd();
    sceKernelDisableIntr(SCE_GE_INTR);
    sceKernelReleaseIntrHandler(SCE_GE_INTR);
    sceSysregAwRegABusClockEnable();
    HW_GE_EXEC = 0;
    sceSysregAwRegABusClockDisable();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ge", module_reboot_before);
#endif

#if FW_VERSION < 310
s32 sceGeEnd(void) {
    _sceGeQueueEnd();
    sceKernelDisableIntr(SCE_GE_INTR);
    sceKernelReleaseIntrHandler(SCE_GE_INTR);
    sceSysregAwRegABusClockEnable();
    HW_GE_EXEC = 0;
    sceSysregAwRegABusClockDisable();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeEnd);
#endif

#if FW_VERSION < 282
s32 sceGeSetGeometryClock(s32 arg0) {
    s32 temp_a3;

    temp_a3 = *(s32 *)0xBD400200;
    *(s32 *)0xBD400200 = arg0 & 1;
    return temp_a3 & 1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", func_00000E64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00001FA4(s32 arg0) {
    func_00001908(1, arg0, 0, 0);
}

void func_00001FCC(s32 arg0, s32 arg1, s32 arg2) {
    func_00001908(7, arg0, arg1, arg2);
}

s32 func_00001FF8(void) {
    s32 temp_a1;

    temp_a1 = __builtin_allegrex_ins(0x40000000, SysMemForKernel_EF2EE8C1(), 0, 0x1D);
    M2C_FIELD(temp_a1, s32 *, 4) = 0x0C000000;
    D_00006F80 = temp_a1;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x0F000000;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00000EA8);
#endif

#if FW_VERSION >= 282
s32 sceGeRegisterLogHandler(s32 arg0) {
    D_00006240 = arg0;
    return 0;
}

s32 sceGeSetGeometryClock(s32 arg0) {
    s32 temp_a3;

    temp_a3 = *(s32 *)0xBD400200;
    *(s32 *)0xBD400200 = arg0 & 1;
    return temp_a3 & 1;
}

void func_00001E9C(s32 arg0) {
    func_000017E0(1, arg0, 0, 0);
}

void func_00001EC4(s32 arg0, s32 arg1, s32 arg2) {
    func_000017E0(7, arg0, arg1, arg2);
}

s32 func_00001EF0(void) {
    s32 temp_a1;

    temp_a1 = __builtin_allegrex_ins(0x40000000, SysMemForKernel_EF2EE8C1(), 0, 0x1D);
    M2C_FIELD(temp_a1, s32 *, 4) = 0x0C000000;
    D_00007FC0 = temp_a1;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x0F000000;
    return 0;
}

INCLUDE_ASM("nonmatchings/ge", func_00001F34);

INCLUDE_ASM("nonmatchings/ge", func_00002110);

INCLUDE_ASM("nonmatchings/ge", sceGeEdramInit);
#endif

INCLUDE_ASM("nonmatchings/ge", sceGeEdramSetRefreshParam);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeEdramSetSize);

void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}
#endif

#if FW_VERSION < 250
s32 sceGeEdramSetAddrTranslation(s32 width) {
    s32 ret;

    if (width != 0 && width != 0x200 && width != 0x400 && width != 0x800 && width != 0x1000) {
        return 0x800001FE;
    }
    if (width != 0) {
        if ((HW_GE_EDRAM_ADDR_TRANS_DISABLE & 1) != 0) {
            ret = 0;
            HW_GE_EDRAM_ADDR_TRANS_VALUE = width >> 1;
            HW_GE_EDRAM_ADDR_TRANS_DISABLE = 0;
        } else {
            ret = HW_GE_EDRAM_ADDR_TRANS_VALUE << 1;
            HW_GE_EDRAM_ADDR_TRANS_VALUE = width >> 1;
        }
    } else if ((HW_GE_EDRAM_ADDR_TRANS_DISABLE & 1) == 0) {
        ret = HW_GE_EDRAM_ADDR_TRANS_VALUE << 1;
        HW_GE_EDRAM_ADDR_TRANS_DISABLE = 1;
    } else {
        ret = 0;
    }
    pspSync();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/ge", sceGeEdramSetAddrTranslation);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", _sceGeEdramSuspend);

INCLUDE_ASM("nonmatchings/ge", _sceGeEdramResume);

INCLUDE_ASM("nonmatchings/ge", sceGeEdramInit);
#endif

#if FW_VERSION < 250
u32 sceGeEdramGetSize(void) {
    s32 oldBus = sceSysregAwRegABusClockEnable();
    u32 size = (HW_GE_EDRAM_HW_SIZE & 0xFFFF) << 10;
    if (oldBus == 0) {
        sceSysregAwRegABusClockDisable();
    }
    return size;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
u32 sceGeEdramGetSize(void) {
    return D_00006600;
}
#endif

#if FW_VERSION < 282
void *sceGeEdramGetAddr(void) {
    return (void *)0x04000000;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", func_000013CC);

INCLUDE_ASM("nonmatchings/ge", func_00001568);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00001410);

INCLUDE_ASM("nonmatchings/ge", func_000016DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ge", _sceGeFinishInterrupt);

INCLUDE_RODATA("nonmatchings/ge", D_000030FC);

INCLUDE_RODATA("nonmatchings/ge", save_regs);

INCLUDE_RODATA("nonmatchings/ge", g_pAwRegAdr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/ge", D_00003174);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00002880);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00002CF4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/ge", func_00002CCC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/ge", func_00002940);

INCLUDE_ASM("nonmatchings/ge", func_00002D48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ge", _sceGeListInterrupt);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", sceGeListDeQueue);

INCLUDE_ASM("nonmatchings/ge", sceGeListUpdateStallAddr);

INCLUDE_ASM("nonmatchings/ge", sceGeListSync);

INCLUDE_ASM("nonmatchings/ge", sceGeDrawSync);

INCLUDE_ASM("nonmatchings/ge", sceGeBreak);

INCLUDE_ASM("nonmatchings/ge", sceGeContinue);

INCLUDE_ASM("nonmatchings/ge", sceGeSetCallback);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", sceGePutBreakpoint);

INCLUDE_ASM("nonmatchings/ge", sceGeGetBreakpoint);

INCLUDE_ASM("nonmatchings/ge", sceGeGetListIdList);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/ge", sceGeDecodeListId);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", sceGeGetList);

INCLUDE_ASM("nonmatchings/ge", sceGeGetStack);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_000043CC);

INCLUDE_ASM("nonmatchings/ge", func_0000447C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00002738);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 _sceGeQueueEnd(void) {
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00007640, s32, 0x18));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00007640, s32, 0x1C));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00007640, s32, 0x20));
    return 0;
}
#endif

#if FW_VERSION == 201
s32 _sceGeQueueEnd(void) {
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00005AC0, s32, 0x1040));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00005AC0, s32, 0x1044));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00005AC0, s32, 0x1048));
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sceGeQueueEnd(void) {
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00003ABC, s32, 0x810));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00003ABC, s32, 0x814));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00003ABC, s32, 0x818));
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/ge", _sceGeQueueStatus);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 _sceGeQueueStatus(void) {
    return (D_00003ABC == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 100
s32 _sceGeQueueSuspend(void) {
    u32 intr;

    if (g_AwQueue.active_first == NULL) {
        return 0;
    }
    while (1) {
        intr = HW_GE_INTERRUPT_TYPE1;
        g_GeSuspend.unk4 = HW_GE_UNK004;
        HW_GE_INTERRUPT_TYPE4 = intr;
        if ((intr & HW_GE_INTERR) != 0) {
            break;
        }
        if ((intr & HW_GE_INTFIN) != 0) {
            while ((HW_GE_EXEC & 1) != 0)
                ;
            break;
        }
        if ((intr & (HW_GE_INTSIG | HW_GE_INTEND)) != 0) {
            while ((HW_GE_EXEC & 1) != 0)
                ;
            break;
        }
    }
    g_GeSuspend.intrType = intr;
    return 0;
}

s32 _sceGeQueueResume(void) {
    if (g_AwQueue.active_first != NULL) {
        if ((g_GeSuspend.intrType & HW_GE_INTERR) != 0) {
            _sceGeErrorInterrupt(g_GeSuspend.intrType, g_GeSuspend.unk4, 0);
        }
        if ((g_GeSuspend.intrType & HW_GE_INTFIN) != 0) {
            _sceGeFinishInterrupt(g_GeSuspend.intrType, g_GeSuspend.unk4, 0);
        }
        if ((g_GeSuspend.intrType & (HW_GE_INTSIG | HW_GE_INTEND)) != 0) {
            _sceGeListInterrupt(g_GeSuspend.intrType, g_GeSuspend.unk4, 0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
void _sceGeErrorInterrupt(u32 attr, u32 unk1, s32 arg2) {

}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", _sceGeFinishInterrupt);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", func_0000254C);

u32 sceGeEdramGetSize(void) {
    return D_00006A84;
}

s32 sceGeEdramGetHwSize(void) {
    return D_00006A80;
}

INCLUDE_ASM("nonmatchings/ge", func_000025F0);

INCLUDE_ASM("nonmatchings/ge", func_000028BC);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/ge", D_00005E34);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/ge", save_regs);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/ge", g_pAwRegAdr);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/ge", D_00002FF4);

INCLUDE_ASM("nonmatchings/ge", _sceGeListInterrupt);

INCLUDE_ASM("nonmatchings/ge", func_00001D5C);

INCLUDE_ASM("nonmatchings/ge", func_00001E5C);

INCLUDE_ASM("nonmatchings/ge", func_00001F5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/ge", save_regs);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/ge", _sceGeListInterrupt);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", func_000029A8);

INCLUDE_ASM("nonmatchings/ge", func_00002E78);
#endif

#if FW_VERSION < 103
s32 sceGeListDeQueue(SceGeDisplayList *dl) {
    u32 oldK1 = geShiftK1();
    s32 oldIntr;
    s32 ret;

    if ((s32)dl < (s32)&g_AwQueue.lists[0] || (s32)dl > (s32)&g_AwQueue.lists[63]) {
        setK1(oldK1);
        return 0x80000100;
    }
    ret = -1;
    oldIntr = sceKernelCpuSuspendIntr();
    if (dl->state == SCE_GE_DL_STATE_QUEUED) {
        if (g_AwQueue.active_first == dl) {
            g_AwQueue.active_first = dl->next;
        }
        if (g_AwQueue.active_last == dl) {
            g_AwQueue.active_last = dl->prev;
        }
        if (g_AwQueue.free_first != NULL) {
            g_AwQueue.free_first->prev = dl;
        }
        dl->state = SCE_GE_DL_STATE_COMPLETED;
        ret = 0;
        g_AwQueue.free_last->next = dl;
        dl->prev = g_AwQueue.free_last;
        dl->next = NULL;
        g_AwQueue.free_last = dl;
    }
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeListDeQueue);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeListUpdateStallAddr);
#endif

#if FW_VERSION < 103
s32 sceGeListSync(SceGeDisplayList *dl, s32 mode) {
    u32 oldK1 = geShiftK1();
    s32 ret;

    if ((s32)dl < (s32)&g_AwQueue.lists[0] || (s32)dl > (s32)&g_AwQueue.lists[63]) {
        setK1(oldK1);
        return 0x80000100;
    }
    if (mode == 0) {
        if (dl->state != SCE_GE_DL_STATE_NONE) {
            while (dl->state != SCE_GE_DL_STATE_COMPLETED) {
                sceKernelWaitEventFlag(g_AwQueue.drawingEvFlagId, 1, 0, NULL, NULL);
            }
        }
        ret = 0;
    } else if (mode == 1) {
        switch (dl->state) {
        case SCE_GE_DL_STATE_QUEUED:
            ret = 1;
            break;
        case SCE_GE_DL_STATE_RUNNING:
            ret = (dl->stall == HW_GE_LISTADDR) ? 3 : 2;
            break;
        case SCE_GE_DL_STATE_COMPLETED:
            ret = 0;
            break;
        case SCE_GE_DL_STATE_PAUSED:
            ret = 4;
            break;
        default:
            ret = -1;
            break;
        }
    } else {
        ret = 0x80000107;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeListSync);
#endif

#if FW_VERSION < 150
s32 sceGeDrawSync(s32 mode) {
    u32 oldK1 = geShiftK1();
    s32 ret;
    s32 oldIntr;
    s32 i;
    SceGeDisplayList *dl;
    SceGeDisplayList *cur;

    if (mode == 0) {
        sceKernelWaitEventFlag(g_AwQueue.drawingEvFlagId, 2, 0, NULL, NULL);
        dl = g_AwQueue.lists;
        ret = 0;
        for (i = 0; i < 64; i++, dl++) {
            if (dl->state == SCE_GE_DL_STATE_COMPLETED) {
                dl->state = SCE_GE_DL_STATE_NONE;
            }
        }
    } else if (mode == 1) {
        ret = 0;
        oldIntr = sceKernelCpuSuspendIntr();
        cur = g_AwQueue.active_first;
        if (cur != NULL) {
            ret = (cur->stall == HW_GE_LISTADDR) ? 3 : 2;
        }
        sceKernelCpuResumeIntr(oldIntr);
    } else {
        ret = 0x80000107;
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeDrawSync);
#endif

#if FW_VERSION < 150
s32 sceGeBreak(u32 resetQueue, u32 *buf) {
    u32 oldK1 = geShiftK1();
    s32 oldIntr;
    SceGeDisplayList *dl;
    SceGeDisplayList *newDl;
    u32 op;
    s32 i;

    if (k1IsUserMode() && (s32)((u32)buf | ((u32)buf + 16)) < 0) {
        setK1(oldK1);
        return 0x80000023;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    dl = g_AwQueue.active_first;
    if (dl != NULL) {
        if (resetQueue == 0) {
            if (dl->state == SCE_GE_DL_STATE_RUNNING) {
                HW_GE_EXEC = 0;
                pspSync();
                dl->state = SCE_GE_DL_STATE_PAUSED;
                dl->signal = SCE_GE_DL_SIGNAL_HANDLER_SUSPEND;
                while ((HW_GE_EXEC & 1) != 0)
                    ;
                dl->list = HW_GE_LISTADDR;
                dl->stall = HW_GE_STALLADDR;
                op = *(u8 *)(HW_GE_LISTADDR + 0x40000000 - 1);
                if (op == 0x0C || op == 0x0F) {
                    dl->signal = SCE_GE_DL_SIGNAL_BREAK;
                } else {
                    buf[0] = 0x0F000000;
                    buf[1] = 0x0C000000;
                    sceKernelDcacheWritebackInvalidateRange(buf, 8);
                    newDl = (SceGeDisplayList *)_sceGeListEnQueue(buf, NULL, -1, NULL, 1);
                    HW_GE_STALLADDR = newDl->stall & 0x1FFFFFFF;
                    newDl->signal = SCE_GE_DL_SIGNAL_BREAK;
                    HW_GE_LISTADDR = newDl->list & 0x1FFFFFFF;
                    newDl->state = SCE_GE_DL_STATE_PAUSED;
                    HW_GE_EXEC = 1;
                    pspSync();
                }
            }
        } else if (resetQueue == 1) {
            _sceGeReset();
            for (i = 0; i < 64; i++) {
                g_AwQueue.lists[i].next = &g_AwQueue.lists[i + 1];
                g_AwQueue.lists[i].prev = &g_AwQueue.lists[i - 1];
            }
            g_AwQueue.active_first = NULL;
            g_AwQueue.free_first = &g_AwQueue.lists[0];
            g_AwQueue.free_last = &g_AwQueue.lists[63];
            g_AwQueue.lists[0].prev = NULL;
            g_AwQueue.lists[63].next = NULL;
            g_AwQueue.stackOff = 0;
        } else {
            dl = (SceGeDisplayList *)-1;
        }
    }
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return (s32)dl;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeBreak);
#endif

#if FW_VERSION < 150
s32 sceGeContinue(void) {
    s32 ret = 0;
    u32 oldK1 = geShiftK1();
    s32 oldIntr = sceKernelCpuSuspendIntr();
    SceGeDisplayList *dl = g_AwQueue.active_first;

    if (dl != NULL) {
        if (dl->state == SCE_GE_DL_STATE_PAUSED) {
            dl->state = SCE_GE_DL_STATE_RUNNING;
            if (dl->signal != SCE_GE_DL_SIGNAL_BREAK) {
                if (dl->ctx != NULL && dl->signal == SCE_GE_DL_SIGNAL_NONE) {
                    sceGeSaveContext(dl->ctx);
                }
                sceSysregAwRegABusClockEnable();
                HW_GE_STALLADDR = (u32)dl->stall & 0x1FFFFFFF;
                HW_GE_LISTADDR = (u32)dl->list & 0x1FFFFFFF;
                sceKernelClearEventFlag(g_AwQueue.drawingEvFlagId, ~2);
                HW_GE_EXEC |= 1;
                pspSync();
            }
            dl->signal = SCE_GE_DL_SIGNAL_NONE;
        } else {
            ret = -1;
        }
    }
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeContinue);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGeSetCallback);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", func_000023F0);
#endif

#if FW_VERSION == 100
s32 _sceGeQueueInit(void) {
    s32 i;

    for (i = 0; i < 64; i++) {
        g_AwQueue.lists[i].next = &g_AwQueue.lists[i + 1];
        g_AwQueue.lists[i].prev = &g_AwQueue.lists[i - 1];
    }
    g_AwQueue.active_first = NULL;
    g_AwQueue.free_first = &g_AwQueue.lists[0];
    g_AwQueue.free_last = &g_AwQueue.lists[63];
    g_AwQueue.lists[0].prev = NULL;
    g_AwQueue.lists[63].next = NULL;
    g_AwQueue.stackOff = 0;
    g_AwQueue.drawingEvFlagId = sceKernelCreateEventFlag("SceGeQueue", 0x201, 2, NULL);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 _sceGeQueueEnd(void) {
    sceKernelDeleteEventFlag(g_AwQueue.drawingEvFlagId);
    return 0;
}

INCLUDE_ASM("nonmatchings/ge", _sceGeQueueStatus);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", _sceGeErrorInterrupt);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/ge", func_00002718);

INCLUDE_ASM("nonmatchings/ge", func_00002740);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_0000428C((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00002990((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0) ^ D_00004500;
}
#endif

#if FW_VERSION < 103
s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return _sceGeListEnQueue((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_0000428C((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00002990((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1) ^ D_00004500;
}
#endif

#if FW_VERSION < 103
s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return _sceGeListEnQueue((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", sceGePutBreakpoint);

INCLUDE_ASM("nonmatchings/ge", sceGeGetBreakpoint);

INCLUDE_ASM("nonmatchings/ge", sceGeGetListIdList);

INCLUDE_ASM("nonmatchings/ge", sceGeGetList);

INCLUDE_ASM("nonmatchings/ge", sceGeGetStack);

INCLUDE_ASM("nonmatchings/ge", func_000046EC);

INCLUDE_ASM("nonmatchings/ge", func_0000479C);

INCLUDE_ASM("nonmatchings/ge", func_00004B58);

s32 _sceGeQueueEnd(void) {
    sceKernelDeleteEventFlag(D_00007AC0.unk18);
    sceKernelDeleteEventFlag(D_00007AC0.unk1C);
    sceKernelDeleteEventFlag(D_00007AC0.unk20);
    return 0;
}

s32 _sceGeQueueStatus(void) {
    return (D_00007AC8 == 0) ? 0 : -1;
}

void _sceGeErrorInterrupt(u32 attr, u32 unk1, s32 arg2) {
}

s32 sceGeListEnQueue(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 0);
}

s32 sceGeListEnQueueHead(void *arg0, void *arg1, s32 arg2, void *arg3) {
    return func_00005140((s32) arg0, (s32) arg1, arg2, (s32) arg3, 1);
}
#endif

s32 sceGeUnsetCallback(s32 cbId) {
    u32 oldK1 = geShiftK1();
    s32 oldIntr;

    if ((u32)cbId >= 16) {
        setK1(oldK1);
        return 0x80000100;
    }
    oldIntr = sceKernelCpuSuspendIntr();
    sceKernelDisableSubIntr(SCE_GE_INTR, cbId * 2);
    sceKernelDisableSubIntr(SCE_GE_INTR, cbId * 2 + 1);
    sceKernelReleaseSubIntrHandler(SCE_GE_INTR, cbId * 2);
    sceKernelReleaseSubIntrHandler(SCE_GE_INTR, cbId * 2 + 1);
    g_cbhook &= ~(1 << cbId);
    sceKernelCpuResumeIntr(oldIntr);
    setK1(oldK1);
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_000040EC);

INCLUDE_ASM("nonmatchings/ge", func_0000413C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_00004C30);

INCLUDE_ASM("nonmatchings/ge", func_00004D40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ge", func_0000428C);

INCLUDE_ASM("nonmatchings/ge", func_000046DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ge", func_00002990);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ge", _sceGeListEnQueue);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", func_00004DAC);

INCLUDE_ASM("nonmatchings/ge", func_00004DFC);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/ge", func_00004FD4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/ge", func_00004F4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/ge", func_0000505C);

INCLUDE_ASM("nonmatchings/ge", func_00005140);

INCLUDE_ASM("nonmatchings/ge", func_00005654);
#endif
