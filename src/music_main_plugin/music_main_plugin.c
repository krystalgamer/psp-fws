#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000030);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000000B8);

INCLUDE_ASM("nonmatchings/music_main_plugin", module_start);

s32 module_stop(void) {
    func_00096BB0();
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000168);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098510);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009851C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098528);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098534);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098540);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098550);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098560);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009856C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098578);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098584);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098594);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985A4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098604);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098610);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009861C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098628);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF638);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF644);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF654);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF664);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF670);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF67C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF688);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF698);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF6A8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098630);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009863C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098648);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098654);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098660);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009866C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF700);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF708);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AEB38);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF710);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF71C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF728);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF734);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098678);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098684);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098694);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986AC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986C8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000986F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098704);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009870C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098714);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098720);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098728);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098740);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009875C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098774);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098794);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987D0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000968B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000968D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000968E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096908);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096920);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009693C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096958);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096974);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009698C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000969AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000969CC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098808);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098820);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098840);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098858);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098874);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098890);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098904);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF9D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF9EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA08);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA28);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA40);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFABC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFAE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFB08);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFB28);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098920);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098934);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098948);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0008FD3C);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009895C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098970);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098988);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989A4);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF010);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF028);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF044);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF05C);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989F0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096ACC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A04);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC3C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF0E8);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A14);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A24);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A50);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A68);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A80);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098AB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098AD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098AF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B14);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B34);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B44);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B58);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B70);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098BA8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096C8C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098BC4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE14);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE30);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE68);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE80);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000018C);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000314);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098BE0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096CA8);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000294);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000578);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000005A8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0CC4);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000005A8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000440);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096CD0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000003D0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000050C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000052C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000654);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000068C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000958);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000007D0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000C7C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000828);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000008CC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000A28);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098BE0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000578);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF14);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF48);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000440);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_000005A8(void) {
    func_00011734(D_000A4274);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000005C8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF3EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF404);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF420);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0D40);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0D58);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0D74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000778);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000A18);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000A3C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000AC0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000007B0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C08);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF70);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF460);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0DB4);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0DD4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C30);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C44);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFC4);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0E14);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000007B0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000958);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000C28);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000C7C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C30);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C44);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000D08);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000DD0);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000AB8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000B8C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000C08);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000EA8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000F88);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001010);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000010C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000F6C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000011D8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00000FD8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001178);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000011FC);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001260);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000012CC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001338);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000013D0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000142C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001464);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001524);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000015A8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001628);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000012A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001488);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001548);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000015CC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000164C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001684);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000016F0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000016CC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000013E8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000175C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000175C_v271);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001794);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000185C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001894);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000014A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001780);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000017B8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001880);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000018B8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000018F0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001938);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001988);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001A24);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001AA4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001ADC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000195C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002088);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002134);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000021C0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000021F8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002264);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000022D0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000022F4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000232C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002364);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000023EC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002424);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000245C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000024C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000019AC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001A48);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001AC8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002760);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001B00);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001C50);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001C74);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001D2C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001D98);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002A7C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002B90);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002BFC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002C20);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001DBC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001E1C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001834);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001E40);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001EB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001F34);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001FD8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000207C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000020DC);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002150);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001F10);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001FB4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002058);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000020B8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000212C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000021B0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000225C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000190C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000199C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001A20);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001A64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000021D4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002280);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002F50);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002FD4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000341C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003424);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000342C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002378);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002448);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000248C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002484);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001BDC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000024A8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002578);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002578_v271);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000259C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000025F8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000274C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002770);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002794);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002830);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000028C4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00001FCC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000028E8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000029B8);

void func_000029DC(s32 arg0) {
    scePaf_F47CA1C2(arg0, 0x10002, (s32) &func_00002B30, 0);
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000029E4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000020E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002A08);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002B30);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002B54);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002BB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002C0C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002C80);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002CF4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002D68);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002DDC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002E60);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002F2C);

void func_00002FB0(struct Unk_func_00002FB0_0 *arg0) {
    arg0->unk14 = (s32) (arg0->unk14 & ~0x490);
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002FC4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002FEC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002FF0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003014);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003ED4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003F8C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004014);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004038);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000405C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000040D8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004148);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000030DC);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF504);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF51C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF544);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D30);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D48);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D64);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D84);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096D98);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096DAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096DB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096DC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096DCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096DEC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003168);
#else
void func_00003168(void) {
    D_000A4074->unk18 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003178);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003164);
#endif

#if FW_VERSION >= 282
void func_00003178(void) {
    D_000A4074->unk1C = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000042AC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002764);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003188);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003260);
#endif

#if FW_VERSION == 282
s32 func_00003260(s32 arg0) {
    func_0000C450((s32) D_000A4074, arg0);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003288);
#else
s32 func_00003288(s32 arg0) {
    func_0000A494(D_000A4078, arg0);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000032B0);
#else
s32 func_000032B0(s32 arg0) {
    func_0000C6C4((s32) D_000A4074, arg0, (s32) &func_00002770);
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000032E0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000032E4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000330C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000033E4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003414);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003444);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003470);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003774);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003A10);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003A5C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003AB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E48);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E70);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E84);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096E98);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096EAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096EC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096EDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096EF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F24);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F60);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096F9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096FB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096FD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00096FF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009700C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097028);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097044);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097060);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009707C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097098);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009709C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000970A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000970A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099040);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099044);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000970B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000970B4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003AFC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003B44);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003BB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003BE8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003F84);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004090);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004214);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000042B0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004334);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000433C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00005A60);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00005AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006048);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009781C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097828);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006364);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006458);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000066E4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006718);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000679C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000067E8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006984);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006A4C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006AC8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006C6C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006C84);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006C9C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006CD0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006D04);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006D48);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006EBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097908);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097910);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009792C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097954);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097970);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097994);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000979B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000979D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097A00);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097A2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097A4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097A70);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097A94);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097AA8_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097AC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097AE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097AFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097B18);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097B38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097B50_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097B70);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097B8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097BB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097BCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097BE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097BFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097C14);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097C30);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097C50);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097C6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097C84);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097CA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097CC0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000074D4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000076F8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000076E0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007730);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007790);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007868);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000078A8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000078E8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007A84);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097DC8_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097DD8_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097E00);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097E28);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097E48_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097E68_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097E8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097EB0_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097ED0_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097EF0_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097F10_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097F30_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097F50);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097F70);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097F90);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097FB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097FD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00097FF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009800C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098028);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098044);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098064);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098084);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009809C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000980B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000980CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000980E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098104);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098120);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098138);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098154);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009816C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009817C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009818C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009819C);
#endif

#if FW_VERSION >= 282
s32 func_000032E0(s32 arg0) {
    func_0000C878((s32) D_000A4074, arg0);
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000028DC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00002940);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003308);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003330);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004550);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004740);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004AC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000033E4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003414);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003444);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C68);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C80);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C94);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CAC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF5A4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CB4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CC4);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0EAC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CBC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0054);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CC4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CE4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF5F8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0EF0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0088);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CF0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D0C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF61C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF630);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF63C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF64C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF658);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF660);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D14);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D20);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D40);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF6C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF6E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003494);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003798);

void func_00003A34(struct Unk_func_00003A34_0 *arg0) {
    arg0->unk0 = &D_00098D90;
    scePaf_F47CA1C2(arg0->unk8, 0x100002, 0, 0);
    func_00006DC8((s32) arg0);
}

void func_00003A80(struct Unk_func_00003A80_0 *arg0) {
    arg0->unk0 = &D_00098D90;
    scePaf_F47CA1C2(arg0->unk8, 0x100002, 0, 0);
    func_00006DC8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003AD4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003B20);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003B68);

void func_00003BD4(void) {
    D_000A423C->unk10(0xD);
    sceVshCommonGui_441D55D7(0);
    D_000A4234 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003C0C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00003FB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000040BC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00005EBC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00005F30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004240);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000042DC);

s32 func_00004360(void) {
    return 0x102;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D90);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0FA8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098DA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098DB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098DC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098DDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098DF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E04);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B104C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E18);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E30);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E48);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E60);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E78);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098E90);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B10F0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098EA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098EBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098ED0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098EE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098EF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F0C);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B1180);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AF910);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F20);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B11A8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F34);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F50);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098F88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098FA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098FC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098FDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098FF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099014);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099030);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099034);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099038);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009903C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099040);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099044);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099048);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA64);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B03EC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFA6C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000061F0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B03F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0400);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0410);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009904C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC54);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC64);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC84);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC90);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFC9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFCFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD10);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD24);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD60);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFD9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFDB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFDC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFDD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFDE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFDF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE04);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE14_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE14_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE28);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE38);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE58);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFE90);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFEA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFEC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFED8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFEFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF20);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF30);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF48);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF60);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF78);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFF98);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFAC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFC4_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFC4_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000AFFF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0008);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0020);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0038);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B004C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0064);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0080);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0098);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B00B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B00C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B00D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B00EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0104);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0120);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B013C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0158);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0168);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0180);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B01A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B01BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B01DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B01F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B021C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0248);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B0260);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00004368);
#endif

#if FW_VERSION >= 282
void func_00005B6C(void) {
    scePaf_F609FA81(D_000A422C, "music_page_content_select", 0, 0);
    scePaf_F609FA81(D_000A422C, "music_page_background", 0, 0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00005BBC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006174);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006490);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000997EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000997F8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006584);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007D48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006810);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007DD0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007DF8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008038);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000814C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006844);
#endif

#if FW_VERSION >= 282
void func_000068C8(void) {
    if (D_000A4234 != 0) {
        sceVshCommonGui_A0DE7090(0);
        sceVshCommonGui_441D55D7(0);
        sceVshCommonGui_72E652AA(D_000A4234);
        D_000A4234 = 0;
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006914);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006B78);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006BF4);

void func_00006D98(struct Unk_func_00006D98_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00099DB0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_00006DB0(struct Unk_func_00006DB0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00099DB0;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006DC8);

void func_00006DFC(struct Unk_func_00006DFC_0 *arg0) {
    arg0->unk0 = &D_00099DB0;
    scePaf_D05C226F(D_000A422C, arg0->unk4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006E30);

void func_00006E74(struct Unk_func_00006E74_0 *arg0) {
    scePaf_5EBC648F(D_000A422C, arg0->unk4);
    D_000A2FA4 = arg0->unk0->unk8(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00006EBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000998D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000998E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000998FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099924);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009994C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099970);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009998C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000999AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000999D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000999FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099A1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099A40);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099A64);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099A7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099A90);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099AB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099ACC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099AE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B08);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B20);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B40);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B80);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099B9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099BB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099BCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099BE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C00);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C20);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C54);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C70);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B079C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000B1068);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00099C90);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007618);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000076F8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007824);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007874);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000078D4);

void func_000079AC(void) {
    if (D_000A43A4 != 0) {
        scePaf_79493F8F(0, D_000A43A4);
        D_000A43A4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000079EC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007A2C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000093F8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000090DC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000910C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000913C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A260);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00007A84);
#endif

void func_000089C4(void) {
    func_00007A84(1, 0xFFFF);
}

void func_000089E4(void) {
    func_00007A84(0, 0xFFFF);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008A04);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008888);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000088A4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008B64);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000089C0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008C48);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008AF0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008B10);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008B3C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008D4C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008DF8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008ED4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000900C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009060);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000092A8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000090D4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000092D0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000090E8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009348);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009114);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000091C8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000927C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000092CC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000931C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009374);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000981CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000981D0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009430);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000096AC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000970C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000984C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000098D4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009B9C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009C54);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098368);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098380);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000983A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000983CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000983F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098418);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098430);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098454);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098478);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098498);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009849C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000984A0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009D94);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009DF8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00009F18);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A038);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A13C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A240);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A298);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A2F4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A3B8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A3DC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A440);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A5C4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A7A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000984C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000984D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000984F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098508);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098520);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009853C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098548);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009855C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098578);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098590);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000985E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098728_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098744);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098760);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009877C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098798);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000987F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098814);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009882C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009884C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009885C);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098878);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098890);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000988FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098918);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098934_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098944);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_0009895C_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098964);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098984);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989A4_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_000989C4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A824);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000A82C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000ADDC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B418);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B4A4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B538);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B604);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B684);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B738);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000B7A4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BA68);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BBB4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BD58);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BE14);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BF30);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000BF6C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C020);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C05C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C1FC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C474);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C628);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000C914);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000CB34);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000CDC4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000CE44);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000D9AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A88);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098A9C_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098AC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098AE4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000DEA0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000DF04);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E48C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E534);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E5B4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E5D4);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E8D8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E614);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E670);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E6F0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E74C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E7A8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E7B0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E7EC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E844);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E900);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000E9BC);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000EA88);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000EB54);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000EC28);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B00);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098B04);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000F01C);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000F290);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C64);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C74);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098C88);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000F780);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000FBA8);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_0000FFF0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00010114);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098CE0);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_000101B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin", D_00098D00);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00010910);

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00010918);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin", func_000033E4);
#endif

#if FW_VERSION >= 282
void func_00008A7C(void) {
    func_00008D04();
}

INCLUDE_ASM("nonmatchings/music_main_plugin", func_00008A98);
#endif
