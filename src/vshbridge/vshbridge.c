/* cflags: -O2 -frename-registers */
#include "common.h"
#include "vshbridge_decls.h"

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/vshbridge", D_00003BB0);
#endif

#if FW_VERSION == 100
s32 sceVshBridge_driver_39B14120(void) {
    sceImpose_driver_9C8C6C81(4);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_driver_39B14120);
#endif

#if FW_VERSION == 100
s32 sceVshBridge_driver_92A3B940(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_214D3D0A);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5D7563E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7C1BD12);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_348BBCF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_02191D5D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D71E0410);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", func_00000B6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_13AEE247);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F720C299);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", func_00000D10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C63B6D2);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_39995897);
#endif

#if FW_VERSION != 100
s32 sceVshBridge_driver_92A3B940(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00003C00);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5628F0D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_41C54ADF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C9626587);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C2983C2);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C949966C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D4213EA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_33EEEF3E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_AFB59B52);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3A7DAD8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0E10922A);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5350C073);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7B67394E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE32CBEF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E5DA5E95);

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B21D7515);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B0FD5916);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D46D4528);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7A63BE73);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61DBA9D5);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_222A18C4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04310D7C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E61C72E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E2DD0A81);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6396ACBD);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9AE8C0AC);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8C440581);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_07EC5661);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7F233A2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58D0939);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CBDA2613);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A7F0E8E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_98B4117E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8399A8AA);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_EEFB02BB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E614F45F);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", func_0000095C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9929DDA5);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B30A7A02);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FC427071);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E45C872);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E015B063);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A2470ABD);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_48D65527);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4D92785C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8B6CDA8D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2FB66EE1);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_56F05CF5);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_800BF85D);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FAAC778F);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5AAA31CF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_468A5503);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4CCA087A);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_990BE92A);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8DF139B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE86EF4A);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7C46DCA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F4873F4D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_83528906);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F35BFB7D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_97FB006F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_029EF6C9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_40716012);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_88DA81A5);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_88BD8364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B8C7406A);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);
#endif

#if FW_VERSION == 100
void LflashFatfmt_B7A424A4(void) {

}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C1D3AE95);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D08C1FBE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04AEC74C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_68BE3316);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A34F80E2);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A73D1701);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D09ED94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58090DA);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/vshbridge", func_00002D24);
#endif
