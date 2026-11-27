#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106DCC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106DE4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106E1C);

void func_00106E54(struct Unk_func_00106E54_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 == 0) {

    } else {
        func_000D0C18(temp_v0);
    }
}

s32 func_00106E84(struct Unk_func_00106E84_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1C;
    if (temp_v0 != 0) {
        var_v1 = func_000C5EAC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106EBC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106ED4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AD534);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106F04);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106F18);

void _ZN3paf14PhAppearXmItem20SetDefaultLabelColorERK4vec4(struct Unk_scePaf_D4C6CC7A_0 *arg0) {
    D_001A7CC0.unk0 = (s32) arg0->unk0;
    D_001A7CC0.unk4 = (s32) arg0->unk4;
    D_001A7CC0.unk8 = (s32) arg0->unk8;
    D_001A7CC0.unkC = (s32) arg0->unkC;
}

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C1F8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C290);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00106F7C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010770C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010832C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001087BC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00108C54);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00108D98);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00108EF0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00109150);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00109420);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_106DCC", func_001159A0);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001096C4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00109B80);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190800);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190804);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190808);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019080C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190810);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190814);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190818);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00109DAC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00109E9C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010A1B8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010A3C8);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116A28);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116C38);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116F98);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00117440_v340);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001176CC);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010A514);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010A95C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C53C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C540);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C544);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C548);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C54C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C550);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C554);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C558);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C55C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E4F4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130B1C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C560);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C564);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C568);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C56C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C570);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001A7790);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C574);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C578);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C57C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C580);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C584);

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C588);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130B48);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130B4C);
#endif

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C58C);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C590);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C594);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C598);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C59C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5A0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5A4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5A8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5AC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5B0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5B4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E54C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E550);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E554);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5B8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5BC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5C0);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5C4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5C8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5CC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5D4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5D8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5DC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5E0);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C1F4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5E4);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5E8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5EC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5F0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5F4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5F8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C5FC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C600);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C604);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C608);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C60C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C610);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C614);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C618);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C61C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C620);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C624);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130BDC);
#endif

#if FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C628);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C62C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001900D0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C630);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C634);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C638);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C63C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C640);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C644);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C648);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C64C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C650);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C654);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C658);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C65C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C660);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001A7874);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001A78B8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001A78D4);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C274);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C2A0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C2BC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019B0AC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019B0D8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019B0F4);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019A0DC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019A108);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019A124);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019660C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00196638);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00196654);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00194AEC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00194B18);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00194B34);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190A14);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190A40);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190A5C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190104);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190130);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019014C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF70);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF9C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EFB8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011C770);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011C79C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011C7B8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E5F0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E61C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011E638);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B16DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130C18);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00130C44);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000ADE50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000ADF4C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C664);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C690);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019C6AC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010B33C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010B438);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010B918);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010B9D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B1D20);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B1E78);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B20C4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B221C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B27D0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B2824);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B297C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B2AE4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B2C3C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B2D94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AE478);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AE5D0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AE7D4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AE92C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AEE50);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AEFA8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AF110);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AF268);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000AF3C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010BB2C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010BD78);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010BED0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010C5A4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010C5F8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010C750);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010C8B8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010CA10);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010CB68);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010CCBC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B36D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010D4A8);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010D568);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B4678);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B0A24);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B0AC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010E448);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011D20C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FA74);
#else
void func_0010FA74(struct Unk_func_0010FA74_0 *arg0, struct Unk_func_0010FA74_1 *arg1) {
    arg0->unk14F0 = (s32) arg1->unk0;
    arg0->unk14F4 = (s32) arg1->unk4;
    arg0->unk14F8 = (s32) arg1->unk8;
    arg0->unk14FC = (s32) arg1->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FA98);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B5D0C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FAFC);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FB50);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FC34);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FE94);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010FFC8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00110650);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011E484);
#else
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00110CD8);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00110D3C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00110DE0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B7210);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00110EF8);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001110AC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011126C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011129C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011140C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011145C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001114FC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001116D0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00111B94);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00111BE4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00111DD8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00111FCC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011206C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011210C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001121AC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B84DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B473C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B4938);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B4B34);
#else
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011224C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001126DC);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00112AE8);

void func_00112B40(void) {
    func_00112AE8(1, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CB80);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00112B60);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001130D8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113820);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001139F0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC88);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC8C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC90);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC94);

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131220);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC98);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CC9C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCA0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCA4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EC2C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCA8);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCAC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCB0);

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013123C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131240);
#endif

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCB4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCB8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCBC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCC0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCC4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCC8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCCC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCD0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCD4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCD8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCDC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCE0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CCE4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113BC8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113D00);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113D7C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113DE4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0010C720);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B6220);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113E28);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00113F58);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00114008);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001140B4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00114158);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011448C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011453C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001145E8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011468C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00114738);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011519C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001155CC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115A00);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115B18);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115BF8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115DC4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115E64);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115F04);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00115FA4);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CA58);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CAF0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CBDC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019AA98);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190AB0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019AC10);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011F128);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019705C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00197068);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019B890);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019A8C0);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019CE48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000BC2E0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000BC380);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011610C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001161AC);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116250);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001162F4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116398);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011643C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001164E0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116584);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116678);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B8AE0);
#else
s32 func_001167F4(s32 arg0) {
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001167FC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116858);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011689C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116904);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116694);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116960);
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001169D8);

void func_00116A60(struct Unk_func_00116A60_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4C;
        if (temp_v0 != 0) {
            func_00116AA0((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116AA0);

s32 func_00116B6C(struct Unk_func_00116B6C_0 *arg0, struct Unk_func_00116B6C_1 *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg0->unk0 == arg1->unk0) {
        if ((arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8)) {
            var_a2 = arg0->unkC != arg1->unkC;
        }
    }
    return var_a2;
}

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_106DCC", func_001168EC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011690C);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B8E04);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B8E4C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019B964);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019BA4C);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019A994);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019AA7C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019AA98);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190AB0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019AC10);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00196EC4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190AB0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011F128);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0019705C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00197068);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001953A4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001912CC);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909BC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001909D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00190AB0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011F128);
#endif

#if FW_VERSION >= 282
s32 func_00116BB8(struct Unk_func_00116BB8_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 == 0) {
        arg0->unk48 = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00116BD8(struct Unk_func_00116BD8_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 != 0) {
        arg0->unk48 = 0;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116BF4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116CE8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116D44);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116E14);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116EE4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00116FB4);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00117084);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00117100);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_0011717C);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001171F8);

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B94C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B97C0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B98DC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000BD830);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000BD90C);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131498);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001314AC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001314C0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001314D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EEE0);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001314E8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001314EC);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131500);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF0C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131514);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131528);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF34);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF48);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011EF5C);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013153C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131548);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131554);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013156C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131578);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131584);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013158C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131594);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315A4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315B4);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315BC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315C8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315D0);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315DC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315EC);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001315F8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131608);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131614);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131620);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131634);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131640);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013165C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131668);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0013167C);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_00131690);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011F0D8);

INCLUDE_RODATA("nonmatchings/paf_106DCC", D_0011F0EC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001316A4);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_106DCC", D_001316B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B97C0);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B98DC);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_000B993C);
#endif

#if FW_VERSION >= 282
s32 func_00117274(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4930 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}

s32 func_001172A0(void) {
    return D_001A4930;
}

s32 func_001172AC(void) {
    return D_001A4930;
}

INCLUDE_ASM("nonmatchings/paf_106DCC", func_001172B8);

INCLUDE_ASM("nonmatchings/paf_106DCC", func_00117338);
#endif
