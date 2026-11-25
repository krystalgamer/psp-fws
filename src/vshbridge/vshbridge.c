/* cflags: -O2 -frename-registers */
#include "common.h"
#include "vshbridge_decls.h"

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/vshbridge", D_00003BB0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_driver_39B14120);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceVshBridge_driver_39B14120(void) {
    sceImpose_driver_9C8C6C81(4);
    sceUmd_4C952ACF(1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceVshBridge_driver_39B14120(void) {
    sceImpose_driver_9C8C6C81(4);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceVshBridge_driver_92A3B940(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_214D3D0A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5D7563E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7C1BD12);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_348BBCF4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_02191D5D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D71E0410);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000B6C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_13AEE247);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F720C299);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000D10);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C63B6D2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_39995897);

s32 sceVshBridge_driver_92A3B940(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003C00);
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5628F0D);
#else
void sceVshBridge_A5628F0D(void) {
    ModuleMgrForKernel_A4370E7C();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_41C54ADF);
#else
void sceVshBridge_41C54ADF(void) {
    ModuleMgrForKernel_91B87FAE();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C9626587);
#else
void sceVshBridge_C9626587(void) {
    ModuleMgrForKernel_F0CAC59E();
}
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C2983C2);

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C949966C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D4213EA);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_33EEEF3E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_AFB59B52);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3A7DAD8C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0E10922A);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A84742F0);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0163A8E7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7C1658F2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CA719C34);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E4E4DA3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_639C3CB3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4A596D2D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5894C339);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0FA48729);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5350C073);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7B67394E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE32CBEF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E5DA5E95);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0867931A);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6CAEB765);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_53BFD101);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E174218C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7EA32357);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_14877197);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5BBB35E4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B27C593F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0D2CEAD2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D120667D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D907B6AA);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B21D7515);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B0FD5916);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D46D4528);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7A63BE73);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61DBA9D5);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_222A18C4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04310D7C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E61C72E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E2DD0A81);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6396ACBD);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9AE8C0AC);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8C440581);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_07EC5661);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7F233A2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58D0939);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CBDA2613);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A7F0E8E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_98B4117E);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_98B4117E(void) {
    LoadExecForKernel_BB28E9B7();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8399A8AA);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_8399A8AA(void) {
    LoadExecForKernel_71A1D738();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_EEFB02BB);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_EEFB02BB(void *arg0, void *arg1) {
    sceKernelLoadExec(arg0, arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E614F45F);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_E614F45F(void) {
    LoadExecForKernel_4D5C75BE();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", func_0000095C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void func_0000095C(void) {
    sceKernelExitGame();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9929DDA5);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_9929DDA5(void) {
    sceKernelExitGame();
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B30A7A02);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FC427071);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E45C872);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E015B063);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A2470ABD);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_48D65527);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4D92785C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8B6CDA8D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2FB66EE1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_56F05CF5);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_800BF85D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FAAC778F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5AAA31CF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_468A5503);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4CCA087A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_990BE92A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8DF139B4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE86EF4A);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7C46DCA);
#else
void sceVshBridge_B7C46DCA(void) {
    LoadExecForKernel_821BE114();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F4873F4D);
#else
void sceVshBridge_F4873F4D(void) {
    LoadExecForKernel_1B97BDB3();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_83528906);
#else
void sceVshBridge_83528906(void) {
    LoadExecForKernel_015DA036();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F35BFB7D);
#else
void sceVshBridge_F35BFB7D(void) {
    LoadExecForKernel_31DF42BF();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_97FB006F);
#else
void sceVshBridge_97FB006F(void) {
    LoadExecForKernel_28D0D249();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_029EF6C9);
#else
void sceVshBridge_029EF6C9(void) {
    LoadExecForKernel_70901231();
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_40716012);
#else
void sceVshBridge_40716012(void) {
    LoadExecForKernel_A3D5E142();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_88DA81A5);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_88DA81A5(void) {
    LoadExecForKernel_62C459E1();
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C1D3AE95);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_C1D3AE95(void) {
    KDebugForKernel_5282DD5E();
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D08C1FBE);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_D08C1FBE(void) {
    KDebugForKernel_EE75658D();
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04AEC74C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_04AEC74C(void) {
    LoadExecForKernel_7B7C47EF();
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_68BE3316);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_68BE3316(void) {
    LoadExecForKernel_4F41E75E();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_88BD8364);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_88BD8364(void) {
    LoadExecForKernel_918782E8();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B8C7406A);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);
#endif

#if FW_VERSION < 282
void LflashFatfmt_B7A424A4(void) {

}
#else
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A34F80E2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A73D1701);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D09ED94);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58090DA);

INCLUDE_ASM("nonmatchings/vshbridge", func_00002D24);
#endif
