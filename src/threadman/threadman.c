/* compiler[270,271]: 1.9.2 */
/* cflags[270,271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags[100,102,103]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "threadman_decls.h"
#include "k1.h"

/* caller address for the threadman log handler, read before the $k1 shift */
static inline void *getRa(void) {
    void *ra;

    __asm__ __volatile__("move %0, $31" : "=r"(ra));
    return ra;
}

/* 2.70+ combines the halves with | (1.00-2.60: +) */
static inline u64 sysClockToU64(SceKernelSysClock *clock) {
    if (FW_VERSION >= 270) {
        return ((u64)clock->hi << 32) | clock->low;
    }
    return ((u64)clock->hi << 32) + clock->low;
}

/* the stores keep their order (hi first) as if through a volatile pointer */
static inline void u64ToSysClock(volatile SceKernelSysClock *clock, u64 value) {
    clock->hi = value >> 32;
    clock->low = value;
}

/* 1 if p is a user-space address (bit 31 clear) */
#define IS_USER_ADDR(p) (((u32)(p) >> 31) ^ 1)

/* the original assert loads the file and function name before testing; compiled out in 2.01+ */
#define THREADMAN_ASSERT(ok, fmt, file, func, line) \
    do { \
        const char *__file = (file); \
        const char *__func = (func); \
        if (FW_VERSION < 201 && !(ok)) { \
            Kprintf((fmt), __file, __func, (line)); \
            sceKernelAssert((ok), 0); \
        } \
    } while (0)

#if FW_VERSION < 150
void func_00000000(SceThreadQueue *queue, s32 waitType) {
    SceThread *thread = g_threadmanInfo.currentThread;
    SceThread *prev;

    prev = queue->prev;
    thread->next = (SceThread *)queue;
    thread->prev = prev;
    queue->prev = thread;
    prev = thread->prev;
    thread->status = THREAD_WAITING;
    thread->waitType = waitType;
    prev->next = thread;
    thread->waitRet = 0;
    thread->waitObj = NULL;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_000000B0);

INCLUDE_ASM("nonmatchings/threadman", func_0000017C);
#endif

#if FW_VERSION < 330
void func_000001B4(SceThread *thread, SceSysmemUidCB *cb) {
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    SceThread *head = (SceThread *)&wq->waitQueue;
    SceThread *t;

    for (t = wq->waitQueue.next; t != head; t = t->next) {
        if (thread->currentPriority < t->currentPriority) {
            break;
        }
    }
    if (wq->unk4 != 0 && t->prev == head) {
        t = t->next;
    }
    thread->prev = t->prev;
    t->prev = thread;
    thread->next = t;
    thread->prev->next = thread;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_000001B4);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/threadman", func_00000268);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00000344);

INCLUDE_ASM("nonmatchings/threadman", wakeFirstWaitThread);
#endif

#if FW_VERSION < 150
s32 func_000000B0(SceSysmemUidCB *cb, s32 waitType, u32 attr, void *clock, s32 *timeout) {
    SceThread *thread = g_threadmanInfo.currentThread;
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    SceThread *queue;
    s32 ret;

    thread->unk38 = 0;
    if (timeout != NULL) {
        ret = func_0000BDC8(clock, func_000001D0, thread);
        if (ret < 0) {
            return ret;
        }
        thread->unk38 = ret;
        thread->unk3C = timeout;
    }
    thread->status = THREAD_WAITING;
    thread->waitType = waitType;
    thread->waitRet = 0;
    thread->waitObj = cb;
    wq->numWaitThreads++;
    if (attr & 0x100) {
        func_000001B4(thread, cb);
    } else {
        queue = (SceThread *)&wq->waitQueue;
        thread->next = queue;
        thread->prev = queue->prev;
        queue->prev = thread;
        thread->prev->next = thread;
    }
    g_threadmanInfo.nextThread = NULL;
    func_000007F4(1, 1);
    return thread->waitRet;
}

void func_000001D0(SceThread *thread) {
    s32 intr = sceKernelCpuSuspendIntr();
    s32 n;

    thread->unk38 = 0;
    if (thread->unk3C != NULL) {
        *thread->unk3C = 0;
    }
    thread->unk3C = NULL;
    n = func_00000268(thread);
    thread->waitRet = 0x800201A8;
    if (thread->waitObj != NULL) {
        n += func_00000524(thread->waitObj);
    }
    if (n != 0) {
        g_threadmanInfo.nextThread = NULL;
    }
    sceKernelCpuResumeIntr(intr);
}

s32 func_00000268(SceThread *thread) {
    SceThread *queue;

    if (thread->status == THREAD_KILLED) {
        return 0;
    }
    func_00000474(thread);
    thread->next->prev = thread->prev;
    thread->prev->next = thread->next;
    if (thread->status == THREAD_WAITING_SUSPEND) {
        queue = (SceThread *)&g_threadmanInfo.suspendedThreads;
        thread->next = queue;
        thread->prev = queue->prev;
        queue->prev = thread;
        thread->status = THREAD_SUSPEND;
        thread->prev->next = thread;
        return 0;
    }
    thread->status = THREAD_READY;
    func_0000F034(thread);
    return 1;
}

void wakeFirstWaitThread(SceSysmemUidCB *cb, s32 waitRet, s32 isIntr, s32 intr) {
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    SceThread *thread = wq->waitQueue.next;
    SceThread *queue;

    thread->waitRet = waitRet;
    if (thread->status == THREAD_KILLED) {
        return;
    }
    func_00000474(thread);
    thread->next->prev = thread->prev;
    thread->prev->next = thread->next;
    if (thread->status == THREAD_WAITING_SUSPEND) {
        queue = (SceThread *)&g_threadmanInfo.suspendedThreads;
        thread->next = queue;
        thread->prev = queue->prev;
        queue->prev = thread;
        thread->status = THREAD_SUSPEND;
        thread->prev->next = thread;
        return;
    }
    thread->status = THREAD_READY;
    if (!isIntr) {
        func_0000F13C(thread, intr);
    } else {
        func_0000F034(thread);
        g_threadmanInfo.nextThread = NULL;
    }
}

s32 func_000003F0(SceSysmemUidCB *cb, s32 waitRet) {
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    SceThread *next = wq->waitQueue.next;
    s32 count = 0;

    while (next != (SceThread *)&wq->waitQueue) {
        SceThread *thread = next;

        next = thread->next;
        func_00000268(thread);
        count++;
        thread->waitRet = waitRet;
    }
    return count;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000003F0(SceSysmemUidCB *arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = (u8 *)arg0 + (M2C_FIELD(D_00016444, u8 *, 0x15) * 4);
    var_s1 = M2C_FIELD(temp_v1, M2C_UNK **, 0xC);
    temp_s3 = temp_v1 + 0xC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
            func_00000268((s32) temp_s0);
            var_s2 += 1;
            M2C_FIELD(temp_s0, s32 *, 0x40) = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000004CC(struct Unk_func_000004CC_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = arg0->unk38;
    arg0->unk54 = 0;
    if (temp_v1 != 0) {
        func_0000BEBC(temp_v1, arg0->unk3C);
        arg0->unk38 = 0;
        arg0->unk3C = 0;
    }
    temp_v1_2 = arg0->unk20;
    if (temp_v1_2 == 0) {

    } else {
        sceKernelCallUIDObjFunction(temp_v1_2, 0x5BD49380);
    }
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v151);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000524(SceSysmemUidCB *cb) {
    return sceKernelCallUIDObjFunction(cb, 0x85FE2B4C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015410);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00000554(void) {
    sceKernelCreateUIDtype("WaitQ", 0x14, &D_00015410, 0, &D_00016444);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_0001524C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014928);

INCLUDE_RODATA("nonmatchings/threadman", D_00014948);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00000614);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00000698);
#endif

#if FW_VERSION < 150
void func_00000474(SceThread *thread) {
    s32 ok;

    thread->unk54 = 0;
    if (thread->unk38 != 0) {
        ok = func_0000BEBC(thread->unk38, thread->unk3C) == 0;
        THREADMAN_ASSERT(ok, D_00014928, D_00014948, "releaseWaitState", 0xCD);
        thread->unk38 = 0;
        thread->unk3C = NULL;
    }
    if (thread->waitObj != NULL) {
        sceKernelCallUIDObjFunction(thread->waitObj, 0x5BD49380);
    }
}

s32 func_00000524(SceSysmemUidCB *cb) {
    return sceKernelCallUIDObjFunction(cb, 0x85FE2B4C);
}

s32 func_00000544(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_v1;

    sceKernelCallUIDObjCommonFunction();
    temp_v1 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    temp_a0 = temp_v1 + 0xC;
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    M2C_FIELD(temp_v1, s32 *, 0) = 0;
    M2C_FIELD(temp_v1, void **, 0xC) = temp_a0;
    M2C_FIELD(temp_a0, void **, 4) = temp_a0;
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000544(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_a1;

    sceKernelCallUIDObjCommonFunction();
    temp_a0 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    temp_a1 = temp_a0 + 0xC;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    M2C_FIELD(temp_a0, s32 *, 0) = 0;
    M2C_FIELD(temp_a0, void **, 0xC) = temp_a1;
    M2C_FIELD(temp_a1, void **, 4) = temp_a1;
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/threadman", func_00000868);

INCLUDE_ASM("nonmatchings/threadman", func_0000095C);
#endif

#if FW_VERSION < 150
s32 func_0000059C(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 count = func_000003F0(cb, 0x800201B5);

    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    if (count != 0) {
        g_threadmanInfo.nextThread = NULL;
        func_000007F4(0, 0);
    }
    return 0;
}

s32 func_00000630(SceSysmemUidCB *cb) {
    s32 count = func_000003F0(cb, 0x800201A9);

    if (count != 0) {
        g_threadmanInfo.nextThread = NULL;
        func_000007F4(0, 0);
    }
    return count;
}
#endif

#if FW_VERSION < 282
s32 func_00000680(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000A18(s32 arg0, void *arg1) {
    void *temp_a1;

    temp_a1 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a1, s32 *, 8) = (s32) (M2C_FIELD(temp_a1, s32 *, 8) - 1);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_00000688(s32 arg0, void *arg1) {
    void *temp_a0;

    temp_a0 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) - 1);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000006A8);
#endif

#if FW_VERSION == 100
s32 func_000006A8(void) {
    s32 ok = sceKernelCreateUIDtype("WaitQ", 0x14, D_00015390, NULL, &g_threadmanInfo.uidWaitQType) == 0;

    THREADMAN_ASSERT(ok, D_00014928, D_00014948, "initWaitQ", 0x120);
    return 0;
}
#endif

#if FW_VERSION < 150
void func_0000072C(SceThread *thread, s32 isIntr, s32 intr) {
    SceThread *queue;
    SceThread *p;

    if (thread->status == THREAD_KILLED) {
        return;
    }
    func_00000474(thread);
    thread->next->prev = thread->prev;
    thread->prev->next = thread->next;
    if (thread->status == THREAD_WAITING_SUSPEND) {
        queue = (SceThread *)&g_threadmanInfo.suspendedThreads;
        thread->next = queue;
        thread->prev = queue->prev;
        queue->prev = thread;
        thread->status = THREAD_SUSPEND;
        thread->prev->next = thread;
        return;
    }
    thread->status = THREAD_READY;
    if (!isIntr) {
        func_0000F13C(thread, intr);
    } else {
        func_0000F034(thread);
        g_threadmanInfo.nextThread = NULL;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000007F4);
#endif

#if FW_VERSION < 150
s32 func_000008A0(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            g_threadmanInfo.currentThread->preemptCount = &g_threadmanInfo.currentThread->intrPreemptCount;
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 func_000008A0(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0xE4) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0xE8);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_000008A0(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0xEC) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0xF0);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000030C);

INCLUDE_ASM("nonmatchings/threadman", func_00000408);
#endif

#if FW_VERSION >= 330
s32 func_00000448(s32 arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_000172B4, u8 *, 0x15) * 4);
    var_s1 = M2C_FIELD(temp_v1, M2C_UNK **, 0xC);
    temp_s3 = temp_v1 + 0xC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
            func_00000268((s32) temp_s0);
            var_s2 += 1;
            M2C_FIELD(temp_s0, s32 *, 0x48) = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
s32 func_00000448(s32 arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_000172B4, u8 *, 0x15) * 4);
    var_s1 = M2C_FIELD(temp_v1, M2C_UNK **, 0xC);
    temp_s3 = temp_v1 + 0xC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
            func_00000268((s32) temp_s0);
            var_s2 += 1;
            M2C_FIELD(temp_s0, s32 *, 0x44) = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION == 282
s32 func_00000448(s32 arg0, s32 arg1) {
    struct Unk_func_00000448_temp_s0 *temp_s0;
    struct Unk_func_00000448_temp_s0 *var_s1;
    s32 var_s2;
    void *temp_s3;
    struct Unk_func_00000448_temp_v1 *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_000172B4, u8 *, 0x15) * 4);
    var_s1 = temp_v1->unkC;
    temp_s3 = &temp_v1->unkC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = var_s1->unk0;
            func_00000268((s32) temp_s0);
            var_s2 += 1;
            temp_s0->unk40 = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_000004CC);
#endif

#if FW_VERSION == 282
void func_000004CC(struct Unk_func_000004CC_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = arg0->unk38;
    arg0->unk54 = 0;
    if (temp_v1 != 0) {
        func_0000EA04(temp_v1, arg0->unk3C);
        arg0->unk38 = 0;
        arg0->unk3C = 0;
    }
    temp_v1_2 = arg0->unk20;
    if (temp_v1_2 == 0) {

    } else {
        sceKernelCallUIDObjFunction(temp_v1_2, 0x5BD49380);
    }
}
#endif

#if FW_VERSION >= 282
void func_00000534(s32 arg0) {
    sceKernelCallUIDObjFunction(arg0, 0x85FE2B4C);
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/threadman", D_00016340);

INCLUDE_RODATA("nonmatchings/threadman", D_00016344);

INCLUDE_RODATA("nonmatchings/threadman", D_00016364);

INCLUDE_RODATA("nonmatchings/threadman", D_00016384);

INCLUDE_RODATA("nonmatchings/threadman", D_00016398);

INCLUDE_RODATA("nonmatchings/threadman", D_000163AC);

INCLUDE_RODATA("nonmatchings/threadman", D_000163C4);

INCLUDE_RODATA("nonmatchings/threadman", D_000163DC);

INCLUDE_RODATA("nonmatchings/threadman", D_000163F0);

INCLUDE_RODATA("nonmatchings/threadman", D_00016410);

INCLUDE_RODATA("nonmatchings/threadman", D_00016424);

INCLUDE_RODATA("nonmatchings/threadman", D_000168DC);

INCLUDE_RODATA("nonmatchings/threadman", D_000168F0);

INCLUDE_RODATA("nonmatchings/threadman", D_00016DF8);

INCLUDE_RODATA("nonmatchings/threadman", D_00016E00);

INCLUDE_RODATA("nonmatchings/threadman", D_00016E44);

INCLUDE_RODATA("nonmatchings/threadman", D_00016E4C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016E54);

INCLUDE_RODATA("nonmatchings/threadman", D_00016EB0);

INCLUDE_RODATA("nonmatchings/threadman", D_00016EC0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016414);

s32 func_00000554(void) {
    sceKernelCreateUIDtype("WaitQ", 0x14, &D_00016414, 0, &D_000172B4);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000590);

s32 func_000006C8(struct Unk_func_000006C8_0 *arg0, struct Unk_func_000006C8_1 *arg1) {
    struct Unk_func_000006C8_temp_a0 *temp_a0;
    struct Unk_func_000006C8_temp_a1 *temp_a1;

    sceKernelCallUIDObjCommonFunction();
    temp_a0 = (u8 *)arg0 + (arg1->unk15 * 4);
    temp_a0->unk4 = 0;
    temp_a1 = &temp_a0->unkC;
    temp_a0->unk8 = 0;
    temp_a0->unk0 = 0;
    temp_a0->unkC = temp_a1;
    temp_a1->unk4 = temp_a1;
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000720);

INCLUDE_ASM("nonmatchings/threadman", func_00000814);

s32 func_000008C8(void) {
    return 0;
}

s32 func_000008D0(s32 arg0, struct Unk_func_000008D0_1 *arg1) {
    struct Unk_func_000008D0_temp_a1 *temp_a1;

    temp_a1 = arg0 + (arg1->unk15 * 4);
    temp_a1->unk8 = (s32) (temp_a1->unk8 - 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_000008F0);
#endif

#if FW_VERSION >= 350
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x10C) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0x110);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x104) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0x108);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x100) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0x104);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0xFC) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0x100);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((volatile SceThreadmanInfo *)&g_threadmanInfo)->dispatchDisabled == 0) {
        temp_v0 = ((volatile SceThreadmanInfo *)&g_threadmanInfo)->nextThread != g_threadmanInfo.currentThread;
        if (temp_v0 != 0) {
            M2C_FIELD(g_threadmanInfo.currentThread, void **, 0xF4) = (void *) ((u8 *)g_threadmanInfo.currentThread + 0xF8);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000A34);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/threadman", func_00000A74);

INCLUDE_ASM("nonmatchings/threadman", func_00000B88);

INCLUDE_ASM("nonmatchings/threadman", func_00000C98);
#endif

#if FW_VERSION < 150
s32 _sceKernelReturnFromCallback(void) {
    SceThread *thread;
    void *ctx;

    sceKernelCpuSuspendIntr();
    thread = g_threadmanInfo.currentThread;
    ctx = thread->callbackContext;
    thread->waitRet = thread->unk100->unk18;
    if (ctx == NULL) {
        return 0x80020064;
    }
    ReturnToThread(ctx);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000B84);

INCLUDE_ASM("nonmatchings/threadman", func_00000BD8);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelRegisterThreadEventHandler);

#if FW_VERSION < 270
s32 sceKernelReleaseThreadEventHandler(SceUID uid_) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread = g_threadmanInfo.currentThread;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1;

    oldK1 = shiftK1Noreorder();
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (thread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0 || g_threadmanInfo.dispatchDisabled != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A7;
    }
    if (sceKernelGetUIDcontrolBlockWithType(uid_, g_threadmanInfo.uidThreadEventHandlerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A0;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x2C, ra, 1, uid_);
    }
    ret = sceKernelDeleteUID(uid_);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelReleaseThreadEventHandler(SceUID uid_) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceThread *thread = g_threadmanInfo.currentThread;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1;

    oldK1 = shiftK1Noreorder();
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (thread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0 || g_threadmanInfo.dispatchDisabled != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A7;
    }
    if (sceKernelGetUIDcontrolBlockWithType(uid_, g_threadmanInfo.uidThreadEventHandlerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A0;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x2C, ra, 1, uid_);
    }
    ret = sceKernelDeleteUID(uid_);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseThreadEventHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00001260);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00001220);

void func_00001430(SceThread *thread) {
    SceSysmemUidCB *cb = thread->unk48;
    SceThreadCbObj *obj;

    if (cb == NULL) {
        return;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadEventHandlerType, SceThreadCbObj);
    obj->unkC--;
    if (obj->unk10 != 0 && obj->unkC == 0) {
        SceThreadCbObj *next = obj->next;

        next->prev = obj->prev;
        obj->prev->next = next;
        obj->prev = obj;
        obj->next = obj;
        func_000003F0(cb, 0);
    }
    thread->unk44 = 0;
    thread->unk48 = NULL;
}

INCLUDE_ASM("nonmatchings/threadman", func_000014BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000114C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadEventHandlerStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateCallback);

#if FW_VERSION < 270
s32 sceKernelDeleteCallback(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (g_threadmanInfo.currentThread->unk5C != NULL) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0 || g_threadmanInfo.dispatchDisabled != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A7;
    }
    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x83, ra, 1, cbid);
    }
    ret = sceKernelDeleteUID(cbid);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelNotifyCallback(SceUID cbid, s32 arg) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    SceThread *thread;
    s32 isIntr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    isIntr = sceKernelIsIntrContext();
    ret = 0x800201A1;
    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x84, ra, 2, cbid, arg);
    }
    thread = obj->thread;
    thread->unk58 = 1;
    obj->notifyArg = arg;
    obj->notifyCount++;
    if (thread->unk54 != 0 && (thread->status == THREAD_WAITING || thread->status == THREAD_WAITING_SUSPEND)) {
        ret = func_00000268(thread);
        thread->waitRet = 0x800201AB;
        if (thread->waitObj != NULL) {
            ret += func_00000524(thread->waitObj);
        }
        if (ret != 0) {
            g_threadmanInfo.nextThread = NULL;
            if (!isIntr) {
                func_000007F4(0, intr);
            }
        }
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelCancelCallback(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x85, ra, 1, cbid);
    }
    obj->notifyCount = 0;
    obj->notifyArg = 0;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelCancelCallback(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceThreadCbObj *obj;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    attr = cb->attr & 8;
    if (!k1IsUserMode()) {
        attr = 8;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x8D, ra, 1, cbid);
    }
    obj->notifyCount = 0;
    obj->notifyArg = 0;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelGetCallbackCount(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    ret = obj->notifyCount;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x86, ra, 2, cbid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelGetCallbackCount(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceThreadCbObj *obj;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    attr = cb->attr & 1;
    if (!k1IsUserMode()) {
        attr = 1;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    ret = obj->notifyCount;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x8E, ra, 2, cbid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelCheckCallback(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    s32 intr;
    s32 ret = 0;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (g_threadmanInfo.currentThread->unk5C != NULL) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (thread->unk58 != 0) {
        ret = func_00001FC4(intr) != 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x87, ra, 1, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00001FC4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 _sceKernelReturnFromCallback(void) {
    SceThread *thread;
    void *ctx;

    sceKernelCpuSuspendIntr();
    thread = g_threadmanInfo.currentThread;
    ctx = thread->callbackContext;
    thread->waitRet = thread->unk100->unk18;
    if (ctx == NULL) {
        return 0x80020064;
    }
    ReturnToThread(ctx);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", _sceKernelReturnFromCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001430(SceThread *thread) {
    SceSysmemUidCB *cb = thread->unk48;
    SceThreadCbObj *obj;

    if (cb == NULL) {
        return;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadEventHandlerType, SceThreadCbObj);
    obj->unkC--;
    if (obj->unk10 != 0 && obj->unkC == 0) {
        SceThreadCbObj *next = obj->next;

        next->prev = obj->prev;
        obj->prev->next = next;
        obj->prev = obj;
        obj->next = obj;
        func_000003F0(cb, 0);
    }
    thread->unk44 = 0;
    thread->unk48 = NULL;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000021A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000217C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_000022B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00001D5C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);

INCLUDE_ASM("nonmatchings/threadman", _sceKernelReturnFromCallback);

INCLUDE_ASM("nonmatchings/threadman", func_00002188);

INCLUDE_ASM("nonmatchings/threadman", func_00002214);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000022E4);

#if FW_VERSION < 150
s32 sceKernelNotifyCallback(SceUID cbid, s32 arg) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    SceThread *thread;
    s32 isIntr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    isIntr = sceKernelIsIntrContext();
    ret = 0x800201A1;
    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x84, ra, 2, cbid, arg);
    }
    thread = obj->thread;
    thread->unk58 = 1;
    obj->notifyArg = arg;
    obj->notifyCount++;
    if (thread->unk54 != 0 && (thread->status == THREAD_WAITING || thread->status == THREAD_WAITING_SUSPEND)) {
        ret = func_00000268(thread);
        thread->waitRet = 0x800201AB;
        if (thread->waitObj != NULL) {
            ret += func_00000524(thread->waitObj);
        }
        if (ret != 0) {
            g_threadmanInfo.nextThread = NULL;
            if (!isIntr) {
                func_000007F4(0, intr);
            }
        }
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}

s32 sceKernelCancelCallback(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x85, ra, 1, cbid);
    }
    obj->notifyCount = 0;
    obj->notifyArg = 0;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}

s32 sceKernelGetCallbackCount(SceUID cbid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThreadCbObj *obj;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(cbid, g_threadmanInfo.uidCallbackType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    ret = obj->notifyCount;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x86, ra, 2, cbid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}

s32 sceKernelCheckCallback(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    s32 intr;
    s32 ret = 0;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (g_threadmanInfo.currentThread->unk5C != NULL) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (thread->unk58 != 0) {
        ret = func_00001FC4(intr) != 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x87, ra, 1, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}

INCLUDE_ASM("nonmatchings/threadman", func_00001FC4);
#endif

#if FW_VERSION < 282
void func_0000233C(SceThread *thread) {
    SceSysmemUidCB *cb = thread->unk5C;
    SceThreadCbObj *obj;

    if (cb == NULL) {
        return;
    }
    obj = UID_CB_TO_DATA(cb, g_threadmanInfo.uidCallbackType, SceThreadCbObj);
    obj->unkC--;
    if (obj->unk10 != 0 && obj->unkC == 0) {
        SceThreadCbObj *next = obj->next;

        next->prev = obj->prev;
        obj->prev->next = next;
        obj->prev = obj;
        obj->next = obj;
        func_000003F0(cb, 0);
    }
    thread->unk5C = NULL;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_0000233C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015440);

INCLUDE_RODATA("nonmatchings/threadman", D_00015458);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002330);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000245C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002574);
#endif

#if FW_VERSION < 282
s32 func_00002394(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#else
INCLUDE_RODATA("nonmatchings/threadman", D_0001644C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016464);

INCLUDE_ASM("nonmatchings/threadman", func_000023C4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00002250);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/threadman", func_00002448);
#endif

#if FW_VERSION >= 282
s32 func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#else
s32 func_00002644(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 intr = sceKernelCpuSuspendIntr();
    SceThreadCbObj *obj = UID_CB_TO_DATA(cb, type, SceThreadCbObj);
    s32 ret;

    if (obj->unk10 != 0) {
        sceKernelCpuResumeIntr(intr);
        return 0x800201A0;
    }
    obj->unk10 = 1;
    while (obj->unkC > 0) {
        func_000124A0();
        ret = func_000000B0(cb, 0xA, 0, NULL, NULL);
        if (ret != 0) {
            sceKernelCpuResumeIntr(intr);
            return ret;
        }
    }
    obj->next->prev = obj->prev;
    obj->prev->next = obj->next;
    sceKernelCpuResumeIntr(intr);
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00002644);
#else
s32 func_000024D4(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 282
s32 func_0000275C(struct Unk_func_0000275C_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#else
s32 func_00002784(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 intr = sceKernelCpuSuspendIntr();
    SceThreadCbObj *obj = UID_CB_TO_DATA(cb, type, SceThreadCbObj);
    s32 ret;

    if (obj->unk10 != 0) {
        sceKernelCpuResumeIntr(intr);
        return 0x800201A1;
    }
    obj->unk10 = 1;
    while (obj->unkC > 0) {
        func_000124A0();
        ret = func_000000B0(cb, 0xB, 0, NULL, NULL);
        if (ret != 0) {
            sceKernelCpuResumeIntr(intr);
            return ret;
        }
    }
    obj->next->prev = obj->prev;
    obj->prev->next = obj->next;
    sceKernelCpuResumeIntr(intr);
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00002784);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002828);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_000029B8);
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_0001497C[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00002614);
#endif

#if FW_VERSION == 100
s32 func_00002614(void) {
    s32 ok;

    ok = sceKernelCreateUIDtypeInherit(D_0001497C, "ThreadEventHandler", 0x30, D_000153C0, NULL,
                                       &g_threadmanInfo.uidThreadEventHandlerType) == 0;
    THREADMAN_ASSERT(ok, "Assertion failed at %s:%s:%04d\n", "thcallback.c", "initCallback", 0x40A);
    ok = sceKernelCreateUIDtypeInherit(D_0001497C, "Callback", 0x30, D_000153D8, NULL, &g_threadmanInfo.uidCallbackType) == 0;
    THREADMAN_ASSERT(ok, "Assertion failed at %s:%s:%04d\n", "thcallback.c", "initCallback", 0x40B);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000289C);
#endif

#if FW_VERSION < 150
s32 sceKernelSleepThread(void) {
    SceThread *thread;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        Kprintf("thsleep.c:%s:SCE_KERNEL_ERROR_ILLEGAL_CONTEXT\n", "sceKernelSleepThread");
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0 || g_threadmanInfo.dispatchDisabled != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        Kprintf("thsleep.c:%s:SCE_KERNEL_ERROR_CAN_NOT_WAIT\n", "sceKernelSleepThread");
        return 0x800201A7;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x2E, ra, 0);
    }
    func_000124A0();
    thread = g_threadmanInfo.currentThread;
    thread->waitRet = 0;
    if (thread->wakeupCount != 0) {
        thread->wakeupCount--;
    } else {
        func_00000000(&g_threadmanInfo.sleepingThreads, 1);
        g_threadmanInfo.nextThread = NULL;
        func_000007F4(1, 1);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return thread->waitRet;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThread);
#endif

#if FW_VERSION < 150
s32 sceKernelSleepThreadCB(void) {
    SceThread *thread;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0 || g_threadmanInfo.dispatchDisabled != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A7;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x2F, ra, 0);
    }
    func_000124A0();
    thread = g_threadmanInfo.currentThread;
    do {
        if (thread->unk58 != 0) {
            func_00001FC4(intr);
        }
        thread->waitRet = 0;
        if (thread->wakeupCount != 0) {
            thread->wakeupCount--;
        } else {
            func_00000000(&g_threadmanInfo.sleepingThreads, 1);
            thread->unk54 = 1;
            g_threadmanInfo.nextThread = NULL;
            func_000007F4(1, 1);
        }
    } while (thread->waitRet == 0x800201AB);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return thread->waitRet;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThreadCB);
#endif

#if FW_VERSION < 150
s32 sceKernelWakeupThread(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread;
    s32 isIntr;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (thid == 0) {
        setK1(oldK1);
        return 0x80020197;
    }
    isIntr = sceKernelIsIntrContext();
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    if (!isIntr && thread == g_threadmanInfo.currentThread) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020197;
    }
    if (thread->status == THREAD_STOPPED || thread->status == THREAD_KILLED) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201A2;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x30, ra, 1, thid);
    }
    if ((thread->status == THREAD_WAITING || thread->status == THREAD_WAITING_SUSPEND) && thread->waitType == 1) {
        func_0000072C(thread, isIntr, intr);
    } else {
        thread->wakeupCount++;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelWakeupThread);
#endif

#if FW_VERSION < 270
s32 sceKernelCancelWakeupThread(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread;
    s32 isIntr;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    isIntr = sceKernelIsIntrContext();
    intr = sceKernelCpuSuspendIntr();
    if (thid == 0) {
        if (isIntr) {
            sceKernelCpuResumeIntr(intr);
            setK1(oldK1);
            return 0x80020197;
        }
        thid = g_threadmanInfo.currentThread->uid;
    }
    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x31, ra, 1, thid);
    }
    ret = thread->wakeupCount;
    thread->wakeupCount = 0;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelWakeupThread);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDonateWakeupThread);
#endif

#if FW_VERSION < 150
s32 sceKernelSuspendThread(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread;
    SceThread *queue;
    s32 isIntr;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (thid == 0) {
        setK1(oldK1);
        return 0x80020197;
    }
    isIntr = sceKernelIsIntrContext();
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    if (!isIntr && thread == g_threadmanInfo.currentThread) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020197;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x32, ra, 1, thid);
    }
    switch (thread->status) {
    case THREAD_RUNNING:
        if (g_threadmanInfo.dispatchDisabled != 0) {
            if (g_threadmanInfo.dispatchDisabled != 3) {
                g_threadmanInfo.dispatchDisabled = 2;
            }
            ret = 0;
            break;
        }
        /* fallthrough */
    case THREAD_READY:
        if (isIntr && thread == g_threadmanInfo.currentThread) {
            g_threadmanInfo.nextThread = NULL;
        } else {
            func_0000F0E4(thread, thread->currentPriority);
        }
        queue = (SceThread *)&g_threadmanInfo.suspendedThreads;
        thread->next = queue;
        thread->prev = queue->prev;
        queue->prev = thread;
        thread->status = THREAD_SUSPEND;
        thread->prev->next = thread;
        ret = 0;
        break;
    case THREAD_WAITING:
        thread->status = THREAD_WAITING_SUSPEND;
        ret = 0;
        break;
    case THREAD_SUSPEND:
    case THREAD_WAITING_SUSPEND:
        ret = 0x800201A3;
        break;
    case THREAD_STOPPED:
    case THREAD_KILLED:
    default:
        ret = 0x800201A2;
        break;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendThread);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendAllUserThreads);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEnd);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEndCB);

#if FW_VERSION < 150
void func_00003518(SceThread *thread) {
    s32 intr;

    intr = sceKernelCpuSuspendIntr();
    thread->unk38 = 0;
    if (func_00000268(thread) > 0) {
        g_threadmanInfo.nextThread = 0;
    }
    sceKernelCpuResumeIntr(intr);
}
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThreadCB);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00003C3C(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    if (func_00000268((s32) arg0) > 0) {
        D_00015E0C = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION >= 330
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    if (func_00000268((s32) arg0) > 0) {
        D_000174C8 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    if (func_00000268((s32) arg0) > 0) {
        D_00017328 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION == 282
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    arg0->unk38 = 0;
    if (func_00000268((s32) arg0) > 0) {
        D_00016C78 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateSema);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014CB0);

INCLUDE_RODATA("nonmatchings/threadman", D_00014CBC);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteSema(SceUID semaid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x37, ra, 1, semaid);
    }
    ok = sceKernelDeleteUID(semaid) == 0;
    THREADMAN_ASSERT(ok, D_00014CBC, D_00014CB0, "sceKernelDeleteSema", 0x78);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 sceKernelSignalSema(SceUID semaid, s32 signal) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceSema *sema;
    SceWaitQ *wq;
    SceThread *thread;
    SceThread *next;
    SceThread *last = NULL;
    s32 count;
    s32 n;
    s32 isIntr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    isIntr = sceKernelIsIntrContext();
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x38, ra, 2, semaid, signal);
    }
    count = sema->currentCount + signal;
    for (next = wq->waitQueue.next; next != (SceThread *)&wq->waitQueue; next = next->next) {
        count -= next->waitArg0;
    }
    if (sema->maxCount < count) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201AE;
    }
    sema->currentCount += signal;
    n = 0;
    next = wq->waitQueue.next;
    while (next != (SceThread *)&wq->waitQueue) {
        thread = next;
        next = thread->next;
        if (sema->currentCount < thread->waitArg0) {
            break;
        }
        sema->currentCount -= thread->waitArg0;
        if (func_00000268(thread) > 0) {
            last = thread;
            n++;
        }
    }
    if (!isIntr) {
        if (n == 1) {
            func_0000F0E4(last, last->currentPriority);
            func_0000F13C(last, intr);
        } else if (n > 0) {
            g_threadmanInfo.nextThread = NULL;
            func_000007F4(0, intr);
        }
    } else if (n > 0) {
        g_threadmanInfo.nextThread = NULL;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteSema(SceUID semaid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x37, ra, 1, semaid);
    }
    ok = sceKernelDeleteUID(semaid) == 0;
    THREADMAN_ASSERT(ok, D_00014CBC, D_00014CB0, "sceKernelDeleteSema", 0x78);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteSema);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/threadman", sceKernelSignalSema);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSemaCB);

#if FW_VERSION < 270
s32 sceKernelPollSema(SceUID semaid, s32 signal) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceSema *sema;
    SceWaitQ *wq;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (signal <= 0) {
        setK1(oldK1);
        return 0x800201BD;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 4)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    ret = 0x800201BD;
    if (sema->maxCount < signal) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3B, ra, 2, semaid, signal);
    }
    if (wq->numWaitThreads > 0 && (!(wq->attr & 0x100)
            || wq->waitQueue.next->currentPriority <= g_threadmanInfo.currentThread->currentPriority)) {
        goto fail;
    }
    if (sema->currentCount >= signal) {
        sema->currentCount -= signal;
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0;
    }
fail:
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0x800201AD;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelPollSema(SceUID semaid, s32 signal) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceSema *sema;
    SceWaitQ *wq;
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (signal <= 0) {
        setK1(oldK1);
        return 0x800201BD;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    attr = cb->attr & 4;
    if (!k1IsUserMode()) {
        attr = 4;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    if (sema->maxCount < signal) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BD;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3B, ra, 2, semaid, signal);
    }
    if (wq->numWaitThreads > 0 && (!(wq->attr & 0x100)
            || wq->waitQueue.next->currentPriority <= g_threadmanInfo.currentThread->currentPriority)) {
        goto fail;
    }
    if (sema->currentCount >= signal) {
        sema->currentCount -= signal;
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0;
    }
fail:
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0x800201AD;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelPollSema);
#endif

#if FW_VERSION < 270
s32 sceKernelCancelSema(SceUID semaid, s32 setCount, s32 *numWaitThreads) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceSema *sema;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)numWaitThreads | ((u32)numWaitThreads + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    if (sema->maxCount < setCount) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BD;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3C, ra, 3, semaid, setCount, numWaitThreads);
    }
    ret = sceKernelCallUIDObjFunction(uid, 0x86D94883);
    if (setCount < 0) {
        sema->currentCount = sema->initCount;
    } else {
        sema->currentCount = setCount;
    }
    if (numWaitThreads != NULL) {
        *numWaitThreads = ret;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelSema);
#endif

#if FW_VERSION < 151
s32 sceKernelReferSemaStatus(SceUID semaid, SceKernelSemaInfo *info) {
    SceKernelSemaInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceSema *sema;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelSemaInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3D, ra, 2, semaid, info);
    }
    cb = uid;
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.sema;
    memset(tmp, 0, sizeof(SceKernelSemaInfo));
    tmp->size = sizeof(SceKernelSemaInfo);
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->numWaitThreads = wq->numWaitThreads;
    tmp->currentCount = sema->currentCount;
    tmp->maxCount = sema->maxCount;
    tmp->initCount = sema->initCount;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
s32 sceKernelReferSemaStatus(SceUID semaid, SceKernelSemaInfo *info) {
    SceKernelSemaInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceSema *sema;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelSemaInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(semaid, g_threadmanInfo.uidSemaType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020199;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3D, ra, 2, semaid, info);
    }
    cb = uid;
    sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.sema;
    memset(tmp, 0, sizeof(SceKernelSemaInfo));
    tmp->size = sizeof(SceKernelSemaInfo);
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->numWaitThreads = wq->numWaitThreads;
    tmp->currentCount = sema->currentCount;
    tmp->maxCount = sema->maxCount;
    tmp->initCount = sema->initCount;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSemaStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015470);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00004894);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00004A80);
#endif

#if FW_VERSION < 282
s32 func_000047B8(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000047E0(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#else
INCLUDE_RODATA("nonmatchings/threadman", D_00016630);

INCLUDE_ASM("nonmatchings/threadman", func_00004ADC);

s32 func_00004B20(struct Unk_func_00004B20_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

s32 func_00004B48(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION < 300
s32 func_00004B68(SceSysmemUidCB *cb) {
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    SceSema *sema = UID_CB_TO_DATA(cb, g_threadmanInfo.uidSemaType, SceSema);
    SceThread *thread;
    SceThread *next;
    s32 n = 0;

    if (wq->numWaitThreads <= 0) {
        return 0;
    }
    next = wq->waitQueue.next;
    while (next != (SceThread *)&wq->waitQueue) {
        thread = next;
        next = thread->next;
        if (sema->currentCount < thread->waitArg0) {
            break;
        }
        sema->currentCount -= thread->waitArg0;
        n += func_00000268(thread) > 0;
    }
    return n;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_00004B68);
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014CF0[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000048B0);
#endif

#if FW_VERSION == 100
s32 func_000048B0(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014CF0, "Semaphore", 0x30, D_000153F0, NULL, &g_threadmanInfo.uidSemaType) == 0;

    THREADMAN_ASSERT(ok, D_00014CBC, D_00014CB0, "initSema", 0x23E);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateEventFlag);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014D10);

INCLUDE_RODATA("nonmatchings/threadman", D_00014D1C);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteEventFlag(SceUID evid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3F, ra, 1, evid);
    }
    ok = sceKernelDeleteUID(evid) == 0;
    THREADMAN_ASSERT(ok, D_00014D1C, D_00014D10, "sceKernelDeleteEventFlag", 0x73);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteEventFlag(SceUID evid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x3F, ra, 1, evid);
    }
    ok = sceKernelDeleteUID(evid) == 0;
    THREADMAN_ASSERT(ok, D_00014D1C, D_00014D10, "sceKernelDeleteEventFlag", 0x73);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteEventFlag);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetEventFlag);

#if FW_VERSION < 270
s32 sceKernelClearEventFlag(SceUID evid, u32 bits) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceEventFlag *ev;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    ev = UID_CB_TO_DATA(cb, g_threadmanInfo.uidEventFlagType, SceEventFlag);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x41, ra, 2, evid, bits);
    }
    ev->currentPattern &= bits;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelClearEventFlag(SceUID evid, u32 bits) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceEventFlag *ev;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    attr = cb->attr & 2;
    if (!k1IsUserMode()) {
        attr = 2;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    ev = UID_CB_TO_DATA(cb, g_threadmanInfo.uidEventFlagType, SceEventFlag);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x41, ra, 2, evid, bits);
    }
    ev->currentPattern &= bits;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelClearEventFlag);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlagCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollEventFlag);

#if FW_VERSION < 270
s32 sceKernelCancelEventFlag(SceUID evid, u32 setPattern, s32 *numWaitThreads) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceEventFlag *ev;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)numWaitThreads | ((u32)numWaitThreads + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    ev = UID_CB_TO_DATA(cb, g_threadmanInfo.uidEventFlagType, SceEventFlag);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x45, ra, 3, evid, setPattern, numWaitThreads);
    }
    ret = sceKernelCallUIDObjFunction(uid, 0x86D94883);
    ev->currentPattern = setPattern;
    if (numWaitThreads != NULL) {
        *numWaitThreads = ret;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelEventFlag);
#endif

#if FW_VERSION < 151
s32 sceKernelReferEventFlagStatus(SceUID evid, SceKernelEventFlagInfo *info) {
    SceKernelEventFlagInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceEventFlag *ev;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelEventFlagInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelEventFlagInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(evid, g_threadmanInfo.uidEventFlagType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019A;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x46, ra, 2, evid, info);
    }
    cb = uid;
    ev = UID_CB_TO_DATA(cb, g_threadmanInfo.uidEventFlagType, SceEventFlag);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.eventFlag;
    memset(tmp, 0, infoSize);
    tmp->size = infoSize;
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->initPattern = ev->initPattern;
    tmp->currentPattern = ev->currentPattern;
    tmp->numWaitThreads = wq->numWaitThreads;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferEventFlagStatus);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005A7C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015490);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000059FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00005C44);
#endif

#if FW_VERSION < 282
s32 func_0000598C(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000059B4(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUnlockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutexCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMutexStatus);

INCLUDE_ASM("nonmatchings/threadman", func_00006B7C);

INCLUDE_RODATA("nonmatchings/threadman", D_000166B4);

INCLUDE_ASM("nonmatchings/threadman", func_00006C24);

s32 func_00006C68(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00006C90(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00006CB0);
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014D58[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000059D4);
#endif

#if FW_VERSION == 100
s32 func_000059D4(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014D58, "EventFlag", 0x30, D_00015410, NULL, &g_threadmanInfo.uidEventFlagType) == 0;

    THREADMAN_ASSERT(ok, D_00014D1C, D_00014D10, "initEventFlag", 0x23A);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014D7C);

INCLUDE_RODATA("nonmatchings/threadman", D_00014D88);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteMbx(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidMbxType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019B;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x48, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014D88, D_00014D7C, "sceKernelDeleteMbx", 0x73);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteMbx(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidMbxType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019B;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x50, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014D88, D_00014D7C, "sceKernelDeleteMbx", 0x73);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", mbxAddMessage);
#endif

#if FW_VERSION < 270
s32 sceKernelSendMbx(SceUID mbxid, void *message) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceMbx *mbx;
    SceWaitQ *wq;
    void **p;
    s32 isIntr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    isIntr = sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)message | ((u32)message + 8)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(mbxid, g_threadmanInfo.uidMbxType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019B;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    mbx = UID_CB_TO_DATA(cb, g_threadmanInfo.uidMbxType, SceMbx);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x49, ra, 2, mbxid, message);
    }
    if (wq->numWaitThreads > 0) {
        p = (void **)wq->waitQueue.next->waitArg0;
        if (p != NULL) {
            *p = message;
        }
        wakeFirstWaitThread(uid, 0, isIntr, intr);
    } else if ((ret = mbxAddMessage(mbx, wq, message)) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);
#endif

#if FW_VERSION < 270
s32 sceKernelCancelReceiveMbx(SceUID mbxid, s32 *numWaitThreads) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)numWaitThreads | ((u32)numWaitThreads + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(mbxid, g_threadmanInfo.uidMbxType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019B;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x4D, ra, 2, mbxid, numWaitThreads);
    }
    ret = sceKernelCallUIDObjFunction(uid, 0x86D94883);
    if (numWaitThreads != NULL) {
        *numWaitThreads = ret;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);
#endif

#if FW_VERSION < 270
s32 sceKernelReferMbxStatus(SceUID mbxid, SceKernelMbxInfo *info) {
    SceKernelMbxInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceMbx *mbx;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelMbxInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelMbxInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(mbxid, g_threadmanInfo.uidMbxType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019B;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x4E, ra, 2, mbxid, info);
    }
    cb = uid;
    mbx = UID_CB_TO_DATA(cb, g_threadmanInfo.uidMbxType, SceMbx);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.mbx;
    memset(tmp, 0, infoSize);
    tmp->size = infoSize;
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->numWaitThreads = wq->numWaitThreads;
    tmp->numMessages = mbx->numMessages;
    if (mbx->lastMessage != NULL) {
        tmp->firstMessage = *mbx->lastMessage;
    }
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000067BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00006A50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", mbxAddMessage);
#endif

#if FW_VERSION < 282
s32 func_00006878(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000068A0(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014DF4[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000068C0);
#endif

#if FW_VERSION == 100
s32 func_000068C0(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014DF4, "Mbx", 0x30, D_00015428, NULL, &g_threadmanInfo.uidMbxType) == 0;

    THREADMAN_ASSERT(ok, D_00014D88, D_00014D7C, "initMbx", 0x1F5);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014E18);

INCLUDE_RODATA("nonmatchings/threadman", D_00014E24);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteMsgPipe(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidMsgPipeType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019E;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x50, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014E24, D_00014E18, "sceKernelDeleteMsgPipe", 0xA1);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteMsgPipe(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidMsgPipeType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019E;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x58, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014E24, D_00014E18, "sceKernelDeleteMsgPipe", 0xA1);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);
#endif

#if FW_VERSION < 270
s32 sceKernelReferMsgPipeStatus(SceUID msgpipeid, SceKernelMppInfo *info) {
    SceKernelMppInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceMsgPipe *mpp;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelMppInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelMppInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(msgpipeid, g_threadmanInfo.uidMsgPipeType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019E;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x58, ra, 2, msgpipeid, info);
    }
    cb = uid;
    mpp = UID_CB_TO_DATA(cb, g_threadmanInfo.uidMsgPipeType, SceMsgPipe);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.msgPipe;
    memset(&g_threadmanInfo.tmpInfo.msgPipe, 0, infoSize);
    (&g_threadmanInfo.tmpInfo.msgPipe)->size = infoSize;
    if (cb->name != NULL) {
        strncpy((&g_threadmanInfo.tmpInfo.msgPipe)->name, cb->name, 31);
    }
    (&g_threadmanInfo.tmpInfo.msgPipe)->attr = wq->attr;
    if (mpp->unk4 == 1) {
        (&g_threadmanInfo.tmpInfo.msgPipe)->numSendWaitThreads = wq->numWaitThreads;
    } else if (mpp->unk4 == 2) {
        (&g_threadmanInfo.tmpInfo.msgPipe)->numReceiveWaitThreads = wq->numWaitThreads;
    }
    tmp->bufSize = mpp->bufSize;
    tmp->freeSize = mpp->bufSize - mpp->usedSize;
    size = info->size;
    if ((&g_threadmanInfo.tmpInfo.msgPipe)->size < size) {
        size = tmp->size;
    }
    memcpy(info, &g_threadmanInfo.tmpInfo.msgPipe, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00008828);

INCLUDE_ASM("nonmatchings/threadman", func_000088FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000875C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/threadman", func_0000860C);

INCLUDE_ASM("nonmatchings/threadman", func_000086E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00008A44);
#endif

#if FW_VERSION < 282
s32 func_000087C0(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000087E8(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 *mpp = UID_CB_TO_DATA(cb, type, s32);
    s32 info;
    SceUID blockId;

    if (mpp[5] != 0) {
        sceKernelQueryMemoryInfo(mpp[2], &info, &blockId);
        sceKernelFreePartitionMemory(blockId);
    }
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00008878);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000897C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00008CB0);
#endif

#if FW_VERSION < 150
s32 func_000089A0(SceSysmemUidCB *cb) {
    SceWaitQ *wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);

    wq->unk4 = 0;
    if (--wq->numWaitThreads == 0) {
        SceMsgPipe *mpp = UID_CB_TO_DATA(cb, g_threadmanInfo.uidMsgPipeType, SceMsgPipe);

        mpp->unk4 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014E5C[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000089F0);
#endif

#if FW_VERSION == 100
s32 func_000089F0(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014E5C, "MsgPipe", 0x30, D_00015440, NULL, &g_threadmanInfo.uidMsgPipeType) == 0;

    THREADMAN_ASSERT(ok, D_00014E24, D_00014E18, "initMsgPipe", 0x4C5);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014E78);

INCLUDE_RODATA("nonmatchings/threadman", D_00014E80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteVpl(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x5A, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014E80, D_00014E78, "sceKernelDeleteVpl", 0x8D);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteVpl(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x62, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014E80, D_00014E78, "sceKernelDeleteVpl", 0x8D);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);
#endif

#if FW_VERSION < 270
s32 sceKernelTryAllocateVpl(SceUID vplid, u32 size, void **data) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVpl *vpl;
    void *block;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)data | ((u32)data + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(vplid, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    vpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVplType, SceVpl);
    if (size == 0 || vpl->poolSize < size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201B7;
    }
    block = sceKernelAllocHeapMemory(vpl->heapId, size);
    ret = g_threadmanInfo.logHandler != NULL;
    if (ret) {
        g_threadmanInfo.logHandler(0x5D, ra, 3, vplid, size, block);
    }
    if (block == NULL) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020190;
    }
    *data = block;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);
#endif

#if FW_VERSION < 270
s32 sceKernelFreeVpl(SceUID vplid, void *data) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVpl *vpl;
    SceThread *thread;
    void *mem;
    SceWaitQ *wq;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (k1IsUserMode() && (s32)data < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vplid, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    vpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVplType, SceVpl);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    if (data == NULL || sceKernelFreeHeapMemory(vpl->heapId, data) < 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201B6;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x5E, ra, 2, vplid, data);
    }
    if (wq->numWaitThreads > 0) {
        thread = wq->waitQueue.next;
        mem = sceKernelAllocHeapMemory(vpl->heapId, thread->waitArg1);
        if (mem != NULL) {
            thread->waitArg0 = (s32)mem;
            wakeFirstWaitThread(uid, 0, 0, intr);
        }
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);
#endif

#if FW_VERSION < 270
s32 sceKernelCancelVpl(SceUID vplid, s32 *numWaitThreads) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)numWaitThreads | ((u32)numWaitThreads + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(vplid, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x5F, ra, 2, vplid, numWaitThreads);
    }
    ret = sceKernelCallUIDObjFunction(uid, 0x86D94883);
    if (numWaitThreads != NULL) {
        *numWaitThreads = ret;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);
#endif

#if FW_VERSION < 151
s32 sceKernelReferVplStatus(SceUID vplid, SceKernelVplInfo *info) {
    SceKernelVplInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVpl *vpl;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelVplInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelVplInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(vplid, g_threadmanInfo.uidVplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019C;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x60, ra, 2, vplid, info);
    }
    cb = uid;
    vpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVplType, SceVpl);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.vpl;
    memset(tmp, 0, infoSize);
    tmp->size = infoSize;
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->poolSize = vpl->poolSize;
    tmp->freeSize = sceKernelHeapTotalFreeSize(vpl->heapId);
    tmp->numWaitThreads = wq->numWaitThreads;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000097A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00009AEC);
#endif

#if FW_VERSION < 282
s32 func_00009874(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000989C(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 *vpl = UID_CB_TO_DATA(cb, type, s32);

    if (vpl[1] > 0) {
        sceKernelDeleteHeap(vpl[1]);
    }
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014EC8[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00009918);
#endif

#if FW_VERSION == 100
s32 func_00009918(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014EC8, "Vpl", 0x30, D_00015468, NULL, &g_threadmanInfo.uidVplType) == 0;

    THREADMAN_ASSERT(ok, D_00014E80, D_00014E78, "initVpl", 0x1EC);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014EDC);

INCLUDE_RODATA("nonmatchings/threadman", D_00014EE4);
#endif

#if FW_VERSION < 270
s32 sceKernelDeleteFpl(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x62, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014EE4, D_00014EDC, "sceKernelDeleteFpl", 0xAE);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016664);

INCLUDE_ASM("nonmatchings/threadman", func_00005BF0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005B0C);
#endif

#if FW_VERSION >= 282
s32 func_00005C34(struct Unk_func_00005C34_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005C5C);
#endif

#if FW_VERSION == 282
s32 func_00005C5C(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMutex);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/threadman", func_00005FF0);

INCLUDE_ASM("nonmatchings/threadman", func_00006C80);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelUnlockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutexCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMutexStatus);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/threadman", func_00006C80);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016690);

INCLUDE_ASM("nonmatchings/threadman", func_00006D28);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/threadman", func_00006E00);
#endif

#if FW_VERSION >= 282
s32 func_00006D6C(struct Unk_func_00006D6C_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00006D94);
#endif

#if FW_VERSION == 282
s32 func_00006D94(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00006DB4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);

INCLUDE_RODATA("nonmatchings/threadman", D_000166F8);

INCLUDE_ASM("nonmatchings/threadman", func_00007BB8);

INCLUDE_ASM("nonmatchings/threadman", func_00007BFC);

s32 func_00007CFC(struct Unk_func_00007CFC_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

s32 func_00007D24(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);

INCLUDE_ASM("nonmatchings/threadman", func_0000995C);

INCLUDE_ASM("nonmatchings/threadman", func_00009A30);

INCLUDE_ASM("nonmatchings/threadman", func_00009B08);

INCLUDE_RODATA("nonmatchings/threadman", D_0001671C);

INCLUDE_ASM("nonmatchings/threadman", func_00009B50);

s32 func_00009B94(struct Unk_func_00009B94_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

s32 func_00009BBC(s32 arg0, struct Unk_func_00009BBC_1 *arg1, s32 arg2, s32 arg3) {
    u8 temp_a1;
    struct Unk_func_00009BBC_temp_v0 *temp_v0;

    temp_a1 = arg1->unk15;
    temp_v0 = arg0 + (temp_a1 * 4);
    if (temp_v0->unk14 == 0) {

    } else {
        sceKernelFreePartitionMemory(temp_v0->unk1C, temp_a1);
    }
    sceKernelCallUIDObjCommonFunction(arg0, arg1, arg2, arg3);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00009C3C);

INCLUDE_ASM("nonmatchings/threadman", func_00009D60);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB4C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016754);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB94);

s32 func_0000ABD8(struct Unk_func_0000ABD8_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000AC00);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_0000AC9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelDeleteFpl(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    attr = cb->attr & 0x10;
    if (!k1IsUserMode()) {
        attr = 0x10;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x6A, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014EE4, D_00014EDC, "sceKernelDeleteFpl", 0xAE);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteFpl);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFplCB);

#if FW_VERSION < 150
s32 sceKernelTryAllocateFpl(SceUID fplid, void **data) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceFpl *fpl;
    s32 block;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    block = k1IsUserMode() && (s32)((u32)data | ((u32)data + 4)) < 0;
    if (block) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(fplid, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    fpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidFplType, SceFpl);
    if (fpl->freeList == NULL) {
        if (g_threadmanInfo.logHandler != NULL) {
            g_threadmanInfo.logHandler(0x65, ra, 2, fplid, 0);
        }
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020190;
    }
    block = func_0000BBD0((s32 *)fpl);
    *data = fpl->pool + fpl->blockStride * block;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x65, ra, 2, fplid, block);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateFpl);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeFpl);

#if FW_VERSION < 270
s32 sceKernelCancelFpl(SceUID fplid, s32 *numWaitThreads) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    sceKernelIsIntrContext();
    ret = k1IsUserMode() && (s32)((u32)numWaitThreads | ((u32)numWaitThreads + 4)) < 0;
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(fplid, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 8)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x67, ra, 2, fplid, numWaitThreads);
    }
    ret = sceKernelCallUIDObjFunction(uid, 0x86D94883);
    if (numWaitThreads != NULL) {
        *numWaitThreads = ret;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelFpl);
#endif

#if FW_VERSION < 151
s32 sceKernelReferFplStatus(SceUID fplid, SceKernelFplInfo *info) {
    SceKernelFplInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceFpl *fpl;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelFplInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelFplInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(fplid, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return ret;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x68, ra, 2, fplid, info);
    }
    cb = uid;
    fpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidFplType, SceFpl);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.fpl;
    memset(tmp, 0, infoSize);
    tmp->size = infoSize;
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->blockSize = fpl->blockSize;
    tmp->numBlocks = fpl->numBlocks;
    tmp->freeBlocks = fpl->freeBlocks;
    tmp->numWaitThreads = wq->numWaitThreads;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
s32 sceKernelReferFplStatus(SceUID fplid, SceKernelFplInfo *info) {
    SceKernelFplInfo *tmp;
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceFpl *fpl;
    SceWaitQ *wq;
    u32 size;
    s32 ret;
    s32 infoSize;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    infoSize = sizeof(SceKernelFplInfo);

    size = k1IsUserMode() && (s32)((u32)info | ((u32)info + sizeof(SceKernelFplInfo))) < 0;
    if (size) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelGetUIDcontrolBlockWithType(fplid, g_threadmanInfo.uidFplType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019D;
    }
    cb = uid;
    ret = 0x800200D1;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x68, ra, 2, fplid, info);
    }
    cb = uid;
    fpl = UID_CB_TO_DATA(cb, g_threadmanInfo.uidFplType, SceFpl);
    wq = UID_CB_TO_DATA(cb, g_threadmanInfo.uidWaitQType, SceWaitQ);
    tmp = &g_threadmanInfo.tmpInfo.fpl;
    memset(tmp, 0, infoSize);
    tmp->size = infoSize;
    if (cb->name != NULL) {
        strncpy(tmp->name, cb->name, 31);
    }
    tmp->attr = wq->attr;
    tmp->blockSize = fpl->blockSize;
    tmp->numBlocks = fpl->numBlocks;
    tmp->freeBlocks = fpl->freeBlocks;
    tmp->numWaitThreads = wq->numWaitThreads;
    size = info->size;
    if (tmp->size < size) {
        size = tmp->size;
    }
    memcpy(info, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferFplStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A7CC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/threadman", func_0000A818);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BB7C);
#endif

s32 func_0000BBD0(s32 *fpl) {
    void **p = (void **)fpl[2];
    void **tail;
    void **head;
    s32 ret = -1;

    if (p != NULL) {
        tail = p;
        head = *tail;
        fpl[4]--;
        if (tail == head) {
            tail = NULL;
        } else {
            *tail = *head;
        }
        fpl[2] = (s32)tail;
        *head = NULL;
        ret = ((u8 *)head - (u8 *)fpl[3]) >> 2;
    }
    return ret;
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015500);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A814);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000AB0C);
#endif

#if FW_VERSION < 282
s32 func_0000A8A8(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION < 150
s32 func_0000A8D0(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    s32 *fpl = UID_CB_TO_DATA(cb, type, s32);
    s32 info;
    SceUID blockId;

    sceKernelFreeHeapMemory(g_threadmanInfo.heapId, fpl[3]);
    sceKernelQueryMemoryInfo(fpl[1], &info, &blockId);
    sceKernelFreePartitionMemory(blockId);
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A8D0);
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_00014F18[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000A968);
#endif

#if FW_VERSION == 100
s32 func_0000A968(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_00014F18, "Fpl", 0x30, D_00015480, NULL, &g_threadmanInfo.uidFplType) == 0;

    THREADMAN_ASSERT(ok, D_00014EE4, D_00014EDC, "initFpl", 0x230);
    return 0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000A9F4);

INCLUDE_ASM("nonmatchings/threadman", func_0000AA0C);

s32 func_0000AA80(void) {
    *(volatile u32 *)0xBC60000C = 1;
    *(volatile u32 *)0xBC600008 = 0x30;
    *(volatile u32 *)0xBC600010 = 0;
    __asm__ __volatile__("sync");
    *(volatile u32 *)0xBC600000 = D_00015510;
    __asm__ __volatile__("sync");
    *(volatile u32 *)0xBC600004 = g_threadmanInfo.unk438;
    __asm__ __volatile__("sync");
    __asm__ __volatile__("sync");
    sceKernelEnableIntr(g_threadmanInfo.unk6E8);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00014F2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A918);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB2C);

INCLUDE_ASM("nonmatchings/threadman", func_0000AE84);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000AB04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/threadman", func_0000AEA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/threadman", func_0000AEF8);
#endif

#if FW_VERSION < 150
s32 _sceKernelReturnFromTimerHandler(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000ADAC);

INCLUDE_ASM("nonmatchings/threadman", func_0000AE54);

INCLUDE_ASM("nonmatchings/threadman", func_0000AF9C);
#endif

#if FW_VERSION < 201
void func_0000B258(SceTimer *timer) {
    SceTimer *head = (SceTimer *)&g_threadmanInfo.timers;
    SceTimer *t;

    for (t = head->next; t != head; t = t->next) {
        if (sysClockToU64(&timer->time) < sysClockToU64(&t->time)) {
            break;
        }
    }
    timer->next = t;
    timer->prev = t->prev;
    t->prev = timer;
    timer->prev->next = timer;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", timerUpdate);
#endif

#if FW_VERSION < 270
s32 sceKernelUSec2SysClock(u32 usec, SceKernelSysClock *clock) {
    u32 oldK1 = shiftK1();

    if (k1IsUserMode() && (s32)((u32)clock | ((u32)clock + sizeof(SceKernelSysClock))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    clock->low = usec;
    clock->hi = 0;
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);
#endif

#if FW_VERSION < 150
s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000B634);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);

s64 sceKernelGetSystemTimeWide(void) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    s64 t = func_0000B634();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x6A, ra, 1, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}

u32 sceKernelGetSystemTimeLow(void) {
    return *(volatile u32 *)0xBC600000;
}

void func_0000B7F4(SceKernelSysClock *clock, u32 usec) {
    u64ToSysClock(clock, func_0000B634() + usec);
}

void func_0000B84C(SceKernelSysClock *out, SceKernelSysClock *in) {
    u64ToSysClock(out, func_0000B634() + sysClockToU64(in));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BC20);

INCLUDE_RODATA("nonmatchings/threadman", D_00016778);

INCLUDE_ASM("nonmatchings/threadman", func_0000BC68);

s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000BCD4);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_0001679C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014F74);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", setAlarm);

SceUID sceKernelSetAlarm(u32 clock, void *handler, void *common) {
    SceUID ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (handler == NULL || (k1IsUserMode() && (s32)handler < 0)) {
        setK1(oldK1);
        return 0x800200D3;
    }
    ret = setAlarm(clock, handler, common);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x70, ra, 4, clock, handler, common, ret);
    }
    setK1(oldK1);
    return ret;
}

SceUID sceKernelSetSysClockAlarm(SceKernelSysClock *clock, void *handler, void *common) {
    SceUID ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (handler == NULL || (k1IsUserMode() && IS_USER_ADDR((u32)clock | ((u32)clock + sizeof(SceKernelSysClock))) == 0)
        || (k1IsUserMode() && (s32)handler < 0)) {
        setK1(oldK1);
        return 0x800200D3;
    }
    ret = setAlarm(sysClockToU64(clock), handler, common);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x71, ra, 5, clock->hi, clock->low, handler, common, ret);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BD5C);

INCLUDE_ASM("nonmatchings/threadman", func_0000BF7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000C250);

INCLUDE_ASM("nonmatchings/threadman", timerUpdate);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);

INCLUDE_ASM("nonmatchings/threadman", func_0000C46C);
#endif

#if FW_VERSION < 270
s32 sceKernelCancelAlarm(SceUID alarmid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceTimer *timer;
    s32 ret;
    s32 ok;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.unk440 == alarmid) {
        setK1(oldK1);
        return 0x8002019F;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(alarmid, g_threadmanInfo.uidAlarmType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019F;
    }
    cb = uid;
    ret = k1IsUserMode() && !(cb->attr & 0x10);
    if (ret) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x72, ra, 1, alarmid);
    }
    cb = uid;
    timer = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, SceTimer);
    if (timer->unk10 != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x8002019F;
    }
#if FW_VERSION >= 152
    if (timer == g_threadmanInfo.timerCursor) {
        g_threadmanInfo.timerCursor = timer->next;
    }
#endif
    timer->next->prev = timer->prev;
    timer->prev->next = timer->next;
    timer->prev = timer;
    timer->next = timer;
    if (sceKernelIsIntrContext()) {
        timer->unk10 = 1;
        ret = deleteUIDDeferred(alarmid);
    } else {
        ret = sceKernelDeleteUID(alarmid);
        ok = ret == 0;
        THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "sceKernelCancelAlarm", FW_VERSION < 150 ? 0x366 : FW_VERSION < 152 ? 0x372 : 0x380);
    }
    if (ret == 0) {
        timerUpdate();
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelAlarm);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000C048);
#endif

#if FW_VERSION < 150
s32 func_0000BDC8(u32 *clock, void *handler, void *arg) {
    SceSysmemUidCB *cb;
    u32 *timer;
    void **delay;
    u64 t = ((u64)clock[1] << 32) + clock[0];

    if ((s64)(t - func_0000B634()) < 0) {
        return 0x800201A8;
    }
    cb = func_0000BFC0();
    if (cb == NULL) {
        return 0x80020190;
    }
    delay = UID_CB_TO_DATA(cb, g_threadmanInfo.uidDelayType, void *);
    timer = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, u32);
    timer[2] = clock[0];
    timer[3] = clock[1];
    delay[0] = handler;
    delay[1] = arg;
    func_0000B258(timer);
    timerUpdate();
    return cb->uid;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000BEBC);

SceSysmemUidCB *func_0000BFC0(void) {
    SceSysmemUidCB *uid;
    SceThread *node;

    if (g_threadmanInfo.unk5B8 > 0) {
        node = g_threadmanInfo.unk5C4.next;
        g_threadmanInfo.unk5B8--;
        node->next->prev = node->prev;
        node->prev->next = node->next;
        uid = (SceSysmemUidCB *)((u8 *)node - g_threadmanInfo.uidTimerType->size * 4);
    } else if (sceKernelCreateUID(g_threadmanInfo.uidDelayType, D_0001679C, 0, &uid) != 0) {
        return NULL;
    }
    return uid;
}

void func_0000C048(SceSysmemUidCB *cb) {
    SceThreadQueue *queue;
    SceThread *node = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, SceThread);
    s32 count = g_threadmanInfo.unk5B8;

    if (count < 32) {
        queue = &g_threadmanInfo.unk5C4;
        node->prev = queue->prev;
        node->next = (SceThread *)queue;
        queue->prev = node;
        g_threadmanInfo.unk5B8 = count + 1;
        node->prev->next = node;
    } else {
        node->currentPriority = 1;
        deleteUIDDeferred(cb->uid);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000C638);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferAlarmStatus);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000C274);
#endif

#if FW_VERSION < 151
SceUID sceKernelCreateVTimer(const char *name, void *opt) {
    SceSysmemUidCB *uid;
    SceVTimer *vt;
    s32 ret;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if ((k1IsUserMode() && IS_USER_ADDR(name) == 0) || (k1IsUserMode() && IS_USER_ADDR((u32)opt | ((u32)opt + 4)) == 0)) {
        setK1(oldK1);
        return 0x800200D3;
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    ret = sceKernelCreateUID(g_threadmanInfo.uidVTimerType, name, k1IsUserMode() ? 0xFF : 0, &uid);
    if (ret != 0) {
        setK1(oldK1);
        return ret;
    }
    intr = sceKernelCpuSuspendIntr();
    vt = UID_CB_TO_DATA(uid, g_threadmanInfo.uidVTimerType, SceVTimer);
    vt->active = 0;
    vt->handler = NULL;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x74, ra, 1, uid->uid);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return uid->uid;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVTimer);
#endif

#if FW_VERSION < 152
s32 sceKernelDeleteVTimer(SceUID id) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    s32 intr;
    s32 ok;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(id, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 0x10)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x75, ra, 1, id);
    }
    ok = sceKernelDeleteUID(id) == 0;
    THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "sceKernelDeleteVTimer", FW_VERSION < 150 ? 0x46E : FW_VERSION < 152 ? 0x47A : 0x492);
    timerUpdate();
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVTimer);
#endif

#if FW_VERSION < 270
s32 sceKernelGetVTimerBase(SceUID vtid, SceKernelSysClock *base) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVTimer *vt;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (k1IsUserMode() && (s32)((u32)base | ((u32)base + sizeof(SceKernelSysClock))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        *base = vt->base;
    } else {
        u64ToSysClock(base, 0);
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x76, ra, 3, vtid, base->hi, base->low);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerBase);
#endif

#if FW_VERSION < 201
s64 sceKernelGetVTimerBaseWide(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVTimer *vt;
    u64 t;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        t = sysClockToU64(&vt->base);
    } else {
        t = 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x7D, ra, 2, vtid, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s64 sceKernelGetVTimerBaseWide(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceVTimer *vt;
    u64 t;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    cb = uid;
    attr = cb->attr & 1;
    if (!k1IsUserMode()) {
        attr = 1;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        t = sysClockToU64(&vt->base);
    } else {
        t = 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x85, ra, 2, vtid, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 270) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerBaseWide);
#endif

#if FW_VERSION < 201
s32 sceKernelGetVTimerTime(SceUID vtid, SceKernelSysClock *time) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVTimer *vt;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (k1IsUserMode() && (s32)((u32)time | ((u32)time + sizeof(SceKernelSysClock))) < 0) {
        setK1(oldK1);
        return 0x800200D3;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        u64ToSysClock(time, func_0000B634() - sysClockToU64(&vt->base));
    } else {
        *time = vt->base;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x77, ra, 3, vtid, time->hi, time->low);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerTime);
#endif

#if FW_VERSION < 201
s64 sceKernelGetVTimerTimeWide(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceVTimer *vt;
    u64 t;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        t = func_0000B634() - sysClockToU64(&vt->base);
    } else {
        t = sysClockToU64(&vt->base);
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x7E, ra, 2, vtid, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s64 sceKernelGetVTimerTimeWide(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceVTimer *vt;
    u64 t;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    cb = uid;
    attr = cb->attr & 1;
    if (!k1IsUserMode()) {
        attr = 1;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return -1;
    }
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    if (vt->active != 0) {
        t = func_0000B634() - sysClockToU64(&vt->base);
    } else {
        t = sysClockToU64(&vt->base);
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x86, ra, 2, vtid, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 270) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerTimeWide);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerTime);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerTimeWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStopVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerHandlerWide);

#if FW_VERSION < 152
s32 sceKernelCancelVTimerHandler(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceTimer *timer;
    SceVTimer *vt;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.unk440 == vtid) {
        setK1(oldK1);
        return 0x800201BF;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x7C, ra, 1, vtid);
    }
    cb = uid;
    timer = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, SceTimer);
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    timer->next->prev = timer->prev;
    timer->prev->next = timer->next;
    timer->prev = timer;
    timer->next = timer;
    vt->handler = NULL;
    timerUpdate();
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 270
s32 sceKernelCancelVTimerHandler(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceTimer *timer;
    SceVTimer *vt;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.unk440 == vtid) {
        setK1(oldK1);
        return 0x800201BF;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 2)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x7C, ra, 1, vtid);
    }
    cb = uid;
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    timer = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, SceTimer);
    if (vt->active != 0 && vt->handler != NULL) {
        if (timer == g_threadmanInfo.timerCursor) {
            g_threadmanInfo.timerCursor = timer->next;
        }
        timer->next->prev = timer->prev;
        timer->prev->next = timer->next;
        timer->prev = timer;
        timer->next = timer;
        timerUpdate();
    }
    vt->handler = NULL;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelCancelVTimerHandler(SceUID vtid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceTimer *timer;
    SceVTimer *vt;
    s32 intr;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.unk440 == vtid) {
        setK1(oldK1);
        return 0x800201BF;
    }
    intr = sceKernelCpuSuspendIntr();
    if (sceKernelGetUIDcontrolBlockWithType(vtid, g_threadmanInfo.uidVTimerType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800201BE;
    }
    cb = uid;
    attr = cb->attr & 2;
    if (!k1IsUserMode()) {
        attr = 2;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x84, ra, 1, vtid);
    }
    cb = uid;
    vt = UID_CB_TO_DATA(cb, g_threadmanInfo.uidVTimerType, SceVTimer);
    timer = UID_CB_TO_DATA(cb, g_threadmanInfo.uidTimerType, SceTimer);
    if (vt->active != 0 && vt->handler != NULL) {
        if (timer == g_threadmanInfo.timerCursor) {
            g_threadmanInfo.timerCursor = timer->next;
        }
        timer->next->prev = timer->prev;
        timer->prev->next = timer->next;
        timer->prev = timer;
        timer->next = timer;
        timerUpdate();
    }
    vt->handler = NULL;
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVTimerHandler);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVTimerStatus);

#if FW_VERSION >= 150
s32 _sceKernelReturnFromTimerHandler(void) {
    return 0;
}

s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s64 sceKernelGetSystemTimeWide(void) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();
    s64 t = func_0000B634();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x6A, ra, 1, (u32)t);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return t;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeWide);
#endif

#if FW_VERSION >= 150
u32 sceKernelGetSystemTimeLow(void) {
    return *(volatile u32 *)0xBC600000;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000B7F4(SceKernelSysClock *clock, u32 usec) {
    u64ToSysClock(clock, func_0000B634() + usec);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000B84C(SceKernelSysClock *out, SceKernelSysClock *in) {
    u64ToSysClock(out, func_0000B634() + sysClockToU64(in));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000B84C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
SceUID sceKernelSetAlarm(u32 clock, void *handler, void *common) {
    SceUID ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (handler == NULL || (k1IsUserMode() && (s32)handler < 0)) {
        setK1(oldK1);
        return 0x800200D3;
    }
    ret = setAlarm(clock, handler, common);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x70, ra, 4, clock, handler, common, ret);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
SceUID sceKernelSetSysClockAlarm(SceKernelSysClock *clock, void *handler, void *common) {
    SceUID ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (handler == NULL || (k1IsUserMode() && IS_USER_ADDR((u32)clock | ((u32)clock + sizeof(SceKernelSysClock))) == 0)
        || (k1IsUserMode() && (s32)handler < 0)) {
        setK1(oldK1);
        return 0x800200D3;
    }
    ret = setAlarm(sysClockToU64(clock), handler, common);
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x71, ra, 5, clock->hi, clock->low, handler, common, ret);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000D994);

INCLUDE_ASM("nonmatchings/threadman", func_0000BEBC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015518);

INCLUDE_RODATA("nonmatchings/threadman", D_00015530);

INCLUDE_RODATA("nonmatchings/threadman", D_00015548);

INCLUDE_RODATA("nonmatchings/threadman", D_00015560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000D820);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000DBF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000DDB0);

INCLUDE_ASM("nonmatchings/threadman", func_0000AA0C);

INCLUDE_ASM("nonmatchings/threadman", func_0000AA80);

INCLUDE_ASM("nonmatchings/threadman", func_0000DEC0);

INCLUDE_ASM("nonmatchings/threadman", func_0000DF4C);

INCLUDE_ASM("nonmatchings/threadman", setAlarm);
#endif

#if FW_VERSION < 282
s32 func_0000DDDC(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE04(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

s32 func_0000DE24(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE4C(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

s32 func_0000DE6C(void *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE94(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_0000E61C);

INCLUDE_ASM("nonmatchings/threadman", func_0000E674);
#endif

#if FW_VERSION < 150
s32 func_0000E674(void *arg0, void *arg1) {
    void *temp_v1;

    sceKernelCallUIDObjCommonFunction();
    temp_v1 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v1, void **, 4) = temp_v1;
    M2C_FIELD(temp_v1, void **, 0) = temp_v1;
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000E674(void *arg0, void *arg1) {
    void *temp_a0;

    sceKernelCallUIDObjCommonFunction();
    temp_a0 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_a0, void **, 4) = temp_a0;
    M2C_FIELD(temp_a0, void **, 0) = temp_a0;
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION < 152
s32 func_0000DF00(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    SceThreadQueue *link = UID_CB_TO_DATA(cb, type, SceThreadQueue);
    SceThread *next = link->next;

    next->prev = link->prev;
    link->prev->next = next;
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_0000DF00(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000DF3C);
#endif

#if FW_VERSION == 100
s32 func_0000DF3C(void) {
    s32 ok;

    ok = sceKernelCreateUIDtype("Timer", 0x14, D_000154E0, NULL, &g_threadmanInfo.uidTimerType) == 0;
    THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "initAlarm", 0x752);
    ok = sceKernelCreateUIDtypeInherit("Timer", "Delay", 0x30, D_00015498, NULL, &g_threadmanInfo.uidDelayType) == 0;
    THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "initAlarm", 0x754);
    ok = sceKernelCreateUIDtypeInherit("Timer", "Alarm", 0x30, D_000154B0, NULL, &g_threadmanInfo.uidAlarmType) == 0;
    THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "initAlarm", 0x755);
    ok = sceKernelCreateUIDtypeInherit("Timer", "VTimer", 0x30, D_000154C8, NULL, &g_threadmanInfo.uidVTimerType) == 0;
    THREADMAN_ASSERT(ok, D_00014F74, D_00014F2C, "initAlarm", 0x756);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);

INCLUDE_ASM("nonmatchings/threadman", func_0000E8AC);

INCLUDE_ASM("nonmatchings/threadman", func_0000EA04);

INCLUDE_RODATA("nonmatchings/threadman", D_000167C8);

INCLUDE_RODATA("nonmatchings/threadman", D_000167E0);

INCLUDE_RODATA("nonmatchings/threadman", D_000167F8);

INCLUDE_RODATA("nonmatchings/threadman", D_00016810);

INCLUDE_ASM("nonmatchings/threadman", func_0000EB1C);

INCLUDE_ASM("nonmatchings/threadman", func_0000EBE0);

INCLUDE_ASM("nonmatchings/threadman", func_0000EBF8);

INCLUDE_ASM("nonmatchings/threadman", func_0000EC6C);

INCLUDE_ASM("nonmatchings/threadman", func_0000ECF0);

INCLUDE_ASM("nonmatchings/threadman", func_0000ED7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000EE74);

INCLUDE_ASM("nonmatchings/threadman", setAlarm);

s32 func_0000F140(struct Unk_func_0000F140_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

s32 func_0000F168(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

s32 func_0000F188(struct Unk_func_0000F188_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}

s32 func_0000F1B0(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}

s32 func_0000F1D0(struct Unk_func_0000F1D0_0 *arg0) {
    sceKernelCallUIDObjCommonFunction();
    return arg0->unkC;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_0000F288);
#endif

#if FW_VERSION == 282
s32 func_0000F1F8(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000F218(struct Unk_func_0000F218_0 *arg0, struct Unk_func_0000F218_1 *arg1) {
    struct Unk_func_0000F218_temp_a0 *temp_a0;

    sceKernelCallUIDObjCommonFunction();
    temp_a0 = (u8 *)arg0 + (arg1->unk15 * 4);
    temp_a0->unk10 = 0;
    temp_a0->unk4 = temp_a0;
    temp_a0->unk0 = temp_a0;
    return arg0->unkC;
}

s32 func_0000F264(void) {
    sceKernelCallUIDObjCommonFunction();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateKTLS);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeKTLS);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadKTLS);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000E7A8);
#endif

#if FW_VERSION < 282
void sceKernelGetKTLS(s32 arg0) {
    sceKernelGetThreadKTLS(arg0, 0, 1);
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000E524);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000F698);

void sceKernelGetKTLS(s32 arg0) {
    sceKernelGetThreadKTLS(arg0, 0, 1);
}
#endif

INCLUDE_ASM("nonmatchings/threadman", module_bootstart);

#if FW_VERSION < 150
s32 func_0000ED30(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_0000ED50(void) {
    return -1;
}
#endif

#if FW_VERSION < 150
s32 sceKernelSetThreadmanLogHandler(SceThreadmanLogHandler handler, SceThreadmanInfo **info) {
    g_threadmanInfo.logHandler = handler;
    if (info != NULL) {
        *info = &g_threadmanInfo;
    }
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000FCC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000EFD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", deleteUIDDeferred);

void func_0000F034(SceThread *thread) {
    u32 prio = thread->currentPriority;
    SceThread *queue;

    g_threadmanInfo.readyPriorityMask[prio >> 5] |= 1 << (prio & 0x1F);
    queue = (SceThread *)&g_threadmanInfo.readyQueue[prio];
    thread->prev = queue->prev;
    queue->prev = thread;
    thread->next = queue;
    thread->prev->next = thread;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000F258);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000103C4);

INCLUDE_RODATA("nonmatchings/threadman", D_000169B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000F5B4);
#endif

#if FW_VERSION < 150
void func_0000ED74(s32 id, s32 nargs, s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 intr = sceKernelCpuSuspendIntr();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0, NULL, nargs + 1, id, a0, a1, a2, a3);
    }
    sceKernelCpuResumeIntr(intr);
}

INCLUDE_ASM("nonmatchings/threadman", func_0000EE28);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000EE44);

INCLUDE_ASM("nonmatchings/threadman", deleteUIDDeferred);

INCLUDE_ASM("nonmatchings/threadman", func_0000F034);

void func_0000F08C(SceThread *thread) {
    u32 prio = thread->currentPriority;
    SceThread *pos = g_threadmanInfo.readyQueue[prio].next;

    thread->prev = pos->prev;
    pos->prev = thread;
    g_threadmanInfo.readyPriorityMask[prio >> 5] |= 1 << (prio & 0x1F);
    thread->next = pos;
    thread->prev->next = thread;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000F0E4);

INCLUDE_ASM("nonmatchings/threadman", func_0000F13C);

INCLUDE_ASM("nonmatchings/threadman", func_0000F1EC);
#endif

#if FW_VERSION >= 282
s32 func_0000FD6C(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000FD74);

INCLUDE_ASM("nonmatchings/threadman", deleteUIDDeferred);

INCLUDE_ASM("nonmatchings/threadman", func_0000FF9C);

INCLUDE_ASM("nonmatchings/threadman", func_0000FFF4);

INCLUDE_ASM("nonmatchings/threadman", func_00010484);
#endif

INCLUDE_RODATA("nonmatchings/threadman", D_00016928);

INCLUDE_RODATA("nonmatchings/threadman", D_00016930);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/threadman", D_00015064);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00015078);

INCLUDE_RODATA("nonmatchings/threadman", D_00015094);

INCLUDE_RODATA("nonmatchings/threadman", D_000150A8);

INCLUDE_RODATA("nonmatchings/threadman", D_000150BC);

INCLUDE_RODATA("nonmatchings/threadman", D_000150C8);

INCLUDE_RODATA("nonmatchings/threadman", D_000150D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00015A14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_000150F0);

INCLUDE_RODATA("nonmatchings/threadman", D_00015100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_0000FFA4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);
#endif

#if FW_VERSION == 150
s32 sceKernelExitThread(s32 status) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || g_threadmanInfo.currentThread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (status < 0) {
        status = 0x800200D2;
    }
    g_threadmanInfo.currentThread->exitStatus = status;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x13, ra, 1, status);
    }
    func_000106E4(0, g_threadmanInfo.currentThread->exitStatus);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);
#endif

#if FW_VERSION == 150
s32 sceKernelExitDeleteThread(s32 status) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || g_threadmanInfo.currentThread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (status < 0) {
        status = 0x800200D2;
    }
    g_threadmanInfo.currentThread->exitStatus = status;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x14, ra, 1, status);
    }
    func_000106E4(1, g_threadmanInfo.currentThread->exitStatus);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010848);

s32 sceKernelSuspendDispatchThread(void) {
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020066;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x17, ra, 0);
    }
    ret = 0;
    if (g_threadmanInfo.dispatchDisabled == 0) {
        g_threadmanInfo.dispatchDisabled = 1;
        ret = 1;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelGetThreadExitStatus(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    ret = thread->exitStatus;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1F, ra, 2, thid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 sceKernelGetThreadExitStatus(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    u32 attr;
    SceThread *thread;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    attr = cb->attr & 1;
    if (!k1IsUserMode()) {
        attr = 1;
    }
    if (attr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    ret = thread->exitStatus;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1F, ra, 2, thid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void *sceKernelGetSyscallRA(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || thread->unk100 == NULL) {
        goto fail;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x27, ra, 1, thread->unk100->ra);
    }
    setK1(oldK1);
    return thread->unk100->ra;
fail:
    setK1(oldK1);
    return NULL;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSyscallRA);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelExtendKernelStack);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00011B68(void *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0xD8) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(M2C_FIELD(arg0, void **, 0x78), 0, M2C_FIELD(arg0, u32 *, 0x7C));
        if (M2C_FIELD(arg0, s32 *, 0xD8) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x84), 0, M2C_FIELD(arg0, u32 *, 0x88));
            var_s0 = M2C_FIELD(arg0, void **, 0x8C);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x8C);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 8));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void func_00011B68(void *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        memset(M2C_FIELD(arg0, s32 *, 0x70), 0, M2C_FIELD(arg0, s32 *, 0x74));
        if (M2C_FIELD(arg0, s32 *, 0xD0) < 0) {
            memset(M2C_FIELD(arg0, s32 *, 0x7C), 0, M2C_FIELD(arg0, s32 *, 0x80));
            var_s0 = M2C_FIELD(arg0, void **, 0x84);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x84);
        }
        if (var_s0 != NULL) {
            do {
                memset(M2C_FIELD(var_s0, s32 *, 4), 0, M2C_FIELD(var_s0, s32 *, 8));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00011C0C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadKernelStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadDebugStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015578);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00012904);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00012F30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceKernelSetThreadmanLogHandler(SceThreadmanLogHandler handler, SceThreadmanInfo **info) {
    g_threadmanInfo.logHandler = handler;
    if (info != NULL) {
        *info = &g_threadmanInfo;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00012FD8);

void func_0000F0E4(SceThread *thread, u32 prio) {
    SceThread *next = thread->next;
    SceThread *prev = thread->prev;

    if (next == prev) {
        if (next != thread) {
            g_threadmanInfo.readyPriorityMask[prio >> 5] &= ~(1 << (prio & 0x1F));
        }
    }
    next->prev = prev;
    thread->prev->next = next;
}

INCLUDE_ASM("nonmatchings/threadman", func_0001313C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x108), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x100), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
SceUID sceKernelGetThreadId(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1D, ra, 0);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->uid;
}

s32 sceKernelGetThreadCurrentPriority(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1E, ra, 1, thread->currentPriority);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->currentPriority;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelGetUserLevel(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x25, ra, 1, (thread->attr >> 28) ^ 8);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return (thread->attr >> 28) ^ 8;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetUserLevel);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
s32 sceKernelIsUserModeThread(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x26, ra, 1, thread->attr >> 31);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->attr >> 31;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelIsUserModeThread);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000124A0);

s32 sceKernelCheckThreadKernelStack(void) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x29, ra, 0);
    }
    setK1(oldK1);
    return func_000124A0();
}

s32 sceKernelGetSystemStatusFlag(void) {
    return D_00016480;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceKernelRegisterDeadThreadHandler(s32 arg0) {
    D_00015CD4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);

s32 func_000136C0(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_000136E0);

void threadReturnStub(void) {
    register s32 status asm("$2"); /* the thread entry's return value */

    sceKernelExitThread(status);
}

INCLUDE_ASM("nonmatchings/threadman", func_00013710);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0001335C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EE3C);

INCLUDE_ASM("nonmatchings/threadman", deleteUIDDeferred);

void func_0000F034(SceThread *thread) {
    u32 prio = thread->currentPriority;
    SceThread *queue;

    g_threadmanInfo.readyPriorityMask[prio >> 5] |= 1 << (prio & 0x1F);
    queue = (SceThread *)&g_threadmanInfo.readyQueue[prio];
    thread->prev = queue->prev;
    queue->prev = thread;
    thread->next = queue;
    thread->prev->next = thread;
}

void func_0000F08C(SceThread *thread) {
    u32 prio = thread->currentPriority;
    SceThread *pos = g_threadmanInfo.readyQueue[prio].next;

    thread->prev = pos->prev;
    pos->prev = thread;
    g_threadmanInfo.readyPriorityMask[prio >> 5] |= 1 << (prio & 0x1F);
    thread->next = pos;
    thread->prev->next = thread;
}

void func_0000F0E4(SceThread *thread, u32 prio) {
    SceThread *next = thread->next;
    SceThread *prev = thread->prev;

    if (next == prev) {
        if (next != thread) {
            g_threadmanInfo.readyPriorityMask[prio >> 5] &= ~(1 << (prio & 0x1F));
        }
    }
    next->prev = prev;
    thread->prev->next = next;
}

void func_0000F13C(SceThread *thread, s32 intr) {
    SceThread *cur = g_threadmanInfo.currentThread;

    if (thread->currentPriority < cur->currentPriority && g_threadmanInfo.dispatchDisabled == 0) {
        if (intr != 0) {
            cur->status = THREAD_READY;
            func_0000F08C(cur);
            thread->status = THREAD_RUNNING;
            g_threadmanInfo.nextThread = thread;
        } else {
            thread->status = THREAD_READY;
            func_0000F034(thread);
            g_threadmanInfo.nextThread = NULL;
        }
        func_000007F4(0, intr);
    } else {
        thread->status = THREAD_READY;
        func_0000F034(thread);
    }
}

INCLUDE_ASM("nonmatchings/threadman", func_0000F1EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000F234);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016984);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000F378);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000106E4);

INCLUDE_ASM("nonmatchings/threadman", func_00013C70);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00014E9C);

INCLUDE_ASM("nonmatchings/threadman", func_00015050);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_00013B38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0001415C);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000F50C);
#endif

#if FW_VERSION == 100
void func_0000F50C(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;
    s32 var_a3;

    if (arg1 != 0) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0x7C);
        var_a3 = M2C_FIELD(arg0, s32 *, 0x80);
    } else {
        var_a2 = M2C_FIELD(arg0, s32 *, 0x70);
        var_a3 = M2C_FIELD(arg0, s32 *, 0x74);
    }
    Kprintf("\nThread (thid=0x%x) stack overflow\n Stack = 0x%x, Stack size = 0x%x, SP = 0x%x\n", M2C_FIELD(arg0, s32 *, 8), var_a2, var_a3, arg2);
    func_0000F378(arg0 - (M2C_FIELD(D_00015B18, u8 *, 0x15) * 4));
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_0000F570);

INCLUDE_ASM("nonmatchings/threadman", func_0000F880);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010CFC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000102C8);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000106E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_000116C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/threadman", func_00011574);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00011940);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/threadman", func_00012050);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExtendKernelStack);
#endif

#if FW_VERSION >= 350
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(M2C_FIELD(arg0, void **, 0x90), 0, M2C_FIELD(arg0, u32 *, 0x94));
        if (M2C_FIELD(arg0, s32 *, 0x14) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x9C), 0, M2C_FIELD(arg0, u32 *, 0xA0));
            var_s0 = M2C_FIELD(arg0, void **, 0xA4);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0xA4);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 0xC));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset((void *) arg0->unk88, 0, (u32) arg0->unk8C);
        if (M2C_FIELD(arg0, s32 *, 0x14) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x94), 0, M2C_FIELD(arg0, u32 *, 0x98));
            var_s0 = M2C_FIELD(arg0, void **, 0x9C);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x9C);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 0xC));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(arg0->unk84, 0, arg0->unk88);
        if (M2C_FIELD(arg0, s32 *, 0x14) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x90), 0, M2C_FIELD(arg0, u32 *, 0x94));
            var_s0 = M2C_FIELD(arg0, void **, 0x98);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x98);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 0xC));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION == 282
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    struct Unk_func_000127F8_var_s0 *var_s0;

    if (arg0->unkD8 & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(arg0->unk78, 0, arg0->unk7C);
        if (arg0->unkD8 < 0) {
            sceKernelMemset(arg0->unk84, 0, arg0->unk88);
            var_s0 = arg0->unk8C;
        } else {
            var_s0 = arg0->unk8C;
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(var_s0->unk4, 0, var_s0->unkC);
                var_s0 = var_s0->unk0;
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0001289C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadKernelStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadDebugStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdOwner);

INCLUDE_RODATA("nonmatchings/threadman", D_000169E0);

INCLUDE_ASM("nonmatchings/threadman", func_00013BEC);
#endif

#if FW_VERSION >= 310
s32 module_reboot_before(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelReleaseExceptionHandler(0xB, &func_00015B40);
    sceKernelReleaseIntrHandler(D_00017AFC);
    sceKernelReleaseIntrHandler(0x41);
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceKernelSetThreadmanLogHandler(SceThreadmanLogHandler handler, SceThreadmanInfo **info) {
    g_threadmanInfo.logHandler = handler;
    if (info != NULL) {
        *info = &g_threadmanInfo;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00013C4C);

INCLUDE_ASM("nonmatchings/threadman", func_00013D58);

INCLUDE_ASM("nonmatchings/threadman", func_00013DB0);
#endif

#if FW_VERSION < 150
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(g_threadmanInfo.currentThread->unk100, s32 *, 0x18));
}
#endif

#if FW_VERSION >= 350
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x128), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x120), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x11C), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x118), s32 *, 0x18));
}
#endif

#if FW_VERSION == 282
void _sceKernelExitThread(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(g_threadmanInfo.currentThread, void **, 0x110), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetUserLevel);

INCLUDE_ASM("nonmatchings/threadman", sceKernelIsUserModeThread);

INCLUDE_ASM("nonmatchings/threadman", func_00014130);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadKernelStack);

s32 sceKernelGetSystemStatusFlag(void) {
    return D_000172F4;
}

s32 sceKernelRegisterDeadThreadHandler(s32 arg0) {
    D_000173BC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);

s32 func_0001444C(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_0001446C);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
void threadReturnStub(void) {
    register s32 status asm("$2"); /* the thread entry's return value */

    sceKernelExitThread(status);
}
#endif

#if FW_VERSION < 150
s32 sceKernelExitThread(s32 status) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || g_threadmanInfo.currentThread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (status < 0) {
        status = 0x800200D2;
    }
    g_threadmanInfo.currentThread->exitStatus = status;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x13, ra, 1, status);
    }
    func_000106E4(0, g_threadmanInfo.currentThread->exitStatus);
}

s32 sceKernelExitDeleteThread(s32 status) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || g_threadmanInfo.currentThread->unk44 != 0) {
        setK1(oldK1);
        return 0x80020064;
    }
    if (status < 0) {
        status = 0x800200D2;
    }
    g_threadmanInfo.currentThread->exitStatus = status;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x14, ra, 1, status);
    }
    func_000106E4(1, g_threadmanInfo.currentThread->exitStatus);
}

INCLUDE_ASM("nonmatchings/threadman", func_000109C4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_000110A0);

s32 sceKernelSuspendDispatchThread(void) {
    s32 intr;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    intr = sceKernelCpuSuspendIntr();
    if (intr == 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020066;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x17, ra, 0);
    }
    ret = 0;
    if (g_threadmanInfo.dispatchDisabled == 0) {
        g_threadmanInfo.dispatchDisabled = 1;
        ret = 1;
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

SceUID sceKernelGetThreadId(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1D, ra, 0);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->uid;
}

s32 sceKernelGetThreadCurrentPriority(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1E, ra, 1, thread->currentPriority);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->currentPriority;
}

s32 sceKernelGetThreadExitStatus(SceUID thid) {
    SceSysmemUidCB *cb;
    SceSysmemUidCB *uid;
    SceThread *thread;
    s32 ret;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (sceKernelGetUIDcontrolBlockWithType(thid, g_threadmanInfo.uidThreadType, &uid) != 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x80020198;
    }
    cb = uid;
    if (k1IsUserMode() && !(cb->attr & 1)) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D1;
    }
    thread = UID_CB_TO_DATA(cb, g_threadmanInfo.uidThreadType, SceThread);
    ret = thread->exitStatus;
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x1F, ra, 2, thid, ret);
    }
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return ret;
}

s32 sceKernelGetUserLevel(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x25, ra, 1, (thread->attr >> 28) ^ 8);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return (thread->attr >> 28) ^ 8;
}

s32 sceKernelIsUserModeThread(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x26, ra, 1, thread->attr >> 31);
    }
    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0x80020064;
    }
    setK1(oldK1);
    return thread->attr >> 31;
}

void *sceKernelGetSyscallRA(void) {
    SceThread *thread = g_threadmanInfo.currentThread;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext() || thread->unk100 == NULL) {
        goto fail;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x27, ra, 1, thread->unk100->ra);
    }
    setK1(oldK1);
    return thread->unk100->ra;
fail:
    setK1(oldK1);
    return NULL;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelExtendKernelStack);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00012478);

INCLUDE_ASM("nonmatchings/threadman", func_0001251C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000123E0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_000124A0);

s32 sceKernelCheckThreadKernelStack(void) {
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();

    if (sceKernelIsIntrContext()) {
        setK1(oldK1);
        return 0;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x29, ra, 0);
    }
    setK1(oldK1);
    return func_000124A0();
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

void func_000126C4(SceThread *thread, SceKernelSysClock *out) {
    u64 clocks = ((u64)thread->runClocksHi << 32) + thread->runClocksLow;

    if (g_threadmanInfo.currentThread == thread) {
        clocks += func_0000B634() - sysClockToU64(&g_threadmanInfo.lastSwitchTime);
    }
    u64ToSysClock(out, clocks);
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadKernelStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", func_00012F3C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadDebugStatus);

s32 sceKernelGetSystemStatusFlag(void) {
    return g_threadmanInfo.systemStatusFlag;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0001449C);

INCLUDE_ASM("nonmatchings/threadman", func_0001472C);

INCLUDE_ASM("nonmatchings/threadman", func_000149B0);

INCLUDE_ASM("nonmatchings/threadman", func_00014AF4);

INCLUDE_ASM("nonmatchings/threadman", func_00014F74);

INCLUDE_ASM("nonmatchings/threadman", func_00015128);
#endif

#if FW_VERSION < 150
void func_000153A8(SceKernelSystemStatus *status, s32 intr) {
    memset(status, 0, sizeof(SceKernelSystemStatus));
    status->size = sizeof(SceKernelSystemStatus);
    if (sceKernelIsIntrContext()) {
        status->status = 4;
    } else if (intr == 0) {
        status->status = 3;
    } else if (g_threadmanInfo.dispatchDisabled != 0) {
        status->status = 1;
    } else {
        status->status = 0;
    }
    status->idleClocksLow = g_threadmanInfo.idleThread->runClocksLow;
    status->idleClocksHi = g_threadmanInfo.idleThread->runClocksHi;
    status->threadSwitchCount = g_threadmanInfo.threadSwitchCount;
    status->vfpuSwitchCount = g_threadmanInfo.vfpuSwitchCount;
    status->comesOutOfIdleCount = g_threadmanInfo.idleThread->intrPreemptCount;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_000153A8);
#endif

#if FW_VERSION < 150
s32 sceKernelReferSystemStatus(SceKernelSystemStatus *status) {
    void *tmp;
    u32 size;
    void *ra = getRa();
    u32 oldK1 = shiftK1Noreorder();
    s32 intr = sceKernelCpuSuspendIntr();

    if (k1IsUserMode() && (s32)((u32)status | ((u32)status + 0x1C)) < 0) {
        sceKernelCpuResumeIntr(intr);
        setK1(oldK1);
        return 0x800200D3;
    }
    if (g_threadmanInfo.logHandler != NULL) {
        g_threadmanInfo.logHandler(0x89, ra, 1, status);
    }
    tmp = &g_threadmanInfo.tmpInfo;
    func_000153A8(tmp, intr);
    size = status->size;
    if (g_threadmanInfo.tmpInfo.size < size) {
        size = g_threadmanInfo.tmpInfo.size;
    }
    memcpy(status, tmp, size);
    sceKernelCpuResumeIntr(intr);
    setK1(oldK1);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);
#endif

#if FW_VERSION < 270
s32 func_00013A4C(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap) {
    SceThread *thread;
    SceThreadQueue *q;

    sceKernelCallUIDObjCommonFunction(cb, type, funcId, ap);
    thread = UID_CB_TO_DATA(cb, type, SceThread);
    memset(thread, 0, sizeof(SceThread));
    thread->uid = cb->uid;
    thread->status = 0;
    thread->prev = thread;
    thread->next = thread;
    q = &thread->callbacks;
    q->next = (SceThread *)q;
    q->prev = (SceThread *)q;
    return cb->uid;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00013A4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000144B4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00013AC4);
#endif

#if FW_VERSION == 100
/* "WaitQ" again: one literal per original object (thsema.c, ...), merged within this file */
const char D_0001536C[] = "WaitQ";
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/threadman", func_00013C88);
#endif

#if FW_VERSION == 100
s32 func_00013C88(void) {
    s32 ok = sceKernelCreateUIDtypeInherit(D_0001536C, "Thread", 0x10C, D_000154F8, NULL, &g_threadmanInfo.uidThreadType) == 0;

    THREADMAN_ASSERT(ok, D_00016928, D_000150BC, "initThread", 0xCB7);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0001544C);

INCLUDE_ASM("nonmatchings/threadman", func_000154D0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00015840);

INCLUDE_ASM("nonmatchings/threadman", func_000158C0);

INCLUDE_ASM("nonmatchings/threadman", func_000159F8);

INCLUDE_ASM("nonmatchings/threadman", func_00015B08);

INCLUDE_ASM("nonmatchings/threadman", func_00015B40);
#endif
