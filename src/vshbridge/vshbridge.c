/* cflags: -O2 -frename-registers */
#include "common.h"
#include "vshbridge_decls.h"

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/vshbridge", D_000036AC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_driver_39B14120);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_214D3D0A);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5D7563E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7C1BD12);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_348BBCF4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_02191D5D);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D71E0410);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", func_000009C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_13AEE247);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F720C299);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000980);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C63B6D2);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/vshbridge", D_00003BB0);
#endif

#if FW_VERSION == 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_driver_39B14120);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
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

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceVshBridge_driver_92A3B940(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00002D20);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 sceVshBridge_driver_92A3B940(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61001D64);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A9574AF7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5DA71899);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F4BD7905);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_21FEB14D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BF25C8F3);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_214D3D0A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A5D7563E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7C1BD12);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_520CB18D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CC2994C8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4CA1F6DA);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_348BBCF4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_02191D5D);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B4235201);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_1C4C47E5);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D71E0410);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C81D3C54);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DA9D25);

INCLUDE_ASM("nonmatchings/vshbridge", func_00000B6C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5434B104);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_543DF545);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_13AEE247);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F720C299);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", func_00000D10);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75EFA3D4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_96E6098F);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5C63B6D2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_39995897);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E1941520);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_002381F2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_60C6E226);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3007DFB3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7B85B850);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_35C28163);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_27998D2C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_DFB85AB2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6DDF0045);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_46586131);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_24B92584);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0556CCAE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_38B9DCB1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_DAE3A119);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D4213EA);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_33EEEF3E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_AFB59B52);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3A7DAD8C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C6395C03);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0E10922A);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A84742F0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D307BD9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_22971D45);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_172C990E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9A1BEEE4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C95B9265);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0163A8E7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7C1658F2);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CA719C34);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E4E4DA3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_639C3CB3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4A596D2D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5894C339);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C27161C0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_31B2D587);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_243B7C57);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_815782DB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_65742115);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_ABDF01CC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_72D4B3A8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_316CE7AE);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0FA48729);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_16415246);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5350C073);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2380DC08);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DB43867);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7B67394E);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE32CBEF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E5DA5E95);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4853573E);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0867931A);
#endif

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6CAEB765);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_53BFD101);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E174218C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7EA32357);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE4BA2EB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B472AC68);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75591C45);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3FCFF39E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_925EE68C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B14D3E2D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D8CE03B8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_51CC70F5);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F1267A95);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E192FCAA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_38D115DD);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3EE685DE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C775F34A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2F602CB1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CB003780);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B6E618B8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2E273B01);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0E87EC0C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_82314DEE);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8EF3A0DA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_81FD3FF4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4EC06FA4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_39B499E0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5317A582);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7BB63511);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C11F2846);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D76A0D7);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C86E65DC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FC0975E8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_59343B13);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B98D260C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9BA6BE17);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_69A60766);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A0A10648);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_761A11F1);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5203C2A2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9BBA642D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_336ACD3B);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B840EDB2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BF107306);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_95C9D89F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_24C921AC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FDDE5CA3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_834FF53D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_458D27BF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_74DB2D30);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_08858CBF);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CCF369F3);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_44B266CC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B1A1A24C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_00CD4949);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B62A78F4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_758403DC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4DFE1669);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BC8A6ACB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2403928E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_75A512CC);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A7724D4A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_12701700);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_CE32A06A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_78A4D7E4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_427D6063);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C62E0B0D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_689DC2B0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3E176AD8);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D3C933A0);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FD304180);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_BE38F663);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D717671A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2686B113);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D91D5BB9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F35CE1C8);
#else
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_14877197);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5BBB35E4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B27C593F);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_0D2CEAD2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D120667D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D907B6AA);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B21D7515);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B0FD5916);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D46D4528);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_7A63BE73);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_61DBA9D5);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_222A18C4);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04310D7C);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_4E61C72E);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E2DD0A81);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6396ACBD);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_9AE8C0AC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_274BB6AE);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_8C440581);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_07EC5661);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3B3D9F5D);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7F233A2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58D0939);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 330
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

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_3D54E418);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_1022075A);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_6D24E79B);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F7AE7859);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_03FD7346);
#endif

#if FW_VERSION < 250
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

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_B7C46DCA);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_B7C46DCA(void) {
    LoadExecForKernel_821BE114();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F4873F4D);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_F4873F4D(void) {
    LoadExecForKernel_1B97BDB3();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_83528906);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_83528906(void) {
    LoadExecForKernel_015DA036();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F35BFB7D);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_F35BFB7D(void) {
    LoadExecForKernel_31DF42BF();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_97FB006F);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_97FB006F(void) {
    LoadExecForKernel_28D0D249();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_029EF6C9);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_FB27F59B);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_81B535B2);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_029EF6C9(void) {
    LoadExecForKernel_70901231();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_40716012);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
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

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C1D3AE95);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_C1D3AE95(void) {
    KDebugForKernel_5282DD5E();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D08C1FBE);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_D08C1FBE(void) {
    KDebugForKernel_EE75658D();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_04AEC74C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void sceVshBridge_04AEC74C(void) {
    LoadExecForKernel_7B7C47EF();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_68BE3316);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A34F80E2);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A73D1701);
#endif

#if FW_VERSION == 201
s32 func_000020F8(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00002D20);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58090DA);

INCLUDE_ASM("nonmatchings/vshbridge", func_00002184);
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

#if FW_VERSION < 250
void LflashFatfmt_B7A424A4(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/vshbridge", D_00002D04);

INCLUDE_RODATA("nonmatchings/vshbridge", D_00002D10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_5D09ED94);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C58090DA);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_C9C7BB70);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_F78AA466);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_A8415BEB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_40DAF7AA);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_D5F482CB);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_E7872DB9);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_2BA6DA4D);

INCLUDE_ASM("nonmatchings/vshbridge", sceVshBridge_27AA80A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/vshbridge", func_00002D24);
#endif
