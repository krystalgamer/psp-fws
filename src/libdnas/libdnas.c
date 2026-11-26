/* cflags: -O0 */
#include "common.h"
#include "libdnas_decls.h"

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/libdnas", D_000033B8);

INCLUDE_RODATA("nonmatchings/libdnas", D_000033BC);

INCLUDE_RODATA("nonmatchings/libdnas", D_000033D4);

INCLUDE_RODATA("nonmatchings/libdnas", D_000033E8);

INCLUDE_RODATA("nonmatchings/libdnas", D_000033F8);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003408);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003414);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003424);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003434);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003448);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003458);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003468);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003474);

INCLUDE_RODATA("nonmatchings/libdnas", D_000034B4);

INCLUDE_RODATA("nonmatchings/libdnas", D_000034D8);

INCLUDE_RODATA("nonmatchings/libdnas", D_000034DC);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003524);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003528);

INCLUDE_RODATA("nonmatchings/libdnas", D_0000352C);

INCLUDE_RODATA("nonmatchings/libdnas", D_0000354C);

INCLUDE_RODATA("nonmatchings/libdnas", D_0000355C);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003574);
#endif

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_0D560144);

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_CA8B8909);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_F3787AD8);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_BE0998D7);
#endif

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_9FF48DD3);

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_45C1AAF5);

#if FW_VERSION >= 340
void sceDNAS_lib_BE0998D7(void) {
    if (D_000037B0 <= 0) {
        return;
    }
    sceKernelSetEventFlag(D_000037B8, 4U);
    if (D_000037D0 >= 0) {
        sceNetResolverStop(D_000037D0);
    }
    if (D_000037CC >= 0) {
        sceNetInetSocketAbort(D_000037CC);
    }
    if (D_000037B4 >= 0) {
        sceKernelWaitThreadEnd(D_000037B4, NULL);
        sceNetFreeThreadinfo(D_000037B4);
        sceKernelTerminateDeleteThread(D_000037B4);
        D_000037B4 = -1;
    }
    if (D_000037BC >= 0) {
        sceKernelDeleteEventFlag(D_000037BC);
        D_000037BC = -1;
    }
    if (D_000037B8 >= 0) {
        sceKernelDeleteEventFlag(D_000037B8);
        D_000037B8 = -1;
    }
    sceDNASCore_lib_D5E80301();
    func_00002888((s32) &D_000037B4);
    D_000037B0 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_A646E771);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_6929100C);
#else
INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_2D424791);

INCLUDE_ASM("nonmatchings/libdnas", sceDNAS_lib_79528BDB);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libdnas", func_0000045C);

INCLUDE_ASM("nonmatchings/libdnas", func_000004E8);

INCLUDE_ASM("nonmatchings/libdnas", func_000009C4);

INCLUDE_ASM("nonmatchings/libdnas", func_00000A54);

INCLUDE_ASM("nonmatchings/libdnas", func_00000AD4);

INCLUDE_ASM("nonmatchings/libdnas", func_00000B5C);

INCLUDE_ASM("nonmatchings/libdnas", func_00000BC4);

INCLUDE_ASM("nonmatchings/libdnas", func_00000C68);

INCLUDE_ASM("nonmatchings/libdnas", func_00000CB0);

INCLUDE_ASM("nonmatchings/libdnas", func_00000D50);

INCLUDE_ASM("nonmatchings/libdnas", func_00000F84);

INCLUDE_ASM("nonmatchings/libdnas", func_00001044);

INCLUDE_ASM("nonmatchings/libdnas", func_00001114);

INCLUDE_ASM("nonmatchings/libdnas", func_000011B8);

INCLUDE_ASM("nonmatchings/libdnas", func_0000152C);

INCLUDE_ASM("nonmatchings/libdnas", func_00001780);

INCLUDE_ASM("nonmatchings/libdnas", func_000018E0);

INCLUDE_ASM("nonmatchings/libdnas", func_00001A7C);

INCLUDE_ASM("nonmatchings/libdnas", func_00001C1C);

INCLUDE_ASM("nonmatchings/libdnas", func_00001CB4);

INCLUDE_ASM("nonmatchings/libdnas", func_00001DAC);

INCLUDE_ASM("nonmatchings/libdnas", func_00001E44);
#else
INCLUDE_ASM("nonmatchings/libdnas", func_0000079C);

INCLUDE_ASM("nonmatchings/libdnas", func_00000804);

INCLUDE_ASM("nonmatchings/libdnas", func_000008F4);

INCLUDE_ASM("nonmatchings/libdnas", func_00000AA8);

INCLUDE_ASM("nonmatchings/libdnas", func_00000C08);

INCLUDE_ASM("nonmatchings/libdnas", func_00000CE0);

INCLUDE_ASM("nonmatchings/libdnas", func_00000DF0);

INCLUDE_ASM("nonmatchings/libdnas", func_00000EBC);

INCLUDE_ASM("nonmatchings/libdnas", func_00000F8C);

INCLUDE_ASM("nonmatchings/libdnas", func_00001098);

INCLUDE_ASM("nonmatchings/libdnas", func_00001428);

INCLUDE_ASM("nonmatchings/libdnas", func_00001520);

INCLUDE_ASM("nonmatchings/libdnas", func_000015E8);

INCLUDE_ASM("nonmatchings/libdnas", func_00001698);

INCLUDE_ASM("nonmatchings/libdnas", func_00001734);

INCLUDE_ASM("nonmatchings/libdnas", func_000018B0);

INCLUDE_ASM("nonmatchings/libdnas", func_000019CC);

INCLUDE_ASM("nonmatchings/libdnas", func_00001A28);

INCLUDE_ASM("nonmatchings/libdnas", func_00001A58);

INCLUDE_ASM("nonmatchings/libdnas", func_00001AFC);

INCLUDE_ASM("nonmatchings/libdnas", func_00001CF4);

INCLUDE_ASM("nonmatchings/libdnas", func_000021D4);

INCLUDE_ASM("nonmatchings/libdnas", func_00002464);

INCLUDE_ASM("nonmatchings/libdnas", func_00002758);

INCLUDE_ASM("nonmatchings/libdnas", func_00002888);

INCLUDE_ASM("nonmatchings/libdnas", func_00002908);

INCLUDE_ASM("nonmatchings/libdnas", func_00002B44);

INCLUDE_ASM("nonmatchings/libdnas", func_00002C38);

INCLUDE_ASM("nonmatchings/libdnas", func_00002D84);

INCLUDE_ASM("nonmatchings/libdnas", func_00002E78);
#endif

INCLUDE_ASM("nonmatchings/libdnas", func_00002F30);

INCLUDE_RODATA("nonmatchings/libdnas", D_00003690);
