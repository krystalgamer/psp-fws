/* cflags[100]: -O2 */
/* cflags[150-151]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "interruptman_decls.h"

static inline u32 getCop0Status(void) {
    u32 v;

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(v));
    return v;
}

static inline void setCop0Status(u32 v) {
    __asm__ __volatile__("mtc0 %0, $12" : : "r"(v));
}

/* func_00000348 inlined (gnu89 extern inline: body for inlining only, never emitted);
   1.50-2.71 still emit the out-of-line func_00000348 where it stands */

extern inline void freeSubIntrs(void *ptr) {
    if (ptr != NULL)
        sceKernelFreeHeapMemory(g_intrInfo.heapId, ptr);
}

/* func_00000000 (1.00 only as a function; inlined from 1.50 on) */

extern inline u32 intrCop0Mask(s32 intrNum) {
    u32 mask;

    mask = 0x100;
    if (intrNum != 64) {
        mask = 0x200;
        if (intrNum != 65)
            mask = (intrNum == 66) << 15;
    }
    return mask;
}

static inline u32 getCop0Count(void) {
    u32 v;

    __asm__ __volatile__("mfc0 %0, $9" : "=r"(v));
    return v;
}

#if FW_VERSION == 100
u32 func_00000000(s32 intrNum) {
    u32 mask;

    mask = 0x100;
    if (intrNum != 64) {
        mask = 0x200;
        if (intrNum != 65)
            mask = (intrNum == 66) << 15;
    }
    return mask;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", module_bootstart);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/interruptman", D_00003E3C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E40);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E60);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E78);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E8C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EA0);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EC0);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EDC);

INCLUDE_RODATA("nonmatchings/interruptman", D_000040B4);

INCLUDE_RODATA("nonmatchings/interruptman", D_000040C8);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004110);

INCLUDE_RODATA("nonmatchings/interruptman", D_0000411C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004124);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004130);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterIntrHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 sceKernelSetUserModeIntrHanlerAcceptable(u32 intrNum, s32 subIntrNum, s32 setBit) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;
    s32 i;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0 || (intr->handler & 3) == 3)
        ret = 0x80020068;
    else if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else {
        intr->subIntrs[subIntrNum]->userAcceptable = (setBit != 0);
        intr->hasUserSub = 0;
        for (i = 0; i < intr->numSubIntrs; i++) {
            if (intr->subIntrs[subIntrNum]->userAcceptable) {
                intr->hasUserSub = 1;
                break;
            }
        }
        if (intr->hasUserSub)
            sceKernelSetIntrLevel(intrNum, 2);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetUserModeIntrHanlerAcceptable);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 sceKernelSetIntrLevel(u32 intrNum, s32 level) {
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 64)
        return 0x80020065;
    if ((u32)(level - 1) >= 3)
        return 0x80020069;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0 || (intr->handler & 3) == 3) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x80020068;
    }
    if (intr->hasUserSub && level != 2) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x80020069;
    }
    if (IntrIsEnabled(intrNum)) {
        if (intr->level < level)
            IntrDisableLevels(intrNum);
        intr->level = level;
        IntrEnableLevels(intrNum);
        IntrUpdateMask();
    } else {
        intr->level = level;
    }
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetIntrLevel);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 sceKernelSetIntrLogging(u32 intrNum, s32 enable) {
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (enable != 0)
        intr->noLogging = 0;
    else
        intr->noLogging = 1;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetIntrLogging);
#endif

#if FW_VERSION >= 151
s32 sceKernelEnableIntr(u32 intrNum) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;
    u32 bits;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
    } else if ((s32)intrNum >= 64) {
        bits = intrCop0Mask(intrNum) & 0xFF00;
        setCop0Status(getCop0Status() | bits);
    } else {
        IntrEnableLevels(intrNum);
        IntrUpdateMask();
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableIntr);
#endif

#if FW_VERSION >= 151
s32 sceKernelSuspendIntr(u32 intrNum, s32 *state) {
    s32 ret = 0;
    s32 oldIntr;
    u32 mask;
    Interrupt *intr;
    u32 bits;
    u32 status;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    mask = intrCop0Mask(intrNum);
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
        if (state != NULL)
            *state = 0;
    } else if (state != NULL) {
        if ((s32)intrNum >= 64) {
            status = getCop0Status() & 0xFF00;
            *state = status & mask;
        } else
            *state = IntrIsEnabled(intrNum);
    }
    if ((s32)intrNum < 64)
        IntrDisableAll(intrNum);
    else {
        bits = mask & 0xFF00;
        setCop0Status(getCop0Status() & ~bits);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendIntr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeIntr);

void ReleaseContextHooks(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003AAC = (s32) func_00002FDC;
    D_00003AB0 = (s32) func_00002FE4;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetUserIntrStack);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallUserIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);

s32 sceKernelSuspendSubIntr(u32 intrNum, s32 subIntrNum, s32 *state) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbSuspend == NULL) {
        ret = 0x80020068;
        if (state != NULL)
            *state = 0;
    } else
        ret = intr->cb->cbSuspend(intrNum, subIntrNum, state);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelQueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/interruptman", QueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void *mymemset(void *dst, u8 c, s32 n) {
    u8 *p = dst;

    if (dst != NULL) {
        for (; n > 0; n--)
            *p++ = c;
    }
    return dst;
}

INCLUDE_ASM("nonmatchings/interruptman", IntrDisableLevels);

INCLUDE_ASM("nonmatchings/interruptman", IntrEnableLevels);

INCLUDE_ASM("nonmatchings/interruptman", IntrIsEnabled);

INCLUDE_ASM("nonmatchings/interruptman", IntrDisableAll);

INCLUDE_ASM("nonmatchings/interruptman", IntrUpdateMask);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuEnableIntr);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", QueryInterruptManCB);
#endif

#if FW_VERSION < 201
void *QueryInterruptManCB(void) {
    return &g_intrInfo;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000001E0);

INCLUDE_ASM("nonmatchings/interruptman", func_00000230);

s32 func_00000274(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateHeap(1, 0x100, 1, "interruptman_heap");
    var_v1 = temp_v0;
    if (temp_v0 > 0) {
        g_intrInfo.heapId = var_v1;
        var_v1 = 0;
    }
    return var_v1;
}

Interrupt **func_000002B8(s32 num) {
    Interrupt **ptrs;
    Interrupt *subs;
    s32 i;

    ptrs = sceKernelAllocHeapMemory(g_intrInfo.heapId, num * 60);
    if (ptrs != NULL) {
        mymemset(ptrs, 0, num * 60);
        subs = (Interrupt *)&ptrs[num];
        for (i = 0; i < num; i++)
            ptrs[i] = &subs[i];
    }
    return ptrs;
}
#endif

#if FW_VERSION < 282
void func_00000348(void *ptr) {
    if (ptr != NULL)
        sceKernelFreeHeapMemory(g_intrInfo.heapId, ptr);
}
#endif

#if FW_VERSION == 100
s32 sceKernelRegisterIntrHandler(u32 intrNum, s32 arg1, void *func, void *arg, SceIntrHandler *handler) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;
    SceModule *mod;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    if (handler != NULL && handler->size != 12)
        return 0x8002006B;
    oldIntr = sceKernelCpuSuspendIntr();
    if (handler != NULL && handler->numSubIntrs > 0 && g_intrInfo.heapId == 0) {
        ret = func_00000274();
        if (ret != 0)
            goto end;
    }
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler != 0) {
        ret = 0x80020067;
    } else if ((s32)func >= 0) {
        ret = 0x80020065;
    } else {
        intr->subIntrs = NULL;
        intr->cb = NULL;
        if (handler != NULL && handler->numSubIntrs > 0) {
            intr->subIntrs = func_000002B8(handler->numSubIntrs);
            if (intr->subIntrs == NULL)
                ret = 0x80020190;
            else
                intr->cb = handler->cb;
        }
        if (ret != 0)
            goto end;
        sceKernelSuspendIntr(intrNum, 0);
        if (arg1 == 0)
            arg1 = ret;
        else
            arg1 = 2;
        intr->handler = (s32)func | arg1;
        mod = sceKernelFindModuleByAddress((u32)func);
        intr->gp = (mod != NULL) ? mod->gpValue : 0;
        intr->arg = arg;
        intr->numSubIntrs = 0;
        if (handler != NULL)
            intr->numSubIntrs = handler->numSubIntrs;
        intr->noLogging = 0;
        intr->isSubIntr = 0;
        if ((s32)intrNum < 64)
            intr->level = 3;
        else
            intr->level = 0;
    }
end:
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}

s32 sceKernelSetUserModeIntrHanlerAcceptable(u32 intrNum, s32 subIntrNum, s32 setBit) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;
    s32 i;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0 || (intr->handler & 3) == 3)
        ret = 0x80020068;
    else if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else {
        intr->subIntrs[subIntrNum]->userAcceptable = (setBit != 0);
        intr->hasUserSub = 0;
        for (i = 0; i < intr->numSubIntrs; i++) {
            if (intr->subIntrs[subIntrNum]->userAcceptable) {
                intr->hasUserSub = 1;
                break;
            }
        }
        if (intr->hasUserSub)
            sceKernelSetIntrLevel(intrNum, 2);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}

s32 sceKernelReleaseIntrHandler(u32 intrNum) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
    } else {
        sceKernelSuspendIntr(intrNum, 0);
        func_00000348(intr->subIntrs);
        intr->subIntrs = NULL;
        intr->cb = NULL;
        intr->handler = 0;
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceKernelReleaseIntrHandler(u32 intrNum) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
    } else {
        sceKernelSuspendIntr(intrNum, 0);
        freeSubIntrs(intr->subIntrs);
        intr->subIntrs = NULL;
        intr->cb = NULL;
        intr->handler = 0;
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelClearIntrLogging);
#endif

#if FW_VERSION == 100
s32 sceKernelSetIntrLevel(u32 intrNum, s32 level) {
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 64)
        return 0x80020065;
    if ((u32)(level - 1) >= 3)
        return 0x80020069;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0 || (intr->handler & 3) == 3) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x80020068;
    }
    if (intr->hasUserSub && level != 2) {
        sceKernelCpuResumeIntr(oldIntr);
        return 0x80020069;
    }
    if (IntrIsEnabled(intrNum)) {
        if (intr->level < level)
            IntrDisableLevels(intrNum);
        intr->level = level;
        IntrEnableLevels(intrNum);
        IntrUpdateMask();
    } else {
        intr->level = level;
    }
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}

s32 sceKernelSetIntrLogging(u32 intrNum, s32 enable) {
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (enable != 0)
        intr->noLogging = 0;
    else
        intr->noLogging = 1;
    sceKernelCpuResumeIntr(oldIntr);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsInterruptOccurred);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableIntr);

s32 sceKernelSuspendIntr(u32 intrNum, s32 *state) {
    s32 ret = 0;
    s32 oldIntr;
    u32 mask;
    Interrupt *intr;
    u32 bits;
    u32 status;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    mask = func_00000000(intrNum);
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
        if (state != NULL)
            *state = 0;
    } else if (state != NULL) {
        if ((s32)intrNum >= 64) {
            status = getCop0Status() & 0xFF00;
            *state = status & mask;
        } else
            *state = IntrIsEnabled(intrNum);
    }
    if ((s32)intrNum < 64)
        IntrDisableAll(intrNum);
    else {
        bits = mask & 0xFF00;
        setCop0Status(getCop0Status() & ~bits);
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION < 282
void sceKernelDisableIntr(s32 arg0) {
    sceKernelSuspendIntr(arg0, 0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeIntr);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", RegisterContextHooks);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void RegisterContextHooks(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003AAC = arg1;
    D_00003AB0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", ReleaseContextHooks);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", UnSupportIntr);

INCLUDE_ASM("nonmatchings/interruptman", SupportIntr);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceKernelGetIntrSyscallFrame(void) {
    return D_00004ABC;
}
#endif

#if FW_VERSION >= 282
void ReleaseContextHooks(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = (s32) func_000030AC;
    D_00003FA0 = (s32) func_000030B4;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetUserIntrStack);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallUserIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);
#endif

#if FW_VERSION < 282
s32 sceKernelEnableSubIntr(u32 intrNum, s32 subIntrNum) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbEnable == NULL)
        ret = 0x80020068;
    else
        ret = intr->cb->cbEnable(intrNum, subIntrNum);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}

s32 sceKernelDisableSubIntr(u32 intrNum, s32 subIntrNum) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbDisable == NULL)
        ret = 0x80020068;
    else
        ret = intr->cb->cbDisable(intrNum, subIntrNum);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION == 100
s32 sceKernelSuspendSubIntr(u32 intrNum, s32 subIntrNum, s32 *state) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbSuspend == NULL) {
        ret = 0x80020068;
        if (state != NULL)
            *state = 0;
    } else
        ret = intr->cb->cbSuspend(intrNum, subIntrNum, state);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendSubIntr);
#else
s32 sceKernelResumeSubIntr(u32 intrNum, s32 subIntrNum, s32 state) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbResume == NULL)
        ret = 0x80020068;
    else
        ret = intr->cb->cbResume(intrNum, subIntrNum, state);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}

s32 sceKernelIsSubInterruptOccurred(u32 intrNum, s32 subIntrNum) {
    s32 ret;
    s32 oldIntr;
    Interrupt *intr;

    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (subIntrNum < 0 || subIntrNum >= intr->numSubIntrs)
        ret = 0x80020065;
    else if (intr->handler == 0 || intr->cb == NULL || intr->cb->cbIsOccurred == NULL)
        ret = 0x80020068;
    else
        ret = intr->cb->cbIsOccurred(intrNum, subIntrNum);
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", QueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelQueryIntrHandlerInfo);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
void *mymemset(void *dst, u8 c, s32 n) {
    u8 *p = dst;

    if (dst != NULL) {
        for (; n > 0; n--)
            *p++ = c;
    }
    return dst;
}

INCLUDE_ASM("nonmatchings/interruptman", IntrDisableLevels);

INCLUDE_ASM("nonmatchings/interruptman", IntrEnableLevels);

INCLUDE_ASM("nonmatchings/interruptman", IntrIsEnabled);

INCLUDE_ASM("nonmatchings/interruptman", IntrDisableAll);

INCLUDE_ASM("nonmatchings/interruptman", IntrUpdateMask);
#endif

#if FW_VERSION == 100
s32 sceKernelRegisterUserSpaceIntrStack(s32 stack, s32 size) {
    s32 oldIntr;
    s32 ret;

    oldIntr = sceKernelCpuSuspendIntr();
    ret = 0x8002006D;
    if (g_intrInfo.userIntrStack == 0) {
        ret = 0x8002006C;
        if (stack >= 0) {
            g_intrInfo.userIntrStackSize = size;
            ret = 0;
            g_intrInfo.userIntrStack = stack;
        }
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/interruptman", module_reboot_before);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuEnableIntr);

void *QueryInterruptManCB(void) {
    return &g_intrInfo;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/interruptman", func_00001978);
#endif

#if FW_VERSION >= 282
s32 sceKernelReleaseIntrHandler(u32 intrNum) {
    s32 ret = 0;
    s32 oldIntr;
    Interrupt *intr;

    if (sceKernelIsIntrContext() != 0)
        return 0x80020064;
    if (intrNum >= 67)
        return 0x80020065;
    oldIntr = sceKernelCpuSuspendIntr();
    intr = &g_intrInfo.intr[intrNum];
    if (intr->handler == 0) {
        ret = 0x80020068;
    } else {
        sceKernelSuspendIntr(intrNum, 0);
        freeSubIntrs(intr->subIntrs);
        intr->subIntrs = NULL;
        intr->cb = NULL;
        intr->handler = 0;
    }
    sceKernelCpuResumeIntr(oldIntr);
    return ret;
}

INCLUDE_ASM("nonmatchings/interruptman", sceKernelClearIntrLogging);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsInterruptOccurred);

void sceKernelDisableIntr(s32 arg0) {
    sceKernelSuspendIntr(arg0, 0);
}

void RegisterContextHooks(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = arg1;
    D_00003FA0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void RegisterSubIntrruptMonitor(s32 arg0, s32 arg1) {
    g_intrInfo.subIntrMonitorAfter = arg1;
    g_intrInfo.subIntrMonitorBefore = arg0;
}

void ReleaseSubIntrruptMonitor(void) {
    g_intrInfo.subIntrMonitorAfter = 0;
    g_intrInfo.subIntrMonitorBefore = 0;
}

INCLUDE_ASM("nonmatchings/interruptman", UnSupportIntr);

INCLUDE_ASM("nonmatchings/interruptman", SupportIntr);

s32 sceKernelGetIntrSyscallFrame(void) {
    return D_00004E7C;
}

INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelDisableSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);
#endif

#if FW_VERSION >= 152
s32 QueryIntrHandlerInfo(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION >= 150
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = sceKernelCpuSuspendIntr();
    var_s0 = 0x8002006D;
    if (g_intrInfo.userIntrStack == 0) {
        var_s0 = 0x8002006C;
        if (arg0 >= 0) {
            g_intrInfo.userIntrStackSize = arg1;
            var_s0 = 0;
            g_intrInfo.userIntrStack = arg0;
        }
    }
    sceKernelCpuResumeIntr(temp_a0);
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetCpuClockCounter);

u64 sceKernelGetCpuClockCounterWide(void) {
    s32 oldIntr = sceKernelCpuSuspendIntr();
    u32 hi = g_intrInfo.clockCounterHi;
    u32 lo = getCop0Count();

    if (lo < g_intrInfo.clockCounterLo)
        hi++;
    else
        g_intrInfo.clockCounterLo = lo;
    sceKernelCpuResumeIntr(oldIntr);
    return ((u64)hi << 32) | lo;
}

#if FW_VERSION == 100
s32 _sceKernelGetCpuClockCounterLow(void) {
    return g_intrInfo.clockCounterLo;
}
#else
s32 _sceKernelGetCpuClockCounterLow(void) {
    return D_00003F94;
}
#endif

#if FW_VERSION == 100
s32 _sceKernelGetCpuClockCounterHigh(void) {
    return g_intrInfo.clockCounterHi;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 _sceKernelGetCpuClockCounterHigh(void) {
    return D_00003AA8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION >= 282
s32 _sceKernelGetCpuClockCounterHigh(void) {
    return D_00003F98;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSystemCallTable);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelQuerySystemCall);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", func_000021D4);

INCLUDE_ASM("nonmatchings/interruptman", func_00002224);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000022C0);

INCLUDE_ASM("nonmatchings/interruptman", func_00002310);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00002380);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000027C0);
#endif

INCLUDE_ASM("nonmatchings/interruptman", ReturnToThread);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsIntrContext);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_7AD28215);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_53991063);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetInterruptExitCount);

INCLUDE_ASM("nonmatchings/interruptman", SaveThreadContext);

#if FW_VERSION < 282
s32 func_00002FDC(s32 arg0) {
    return arg0;
}

s32 func_00002FE4(void) {
    return 0;
}
#else
s32 func_000030AC(s32 arg0) {
    return arg0;
}

s32 func_000030B4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_000030BC);

INCLUDE_ASM("nonmatchings/interruptman", func_00003118);

INCLUDE_ASM("nonmatchings/interruptman", func_00003150);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/interruptman", func_00003390);
#else
INCLUDE_ASM("nonmatchings/interruptman", func_000031D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_00003230);

INCLUDE_ASM("nonmatchings/interruptman", func_0000327C);

INCLUDE_ASM("nonmatchings/interruptman", func_000032C4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_05E9D6C4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_8DC2BAEF);
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntrWithSync);

#if FW_VERSION < 282
s32 func_000031AC(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_0000340C(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003414);

INCLUDE_ASM("nonmatchings/interruptman", func_00003440);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_00003550);

INCLUDE_ASM("nonmatchings/interruptman", func_000035F4);

INCLUDE_ASM("nonmatchings/interruptman", func_00003644);

INCLUDE_ASM("nonmatchings/interruptman", func_000036A4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_D63F3B31);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_72CE22E8);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003734);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetSyscallRA);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003780);

INCLUDE_ASM("nonmatchings/interruptman", func_00003790);

INCLUDE_ASM("nonmatchings/interruptman", func_000037C0);

INCLUDE_ASM("nonmatchings/interruptman", func_000037EC);

INCLUDE_ASM("nonmatchings/interruptman", func_00003828);

INCLUDE_ASM("nonmatchings/interruptman", func_00003838);

INCLUDE_ASM("nonmatchings/interruptman", func_00003878);

INCLUDE_ASM("nonmatchings/interruptman", func_000038BC);

INCLUDE_ASM("nonmatchings/interruptman", func_000038CC);

INCLUDE_ASM("nonmatchings/interruptman", func_000038D8);

INCLUDE_ASM("nonmatchings/interruptman", func_000038E4);

INCLUDE_ASM("nonmatchings/interruptman", func_000038F0);

INCLUDE_ASM("nonmatchings/interruptman", func_000038FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000034E8);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_0000392C);

INCLUDE_ASM("nonmatchings/interruptman", func_00003940);

INCLUDE_ASM("nonmatchings/interruptman", func_00003958);

INCLUDE_ASM("nonmatchings/interruptman", func_00003970);

INCLUDE_ASM("nonmatchings/interruptman", func_00003980);

INCLUDE_ASM("nonmatchings/interruptman", func_0000399C);
