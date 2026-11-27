/* cflags[100,102,103]: -O2 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "sysmem_decls.h"

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00000000);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelCreateHeap);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", _AllocHeapMemory);

INCLUDE_ASM("nonmatchings/sysmem", _FreeHeapMemory);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryHeapInfo);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryLowheapInfo);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011200);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011218);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011228);

INCLUDE_RODATA("nonmatchings/sysmem", D_000115C8);

INCLUDE_RODATA("nonmatchings/sysmem", D_000115DC);

INCLUDE_RODATA("nonmatchings/sysmem", D_0001168C);

INCLUDE_RODATA("nonmatchings/sysmem", D_000116A0);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011810);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011828);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011850);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011864);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011904);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011918);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011948);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011958);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011A60);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011A70);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011C10);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011C20);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F390);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000DA30);
#endif

#if FW_VERSION == 100
void HeapInit(void) {
    if (sceKernelCreateUIDtype("SceSysmemHeap", sizeof(SceSysmemHeap), D_0000C1F0, NULL, &g_HeapType) != 0) {
        Kprintf(D_0000AB40, D_0000AB60, D_0000AB68, 77);
        sceKernelAssert(0, 0);
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", _CreateHeap);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", _AllocHeapMemory);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetHeapIDfromVAddr);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIsValidHeap);

INCLUDE_ASM("nonmatchings/sysmem", func_000007B0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000824);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB60);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB68);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_000001C8);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/sysmem", sceKernelCreateHeap);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00012508);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012540);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", _AllocHeapMemory);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", _FreeHeapMemory);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000038C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryHeapInfo);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryLowheapInfo);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetHeapIDfromVAddr);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIsValidHeap);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000724);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
void func_00000724(void) {
    sceKernelCreateUIDtype("SceSysmemHeap", sizeof(SceSysmemHeap), D_0000F390, NULL, &g_HeapType);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000075C);
#endif

s32 sceKernelDeleteHeap(SceUID id) {
    s32 oldIntr = suspendIntr();
    s32 ret = sceKernelDeleteUID(id);
    resumeIntr(oldIntr);
    return ret;
}

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", _AllocHeapMemory);
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocHeapMemoryWithOption);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocHeapMemory);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", _FreeHeapMemory);
#endif

s32 sceKernelFreeHeapMemory(SceUID id, void *addr) {
    SceSysmemUidCB *uid;
    s32 oldIntr = suspendIntr();
    s32 ret = sceKernelGetUIDcontrolBlockWithType(id, g_HeapType, &uid);
    if (ret != 0) {
        resumeIntr(oldIntr);
        return ret;
    }
    ret = _FreeHeapMemory(UID_CB_TO_DATA(uid, g_HeapType, SceSysmemHeap), addr);
    resumeIntr(oldIntr);
    return ret;
}

#if FW_VERSION < 150
s32 _HeapTotalFreeSize(SceSysmemHeap *heap) {
    s32 total = 0;
    SceSysmemHeapBlock *cur = heap->firstBlock->next;
    while (1) {
        total += func_0000435C(cur + 1);
        if (cur == heap->firstBlock) {
            break;
        }
        cur = cur->next;
    }
    return total;
}

s32 sceKernelHeapTotalFreeSize(SceUID id) {
    SceSysmemUidCB *uid;
    s32 oldIntr = suspendIntr();
    s32 ret = sceKernelGetUIDcontrolBlockWithType(id, g_HeapType, &uid);
    if (ret != 0) {
        resumeIntr(oldIntr);
        return ret;
    }
    ret = _HeapTotalFreeSize(UID_CB_TO_DATA(uid, g_HeapType, SceSysmemHeap));
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelHeapTotalFreeSize(SceUID id) {
    SceSysmemUidCB *uid;
    SceSysmemHeap *heap;
    SceSysmemHeapBlock *cur;
    s32 total;
    s32 oldIntr = suspendIntr();
    s32 ret = sceKernelGetUIDcontrolBlockWithType(id, g_HeapType, &uid);
    if (ret != 0) {
        resumeIntr(oldIntr);
        return ret;
    }
    heap = UID_CB_TO_DATA(uid, g_HeapType, SceSysmemHeap);
    total = 0;
    cur = heap->firstBlock->next;
    while (1) {
        total += func_000048E0(cur + 1);
        if (cur == heap->firstBlock) {
            break;
        }
        cur = cur->next;
    }
    resumeIntr(oldIntr);
    return total;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelHeapTotalFreeSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetHeapTypeCB);
#endif

#if FW_VERSION < 201
SceSysmemUidCB *sceKernelGetHeapTypeCB(void) {
    return g_HeapType;
}
#endif

#if FW_VERSION < 280
s32 sceKernelGetUidManHeapID(void) {
    return HeapCBUid;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetHeapIDfromVAddr);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00000AD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", sceKernelIsValidHeap);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00000BC0);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000C08);
#else
INCLUDE_ASM("nonmatchings/sysmem", func_00000E18);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00000CC0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000D30);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000D80);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000DCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00000E9C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000E0C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00000E18_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000EA0);

SceSysmemMemoryPartition *MpidToCB(s32 mpid) {
    SceSysmemUidCB *uid;
    SceSysmemMemoryPartition *part;
    switch (mpid) {
    case 0:
        part = NULL;
        break;
    case 1:
        part = g_MemPartKernel;
        break;
    case 5:
        part = g_MemPartVshell;
        break;
    case 2:
        part = g_MemPartUser;
        break;
    case 3:
        part = g_MemPartOther1;
        break;
    case 4:
        part = g_MemPartOther2;
        break;
    case 6:
        part = g_MemPartScUser;
        break;
    case 7:
        part = g_MemPartMeUser;
        break;
    default:
        if (sceKernelGetUIDcontrolBlockWithType(mpid, g_PartType, &uid) != 0) {
            return NULL;
        }
        part = UID_CB_TO_DATA(uid, g_PartType, SceSysmemMemoryPartition);
        break;
    }
    return part;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00000F64);

void sceKernelAllocHeapMemory(s32 arg0, s32 arg1) {
    sceKernelAllocHeapMemoryWithOption(arg0, arg1, 0);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", MpidToCB);
#endif

#if FW_VERSION == 100
SceSysmemMemoryPartition *MpidToCB(s32 mpid) {
    SceSysmemUidCB *uid;
    SceSysmemMemoryPartition *part;
    switch (mpid) {
    case 0:
        part = NULL;
        break;
    case 1:
        part = g_MemPartKernel;
        break;
    case 2:
        part = g_MemPartUser;
        break;
    case 3:
        part = g_MemPartOther1;
        break;
    case 4:
        part = g_MemPartOther2;
        break;
    case 5:
        part = g_MemPartVshell;
        break;
    case 6:
        part = g_MemPartScUser;
        break;
    case 7:
        part = g_MemPartMeUser;
        break;
    default:
        if (sceKernelGetUIDcontrolBlockWithType(mpid, g_PartType, &uid) != 0) {
            return NULL;
        }
        part = UID_CB_TO_DATA(uid, g_PartType, SceSysmemMemoryPartition);
        break;
    }
    return part;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000109C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AED8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AEE4);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AF04);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_000011E8);
#endif

#if FW_VERSION == 100
void PartitionServiceInit(void) {
    if (sceKernelCreateUIDtype("SceSysmemMemoryPartition", sizeof(SceSysmemMemoryPartition), D_0000C220, NULL, &g_PartType) != 0) {
        Kprintf(D_0000AEE4, D_0000AED8, "PartitionServiceInit", 149);
        sceKernelAssert(0, 0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", PartitionServiceInit);

INCLUDE_ASM("nonmatchings/sysmem", func_00001244);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000DE5C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000DE6C);

INCLUDE_ASM("nonmatchings/sysmem", func_000013E4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000125C);

INCLUDE_ASM("nonmatchings/sysmem", func_00001458);

INCLUDE_ASM("nonmatchings/sysmem", func_00001580);
#endif

#if FW_VERSION < 201
s32 func_00001650(void) {
    return 0x80020002;
}

s32 func_0000165C(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00001668);

INCLUDE_ASM("nonmatchings/sysmem", func_00001750);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F3C0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000E08);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_00000E1C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000ED8);
#endif

#if FW_VERSION >= 270
void func_00000F60(void) {
    sceKernelCreateUIDtype("SceSysmemMemoryPartition", 0x1C, D_0000F3C0, NULL, &g_PartType);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_00000F60(void) {
    sceKernelCreateUIDtype("SceSysmemMemoryPartition", 0x18, D_0000F3C0, NULL, &g_PartType);
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00000F80);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_000010E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00000F98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_000010FC);

s32 func_000011F4(void) {
    return 0x80020002;
}

s32 func_00001200(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryMemoryPartitionInfo);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_000012CC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000135C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001630);
#endif

#if FW_VERSION == 100
void PartitionInit(SceSysmemMemoryPartition *part) {
    SceSysmemCtlBlk *ctl;
    s32 i;
    if (part->size == 0) {
        return;
    }
    {
        s32 ok = (part != NULL);
        if (!ok) {
            Kprintf(D_0000AEE4, D_0000AED8, "PartitionInit", 336);
            sceKernelAssert(ok, 0);
        }
    }
    ctl = part->firstCtlBlk;
    ctl->next = NULL;
    for (i = 0; i < 20; i++) {
        ctl->segs[i].next = &ctl->segs[i + 1];
        ctl->segs[i].word4 = 0;
        ctl->segs[i].word8 = 0;
    }
    ctl->segs[19].next = NULL;
    ctl->segs[0].size = part->size >> 8;
    part->ctlBlkCount = 1;
}
#endif

#if FW_VERSION < 151
u32 PartitionQueryMaxFreeMemSize(SceSysmemMemoryPartition *part) {
    SceSysmemSeg *seg = part->firstCtlBlk->segs;
    u32 max = 0;
    while (seg != NULL) {
        if (!seg->used) {
            if (max < seg->size) {
                max = seg->size;
            }
        }
        seg = seg->next;
    }
    return max << 8;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
u32 PartitionQueryMaxFreeMemSize(SceSysmemMemoryPartition *part) {
    SceSysmemSeg *seg = part->firstCtlBlk->segs;
    u32 max = 0;
    while (seg != NULL) {
        if (!seg->used) {
            max = (max < seg->size) ? seg->size : max;
        }
        seg = seg->next;
    }
    return max << 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_000012BC);

s32 func_00001318(struct Unk_func_00001318_0 *arg0) {
    u32 temp_a3;
    u32 var_a1;
    struct Unk_func_00001318_var_a0 *var_a0;

    var_a0 = arg0->unk10 + 4;
    var_a1 = 0;
    if (var_a0 != NULL) {
        do {
            if (!(var_a0->unk4 & 1)) {
                temp_a3 = (u32) var_a0->unk8 >> 2;
                var_a1 = (var_a1 < temp_a3) ? temp_a3 : var_a1;
            }
            var_a0 = var_a0->unk0;
        } while (var_a0 != NULL);
    }
    return var_a1 << 8;
}
#endif

#if FW_VERSION < 150
u32 SysMemForKernel_E6581468(s32 mpid) {
    s32 oldIntr = suspendIntr();
    u32 ret = PartitionQueryMaxFreeMemSize(MpidToCB(mpid));
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
u32 SysMemForKernel_E6581468(s32 mpid) {
    s32 oldIntr = suspendIntr();
    SceSysmemMemoryPartition *part = MpidToCB(mpid);
    SceSysmemSeg *seg = part->firstCtlBlk->segs;
    u32 max = 0;
    u32 ret;
    while (seg != NULL) {
        if (!seg->used) {
            if (max < seg->size) {
                max = seg->size;
            }
        }
        seg = seg->next;
    }
    ret = max << 8;
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E6581468);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMaxFreeMemSize);
#endif

#if FW_VERSION >= 270
u32 sceKernelMaxFreeMemSize(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = SysMemForKernel_E6581468(2);
    setK1(temp_s0);
    return (u32) temp_v0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_BB90D841);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_ACBD88CA);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_000014BC);
#endif

#if FW_VERSION < 150
void SysMemUserForUser_E6581468(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    SysMemForKernel_E6581468(2);
    setK1(temp_s0);
}
#endif

#if FW_VERSION < 201
u32 PartitionQueryTotalFreeMemSize(SceSysmemMemoryPartition *part) {
    SceSysmemSeg *seg = part->firstCtlBlk->segs;
    s32 total = 0;
    while (seg != NULL) {
        if (!seg->used) {
            total += seg->size;
        }
        seg = seg->next;
    }
    return total << 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 func_00001478(struct Unk_func_00001478_0 *arg0) {
    s32 var_a0;
    struct Unk_func_00001478_var_v1 *var_v1;

    var_v1 = arg0->unk10 + 4;
    var_a0 = 0;
    if (var_v1 != NULL) {
        do {
            if (!(var_v1->unk4 & 1)) {
                var_a0 += (u32) var_v1->unk8 >> 2;
            }
            var_v1 = var_v1->unk0;
        } while (var_v1 != NULL);
    }
    return var_a0 << 8;
}
#endif

#if FW_VERSION < 150
u32 SysMemForKernel_9697CD32(s32 mpid) {
    s32 oldIntr = suspendIntr();
    u32 ret = PartitionQueryTotalFreeMemSize(MpidToCB(mpid));
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
u32 SysMemForKernel_9697CD32(s32 mpid) {
    s32 oldIntr = suspendIntr();
    SceSysmemMemoryPartition *part = MpidToCB(mpid);
    SceSysmemSeg *seg = part->firstCtlBlk->segs;
    s32 total = 0;
    u32 ret;
    while (seg != NULL) {
        if (!seg->used) {
            total += seg->size;
        }
        seg = seg->next;
    }
    ret = total << 8;
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9697CD32);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelTotalFreeMemSize);
#endif

#if FW_VERSION >= 270
u32 sceKernelTotalFreeMemSize(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = SysMemForKernel_9697CD32(2);
    setK1(temp_s0);
    return (u32) temp_v0;
}
#endif

#if FW_VERSION < 150
void SysMemUserForUser_9697CD32(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    SysMemForKernel_9697CD32(2);
    setK1(temp_s0);
}

void _memset32(void *dst, u32 size, u32 c) {
    u32 *p = dst;
    s32 n = size >> 2;
    while (n > 0) {
        n--;
        *p++ = c;
    }
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceKernelFillFreeBlock);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000168C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001A68);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00001A80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001AE4);

s32 func_00001B6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00001B74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001B64);

INCLUDE_ASM("nonmatchings/sysmem", func_00001BCC);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocPartitionMemory);
#endif

#if FW_VERSION < 150
s32 func_00001B7C(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    u32 *out = __builtin_va_arg(ap, u32 *);
    *out = PartitionQueryMaxFreeMemSize(UID_CB_TO_DATA(uid, g_PartType, SceSysmemMemoryPartition));
    return uid->uid;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00001BC8);

INCLUDE_ASM("nonmatchings/sysmem", func_00001C4C);

u32 func_00001CC0(SceUID id) {
    SceSysmemUidCB *uid;
    SceSysmemMemoryBlock *blk;
    if (sceKernelGetUIDcontrolBlockWithType(id, g_MemBlockType, &uid) != 0) {
        return 0;
    }
    blk = UID_CB_TO_DATA(uid, g_MemBlockType, SceSysmemMemoryBlock);
    return blk->addr;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00001D10);

SceUID func_00001D60(u32 addr) {
    SceSysmemUidCB *cur;
    for (cur = g_MemBlockType->PARENT0; cur != g_MemBlockType; cur = cur->PARENT0) {
        SceSysmemMemoryBlock *blk = UID_CB_TO_DATA(cur, g_MemBlockType, SceSysmemMemoryBlock);
        if (addr >= blk->addr && addr < blk->addr + blk->size) {
            return cur->uid;
        }
    }
    return -1;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00001DC8);

INCLUDE_ASM("nonmatchings/sysmem", func_00001E2C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000B174);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000B194);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000B19C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E098);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelResizeMemoryBlock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryMemoryBlockInfo);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_00002D28);

INCLUDE_ASM("nonmatchings/sysmem", func_000032A0);

INCLUDE_ASM("nonmatchings/sysmem", func_000033E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001EAC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00001FEC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_000016EC);

s32 func_000017D8(struct Unk_func_000017D8_0 *arg0) {
    return arg0->unkC;
}

s32 func_000017E0(struct Unk_func_000017E0_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000017E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001834);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001918);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00001B24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000184C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F3F0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocPartitionMemory);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001C60);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00002190);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSizeLockMemoryBlock);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelResizeMemoryBlock);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelJointMemoryBlock);
#else
s32 sceKernelJointMemoryBlock(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSeparateMemoryBlock);
#else
s32 sceKernelSeparateMemoryBlock(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_2A3E5280);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryMemoryBlockInfo);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F3F0);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00002B30);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", func_0000387C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", func_0000354C);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000381C);

INCLUDE_ASM("nonmatchings/sysmem", func_00003A78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_00002F48);

INCLUDE_ASM("nonmatchings/sysmem", func_000035F4);
#endif

#if FW_VERSION >= 201
void func_0000373C(void) {
    sceKernelCreateUIDtype((s32) "SceSysMemMemoryBlock", 0xC, (s32) &D_0000F3F0, 0, (s32) &D_0000F8C0);
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003B2C);

INCLUDE_ASM("nonmatchings/sysmem", func_00003B94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003774);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00003C44);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003748);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_000037F4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSizeLockMemoryBlock);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00003A1C);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelFreePartitionMemory(SceUID id) {
    SceSysmemUidCB *uid;
    s32 oldIntr = suspendIntr();
    s32 ret = sceKernelGetUIDcontrolBlockWithType(id, g_MemBlockType, &uid);
    if (ret != 0) {
        resumeIntr(oldIntr);
        return ret;
    }
    ret = sceKernelDeleteUID(id);
    resumeIntr(oldIntr);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelFreePartitionMemory);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000038C0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00002B40);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003B50);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2A3E5280);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00002C0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E5E0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E620);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryBlockSize);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelQueryMemoryBlockInfo);

u32 sceKernelGetBlockHeadAddr(SceUID id) {
    u32 oldK1 = shiftK1Noreorder();
    s32 oldIntr = suspendIntr();
    u32 addr = func_00001CC0(id);
    resumeIntr(oldIntr);
    setK1(oldK1);
    return addr;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
u32 sceKernelGetBlockHeadAddr(SceUID id) {
    SceSysmemUidCB *uid;
    u32 addr;
    s32 oldIntr = suspendIntr();
    addr = 0;
    if (sceKernelGetUIDcontrolBlockWithType(id, g_MemBlockType, &uid) == 0) {
        SceSysmemMemoryBlock *blk = UID_CB_TO_DATA(uid, g_MemBlockType, SceSysmemMemoryBlock);
        addr = blk->addr;
    }
    resumeIntr(oldIntr);
    return addr;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetBlockHeadAddr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003BC4);

INCLUDE_ASM("nonmatchings/sysmem", func_00003CA0);

INCLUDE_ASM("nonmatchings/sysmem", func_00003D28);
#endif

#if FW_VERSION < 150
void func_00002EC4(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00001E2C(arg0, arg1);
    M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) | 1);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00002EEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_000031E4);

INCLUDE_ASM("nonmatchings/sysmem", func_000037AC);

INCLUDE_ASM("nonmatchings/sysmem", func_00003BC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E79C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E7DC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003E04);
#endif

#if FW_VERSION >= 270
void func_00004238(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00001B24(arg0, arg1);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) | 1);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", func_00004410);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", func_000045E4);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C4C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C84);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_000046A0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00004260);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003EE0);

INCLUDE_ASM("nonmatchings/sysmem", func_00003F68);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00004350);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004398);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_00004788);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000421C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00003D50);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000044C0);

INCLUDE_ASM("nonmatchings/sysmem", func_00004500);

INCLUDE_ASM("nonmatchings/sysmem", func_00004538);

INCLUDE_ASM("nonmatchings/sysmem", func_00004574);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004434);

INCLUDE_ASM("nonmatchings/sysmem", func_000044A4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004554);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00004588);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000046D4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00003ED4);

INCLUDE_ASM("nonmatchings/sysmem", func_00003F14);

INCLUDE_ASM("nonmatchings/sysmem", func_00003FBC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_000045B0);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00004824);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004620);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00004A54);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_000055E8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", func_000055F8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", func_0000584C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00004704);

INCLUDE_ASM("nonmatchings/sysmem", func_00004854);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000049E0);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000405C);

INCLUDE_ASM("nonmatchings/sysmem", func_000041A8);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00004A38);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000048E0(void *arg0) {
    return ((((u32) (M2C_FIELD(arg0, s32 *, 4) - 0x10) >> 3) - M2C_FIELD(arg0, s32 *, 8)) * 8) - 8;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8C0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8E0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8F0);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset32);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemmove);

INCLUDE_ASM("nonmatchings/sysmem", func_0000541C);

INCLUDE_ASM("nonmatchings/sysmem", func_00005448);

INCLUDE_ASM("nonmatchings/sysmem", func_00005470);

void func_000054E4(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}

void wmemclear(void *dst, u32 size) {
    s32 *p = dst;
    u32 n = size >> 2;
    while (n != 0) {
        n--;
        *p++ = 0;
    }
}

void uidStrncpy(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a4;
    u8 *var_a0;
    u8 *var_a1;
    u8 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = *var_a1;
    var_a4 = 0;
    if ((var_a3 != 0) & (arg2 != 0)) {
        do {
            *var_a0 = var_a3;
            var_a1 += 1;
            var_a4 += 1;
            var_a3 = *var_a1;
            var_a0 += 1;
        } while ((var_a3 != 0) & (var_a4 < arg2));
    }
}

INCLUDE_ASM("nonmatchings/sysmem", func_00005574);

s32 uidStrnlen(const char *s, s32 max) {
    u32 n = 0;
    if (s == NULL) {
        return 0;
    }
    for (; *s++ != '\0' && n < max; n++) {
    }
    return n;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000055F0);

INCLUDE_ASM("nonmatchings/sysmem", func_00005628);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000056CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00005710);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceKernelMemoryExtendSize(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 2;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000058A8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E95C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E96C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetDdrMemoryProtection);
#endif

#if FW_VERSION < 150
s32 func_0000435C(void *arg0) {
    return ((((u32) (M2C_FIELD(arg0, s32 *, 4) - 0x10) >> 3) - M2C_FIELD(arg0, s32 *, 8)) * 8) - 8;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000437C);

INCLUDE_ASM("nonmatchings/sysmem", func_000043DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00004498);

INCLUDE_ASM("nonmatchings/sysmem", func_00004550);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000046D0);
#else
s32 func_00004A60(struct Unk_func_00004A60_0 *arg0) {
    return ((((u32) (arg0->unk4 - 0x10) >> 3) - arg0->unk8) * 8) - 8;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_00005B74);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00005608);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset32);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemmove);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemmoveWithFill);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_00005368);

INCLUDE_ASM("nonmatchings/sysmem", func_00005394);

INCLUDE_ASM("nonmatchings/sysmem", func_000053BC);

void func_00005430(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}

INCLUDE_ASM("nonmatchings/sysmem", wmemclear);

INCLUDE_ASM("nonmatchings/sysmem", func_0000547C);

INCLUDE_ASM("nonmatchings/sysmem", func_000054C8);

INCLUDE_ASM("nonmatchings/sysmem", func_000054FC);

INCLUDE_ASM("nonmatchings/sysmem", func_00005544);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000557C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelCopyGameInfo);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005FAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005724);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", func_00005850);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
void func_00005850(void) {
    D_0000F8C4.unk0 = 0x70;
    M2C_VFIELD(&D_0000F8C4, s32, 0x6C) = -1;
    D_0000F8C4.unk4 = 0;
    D_0000F8C4.unk8 = 0;
    D_0000F8C4.unk18 = 0;
    D_0000F8C4.unk40 = 0;
    D_0000F8C4.unk44 = 0;
    D_0000F8C4.unk54 = 0;
    M2C_VFIELD(&D_0000F8C4, s8, 0x58) = 0;
    D_0000F8C4.unk60 = 0;
    D_0000F8C4.unk64 = 0;
    M2C_VFIELD(&D_0000F8C4, s32, 0x68) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_00005850(void) {
    D_0000F8C4.unk0 = 0x68;
    D_0000F8C4.unk64 = -1;
    D_0000F8C4.unk4 = 0;
    D_0000F8C4.unk8 = 0;
    D_0000F8C4.unk18 = 0;
    D_0000F8C4.unk40 = 0;
    D_0000F8C4.unk44 = 0;
    D_0000F8C4.unk54 = 0;
    D_0000F8C4.unk58 = 0;
    D_0000F8C4.unk5C = 0;
    D_0000F8C4.unk60 = 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetUmdData);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_000058DC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetQTGP2);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetQTGP2);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetQTGP3);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetQTGP3);

s32 sceKernelGetAllowReplaceUmd(s32 *arg0) {
    s32 var_a1;

    var_a1 = 0x80020001;
    if (D_0000F8C4.unk4 & 0x10) {
        var_a1 = 0;
        *arg0 = D_0000F8C4.unk40;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetAllowReplaceUmd);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetParamSfo);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2269BFA2);
#endif

#if FW_VERSION >= 201
M2C_UNK *sceKernelGetGameInfo(void) {
    return &D_0000F8C4;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetCompiledSdkVersion);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
s32 sceKernelGetCompiledSdkVersion(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x1000) {
        var_a0 = D_0000F8C4.unk60;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00012D3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012D54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelGetCompiledSdkVersion(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x1000) {
        var_a0 = D_0000F8C4.unk58;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompiledSdkVersion);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetCompilerVersion);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
s32 sceKernelGetCompilerVersion(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x2000) {
        var_a0 = D_0000F8C4.unk64;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelGetCompilerVersion(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x2000) {
        var_a0 = D_0000F8C4.unk5C;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompilerVersion);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetDNAS);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
s32 sceKernelGetDNAS(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x10000) {
        var_a0 = M2C_FIELD(&D_0000F8C4, s32 *, 0x68);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelGetDNAS(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x10000) {
        var_a0 = D_0000F8C4.unk60;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetDNAS);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetFilenameBlock);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
s32 sceKernelGetFilenameBlock(void) {
    s32 var_a0;

    var_a0 = -1;
    if (D_0000F8C4.unk4 & 0x100000) {
        var_a0 = M2C_FIELD(&D_0000F8C4, s32 *, 0x6C);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelGetFilenameBlock(void) {
    s32 var_a0;

    var_a0 = -1;
    if (D_0000F8C4.unk4 & 0x100000) {
        var_a0 = D_0000F8C4.unk64;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetFilenameBlock);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetInitialRandomValue);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetModel);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
s32 sceKernelGetInitialRandomValue(void) {
    return D_00010AF0;
}
#endif

#if FW_VERSION >= 250
s32 sceKernelSetRebootKernel(s32 arg0) {
    D_00010244 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelRebootKernel);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterGetIdFunc);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetId);
#endif

#if FW_VERSION >= 250
s32 sceKernelApiEvaluationInit(void) {
    return 0;
}

s32 sceKernelRegisterApiEvaluation(void) {
    return 0x80020001;
}

s32 sceKernelApiEvaliationAddData(void) {
    return 0;
}

s32 sceKernelApiEvaluationReport(void) {
    return 0;
}

s32 sceKernelSetGcovFunction(void) {
    return 0;
}

s32 sceKernelCallGcovFunction(void) {
    return 0;
}

s32 sceKernelSetGprofFunction(void) {
    return 0;
}

s32 sceKernelCallGprofFunction(void) {
    return 0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", sceKernelCheckDebugHandler);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_000067E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005C64);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemoryExtendSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void sceKernelMemoryExtendSize(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 2;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemoryShrinkSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void sceKernelMemoryShrinkSize(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemoryOpenSize);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemoryCloseSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void sceKernelMemoryCloseSize(s32 arg0) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | (arg0 & 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_00005D94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetDdrMemoryProtection);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00011EAC);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011ED4);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011EF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00011F44);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00005FD4);
#endif

void *AllocSceUIDtypeCB(void) {
    void *buf = _AllocHeapMemory(&EHeap4UID, sizeof(SceSysmemUidCB), 0);
    if (buf != NULL) {
        wmemclear(buf, sizeof(SceSysmemUidCB));
    }
    return buf;
}

s32 FreeSceUIDtypeCB(void *arg0) {
    _FreeHeapMemory(&EHeap4UID, arg0);
    return 0;
}

SceSysmemUidCB *AllocSceUIDobjectCB(s32 size) {
    SceSysmemUidCB *uid = _AllocHeapMemory(&EHeap4UID, size, 0);
    if (uid != NULL) {
        wmemclear(uid, size);
    }
    return uid;
}

s32 FreeSceUIDobjectCB(void *arg0) {
    _FreeHeapMemory(&EHeap4UID, arg0);
    return 0;
}

#if FW_VERSION < 201
char *AllocSceUIDnamestr(const char *str1, const char *str2) {
    u32 len1 = uidStrnlen(str1, 31);
    u32 len2 = uidStrnlen(str2, 31);
    char *buf;
    if (len1 + len2 >= 32) {
        return NULL;
    }
    buf = _AllocHeapMemory(&EHeap4UID, len1 + len2 + 1, 0);
    if (buf != NULL) {
        uidStrncpy(buf, str1, len1);
        uidStrncpy(buf + len1, str2, len2);
        buf[len1 + len2] = '\0';
    }
    return buf;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", AllocSceUIDnamestr);
#endif

s32 FreeSceUIDnamestr(void *arg0) {
    _FreeHeapMemory(&EHeap4UID, arg0);
    return 0;
}

SceSysmemHoldHead *AllocSceUIDHoldHead(void) {
    SceSysmemHoldHead *head = _AllocHeapMemory(&EHeap4UID, sizeof(SceSysmemHoldHead), 0);
    if (head != NULL) {
        wmemclear(head, sizeof(SceSysmemHoldHead));
    }
    return head;
}

s32 FreeSceUIDHoldHead(void *arg0) {
    _FreeHeapMemory(&EHeap4UID, arg0);
    return 0;
}

SceSysmemHoldElement *AllocSceUIDHoldElement(void) {
    SceSysmemHoldElement *elem = _AllocHeapMemory(&EHeap4UID, sizeof(SceSysmemHoldElement), 0);
    if (elem != NULL) {
        wmemclear(elem, sizeof(SceSysmemHoldElement));
    }
    return elem;
}

s32 FreeSceUIDHoldElement(void *arg0) {
    _FreeHeapMemory(&EHeap4UID, arg0);
    return 0;
}

#if FW_VERSION < 150
void wmemclear(void *dst, u32 size) {
    s32 *p = dst;
    s32 n = size >> 2;
    while (n > 0) {
        n--;
        *p++ = 0;
    }
}

void uidStrncpy(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a4;
    u8 *var_a0;
    u8 *var_a1;
    u8 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = *var_a1;
    var_a4 = 0;
    if ((var_a3 != 0) & (arg2 != 0)) {
        do {
            *var_a0 = var_a3;
            var_a1 += 1;
            var_a4 += 1;
            var_a3 = *var_a1;
            var_a0 += 1;
        } while ((var_a3 != 0) & (var_a4 < arg2));
    }
}

s32 uidStrnlen(const char *s, s32 max) {
    s32 n;
    for (n = 0; *s++ != '\0' && n < max; n++) {
    }
    return n;
}
#endif

s32 sceKernelCallUIDFunction(SceUID id, s32 funcId, ...) {
    __builtin_va_list ap;
    SceSysmemUidFunc func;
    SceSysmemUidCB *parentUidWithFunc;
    s32 oldIntr;
    s32 ret;
    SceSysmemUidCB *uid;

    __builtin_va_start(ap, funcId);
    oldIntr = suspendIntr();
    uid = UIDCB(id);
    if (id < 0 || uid->uid != id) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    func = NULL;
    sceKernelLookupUIDFunction(uid->meta, funcId, &func, &parentUidWithFunc);
    if (func != NULL) {
        ret = func(uid, parentUidWithFunc, funcId, ap);
    } else {
        ret = sceKernelCallUIDObjFunction(uid, 0xB9970352, funcId);
    }
    resumeIntr(oldIntr);
    return ret;
}

s32 sceKernelCallUIDObjFunction(SceSysmemUidCB *uid, s32 funcId, ...) {
    __builtin_va_list ap;
    SceSysmemUidFunc func;
    SceSysmemUidCB *parentUidWithFunc;
    s32 oldIntr;
    s32 ret;

    __builtin_va_start(ap, funcId);
    oldIntr = suspendIntr();
    func = NULL;
    sceKernelLookupUIDFunction(uid->meta, funcId, &func, &parentUidWithFunc);
    if (func != NULL) {
        ret = func(uid, parentUidWithFunc, funcId, ap);
    } else {
        ret = sceKernelCallUIDObjFunction(uid, 0xB9970352, funcId);
    }
    resumeIntr(oldIntr);
    return ret;
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelLookupUIDFunction);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 201
s32 sceKernelCallUIDObjCommonFunction(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    SceSysmemUidFunc func;
    s32 oldIntr;
    s32 ret;

    oldIntr = suspendIntr();
    sceKernelLookupUIDFunction(uidWithFunc->PARENT1, funcId, &func, &uidWithFunc);
    if (func != NULL) {
        ret = func(uid, uidWithFunc, funcId, ap);
    } else {
        ret = sceKernelCallUIDObjFunction(uid, 0xB9970352, funcId);
    }
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F718);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F770);
#endif

#if FW_VERSION < 201
s32 sceKernelLookupUIDFunction(SceSysmemUidCB *uid, s32 id, SceSysmemUidFunc *func, SceSysmemUidCB **parentUidWithFunc) {
    s32 oldIntr = suspendIntr();
    *func = NULL;
    while (uid != NULL) {
        if (uid->funcTable != NULL) {
            SceSysmemUidLookupFunc *cur = uid->funcTable;
            while (cur->func != NULL) {
                if (cur->id == id) {
                    *parentUidWithFunc = uid;
                    *func = cur->func;
                    resumeIntr(oldIntr);
                    return 0;
                }
                cur++;
            }
        }
        uid = uid->PARENT1;
    }
    resumeIntr(oldIntr);
    return 0x800200CE;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelCallUIDObjCommonFunction(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    SceSysmemUidFunc func;
    s32 oldIntr;
    s32 ret;

    oldIntr = suspendIntr();
    sceKernelLookupUIDFunction(uidWithFunc->PARENT1, funcId, &func, &uidWithFunc);
    if (func != NULL) {
        ret = func(uid, uidWithFunc, funcId, ap);
    } else {
        ret = sceKernelCallUIDObjFunction(uid, 0xB9970352, funcId);
    }
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", InitUidRoot);

INCLUDE_ASM("nonmatchings/sysmem", _sceKernelCreateUIDtypeInherit_sub);
#endif

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EABC);

#if FW_VERSION >= 102
INCLUDE_ASM("nonmatchings/sysmem", sceKernelCreateUIDtypeInherit);
#else
s32 sceKernelCreateUIDtypeInherit(const char *parentName, const char *name, s32 size, SceSysmemUidLookupFunc *funcTable, SceSysmemUidLookupFunc *metaFuncTable, SceSysmemUidCB **uidTypeOut) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *parent;
    SceSysmemUidCB *uidType;
    SceSysmemUidCB *metaUidType;
    char *namePtr;
    char *metaName;
    s32 ret;
    if (parentName == NULL || name == NULL) {
        resumeIntr(oldIntr);
        return 0x80020001;
    }
    if (search_UidType_By_Name(name) != NULL) {
        resumeIntr(oldIntr);
        return 0x800200C8;
    }
    parent = search_UidType_By_Name(parentName);
    if (parent == NULL) {
        resumeIntr(oldIntr);
        return 0x800200C9;
    }
    uidType = AllocSceUIDtypeCB();
    metaUidType = AllocSceUIDtypeCB();
    namePtr = AllocSceUIDnamestr(name, D_0000EABC);
    metaName = AllocSceUIDnamestr("Meta", name);
    if (namePtr == NULL || metaName == NULL || uidType == NULL || metaUidType == NULL) {
        if (uidType != NULL) {
            FreeSceUIDtypeCB(uidType);
        }
        if (metaUidType != NULL) {
            FreeSceUIDtypeCB(metaUidType);
        }
        if (namePtr != NULL) {
            FreeSceUIDnamestr(namePtr);
        }
        if (metaName != NULL) {
            FreeSceUIDnamestr(metaName);
        }
        resumeIntr(oldIntr);
        return 0x80020190;
    }
    ret = _sceKernelCreateUIDtypeInherit_sub(parent, uidType, metaUidType, namePtr, metaName, size, funcTable, metaFuncTable, uidTypeOut);
    resumeIntr(oldIntr);
    return ret;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelCreateUID);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSearchUIDbyName);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", search_UidType_By_Name);

INCLUDE_ASM("nonmatchings/sysmem", search_UIDObj_By_Name_With_Type);

INCLUDE_ASM("nonmatchings/sysmem", func_00006C10);

INCLUDE_ASM("nonmatchings/sysmem", func_00006D84);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00006CCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006D4C);

INCLUDE_ASM("nonmatchings/sysmem", func_00006DCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006F40);
#endif

s32 sceKernelCreateUIDtype(const char *name, s32 size, SceSysmemUidLookupFunc *funcTable, SceSysmemUidLookupFunc *metaFuncTable, SceSysmemUidCB **uidTypeOut) {
    return sceKernelCreateUIDtypeInherit("Basic", name, size, funcTable, metaFuncTable, uidTypeOut);
}

s32 sceKernelDeleteUIDtype(SceSysmemUidCB *uidType) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *cur;
    if (uidType->PARENT0 == uidType && uidType->meta->next.numChild == 0) {
        cur = g_uidTypeList.root;
        while (cur->next.next != uidType) {
            cur = cur->next.next;
        }
        cur->next.next = uidType->next.next;
        FreeSceUIDnamestr(uidType->name);
        FreeSceUIDnamestr(uidType->meta->name);
        FreeSceUIDtypeCB(uidType->meta);
        FreeSceUIDtypeCB(uidType);
        resumeIntr(oldIntr);
        return 0;
    }
    resumeIntr(oldIntr);
    return 0x800200CA;
}

#if FW_VERSION < 350
s32 sceKernelGetUIDname(SceUID id, s32 len, char *out) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid = UIDCB(id);
    char *name;
    if (id <= 0 || uid->uid != id) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    name = uid->name;
    while (len > 1 && *name != '\0') {
        len--;
        *out++ = *name++;
    }
    *out = '\0';
    resumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetUIDname);
#endif

#if FW_VERSION < 350
s32 sceKernelRenameUID(SceUID id, const char *name) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid = UIDCB(id);
    char *newName;
    if (id <= 0 || uid->uid != id) {
        return 0x800200CB;
    }
    FreeSceUIDnamestr(uid->name);
    newName = AllocSceUIDnamestr(name, D_0000EABC);
    if (newName == NULL) {
        resumeIntr(oldIntr);
        return 0x80020190;
    }
    uid->name = newName;
    resumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelRenameUID);
#endif

#if FW_VERSION < 150 || (FW_VERSION >= 300 && FW_VERSION < 350)
s32 sceKernelGetUIDtype(SceUID id) {
    SceSysmemUidCB *uid = UIDCB(id);
    if (id <= 0 || uid->uid != id) {
        return 0x800200CB;
    }
    return uid->meta->uid;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetUIDtype);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", _sceKernelCreateUID_sub);

s32 sceKernelCreateUID(SceSysmemUidCB *type, const char *name, s32 attr, SceSysmemUidCB **outUid) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid;
    char *nameBuf;
    s32 ret;
    if (type == NULL || name == NULL) {
        resumeIntr(oldIntr);
        return 0x80020001;
    }
    *outUid = NULL;
    uid = AllocSceUIDobjectCB(type->childSize * 4);
    if (uid == NULL) {
        resumeIntr(oldIntr);
        return 0x80020190;
    }
    nameBuf = AllocSceUIDnamestr(name, D_0000EABC);
    if (nameBuf == NULL) {
        FreeSceUIDobjectCB(uid);
        resumeIntr(oldIntr);
        return 0x80020190;
    }
    *outUid = uid;
    ret = _sceKernelCreateUID_sub(type, uid, nameBuf, attr);
    resumeIntr(oldIntr);
    return ret;
}
#endif

s32 sceKernelDeleteUID(SceUID id) {
    return sceKernelCallUIDFunction(id, 0x87089863);
}

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSearchUIDbyName);
#endif

#if FW_VERSION < 270
s32 sceKernelGetUIDcontrolBlock(SceUID id, SceSysmemUidCB **uidOut) {
    SceSysmemUidCB *uid;
    if (id == 0 || (id & 0x80000001) != 1) {
        return 0x800200CB;
    }
    uid = UIDCB(id);
    if (id <= 0 || uid->uid != id) {
        return 0x800200CB;
    }
    *uidOut = uid;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetUIDcontrolBlock);
#endif

#if FW_VERSION < 270
s32 suspendIntr(void);
void resumeIntr(s32);

s32 sceKernelGetUIDcontrolBlockWithType(SceUID id, SceSysmemUidCB *type, SceSysmemUidCB **outUid) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid;
    if (id == 0 || (id & 0x80000001) != 1) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    uid = UIDCB(id);
    if (id <= 0 || uid->uid != id) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    if (uid->meta != type) {
        resumeIntr(oldIntr);
        return 0x800200CC;
    }
    *outUid = uid;
    resumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetUIDcontrolBlockWithType);
#endif

s32 sceKernelIsKindOf(SceSysmemUidCB *uid, SceSysmemUidCB *type) {
    SceSysmemUidCB *cur = uid->meta;
    while (cur != NULL && cur != type) {
        cur = cur->PARENT1;
    }
    return cur == type;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintUidListAll);

SceSysmemUidList *sceKernelGetUidmanCB(void) {
    return &g_uidTypeList;
}
#else
s32 func_00005DBC(const char *s1, const char *s2) {
    if (s1 == s2) {
        return 1;
    }
    if (s1 == NULL || s2 == NULL) {
        return 0;
    }
    while (*s1 == *s2++) {
        if (*s1++ == '\0') {
            return 1;
        }
    }
    return 0;
}

SceSysmemUidCB *search_UidType_By_Name(const char *name) {
    SceSysmemUidCB *cur = g_uidTypeList.root;
    do {
        if (func_00005DBC(name, cur->name)) {
            return cur;
        }
        cur = cur->next.next;
    } while (cur != g_uidTypeList.root);
    return NULL;
}

SceSysmemUidCB *search_UIDObj_By_Name_With_Type(const char *name, SceSysmemUidCB *type) {
    SceSysmemUidCB *obj = type->PARENT0;
    SceSysmemUidCB *cur = type;
    while (obj != cur) {
        if (func_00005DBC(name, obj->name)) {
            return obj;
        }
        cur = cur->PARENT0;
    }
    return NULL;
}
#endif

s32 obj_no_op(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    return uid->uid;
}

s32 obj_do_delete(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    SceSysmemUidCB *parent = uid->PARENT0;
    uid->meta = NULL;
    parent->nextChild = uid->nextChild;
    uid->uid = 0;
    uid->nextChild->PARENT0 = parent;
    uid->nextChild = uid;
    uid->PARENT0 = uid;
    FreeSceUIDnamestr(uid->name);
    FreeSceUIDobjectCB(uid);
    return 0;
}

s32 obj_do_name(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    s32 len = __builtin_va_arg(ap, s32);
    char *out = __builtin_va_arg(ap, char *);
    char *name = uid->name;
    while (len > 1 && *name != '\0') {
        len--;
        *out++ = *name++;
    }
    *out = '\0';
    return 0;
}

s32 obj_do_type(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    return uid->meta->uid;
}

#if FW_VERSION < 350
s32 obj_do_isKindOf(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    SceUID typeId = __builtin_va_arg(ap, SceUID);
    SceSysmemUidCB *type = UIDCB(typeId);
    SceSysmemUidCB *cur;
    if (typeId <= 0 || type->uid != typeId) {
        return 0;
    }
    cur = uid->meta;
    while (cur != NULL && cur != type) {
        cur = cur->PARENT1;
    }
    return cur == type;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", obj_do_isKindOf);
#endif

#if FW_VERSION < 350
s32 obj_do_isMemberOf(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    SceUID typeId = __builtin_va_arg(ap, SceUID);
    SceSysmemUidCB *type = UIDCB(typeId);
    if (typeId <= 0 || type->uid != typeId) {
        return 0;
    }
    return uid->meta == type;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", obj_do_isMemberOf);
#endif

s32 obj_do_doseNotRecognize(SceSysmemUidCB *uid, SceSysmemUidCB *uidWithFunc, s32 funcId, __builtin_va_list ap) {
    Kprintf("WARNING: %s of %s not support 0x%x key\n", uid->name, uid->meta->name, __builtin_va_arg(ap, s32));
    return 0x800200CE;
}

#if FW_VERSION < 150
void func_00006080(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}

static const char D_0000BA94[] = "Basic";
static const char D_0000BA9C[] = "MetaBasic";

void InitUidBasic(SceSysmemUidCB *root, char *rootName, SceSysmemUidCB *metaRoot, char *metaRootName, SceSysmemUidCB *basic, char *basicName, SceSysmemUidCB *metaBasic, char *metaBasicName) {
    s32 oldIntr = suspendIntr();
    InitUidRoot(root, rootName, metaRoot, metaRootName);
    func_000065F8((u8 *)basicName, (u8 *)D_0000BA94);
    func_000065F8((u8 *)metaBasicName, (u8 *)D_0000BA9C);
    _sceKernelCreateUIDtypeInherit_sub(g_uidTypeList.root, basic, metaBasic, basicName, metaBasicName, 4, D_0000C2F8, NULL, &g_uidTypeList.basic);
    resumeIntr(oldIntr);
}
#endif

s32 sceKernelIsHold(SceSysmemUidCB *uid0, SceSysmemUidCB *uid1) {
    s32 oldIntr = suspendIntr();
    if (sceKernelIsKindOf(uid1, g_uidTypeList.basic) != 0 && sceKernelIsKindOf(uid0, g_uidTypeList.basic) != 0) {
        SceSysmemHoldHead *head0 = *UID_CB_TO_DATA(uid0, g_uidTypeList.basic, SceSysmemHoldHead *);
        SceSysmemHoldHead *head1 = *UID_CB_TO_DATA(uid1, g_uidTypeList.basic, SceSysmemHoldHead *);
        SceSysmemHoldElem *cur;
        if (head1->count2 < head0->count1) {
            cur = head1->hold1.next;
            while (cur != &head1->hold1) {
                if (((SceSysmemHoldElement *)((u8 *)cur - 8))->uid0 == uid0) {
                    resumeIntr(oldIntr);
                    return 1;
                }
                cur = cur->next;
            }
        } else {
            cur = head0->hold0.next;
            while (cur != &head0->hold0) {
                if (((SceSysmemHoldElement *)cur)->uid1 == uid1) {
                    resumeIntr(oldIntr);
                    return 1;
                }
                cur = cur->next;
            }
        }
    }
    resumeIntr(oldIntr);
    return 0;
}

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_000062B0);

INCLUDE_ASM("nonmatchings/sysmem", func_00006520);
#endif

#if FW_VERSION == 100
s32 sceKernelHoldUID(SceUID id0, SceUID id1) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid1 = UIDCB(id1);
    SceSysmemUidCB *uid0 = UIDCB(id0);
    if (id1 < 1 || id0 < 1 || uid1->uid != id1 || uid0->uid != id0) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    if (sceKernelIsKindOf(uid1, g_uidTypeList.basic) == 0 || sceKernelIsKindOf(uid0, g_uidTypeList.basic) == 0) {
        resumeIntr(oldIntr);
    }
    return 0x800200CE;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelHoldUID);
#endif

#if FW_VERSION == 100
s32 sceKernelReleaseUID(SceUID id0, SceUID id1) {
    s32 oldIntr = suspendIntr();
    SceSysmemUidCB *uid1 = UIDCB(id1);
    SceSysmemUidCB *uid0 = UIDCB(id0);
    if (id1 < 1 || id0 < 1 || uid1->uid != id1 || uid0->uid != id0) {
        resumeIntr(oldIntr);
        return 0x800200CB;
    }
    if (sceKernelIsKindOf(uid1, g_uidTypeList.basic) == 0 || sceKernelIsKindOf(uid0, g_uidTypeList.basic) == 0) {
        resumeIntr(oldIntr);
    }
    return 0x800200CE;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelReleaseUID);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00007CF4);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F86C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00007C98);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00007E54);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00007F4C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelUnregisterSysEventHandler);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysEventDispatch);
#else
void func_000065F8(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}
#endif

#if FW_VERSION < 201
s32 func_00006620(void) {
    g_sysEventHandlers = NULL;
    return 0;
}
#else
s32 func_00008160(void) {
    g_sysEventHandlers = NULL;
    return 0;
}
#endif

s32 sceKernelIsRegisterSysEventHandler(SceSysEventHandler *handler) {
    s32 oldIntr = suspendIntr();
    SceSysEventHandler *cur;
    for (cur = g_sysEventHandlers; cur != NULL; cur = cur->next) {
        if (cur == handler) {
            break;
        }
    }
    resumeIntr(oldIntr);
    return cur != NULL;
}

#if FW_VERSION < 150
s32 sceKernelRegisterSysEventHandler(SceSysEventHandler *handler) {
    s32 oldIntr = suspendIntr();
    s32 gp;
    if (sceKernelIsRegisterSysEventHandler(handler)) {
        resumeIntr(oldIntr);
        return 0x80020067;
    }
    handler->busy = 0;
    __asm__ __volatile__("move %0, $gp" : "=r"(gp));
    handler->gp = gp;
    handler->next = g_sysEventHandlers;
    g_sysEventHandlers = handler;
    resumeIntr(oldIntr);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterSysEventHandler);

SceSysEventHandler *sceKernelReferSysEventHandlers(void) {
    return g_sysEventHandlers;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelUnregisterSysEventHandler);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysEventDispatch);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00006B9C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00008284);

#if FW_VERSION < 150
s32 sceKernelRegisterPowerHandlers(s32 arg0) {
    D_0000C528 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelRegisterPowerHandlers(s32 arg0) {
    D_0000F87C = arg0;
    return D_0000F878;
}
#endif

#if FW_VERSION >= 201
s32 sceKernelRegisterPowerHandlers(s32 arg0) {
    D_0000F934 = arg0;
    return D_0000F930;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerLock);
#else
s32 sceKernelPowerLock(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (D_0000C528 == 0) {

    } else {
        var_v0 = M2C_FIELD(D_0000C528, s32 (**)(), 8)();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000832C);
#else
s32 func_0000832C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_0000C528 == 0) {

    } else {
        var_v0 = M2C_FIELD(D_0000C528, s32 (**)(), 0x10)();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerUnlock);
#else
s32 sceKernelPowerUnlock(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (D_0000C528 == 0) {

    } else {
        var_v0 = M2C_FIELD(D_0000C528, s32 (**)(), 0xC)();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", func_000083B8);
#else
s32 func_000083B8(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_0000C528 == 0) {

    } else {
        var_v0 = M2C_FIELD(D_0000C528, s32 (**)(), 0x14)();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerTick);
#else
s32 sceKernelPowerTick(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (D_0000C528 == 0) {

    } else {
        var_v0 = M2C_FIELD(D_0000C528, s32 (**)(), 4)();
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00006D10);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemTryLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemUnlock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerRebootStart);
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterSuspendHandler);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterResumeHandler);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDispatchSuspendHandlers);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/sysmem", func_00006EDC);
#else
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDispatchResumeHandlers);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000089F4);

INCLUDE_ASM("nonmatchings/sysmem", func_00008CDC);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/sysmem", func_0000755C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000756C);
#else
INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_67B59042);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_B2C9640B);
#endif

#if FW_VERSION < 150
s32 sceKernelGetDebugPutchar(void) {
    return D_0000C82C;
}

void sceKernelRegisterDebugPutchar(s32 arg0) {
    D_0000C82C = arg0;
}

void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1) {
    D_0000C510 = arg0;
    D_0000C514 = arg1;
}

void *func_000070E0(const void *s, s32 c, s32 n) {
    const u8 *p = s;
    u8 ch = c;
    if (p != NULL) {
        while (n > 0) {
            if (*p == ch) {
                return (void *)p;
            }
            p++;
            n--;
        }
    }
    return NULL;
}

s32 func_00007118(const char *s) {
    s32 len = 0;
    if (s == NULL) {
        return 0;
    }
    while (*s++ != '\0') {
        len++;
    }
    return len;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000714C);

INCLUDE_ASM("nonmatchings/sysmem", Kprintf);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugWrite);

s32 sceKernelRegisterDebugWrite(s32 arg0) {
    D_0000C830 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugRead);

s32 sceKernelRegisterDebugRead(s32 arg0) {
    D_0000C834 = arg0;
    return 0;
}

s32 sceKernelDebugEcho(void) {
    return D_0000C518;
}

s32 sceKernelDebugEchoSet(s32 arg0) {
    D_0000C518 = arg0;
    return arg0;
}

void sceKernelRegisterAssertHandler(s32 arg0) {
    D_0000C838 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceKernelRegisterAssertHandler(s32 arg0) {
    D_0000FB80 = arg0;
}
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BAD0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BDF8);

INCLUDE_ASM("nonmatchings/sysmem", func_00007CB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BAD8);
#endif

#if FW_VERSION >= 201
void sceKernelRegisterAssertHandler(s32 arg0) {
    D_0000FC38 = arg0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelAssert);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_FE707FDF);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_50F61D8A);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_DB83A952);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", atob);
#endif

#if FW_VERSION >= 250
void bcmp(s32 arg0, s32 arg1, s32 arg2) {
    memcmp(arg0, arg1, arg2);
}

void bcopy(s32 arg0, s32 arg1) {
    memmove(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/sysmem", bzero);

INCLUDE_ASM("nonmatchings/sysmem", toupper);

INCLUDE_ASM("nonmatchings/sysmem", tolower);

INCLUDE_ASM("nonmatchings/sysmem", look_ctype_table);

M2C_UNK *get_ctype_table(void) {
    return &D_0000F8DD;
}

INCLUDE_ASM("nonmatchings/sysmem", index);

INCLUDE_ASM("nonmatchings/sysmem", __udivmoddi4);

INCLUDE_ASM("nonmatchings/sysmem", __udivdi3);

INCLUDE_ASM("nonmatchings/sysmem", __umoddi3);

INCLUDE_ASM("nonmatchings/sysmem", memchr);

INCLUDE_ASM("nonmatchings/sysmem", memcmp);

INCLUDE_ASM("nonmatchings/sysmem", memcpy);

INCLUDE_ASM("nonmatchings/sysmem", memmove);

INCLUDE_ASM("nonmatchings/sysmem", memset);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F8DC);

INCLUDE_ASM("nonmatchings/sysmem", prnt);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F988);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00012200);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00013064);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysmem", D_00012570);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/sysmem", D_00012A6C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysmem", D_00012224);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/sysmem", D_00012850);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysmem", D_00012664);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F990);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", pseudo_fcvt);

INCLUDE_ASM("nonmatchings/sysmem", rindex);

INCLUDE_ASM("nonmatchings/sysmem", sprintf);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00009AE8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", func_00009B1C);

INCLUDE_ASM("nonmatchings/sysmem", strcat);

INCLUDE_ASM("nonmatchings/sysmem", strchr);

INCLUDE_ASM("nonmatchings/sysmem", strcmp);

u8 *strcpy(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/sysmem", strcspn);

INCLUDE_ASM("nonmatchings/sysmem", strtol);

INCLUDE_ASM("nonmatchings/sysmem", strtoul);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", atob);

INCLUDE_ASM("nonmatchings/sysmem", func_0000B170);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", strncmp);

INCLUDE_ASM("nonmatchings/sysmem", strncpy);

INCLUDE_ASM("nonmatchings/sysmem", strnlen);

INCLUDE_ASM("nonmatchings/sysmem", strlen);

INCLUDE_ASM("nonmatchings/sysmem", strrchr);

INCLUDE_ASM("nonmatchings/sysmem", strpbrk);

INCLUDE_ASM("nonmatchings/sysmem", strspn);

INCLUDE_ASM("nonmatchings/sysmem", strstr);

INCLUDE_ASM("nonmatchings/sysmem", strtok_r);

INCLUDE_ASM("nonmatchings/sysmem", strtok);

INCLUDE_ASM("nonmatchings/sysmem", wmemclear);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheInvalidateRange);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForUser_B83A1E76);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheInvalidateRange);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockUpdate);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockResult);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5Digest);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockInit);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockUpdate);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockResult);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1Digest);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockInit);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMt19937Init);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMt19937UInt);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterRtcFunc);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelReleaseRtcFunc);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 sceKernelRegisterLibcRtcFunc(s32 arg0, s32 arg1, s32 arg2) {
    D_00013908 = arg0;
    D_0001390C = arg1;
    D_00013910 = arg2;
    return 0;
}

s32 sceKernelReleaseLibcRtcFunc(void) {
    D_00013908 = 0;
    D_0001390C = 0;
    D_00013910 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcClock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcTime);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcGettimeofday);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelRtcGetTick);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGzipDecompress);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGzipGetInfo);

s32 sceKernelGzipGetCompressedData(s32 arg0) {
    void *sp0;
    return (sceKernelGzipGetInfo(arg0, 0, 0, 0, 0, &sp0) < 0) ? 0 : sp0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGzipIsValid);

s32 sceKernelGzipGetName(s32 arg0) {
    void *sp0;
    return (sceKernelGzipGetInfo(arg0, 0, &sp0, 0, 0, 0) < 0) ? 0 : sp0;
}

s32 sceKernelGzipGetComment(s32 arg0) {
    void *sp0;
    return (sceKernelGzipGetInfo(arg0, 0, 0, &sp0, 0, 0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION < 150
s32 func_00007A38(s32 arg0, s32 arg1) {
    D_0000C83C = arg0;
    D_0000C840 = arg1;
    return 0;
}

s32 sceKernelDipsw(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000C83C >> arg0) & 1;
    }
    return var_a0;
}

s32 sceKernelDipswAll(void) {
    return D_0000C83C;
}

s32 sceKernelDipswSet(u32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80020001;
    if (arg0 < 0x20U) {
        temp_v0 = D_0000C83C | (1 << arg0);
        D_0000C83C = temp_v0;
        var_v1 = temp_v0;
    }
    return var_v1;
}

s32 sceKernelDipswCpTime(void) {
    return D_0000C840;
}

s32 sceKernelSm1RegisterOperations(s32 arg0) {
    D_0000C844 = arg0;
    return 0;
}

s32 sceKernelSm1ReferOperations(void) {
    return D_0000C844;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00007AE4);

INCLUDE_ASM("nonmatchings/sysmem", func_00007B28);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysmemIsValidAccess);

s32 sceKernelIsValidUserAccess(s32 arg0, s32 arg1, s32 arg2) {
    return sceKernelSysmemIsValidAccess(arg0, arg1, 2, arg2) == 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00008F38);

INCLUDE_ASM("nonmatchings/sysmem", func_0000916C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000092F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_000095C0);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemCheckCtlBlk);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000EBD0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EBEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/sysmem", D_0000EC90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECAC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00012A80);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012AC8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012B10);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012B78);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012BCC);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C38);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C80);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C98);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C9C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelShowBlockList);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemDump);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECFC);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00009260);

INCLUDE_ASM("nonmatchings/sysmem", func_000092D0);

INCLUDE_ASM("nonmatchings/sysmem", func_000093E8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/sysmem", D_00012EAC);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EB8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EE0);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EE4);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 350)
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemDumpBlock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemDumpTail);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000AA28(s32 arg0, s32 arg1) {
    D_0000FB84 = arg0;
    D_0000FB88 = arg1;
    return 0;
}

s32 sceKernelDipsw(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000FB84 >> arg0) & 1;
    }
    return var_a0;
}

s32 sceKernelDipswAll(void) {
    return D_0000FB84;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswSet);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswClear);

s32 sceKernelDipswCpTime(void) {
    return D_0000FB88;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/sysmem", sceKernelIsToolMode);

s32 sceKernelIsDevelopmentToolMode(void) {
    return __builtin_allegrex_ext(D_0000FB84, 0x1E, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelSm1RegisterOperations(s32 arg0) {
    D_0000FB8C = arg0;
    return 0;
}

s32 sceKernelSm1ReferOperations(void) {
    return D_0000FB8C;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000AAD8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000AB74);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintf);

INCLUDE_ASM("nonmatchings/sysmem", Kprintf);

s32 sceKernelGetDebugPutchar(void) {
    return D_0000FB90;
}

void sceKernelRegisterDebugPutchar(s32 arg0) {
    D_0000FB90 = arg0;
}

void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1) {
    D_0000F860 = arg0;
    D_0000F864 = arg1;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugWrite);

s32 sceKernelRegisterDebugWrite(s32 arg0) {
    D_0000FB94 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugRead);

s32 sceKernelRegisterDebugRead(s32 arg0) {
    D_0000FB98 = arg0;
    return 0;
}

s32 sceKernelDebugEcho(void) {
    return D_0000F868;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000AD04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_0000AD04(s32 arg0, s32 arg1) {
    D_0000FC3C = arg0;
    D_0000FC40 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipsw);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 sceKernelDipsw(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000FC3C >> arg0) & 1;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswAll);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 sceKernelDipswAll(void) {
    return D_0000FC3C;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswLow32);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswHigh32);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswSet);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDipswClear);

s32 sceKernelDipswCpTime(void) {
    return D_0000FC40;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIsToolMode);

s32 sceKernelIsDevelopmentToolMode(void) {
    return __builtin_allegrex_ext(D_0000FC3C, 0x1E, 1);
}
#endif

#if FW_VERSION >= 250
s32 sceKernelIsUMDMode(void) {
    func_0000C690();
    return D_000109D4 == 0;
}

s32 sceKernelIsDVDMode(void) {
    func_0000C690();
    return D_000109D4;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSm1RegisterOperations);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelSm1RegisterOperations(s32 arg0) {
    D_0000FC44 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 sceKernelSm1ReferOperations(void) {
    return D_0000FC44;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000ADF8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", func_0000C690);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000CF10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000C6EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000AE94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintf);

INCLUDE_ASM("nonmatchings/sysmem", Kprintf);
#endif

#if FW_VERSION >= 270
s32 sceKernelGetDebugPutchar(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00013688 == 0) {
        var_v0 = D_00013EB8;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 sceKernelGetDebugPutchar(void) {
    return D_0000FC48;
}
#endif

#if FW_VERSION >= 270
void sceKernelRegisterDebugPutchar(s32 arg0) {
    D_00013EB8 = arg0;
    D_00013688 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void sceKernelRegisterDebugPutchar(s32 arg0) {
    D_0000FC48 = arg0;
}
#endif

#if FW_VERSION >= 270
void sceKernelRegisterDebugPutcharByBootloader(s32 arg0) {
    if (D_00013688 != 0) {
        D_00013EB8 = arg0;
    }
}
#endif

#if FW_VERSION >= 201
void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1) {
    D_0000F8B0 = arg0;
    D_0000F8B4 = arg1;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/sysmem", func_0000E3C4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugWrite);

s32 sceKernelRegisterDebugWrite(s32 arg0) {
    D_0000FC4C = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugRead);

s32 sceKernelRegisterDebugRead(s32 arg0) {
    D_0000FC50 = arg0;
    return 0;
}

s32 sceKernelDebugEcho(void) {
    return D_0000F8B8;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDebugEchoSet);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelDebugEchoSet(s32 arg0) {
    D_0000F868 = arg0;
    return arg0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", module_bootstart);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000DDAC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000DEE0);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000E08C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00009498);

INCLUDE_ASM("nonmatchings/sysmem", func_00009554);

s32 func_00009610(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0000A6E4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0000A734;
    return 2;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000992C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 280)
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemInit);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000DFD8);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000E368);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF10);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF1C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF60);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF88);

INCLUDE_ASM("nonmatchings/sysmem", func_00009B8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000BFA8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_00009E40);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000A58C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000A610);

INCLUDE_ASM("nonmatchings/sysmem", func_0000A6C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000BE7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000C02C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetSysMemoryInfo);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetSysmemIdList);
#endif

#if FW_VERSION >= 250
s32 sceKernelSysMemRealMemorySize(void) {
    return D_00010CBC;
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysmem", D_00010104);

INCLUDE_RODATA("nonmatchings/sysmem", D_00010120);

INCLUDE_RODATA("nonmatchings/sysmem", D_00010138);

INCLUDE_RODATA("nonmatchings/sysmem", D_0001014C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemMemSize);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemMaxFreeMemSize);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSysMemTotalFreeMemSize);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetSysMemoryInfo);

s32 sceKernelDeci2pRegisterOperations(s32 arg0) {
    D_0000C848 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelDeci2pRegisterOperations(s32 arg0) {
    D_0000FBA0 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 150
s32 sceKernelDeci2pReferOperations(void) {
    return D_0000C848;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelDeci2pReferOperations(void) {
    return D_0000FBA0;
}
#endif

#if FW_VERSION < 150
s32 sceKernelGetMEeDramSaveAddr(void) {
    return D_0000C888;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelGetMEeDramSaveAddr(void) {
    return D_0000FBE0;
}
#endif

#if FW_VERSION < 150
s32 sceKernelGetAWeDramSaveAddr(void) {
    return D_0000C888 + 0x200000;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/sysmem", func_0000A8CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelGetAWeDramSaveAddr(void) {
    return D_0000FBE0 + 0x200000;
}
#endif

#if FW_VERSION == 152
s32 sceKernelDevkitVersion(void) {
    return 0x01050200;
}
#endif

#if FW_VERSION == 151
s32 sceKernelDevkitVersion(void) {
    return 0x01050100;
}
#endif

#if FW_VERSION == 150
s32 sceKernelDevkitVersion(void) {
    return 0x01050001;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceKernelGetSystemStatus(void) {
    return D_0000FB9C;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetSystemStatus);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C778);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C834);
#endif

#if FW_VERSION < 150
s32 func_0000A5D0(s32 arg0) {
    return (arg0 & 0x1FFFFFFF) | (g_MemPartKernel->addr & 0xE0000000);
}

s32 func_0000A5FC(s32 arg0) {
    return (arg0 & 0x1FFFFFFF) | (g_MemPartKernel->addr & 0xE0000000);
}
#endif

#if FW_VERSION >= 201
s32 sceKernelDeci2pRegisterOperations(s32 arg0) {
    D_0000FC58 = arg0;
    return 0;
}

s32 sceKernelDeci2pReferOperations(void) {
    return D_0000FC58;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetMEeDramSaveAddr);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 sceKernelGetMEeDramSaveAddr(void) {
    return D_0000FC90;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetAWeDramSaveAddr);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 sceKernelGetAWeDramSaveAddr(void) {
    return D_0000FC90 + 0x200000;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetMEeDramSaveSize);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetAWeDramSaveSize);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDevkitVersion);
#endif

#if FW_VERSION == 271
s32 sceKernelDevkitVersion(void) {
    return 0x02070110;
}
#endif

#if FW_VERSION == 270
s32 sceKernelDevkitVersion(void) {
    return 0x02070010;
}
#endif

#if FW_VERSION == 260
s32 sceKernelDevkitVersion(void) {
    return 0x02060010;
}
#endif

#if FW_VERSION == 250
s32 sceKernelDevkitVersion(void) {
    return 0x02050010;
}
#endif

#if FW_VERSION == 201
s32 sceKernelDevkitVersion(void) {
    return 0x02000010;
}
#endif

#if FW_VERSION >= 201
s32 sceKernelGetSystemStatus(void) {
    return D_0000FC54;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetSystemStatus);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetUsersystemLibWork);

s32 SysMemForKernel_EF2EE8C1(void) {
    return D_0000FF24;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysmem", func_0000EB8C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/sysmem", func_0000ED8C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000EFA0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F06C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000C6AC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C768);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", func_0000F4BC);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F53C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackInvalidateAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F578);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheInvalidateAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F5C4);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackRange);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F6A8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackInvalidateRange);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F78C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F798);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F87C);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_B83A1E76);

INCLUDE_ASM("nonmatchings/sysmem", func_0000EEB0);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheProbe);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F8D8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheReadTag);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F91C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F944);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheProbeRange);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheInvalidateAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FA64);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FA70);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FB40);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheProbe);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FB9C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheReadTag);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FBE0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FC08);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FC10);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FCB0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FD38);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FD70);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FDE8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FF50);

INCLUDE_ASM("nonmatchings/sysmem", func_000101F0);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetGPI);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetGPO);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetGPO);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetGPIMask);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetGPOMask);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetPTRIG);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetPTRIG);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetPTRIGMask);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPutUserLog);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelRegisterUserLogHandler);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDeflateDecompress);

INCLUDE_ASM("nonmatchings/sysmem", func_000105C0);

INCLUDE_ASM("nonmatchings/sysmem", func_000105DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00010658);

INCLUDE_ASM("nonmatchings/sysmem", func_00010698);

INCLUDE_ASM("nonmatchings/sysmem", func_000106F4);

INCLUDE_ASM("nonmatchings/sysmem", func_000106F8);

INCLUDE_ASM("nonmatchings/sysmem", func_000108AC);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelLzrcDecode);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", setjmp);

INCLUDE_ASM("nonmatchings/sysmem", longjmp);

INCLUDE_ASM("nonmatchings/sysmem", func_0000E11C);

INCLUDE_ASM("nonmatchings/sysmem", wmemset);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C824);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C88C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", suspendIntr);

INCLUDE_ASM("nonmatchings/sysmem", resumeIntr);

INCLUDE_ASM("nonmatchings/sysmem", resumeIntrWithSync);

#if FW_VERSION < 201
s32 func_0000A6B4(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_0000C994(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_0000C99C);

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/sysmem", D_00012EF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012FF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00013040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C990);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CEE0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F240);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C9A8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA24);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA84);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CFF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F290);
#endif
