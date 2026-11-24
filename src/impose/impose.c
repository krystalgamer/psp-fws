/* cflags: -O2 -frename-registers */
#include "common.h"
#include "impose_decls.h"

#if FW_VERSION == 100
void func_00000000(u32 arg0) {
    sceKernelSetEventFlag(*D_00018648, arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000001B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000298);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000444);
#endif

#if FW_VERSION == 100
s32 func_000004C4(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_9C8C6C81);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_531C9778);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_810FB7FB);
#endif

#if FW_VERSION != 100
void func_00000000(u32 arg0) {
    sceKernelSetEventFlag(*D_0000F510, arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000028);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000074);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_000000CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000124);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_000064C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_00006C34);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_000073A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000791C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_00007B1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_00007D1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_00007F5C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000819C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_000083BC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_000085DC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_00009CEC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000AFAC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000C26C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000C3D4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000C53C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000C6A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000C80C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000CC0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000D00C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000D40C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000D80C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000DF0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000E60C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000E78C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000E90C);
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F2CC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F2D8);
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F2E4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose", D_00004D00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F2F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_0000017C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_000001FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000374);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000508);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_0000068C);
#endif

#if FW_VERSION != 100
s32 func_0000070C(void) {
    func_000025F0(7);
    func_000025F0(6);
    func_000025F0(3);
    func_000025F0(4);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_9C8C6C81);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_531C9778);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_810FB7FB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImposeSetLanguageMode);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImposeGetLanguageMode);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImposeGetBatteryIconStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00000EEC);
#endif

INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_BDBC42A6);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_C7E36CC7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00000FD8);
#endif

#if FW_VERSION == 100
s32 sceImpose_driver_1B6E3400(void) {
    return M2C_FIELD(D_00018648, s32 *, 0x58);
}
#endif

#if FW_VERSION == 100
s32 sceImpose_driver_B415FC59(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_00018648, s32 *, 0x70);
    M2C_FIELD(D_00018648, s32 *, 0x70) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    sceImpose_driver_C7E36CC7();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceImpose_driver_C7E36CC7(void) {
    if (M2C_FIELD(D_0000F510, s32 *, 0x80) >= 0) {
        M2C_FIELD(D_0000F510, s32 *, 0xBC) = 1;
        func_00000000(8U);
        do {
            sceKernelDelayThread(0x186A0U);
        } while (M2C_FIELD(D_0000F510, s32 *, 0xBC) != 0);
    }
    sceSysEventForKernel_D7D3FDCD(&D_0000F514);
    sceKernelSetEventFlag(M2C_FIELD(D_0000F510, u32 *, 0), 0x80000000U);
    sceKernelWaitThreadEnd(M2C_FIELD(D_0000F510, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(D_0000F510, s32 *, 4));
    sceKernelDeleteEventFlag((s32) M2C_FIELD(D_0000F510, u32 *, 0));
    sceKernelReleaseSubIntrHandler(0x1E, 0x14);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_1AEED8FE);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001764);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001998);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001CFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001D7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001E24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001F2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00001FB0);
#endif

#if FW_VERSION != 100
s32 sceImpose_driver_1B6E3400(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x80);
}
#endif

#if FW_VERSION != 100
s32 sceImpose_driver_B415FC59(void) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(D_0000F510, s32 *, 0x98);
    M2C_FIELD(D_0000F510, s32 *, 0x98) = 0;
    return temp_v0;
}
#endif

#if FW_VERSION != 100
s32 sceImpose_driver_5595A71A(s32 arg0) {
    func_000047EC(arg0 ^ 1, 1);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_0F341BE4);
#endif

#if FW_VERSION != 100
s32 sceImposeSetUMDPopup(s32 arg0) {
    func_000047EC(arg0 ^ 1, 2);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImposeGetUMDPopup);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_381BD9E7);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_9DBCE0C4);
#endif

#if FW_VERSION != 100
s32 sceImpose_driver_7084E72C(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x78);
}
#endif

#if FW_VERSION != 100
s32 sceImpose_9BA61B49(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x7C);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", module_start);
#endif

#if FW_VERSION != 100
s32 syslib_ADF12745(s32 arg0) {
    if (arg0 != 2) {

    } else {
        if (M2C_FIELD(D_0000F510, s32 *, 0x80) < 0) {
            sceDisplaySetHoldMode(arg0);
        }
        sceImpose_driver_C7E36CC7();
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/impose", sceImpose_driver_86924032);

#if FW_VERSION != 100
s32 sceAudioRoutingSetMode(s32 arg0) {
    return func_000048AC(arg0);
}
#endif

#if FW_VERSION != 100
s32 sceAudioRoutingGetMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x4C);
}
#endif

#if FW_VERSION != 100
s32 sceAudioRoutingSetVolumeMode(s32 arg0) {
    return func_00004954(arg0);
}
#endif

#if FW_VERSION != 100
s32 sceAudioRoutingGetVolumeMode(void) {
    return M2C_FIELD(D_0000F510, s32 *, 0x6C);
}
#endif

INCLUDE_RODATA("nonmatchings/impose", D_0000F36C);

INCLUDE_ASM("nonmatchings/impose", func_00002378);

INCLUDE_ASM("nonmatchings/impose", func_000025F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00001650);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_000027AC);
#endif

INCLUDE_ASM("nonmatchings/impose", func_00002B0C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00001D04);
#endif

#if FW_VERSION == 100
void func_00001E08(s32 arg0) {
    if ((arg0 & 0x300000) && (M2C_FIELD(D_00018648, s32 *, 0x58) != 0) && !(arg0 & 0x20000)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_00018648, s32 *, 0x7C) = 0;
            M2C_FIELD(D_00018648, s32 *, 0x74) = (s32) (M2C_FIELD(D_00018648, s32 *, 0x74) | 0x200000);
        }
        M2C_FIELD(D_00018648, s32 *, 0xB4) = 0;
    }
}
#endif

#if FW_VERSION == 100
void func_00001E78(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_00018648, s32 *, 0x40) = 1;
    } else {
        M2C_FIELD(D_00018648, s32 *, 0x40) = 0;
    }
    func_00000000(0x20U);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00001EC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00002008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000024F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00002C5C);
#endif

#if FW_VERSION != 100
void func_00002DC0(s32 arg0) {
    if ((M2C_FIELD(D_0000F510, s32 *, 0x80) != 0) && !(arg0 & 0x20000) && (M2C_FIELD(D_0000F510, s32 *, 0x6C) == 0)) {
        if (arg0 & 0x100000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x100000);
        }
        if (arg0 & 0x200000) {
            M2C_FIELD(D_0000F510, s32 *, 0xA8) = 0;
            M2C_FIELD(D_0000F510, s32 *, 0xA0) = (s32) (M2C_FIELD(D_0000F510, s32 *, 0xA0) | 0x200000);
        }
        M2C_FIELD(D_0000F510, s32 *, 0xF0) = 0;
    }
}
#endif

#if FW_VERSION != 100
void func_00002E2C(s32 arg0) {
    if (arg0 & 0x80000) {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 1;
    } else {
        M2C_FIELD(D_0000F510, s32 *, 0x48) = 0;
    }
    if (M2C_FIELD(D_0000F510, s32 *, 0x9C) != 0) {

    } else {
        func_00000000(0x20U);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00002E88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00002FCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00003500);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_0000358C);
#endif

INCLUDE_ASM("nonmatchings/impose", func_00003A90);

INCLUDE_ASM("nonmatchings/impose", func_00003B40);

INCLUDE_ASM("nonmatchings/impose", func_00003BE8);

INCLUDE_ASM("nonmatchings/impose", func_000040DC);

INCLUDE_RODATA("nonmatchings/impose", D_0000F394);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3AC);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3B8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3C0);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3C8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3D8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F3E8);

INCLUDE_RODATA("nonmatchings/impose", D_0000F400);

INCLUDE_RODATA("nonmatchings/impose", D_0000F410);

INCLUDE_RODATA("nonmatchings/impose", D_0000F41C);

INCLUDE_RODATA("nonmatchings/impose", D_0000F428);

INCLUDE_RODATA("nonmatchings/impose", D_0000F434);

INCLUDE_RODATA("nonmatchings/impose", D_0000F448);

INCLUDE_RODATA("nonmatchings/impose", D_0000F464);

INCLUDE_RODATA("nonmatchings/impose", D_0000F478);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose", D_00004E4C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F490);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F4A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F4AC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose", D_0000F4BC);
#endif

INCLUDE_ASM("nonmatchings/impose", func_000042F0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_000047EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00004870);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_000048AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00004954);
#endif

INCLUDE_ASM("nonmatchings/impose", func_00004A08);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_0000367C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000036A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000036E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_00003C58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose", func_000044CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00004A40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00004AB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00004B58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00005104);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose", func_00005998);
#endif
