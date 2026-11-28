#ifndef THREADMAN_DECLS_H
#define THREADMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

typedef struct SceSysmemUidLookupFunc {
    s32 id;
    void *func;
} SceSysmemUidLookupFunc;

typedef struct SceSysmemUidCB {
    struct SceSysmemUidCB *PARENT0; /* 0x00 */
    struct SceSysmemUidCB *nextChild; /* 0x04 */
    struct SceSysmemUidCB *meta; /* 0x08: the type UID */
    SceUID uid; /* 0x0C */
    char *name; /* 0x10 */
    u8 childSize; /* 0x14 */
    u8 size; /* 0x15: offset of this type's data, in words */
    u16 attr; /* 0x16 */
    union {
        struct SceSysmemUidCB *next;
        s32 numChild;
    } next; /* 0x18 */
    struct SceSysmemUidCB *PARENT1; /* 0x1C */
    SceSysmemUidLookupFunc *funcTable; /* 0x20 */
} SceSysmemUidCB;

#define UID_CB_TO_DATA(cb, type, T) ((T *)((u8 *)(cb) + (type)->size * 4))

/* user-visible status structs (uOFW threadman_kernel.h) */
typedef struct {
    SceSize size;
} SceKernelSystemStatus; /* 0x1C bytes, partial */

typedef struct {
    SceSize size;
    char name[32];
    u32 attr;
    s32 initCount;
    s32 currentCount;
    s32 maxCount;
    s32 numWaitThreads;
} SceKernelSemaInfo;

typedef struct {
    SceSize size;
    char name[32];
    u32 attr;
    u32 initPattern;
    u32 currentPattern;
    s32 numWaitThreads;
} SceKernelEventFlagInfo;

/* "Semaphore" uid type data */
typedef struct SceSema {
    s32 unk0;
    s32 currentCount; /* 0x04 */
    s32 maxCount; /* 0x08 */
    s32 initCount; /* 0x0C */
} SceSema;

/* "EventFlag" uid type data (partial) */
typedef struct SceEventFlag {
    u32 initPattern; /* 0x00 */
    u32 currentPattern; /* 0x04 */
} SceEventFlag;

/* "MsgPipe" uid type data (partial) */
typedef struct SceMsgPipe {
    s32 unk0;
    s32 unk4; /* 0x04: cleared when the last waiting thread leaves */
} SceMsgPipe;

struct Unk_func_00000448_temp_s0 {
    struct Unk_func_00000448_temp_s0 *unk0;
    u8 pad4[0x3C];
    s32 unk40;
};

struct Unk_func_00000448_temp_v1 {
    u8 pad0[0xC];
    M2C_UNK *unkC;
};

struct Unk_func_000004CC_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x14];
    s32 unk38;
    s32 unk3C;
    u8 pad40[0x14];
    s32 unk54;
};

struct Unk_func_000006C8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000006C8_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_000006C8_temp_a0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    void *unkC;
};

struct Unk_func_000006C8_temp_a1 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000008D0_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_000008D0_temp_a1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000261C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000275C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00003CF8_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00004B20_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00005C34_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00006D6C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00007CFC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00009B94_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00009BBC_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_00009BBC_temp_v0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x4];
    s32 unk1C;
};

struct Unk_func_0000ABD8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000BCAC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F140_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F188_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F1D0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F218_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000F218_1 {
    u8 pad0[0x15];
    u8 unk15;
};

struct Unk_func_0000F218_temp_a0 {
    void *unk0;
    void *unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_000127F8_0 {
    u8 pad0[0x78];
    void *unk78;
    u32 unk7C;
    u8 pad80[0x4];
    void *unk84;
    u32 unk88;
    struct Unk_func_000127F8_var_s0 *unk8C;
    u8 pad90[0x48];
    s32 unkD8;
};

struct Unk_func_000127F8_var_s0 {
    struct Unk_func_000127F8_var_s0 *unk0;
    void *unk4;
    u8 pad8[0x4];
    u32 unkC;
};

struct SceThread;

/* circular list head; a thread links in through its first two words */
typedef struct SceThreadQueue {
    struct SceThread *next;
    struct SceThread *prev;
} SceThreadQueue;

/* common data of every waitable object ("WaitQ" uid type, 0x14 bytes) */
typedef struct SceWaitQ {
    u32 attr; /* 0x00 */
    s32 unk4; /* 0x04 */
    s32 numWaitThreads; /* 0x08 */
    SceThreadQueue waitQueue; /* 0x0C */
} SceWaitQ;

/* data of the ThreadEventHandler and Callback uid types (partial) */
typedef struct SceThreadCbObj {
    struct SceThreadCbObj *next; /* 0x00 */
    struct SceThreadCbObj *prev; /* 0x04 */
    s32 unk8; /* 0x08 */
    s32 unkC; /* 0x0C: use count */
    s32 unk10; /* 0x10: deleted, release when unused */
    s32 unk14; /* 0x14 */
    s32 notifyCount; /* 0x18 (Callback) */
    s32 notifyArg; /* 0x1C (Callback) */
} SceThreadCbObj;

enum SceThreadStatus {
    THREAD_RUNNING = 1,
    THREAD_READY = 2,
    THREAD_WAITING = 4,
    THREAD_SUSPEND = 8,
    THREAD_WAITING_SUSPEND = 0xC,
    THREAD_STOPPED = 0x10,
    THREAD_KILLED = 0x20
};

/* saved state of the syscall the thread is in (partial) */
typedef struct SceThreadSyscallFrame {
    u8 unk0[0xC];
    void *ra; /* 0x0C: user return address */
    u8 unk10[0x18 - 0x10];
    s32 unk18; /* 0x18 */
} SceThreadSyscallFrame;

/* "Thread" uid type data, 0x10C bytes (1.00) */
typedef struct SceThread {
    struct SceThread *next; /* 0x00 */
    struct SceThread *prev; /* 0x04 */
    SceUID uid; /* 0x08 */
    s32 status; /* 0x0C */
    s32 currentPriority; /* 0x10 */
    s32 wakeupCount; /* 0x14 */
    s32 exitStatus; /* 0x18 */
    s32 waitType; /* 0x1C */
    SceSysmemUidCB *waitObj; /* 0x20 */
    s32 waitArg0; /* 0x24: e.g. the count a sema waiter needs */
    u8 unk28[0x38 - 0x28];
    s32 unk38; /* 0x38 */
    s32 *unk3C; /* 0x3C: where the remaining timeout is written back */
    s32 waitRet; /* 0x40 */
    s32 unk44; /* 0x44 */
    SceSysmemUidCB *unk48; /* 0x48: thread event handler being run */
    SceThreadQueue callbacks; /* 0x4C: callbacks owned by the thread */
    s32 unk54; /* 0x54 */
    s32 unk58; /* 0x58 */
    SceSysmemUidCB *unk5C; /* 0x5C: callback being run */
    s32 initPriority; /* 0x60 */
    u8 unk64[0x6C - 0x64];
    void *entry; /* 0x6C */
    void *stack; /* 0x70 */
    s32 stackSize; /* 0x74 */
    u8 unk78[0x7C - 0x78];
    void *kStack; /* 0x7C */
    s32 kStackSize; /* 0x80 */
    u8 unk84[0x88 - 0x84];
    void *gpReg; /* 0x88 */
    u8 unk8C[0xD0 - 0x8C];
    u32 attr; /* 0xD0 */
    u8 unkD4[0xE4 - 0xD4];
    s32 *preemptCount; /* 0xE4: &intrPreemptCount or &threadPreemptCount */
    s32 intrPreemptCount; /* 0xE8 */
    s32 threadPreemptCount; /* 0xEC */
    s32 releaseCount; /* 0xF0 */
    u8 unkF4[0xF8 - 0xF4];
    void *callbackContext; /* 0xF8: saved context to return to after a callback */
    u8 unkFC[0x100 - 0xFC];
    SceThreadSyscallFrame *unk100; /* 0x100 */
    u8 unk104[0x10C - 0x104];
} SceThread;

typedef s32 (*SceThreadmanLogHandler)(s32 id, void *ra, s32 nargs, ...);

#if FW_VERSION == 100
#define THREADMAN_LOG_OFF 0x6F0
#elif FW_VERSION == 102 || FW_VERSION == 103
#define THREADMAN_LOG_OFF 0x6F4 /* pre-release 1.02/1.03 */
#elif FW_VERSION < 152
#define THREADMAN_LOG_OFF 0x738
#elif FW_VERSION < 201
#define THREADMAN_LOG_OFF 0x73C
#elif FW_VERSION < 270
#define THREADMAN_LOG_OFF 0x740
#elif FW_VERSION < 282
#define THREADMAN_LOG_OFF 0x748
#elif FW_VERSION < 330
#define THREADMAN_LOG_OFF 0x74C
#else
#define THREADMAN_LOG_OFF 0x770
#endif

#if FW_VERSION < 282
#define THREADMAN_UID_OFF 0x63C
#else
#define THREADMAN_UID_OFF 0x640
#endif
#if FW_VERSION < 270
#define THREADMAN_NUM_UID 14
#else
#define THREADMAN_NUM_UID 15
#endif

/* the thread manager state (1.00: 0x6F4 bytes at 0x15518) */
typedef struct SceThreadmanInfo {
    SceThread *currentThread; /* 0x000 */
    SceThread *nextThread; /* 0x004 */
    u32 readyPriorityMask[4]; /* 0x008: bit n set = readyQueue[n] not empty */
    SceThreadQueue readyQueue[128]; /* 0x018 */
    s32 dispatchDisabled; /* 0x418 */
#if FW_VERSION < 150
    u8 unk41C[0x430 - 0x41C];
    u32 unk430; /* 0x430: system time low word at last update */
    u32 unk434; /* 0x434: system time high word */
    u32 unk438; /* 0x438: next timer event (low word) */
    u8 unk43C[0x5EC - 0x43C];
    SceThreadQueue suspendedThreads; /* 0x5EC */
    u8 unk5F4[0x5FC - 0x5F4];
    SceSysmemUidCB *uidWaitQType; /* 0x5FC */
    SceSysmemUidCB *uidThreadType; /* 0x600 */
    SceSysmemUidCB *uidSemaType; /* 0x604 */
    SceSysmemUidCB *uidEventFlagType; /* 0x608 */
    SceSysmemUidCB *uidMbxType; /* 0x60C */
    SceSysmemUidCB *uidMsgPipeType; /* 0x610 */
    SceSysmemUidCB *uidVplType; /* 0x614 */
    SceSysmemUidCB *uidFplType; /* 0x618 */
    SceSysmemUidCB *uidThreadEventHandlerType; /* 0x61C */
    SceSysmemUidCB *uidCallbackType; /* 0x620 */
    SceSysmemUidCB *uidTimerType; /* 0x624 */
    SceSysmemUidCB *uidDelayType; /* 0x628 */
    SceSysmemUidCB *uidAlarmType; /* 0x62C */
    SceSysmemUidCB *uidVTimerType; /* 0x630 */
    s32 heapId; /* 0x634 */
    s32 systemStatusFlag; /* 0x638 */
    u8 unk63C[0x660 - 0x63C];
    union {
        u32 size;
        SceKernelSemaInfo sema;
        SceKernelEventFlagInfo eventFlag;
        u8 buf[0x84];
    } tmpInfo; /* 0x660: refer-status scratch buffer */
    u8 unk6E4[0x6E8 - 0x6E4];
    s32 unk6E8; /* 0x6E8: system timer interrupt number */
    u8 unk6EC[THREADMAN_LOG_OFF - 0x6EC];
#elif FW_VERSION < 330
    /* 1.50-3.20: same uid type block as 1.00 (Mutex added in 2.70) */
    u8 unk41C[THREADMAN_UID_OFF - 0x41C];
    SceSysmemUidCB *uidWaitQType;
    SceSysmemUidCB *uidThreadType;
    SceSysmemUidCB *uidSemaType;
    SceSysmemUidCB *uidEventFlagType;
#if FW_VERSION >= 270
    SceSysmemUidCB *uidMutexType;
#endif
    SceSysmemUidCB *uidMbxType;
    SceSysmemUidCB *uidMsgPipeType;
    SceSysmemUidCB *uidVplType;
    SceSysmemUidCB *uidFplType;
    SceSysmemUidCB *uidThreadEventHandlerType;
    SceSysmemUidCB *uidCallbackType;
    SceSysmemUidCB *uidTimerType;
    SceSysmemUidCB *uidDelayType;
    SceSysmemUidCB *uidAlarmType;
    SceSysmemUidCB *uidVTimerType;
    u8 unkUidEnd[THREADMAN_LOG_OFF - THREADMAN_UID_OFF - THREADMAN_NUM_UID * 4];
#else
    u8 unk41C[THREADMAN_LOG_OFF - 0x41C];
#endif
    SceThreadmanLogHandler logHandler; /* 0x6F0 (1.00) */
} SceThreadmanInfo;

extern char D_00014928[];
extern char D_00014948[];
extern char D_00014CB0[];
extern char D_00014CBC[];
extern char D_00014D10[];
extern char D_00014D1C[];
extern char D_00014D7C[];
extern char D_00014D88[];
extern char D_00014E18[];
extern char D_00014E24[];
extern char D_00014E78[];
extern char D_00014E80[];
extern char D_00014EDC[];
extern char D_00014EE4[];
extern char D_00014F2C[];
extern char D_00014F74[];
extern char D_000150BC[];
extern SceSysmemUidLookupFunc D_00015390[];
extern SceSysmemUidLookupFunc D_000153C0[];
extern SceSysmemUidLookupFunc D_000153D8[];
extern SceSysmemUidLookupFunc D_000153F0[];
extern SceSysmemUidLookupFunc D_00015410[];
extern SceSysmemUidLookupFunc D_00015428[];
extern SceSysmemUidLookupFunc D_00015440[];
extern SceSysmemUidLookupFunc D_00015468[];
extern s32 D_00015470;
extern SceSysmemUidLookupFunc D_00015480[];
extern s32 D_00015490;
extern SceSysmemUidLookupFunc D_00015498[];
extern s32 D_000154A8;
extern SceSysmemUidLookupFunc D_000154B0[];
extern s32 D_000154C0;
extern SceSysmemUidLookupFunc D_000154C8[];
extern SceSysmemUidLookupFunc D_000154E0[];
extern s32 D_000154E8;
extern SceSysmemUidLookupFunc D_000154F8[];
extern s32 D_00015500;
extern u32 D_00015510;
extern void *D_00015518;
extern s32 D_0001551C;
extern s32 D_00015578;
extern void *D_00015B14;
extern void *D_00015B18;
extern s32 D_00015B50;
extern s32 D_00015BD8;
extern s32 D_00015BDC;
extern s32 D_00015BE0;
extern s32 D_00015BE4;
extern s32 D_00015BE8;
extern s32 D_00015BEC;
extern s32 D_00015BF0;
extern s32 D_00015CD4;
extern s32 D_00015E0C;
extern M2C_UNK D_00016414;
extern void *D_00016444;
extern s32 D_00016480;
extern M2C_UNK D_00016630;
extern s32 D_00016664;
extern s32 D_00016690;
extern s32 D_000166B4;
extern s32 D_000166F8;
extern s32 D_0001671C;
extern s32 D_00016754;
extern s32 D_00016778;
extern char D_00016928[];
extern s32 D_000169E0;
extern s32 D_00016C78;
extern void *D_000172B4;
extern s32 D_000172B8;
extern M2C_UNK D_000172BC;
extern s32 D_000172C0;
extern s32 D_000172C4;
extern s32 D_000172C8;
extern s32 D_000172CC;
extern s32 D_000172D0;
extern s32 D_000172D4;
extern s32 D_000172F4;
extern s32 D_00017328;
extern s32 D_00017344;
extern s32 D_00017350;
extern s32 D_000173BC;
extern s32 D_000174C8;
extern s32 D_00017968;
extern s32 D_00017AFC;
extern s32 D_00017B08;
extern s32 D_00017DC8;
extern M2C_UNK func_00015B40;
extern SceThreadmanInfo g_threadmanInfo;

s32 Kprintf(const char *fmt, ...);
void _sceKernelExitThread(void);
s32 _sceKernelReturnFromTimerHandler(void);
s32 func_0000022C(s32);
s32 func_00000268(SceThread *thread);
s32 func_000003F0(SceSysmemUidCB *cb, s32 waitRet);
s32 func_00000448(s32 arg0, s32 arg1);
void func_000004CC(struct Unk_func_000004CC_0 *arg0);
s32 func_00000524(SceSysmemUidCB *cb);
void func_00000534(s32 arg0);
s32 func_00000544(void *arg0, void *arg1);
s32 func_00000554(void);
void func_000005F4(s32 arg0);
s32 func_00000680(void);
s32 func_00000688(s32 arg0, void *arg1);
s32 func_000006C8(struct Unk_func_000006C8_0 *arg0, struct Unk_func_000006C8_1 *arg1);
s32 func_000008A0(void);
s32 func_000008C8(void);
s32 func_000008D0(s32 arg0, struct Unk_func_000008D0_1 *arg1);
s32 func_000009F8(void);
s32 func_00000A18(s32 arg0, void *arg1);
s32 func_00002394(void *arg0);
s32 func_000024D4(void *arg0);
s32 func_0000261C(struct Unk_func_0000261C_0 *arg0);
s32 func_0000275C(struct Unk_func_0000275C_0 *arg0);
void func_00003518(SceThread *thread);
void func_00003C3C(void *arg0);
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0);
s32 func_000047B8(void *arg0);
s32 func_000047E0(void);
s32 func_00004B20(struct Unk_func_00004B20_0 *arg0);
s32 func_00004B48(void);
s32 func_0000598C(void *arg0);
s32 func_000059B4(void);
s32 func_00005C34(struct Unk_func_00005C34_0 *arg0);
s32 func_00005C5C(void);
s32 func_00006878(void *arg0);
s32 func_000068A0(void);
s32 func_00006C68(void *arg0);
s32 func_00006C90(void);
s32 func_00006D6C(struct Unk_func_00006D6C_0 *arg0);
s32 func_00006D94(void);
s32 func_00007CFC(struct Unk_func_00007CFC_0 *arg0);
s32 func_00007D24(void);
s32 func_000087C0(void *arg0);
s32 func_00009874(void *arg0);
s32 func_00009B94(struct Unk_func_00009B94_0 *arg0);
s32 func_00009BBC(s32 arg0, struct Unk_func_00009BBC_1 *arg1, s32 arg2, s32 arg3);
s32 func_0000A8A8(void *arg0);
s32 func_0000ABD8(struct Unk_func_0000ABD8_0 *arg0);
u64 func_0000B490(void);
u64 func_0000B634(void);
s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0);
s32 func_0000DAF4(s32, s32);
s32 func_0000DDDC(void *arg0);
s32 func_0000DE04(void);
s32 func_0000DE24(void *arg0);
s32 func_0000DE4C(void);
s32 func_0000DE6C(void *arg0);
s32 func_0000DE94(void);
s32 func_0000DF00(SceSysmemUidCB *cb, SceSysmemUidCB *type, s32 funcId, void *ap);
s32 func_0000E674(void *arg0, void *arg1);
s32 func_0000EA04(s32, s32);
s32 func_0000ED30(void);
s32 func_0000ED50(void);
s32 func_0000F140(struct Unk_func_0000F140_0 *arg0);
s32 func_0000F168(void);
s32 func_0000F188(struct Unk_func_0000F188_0 *arg0);
s32 func_0000F1B0(void);
s32 func_0000F1D0(struct Unk_func_0000F1D0_0 *arg0);
s32 func_0000F1F8(void);
s32 func_0000F218(struct Unk_func_0000F218_0 *arg0, struct Unk_func_0000F218_1 *arg1);
s32 func_0000F264(void);
s32 func_0000F378(s32);
void func_0000F50C(void *arg0, s32 arg1, s32 arg2);
s32 func_0000FD6C(void);
void func_00011B68(void *arg0, s32 arg1);
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1);
s32 func_000136C0(void);
s32 func_0001444C(void);
M2C_UNK memset(s32, M2C_UNK, s32);
s32 module_reboot_before(void);
void sceKernelAssert(s32 test, s32 lvl);
M2C_UNK sceKernelCallUIDObjCommonFunction();
M2C_UNK sceKernelCallUIDObjFunction(s32, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateUIDtype(const char *name, s32 size, SceSysmemUidLookupFunc *funcTable, SceSysmemUidLookupFunc *metaFuncTable, SceSysmemUidCB **uidTypeOut);
s32 sceKernelCreateUIDtypeInherit(const char *parentName, const char *name, s32 size, SceSysmemUidLookupFunc *funcTable, SceSysmemUidLookupFunc *metaFuncTable, SceSysmemUidCB **uidTypeOut);
s32 sceKernelDeleteHeap(SceUID heapId);
s32 sceKernelExitDeleteThread(s32);
s32 sceKernelExitThread(s32);
s32 sceKernelFreeHeapMemory(SceUID heapId, void *block);
s32 sceKernelFreePartitionMemory(); /* (SceUID blockId); one 2.x draft passes two */
void sceKernelGetKTLS(s32 arg0);
s32 sceKernelGetSystemStatusFlag(void);
s32 sceKernelGetThreadKTLS(s32, s32, s32);
s32 sceKernelIsIntrContext(void);
void * sceKernelMemset(void *, s32, u32);
s32 sceKernelQueryMemoryInfo(u32 address, s32 *partitionId, SceUID *memoryBlockId);
s32 sceKernelRegisterDeadThreadHandler(s32 arg0);
M2C_UNK sceKernelReleaseExceptionHandler(M2C_UNK, M2C_UNK *);
M2C_UNK sceKernelReleaseIntrHandler(s32);
s64 sceKernelUSec2SysClockWide(u32 arg0);

#endif
