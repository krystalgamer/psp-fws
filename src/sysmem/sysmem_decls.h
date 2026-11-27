#ifndef SYSMEM_DECLS_H
#define SYSMEM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_0000F8C4_s {
    volatile s32 unk0;
    volatile s32 unk4;
    volatile s8 unk8;
    u8 pad9[0xF];
    volatile s8 unk18;
    u8 pad19[0x27];
    volatile s32 unk40;
    volatile s8 unk44;
    u8 pad45[0xF];
    volatile s32 unk54;
    volatile s32 unk58;
    volatile s32 unk5C;
    volatile s32 unk60;
    volatile s32 unk64;
};

typedef struct SceSysmemHeapBlock {
    struct SceSysmemHeapBlock *next; /* 0x0 */
    struct SceSysmemHeapBlock *prev; /* 0x4 */
    /* followed by the low heap */
} SceSysmemHeapBlock;
typedef struct {
    s32 size; /* 0x0: bit 0 = attr */
    s32 partId; /* 0x4 */
    SceSysmemHeapBlock *firstBlock; /* 0x8 */
} SceSysmemHeap; /* 1.00-2.xx: 12 bytes (6.60 adds partAddr/partSize) */

struct SceSysmemUidLookupFunc;
typedef struct SceSysmemUidCB {
    struct SceSysmemUidCB *PARENT0; /* 0x00 */
    struct SceSysmemUidCB *nextChild; /* 0x04 */
    struct SceSysmemUidCB *meta; /* 0x08: the type */
    SceUID uid; /* 0x0C */
    char *name; /* 0x10 */
    u8 childSize; /* 0x14: in words */
    u8 size; /* 0x15: in words */
    u16 attr; /* 0x16 */
    union {
        struct SceSysmemUidCB *next;
        s32 numChild;
    } next; /* 0x18 */
    struct SceSysmemUidCB *PARENT1; /* 0x1C */
    struct SceSysmemUidLookupFunc *funcTable; /* 0x20 */
} SceSysmemUidCB; /* size 0x24 */

typedef struct {
    SceSysmemUidCB *root; /* 0x0 */
    SceSysmemUidCB *metaRoot; /* 0x4 */
    SceSysmemUidCB *basic; /* 0x8 */
    s32 count; /* 0xC */
} SceSysmemUidList;

typedef s32 (*SceSysmemUidFunc)(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap);
typedef struct SceSysmemUidLookupFunc {
    s32 id;
    SceSysmemUidFunc func;
} SceSysmemUidLookupFunc;

#define UIDCB(id) ((SceSysmemUidCB *)(0x88000000 | (((u32)(id) >> 7) << 2)))

struct Unk_SysMemForKernel_82D3CEE3_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_Unk_func_0000769C_0_8 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00001318_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00001318_var_a0 {
    struct Unk_func_00001318_var_a0 *unk0;
    s32 unk4;
    u32 unk8;
};

struct Unk_func_00001478_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00001478_var_v1 {
    struct Unk_func_00001478_var_v1 *unk0;
    s32 unk4;
    u32 unk8;
};

struct Unk_func_000017D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000017E0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00004A60_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000075EC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000769C_0 {
    u8 pad0[0x8];
    struct Unk_Unk_func_0000769C_0_8 *unk8;
};

extern M2C_UNK D_0000A6E4;
extern M2C_UNK D_0000A734;
extern s32 D_0000C510;
extern s32 D_0000C514;
extern s32 D_0000C518;
extern s32 D_0000C524;
extern s32 D_0000C528;
extern s32 D_0000C82C;
extern s32 D_0000C830;
extern s32 D_0000C834;
extern s32 D_0000C838;
extern s32 D_0000C83C;
extern s32 D_0000C840;
extern s32 D_0000C844;
extern s32 D_0000C848;
extern s32 D_0000C888;
extern s32 D_0000C924;
extern s32 D_0000C92C;
extern SceSysmemHeap EHeap4UID;
extern SceSysmemUidList g_uidTypeList;
extern void *D_0000CA84;
extern M2C_UNK D_0000F390;
extern M2C_UNK D_0000F3C0;
extern M2C_UNK D_0000F3F0;
extern s32 D_0000F860;
extern s32 D_0000F864;
extern s32 D_0000F868;
extern s32 D_0000F874;
extern s32 D_0000F878;
extern s32 D_0000F87C;
extern s32 D_0000F8B0;
extern s32 D_0000F8B4;
extern s32 D_0000F8B8;
extern M2C_UNK D_0000F8C0;
extern struct D_0000F8C4_s D_0000F8C4;
extern M2C_UNK D_0000F8DD;
extern s32 D_0000F92C;
extern s32 D_0000F930;
extern s32 D_0000F934;
extern s32 D_0000FB80;
extern s32 D_0000FB84;
extern s32 D_0000FB88;
extern s32 D_0000FB8C;
extern s32 D_0000FB90;
extern s32 D_0000FB94;
extern s32 D_0000FB98;
extern s32 D_0000FB9C;
extern s32 D_0000FBA0;
extern s32 D_0000FBE0;
extern s32 D_0000FC38;
extern s32 D_0000FC3C;
extern s32 D_0000FC40;
extern s32 D_0000FC44;
extern s32 D_0000FC48;
extern s32 D_0000FC4C;
extern s32 D_0000FC50;
extern s32 D_0000FC54;
extern s32 D_0000FC58;
extern s32 D_0000FC7C;
extern s32 D_0000FC84;
extern SceSysmemHeap EHeap4UID;
extern s32 D_0000FC90;
extern SceSysmemUidList g_uidTypeList;
extern M2C_UNK D_0000FD88;
extern M2C_UNK D_0000FD8C;
extern s32 D_0000FD90;
extern SceSysmemHeap EHeap4UID;
extern SceSysmemUidList g_uidTypeList;
extern s32 D_0000FF24;
extern s32 D_00010244;
extern s32 D_000109D4;
extern s32 D_00010AF0;
extern s32 D_00010CBC;
extern s32 D_00013258;
extern s32 D_00013688;
extern s32 D_00013908;
extern s32 D_0001390C;
extern s32 D_00013910;
extern s32 D_00013948;
extern s32 D_00013980;
extern s32 D_00013BAC;
extern s32 D_00013EB8;
extern s32 D_00014134;
extern s32 D_0001413C;
extern s32 D_00014264;
extern s32 D_00014268;

s32 SysMemForKernel_9697CD32(s32);
s32 SysMemForKernel_E6581468(s32);
s32 SysMemForKernel_EF2EE8C1(void);
void SysMemUserForUser_9697CD32(void);
void SysMemUserForUser_E6581468(void);
void bcmp(s32 arg0, s32 arg1, s32 arg2);
void bcopy(s32 arg0, s32 arg1);
void func_00000724(void);
s32 _FreeHeapMemory(SceSysmemHeap *heap, void *addr);
s32 func_00000E08(s32);
void func_00000F60(void);
s32 func_000011F4(void);
s32 func_00001200(void);
s32 func_00001318(struct Unk_func_00001318_0 *arg0);
s32 func_00001478(struct Unk_func_00001478_0 *arg0);
s32 func_00001650(void);
s32 func_0000165C(void);
s32 func_000017D8(struct Unk_func_000017D8_0 *arg0);
s32 func_000017E0(struct Unk_func_000017E0_0 *arg0);
s32 func_00001810(void *arg0);
s32 func_000018D8(void *arg0);
s32 func_00001B24(s32, s32);
s32 func_00001B6C(void *arg0);
s32 func_00001B74(void *arg0);
s32 func_00001E2C(s32, s32);
void func_00002EC4(s32 arg0, s32 arg1);
void func_0000373C(void);
void func_00004238(s32 arg0, s32 arg1);
s32 func_0000435C(void *arg0);
s32 func_000048E0(void *arg0);
s32 func_00004A60(struct Unk_func_00004A60_0 *arg0);
s32 FreeSceUIDtypeCB(void *arg0);
s32 FreeSceUIDobjectCB(void *arg0);
s32 FreeSceUIDnamestr(void *arg0);
s32 FreeSceUIDHoldHead(void *arg0);
s32 FreeSceUIDHoldElement(void *arg0);
void func_00004F24(u8 *arg0, u8 *arg1, u32 arg2);
void func_00005430(u8 *arg0, u8 *arg1);
void func_000054E4(u8 *arg0, u8 *arg1);
void func_00005530(u8 *arg0, u8 *arg1, u32 arg2);
void func_00005850(void);
s32 func_00005EE8(void *arg0);
s32 func_00005F98(void *arg0);
void func_00006080(u8 *arg0, u8 *arg1);
s32 FreeSceUIDtypeCB(void *arg0);
s32 FreeSceUIDobjectCB(void *arg0);
s32 FreeSceUIDnamestr(void *arg0);
s32 FreeSceUIDHoldHead(void *arg0);
s32 FreeSceUIDHoldElement(void *arg0);
void func_000065F8(u8 *arg0, u8 *arg1);
s32 func_00006620(void);
s32 func_000075EC(struct Unk_func_000075EC_0 *arg0);
s32 func_000075F4(M2C_UNK *arg0);
s32 func_0000769C(struct Unk_func_0000769C_0 *arg0);
s32 func_00007A38(s32 arg0, s32 arg1);
s32 func_00008160(void);
s32 func_0000832C(void);
s32 func_000083B8(void);
s32 func_00009610(void *arg0);
s32 func_0000A5D0(s32 arg0);
s32 func_0000A5FC(s32 arg0);
s32 func_0000A6B4(s32 arg0);
s32 func_0000AA28(s32 arg0, s32 arg1);
s32 func_0000AD04(s32 arg0, s32 arg1);
s32 func_0000C690(void);
s32 suspendIntr(void);
void resumeIntr(s32);
s32 func_0000C994(s32 arg0);
s32 func_0000E3C4(s32, s32);
M2C_UNK *get_ctype_table(void);
s32 memcmp(s32, s32, s32);
s32 memmove(s32, s32);
void sceKernelAllocHeapMemory(s32 arg0, s32 arg1);
s32 sceKernelAllocHeapMemoryWithOption(s32, s32, s32);
s32 sceKernelApiEvaliationAddData(void);
s32 sceKernelApiEvaluationInit(void);
s32 sceKernelApiEvaluationReport(void);
s32 sceKernelCallGcovFunction(void);
s32 sceKernelCallGprofFunction(void);
s32 sceKernelCallUIDFunction(SceUID id, s32 funcId, ...);
s32 sceKernelCallUIDObjFunction(SceSysmemUidCB *uid, s32 funcId, ...);
s32 sceKernelCreateUIDtype(s32, s32, s32, s32, s32);
s32 sceKernelDebugEcho(void);
s32 sceKernelDebugEchoSet(s32 arg0);
s32 sceKernelDeci2pReferOperations(void);
s32 sceKernelDeci2pRegisterOperations(s32 arg0);
s32 sceKernelDevkitVersion(void);
s32 sceKernelDipsw(u32 arg0);
s32 sceKernelDipswAll(void);
s32 sceKernelDipswCpTime(void);
s32 sceKernelDipswSet(u32 arg0);
s32 sceKernelGetAWeDramSaveAddr(void);
s32 sceKernelGetAllowReplaceUmd(s32 *arg0);
s32 sceKernelGetCompiledSdkVersion(void);
s32 sceKernelGetCompilerVersion(void);
s32 sceKernelGetDNAS(void);
s32 sceKernelGetDebugPutchar(void);
s32 sceKernelGetFilenameBlock(void);
M2C_UNK *sceKernelGetGameInfo(void);
s32 sceKernelGetHeapTypeCB(void);
s32 sceKernelGetInitialRandomValue(void);
s32 sceKernelGetMEeDramSaveAddr(void);
s32 sceKernelGetSystemStatus(void);
s32 sceKernelGetUidManHeapID(void);
SceSysmemUidList *sceKernelGetUidmanCB(void);
s32 sceKernelGzipGetComment(s32 arg0);
s32 sceKernelGzipGetCompressedData(s32 arg0);
s32 sceKernelGzipGetInfo(s32, s32, s32, s32, s32, s32);
s32 sceKernelGzipGetName(s32 arg0);
s32 sceKernelIsDVDMode(void);
s32 sceKernelIsDevelopmentToolMode(void);
s32 sceKernelIsKindOf(struct Unk_SysMemForKernel_82D3CEE3_0 *arg0, s32 arg1);
s32 sceKernelIsUMDMode(void);
s32 sceKernelIsValidUserAccess(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelJointMemoryBlock(void);
s32 sceKernelLookupUIDFunction(SceSysmemUidCB *uid, s32 id, SceSysmemUidFunc *func, SceSysmemUidCB **parentUidWithFunc);
u32 sceKernelMaxFreeMemSize(void);
void sceKernelMemoryCloseSize(s32 arg0);
void sceKernelMemoryExtendSize(void);
void sceKernelMemoryShrinkSize(void);
s32 sceKernelPowerLock(s32 arg0);
s32 sceKernelPowerTick(s32 arg0);
s32 sceKernelPowerUnlock(s32 arg0);
s32 sceKernelReferSysEventHandlers(void);
s32 sceKernelRegisterApiEvaluation(void);
void sceKernelRegisterAssertHandler(s32 arg0);
void sceKernelRegisterDebugPutchar(s32 arg0);
void sceKernelRegisterDebugPutcharByBootloader(s32 arg0);
s32 sceKernelRegisterDebugRead(s32 arg0);
s32 sceKernelRegisterDebugWrite(s32 arg0);
void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1);
s32 sceKernelRegisterLibcRtcFunc(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelRegisterPowerHandlers(s32 arg0);
s32 sceKernelReleaseLibcRtcFunc(void);
s32 sceKernelSeparateMemoryBlock(void);
s32 sceKernelSetGcovFunction(void);
s32 sceKernelSetGprofFunction(void);
s32 sceKernelSetRebootKernel(s32 arg0);
s32 sceKernelSm1ReferOperations(void);
s32 sceKernelSm1RegisterOperations(s32 arg0);
s32 sceKernelSysMemRealMemorySize(void);
s32 sceKernelSysmemIsValidAccess(s32, s32, s32, s32);
u32 sceKernelTotalFreeMemSize(void);
u8 *strcpy(u8 *arg0, u8 *arg1);

#endif
