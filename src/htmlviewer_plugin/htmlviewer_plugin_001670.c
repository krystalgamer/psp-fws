/* cflags: -Os */
#include "common.h"
#include "htmlviewer_plugin_decls.h"

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001670);
#endif

#if FW_VERSION == 282
void func_00001670(void) {
    s32 temp_v0;
    s32 temp_v0_3;
    struct Unk_func_00001670_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00006FA0);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkA4(1);
            temp_v0_2->unkBC(1);
            temp_v0_2->unkC8(1);
        }
    }
    temp_v0_3 = _Znwj(4);
    _ZN3paf6ModuleC1EPKcS2_i(temp_v0_3, &D_00006FB0, 0, 0);
    D_000080A0 = temp_v0_3;
    if ((sceNetResolverInit() >= 0) && (sceHttpInit(0x25800U) >= 0) && (sceHttpsInit(0, NULL, NULL, NULL) >= 0)) {
        if (sceHttpsLoadDefaultCert(0U, 0U) >= 0) {
            sceHttpLoadSystemCookie();
        }
    }
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001760);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001840);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001890);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000022F8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000018EC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000024F0);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001A1C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001B98);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_0000142C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_0000167C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001B94);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002178);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002D78);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002E0C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002E78);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000022A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000023D8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000024AC);
#endif

#if FW_VERSION < 300
void func_000024AC(void) {
    func_00003980(1);
    _ZN3vsh12BusyIcon_IncEv();
    InputDevice_PspPad_Lock();
    Job_Start(0, &func_000018EC, 0, -1, -1, &func_00001A1C);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000024FC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002614);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_000026F8(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00008DB0);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *), 0xC)(0, &func_00002764, 0, &func_00002614);
        }
    }
    func_000039B0(1);
    InputDevice_PspPad_Unlock();
    sceKernelSetEventFlag(D_0000A58C, 8U);
}
#endif

#if FW_VERSION < 300
void func_000026F8(void) {
    s32 temp_v0;
    struct Unk_func_000026F8_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00007110);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkC(0, &func_00002764, 0, &func_00002614);
        }
    }
    func_000039B0(1);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002764);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_0000278C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000278C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    D_000066F4 = 0;
    temp_v0 = _ZN3paf4View4FindEPKc(&D_00004FF0);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_000066F4 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}

void func_000021A0(s32 arg0) {
    func_000044A4(arg0);
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000278C(void) {
    s32 temp_v0;
    struct Unk_func_0000278C_temp_v0_2 *temp_v0_2;

    D_000081C8 = 0;
    temp_v0 = _ZN3paf4View4FindEPKc(&D_00006E34);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_000081C8 = temp_v0_2->unk2C();
        }
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_000027E8(void) {
    func_00005014();
    InputDevice_PspPad_Unlock();
    sceKernelSetEventFlag(D_0000A58C, 0x20U);
}
#endif

#if FW_VERSION == 282
void func_000027E8(void) {
    func_00005014();
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0000280C(void) {
    func_000050D0();
    func_0000465C();
}
#endif

#if FW_VERSION < 330
void func_0000280C(void) {
    func_000050D0();
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001C9C);
#endif
